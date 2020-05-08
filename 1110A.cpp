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
	int b,k;
	int n=0;
	cin>>b>>k;
	int x;
	for(int i=1;i<=k;i++)
	{
    	cin>>x;
    	n=(n*b+x);
	}
	if(n % 2 == 0)
        cout << "even" << endl;
    else
        cout << "odd" << endl;
	congrats_bro_you_solved_it;
}

