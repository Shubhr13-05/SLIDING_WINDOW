#include <bits/stdc++.h>
using namespace std;
bool allzero(vector<int>&ctr){
    for(auto i:ctr){
        if(i!=0)return false;
    }
    return true;
}
int main() {
    string pat = "for";
    string txt = "forxyzovorforfpork";
    int n = txt.size();
    int k = pat.size();
    vector<int>ctr(26,0);
    vector<int>ans;
    for (char ch : pat) {
        ctr[ch - 'a']++;
    }
    int i=0,j =0;
    while(j<n){
        ctr[txt[j]-'a']--;
        if(j-i+1 == k){
            if(allzero(ctr)){
                ans.push_back(i);
                // ctr[txt[i]-'a']++;
                // i++;
            }
            ctr[txt[i] - 'a']++;
            i++;
            // YHA HOGA yHa
            // THS=IS IS VERT VERY IMP
        }
        j++;
    }
    for(auto it: ans){
        cout<<it<<" ";
    }
}
