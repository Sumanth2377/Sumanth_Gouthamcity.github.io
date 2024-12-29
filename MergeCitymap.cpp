#include <iostream>
#include <vector>
#include <string>

struct WasteItem {
    int weight;
    std::string type;
};

void mergeSort(std::vector<WasteItem>& items, int left, int right, std::vector<WasteItem>& temp) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(items, left, mid, temp);
    mergeSort(items, mid + 1, right, temp);
    
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) temp[k++] = (items[i].weight <= items[j].weight) ? items[i++] : items[j++];
    while (i <= mid) temp[k++] = items[i++];
    while (j <= right) temp[k++] = items[j++];
    for (i = left; i <= right; i++) items[i] = temp[i];
}

void sortWasteItems(std::vector<WasteItem>& items) {
    std::vector<WasteItem> temp(items.size());
    mergeSort(items, 0, items.size() - 1, temp);
}

int main() {
    std::vector<WasteItem> wasteItems = {
        {50, "plastic"}, {20, "paper"}, {30, "metal"}, {10, "organic"}, {40, "plastic"}
    };

    std::cout << "Original waste items:\n";
    for (const auto& item : wasteItems)
        std::cout << "Type: " << item.type << ", Weight: " << item.weight << "kg\n";

    sortWasteItems(wasteItems);

    std::cout << "\nSorted waste items by weight:\n";
    for (const auto& item : wasteItems)
        std::cout << "Type: " << item.type << ", Weight: " << item.weight << "kg\n";

    return 0;
}
