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
	long long int flag1=0, flag2 = 0, t, a, i;
	t=4;
	vector<long long int>v1 ;
    while(t--) {
        cin>>a ;
        v1.push_back(a) ;
    }
    sort(v1.begin(),v1.end()) ;
    for(i=2 ; i<4 ; i++) {
        if(v1[i-2]+v1[i-1]==v1[i]) flag2=1 ;
        else if(v1[i-2]+v1[i-1]>v1[i]) flag1=1 ;
    }
    if(flag1) cout<<"TRIANGLE" ;
    else if(flag2) cout<<"SEGMENT" ;
    else cout<<"IMPOSSIBLE" ;
 
	congrats_bro_you_solved_it;
}

