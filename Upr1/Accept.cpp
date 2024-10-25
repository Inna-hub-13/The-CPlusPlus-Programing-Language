#include <iostream>
using namespace std;

bool func() {

    int tries = 1;
    while(tries < 4){
        
        cout<< "Do you want to procede (y and n)?\n";
        char answer = 0;
        cin >> answer;

        switch(answer){
            case 'y':
                return true;
            case 'n':
                return false;
            default: 
                cout << "Sorry, I don't understand that.\n";
                ++ tries;
        }
    }
    cout << "I will take that for a no.\n";
    return false;
}
int main() {

    bool answer = func();
    cout << "ans: " << answer;
}