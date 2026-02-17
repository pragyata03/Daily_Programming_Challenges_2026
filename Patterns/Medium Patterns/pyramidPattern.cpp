#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    int j, k=0;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            for(j=k+1; j<i+k; j++){
                cout<<j<<"*";
            }
            cout<<j++<<endl;
            k=j;
        }
        else{
            k= k+i-1;
            for(j=k; j>k-i+1; j--){
                cout<<j<<"*";
            }
            cout<<j--<<endl;
        }
        // cout<<endl;
    }
}

/*
Enter the value of n: 
5
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
*/