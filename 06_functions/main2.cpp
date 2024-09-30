/* 
   Function Overloading : -
        - It means having two or more functions with the same name but 
          differing in the number or type of parameters (or both).

 * Functions must differ in the number or types of parameters.
 * Function names are the same, but the compiler can differentiate them based on their parameter list 
   (also called the function signature).
*/

#include <iostream>
using namespace std;

void orderCoffee(int cups) {
    cout << "\nYou have ordered " << cups << " cups of Coffee\n";
}

void orderCoffee(string teaType, float price) {
    cout << "You have ordered " << teaType << ". Price per cup: $" << price << endl;
}

float finalPrice(int cups, float price) {
    float res = cups * price;
    return res;
}

int main() {

    int CUPS = 20;
    float PRICE_PER_CUP = 2.89;

    orderCoffee(CUPS);   // Two funcs having the same name
    orderCoffee("Cappuccino",  PRICE_PER_CUP);

    char calc;
    cout << "Do you want to calculate the final price? (Y/N): ";
    cin >> calc;

    if (calc == 'Y' || calc == 'y') {
        float total = finalPrice(CUPS, PRICE_PER_CUP);
        cout << "Here is your Total payment: " << total << "$\n";
    }
    
    return 0;
}