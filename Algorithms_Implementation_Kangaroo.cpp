/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : Kangaroo
Problem Link : https://www.hackerrank.com/challenges/kangaroo
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int i1, v1, i2, v2, cnt = 0;
    cin >> i1 >> v1 >> i2 >> v2;

    if(v1 <= v2) {
            cout << "NO" << endl;
        }
    else if((i2 - i1) % (v1 - v2) == 0) {
            cout << "YES" << endl;
        }
    else {
        cout << "NO" << endl;
        }

    return 0;
}
