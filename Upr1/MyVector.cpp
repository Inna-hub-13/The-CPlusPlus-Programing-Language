#include <iostream>
using namespace std;

struct Vector{

    int sz;
    double* elem;
};

void vetor_init(Vector& v, int s) {

    v.elem = new double[s];
    v.sz = s;
}

int main() {

    Vector v;
    vetor_init(v, 5);
    cout << "Enter elements in Vector v\n";
    for(int i = 0; i != v.sz; i++)
        cin >> v.elem[i];
    
    for(int i = 0; i != v.sz; i++)
        cout << v.elem[i] << '\n';

    double sum = 0;
    for(int i = 0; i!= v.sz; i++)
        sum += v.elem[i];

    cout << "sum: " << sum << '\n';
}