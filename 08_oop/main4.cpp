// Copy Constructor

#include <iostream>
#include <vector>
using namespace std;

class Test {
public:
    string* name;
    int id;
    vector<int> scores;

    Test(string n, int i, vector<int> s) {
        name = new string(n);
        id = i;
        scores = s;
        cout << "------------ Parameterized constructor called!! ------------\n";
    }

    // copy constructor
    Test(const Test& args) {  // Deep copy
        name = new string(*args.name);
        id = args.id;
        scores = args.scores;
        cout << "------------ Copy constructor called!! ------------\n";
    }

    // Destructor to free dynamically allocated memory
    ~Test() {
        delete name;
        cout << "------------ Destructor called! ------------\n";
    }


    void displayInfo() const {
        int totalScore = 0;
        cout << "Testholder ID: " << id << endl;
        cout << "Testholder name: " << *name << endl; // Dereferencing pointer
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
    *testHolder.name = "Hadi";
    testHolder.displayInfo();

    // Demonstrating copy constructor
    Test copiedHolder = testHolder; // Copying testHolder
    *copiedHolder.name = "Ali";
    copiedHolder.displayInfo();
    
    return 0;
}