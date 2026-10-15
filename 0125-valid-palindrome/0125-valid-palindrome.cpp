class Solution {
public:

    bool isPalindrome(string s) {
        //isalnum() is a function in td library to check fir alphanumeric n
         int start=0,end=s.length()-1;
        while(start<end){
        if(!isalnum(s[start])){ //if(iaAlphanumeric will check if the character is alphanumeric...but we want to check when its not so ! this is written)
            start++;continue;
        }
        if(!isalnum(s[end])){
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