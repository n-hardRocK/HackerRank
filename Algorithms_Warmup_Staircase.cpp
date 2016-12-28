/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : StairCase
Problem Link : https://www.hackerrank.com/challenges/staircase
*/

#include <bits/stdc++.h>
using namespace std;


int main() {

	int n, val1, val2;
	cin >> n;
	val1 = n;
	val2 = 1;
	
	for(int i = 1; i <= n; ++i){
		int space = 0, hash = 0;
		
		while(space != val1 - 1) {
			cout << " ";
			space++;
		}
		val1--;
		
		while(hash != val2) {
		cout << "#";
		hash++;
		}
		val2++;
		cout << "\n";
	}

    return 0;
}



