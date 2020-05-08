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
	float a,b,c,d,k;
	int t;
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>d>>k;
		float x = ceil(a/c);
		float y = ceil(b/d);
		if(x+y<=k) cout<<int(x)<<" "<<int(y)<<endl;
		else cout<<-1<<endl;
	}
	congrats_bro_you_solved_it;
}

