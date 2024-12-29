#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Waste {
    std::string loc, type;
    int wgt;
    bool haz;
};

class Manager {
private:
    std::vector<Waste> inv;

public:
    void addWaste(const std::string& loc, const std::string& type, int wgt, bool haz) {
        inv.push_back({loc, type, wgt, haz});
    }

    void sortByWeight() {
        std::sort(inv.begin(), inv.end(), [](const Waste& a, const Waste& b) {
            return a.wgt < b.wgt;
        });
    }

    void display() {
        for (const auto& w : inv) {
            std::cout << "Loc: " << w.loc
                      << ", Type: " << w.type
                      << ", Wgt: " << w.wgt << "kg"
                      << ", Hazardous: " << (w.haz ? "Yes" : "No") << "\n";
        }
    }
};

int main() {
    Manager m;

    m.addWaste("Market", "organic", 100, false);
    m.addWaste("City", "plastic", 50, false);
    m.addWaste("Industry", "metal", 80, true);

    std::cout << "Original Inventory:\n";
    m.display();

    m.sortByWeight();
    std::cout << "\nSorted by Weight:\n";
    m.display();

    return 0;
}
