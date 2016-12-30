/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : angry-professor
Problem Link : https://www.hackerrank.com/challenges/angry-professor
*/

#include <bits/stdc++.h>
using namespace std;


int main() {

    int T;
    cin >> T;

    while(T--) {
        int n, k, cnt = 0;
        cin >> n >> k;

        int arr[n];

        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
            if(arr[i] <= 0) {
                cnt++;
            }
        }

        cout << ((cnt >= k) ? "NO" : "YES") << endl;

    }
    return 0;
}
