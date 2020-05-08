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
	int a[5],i,t1=0,t2=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    t1=(a[0]*a[1])+(a[3]*2);
    t2=(a[0]*a[2])+(a[4]*2);
    if(t1<t2)
    {
        printf("First");
    }
    else if(t2<t1)
    {
        printf("Second");
    }
    else
    {
        printf("Friendship");
    }
	congrats_bro_you_solved_it;
}

