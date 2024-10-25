#include <iostream>
using namespace std;

double square(double x) {

    return x * x;
}

void print_square(double x) {

    cout << "the square of " << x << " is " << square(x);
}

int main() {

    const int dmv = 17;
    int var = 17;

    const double max3 = square(dmv);

    cout << "max3: " << max3 << endl;

    print_square(1.234);
}