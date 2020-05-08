/*
	Suvash Kumar SUMON
	B.Sc. Engineering
	Dept. of Computer Science & Engineering (CSE)
	University of Rajshahi
	suvashsumon@outlook.com
*/

#include<bits/stdc++.h>
#include <string>
#define congrats_bro_you_solved_it return 0;
#define cholo_suru_kora_jak() int main()

using namespace std;

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}

cholo_suru_kora_jak()
{
	int x, lol=1, count=0, i=1;
	cin>>x;
	int n = binaryToDecimal(x);
	//cout<<n;
    while(lol<=n)
    {
        count++;
        i+=4;
        lol*=i;
    }
    cout<<count;

	congrats_bro_you_solved_it;
}


