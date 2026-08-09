class Solution {
public:
    int characterReplacement(string s, int k) {

        int n = s.length();

        int low = 0;
        int ans = 0;

        int freq[26] = {0};

        int maxFreq = 0;

        for(int high = 0; high < n; high++) {

            // current character ko window mein add karo
            freq[s[high] - 'A']++;

            // window mein sabse frequent character
            maxFreq = max(maxFreq, freq[s[high] - 'A']);

            // required replacements
            int len = high - low + 1;
            int diff = len - maxFreq;

            // agar replacements k se zyada hain,
            // window ko left se shrink karo
            while(diff > k) {

                freq[s[low] - 'A']--;

                low++;

                len = high - low + 1;
                diff = len - maxFreq;
            }

            // valid window
            ans = max(ans, high - low + 1);
        }

        return ans;
    }
};