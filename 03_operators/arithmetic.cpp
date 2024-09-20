// Arithmetic Operators: +  -  *  /  %

#include <iostream>
using namespace std;

int main() {

    int cups;
    double pricePerCup, totalPrice, discountedPrice;
    
    cout << "Enter the number of cups? ";
    cin >> cups;

    cout << "Enter price per cup? ";
    cin >> pricePerCup;

    totalPrice = pricePerCup * cups;
    
    // Apply 5% discount if total price is above 100
    if (totalPrice > 100) {

        float discount = (totalPrice/100) * 5;
        discountedPrice = int(totalPrice - discount);
        cout << "Discounted price: " << discountedPrice << endl;

    } else {

        cout << "Price: " << totalPrice << endl;

    }

    return 0;
}
