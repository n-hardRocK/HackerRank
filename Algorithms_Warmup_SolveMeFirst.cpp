/*
Author : hardRocK
Date :
Online Judge : HackerRank
Problem Name : Solve Me First
Problem Link : https://www.hackerrank.com/challenges/solve-me-first
*/

#include <iostream>
using namespace std;


int solveMeFirst(int a, int b) {
        return a + b;   
}

int main() {
  int num1, num2, sum = 0;
  cin >> num1 >> num2;
  cout << solveMeFirst(num1,num2) << endl;
  return 0;
}



