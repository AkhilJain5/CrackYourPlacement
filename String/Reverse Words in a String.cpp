class Solution {
public:
    string reverseWords(string s) {
    
    reverse(s.begin(), s.end());
    int n=s.length();
    int ch=0;
    int start=0;
    int end=0;
    while(ch<n){
        while(ch<n && s[ch]==' ')ch++;
        if(ch==n)break; 
        while(ch<n && s[ch]!=' '){
            s[end++]=s[ch++];
        }
        reverse(s.begin()+start,s.begin()+end);
        s[end++]=' ';
        start=end;
        ch++;
        }
    s.resize(end-1);
    return s;
    }
};