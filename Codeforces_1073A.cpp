// This code is generated by ProgAst on Sun Apr 19 21:30:45 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-1073A.cpp
// Problem Link:

// Author : Suvash Kumar Sumon

#include<bits/stdc++.h>
using namespace std;

#define FOR(start, end)           for(int i=start; i<end; i++)
#define FORR(start, end)          for(int j=start; j<end; j++)
#define RFOR(start, end)          for(int k=start-1; k>=end; k--)
#define MEM(Name, type)           memset(Name, type, sizeof(Name))
#define lld                       long long int
#define fio                       freopen("input.txt","r",stdin);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //fio;
    int len;
    string str;
    cin>>len>>str;
    int high = len/2;
    for(int i=0; i<len-1; i++)
    {
        if(str[i]!=str[i+1])
        {
            cout<<"YES"<<endl<<str[i]<<str[i+1]<<endl;
            return 0;
        }

    }
    cout<<"NO"<<endl;

    return 0;
}
