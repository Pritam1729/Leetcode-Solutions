class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string> temp;
        int n = text.length();
        int start = 0, i = 0;
        for(i=0; i<text.length(); i++){
            if(text[i] == ' '){
                string words = text.substr(start, i-start);
                temp.push_back(words);
                start = i+1;
            }
        }
        string words = text.substr(start, n-start);
        temp.push_back(words);
        int count = 0;

        vector<int> freq(26, 0);
        for(int j=0; j<brokenLetters.size(); j++){
            char singleChar = brokenLetters[j];
            int singleCharInt = singleChar - 'a';
            freq[singleCharInt]++;
        }

        for(int j=0; j<temp.size(); j++){
            string textWord = temp[j];
            int x = 0;
            for(x=0; x<textWord.size(); x++){
                int tempVar = textWord[x] - 'a';
                if(freq[tempVar] != 0){
                    break;
                }
            }
            if(x == textWord.size()){
                count++;
            }
        }
        return count;
    }
};
