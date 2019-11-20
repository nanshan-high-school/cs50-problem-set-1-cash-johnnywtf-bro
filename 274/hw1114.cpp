#include <iostream>
using namespace std;
int main() {
    int money;
    cout << "多少錢";
    cin >> money;
    do {
        cout << (money / 1000) << "個1000" << "\n";
        cout << ((money % 1000) / 100) << "個100" << "\n";
        cout << (((money % 1000) % 100) / 10) << "個10" << "\n";
        cout << ((((money % 1000) % 100) % 10) / 1) << "個1" << "\n";
         if (((((money % 1000) % 100) % 10) / 1) == 0) {
            break;
        } else {
            continue;
        } 
    } while (money < 10000);
    }
