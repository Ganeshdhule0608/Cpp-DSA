#include<iostream>
#include <climits>
using namespace std;

int main(){

    int nums[] = { 5,9,21,-15,24,15};
    int size = 6;

    int biggest = INT_MIN;

    for(int i = 0; i<size; i++){
        if(nums[i]>biggest){
            biggest=nums[i];
        }

    }

    cout<<"Smallest number "<<biggest<<endl;


    
}