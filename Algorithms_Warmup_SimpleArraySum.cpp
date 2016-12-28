/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : Simple Array Sum
Problem Link : https://www.hackerrank.com/challenges/simple-array-sum
*/

#include <bits/stdc++.h>
using namespace std;


int main() {

	int n, sum = 0;
	cin >> n;
	
	while(n--) {
		int val;
		cin >> val; 
		sum += val;
	}
	
	cout << sum << endl;
    return 0;
}



