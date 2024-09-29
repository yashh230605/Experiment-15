#include <iostream>
using namespace std;

int add(int n) {
    if (n <= 1) { 
        return 1;  // Base case
    } else {
        return n + add(n - 1); // Corrected function name from fact to add
    }
}

int main() {
    int X, n;
    cout << "Enter a number: "; 
    cin >> n;      
    X = add(n);
    cout << "Addition of all numbers = " << X << endl;
    return 0;
}
