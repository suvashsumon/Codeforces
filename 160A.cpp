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
	int n, x, sum=0, count=0,ans=0;
	vector<int>vec;
	cin>>n;
	for(int i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
        sum+=x;
    }
    int taka = (sum/2)+1;
    sort(vec.begin(),vec.end());
    for(int i=n-1;i>=0;i--)
    {
        count+=vec[i];
        ans++;

        if(count>=taka) break;
    }
    cout<<ans<<endl;
	congrats_bro_you_solved_it;
}


