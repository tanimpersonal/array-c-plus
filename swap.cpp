#include <bits/stdc++.h>

using namespace std;
int main(){
    int a[]= {2,4,1,5,6}, n=5;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){


                //manual way
                /*int temp= a[i];
                a[i]= a[j];
                a[j]=temp;*/




                //library functions way
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << a[i] << endl;
    }
    return 0;
}