#include <bits/stdc++.h>
using namespace std;
// same as C, but use the keywords carefully!
int main(){
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << endl << arr[1];
    arr[1] = 45; 
    cout << endl << arr[1];
    return 0;  
}

int main(){
    int arr[2][3];
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }    
    return 0;
}