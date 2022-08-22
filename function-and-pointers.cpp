#include <bits/stdc++.h>

using namespace std;
void print(int x){
    cout << x << endl;

}
void pointer(int *x){
    //it will be changed to 2500.
    *x=2500;
    cout << *x <<endl;
}
void pointerPointer(int **x){
    cout << **x;
}
int main(){
    int a=50;
    print(a);
    // pointer
    int *ptr= &a;
    pointer(ptr);
    //point a pointer. so will give the value of a
    int **ptr2= &ptr;
    pointerPointer(ptr2);
}