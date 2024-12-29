#include <iostream>
#include <vector>
#include <string>

struct Item {
    int w;  // weight
    std::string t;  // type
};

class Segregator {
public:
    static void heapSort(std::vector<Item>& v) {
        int n = v.size();
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(v, n, i);
        }
        for (int i = n - 1; i > 0; i--) {
            std::swap(v[0], v[i]);
            heapify(v, i, 0);
        }
    }

private:
    static void heapify(std::vector<Item>& v, int n, int i) {
        int l = 2 * i + 1, r = 2 * i + 2, largest = i;
        if (l < n && v[l].w > v[largest].w) largest = l;
        if (r < n && v[r].w > v[largest].w) largest = r;
        if (largest != i) {
            std::swap(v[i], v[largest]);
            heapify(v, n, largest);
        }
    }
};

int main() {
    std::vector<Item> items = {
        {50, "plastic"},
        {20, "paper"},
        {30, "metal"},
        {10, "organic"},
        {40, "plastic"}
    };

    std::cout << "Original:\n";
    for (const auto& i : items) {
        std::cout << "Type: " << i.t << ", Weight: " << i.w << "kg\n";
    }

    if (!items.empty()) Segregator::heapSort(items);

    std::cout << "\nSorted:\n";
    for (const auto& i : items) {
        std::cout << "Type: " << i.t << ", Weight: " << i.w << "kg\n";
    }

    return 0;
}
