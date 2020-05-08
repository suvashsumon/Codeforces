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
	int n, m, z, i, j;
	int count = 0;

        for ( i=m; i<=z; i+=m)
            for (j=n; j<=i; j+=n)
                if (i == j)
                    count = count + 1;

        cout << count << endl;
	congrats_bro_you_solved_it;
}

