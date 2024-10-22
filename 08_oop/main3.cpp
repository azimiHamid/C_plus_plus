// Parameterized Constructor

#include <iostream>
#include <vector>
using namespace std;

class Test {
public:
    string name;
    int id;
    vector<int> scores;

    // Parameterized constructor using initializer list
    Test(string n, int i, vector<int> s)
        : name(n), id(i), scores(s) {
        cout << "Parameterized constructor called!!\n";
    }

    void displayInfo() {
        int totalScore = 0;
        cout << "Testholder ID: " << id << endl;
        cout << "Testholder name: " << name << endl;
        cout << "Testholder scores: ";
        for (size_t i = 0; i < scores.size(); i++) {
            cout << scores[i];
            totalScore += scores[i];
            if (i < scores.size() - 1) cout << ", ";
        }
        cout << endl;
        cout << "Total score: " << totalScore << endl;
    }
    
};


int main() {

    Test testHolder("Hamid", 23, {28, 29, 25, 24});
    testHolder.displayInfo();
    
    return 0;
}