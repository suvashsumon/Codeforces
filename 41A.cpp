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
	int l1,l2,i,cnt=0,j;
    char s1[105],s2[105];
    scanf("%s%s",s1,s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0,j=l2-1; i<l1,j>=0; i++,j--)
    {
        if(s1[i]==s2[j])
        {
            cnt++;
        }
    }
    if(cnt==l1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
	congrats_bro_you_solved_it;
}

