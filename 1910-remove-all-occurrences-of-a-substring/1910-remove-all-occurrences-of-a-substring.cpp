class Solution {
public:
    string removeOccurrences(string s, string part) {
        //str.find(substr) it returns the position(index) of the substr in the string and if substr diesnt exist then it will return a nonvalid value
        //and str.erase(start,length) this length is the length of substring..so it will erase that substring from index start to index length-1
        int rem=-1;
        while(s.find(part)<s.length()){
            rem=s.find(part);
            s=s.erase(rem,part.length());
        }
        return s;

    }
};