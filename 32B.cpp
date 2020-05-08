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
	char a[200];
    scanf("%s",a);
    int i,j;
    for(i=0;i<strlen(a);)
    {
        if(a[i]=='.')
        {
            printf("0");
            i++;
        }else if(a[i]=='-')
        {
            if(a[i+1]=='.')
            {
                printf("1");
                i+=2;
            }
            else if(a[i+1]=='-')
            {
                printf("2");
                i+=2;
            }
        }
    }
	congrats_bro_you_solved_it;
}

