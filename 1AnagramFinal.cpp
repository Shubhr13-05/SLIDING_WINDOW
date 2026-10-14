#include <bits/stdc++.h>
using namespace std;
bool allZeros(vector<int>&counter){
    for(int i: counter){
        if(i!=0)return false;
    }
    return true;
}
int main() {
    string pat = "for";
    string txt = "forxyzovorforfpork";
    int n = txt.size();
    int k = pat.size();
    vector<int>counter(26,0);

    for(int i= 0; i<pat.size();i++){
        char ch = pat[i];
        counter[ch-'a']++;
    }
    int  i =0, j = 0;
    int result = 0;
    while(j<n){
        counter[txt[j]-'a']--;
        if(j-i+1 == k){
            if(allZeros(counter))result++;
        counter[txt[i]-'a']++;
        i++;
        }
        j++;
    }
    cout<<"the no of anagrams are "<<result;
}