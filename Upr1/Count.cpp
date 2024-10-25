#include <iostream>
using namespace std;

int count_x(char*p, char x) {

    if(p == nullptr)
        return 0;
    
    int count = 0;
    for(;*p; ++p)
        if(*p == x)
            ++count;
    
    return count;
}

int main() {

    char letters[] = {'s', 'v', 'j', 's', 'w', 'w'};
    cout << "letters: " << letters << '\n';
    int count_w = count_x(letters, 'w');
    cout << "letters: " << letters << '\n';
    cout << "count: " << count_w << "\n"; 
}