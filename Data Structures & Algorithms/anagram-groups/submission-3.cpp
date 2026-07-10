class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        
        for(int i=0;i<strs.size();i++){
            vector <int> freq(26,0);
            for(char ch: strs[i]){
                freq[ch-'a']++;
                
            }
            string key = "";
            for(int i = 0; i < 26; i++){
                key += to_string(freq[i]);
                key += '#';
            }
            mp[key].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for (auto& pair : mp) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};
