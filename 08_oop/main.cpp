// Classes and Objects
// Class ---> private(default),  protected,  public

#include <iostream>
#include <vector>
using namespace std;

class Tea {
private:
    /* private data, only accessable inside the class */
public:

    // Attributes
    string teaName;
    int servings;
    vector<string> ingridients;

    // Methods
    void displayTeaDetails() {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingridients: ";
        for (string item : ingridients) {
            cout << item << ", ";
        }
        cout << endl;
    }
};


int main() {

    Tea teaOne;
    Tea teaTwo;

    teaOne.teaName = "Lemon tea";
    teaOne.servings = 12;
    teaOne.ingridients = {"Lemon", "Water", "Honey", "Tea"};
    teaOne.displayTeaDetails();

    cout << endl;  // -----------------------------------------

    teaTwo.teaName = "Masala tea";
    teaTwo.servings = 3;
    teaTwo.ingridients = {"Milk", "Water", "Ginger", "Masal", "Tea"};
    teaTwo.displayTeaDetails();

    return 0;
}