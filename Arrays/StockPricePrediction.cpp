#include <iostream>
#include <vector>
#include<exception>
#include <unordered_map>
#include<algorithm>
using namespace std;

int maxProfit(vector <int>& prices){
    // //time limit excedded in this approach for large test case
    // int profit=0;
    // for(int i=0;i<prices.size()-1;i++){
    //     for(int j=i+1;j<prices.size();j++){
    //         if(prices[i]<prices[j]){
    //             profit=max(profit,(prices[j]-prices[i]));
    //         }
    //     }
    // }
    // return profit;

    //two pointer approach
    int i=0,j=1,profit=INT_MIN;
    while(j<prices.size()){
        if(prices[i]<prices[j]){
            cout<<"value of i and j is "<<prices[i]<<" "<<prices[j]<<endl;
            profit=max(profit,prices[j]-prices[i]);
        }
        else{
            i=j;
        }
        j++;
    }
    return profit;
}

int main(){
    vector <int> prices={1,2,4};
    int ans;
    try{
        ans=maxProfit(prices);
        cout<<ans<<" "<<endl;

    }catch(const std::exception &exc){
        cerr << exc.what();
    }
    return 0;
}