/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : MinMax Sum
Problem Link : https://www.hackerrank.com/challenges/mini-max-sum
*/

#include <bits/stdc++.h>
using namespace std;


int main() {

    long long arr[5], i, mini = 0, maxi = 0;

    for(i = 0; i < 5; ++i) {cin >> arr[i];}

    sort(arr, arr + 5);

    for(i = 0; i < 4; ++i) {
        mini += arr[i];
    }

    for(i = 1; i < 5; ++i) {
        maxi += arr[i];
    }

    cout << mini << " " << maxi << endl;
return 0;
}
