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
	int a,b,c;
    cin>>a>>b;
    c=max(a,b);
    c=(6-c)+1;
    if(c%2==1)
    {
        if(c==3)
            cout<<"1/2\n";
        else
            printf("%d/6\n",c);
    }
    else
    {
        if(c==4)
            cout<<"2/3\n";
        else
            printf("1/%d\n",6/c);
    }
	
	congrats_bro_you_solved_it;
}

