/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : Circular Array Rotation
Problem Link : https://www.hackerrank.com/challenges/circular-array-rotation
*/

#include <bits/stdc++.h>
using namespace std;


int main() {

	long long n, k, q;
	cin >> n >> k >> q;
	
	long long arr[n], carr[n];
	
	for(int i = 0; i < n; ++i) {cin >> arr[i];}
	
	k = k % n;
	int j = 0;
	
	for(int i = n - k; i < n; ++i) {
		carr[j] = arr[i];
		j++;
		
	}
	
	for(int i = 0; i < n - k; ++i) {
		carr[j] = arr[i];
		j++;
	}

	while(q--) {
		int index;
		cin >> index;
		
		cout << carr[index] << endl;
	}

	//system("pause");
    return 0;
}



