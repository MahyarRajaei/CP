#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n, q;
	cin >> n >> q;
	long long p[n + 2];
	p[0] = 0;
	for (int i = 1; i <= n; i++) {
		long long temp;
		cin >> temp;
		p[i] = temp;
	}

	sort(p, p+n+1);
	for (int i = 1; i <= n; i++)
		p[i] += p[i - 1];
	p[n + 1] = p[n];
	
	for (int i = 0; i < q; i++) {
		int x, y;
		cin >> x >> y;
		long long ans = p[n - x + y] - p[n - x];
		cout << ans << endl;
	}

}

