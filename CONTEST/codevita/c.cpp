#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

// Function to calculate minimum deletions required to form target from substring
int minDeletions(const string &substring, const string &target) {
    int subIndex = 0, targetIndex = 0, deletions = 0;
    while (subIndex < substring.size() && targetIndex < target.size()) {
        if (substring[subIndex] == target[targetIndex]) {
            targetIndex++;
        } else {
            deletions++;
        }
        subIndex++;
    }
    deletions += (substring.size() - subIndex); // Remaining characters in substring
    return (targetIndex == target.size()) ? deletions : -1; // Return -1 if target is incomplete
}

// Main function
int main() {
    int n, K;
    cin >> n; // Number of substrings
    vector<string> substrings(n);
    for (int i = 0; i < n; i++) {
        cin >> substrings[i];
    }

    string mainString;
    cin >> mainString;
    cin >> K; // Allowed deletions

    int currentDeletions = 0;
    string formedString = "";
    bool possible = true;

    for (size_t i = 0; i < mainString.size();) {
        string target = "";
        bool matched = false;

        // Check for the best substring match
        for (const string &substring : substrings) {
            string tempTarget = mainString.substr(i);
            int deletions = minDeletions(substring, tempTarget);
            if (deletions != -1 && currentDeletions + deletions <= K) {
                matched = true;
                target = substring;
                currentDeletions += deletions;
                size_t j = 0, k = 0;

                // Form the matched part of the main string
                while (j < substring.size() && k < tempTarget.size()) {
                    if (substring[j] == tempTarget[k]) {
                        formedString += tempTarget[k];
                        k++;
                    }
                    j++;
                }
                i += k; // Move the pointer in mainString
                break;
            }
        }

        if (!matched) {
            possible = false;
            break;
        }
    }

    if (formedString == mainString && currentDeletions <= K) {
        cout << "Possible" << endl;
    } else if (formedString.empty()) {
        cout << "Nothing" << endl;
    } else if (!possible) {
        cout << "Impossible" << endl;
    } else {
        cout << formedString << endl;
    }

    return 0;
}
