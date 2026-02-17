#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    cout<<"Enter the value of m: "<<endl;
    cin>>m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i<n/2){
                if(j<m/2){
                    if(j==0)
                        cout<<"*";
                    else
                        cout<<" "<<" ";
                }
                else if(j==m/2){
                    cout<<" *";
                }
                else{
                    if(i==0)
                        cout<<" *";
                }
            }
            else if(i==n/2){
                cout<<"* ";
            }
            else{
                if(j==m/2 || j==m-1){
                    cout<<"* ";
                }
                else if(i==n-1){
                    if(j<=m/2 || j==m-1){
                        cout<<"* ";
                    }
                    else{
                        cout<<" "<<" ";
                    }
                }
                else{
                    cout<<" "<<" ";
                }
            }
        }
        cout<<endl;
    }
}

/*
Enter the value of n: 
9
Enter the value of m: 
9
*       * * * * *
*       *
*       *
*       *
* * * * * * * * * 
        *       * 
        *       * 
        *       * 
* * * * *       * 
*/