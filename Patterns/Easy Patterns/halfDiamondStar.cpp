#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    for(int i=0; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

/*
Enter the value of n: 
5

*
**
***
****
*****
****
***
**
*
*/