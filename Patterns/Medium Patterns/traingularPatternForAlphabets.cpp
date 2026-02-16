#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            char ch = 'A' -1 +j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
Enter the value of n: 
5
A B C D E 
B C D E 
C D E 
D E 
E 
*/