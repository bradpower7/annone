#include "functions.h"

#include <cmath>


double sigmoid(double z){
	
	double expn = exp(-1*z);
	
	return 1 / (1 + expn);
	
}