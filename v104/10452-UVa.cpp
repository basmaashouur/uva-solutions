/*
Name: 10452 - Marcus
Online Judge: UVa
Tags: Flood fill
Complexity:
Tutorial: Just itrate 7 times to find the exact directons from '@' to IEHOVA#"
*/


// C O D E


#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t, n, m, ex, wy;
	string w, target = "IEHOVA#";
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		vector<string>vec;
		vector<string>ans;
		for (int x = 0; x < n; x++)
		{
			cin >> w;
			vec.push_back(w);
			for (int y = 0; y < m; y++)
				if (w[y] == '@')ex = x, wy = y;
		}
		for (int x = 0; x < 7; x++)
		{
			if (ex - 1 >= 0 && vec[ex - 1][wy] == target[x])
			{
				ans.push_back("forth");
				ex--;
			}
			else if (wy + 1 < m && vec[ex][wy + 1] == target[x])
			{
				ans.push_back("right");
				wy++;
			}
			else
			{
				ans.push_back("left");
				wy--;
			}
		}

		for (int x = 0; x < 7; x++)
		{
			cout << ans[x];
			if (x == 6)cout << endl;
			else cout << " ";
		}
	}

	return 0;
}


