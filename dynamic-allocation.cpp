// stack works in compile time
// heap works in runtime. so it is dynamic

#include <bits/stdc++.h>
using namespace std;
int main(){

    //it is in C way.
   /* //dynamic memory allocation
    int *p = (int *)malloc(10* sizeof(int));
    for(int i=0; i< 10; i++){
        cout << p[i] << endl;
    }
    cout << endl << endl;
    //make garbage value 0
    int *p2= (int *) calloc(10, sizeof (int));
    for (int i=0; i<10; i++){
        cout << p2[i] << endl;
    }
    //free memory
    free(p);*/


   //now in c++ way
//dynamic with initialization after square bracket
   int *ptr= new int[10]{1,2,3,4,5};


   for(int i=0; i<10; i++){
       cout << ptr[i] << endl;
   }
   //delete memory and free it
   delete ptr;
   return 0;
}