#include<iostream>
using namespace std;

int main(){
    int n, num=1;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int gap = n-1;
    
    for(int j= 1; j<=n; j++){
        num = j;
        int i;
        for(i=1; i<=gap; i++){
            cout<<" ";
        } 
        gap--;
        for(i=1; i<=j; i++){
            cout<<num;
            num++;
        }
        num= num-2;
        for(i=1; i<j; i++){
            cout<<num;
            num--;
        }
        cout<<endl;
    }
}

/*
Enter the value of n: 
5
    1
   232
  34543
 4567654
567898765
*/