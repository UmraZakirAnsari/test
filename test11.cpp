#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;
// Function to process each test case
void process_test_case() {
    int n;
    cin >> n;

    vector<string> words(n);

    // Read the words for the current test case
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    unordered_set<string> seen_words;
    vector<string> result;

    // Iterate through the words, checking for uniqueness
    for (const auto& word : words) {
        if (seen_words.insert(word).second) {
            result.push_back(word);
        }
    }
    // Print the result for the current test case
    for (const auto& word : result) {
        cout << word << " ";
    }
    cout << endl;
}

// Main function to handle multiple test cases
int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        process_test_case();
    }

    return 0;
}
