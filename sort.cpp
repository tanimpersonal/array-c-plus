//stl => standard template language
// sort is a hybrid sort
// it has three sorting pattern => quick sort, heap sort, insertion sort
// sort(starting pointer, ending pointer)
#include <bits/stdc++.h>

using namespace std;
int main(){
    int a[5]= {1,6,7,2,4};
    sort(a,a+5);
    for(int i=0; i<5; i++){
        cout << a[i] << endl;
    }
    return 0;
}