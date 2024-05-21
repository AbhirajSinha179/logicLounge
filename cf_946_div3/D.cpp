#include <bits/stdc++.h>
using namespace std;

void solve() {
int n; cin>>n;
string s; cin>>s;
string ans;
 int x=0,y=0; 
 int flagx=0,flagy=0;
for(int i=0;i<n;i++){
    if(s[i]=='N'){
y++; flagy=1;
    }
    else if(s[i]=='S'){
        y--; flagy=1;
    }
    else if(s[i]=='E'){
        x++; flagx=1;
    }
    else{
        x--; flagx=1;
    }
}
if(x%2 || y%2){
    cout<<"NO"<<endl; return;
}
if(x==0 && y==0 && n==2){
     cout<<"NO"<<endl; return;
}


//Edge case
if(x==0 && y==0 && (flagx==0 || flagy==0)){ 
    int ind=-1;
   for(int i=0;i<n-1;i++){
if(s[i]!=s[i+1] && ind==-1){
ans.push_back('H'); ans.push_back('H');
 ind=i; i++;
}
else{
    ans.push_back('R');
}
    }
    if(ind!=n-2){
        ans.push_back('R');
    }
    cout<<ans<<endl;
return;
}


//Main Logic 
int tx=x/2,ty=y/2,xx=0,yy=1,cntx=0,cnty=0;
for(int i=0;i<n;i++){
 if(s[i]=='N'){
  if(yy){
    ans.push_back('H');
    cnty=1;
  }
  else{
     ans.push_back('R');
  }
  ty--;
    }
    else if(s[i]=='S'){
        if(yy){
    ans.push_back('H');
    cnty=1;
  }
  else{
     ans.push_back('R');
  }
  ty++;
    }
    else if(s[i]=='E'){
      if(xx){
    ans.push_back('H');
  }
  else{
     ans.push_back('R');
     cntx=1;
  }
  tx--;
    }
    else{
        if(xx){
    ans.push_back('H');
  }
  else{
     ans.push_back('R');
       cntx=1;
  }
  tx++;
    }
    if(tx==0 && cntx){
     cntx=0; xx=1; 
    }
    else if(ty==0 && cnty){
        cnty=0; yy=0;
    }
}

cout<<ans<<endl;
 }


    
    
    
 
int main()
{   
 
int t;
cin>>t;
while(t--){
        solve();
        }

    return 0;
}