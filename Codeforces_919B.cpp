// This code is generated by ProgAst on Wed Apr 08 23:43:14 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-919B.cpp
// Problem Link:

// Author : Suvash Kumar Sumon

#include<bits/stdc++.h>
using namespace std;

#define fio freopen("input.txt","r",stdin);

bool isBeauty(int A)
{
    int Res = 0;
    while (A)
    {
        Res += A % 10;
        A /= 10;
    }
    return Res == 10;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //fio;
    int A = 10;
    int N;
    cin >> N;
    while (N)
    {
        A += 9;
        if (isBeauty(A))
        {
            N--;
        }
    }
    cout << A;

    return 0;
}
