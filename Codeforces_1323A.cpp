// This code is generated by ProgAst on Thu Mar 26 20:22:03 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-1323A.cpp
// Problem Link:

// Author : Suvash Kumar Sumon

#include<bits/stdc++.h>
using namespace std;

#define fio freopen("input.txt","r",stdin);

int main()
{
    ios_base::sync_with_stdio(false);
    fio;
    int TestCase, Length;
    cin>>TestCase;
    while(TestCase--)
    {
        cin>>Length;
        bool Flag = false;
        //cout<<Flag<<endl;
        int InputArray[Length], Index;
        for(int i=0; i<Length; i++)
        {
            cin>>InputArray[i];
            if(InputArray[i]%2==0)
            {
                //cout<<"lol"<<endl;
                Flag = true;
                Index = i;
                //cout<<Flag<<endl;
            }
        }
        if(Flag)
            cout<<1<<endl<<Index+1<<endl;
        else if(Length==1 && InputArray[0]%2!=0)
            cout<<"-1"<<endl;
        else
            cout<<2<<endl<<1<<" "<<2<<endl;
    }
    return 0;
}
