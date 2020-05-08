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
	int n,i;
    scanf("%d",&n);
    int sum=n;
    for(i=1;i<n;i++){
        sum+=(n-i)*i;
    }
    printf("%d\n",sum);
	congrats_bro_you_solved_it;
}
