#include <stdio.h>
#include "hw1_complex.h"

int main(){
	Complex a = {3, 4};
	Complex b = {5, 12};

	Complex (fun[4])(Complex c1, Complex c2) = {complex_add, complex_sub, complex_mult, complex_div};
	
	double (*dub_fun[2])(Complex c) = {magnitude, phase};

	int i;
	for(i=0; i<4; i++){
		complex_hldr(fun[x], a, b);
	}

	for(i=0; i<2; i++){
		double_hdlr(dub_fun[x], a);
	}
	return 0;
}
