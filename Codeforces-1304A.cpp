// This code is generated by ProgAst on Sun Mar 22 19:34:51 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-1304A.cpp
// Problem Link: https://codeforces.com/contest/1304/problem/A

#include<bits/stdc++.h>
using namespace std;

#define fio freopen("input.txt","r",stdin);

int main()
{
	fio;
	int t;
	long long int posX, posY, hopX, hopY;
	cin>>t;
	while(t--)
    {
        cin>>posX>>posY>>hopX>>hopY;
        if(abs(posX-posY)%(hopX+hopY)==0) cout<<abs(posX-posY)/(hopX+hopY)<<endl;
        else cout<<"-1"<<endl;
    }
	return 0;
}