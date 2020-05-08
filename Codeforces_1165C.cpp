// This code is generated by ProgAst on Mon Mar 30 21:51:21 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-1165C.cpp
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
    int Length;
    string Input;
    vector<char>Output;
    cin >> Length >> Input;
    for(int i=0; i<Length; i++)
    {
        if(Output.size() % 2 == 0 || Output.back() != Input[i])
            Output.push_back(Input[i]);
    }
    if(Output.size() % 2 == 1)
        Output.pop_back();
    cout << Length - int(Output.size()) << endl;
    for(int i=0; i<Output.size(); i++)
        cout<<Output[i];

    return 0;
}
