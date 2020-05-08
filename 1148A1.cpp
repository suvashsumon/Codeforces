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
    long long int r;
    cin>>r;
    if(r <= 3 || floor((double)(r-3)/2) != ceil((double)(r-3)/2))
    {
        cout<<"NO"<<endl;
    }
    else{
            unsigned long long int y = floor((double)(r-3)/2);
        cout<<1<<" "<<y<<endl;
    }
	congrats_bro_you_solved_it;
}

