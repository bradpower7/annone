#ifndef NEURON_H
#define NEURON_H

#include <vector>

using namespace std;

class Neuron{

	private:

		double z;
		double a;


		double tanhFunc(double inputSum);


	public:
		Neuron();

		void neuronTest();

};

class Layer{

	public:

		Layer(int numNeurons, char layType);

		vector<Neuron> m_neurons;	// Neurons in layer

	private:

		vector<double> weights;

		int id;	// Location of layer in network
		char m_layType; 	// "(i)nput", "(o)utput", or "(h)idden"





};



#endif
