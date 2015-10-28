#ifndef NEURON_H
#define NEURON_H


class Neuron{

	private:

		double z;
		double a;

		// Calculates the result of activation function based on func type set in m_func
		double actFunc(double inputSum);


	public:
		Neuron();
		
		double m_act;
		
		char m_func;

		void neuronTest();
		std::map<double, Neuron> m_weights;		// maps weight vals to next level Neurons

};



#endif