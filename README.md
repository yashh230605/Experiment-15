# CDS-experiment-15

AIM:- to learn and implement the concept of recursion.<br>

Software Used:- VS code<br>

Theory:-<br>
A function that makes direct or indirect calls to itself is called recursive. This method is frequently applied to tackle issues that can be divided into more manageable, related subproblems.<br>
Base Case: A recursive function must have a base case, which is a condition that stops the recursion. Without a base case, the function would call itself infinitely. <br>  
Recursive Case: The recursive case is where the function calls itself with a smaller input. This is usually done to approach the base case.<br>

CODE:-

1). Factorial using recursion<br>
  
    #include<iostream>
    using namespace std;

    int fact(int n){
    if (n<=1){
        return 1;
    }else {
        return(n*fact(n-1));
    }
    }
    int main(){
    int X ,n;
    cout<<"enter a number";
    cin>>n;
    X= fact(n);
    cout<<n<<"!="<<X;
    return 0;

    }

2).Sum of numbers using recursion<br>

    #include<iostream>
    using namespace std;

    int add(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + add(n - 1); 
    }
    }

    int main() {
    int X, n;
    cout << "Enter a number: ";
    cin >> n;
    X = add(n);
    cout << X;
    return 0;
    }

3).String reverse using recursion<br>

    #include<iostream>
    #include<string.h>
    using namespace std;
     void reverse(char *str){
    if(*str)
    {
        reverse(str+1);
        cout<<("%c", *str);
    }
    }
    int main(){
    char a[50];
    cout<<"Enter  a string:";
    cin>>a;
    reverse(a);
    return 0;
    }

4).Number reverse using recursion<br>

    #include<iostream>
    using namespace std;
    void print_rev(int i){
    if(i>0){
        cout<<(i%10);
        print_rev(i/10);

    }
    }
    int main(){
    int i;
    cout<<"enter the number:";
    cin>>i;
    print_rev(i);
    return 0;
    }

OUTPUT:-<br>

Part A

Enter a number: 4

Factorial = 24

Part B

Enter a number: 2

Addition of all numbers = 3

Part C

Enter  a string:yash

hsay

Part D

enter the number:23

32

Conclusion:-<br>
In this experiment we learnt the logic of recursion and implemented it .# Experiment-15
