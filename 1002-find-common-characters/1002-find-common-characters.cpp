class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minFreq(26, INT_MAX);  // Track min frequency of each char

        for (string word : words) {
            vector<int> freq(26, 0);
            for (char c : word) {
                freq[c - 'a']++;  // Count frequency of each letter
            }

            for (int i = 0; i < 26; i++) {
                minFreq[i] = min(minFreq[i], freq[i]);  // Take min count across words
            }
        }

        vector<string> result;
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < minFreq[i]; j++) {
                result.push_back(string(1, i + 'a'));  // Add repeated common chars
            }
        }

        return result;
    }
};
