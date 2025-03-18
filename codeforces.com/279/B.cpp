#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	int n, t;
	cin >> n >> t;
	int b[n + 2];
	b[0] = 0;

	for (int i = 1; i <= n; i++){
		int bt;
		cin >> bt;
		b[i] = b[i - 1] + bt;
	}
	b[n + 1] = b[n];


	int ans = 0;
	for (int i = 0; i <= n; i++){ 
		int l = i, r = n + 1;
		while(r - l > 1){
			int mid = (l + r) / 2;
			if (b[mid] - b[i] <= t)
				l = mid;
			else
				r = mid;
		}

		if (l - i > ans)
			ans = l - i;
	}
	cout << ans << endl;
}

