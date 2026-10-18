class Solution {
public:
    string reverseWords(string s) {
       int i=0;
       int n=s.length();
       int j=n-1;
       while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
       }  
       string ans="";
       
       i=0;
       while(i<n){ 
        //code to find an individual word in a string
       while(i<n&&s[i]==' '){//skip any spaces
        i++;
       }
       if(i>=n){
            break;
        }
       string word="";
        while(i<n && s[i]!=' '){//conditions are evaluated left to right so If i reaches n, s[i] is evaluated before i < n checks if it's safe. This causes an out-of-bounds error. It must always check bounds first:
            word+=s[i];
            i++;
        }
        int p=0;
        int q=word.length() -1;
         while(p<q){
            swap(word[p],word[q]);
            p++;
            q--;
        }
        if(ans.length()==0){
            ans=word;
        } else {
            ans+=" "+word;
        }
        
       }
        return ans;
    }
};