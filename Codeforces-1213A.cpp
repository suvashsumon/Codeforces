// This code is generated by ProgAst on Sun Mar 22 19:16:11 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-1213A.cpp
// Problem Link: https://codeforces.com/contest/1213/problem/A

#include<bits/stdc++.h>
using namespace std;

#define fio freopen("input.txt","r",stdin);

int main()
{
	fio;
	int test, outer, inner;
	cin>>test;
	while(test--)
    {
        cin>>outer>>inner;
        if(outer%inner==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
