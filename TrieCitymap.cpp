#include <iostream>
using namespace std;

class Node {
public:
    Node* c[26];
    bool e;
    Node() { e = false; fill(c, c+26, nullptr); }
};

class Trie {
    Node* root;
public:
    Trie() { root = new Node(); }

    void insert(string w) {
        Node* n = root;
        for (char c : w) {
            int idx = c - 'a';
            if (!n->c[idx]) n->c[idx] = new Node();
            n = n->c[idx];
        }
        n->e = true;
    }

    bool search(string w) {
        Node* n = root;
        for (char c : w) {
            int idx = c - 'a';
            if (!n->c[idx]) return false;
            n = n->c[idx];
        }
        return n->e;
    }

    bool startsWith(string p) {
        Node* n = root;
        for (char c : p) {
            int idx = c - 'a';
            if (!n->c[idx]) return false;
            n = n->c[idx];
        }
        return true;
    }
};

int main() {
    Trie t;
    t.insert("apple");
    t.insert("app");
    cout << (t.search("apple") ? "Found" : "Not Found") << endl;
    cout << (t.search("app") ? "Found" : "Not Found") << endl;
    cout << (t.startsWith("ban") ? "Yes" : "No") << endl;
    return 0;
}
