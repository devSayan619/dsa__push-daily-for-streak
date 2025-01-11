/*
Form Alternating String
Problem Description
Thara suggested, "How about we have some fun with binary strings?"

Let's get started!

Thara will give you a binary string made up of 0s and 1s, along with an array of values indicating the worth of each character. Your first objective is to remove zero or more characters to form the largest alternating string possible. After achieving that, your second goal is to maximize the worth of this largest alternating string.

A string is considered an alternating string if it contains characters that alternate without repeating, such as 010101 or 101010.

Thara asked you about the worth of the characters that need to be removed. Can you determine that?

Constraints
2 <= length of the binary string <= 10000

1 <= worth of each character <= 1000

the binary string will have at least one pair of 0 and 1.

Input
First line consists of a binary string of length N.

The second line consist of N space separated integers representing the worth of corresponding characters.

Output
Print an integer that represents the sum of worth of the characters that must be deleted to transform the given string into the largest alternating string with the maximum worth.

Time Limit (secs)
1

Examples
Example 1

Input

100101110110

5 19 8 7 6 15 4 3 2 1 10 8

Output

16

Explanation

Given binary string is 100101110110. It's worth is 88.

By removing the characters at indices {2, 6, 7, 9} using 0-based indexing, we obtain the string 10101010, which is the longest alternating string possible. Therefore, the total worth of all the removed characters is 16. Thus, print this value as output.

Example 2

Input

0111010111010

4 3 6 9 12 15 2 4 6 8 10 1 5

Output

19

Explanation

Given binary string is 0111010111010. It's worth is 66.

By removing the characters at indices {1, 2, 7, 8} using 0-based indexing, we obtain the string 010101010, which is the longest alternating string possible. Therefore, the total worth of all the removed characters is 19. Thus, print this value as output.
*/


#include<iostream>
#include<vector>
using namespace std;

int main() {
    string str;
    cin >> str;
    int size = str.length();
    int ans = 0;
    vector<int> sol(size);
    for (int index = 0; index < size; ++index){
        cin >> sol[index];
    } 
    int lower = str[0] - '0', change = sol[0];
    int sec = 1;while( sec < size){if(str[sec]-'0' == lower) {ans += min(change, sol[sec]);change = max(change, sol[sec]);}else{lower = str[sec] - '0';change = sol[sec];}++sec;}cout << ans;return 0;
}  