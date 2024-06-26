#include <bits/stdc++.h>
using namespace std;

// void return parameterised non-parameterized
void function1(){
    cout << "the name is prnv" << endl;
}

void function2(string name){
    cout << "The name is " << name << endl;
}

void function3(int n1, int n2){
    cout << "Sum is : " << n1 + n2 << endl;
}

int function4(int n1, int n2){
    int sum = n1 + n2;
    return sum;
}

int main(){
    string perr = "prnv";
    function1();
    function2(perr);
    int a = 3, b = 4;
    function3(a,b);
    cout << "Again the sum is: " << function4(a,b);
    return 0;
}