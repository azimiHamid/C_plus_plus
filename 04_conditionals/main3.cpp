#include <iostream>
using namespace std;

int main() {

    int cups;
    double pricePerCup = 2.4, totalPrice, discount;

    cout << "Enter the number of tea cups? ";
    cin >> cups;

    totalPrice = pricePerCup * cups;
    cout << "Your total payment: " << totalPrice << endl;

    if (cups > 20) {
        discount = 0.20;
    } else if (cups >= 10 && cups <= 20) {
        discount = 0.10;
    } else {
        discount = 0;
    }

    totalPrice -= totalPrice * discount;
    cout << "Total price after discount : " << totalPrice << endl;

    return 0;
}