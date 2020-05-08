// This code is generated by ProgAst on Fri Apr 24 20:13:40 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-1343A.cpp
// Problem Link:

// Author : Suvash Kumar Sumon

#include<bits/stdc++.h>
using namespace std;

#define FOR(start, end)           for(int i=start; i<end; i++)
#define FORR(start, end)          for(int j=start; j<end; j++)
#define RFOR(start, end)          for(int k=start-1; k>=end; k--)
#define MEM(Name, type)           memset(Name, type, sizeof(Name))
#define lld                       long long int
#define fio                       freopen("input.txt","r",stdin);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	fio;
	int test;
	cin>>test;
	while(test--)
    {
        lld n;
        cin>>n;

        for(lld i=2; i<=29; i++)
        {
            lld k = pow(2,i);
            if(n%(k-1)==0) {cout<<n/(k-1)<<endl; break;}
        }
    }

	return 0;
}
