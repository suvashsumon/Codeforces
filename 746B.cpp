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
	/*int n, len, mid;
	string str;
	cin>>n>>str;
	int m=n;
	len = str.size();
	while(n--)
	{
		mid = (len - 1)/2;
		cout<<str[mid];
		for(int i=mid+1; i<m;i++)
		{
			str[i-1]=str[i+1];
		}
		len--;
	}*/
	int n;
string s,d;
 cin>>n>>s;
 for(int i=0;i<n;i++){
  if((n-i)%2)
  	d=d+s[i];
  
  else
  	d=s[i]+d;

 }
 cout<<d;
	congrats_bro_you_solved_it;
}

