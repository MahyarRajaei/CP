#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

typedef long long LL;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	long n, m;
	cin >> n >> m;

	vector<long> d;
	for (int i = 0; i < m; i++) {
		long di;
		cin >> di;
		d.push_back(di);
	}
	d.push_back(n + 2);
	d.push_back(n + 3);



	sort(d.begin(), d.end());
		

	if (d[0] == 1 || d[m-1] == n) {
		cout << "NO" << endl;
		return 0;
	}

	for (int i = 0; i < m; i++)
		if (d[i+1] == d[i] + 1 && d[i + 2] == d[i] + 2 ){
			cout << "NO" << endl;
			return 0;
		}
	cout << "YES" << endl;
			

}

