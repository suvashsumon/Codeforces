// This code is generated by ProgAst on Sun Mar 29 18:29:44 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-887G.cpp
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
    int Groups, Count = 0, Max = 0;
    cin>>Groups;
    string Matrix[Groups];
    for(int i=0; i<Groups; i++)
    {
            cin>>Matrix[i];
    }
    //cout<<Matrix[1][6]<<endl;
    for(int j=0; j<7; j++)
    {
        for(int i=0; i<Groups; i++)
        {
            if(Matrix[i][j]=='1')
            {
                Count++;
            }
        }
        Max = max(Max,Count);
        Count = 0;
    }
    cout<<Max;
    return 0;
}
