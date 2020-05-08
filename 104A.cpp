/*********************************************************
	Suvash Kumar SUMON
	B.Sc. Engineering
	Dept. of Computer Science & Engineering (CSE)
	University of Rajshahi
	suvashsumon@outlook.com
**********************************************************/

#include<bits/stdc++.h>
#define congrats_bro_you_solved_it return 0;
#define cholo_suru_kora_jak() int main()

using namespace std;

cholo_suru_kora_jak()
{
	int n, x, ans = 0;
    cin>>n;
 
    x = n - 10;
    if(x==10) ans = 15;
    else if(x>0 && x<=11) ans = 4;
    else ans = 0;
 
    cout<<ans<<endl;
	congrats_bro_you_solved_it;
}

