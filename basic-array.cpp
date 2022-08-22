#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[5];
    for(int i=0 ; i< 5; i++){
        cin >> a[i];
    }
    for(int i=0; i<5; i++){
        cout << a[i] << " ";
    }
    char b[5]= "abcd";
    cout << endl << b;
    char c[50];
    //multi word
    cin.ignore();
   cin.getline(c,50);
    cout << endl << c;
    return 0;
}