#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

struct WasteData {
    std::string location;
    std::string type;
    int weight;
    bool isHazardous;
};

class WasteManager {
private:
    std::vector<WasteData> wasteInventory;

public:
    void addWaste(const std::string& loc, const std::string& type, int weight, bool hazard) {
        wasteInventory.push_back({loc, type, weight, hazard});
    }

    void sortByWeight() {
        std::sort(wasteInventory.begin(), wasteInventory.end(), [](const WasteData& a, const WasteData& b) {
            return a.weight < b.weight;
        });
    }

    void displayInventory() {
        for (const auto& waste : wasteInventory) {
            std::cout << "Location: " << waste.location
                      << ", Type: " << waste.type
                      << ", Weight: " << waste.weight << "kg"
                      << ", Hazardous: " << (waste.isHazardous ? "Yes" : "No") << "\n";
        }
    }
};

int main() {
    WasteManager manager;

    manager.addWaste("Market", "organic", 100, false);
    manager.addWaste("City", "plastic", 50, false);
    manager.addWaste("Industry", "metal", 80, true);

    std::cout << "Original Inventory:\n";
    manager.displayInventory();

    manager.sortByWeight();
    std::cout << "\nSorted by Weight:\n";
    manager.displayInventory();

    return 0;
}
