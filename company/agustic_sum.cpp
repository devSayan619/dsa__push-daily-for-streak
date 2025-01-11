/*
You are given a string S which consists of numerical characters only. You need to calculate the sum of all the agustic values that are possible for string S. You can use the following method to calculate the agustic values of a given string: Revisit Later sincludecstringito // Read and char agusticval // write throw Fi 9 10 ← You can insert any number of '+' signs between the characters of a string to create a new string and then convert it into an integer to make it an agustic value. • For Example: the given string is "432", so all the possible agustic values of the string"432" are: 4+32, 43+2 4+3+2 and 432. Which are 36, 45, 9 and 432. Your task is to find and return a string representing the sum of all possible agustic values for the given string. Note: The number itself is also a possible agustic value Input Specification: input1: A string S. Output Specification: Return a string representing the sum of all possible agustic values for the given string.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Helper function to calculate all partitions and their sums
void calculatePartitions(const string& S, int index, long long currentSum, long long currentNumber, long long& totalSum) {
    // Base case: if we've reached the end of the string
    if (index == S.size()) {
        totalSum += currentSum + currentNumber;
        return;
    }

    // Continue the current number
    calculatePartitions(S, index + 1, currentSum, currentNumber * 10 + (S[index] - '0'), totalSum);

    // Split the current number and add it to the sum
    calculatePartitions(S, index + 1, currentSum + currentNumber, S[index] - '0', totalSum);
}

// Function to compute the sum of all possible agustic values
string agusticSum(string S) {
    long long totalSum = 0;
    calculatePartitions(S, 1, 0, S[0] - '0', totalSum);
    return to_string(totalSum);
}

// Main function for testing
int main() {
    string S;
    cout << "Enter a numerical string: ";
    cin >> S;

    string result = agusticSum(S);
    cout << "The sum of all possible agustic values is: " << result << endl;

    return 0;
}
