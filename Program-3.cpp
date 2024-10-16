#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number (a): ";
    cin >> a;
    
    int terms = (a % 2 == 0) ? a - 1 : a; 

  
    int number = 1; 
    for (int i = 1; i <= terms; i++) {
        cout << number;
        if (i < terms) {
            cout << ", "; 
        }
        number += 2;
    }
    
    cout << endl;
    return 0;
}
