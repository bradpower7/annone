#ifndef NEURON_H
#define NEURON_H

#include <vector>

#include "Neuron.h"

class Neuron;


class Layer{

	public:

		Layer(int numNeurons, char layType);

		std::vector<Neuron> m_neurons;	// Neurons in layer

	private:

		std::vector<double> weights;

		int id;	// Location of layer in network
		char m_layType; 	// "(i)nput", "(o)utput", or "(h)idden"





};



#endif
