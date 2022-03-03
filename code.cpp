#include<iostream>

#include<vector>

using namespace std;




class Solution {
public:
    
    void print(vector<int>&nums, vector<int>&output,int ind,vector<vector<int>>&result){
        if(ind>=nums.size()){
            
            result.push_back(output);
            
            return;
            
        }
        
        print(nums,output,ind+1,result);
        
        
        
        output.push_back(nums[ind]);
        
        
        print(nums,output,ind+1,result);
        
        output.pop_back();
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        
        vector<int>output;
        
        print(nums,output,0,result);
        
        return result;
        
    }
};