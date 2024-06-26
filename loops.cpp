#include <bits/stdc++.h>
using namespace std;

// for
int main(){
    for(int i = 1; i<=100; i++){
        cout << i << ") " <<"prnv is in " << i << endl;
    }
    return 0;
}

// while
int main(){
    int i = 1;
    while(i <= 5){
        cout << i << ") " <<"prnv is in " << i << endl;
        i++;
    }
    return 0;
}

// do-while
int main(){
    int i = 2;
    do{
        cout << "i has been incremented";
        i++;
    } while (i<=1);
    cout << i;
    return 0;
}