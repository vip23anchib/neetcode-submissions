class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        if(n > m)
            return false;

        vector<int> need(26, 0);
        vector<int> window(26, 0);

        // Frequency of s1
        for(char c : s1)
            need[c - 'a']++;

        // First window
        for(int i = 0; i < n; i++)
            window[s2[i] - 'a']++;

        if(need == window)
            return true;

        // Slide window
        for(int right = n; right < m; right++) {

            // Remove left character
            window[s2[right - n] - 'a']--;

            // Add new character
            window[s2[right] - 'a']++;

            if(need == window)
                return true;
        }

        return false;
    }
};