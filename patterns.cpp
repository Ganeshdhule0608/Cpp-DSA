#include<iostream>
using namespace std;

int main(){
    // int n;
    // int num = 1;
    // cout<<"Enter value of n"<<endl;
    // cin>>n;

    // for(int i = 1; i<=n; i++){
    //     for(int j = 1; j<=n; j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }



    // int n;
    // cout<<"Enter value of n"<<endl;
    // cin>>n;

    // for(int i = 1; i<=n; i++){
    //     for(int j = 1; j<i+1; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // int num = 1;
    // cout<<"ENter value of n"<<endl;
    // cin>>n;

    // for(int i = 1; i<=n; i++){
    //      for(int j = 1; j<i+1; j++){
    //         cout<<num<<" ";
    //                num++;
    //      }
        
  
    //     cout<<endl;

    // }


    int n = 4;
    int  num = 1;

    for(int i = 0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j = 0; j<n-i; j++){
            cout<<(i+1);
        }
        cout<<endl;
    }
    

}

