/* Functions : -
Function (with/without a return type), Function Declaretion and Difination */

#include <iostream>
using namespace std;

// Function with return type (int)
int returnTemprature(int temp) {
    return temp;
}

// Function without any return type
void printPrice() {
    cout << "The Price is 9.13$" << endl;
}


// Only Function Declaration
void orderChai(int);


int main() {

    int temp = returnTemprature(34);
    cout << temp << endl;

    printPrice(); // calling a Function
    orderChai(20);

    return 0;
}



// Function Difination
void orderChai(int cups) {
    cout << "You have ordered " << cups << " cups of Chai\n";
}