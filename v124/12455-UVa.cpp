/*
Name: 12455 - Bars
Online Judge: UVa
Tags: Subsets
Complexity:
Tutorial: Find all the subsets using itrative method then find if there exsit a sum subset that there value = the target
*/


// C O D E


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int p, v, target; cin >> target >> p;
		string ans = "NO";
		vector<int>vec;
		vector<int>subset;

		for (int x = 0; x < p; x++)
		{
			cin >> v;
			vec.push_back(v);
		}
		subset.push_back(0);
		for (int x = 0; x < p; x++)
		{
			int t = subset.size();
			for (int y = 0; y < t; y++)
				subset.push_back(subset[y] + vec[x]);
		}
		for (int x = 0; x < subset.size(); x++)
			if (target == subset[x])ans = "YES";

		cout << ans << "\n";

	}
	return 0;
}
