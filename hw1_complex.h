#include <stdio.h>

struct _complex{
	double real;
	double imag;
};

typedef struct _complex Complex;

void print_complex(Complex c);

Complex complex_add(Complexc1, Complex c2);
Complex complex_sub(Complexc1, Complex c2);
Complex complex_mult(Complexc1, Complex c2);
Complex complex_div(Complexc1, Complex c2);

Complex complex_conj(Complex c);

double magnitude(Complex c);
double phase(Complex c);

void complex_hdlr(Complex (*fun) (Complex, Complex), Complex c1, Complex c2);
void double_hldr(double(*dub_fun)(Complex), Complex c1);
