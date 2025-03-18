#include<bits/stdc++.h>
using namespace std;

long long pa(long long k, long long a[], int size, long long h){

	long long d = 0;
	for(int i = 1; i < size; i++){
		if (a[i] - a[i - 1] >= k){
			d += k;	
		} else {
			d += a[i] - a[i - 1];
		}
	
		if (d >= h)
			return d;
	}
	d += k;

	return d;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
		int n;
		cin >> n;
		long long  h;
		cin  >> h;

		long long a[n];
		for (int j = 0; j < n; j++) {
			long long temp;
			cin >> temp;
			a[j] = temp;
		}
		
		long long l = 0, r = h;
		while (r - l > 1){

			long long mid = (l + r) / 2;
			if (pa(mid, a, n, h) < h)
				l = mid;
			else
				r = mid;
		}
		cout << r << endl;
	}
}
