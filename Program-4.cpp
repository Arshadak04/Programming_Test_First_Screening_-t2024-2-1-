#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    // In this code i additionaly included the n , which takes the no of inputs , its not mentioned in the Question 
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> input(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    map<int, int> multipleCount;

    for (int i = 1; i <= 9; i++) {
        multipleCount[i] = 0;
    }

    for (int num : input) {
        for (int i = 1; i <= 9; i++) {
            if (num % i == 0) {
                multipleCount[i]++;
            }
        }
    }

    cout << "{ ";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << multipleCount[i];
        if (i < 9) {
            cout << ", ";
        }
    }
    cout << " }" << endl;

    return 0;
}
