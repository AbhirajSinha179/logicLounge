#include <bits/stdc++.h>
using namespace std;
 
void solve() {
int a,b,c;
cin>>a>>b>>c; 
int sum=a+b+c;
if(sum%2){
   cout<<"-1"<<endl;
}
else {
    if(a==0 && b==0){
        cout<<"0"<<endl;
    }
    else if(sum==2){
        cout<<"1"<<endl;
    }
    else{
        cout<<min(sum/2,(a+b))<<endl;
    }
}
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