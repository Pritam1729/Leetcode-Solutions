class Solution {
public:
    int maxx(string s) {
        int maxt = 0;
        map <int,int> m;
        for(int i = 0;i<s.length();i++) m[s[i]]++;
        for(auto i: m) return i.second;
        return maxt;
    }

    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector <int> v;
        vector <int> qui;
        for(int i = 0;i<queries.size();i++) qui.push_back(maxx(queries[i]));
        vector <int> vtr;
        for(int i = 0;i<words.size();i++) vtr.push_back(maxx(words[i]));
        for(int i = 0;i<qui.size();i++) {
            int count = 0;
            for(int j = 0;j<words.size();j++) {
                if(vtr[j]>qui[i]) count++;
            }
            v.push_back(count);
        }
        return v;
    }
};
