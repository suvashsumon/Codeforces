/*
	Suvash Kumar SUMON
	B.Sc. Engineering
	Dept. of Computer Science & Engineering (CSE)
	University of Rajshahi
	suvashsumon@outlook.com
*/

#include<bits/stdc++.h>
#define congrats_bro_you_solve_it return 0;
#define cholo_suru_kora_jak() int main()

using namespace std;

cholo_suru_kora_jak()
{
	int n,i,j,ck=0,a,dk=0,k,ek=0,b,c;
 	cin>>n;
 	int arr[n];
 	for(i=1; i<=n ; i++){
       cin>>arr[i];
 	}
 	for(i=1; i<=n; i++){
      if(arr[arr[arr[i]]]==i){
        ck++;
      }
 	}
 	if(ck)
		{
       		cout<<"YES"<<endl;
 		}
	else
		{
 	    	cout<<"NO"<<endl;
 		}
	congrats_bro_you_solve_it;
}

