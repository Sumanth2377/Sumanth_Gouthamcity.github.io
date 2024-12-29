#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

struct WasteItem {
    int weight;
    std::string type;
};

int main() {
    std::vector<WasteItem> wasteItems = {
        {50, "plastic"},
        {20, "paper"},
        {30, "metal"},
        {10, "organic"},
        {40, "plastic"}
    };

    std::cout << "Original waste items:\n";
    for (const WasteItem& item : wasteItems) {
        std::cout << "Type: " << item.type << ", Weight: " << item.weight << "kg\n";
    }

    std::sort(wasteItems.begin(), wasteItems.end(), [](const WasteItem& a, const WasteItem& b) {
        return a.weight < b.weight;
    });

    std::cout << "\nSorted waste items by weight:\n";
    for (const WasteItem& item : wasteItems) {
        std::cout << "Type: " << item.type << ", Weight: " << item.weight << "kg\n";
    }

    return 0;
}
