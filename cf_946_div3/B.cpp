#include<bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        string str; cin >> str;
        string Temp = str;
        sort(Temp.begin(), Temp.end());
        Temp.erase(unique(Temp.begin(),Temp.end()),Temp.end());
        unordered_map<char,char> ump;
        for(int i=0;i<Temp.size();i++){
            ump[Temp[i]] = Temp[Temp.size()-i-1];
        }
        for(char& ch:str){
            cout << ump[ch];
        }
        cout << endl;
    }
    return 0;
}