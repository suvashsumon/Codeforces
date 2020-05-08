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
	int i,j,len,l1,l2,ans;
	char a[200005],b[200005];

    while (scanf("%s %s",&a,&b) != EOF)
    {
        l1 = strlen(a);
        l2 = strlen(b);

        ans = 0;

        for (i=l1-1,j=l2-1; i>=0,j>=0; i--,j--)
            if (a[i] != b[j])
                break;

        if (i != -1)
            ans += (i+1);
        if (j != -1)
            ans += (j+1);

        cout<<ans;
    }
	congrats_bro_you_solved_it;
}

