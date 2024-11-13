//Given a sentence ‘str’, return the word that is lexicographically maximum.
#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string st="decode dsa wih pw";
    stringstream str(st);
    string temp;
    vector<string> v;
    string maxstring="";

    while(str>>temp){
        v.push_back(temp);
        for(int i=0;i<v.size();i++){
        if(maxstring<v[i]) maxstring=v[i];
    }
}
cout<<maxstring;
}