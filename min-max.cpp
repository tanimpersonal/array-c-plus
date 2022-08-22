#include <bits/stdc++.h>

using namespace std;
int main(){
    int a, b, c, maxNumber,minNumber;
    cin >> a >>b >>c;
    minNumber= min(a,b);
    cout << minNumber << endl;
    maxNumber= max(a,b);
    cout << maxNumber << endl;
    int threeMin= min(a, min(b,c));
    int threeMax= max(a, max(b,c));
    cout << threeMin << endl << maxNumber;
    int ar[5]= {5,1,3,6,-9};
    int minimum= ar[0];
    int maximum= ar[0];
    for(int i=0; i<5; i++){
        int minimumHere= min(ar[i], minimum);
        int maximumHere= max(ar[i], maximum);
        minimum= minimumHere;
        maximum= maximumHere;
    }
    cout << endl << minimum << endl << maximum;
    return 0;
}