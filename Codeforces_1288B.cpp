// This code is generated by ProgAst on Fri Mar 27 20:57:18 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-1288B.cpp
// Problem Link:

// Author : Suvash Kumar Sumon

#include<bits/stdc++.h>
using namespace std;

#define fio freopen("input.txt","r",stdin);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	fio;
	int Test;
	cin>>Test;
	while(Test--)
    {
        long long int A, B, Digit;
        cin>>A>>B;
        Digit = log10(B+1);
        cout<<A*Digit<<endl;
    }

	return 0;
}
