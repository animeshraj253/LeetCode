class Solution {
public:
    string reverseWords(string s) {

        vector <string> ans;
        string word;
        
        for( int i =0 ; i<s.size(); i++){
            if( s[i] != ' '){
                word+=s[i];
            }else if( !word.empty()){
                ans.push_back(word);
                word="";
            }
        }
        if ( word != ""){
            ans.push_back(word);
        }


        word = "";
        for( int i = ans.size() -1  ; i>=0; i--){
            word+= ans[i];
            if ( i != 0 ){
                word += " ";
            }
        }


        return word;
    }
};