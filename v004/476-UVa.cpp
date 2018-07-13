/*
Name: Points in Figures: Rectangles
Online Judge: UVa
Tags: Polygons, points
Complexity:
Tutorial: Just check if the point is between those two rectangle points or not
*/


// C O D E


#include <bits/stdc++.h>
using namespace std;

struct point
{
	double x, y;

	point() { x = y = 0.0; }
	point(double _x, double _y) : x(_x), y(_y) {}

};

int main()
{
	char ch; int c = 0, cn = 1;
	double x, y, x1, y1, x3, y3;;
	vector<vector<point>> P(12);
	while (true)
	{
		cin >> ch; if (ch == '*')break;
		if (ch == 'r')
		{
			cin >> x1 >> y1 >> x3 >> y3;
			P[c].push_back(point(x1, y1));
			P[c].push_back(point(x3, y3));
			c++;
		}
	}

	while (true)
	{
		cin >> x >> y; int contain = 0;
		if (x == 9999.9 && y == 9999.9)break;

		for (int i = 0; i < c; i++)
		{
			point p1(x, y); bool check = 0;
			if (p1.x > P[i][0].x && p1.x < P[i][1].x
			        && p1.y < P[i][0].y && p1.y > P[i][1].y)
			{
				contain = 1;
				cout << "Point " << cn << " is contained in figure " << i + 1 << endl;
			}
		}
		if (!contain)cout << "Point " << cn << " is not contained in any figure" << endl;
		cn++;
	}


	return 0;
}
