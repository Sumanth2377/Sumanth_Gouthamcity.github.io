#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class WasteTracker {
private:
    unordered_map<string, string> statusMap; // Store area statuses

public:
    void setStatus(const string& area, const string& status) {
        statusMap[area] = status; // Update the status
    }

    string getStatus(const string& area) {
        if (statusMap.find(area) != statusMap.end()) {
            return statusMap[area]; // Return status if area is found
        } else {
            return "Area not found"; // If area is not found
        }
    }

    void showAllStatuses() {
        cout << "Waste Collection Status:\n";
        for (const auto& entry : statusMap) {
            cout << "Area: " << entry.first << ", Status: " << entry.second << "\n";
        }
    }
};

int main() {
    WasteTracker tracker; // Create tracker object for waste collection

    tracker.setStatus("Residential Area", "Collected");
    tracker.setStatus("Market Area", "Missed");
    tracker.setStatus("Electronic City 1", "Scheduled for next collection");

    tracker.showAllStatuses();

    string area = "Market Area";
    cout << "\nStatus of " << area << ": " << tracker.getStatus(area) << "\n";

    return 0;
}
