// This code is generated by ProgAst on Tue Apr 07 23:14:10 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-208A.cpp
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
    string Remix;
    cin>>Remix;
    for(int i=0; i<Remix.size(); i++)
    {
        if(Remix[i]=='W' && Remix[i+1]=='U' && Remix[i+2]=='B')
        {
            cout<<" ";
            i=i+2;
        }
        else
            cout<<Remix[i];
    }


    return 0;
}
