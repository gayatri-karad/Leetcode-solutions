class Solution {
public:
bool issamefreq(int freq1[26],int freq2[26]){
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i])return false;
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
       //here the constraint is only lowercase letters but if we were allowed to input uppercasse lowercase and special characters as well and find their permutations then better use an unordered map <char,int>in which key is the character and value is its frequency in the string 
       //we gonna use sliding window based approach where we will search for a window having length of s1 in s2 and then count the frequnecy of characters in it and store that in wind freq..if it matches the values in freq arr then return true 

       int freq[26]={0};
        int windFreq[26]={0};
       int n=s1.length();
       if (n>s2.length())return false;
      
       for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;
       windFreq[s2[i]-'a']++;
       }
        if(issamefreq(freq,windFreq))return true;
       for(int i=n;i<s2.length();i++){
        windFreq[s2[i]-'a']++;
        windFreq[s2[i-n]-'a']--;
        
        if(issamefreq(freq,windFreq))return true;
       
       }
        
       return false;
    }
};