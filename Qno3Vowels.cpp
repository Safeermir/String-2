//Input a string and return the number of substrings that contain only vowels.
#include<iostream>
#include<string>
using namespace std;
int main(){
    int count=0;
    int ans=0;
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='o'||s[i]=='e'||s[i]=='i'||s[i]=='u') count++;
        else {
            ans+=count*(count+1)/2;
            count=0;
        }
    }
     ans+=count*(count+1)/2;
     cout<<"Number of substrings contain only vowels is : "<<ans;
}