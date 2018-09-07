Name: 10062 - Tell me the frequencies!
Online Judge: UVa
Tags: Frquency Array, Sort
Complexity:
Tutorial: Count the frequency of the chars then sort using pairs
*/


// C O D E


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int ascii [255], count = 0;
	char word[1001];
	while (gets(word))
	{
		int len = strlen(word);
		if (count++ != 0)cout << "\n";
		memset(ascii, 0, sizeof(ascii));
		vector<pair<int, int>> vec;
		for (int x = 0; x < len; x++)
			ascii[int(word[x])]++;

		for (int x = 0; x < 255; x++)
		{
			if (ascii[x] != 0)
				vec.push_back(make_pair(ascii[x],  255 -x));
		}

		sort(vec.begin(), vec.end());
		for (int x = 0; x < vec.size(); x++)
			cout << 255 - vec[x].second  << " " << vec[x].first << "\n";
	}
	return 0;

}
