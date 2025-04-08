#include<bits/stdc++.h>
using namespace std;

typedef long long LL;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	LL cnt[b + c + 2];
	for (LL i = 0; i < b + c + 2; i++)
		cnt[i] = 0;

	for (LL i = a; i <= b ; i++)
	{
		cnt[i + b]++;
		cnt[i + c + 1]--;
	}

	for (LL i = 1; i < b + c + 2; i++)
		cnt[i] += cnt[i - 1];

	for (LL i = 1; i < b + c + 2; i++)
		cnt[i] += cnt[i - 1];
	
	LL ans = 0;
	for(LL z = c; z <= d; z++) 
		if (z <= b + c)
		 	ans += cnt[b + c + 1] - cnt[z];
		
	cout << ans << endl;

}

