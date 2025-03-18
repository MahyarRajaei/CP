#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	long long s[n+2];
	long long ps[n+2];
	s[0] = 0;
	s[n+1] = 0;
	ps[0] = 0;
	ps[n+1] = 0;
	for (int i = 1; i <= n; i++) {
		long long temp;
		cin >> temp;
		s[i] = temp;
		ps[i] = ps[i-1] + temp;
	}

	sort(s, s+n+1);
	for (int i = 1; i <= n; i++)
		s[i] += s[i-1];

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int t, l, r;
		cin >> t >> l >> r;
		
		long long ans = 0;
		if (t == 1)
			ans = ps[r] - ps[l-1];
		else if (t == 2)
			ans = s[r] - s[l-1];
		

		cout << ans << endl;
	}
	
	
}

