// This code is generated by ProgAst on Sat Mar 28 21:59:55 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-1118A.cpp
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
	int Test;
	cin>>Test;
	while(Test--)
    {
        long long int N, A, B, Ans;
        cin>>N>>A>>B;
        if(B/2.00<A) Ans = (N/2)*B+(N%2)*A;
        else Ans = N*A;
        cout<<Ans<<endl;
    }

	return 0;
}