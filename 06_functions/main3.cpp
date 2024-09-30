/* 
 * Default Parameter Values : -
 * If no arguments are passed to the function, 
 * it will use the default values defined for its parameters.
*/
#include <iostream>
#include <string>
using namespace std;

void orderCoffee(float price=2.89, string coffeeType="Latte") {
    cout << "You have ordered " << coffeeType << ". Price per cup: $" << price << endl;
}


int main() {

    int CUPS = 20;
    float PRICE_PER_CUP = 2.99;
  
    orderCoffee();  // No value passed to the Function parameter
    orderCoffee(3.49, "Cappuccino");
    
    return 0;
}


void example(int a = 5, int b) {  // Error: 'b' has no default value
    int total = a + b;
    cout << "Total = " << total << endl;
}

/*
* What's happening in example(20); : -
    When you call example(20);, you're passing one argument (20), 
    and the compiler thinks you're passing a value for the first parameter a, 
    because the first argument corresponds to a.

    But then the compiler expects an argument for b 
    (because b doesn't have a default value). 
    Since you didn't provide an argument for b, it leads to an error.
*/

/*
Rule for Default Parameters in C++:
When you provide default parameters, 
C++ requires that any parameter after a default parameter 
must also have a default value.
*/