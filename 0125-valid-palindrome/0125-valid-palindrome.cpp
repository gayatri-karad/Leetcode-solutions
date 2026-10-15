class Solution {
public:
bool isAlphanumeric(char ch){//to check if a character is alphanumeric or not
         if(ch>='0'&& ch<='9' || tolower(ch)>='a'&&tolower(ch)<='z')return true;//cuz ch>=0 or <=9 compares the ASCII value rather than character digits. To check for numbers properly, use ch >= '0'
         else return false;
        }
    bool isPalindrome(string s) {
        
         int start=0,end=s.length()-1;
        while(start<end){
        if(!isAlphanumeric(s[start])){ //if(iaAlphanumeric will check if the character is alphanumeric...but we want to check when its not so ! this is written)
            start++;continue;
        }
        if(!isAlphanumeric(s[end])){
         end--;continue;
        }
        if(tolower(s[start])!= tolower(s[end])){//we converted all characters to lowercase
            return false;
            }
            start++;
            end--;
        }
      return true;
        
    }
};