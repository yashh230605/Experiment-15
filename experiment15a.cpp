#include<iostream>
using namespace std;

int fact(int n) {
    if (n <= 1) { 
        return 1;
    } else {
        return (n * fact(n - 1)); 
    }
}

int main() {
    int X, n;
    cout << "Enter a number: "; 
    cin >> n;      
    X = fact(n);
    cout << "Factorial = " << X << endl;
    return 0;
}