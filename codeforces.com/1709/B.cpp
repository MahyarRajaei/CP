#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	long long s[n + 2];
	long long sf[n + 2];
	long long sr[n + 2];
	
	s[0] = 0;
	for (int i = 1; i <= n; i++){
		long long temp;
		cin >> temp;
		s[i] = temp;
	}
	s[n + 1] = s[n];

	sf[0] = 0;
	for (int i = 1; i <= n; i++)
		if (s[i] < s[i - 1])
			sf[i] = sf[i - 1] + s[i - 1] - s[i];
		else 
			sf[i] = sf[i - 1];

	
	sr[n + 1] = 0;
	for (int i = n; i > 0; i--)
		if (s[i] < s[i + 1])
			sr[i] = sr[i + 1] + s[i + 1] - s[i];
		else
			sr[i] = sr[i + 1];
	sr[0] = sr[1];


	for (int i = 0; i < m; i++) {
	
		int s, t;
		cin >> s >> t;
		
		if (s < t)
			cout << sf[t] - sf[s] << endl;
		else
			cout << sr[t] - sr[s] << endl;
	}

}

