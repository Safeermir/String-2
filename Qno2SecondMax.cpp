//Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string str="01239783";
    sort(str.begin(),str.end());
    cout<<"Second largest element is : "<<str[str.length()-2];
    


}