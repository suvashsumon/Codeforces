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
    long long int row, col = 0, tc, t = 1;

    cin>>tc;

    while (tc--){

        long long int  a, b, k;
        cin>>a>>b>>k;

        long long int ans = 0;

        if(k%2==1){
            long long int sd = (k/2)+1;
            long long int ans = (sd*a) - (k/2)*b;
            cout<<ans<<endl;
        }
        else{
            long long int ans = ((k/2)*a) - ((k/2)*b);
            cout<<ans<<endl;
        }
    }
	congrats_bro_you_solved_it;
}

