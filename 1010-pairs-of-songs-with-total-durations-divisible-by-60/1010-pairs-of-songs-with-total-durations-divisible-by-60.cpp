class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> count(60, 0);  // to store frequency of remainders
        int pairs = 0;

        for (int t : time) {
            int r = t % 60;                // remainder
            int complement = (60 - r) % 60; // needed partner remainder

            pairs += count[complement];    // add how many such partners seen before
            count[r]++;                    // mark current remainder
        }

        return pairs;
    }
};
