#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

class Node {
public:
    int key;
    std::vector<Node*> fwd;

    Node(int k, int lvl) : key(k), fwd(lvl + 1, nullptr) {}
};

class SkipList {
private:
    int maxLvl, curLvl;
    float p;
    Node* head;

    int randLvl() {
        int lvl = 0;
        while ((float)rand() / RAND_MAX < p && lvl < maxLvl) lvl++;
        return lvl;
    }

public:
    SkipList(int maxLvl, float p) : maxLvl(maxLvl), p(p), curLvl(0) {
        head = new Node(-1, maxLvl);
    }

    void insert(int k) {
        std::vector<Node*> upd(maxLvl + 1);
        Node* curr = head;

        for (int i = curLvl; i >= 0; i--) {
            while (curr->fwd[i] && curr->fwd[i]->key < k) curr = curr->fwd[i];
            upd[i] = curr;
        }

        curr = curr->fwd[0];
        if (!curr || curr->key != k) {
            int lvl = randLvl();
            if (lvl > curLvl) {
                for (int i = curLvl + 1; i <= lvl; i++) upd[i] = head;
                curLvl = lvl;
            }

            Node* newNode = new Node(k, lvl);
            for (int i = 0; i <= lvl; i++) {
                newNode->fwd[i] = upd[i]->fwd[i];
                upd[i]->fwd[i] = newNode;
            }
        }
    }

    bool search(int k) {
        Node* curr = head;
        for (int i = curLvl; i >= 0; i--) {
            while (curr->fwd[i] && curr->fwd[i]->key < k) curr = curr->fwd[i];
        }
        curr = curr->fwd[0];
        return curr && curr->key == k;
    }

    void display() {
        std::cout << "Skip List:\n";
        for (int i = 0; i <= curLvl; i++) {
            Node* curr = head->fwd[i];
            std::cout << "Lvl " << i << ": ";
            while (curr) {
                std::cout << curr->key << " ";
                curr = curr->fwd[i];
            }
            std::cout << std::endl;
        }
    }

    ~SkipList() {
        Node* curr = head;
        while (curr) {
            Node* next = curr->fwd[0];
            delete curr;
            curr = next;
        }
    }
};

int main() {
    srand(static_cast<unsigned int>(time(0)));

    SkipList sl(3, 0.5);
    sl.insert(10); sl.insert(20); sl.insert(30); sl.insert(40); sl.insert(50);

    sl.display();

    int key = 30;
    if (sl.search(key)) std::cout << "Found " << key << std::endl;
    else std::cout << key << " not found." << std::endl;

    return 0;
}

//Used online reference for this to implement
