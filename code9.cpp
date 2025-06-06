#include <iostream>
using namespace std;

int main() {
    int n = 5;
    // upper part

    for(int i=1; i<=n; i++){
        //Stars
         for(int j=1; j<=i; j++) {
            cout <<"*";
        }
         //spaces
        for(int j=1; j<=2*(n-i); j++) {
            cout <<" ";
        }
        //stars
        for(int j=1; j<=i; j++) {
            cout <<"*";
        }
        cout <<endl;
    }




//Lower part

for(int i=n; i>=1; i--){
        //Stars
         for(int j=1; j<=i; j++) {
            cout <<"*";
        }
         //spaces
        for(int j=1; j<=2*(n-i); j++) {
            cout <<" ";
        }
        //stars
        for(int j=1; j<=i; j++){
            cout <<"*";
        }
        cout <<endl;
    }
    

    return 0;
}