// Homework #1: Arithmetic Operators HW

#include <iostream>
using namespace std;

int main() {

    int teaPacks;
    cout << "Enter the number of tea-packs? ";
    cin >> teaPacks;

    int price;
    cout << "Enter the price of a tea-pack? ";
    cin >> price;

    int totalPrice = teaPacks * price;
    int tax = (totalPrice/100) * 10;
    totalPrice += tax;

    cout << "Your total cost including tax is = " << totalPrice << endl;


    return 0;
}