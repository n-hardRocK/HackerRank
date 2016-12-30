/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : designer-pdf-viewer
Problem Link : https://www.hackerrank.com/challenges/designer-pdf-viewer
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

    int arr[26];
    for(int i = 0; i < 26; ++i) {cin >> arr[i];}

    int height = 0;

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); ++i) {
        height = max(height, arr[s[i] - 'a']);
    }

    cout << s.size() * height << endl;
return 0;
}
