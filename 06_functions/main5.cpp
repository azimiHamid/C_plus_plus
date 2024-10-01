// Pass By reference : Just add (&) at the beginning of the argument which is passed.

#include <iostream>
using namespace std;

void pourChai(int &cups) {
    cups += 5;
    cout << "Poured Cups: " << cups << endl;
}

int main() {

    int chaiCups = 2;
    pourChai(chaiCups);
    cout << "Initial chaiCups : " << chaiCups << endl; // pass by ref

    return 0;
}

// output: 
//     Poured Cups: 7
//     Initial number of chaiCups : 7