//Given an array of strings. Check whether they are anagram or not.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="safeer";
    string s="reefas";
    sort(str.begin(),str.end());
    sort(s.begin(),s.end());
    if(s==str) cout<<"Two string are Anagram";
    else cout<<"Two strings are not Anagram";
    

}