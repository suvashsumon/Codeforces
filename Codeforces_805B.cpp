// This code is generated by ProgAst on Fri Mar 27 20:05:38 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-805B.cpp
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
	long long int Length;
	cin>>Length;
	if(Length==1) cout<<"a";
	else if(Length==2) cout<<"ab";
	else if(Length==3) cout<<"aab";
	else{
        for(int i=1; i<=Length; i++)
        {
            if(i%4==1 || i%4==2) cout<<"a";
            else if(i%4==3 || i%4==0) cout<<"b";
        }
	}

	return 0;
}
