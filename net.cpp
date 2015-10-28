#include "net.h"



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

void Net::makeWeights(){

	//for(int i = 0; )




}