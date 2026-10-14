// #include <bits/stdc++.h>
// using namespace std;
// vector<int>ans(int winSz, int tar, vector<int>v){
//     int sum = 0;
//     int n = v.size();
//     int i = 0, j=0;
//     vector<int>ans;
//     int stIdx = -1,endIdx = -1;
//     while(j<n){
//         sum+=v[j];
//         if(j-i+1 == winSz){
//             if(sum>=tar){
//                 stIdx = i,
//                 endIdx = j;
//                 break;
//             }
//         }
//         if(j-i+1 > winSz){
//             sum-=v[i];
//             i--;
//         }
//         j++;
//     }
//     if(stIdx==-1)return ans;
//     else{
//         for(int i =stIdx; i<=endIdx; i++){
//             ans.push_back(v[i]);
//         }
//         return ans;
//     }

// }
// int main(){
//     vector<int>arr = {2,3,1,2,4,3};
//     int tar = 7;
//     int n = arr.size();
//     vector<int>v ;
//      for(int i = 1; i<=n; i++){
//         v = ans(i,tar,arr); 
//         if(v.size())break;
//      }

// }

// almost correct try




#include <bits/stdc++.h>
using namespace std;

vector<int> ans(int winSz, int tar, vector<int> v) {
    int sum = 0;
    int n = v.size();
    int i = 0, j = 0;

    vector<int> ans;
    int stIdx = -1, endIdx = -1;

    while (j < n) {
        sum += v[j];

        if (j - i + 1 == winSz) {
            if (sum >= tar) {
                stIdx = i;
                endIdx = j;
                break;
            }

            sum -= v[i];
            i++;
        }

        j++;
    }

    if (stIdx == -1) {
        return ans;
    }

    for (int i = stIdx; i <= endIdx; i++) {
        ans.push_back(v[i]);
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 3, 1, 2, 4, 3};
    int tar = 7;
    int n = arr.size();

    vector<int> v;

    for (int i = 1; i <= n; i++) {
        v = ans(i, tar, arr);

        if (!v.empty()) {
            cout << "Subarray: ";
            for (int x : v) {
                cout << x << " ";
            }
            cout << "\nWindow size: " << i << "\n";
            break;
        }
    }

    if (v.empty()) {
        cout << "No valid subarray found\n";
    }

    return 0;
}


