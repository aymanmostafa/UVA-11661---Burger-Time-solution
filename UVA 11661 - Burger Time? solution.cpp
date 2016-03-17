//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();
//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 11661 - Burger Time?
	long long l, min, r, d;
	string s;
	while (cin >> l && l) {
		cin >> s;
		min = 1e9, d = r = -1;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'R')
				r = i;
			else if (s[i] == 'D')
				d = i;
			else if (s[i] == 'Z') {
				min = 0;
				break;
			}
			if (abs(r - d) < min && r != -1 && d != -1)
				min = abs(r - d);
		}
		cout << min << endl;
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
