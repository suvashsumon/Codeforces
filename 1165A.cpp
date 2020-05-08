/*
	Suvash Kumar SUMON
	B.Sc. Engineering
	Dept. of Computer Science & Engineering (CSE)
	University of Rajshahi
	suvashsumon@outlook.com
*/

#include<bits/stdc++.h>
#define congrats_bro_you_solved_it return 0;
#define cholo_suru_kora_jak() int main()

using namespace std;

cholo_suru_kora_jak()
{
	int n, x, y;
	string s;
	cin >> n >> x >> y >> s;
	
	int ans = 0;
	for (int i = n - x; i < n; ++i) {
		if (i == n - y - 1) ans += s[i] != '1';
		else ans += s[i] != '0';
	}
	
	cout << ans << endl;
	congrats_bro_you_solved_it;
}

