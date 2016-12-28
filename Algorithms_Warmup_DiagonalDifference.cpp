/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : Diagonal Difference
Problem Link : https://www.hackerrank.com/challenges/diagonal-difference
*/

#include <bits/stdc++.h>
using namespace std;


int main() {

	int n, d1 = 0, d2 = 0;
	cin >> n;

	int arr[n][n], i = 0, k = n - 1;
	
	for(int row = 0; row < n; ++row) {
		for(int col = 0; col < n; ++col) {
			cin >> arr[row] [col];
			if(row == col) {
				d1 += arr[row][col];
			}
			if(row == i && col == k){
				d2 += arr[row][col];
                i++; k--;
			}  
		}
	}
	
	cout << abs(d1 - d2) << endl;
    return 0;
}



