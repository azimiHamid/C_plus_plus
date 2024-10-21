// 2D Array
#include <iostream>
using namespace std;


int main() {

    int teaSales[3][5] = {
        {50, 60, 55, 43, 78}, // shop 1 sales for 5 days
        {75, 90, 84, 44, 67}, // shop 2 sales for 5 days
        {38, 99, 71, 87, 98}, // shop 3 sales for 5 days
    };

    int shop1 = 0;
    int shop2 = 0;
    int shop3 = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0) {
                shop1 += teaSales[i][j];
            } 
            if (i == 1) {
                shop2 += teaSales[i][j]; 
            } 
            if (i == 2){
                shop3 += teaSales[i][j];
            }
        }
    }

    cout << "Shop 1 total Sales: " << shop1 << endl;
    cout << "Shop 2 total Sales: " << shop2 << endl;
    cout << "Shop 3 total Sales: " << shop3 << endl;

    int maxProfit = max(max(shop1, shop2), shop3);
    cout << maxProfit << endl;

    return 0;
}
