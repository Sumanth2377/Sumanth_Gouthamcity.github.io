#include <iostream>
#include <string>

using namespace std;

struct TreeNode {
    string rule;
    TreeNode* left;
    TreeNode* right;

    TreeNode(const string& r) : rule(r), left(nullptr), right(nullptr) {}
};

class ClassificationTree {
private:
    TreeNode* root = nullptr;

    TreeNode* add(TreeNode* node, const string& rule) {
        if (!node) return new TreeNode(rule);
        if (rule < node->rule) node->left = add(node->left, rule);
        else if (rule > node->rule) node->right = add(node->right, rule);
        return node;
    }

    bool search(TreeNode* node, const string& rule) {
        if (!node) return false;
        if (node->rule == rule) return true;
        return rule < node->rule ? search(node->left, rule) : search(node->right, rule);
    }

    void display(TreeNode* node) {
        if (node) {
            display(node->left);
            cout << node->rule << "\n";
            display(node->right);
        }
    }

public:
    void addRule(const string& rule) { root = add(root, rule); }
    bool searchRule(const string& rule) { return search(root, rule); }
    void displayRules() { display(root); }
};

int main() {
    ClassificationTree tree;
    tree.addRule("Organic Waste");
    tree.addRule("Recyclable - Plastic");
    tree.addRule("Recyclable - Paper");
    tree.addRule("Hazardous - Electronic");

    cout << "Classification Rules:\n";
    tree.displayRules();

    string rule = "Recyclable - Paper";
    cout << "\nSearching for \"" << rule << "\": "
         << (tree.searchRule(rule) ? "Found" : "Not Found") << "\n";

    return 0;
}
