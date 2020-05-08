/*
	Suvash Kumar SUMON
	B.Sc. Engineering
	Dept. of Computer Science & Engineering (CSE)
	University of Rajshahi
	suvashsumon@outlook.com
*/

#include<bits/stdc++.h>
#define congrats_bro_you_solved_it return 0;
#define cholo_suru_kora_jak() int main()

using namespace std;

int fibonacci(int n)
{
    if(n<=1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

cholo_suru_kora_jak()
{
	int n,i,j,ck=0;
	int f[1500],arr[1500]={0};
    f[1]=1,f[2]=1,arr[1]=1;
    for(i=3; i<50; i++)
	{
      f[i] = f[i-1]+f[i-2];
      if(f[i]>1000) break;
      arr[f[i]]=1;
    }
    cin>>n;
    for(i=1; i<=n; i++)
	{
        if(arr[i])
            cout<<"O";
        else
            cout<<"o";
    }
	
	congrats_bro_you_solved_it;
}

