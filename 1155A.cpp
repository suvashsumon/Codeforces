/****************************************************************
	Suvash Kumar SUMON
	B.Sc. Engineering
	Dept. of Computer Science & Engineering (CSE)
	University of Rajshahi
	suvashsumon@outlook.com
*****************************************************************/

#include<bits/stdc++.h>
#define congrats_bro_you_solved_it return 0;
#define cholo_suru_kora_jak() int main()

using namespace std;

cholo_suru_kora_jak()
{
	int n;
	cin>>n;
    string s;
	cin>>s;
    for(int i=1; i<n; i++){
        if(s[i]<s[i-1])
        {
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1;
            return 0;
        }
    }
    cout<<"NO"<<endl;
	congrats_bro_you_solved_it;
}

