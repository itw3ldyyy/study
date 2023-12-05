#include <iostream>
using namespace std;

string PIN;

int main() {
        cout<< "Welcome in a MonoBank" << endl;
        cout<< " Enter a PIN:";
        cin>> PIN;

        if(PIN=="3265") {
        cout<< "Correct PIN";
        }
        else {
        cout<< "Incorrect PIN";
        }

return 0;
}
