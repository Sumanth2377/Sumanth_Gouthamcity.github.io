#include <iostream>
#include <vector>

class FenwickTree {
private:
    std::vector<int> tree; /
    int size; 

public:
   
    FenwickTree(int n) : size(n) {
        tree.resize(n + 1, 0);
    }

    void update(int index, int value) {
        while (index <= size) {
            tree[index] += value; 
            index += index & -index; 
        }
    }

    int sum(int index) {
        int total = 0;
        while (index > 0) {
            total += tree[index]; 
            index -= index & -index; 
        }
        return total;
    }
};

int main() {
    std::vector<int> weights = {50, 20, 30, 10, 40}; 
    int n = weights.size();

    FenwickTree fenwickTree(n);

    for (int i = 0; i < n; i++) {
        fenwickTree.update(i + 1, weights[i]); 
    }

    std::cout << "Total weight up to each index:\n";
    for (int i = 1; i <= n; i++) {
        std::cout << "Up to index " << i << ": " << fenwickTree.sum(i) << "kg\n";
    }

    std::cout << "\nUpdating second item by adding 10kg.\n";
    fenwickTree.update(2, 10); 

    std::cout << "Updated total weight:\n";
    for (int i = 1; i <= n; i++) {
        std::cout << "Up to index " << i << ": " << fenwickTree.sum(i) << "kg\n";
    }

    return 0;
}
