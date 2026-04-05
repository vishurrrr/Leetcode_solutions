class Solution {
public:
bool isalphanumeric(char ch){
    if((ch>='0' && ch<='9')||(ch>='a'&& ch<='z')||(ch>='A' && ch<='Z')){
        return true;
    }
    else{
        return false;
    }
}
    bool isPalindrome(string s) {
        int start=0,end=s.length()-1;
        while(start<=end){
            if(!isalphanumeric(s[start])){
                start++;
                continue;
            }
            if(!isalphanumeric(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start])!=tolower(s[end])){
                return false;
            }
            else{
                start++;
                end--;
            }
        }
        return true;
    }
};