#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int radius;
    cout<<"Enter the value of radius(only integer value accepted): "<<endl;
    cin>>radius;
    float dist;
    
    for(int i=0; i<=2*radius; i++){
        for(int j=0; j<=2*radius; j++){
            dist = sqrt(pow((i-radius),2) + pow((j-radius),2));
        }
        if(dist>radius+0.5 && dist<radius-0.5){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        cout<<endl;
    }
}

/*
Input : n = 6
Output :
    *****    
  **     **  
 **       ** 
 *         * 
*           *
*           *
*           *
*           *
*           *
 *         * 
 **       ** 
  **     **  
    ***** 
*/