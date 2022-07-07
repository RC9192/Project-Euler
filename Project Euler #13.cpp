#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   vector<string> nums;
   string str;
   for(int i=0;i<n;i++){
    cin>>str;
    nums.push_back(str);
   }
   vector<int> add;
   int s=0;
   for(int i=49;i>=0;i--){
    for(int j=0;j<n;j++){
        s+=int(nums[j][i])-48;
    }
    add.push_back(s%10);
    s/=10;
   }
   while(s!=0){
    add.push_back(s%10);
    s/=10;
   }
   int sz=add.size();
   for(int i=sz-1;i>=sz-10;i--){
    cout<<add[i];
   }
}
