#include <iostream>
using namespace std;

int totalTeaServed(int tea[], int size) {
    int total = 0;
    for (int i=0; i<size; i++) {
        total += tea[i];
    }
    return total;
}

int main() {
    
    int teaServed[7] = {1, 2, 3, 4, 5, 6, 7};
    int total = totalTeaServed(teaServed, 7);
    cout << "Total cups of tea served: " << total << endl;
    return 0;
}
