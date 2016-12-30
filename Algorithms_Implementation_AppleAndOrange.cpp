/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : apple-and-orange
Problem Link : https://www.hackerrank.com/challenges/apple-and-orange
*/

#include <bits/stdc++.h>
using namespace std;


int main() {

	int end1, end2, a, b, m, n, cnt1 = 0, cnt2 = 0;
	cin >> end1 >> end2 >> a >> b >> m >> n;
	
	int apple[m], orange[n];
	
	for(int i = 0; i < m; ++i) {
		int val_a = 0;
		cin >> apple[i];
		val_a = a + apple[i];
		if(val_a >= end1 && val_a <= end2) {cnt1++;}		
	}
	
	for(int i = 0; i < n; ++i) {
		int val_o = 0;
		cin >> orange[i];
		val_o = b + orange[i];
		if(val_o >= end1 && val_o <= end2) {cnt2++;}		
	}	
	
	cout << cnt1 << "\n" << cnt2 << endl;
    return 0;
}



