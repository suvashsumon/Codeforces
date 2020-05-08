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

int cheak_prime(long long int n)
{

    if(n==0 || n==1)
        return 0;

    for(long long int i=2; i<=sqrt(n); i++)
        if(n%i==0)
            return 0;

    return 1;
}

cholo_suru_kora_jak()
{
	int t;
    cin>>t;

    while(t--)
    {
        long long int a, b;
        cin>>a>>b;

        if(abs(a-b)==1 && cheak_prime(a+b))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
	congrats_bro_you_solved_it;
}


