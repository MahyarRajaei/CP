#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, cd;
	cin >> n >> cd;

	int d[cd];
	for (int i = 0; i < cd; i++)
		cin >> d[i];
	sort(d, d+cd);


	if (d[0] == 1 || d[cd-1] == n)
	{
		cout << "NO" << endl;
		return 0;
	}


	int cnt = 1;
	bool p = true;
	for(int i = 1; i < cd; i++)
	{
		if (d[i] - d[i-1] == 1)
			cnt++;
		else
			cnt = 1;

		if(cnt > 2)
		{
			p = false;
			break;
		}
	}

	
	if(p)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

