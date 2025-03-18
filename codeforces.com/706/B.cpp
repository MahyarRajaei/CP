#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int s[n+2];
	s[0] = 0;
	s[n+1] = 1e9 + 1;


	for (int i = 1; i < n+1; i++) {
		int t;
		cin >> t;
		s[i] = t;
	}

	sort(s, s + n + 1);


	int d;
	cin >> d;

	for (int i = 0; i < d; i++) {

		long long m;
		cin >> m;
		
		int l = 0, r = n + 1;
		while (r - l > 1) {

			int mid = (l + r) / 2;
			if (s[mid] > m)
				r = mid;
			else
				l = mid;
			
		}
	
		cout << l << endl;
	}

}

