
//https://leetcode.com/problems/subarray-sum-equals-k/description/
/*
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int sum=0,ans=0;
        map<int,int>mp;
        mp[0]++;
        while(j<n){
            sum=sum+nums[j];
            if(mp.find(sum-k)!=mp.end())
            ans=ans+mp[sum-k];

            mp[sum]++;
            j++;
        }
        return ans;
    }

    int main(){
        int n,k;
        cin>>n>>k;
        vector<int>nums;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }
        int ans=subarraySum(nums,k);
        cout<<ans<<endl;
    }