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

cholo_suru_kora_jak()
{
	/*int n, count=0;
	int ar[n], br[n];
	cin>>n;
	for(int i=0, j=n-1;i<n;i++, j--)
	{
		cin>>ar[i];
		br[j]=ar[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1; j<n;j++)
		{
			if(br[i]==br[j]) br[j]=0;
		}
		
	}
	for(int j=n-1; j>=0;j--)
	{
		if(br[j]!=0) count++;
	}
	cout<<count<<endl;
	for(int j=n-1; j>=0;j--)
	{
		if(br[j]!=0) cout<<br[j]<<" ";
	}*/
	int i,j,k,m,n,val,t=0,test,arr[1005];
 
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&val);
		arr[i]=val;
	}
    for(i=n-1;i>=0;i--)
	{
        if(arr[i]==0) continue;
        t++;
        for(j=0;j<i;j++)
        	if(arr[i]==arr[j])arr[j]=0;
 
    }
    printf("%d\n",t);
   for(i=0;i<n;i++) if(arr[i]!=0) printf("%d ",arr[i]);
	congrats_bro_you_solved_it;
}

