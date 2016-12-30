/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : divisible-sum-pairs
Problem Link : https://www.hackerrank.com/challenges/divisible-sum-pairs
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, k, cnt = 0;
    cin >> n >> k;

    int arr[n];

    for(int i = 0; i < n; ++i) {cin >> arr[i];}

    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if((arr[i] + arr[j]) % k == 0) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

return 0;
}
