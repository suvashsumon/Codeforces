// This code is generated by ProgAst on Tue Mar 24 11:26:52 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-215B.cpp
// Problem Link:

// � Suvash Kumar Sumon

#include<bits/stdc++.h>
using namespace std;

#define fio freopen("input.txt","r",stdin);

int main()
{
    ios_base::sync_with_stdio(false);
    //fio;

    int t,n,y,a,b,c,d,e;
    double x;
    t = 1;
    while(t--)
    {
        a = b = 0, c = 5e5 + 5;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &y);
            a = max(a, y);
        }
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &y);
            b = max(b, y);
        }
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &y);
            c = min(c, y);
        }
        scanf("%d%d", &d,&e);
        x = (double) (a * sqrt((double) (e * b) / (d * c + e * b)));
        printf("%.16f\n", x);
    }
    return 0;
}