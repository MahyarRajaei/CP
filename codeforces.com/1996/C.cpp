#include<bits/stdc++.h>
using namespace std;

typedef long long LL;


int alph['z' - 'a' + 1];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	
	while(t-- > 0) {
		LL n, q;
		cin >> n >> q;
		string a, b;
		cin >> a >> b;
		while(q-- > 0){
			LL l, r;
			cin >> l >> r;
			for (LL i = 0; i < 'z' - 'a' + 1; i++)
				alph[i] = 0;

			for (LL i = l-1; i < r; i++)
				alph[a[i] - 'a']++;

			for (LL i = l-1; i < r; i++)
				alph[b[i] - 'a']--;
			

			LL cnt = 0;
			for (LL i = 0; i < 'z' - 'a' + 1; i++)
				cnt += abs(alph[i]);

			cout << cnt/2 << endl;

		}
  	}

}

