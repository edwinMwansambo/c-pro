#include <iostream>
using namespace std;
int main() {
int a = 21;
int c;

c = a;
cout << "Line 1 - =  Operator, value of c is : "<<c<<endl;


c += a;
cout << "Line 2 -  += Operator, value of c is : "<<c<<endl;


c -= a;
cout << "Line 3 - -=  Operator, value of c is : "<<c<<endl;

c *= a;
cout << "Line 4 -  *= Operator, value of c is : "<<c<<endl;

c /= a;
cout << "Line 5 -  /= Operator, value of c is : "<<c<<endl;

c = 200;
c %= a;
cout << "Line 6 - %= Operator,  value of c is : "<<c<<endl;

c <<= 2;
cout << "Line 7 - <<= Operator,  value of c is : "<<c<<endl;

c >>= 2;
cout << "Line 6 - >>= Operator,  value of c is : "<<c<<endl;

c &= 2;
cout << "Line 6  -&= Operator,  value of c is : "<<c<<endl;

c ^= 2;
cout << "Line 6 - ^= Operator,  value of c is : "<<c<<endl;

c |= 2;
cout << "Line 6 - |= Operator,  value of c is : "<<c<<endl;


return 0;
}