/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : Compare The Triplets
Problem Link : https://www.hackerrank.com/challenges/compare-the-triplets
*/

#include <bits/stdc++.h>
using namespace std;


int main() {

	int alice = 0, bob = 0;
	
    int a[3], b[3];
    for(int i = 0; i < 3; ++i) {cin >> a[i];}
    for(int i = 0; i < 3; ++i) {cin >> b[i];}
    
    for(int i = 0; i < 3; ++i) {
        if(a[i] > b[i]){
            alice++;
        }
        else if(a[i] < b[i]) {
            bob++;
        }
    }
	
	cout << alice << " " << bob << endl;
	
    return 0;
}



