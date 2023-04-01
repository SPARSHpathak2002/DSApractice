/*
Printing sub arrays of given array

*/
#include <iostream>
using namespace std;


int main(){
    int size=8;
    int array[size]={1,2,3,4,5,6,7,8};
    //brute force approach timecomplexity:O(n*n*n)
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=i;k<=j;k++){
                cout<<array[k]<<" ";
            }
            cout<<endl;
        }
    }
    

    return 0;
}