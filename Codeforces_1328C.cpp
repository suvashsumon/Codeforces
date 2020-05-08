// This code is generated by ProgAst on Thu Mar 26 21:04:52 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-1328C.cpp
// Problem Link:

// Author : Suvash Kumar Sumon

#include<bits/stdc++.h>
using namespace std;

#define fio freopen("input.txt","r",stdin);

int main()
{
    ios_base::sync_with_stdio(false);
    fio;
    int Test;
    cin>>Test;
    while(Test--)
    {
        int Length, i;
        bool Flag = false;
        string InputString;
        cin>>Length>>InputString;
        char FirstArray[Length],SecondArray[Length];
        FirstArray[0] = '1';
        SecondArray[0] = '1';
        for(i=1; i<Length; i++)
        {
            if(InputString[i]=='1')
            {
                FirstArray[i] = '0';
                SecondArray[i] = '1';
                for(int j=i+1; j<Length; j++){
                    SecondArray[j] = '0';
                    FirstArray[j] = InputString[j];
                }
                break;
            }
            else if(InputString[i]=='0')
            {
                FirstArray[i] = '0';
                SecondArray[i] = '0';
            }
            else if(InputString[i]=='2')
            {
                FirstArray[i] = '1';
                SecondArray[i] = '1';
            }
        }

        for(int i=0; i<Length; i++)
            cout<<FirstArray[i];
        cout<<endl;
        for(int i=0; i<Length; i++)
            cout<<SecondArray[i];
        cout<<endl;
    }

    return 0;
}