class Solution {
public:
    string reverseWords(string s) {

        vector <string> ans;
        string word;
        
        for( int i =s.size()-1; i>=0 ; i--){
            if( s[i] == ' ' && word.size() > 0){
                reverse(word.begin(), word.end());
                ans.push_back(word);
                word = "";
            }
            else if ( s[i] != ' ') {
                word.push_back(s[i]);

            }    
        }
        if ( word !=""){
            reverse(word.begin(), word.end());
            ans.push_back(word);
        }


        // for( string s : ans){
        //     cout<<s ;
        // }cout<<"|";


        word = "";
        // cout<< "size  = " << ans.size();
        for(int i = 0 ; i< ans.size(); i++){
            // cout<<word<<endl;
            word+= ans[i];
            if ( i != ans.size()- 1 ){
                word += " ";
            }
        }


        return word;
    }
};