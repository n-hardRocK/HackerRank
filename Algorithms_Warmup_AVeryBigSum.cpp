/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : A Very Big Sum
Problem Link : https://www.hackerrank.com/challenges/a-very-big-sum
*/

#include <bits/stdc++.h>
using namespace std;


int main() {

	int T;
	cin >> T;
	long long sum = 0;
	
	while(T--) {

		long long val;
		cin >> val;
		sum += val;
	}
	cout << sum << endl;
    return 0;
}



