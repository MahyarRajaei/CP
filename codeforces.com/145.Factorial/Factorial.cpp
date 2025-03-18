#include<bits/stdc++.h>
using namespace std;


int zeros(int x)
{
	int d = 5;
	int ans = 0;
	while (x >= d){
		int temp = x / d;
		ans += temp;
		x = temp;
	}
	
	return ans;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	long long q;
	cin >> q;

	if (q == 0)
	{

		cout << 1 << endl;
		return 0;
	}


	long long l = 0, r = 5 * q;
	while (r - l > 1){
		int mid = (l + r) / 2;

		if (zeros(mid) < q){
			l = mid;
		} else {

			r = mid;
		}
	}

	
	if (zeros(r) == q)
		cout << r << endl;
	else
		cout << "NO solution" << endl;
	
}

