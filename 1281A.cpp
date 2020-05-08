/*****************************************************
	Suvash Kumar
	Computer Science & Engineering (CSE)
	University of Rajshahi
******************************************************/
#include<bits/stdc++.h>
#define FIO freopen("input.txt","r",stdin);
using namespace std;

int main(){
    FIO;
	int test;
	cin>>test;
	while(test--)
    {
        string str;
        cin>>str;
        int l = str.length();
        //cout<<"length: "<<l<<endl;
        if(str[l-1]=='o' && str[l-2]=='p') cout<<"FILIPINO"<<endl;
        else if(str[l-1]=='u' && str[l-2]=='s' && str[l-3]=='e' && str[l-4]=='d') cout<<"JAPANESE"<<endl;
        else if(str[l-1]=='u' && str[l-2]=='s' && str[l-3]=='a' && str[l-4]=='m') cout<<"JAPANESE"<<endl;
        else if(str[l-1]=='a' && str[l-2]=='d' && str[l-3]=='i' && str[l-4]=='n' && str[l-5]=='m') cout<<"KOREAN"<<endl;
    }
	return 0;
}
