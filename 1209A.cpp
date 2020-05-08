/********************************************************
	Suvash Kumar SUMON
	B.Sc. Engineering
	Dept. of Computer Science & Engineering (CSE)
	University of Rajshahi
	suvashsumon@outlook.com
*********************************************************/

#include<bits/stdc++.h>
#define congrats_bro_you_solved_it return 0;
#define cholo_suru_kora_jak() int main()

using namespace std;

cholo_suru_kora_jak()
{
	int n, count = 0;  // n = number of integer, count = for count the colors
	cin>>n;
	int arr[110];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr,arr+n); // sort the arrey
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]!=0){ // enter if arr[i] is not zero
					if(arr[j]%arr[i]==0){ // reminder = 0 means arr[j] is divisable
					arr[j]=0;
				}
			}
		}
	}
	
	for(int i=0; i<n; i++){
		if(arr[i]!=0) count++;
		//cout<<count<<endl;
	}
	
	cout<<count;
	congrats_bro_you_solved_it;
}

