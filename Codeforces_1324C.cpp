// This code is generated by ProgAst on Thu Apr 09 21:56:42 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-1324C.cpp
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
	string commands;
	int temp = 1, Ans = 1, test;
	cin>>test;
	while(test--)
    {
        cin>>commands;
        for(int i=0; i<commands.size(); i++)
        {
            if(commands[i]=='L') temp++;
            else temp = 1;
            Ans = max(Ans, temp);
        }
        cout<<Ans<<endl;
        Ans = 1;
        temp = 1;
    }

	return 0;
}
