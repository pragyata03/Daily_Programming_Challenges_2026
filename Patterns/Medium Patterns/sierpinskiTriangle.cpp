#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>> n;
    
    for(int m= n-1; m>=0; m--){
        for(int i=0; i<m; i++){
            cout<<" ";
        }
        for(int l=0; l+m<n; l++){
            if(l&m){
                cout<<" "<<" ";
            }
            else
                cout<<"* ";
        }
        cout<<endl;
    }
}

/*
Enter the value of n: 
16
               * 
              * * 
             *   * 
            * * * * 
           *       * 
          * *     * * 
         *   *   *   * 
        * * * * * * * * 
       *               * 
      * *             * * 
     *   *           *   * 
    * * * *         * * * * 
   *       *       *       * 
  * *     * *     * *     * * 
 *   *   *   *   *   *   *   * 
* * * * * * * * * * * * * * * * 
*/