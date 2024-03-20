// check palindrome

// #include <iostream>
// using namespace std;


// bool palindrome(int i, string s){
//     if(i>=s.size()/2) return true;
//     if(s[i]!=s[s.size()-i-1]) return false;
//     return palindrome(i+1,s);
// }
// int main(){
//     string s="madam";
//     int i=0;

//     cout<<palindrome(i,s);
// }



// practice

// #include <iostream>
// using namespace std;

// bool palindromes(string s, int i,int j){
//     if(i>=j/2){
//         return true;
//     }
//     if(s[i]!=s[j-1-i]){
//         return false;
//     }
//     return palindromes(s, i+1,j);
// }

// int main(){
//     string s="madam";
//     int i=0;
//     int j=s.size();
//     // palindromes(s,i,j);

//     cout<<palindromes(s,i,j);
// }