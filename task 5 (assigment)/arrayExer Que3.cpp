#include <iostream>
#include<string>

using namespace std;

int main() {

    string array[8] = {"12B3","C234","A345","C15","B177","G3003","C235","B179"};
     for(int i=0; i <8 ; i++)
     {
         string strivarr = array[i];
         for(int i=0; i <strivarr.length(); i++){
            char charvarr = strivarr.at(i);
             if (charvarr == 'B' || charvarr == 'b') {
                cout << strivarr << endl;
                break; 
         }
     
     }


     }
  
   


    return 0;
}
