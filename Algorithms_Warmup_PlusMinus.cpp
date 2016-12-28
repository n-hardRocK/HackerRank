/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : PlusMinus
Problem Link : https://www.hackerrank.com/challenges/plus-minus
*/

#include <bits/stdc++.h>
using namespace std;


int main() {

	int T, tot, pos = 0, zero = 0, neg = 0;
	cin >> T;
    tot = T;
    
	while(T--) {
		int val;
		cin >> val;
			
		if(val == 0) {zero++;}
		if(val > 0) {pos++;}
		if(val < 0) {neg++;}

	}

	cout << fixed << setprecision(6);
	cout << (double) pos / tot << endl;
	cout << (double) neg / tot << endl;
	cout << (double) zero / tot << endl;

    return 0;
}



