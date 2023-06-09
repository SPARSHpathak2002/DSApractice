#include <iostream>
#include <vector>
#include<exception>
#include <unordered_map>
using namespace std;

vector <int> twoSum(vector <int>& nums,int target){

    // vector <int> ans;
    // // brute force and timecomplexity of O(n*n) BAD
    // for(int i=0;i<nums.size();i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         if(nums[i]+nums[j]==target){
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             break;
    //         }
    //     }
    // }

    //optimized solution using hash map
    unordered_map <int,int> umap;
    for(int i=0;i<nums.size();i++){
        if(umap.find(target-nums[i])==umap.end()){
            umap[nums[i]]=i;
        }
        else{
            return {umap[target-nums[i]],i};
        }
    }

    return {};
}

int main(){
    int target=6;
    vector <int> nums={3,2,3};
    vector <int> ans;
    try{
        ans=twoSum(nums,target);
        cout<<ans[0]<<" "<<ans[1]<<endl;

    }catch(const std::exception &exc){
        cerr << exc.what();
    }
    return 0;
}