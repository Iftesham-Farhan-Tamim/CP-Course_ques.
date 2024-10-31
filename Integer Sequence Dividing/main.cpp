// You are given an integer sequence 1,2,…,𝑛
// . You have to divide it into two sets 𝐴
//  and 𝐵
//  in such a way that each element belongs to exactly one set and |𝑠𝑢𝑚(𝐴)−𝑠𝑢𝑚(𝐵)|
//  is minimum possible.

// The value |𝑥|
//  is the absolute value of 𝑥
//  and 𝑠𝑢𝑚(𝑆)
//  is the sum of elements of the set 𝑆.

// Input
// The first line of the input contains one integer 𝑛
//  (1≤𝑛≤2⋅109).

// Output
// Print one integer — the minimum possible value of |𝑠𝑢𝑚(𝐴)−𝑠𝑢𝑚(𝐵)|
//  if you divide the initial sequence 1,2,…,𝑛
//  into two sets 𝐴
//  and 𝐵.


// Examples
// Input:
// 3

// Output:
// 0

// Input:
// 5

// Output:
// 1

// Input:
// 6

// Output:
// 1


#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long totalSum = n * (n + 1) / 2;

    if (totalSum % 2 == 0) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }

    return 0;
}
