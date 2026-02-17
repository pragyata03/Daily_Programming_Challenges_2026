#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
Enter the value of n: 
5
    *****
   *****
  *****
 *****
*****

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            cout<<" ";
        }
        
        if(i==0 || i==n-1){
            for(j=0; j<n; j++){
               cout<<"*";
            } 
        }
        else{
            for(j=0; j<n; j++){
                if(j==0 || j==n-1)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }
}

/*
Enter the value of n: 
7
      *******
     *     *
    *     *
   *     *
  *     *
 *     *
*******
*/  