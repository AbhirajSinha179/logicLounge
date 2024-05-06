#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int w;
	cin >> w;
	while (w--) {
		int n;
		cin >> n;
		for(int i=1;i<=n;i++){
			if(i == n-1){
				cout << n << " " << n-1 << endl;
			}else{
				cout << i << " " << i << endl;
			}
		}
		cout << endl;
	}
	    return 0;
}
