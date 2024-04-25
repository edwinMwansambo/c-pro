#include <iostream>
#include <string>
using namespace std;
int main() {

string str1 = "HELLO";
string str2 = "WORLD";
string str3;
int len;

//copy stra1 int str3
str3 = str1;
cout << "str3: " << str3<<endl;

//concatinates str1 and str2
str3 =str1 + str2;
cout << "str1 + str2 :"<<str3<<endl;

//total length of str3 after concatination
len = str3.size();
cout << "str3.size()  : "<<len<<endl;



return 0;
}