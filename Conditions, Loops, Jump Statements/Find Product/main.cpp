// Problem
// You have been given an array A of size N consisting of positive integers. You need to find and print the product of all the number in this array Modulo 10^9 + 7

// Input Format:
// The first line contains a single integer N denoting the size of the array. The next line contains N space separated integers denoting the elements of the array

// Output Format:
// Print a single integer denoting the product of all the elements of the array Modulo 10^9 + 7

// Sample Input
// 5
// 1 2 3 4 5

// Sample Output
// 120


#include <bits/stdc++.h>
using namespace std;

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	int arr[n];
	int ans = 1;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		ans *= arr[i];
	}

	cout << ans;

}


