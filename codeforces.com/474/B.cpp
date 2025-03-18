#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	int n;
	cin >>  n;

	int p[n + 2];
	p[0] = 0;
	for (int i = 1; i <= n; i++) {
		int temp;
		cin >> temp;
		p[i] = p[i-1] + temp;
	}
	p[n+1] = p[n];
	
	int m;
	cin >> m;
	for (int i = 0; i < m; i++){
		
		int q;
		cin >> q;

		int l = 0, r = n + 1;
		while(r - l > 1){

			int mid = (l + r) / 2;
			if (p[mid] < q)
				l = mid;
			else
				r = mid;
			
		}
		cout << r << endl;
	}

}

