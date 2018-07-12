/*
Name: The Seasonal War
Online Judge: UVa
Tags: Flood fill
Complexity:
Tutorial: Just make a flood fill and find the number we calls the fill fucntion
*/


// C O D E


#include <bits/stdc++.h>
using namespace std;

vector<string> matrix;
int visited[26][26] = {{0, 0}, {0, 0}};
int n;
static int moves[8][2] = { { -1, 0 }, { 0, -1 }, { 1, 0 },
	{ 0, 1 }, { -1, 1 }, { -1, -1 }, { 1, -1 }, { 1, 1 }
};

void fill(int x, int y)
{
	if (x >= n || y >= n || x < 0 || y < 0 )return;
	if (visited[x][y] == 1)return;
	visited[x][y] = 1;
	if (matrix[x][y] == '0')return;

	for (int i = 0; i < 8; i++)
		fill(x + moves[i][0], y + moves[i][1]);
}
int main()
{
	int cn = 1;
	while (cin >> n)
	{
		string w; int ans = 0;
		matrix = vector<string>(n);
		for (int x = 0; x < n; x++)
		{
			cin >> w;
			matrix[x] = w;
		}
		for (int x = 0; x < n; x++)
			for (int y = 0; y < n; y++)
				if (!visited[x][y] && matrix[x][y] == '1')
				{
					ans++;
					fill(x, y);
				}
		cout << "Image number " << cn++ << " contains " << ans << " war eagles." << endl;
		memset(visited, 0, sizeof(visited[0][0]) * 26 * 26);

	}

	return 0;
}
