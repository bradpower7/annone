#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <memory>


#include "net.h"
#include "layer.h"

using namespace std;

// Neuron
double Neuron::tanhFunc(double inputSum){
	double a = tanh(inputSum);
	return a;
}




// Layer

Layer::Layer(int numNeurons, char layType){
	m_layType = layType;
};



Net::Net(vector<int> &topology){

	for(int i = 0; i < topology.size(); i++){
		if(i==0){
			m_topology.push_back(Layer(topology[i], 'i'));		// Creates input layer
		}
		else if(i==topology.size()-1){

			m_topology.push_back(Layer(topology[i], 'o'));		// Creates output layer
		}
		else{

			m_topology.push_back(Layer(topology[i], 'h'));		// Creates hidden layer

		}
	}
};


void Net::feedForward(const vector<double> &input){
	std::cout << "feedForward" << std::endl;
}

void Net::backProp(const vector<double> &correct){
	std::cout << "backProp" << std::endl;
}

void Net::getResults(vector<double> &results) const{
	std::cout << "getResults" << std::endl;
}

// LAYER

void Net::makeWeights(){

	//for(int i = 0; )




}


// NEURON

void Neuron::neuronTest(){
	cout << "THIS NEURON WORKS" << endl;
}



int main(){

	vector<int> topology {3, 2, 1};

	vector<double> input {0.5, 0.6, -0.3};
	vector<double> correct {0};

	vector<double> results {0};

	Net netOne(topology);

	netOne.m_topology[1].m_neurons[1].neuronTest();


	netOne.feedForward(input);
	netOne.backProp(correct);
	netOne.getResults(results);





	return 1;


}



