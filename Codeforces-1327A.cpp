// This code is generated by ProgAst on Wed Mar 25 17:27:50 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-1327A.cpp
// Problem Link:

// Author : Suvash Kumar Sumon

#include<bits/stdc++.h>
using namespace std;

#define fio freopen("input.txt","r",stdin);

int main()
{
	ios_base::sync_with_stdio(false);
	//fio;
	int TestCase;
	cin>>TestCase;
	long long int Number, NumberOdds;
	while(TestCase--)
    {
        cin>>Number>>NumberOdds;
        if(NumberOdds*NumberOdds<=Number && NumberOdds%2==Number%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

	return 0;
}
