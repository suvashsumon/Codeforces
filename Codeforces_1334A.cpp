// This code is generated by ProgAst on Fri Apr 10 21:15:11 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-1334A.cpp
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
    int test;
    cin>>test;
    while(test--)
    {
        int moments;
        cin>>moments;
        int pc=0, pp=0, p[moments], c[moments];
        bool flag = true;
        for(int i=0; i<moments; i++)
        {
            cin>>p[i]>>c[i];
        }
        for(int i=0; i<moments; i++)
        {
            //cout<<"p c "<<(p[i]-pp)<<" "<<(c[i]-pc)<<endl;
            //if(pp<=p[i] && pc<=c[i])
            if(((p[i]-pp) >= (c[i]-pc)) && ((p[i]-pp)>=0) && ((c[i]-pc)>=0))
            {
                //cout<<"in 1"<<endl;
                pp = p[i];
                pc = c[i];
            }
            else
            {
                //cout<<"p c"<<pp<<pc<<endl;
                //cout<<"in wrong"<<endl;
                flag = false;
                break;
            }
        }
        if(flag==false)
            cout<<"no"<<endl;

        else
            cout<<"yes"<<endl;
        //cout<<endl;
    }

    return 0;
}
