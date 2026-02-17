#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    int space=2*n-1;
    int star = 0;
    
    for(int i=1; i<=2*n-1; i++){
        if(i<=n){
            space = space - 2;
            star++;
        }
        else{
            space = space + 2;
            star--;
        }
        for(int j=1; j<=star; j++){
            cout<<"*";
        }
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=1; j<=star; j++){
            if(j!=n){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

/*
Enter the value of n: 
5
*       *
**     **
***   ***
**** ****
*********
**** ****
***   ***
**     **
*       *
*/