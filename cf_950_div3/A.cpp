#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string str;
        cin >> str;
        vector<int> fre(7,0);
        for(char& i:str) fre[i-'A']++;
        int Ans = 0;
        for(int i=0;i<7;i++){
            if(fre[i] < m){
                Ans += (m-fre[i]);
            }
        }
        cout << Ans << '\n';
    }
}