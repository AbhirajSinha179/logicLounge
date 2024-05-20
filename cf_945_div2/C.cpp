#include <bits/stdc++.h>
using namespace std;

void solve() {
 int n; cin>>n;
 vector<int> a(n); 
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 int ind;
 for(int i=0;i<n;i++){
    if(a[i]==n){
        ind=i%2;
    }
 }
 if(ind) {
    reverse(a.begin(),a.end());
 }
vector<int> ans(n,0);
vector<pair<int,int>> odd,even;
for(int i=0;i<n;i++){
    if(i%2==0){
        odd.push_back({a[i],i});
    }
    else{
         even.push_back({a[i],i});
    }
}
sort(odd.rbegin(),odd.rend());
sort(even.rbegin(),even.rend());
int x=n/2 +1;
for(auto i: odd){
ans[i.second]=x;
x++;
}
x=1;
for(auto i: even){
ans[i.second]=x;
x++;
}

  if(ind) reverse(ans.begin(),ans.end());

 for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
 }
 cout<<endl;
 }


    
    
    
 
int32_t main()
{   

int t;
cin>>t;
while(t--){
        solve();
        }

    return 0;
}