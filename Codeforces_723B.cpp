// This code is generated by ProgAst on Mon Mar 30 22:26:55 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-723B.cpp
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
    int Length,A=0,B=0,Len=0;
    bool Flag = false;
    char Str[300];
    cin>>Length>>Str;
    for(int i=0; i<Length; ++i)
    {
        if(Str[i]=='(')
        {
            Flag=true;
            if(Len)
            {
                A=max(A,Len);
                Len=0;
            }
        }
        else if(Str[i]==')')
        {
            Flag=false;
            if(Len)
            {
                ++B;
                Len=0;
            }
        }
        else if(Str[i]=='_')
        {
            if(Len)
            {
                if(Flag)
                    ++B;
                else
                    A=max(A,Len);
                Len=0;
            }
        }
        else
            ++Len;
    }
    if(Len)
        A=max(A,Len);
    cout<<A<<" "<<B;

    return 0;
}
