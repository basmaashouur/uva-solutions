/*
Name: Light, more light
Online Judge: UVa
Tags: Math
Complexity:
Tutorial: The problems need to find the amount of numbers that is divisible by n, after find it, if there are
even divisors then the light is off means we turn it on/off until it's off but if it's on means the final is on,
if we try to find the divsors using brute force we will git TLE, so we only need to know if the number
of divisor is odd or even, and there is a fact saying that the perfect sequare has odd divsors, so we only should find
if it's perfect sequare or not.
*/


// C O D E


#include <bits/stdc++.h>
using namespace std;

int main()
{
	while (true)
	{
		long long n ,t; cin >> n;
		if (n == 0)break;

		 t = sqrt(n);

		if (t*t == n)cout << "yes" << endl;
		else cout << "no" << endl;
	}

	return 0;
}


