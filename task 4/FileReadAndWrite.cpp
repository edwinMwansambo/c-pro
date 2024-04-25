
#include<fstream>
#include<iostream>
using namespace std;

int main(){

char data[100];

//open a text file in a write mode
ofstream outfile;
outfile.open("afile.txt");

cout << "Write to the file "<<endl;
cout << "Entteer your name : "
cin.getline(data,100);

//write inputted data into the text file.
outfile << data <<endl;

cout << "Enter your age: ";
cin >> data;
cin.ignore();

//again write inputted data into the text file
outfile << data <<endl;

//close the file
outfile.close();


//open a text in read mode 
ifstream infile;
infile.open("afile.txt");

cout << "Reading from the file"<<endl;
infile >>data;

//write the data on screen
cout <<data<<endl;

//again read data from the file and dispaly it
infile>>data;
cout << data <<endl
    
    //close the opened file
infile.close();


return 0;

}