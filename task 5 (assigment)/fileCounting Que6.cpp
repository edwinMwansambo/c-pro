#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int countVowels(const string &text) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (char ch : text) {
        if (vowels.find(ch) != string::npos) {
            count++;
        }
    }
    return count;
}

int countWords(const string &text) {
    int count = 0;
    size_t pos = 0;
    while ((pos = text.find(' ', pos)) != string::npos) {
        count++;
        pos++;
    }
    return count + 1; 
}

string reverseString(const string &text) {
    string reversedText = text;
    reverse(reversedText.begin(), reversedText.end());
    return reversedText;
}

string capitalizeSecondLetter(const string &text) {
    string result = text;
    bool capitalize = true;
    for (char &ch : result) {
        if (isalpha(ch)) {
            if (capitalize) {
                ch = toupper(ch);
                capitalize = false;
            } else {
                capitalize = true;
            }
        }
    }
    return result;
}

int main() {
    ifstream file("fileData.txt");
    if (!file.is_open()) {
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }

    string fileData;
    getline(file, fileData);

    file.close();

    cout << "Number of vowels: " << countVowels(fileData) << endl;
    cout << "Number of words: " << countWords(fileData) << endl;
    cout << "Reversed statement: " << reverseString(fileData) << endl;
    cout << "Capitalized second letter of each word: " << capitalizeSecondLetter(fileData) << endl;

    return 0;
}