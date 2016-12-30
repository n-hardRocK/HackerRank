/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : Utopian Tree
Problem Link : https://www.hackerrank.com/challenges/utopian-tree
*/

#include <bits/stdc++.h>
using namespace std;


int main() {

    int T;
    cin >> T;

    while(T--) {
        int n;
        cin >> n;

        int height = 1;

        for(int i = 1; i <= n; ++i) {
            if(i % 2 != 0) {
            height = height * 2;
        }
            if(i % 2 == 0) {
                height = height + 1;
            }
        }

        cout << height << endl;
    }

return 0;
}
