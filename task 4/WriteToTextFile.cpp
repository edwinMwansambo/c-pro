//writing in a text file
#include<iostream>
#include<fstream>
using namespace std;

int main(){

ofstream MyFile("example.text");

if(MyFile.is_open()){

    MyFile << "This is a line. \n";
    MyFile << "This is another  line. \n";
    MyFile.close();
}
else
{
    cout <<"Unable to open file";
}


return 0;

}