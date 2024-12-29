#include <iostream>
#include <vector>
#include <string>

struct WasteItem {
    int weight;
    std::string type;
};

class WasteSegregator {
public:
    static void heapSort(std::vector<WasteItem>& items) {
        int n = items.size();
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(items, n, i);
        }
        for (int i = n - 1; i > 0; i--) {
            // Move current root (maximum) to end
            std::swap(items[0], items[i]);
            // Call heapify on reduced heap
            heapify(items, i, 0);
        }
    }

private:
    static void heapify(std::vector<WasteItem>& items, int n, int i) {
        int largest = i;        // Initialize largest as root
        int left = 2 * i + 1;   // Left child
        int right = 2 * i + 2;  // Right child
        if (left < n && items[left].weight > items[largest].weight) {
            largest = left;
        }
        if (right < n && items[right].weight > items[largest].weight) {
            largest = right;
        }
        if (largest != i) {
            std::swap(items[i], items[largest]);
            // Recursively heapify the affected sub-tree
            heapify(items, n, largest);
        }
    }
};

int main() {
    // Example waste items
    std::vector<WasteItem> wasteItems = {
        {50, "plastic"},
        {20, "paper"},
        {30, "metal"},
        {10, "organic"},
        {40, "plastic"}
    };
    std::cout << "Original waste items:\n";
    for (const auto& item : wasteItems) {
        std::cout << "Type: " << item.type << ", Weight: " << item.weight << "kg\n";
    }
    // Sorting all the waste items by weight using heap sort
    if (!wasteItems.empty()) {
        WasteSegregator::heapSort(wasteItems);
    }
    std::cout << "\nSorted waste items by weight:\n";
    for (const auto& item : wasteItems) {
        std::cout << "Type: " << item.type << ", Weight: " << item.weight << "kg\n";
    }
    return 0;
}
