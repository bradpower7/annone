#include "neuron.h"
#include "functions.h"


#include <cmath>


void Neuron::neuronTest(){
	cout << "THIS NEURON WORKS" << endl;
}


double actFunc(double inputsum){
	
	switch (m_func){
		case  't':
			m_act = tanh(inputsum);
		case 's':
			m_act = sigmoid(inputsum);
		
	}
	
	return m_act;
}