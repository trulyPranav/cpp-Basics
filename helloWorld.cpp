#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "Value of x is: " << x << endl << "And value of y is: " << y;
    return 0;
}

int main(){
    // int 
    int x = 1500;
    // long
    // long x = 1500000000000;
    // long long
    // long long x = 150000000000000000000;
    // float & double
    float y = 5.29376;
    cout << "Value of y: " << y << endl;

    // string & getline
    string s;
    getline (cin, s); // getline takes the entire line! while cin take only one word per string
    cout << "The entered string is: " << s;

    // char
    char c;
    c = 'B';
    return 0;
}

int main(){
    int vayass;
    cout << "Enter your age: ";
    cin >> vayass;
    if (vayass >= 18){
        cout << "Adult Ahnu Nii";
    } else {
        cout << "Kochu kutty thenne nii hehe";
    }
    return 0;
}

// switch case same as C lang

