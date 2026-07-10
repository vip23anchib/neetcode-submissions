class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        
        unordered_map <string , vector<string>> grp_anagram;
        for(int i=0;i<strs.size();i++){
            string key=strs[i];
            sort(key.begin(),key.end());
            
            grp_anagram[key].push_back(strs[i]);
        }
        vector<vector< string>> answer;
        for( auto &it : grp_anagram){
            answer.push_back(it.second);
        }
        return answer;
    }
};
