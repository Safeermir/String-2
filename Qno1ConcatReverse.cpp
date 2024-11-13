//Input a string and concatenate with its reverse string and print it.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="safeer";
    string s=str;
    reverse(str.begin(),str.end());
    cout<<s+str;

}