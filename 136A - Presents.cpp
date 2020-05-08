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
	int n,e;
	int a[110];
    cin>>n;
    int x[n+10];
    for (int i = 0; i < n; ++i) {
        cin>>x[i];
    }
    for (int i = 0; i < n; ++i) {
        a[x[i]]=i+1;
    }
    for (int i = 1; i <= n; ++i) {
        cout<<a[i]<<" ";
    }
	congrats_bro_you_solved_it;
}

