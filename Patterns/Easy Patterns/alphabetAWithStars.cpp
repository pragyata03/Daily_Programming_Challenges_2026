#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<= n/2; j++){
            if(i==0 || j==0 || j==n/2 || i==n/2){
                if(i==0 && (j==0 || j==n/2)){
                    cout<<" ";
                }
                else
                cout<<"*";
            }
            else{
               cout<<" "; 
            }
        }
        cout<<endl;
    }
    return 0;
}

/*
Enter the value of n: 
10
 **** 
*    *
*    *
*    *
*    *
******
*    *
*    *
*    *
*    *
*/