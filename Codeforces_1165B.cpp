// This code is generated by ProgAst on Sat Mar 28 19:58:02 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-1165B.cpp
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
	int Contest, Count = 0;
	cin>>Contest;
	int Problems[Contest];
	for(int i=0; i<Contest; i++) cin>>Problems[i];
	sort(Problems,Problems+Contest);
	for(int i=0; i<Contest; i++)
    {
        if(Problems[i]>=Count+1){
            Count++;
        }
    }
    cout<<Count;

	return 0;
}