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
	   
        int a,b,sum=0,x=0,i,t1=0;
        scanf("%d%d",&a,&b);
        if(a>=b){
        for(i=a;i>=b;i=x)
        {
            t1=i/b;
            sum=sum+(t1*b);
            x=i-(t1*b)+t1;
        }
        sum=sum+x;
        printf("%d",sum);
        }
        else
        {
            printf("%d",a);
        }
     
	congrats_bro_you_solved_it;
}

