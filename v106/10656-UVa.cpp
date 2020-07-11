
/*
Name: 10656 - Maximum Sum (II)
Online Judge: Uva
Tags: Greedy
Complexity: o(n) 
Tutorial: Just take the non zeros number, 
if all the array is zeros take one zero 
*/

// C O D E

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, v;
	while (cin >> n && n != 0)
	{
		vector<int> ans;
		for (int x = 0; x < n; x++)
		{
			cin >> v;
			if (v)
				ans.push_back(v);
		}
		if (ans.size() == 0)
			ans.push_back(0);

		for (int x = 0; x < ans.size(); x++)
		{
			cout << ans[x];
			if (x < ans.size() - 1)
				cout << " ";
			else
				cout << endl;
		}
	}

	return 0;
}
