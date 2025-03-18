#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	int n;
	cin >> n;

	int t[n];
	for (int i = 0; i < n; i++)
		cin >> t[i];

	sort(t, t+n);


	int tmp = t[0];
	int cnt = 1;
	for (int i = 1; i < n; i++)
		if (tmp <= t[i]){
			tmp += t[i];
			cnt ++;
		}


	cout << cnt << endl;



}

