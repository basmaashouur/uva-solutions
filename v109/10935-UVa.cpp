/*
Name: 10935 - Throwing cards away I
Online Judge: UVa
Tags: Deque
Complexity:
Tutorial: Just push and pop from and into deque and handle the trailing and leading spaces case
*/


// C O D E


#include <bits/stdc++.h>
using namespace std;


int main()
{
	while (true)
	{
		int n; cin >> n;
		if (n == 0)break;
		deque<int>deq;
		vector<int>vec;
		for (int x = 1; x <= n; x++)
			deq.push_back(x);
		while (deq.size() != 1)
		{
			vec.push_back(deq.front());
			deq.pop_front();
			deq.push_back(deq.front());
			deq.pop_front();

		}
		cout << "Discarded cards:";
		for (int x = 0; x < vec.size(); x++)
		{
			if (x == 0)cout << " ";
			cout << vec[x];
			if (x != vec.size() - 1) cout << ", ";
		}
		cout << "\n";
		cout << "Remaining card: " << deq[0] << "\n";
	}
	return 0;
}
