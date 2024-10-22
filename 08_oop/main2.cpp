// Constructor

#include <iostream>
#include <vector>
using namespace std;

class Test {
public:
    string name;
    int id;
    vector<int> scores;

    // default constructor
    // Test() {
    //     name = "___";
    //     id = 0;
    //     scores = {0, 0, 0, 0};
    //     cout << "Default Constructor called!!\n";
    // }

    // Default constructor using initializer list
    Test() 
        : name("___"), id(0), scores{0, 0, 0, 0} {
        cout << "Default constructor called!!\n";
    }

    void displayInfo() {
        cout << "Testholder ID: " << id << endl;
        cout << "Testholder name: " << name << endl;
        cout << "Testholder scores: ";
        for (size_t i = 0; i < scores.size(); i++) {
            cout << scores[i];
            if (i < scores.size() - 1) cout << ", ";
        }
        cout << endl;
    }
    
};


int main() {

    Test testHolder;
    testHolder.displayInfo();
    
    return 0;
}