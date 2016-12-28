/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : Time Conversion
Problem Link : https://www.hackerrank.com/challenges/time-conversion
*/

#include <bits/stdc++.h>
using namespace std;


int main() {

	string s;
	cin >> s;
	
	int hour = 0, min = 0, sec = 0;
	
	for(int i = 0; i < 2; ++i) {
		hour = hour * 10 + ( s[i] - '0' );
	}	
	
	if(s[8] == 'A' && s[0] == '1' && s[1] == '2') {
		cout << "00:" << s[3] << s[4] << ":" << s[6] << s[7] << endl;
	}
	else if(s[8] == 'P' && s[0] == '1' && s[1] == '2') { 
		for(int i = 0; i < s.size() - 2; ++i) {cout << s[i];}
		cout << endl;
	}
	else if(s[8] == 'A') {
		for(int i = 0; i < s.size() - 2; ++i) {cout << s[i];}
		cout << endl;
	}
	else if(s[8] == 'P') {
		cout << hour + 12 << ":" << s[3] << s[4] << ":" << s[6] << s[7] << endl;
	}
	
    return 0;
}



