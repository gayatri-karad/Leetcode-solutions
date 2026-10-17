class Solution {
public:
    string largestOddNumber(string num) {
         
        for(int i=num.length()-1;i>=0;i--){
   //         if(s[0]=='0'){  //s[0]==0 checks for the null character 0..so thats why its written '0'
   //             s=s.substr(1,s.length());
   //         } 
   //         int n=s.length();
   //         if((s[i]-'0')%2!=0){ //if we divide s[i] by 2..the operation actually happens on the ascii value of s[i]
   //         because characters are stored in the form of ascii values so hence subtract the ascii value of o i.e 
  //         48 from  so it will divide correctly.
   //             return s.substr(0,i+1);
   //         }
   //instead of doing all this shi u could just do:
   if((num[i]-'0')%2!=0){
    
    int start=0; 
    while(start<=i&& num[start]=='0'){//If it is a '0', we move our start pointer one step to the right (start++) to check the next character. The loop keeps moving forward as long as it keeps seeing leading zeros. As soon as it hits a non-zero digit (like '2' or '1'), the loop stops.
        start++;
        }
    return num.substr(start,i+1-start );//cuz the second element of substr function takes length of substring so we gotta
    //enter new length
    
   }
                    
          
        }
        return "";
    }
};