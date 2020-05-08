// This code is generated by ProgAst on Fri Mar 27 22:28:10 BDT 2020
// ProgAst Developer : Suvash Kumar Sumon, suvashkumar.naogaon@gmail.com
// File Name: Codeforces-1041B.cpp
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
	long long int Width, Height, A, B, DivA, DivB;
	cin>>Width>>Height>>A>>B;
	long long int gcd = __gcd(A,B);
	A = A/gcd;
	B = B/gcd;
	DivA = Width/A;
	DivB = Height/B;
	cout<<min(DivA,DivB);
	return 0;
}