/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : bon-appetit
Problem Link : https://www.hackerrank.com/challenges/bon-appetit
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, k, charged, sum = 0;
    cin >> n >> k;
    int arr[n];

    for(int i = 0; i < n; ++i) {cin >> arr[i]; sum += arr[i];}

    cin >> charged;

    sum = sum - arr[k];

    sum = sum / 2;

    if(sum == charged) {
        cout << "Bon Appetit" << endl;
    }
    else {
        cout << abs(charged - sum) << endl;
    }

return 0;
}
