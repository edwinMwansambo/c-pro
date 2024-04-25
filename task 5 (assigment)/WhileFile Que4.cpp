#include <iostream>

using namespace std;

bool check(const string& w) {
    for (char ch : w) {
        if (!isdigit(ch)) {
            return false;
        }
    }
    return true;
}

int main() {
    int userInput;

    while (true) {
        cout << "ENTER AN INTEGER VALUE BETWEEN 5 AND 10: " << endl;
        string input;
        cin >> input;

        if (!check(input)) {
             cout << "Invalid input. Please enter an integer." <<endl;
        } else {
            userInput = stoi(input); 
            if (userInput < 5 || userInput > 10) {
                 cout << "Please enter an integer between 5 and 10." << endl;
            } else {
                cout << "YOUR INPUT VALUE ( " <<userInput<<" )  HAS BEEN ACCEPTED."<<endl;
                break;
            }
        }
    }

    return 0;
}
