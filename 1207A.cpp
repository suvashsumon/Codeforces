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
	int t;
    cin>>t;
    while(t--)
    {
        int b,p,f, d, ans, h, c;
        scanf("%d %d %d", &b, &p, &f);
        scanf("%d %d", &h, &c);
        b/=2;
        if(h>c){
            d=min(b,p);
            ans=d*h;
            b-=d;
            if(b>0){
                    ans+=min(b,f)*c;
            }
        }
        else{
            d=min(b,f);
            ans=d*c;
            b-=d;
            if(b>0){
                    ans+=min(b,p)*h;
            }
        }

        printf("%d\n", ans);
    }

	congrats_bro_you_solved_it;
}


