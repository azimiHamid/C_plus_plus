// Homework #2: Increase the tea price 10% for people without tax paper.

#include <iostream>
using namespace std;

int main() {

    float originalTeaPrice;
    cout << "Please Enter the Tea Price? ";
    getline(cin, originalTeaPrice);

    float taxIncrease = (originalTeaPrice/100) * 10;

    float finalTeaPrice = int(originalTeaPrice + taxIncrease);

    cout << "Your tea price is " << originalTeaPrice << "\n";
    cout << "Your tea price without paying tax is " << finalTeaPrice << "\n";

    return 0;
}