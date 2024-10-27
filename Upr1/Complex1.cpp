#include <iostream>

namespace Complex1 {

    class complex{

        public:
            complex(double r, double i) : re{r}, im{i} {}
            complex(double r) : re{r}, im {0} {}
            complex() : re{0}, im{0} {} // default constructor

            double real() const {return re;}
            void real(double d) {re = d;}
            double imag() const {return im;}
            void imag(double d) {im = d;}
            void print_complex() const {std::cout << "[" << re << ", " << im << "]\n";}

            complex& operator+=(complex z) {re+=z.re, im+=z.im; return *this;}
            complex& operator-=(complex z) {re-=z.re, im-=z.im; return *this;}
        
        private:
            double re;
            double im;
    };
}

int main() {

    Complex1::complex a(1, 3.3);
    Complex1::complex b{4, 5};
    Complex1::complex c {1};
    c += b;

    a.print_complex();
    b.print_complex();
    c.print_complex();

    std::cout << a.real() << ", " << a.imag() << "\n";

    return 0;
}