// This code is generated by ProgAst on Mon Mar 30 20:38:06 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-515A.cpp
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
	long long int A, B, Steps;
	cin>>A>>B>>Steps;
	if(abs(A)+abs(B)<=Steps && (Steps-abs(A)-abs(B))%2==0) cout<<"Yes";
	else cout<<"No";

	return 0;
}
