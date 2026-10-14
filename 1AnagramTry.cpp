// #include<bits/stdc++.h>
// using namespace std;
// bool mapEmpty(map<char, int>&mpp){
//     bool ans = true;
//     for(auto it:mpp){
//         if(it.second!=0)ans=false;
//     }
//     string s = "for";
//     for(int i = 0; i<s.size(); i++){
//         mpp[s[i]]++;
//     }
//     return ans;
// } 
// int main(){
//     string s = "for";
//     string text = "forxyzovorforfpork";
//     map<char, int>mpp;
//     for(int i = 0; i<s.size(); i++){
//         mpp[s[i]]++;
//     }
//     int ans  =0;
//     for(int i = 0; i<text.size(); i++){
//         if(mpp.find(s[i])!=mpp.end()){
//             // int idx = i;
//             for(int j=i; j<i+s.size(); i++){
//                 mpp[s[j]]--;
//             }
//             if(mapEmpty(mpp))ans++;
//         }
//     }
//     cout<<"the no. of anagram are: "<<ans<<" ";
// }

// YE GALAT HAI YHA PR ORIGINAL ARRAY KO HI MODIFY KR RHA HUN!!

//      CORRECT APPROACH NICHE 


#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "for";
    string text = "forxyzovorforfpork";

    map<char, int> mpp;

    for (int i = 0; i < s.size(); i++) {
        mpp[s[i]]++;
    }

    int ans = 0;

    for (int i = 0; i <= (int)text.size() - (int)s.size(); i++) {
        map<char, int> window;

        for (int j = i; j < i + (int)s.size(); j++) {
            window[text[j]]++;
        }

        if (window == mpp) {
            ans++;
        }
    }

    cout << "The no. of anagrams are: " << ans << '\n';

    return 0;
}
