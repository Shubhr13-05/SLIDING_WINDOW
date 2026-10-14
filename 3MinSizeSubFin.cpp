#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {1,3,6,4,1,4,3};
    int i = 0,j =0;
    int n = v.size();
   int minL = n;
   int sum = 0;
    int tar = 7;
    while(j<n){
        sum+=v[j];
        while(sum>=tar){
            minL=min(minL, j-i+1);
            sum-=v[i];
            i++;
        }
        j++;
    }
    int ans = (minL==INT_MAX)?0:minL;
    cout<<ans;
}