// This code is generated by ProgAst on Tue Apr 07 22:39:00 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-58A.cpp
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
	string Hello = "hello", Input;
	cin>>Input;
	for(int i=0, j=0; i<Input.size(); i++)
    {
        if(Input[i]==Hello[j]) j++;

        if(j==5)
        {
            cout<<"YES";
            return 0;
        }
    }
	cout<<"NO";
	return 0;
}
