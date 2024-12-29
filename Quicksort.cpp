#include <iostream>
#include <vector>
#include <string>

struct WasteItem {
    int weight;
    std::string type;
};

class WasteSegregator {
public:
    static void quickSort(std::vector<WasteItem>& items, int low, int high) {
        if (low < high) {
            int pi = partition(items, low, high);
            quickSort(items, low, pi - 1);  // Sort left partition
            quickSort(items, pi + 1, high); // Sort right partition
        }
    }

private:
    static int partition(std::vector<WasteItem>& items, int low, int high) {
        int pivot = items[high].weight;
        int i = low - 1;

        // Move elements smaller than pivot to the left side
        for (int j = low; j < high; j++) {
            if (items[j].weight <= pivot) {
                i++;
                std::swap(items[i], items[j]);
            }
        }
        std::swap(items[i + 1], items[high]);
        return i + 1;
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

    // Sort waste items by weight
    WasteSegregator::quickSort(wasteItems, 0, wasteItems.size() - 1);

    std::cout << "\nSorted waste items by weight:\n";
    for (const auto& item : wasteItems) {
        std::cout << "Type: " << item.type << ", Weight: " << item.weight << "kg\n";
    }

    return 0;
}
