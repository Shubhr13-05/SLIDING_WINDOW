#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int check(int j,int k,vector<int>& arr){
        while(k!=0){
            if(arr[j]<0)return arr[j];
            j++;
            k--;
        }
        return 0;
    }
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // code here
        int i = 0,j=0;
        vector<int>ans;
        while(j<=arr.size()-k){
            ans.push_back(check(j,k,arr));
            j++;
        }
        return ans;
    }
};