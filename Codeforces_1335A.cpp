// This code is generated by ProgAst on Mon Apr 13 20:38:21 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-1335A.cpp
// Problem Link:

// Author : Suvash Kumar Sumon

#include<bits/stdc++.h>
using namespace std;

#define fio freopen("input.txt","r",stdin);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//fio;
	int test;
	cin>>test;
	while(test--)
    {
        long long int x;
        cin>>x;
        if(x<=2) cout<<0<<endl;
        else
        {
            long long int temp = x%2;
            long long int ans = x/2;
            if(temp==0) cout<<ans-1<<endl;
            else cout<<ans<<endl;
        }
    }

	return 0;
}
