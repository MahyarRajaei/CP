#include<bits/stdc++.h>
using namespace std;

typedef long long LL;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	

	int x, y, z;
	int count = 0;
	for (x = a; x <= b; x++) {
		for (y = b; y <= c; y++){
			int l = c, r = d + 1;
			while(r - l > 1) {
				z = (l + r) / 2;
				if (x + y > z)
					l = z;
				else
					r = z;
			}
			count += l - c;
			if (x + y > l)
				count++;
		}
	}
	cout << count << endl;
}

