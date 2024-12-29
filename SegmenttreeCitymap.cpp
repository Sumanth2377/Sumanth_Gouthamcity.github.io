#include <iostream>
#include <vector>

using namespace std;

class SegmentTree {
private:
    vector<int> t; 
    int sz;

    void build(const vector<int>& d, int n, int s, int e) {
        if (s == e) {
            t[n] = d[s]; 
        } else {
            int m = (s + e) / 2;
            build(d, 2 * n + 1, s, m); 
            build(d, 2 * n + 2, m + 1, e); 
            t[n] = t[2 * n + 1] + t[2 * n + 2]; 
        }
    }

    void update(int n, int s, int e, int idx, int v) {
        if (s == e) {
            t[n] = v; 
        } else {
            int m = (s + e) / 2;
            if (s <= idx && idx <= m) {
                update(2 * n + 1, s, m, idx, v); 
            } else {
                update(2 * n + 2, m + 1, e, idx, v); 
            }
            t[n] = t[2 * n + 1] + t[2 * n + 2]; 
        }
    }

    int query(int n, int s, int e, int l, int r) {
        if (r < s || e < l) return 0; 
        if (l <= s && e <= r) return t[n]; 
        int m = (s + e) / 2;
        return query(2 * n + 1, s, m, l, r) + query(2 * n + 2, m + 1, e, l, r); 
    }

public:
    
    SegmentTree(const vector<int>& d) {
        sz = d.size();
        t.resize(4 * sz); 
        build(d, 0, 0, sz - 1); 
    }

    void update(int idx, int v) {
        update(0, 0, sz - 1, idx, v); 
    }

    int query(int l, int r) {
        return query(0, 0, sz - 1, l, r); 
    }
};

int main() {
    vector<int> d = {50, 20, 30, 10, 40, 60, 70}; 
    SegmentTree st(d); 

    cout << "Sum from day 1 to 3: " << st.query(1, 3) << " kg\n"; 

    // Updating waste on day 2
    st.update(2, 25); 

    cout << "Sum after update from day 1 to 3: " << st.query(1, 3) << " kg\n"; // 65

    return 0;
}
