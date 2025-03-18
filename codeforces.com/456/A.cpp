#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	int n;
	cin >> n;
	
	pair<int, int> p[n];
	for (int i = 0; i < n; i++){
		int f, s;
		cin >> f >> s;
		p[i].first = f;
		p[i].second = s;
	}
		
	sort(p, p+n);

	bool e = false;
	for (int i = 1; i < n; i++)
		if (p[i].second < p[i-1].second)
		{
			e = true;
			break;
		}
	if (e)
		cout << "Happy Alex" << endl;
	else
		cout << "Poor Alex" << endl;
		
}

