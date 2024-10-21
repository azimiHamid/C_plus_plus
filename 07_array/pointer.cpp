#include <iostream>
using namespace std;

/*
Function to dynamically allocate memory for the tea orders and return a pointer.
This function creates an array of 'cups' size and assigns values to each element.
*/
int* orderTea(int cups) {
    // Dynamically allocating memory for an array of size 'cups' on the heap using pointer (*)
    int* orders = new int[cups];

    for (int i = 0; i < cups; i++) {
        orders[i] = (i + 1) * 10;
    }

    // Returning the pointer to the dynamically allocated array
    return orders;
}

int main() {
    int cups = 7;

    // Pointer that stores the address of the dynamically allocated array from orderTea
    int* ordersPointer = orderTea(cups);

    for (int i = 0; i < cups; i++) {
        cout << "Cup_" << (i + 1) << " has " << ordersPointer[i] << " ml.\n";
    }

    // Manually deallocating the memory allocated on the heap to prevent memory leak
    delete[] ordersPointer;

    return 0;
}



/*
 ? Explanation of Comments:
    * Memory allocation on the heap: 
      The new operator dynamically allocates memory, 
      which is stored in the heap. This memory is not automatically freed when the
      function or scope ends, unlike stack memory.

    * Manual memory management: 
      Since memory is allocated on the heap, 
      you need to manually free it using delete[]. 
      This is important to avoid memory leaks. 
*/
