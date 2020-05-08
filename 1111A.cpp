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
	string arr, brr;
    cin >> arr;
    cin >> brr;

    long long int ln1 = arr.size();
    long long int ln2 = brr.size();

    if(ln1 != ln2){
        return cout << "NO" << endl,0;
    }


    long long int ck = 0;
    for(long long int i = 0; i < ln1; i++){

        if(arr[i] == 'a' || arr[i] == 'e' || arr[i]=='i' || arr[i] =='o' || arr[i] == 'u'){
            if(brr[i] != 'a' && brr[i] != 'e' && brr[i]!='i' && brr[i] !='o' && brr[i] != 'u')
                return cout << "NO" << endl,0;
        }
        else if(arr[i] != 'a' && arr[i] != 'e' && arr[i]!='i' && arr[i] !='o' && arr[i] != 'u'){
            if(brr[i] == 'a' || brr[i] == 'e' || brr[i]=='i' || brr[i] =='o' || brr[i] == 'u')
                return cout << "NO" << endl,0;
        }
    }

    cout << "YES" << endl;
	congrats_bro_you_solved_it;
}

