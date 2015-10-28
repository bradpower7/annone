#include "net.h"


#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <memory>



int main(){

	std::vector<int> topology {3, 2, 1};

	std::vector<double> input {0.5, 0.6, -0.3};
	std::vector<double> correct {0};

	std::vector<double> results {0};

	Net netOne(topology);

	netOne.m_topology[1].m_neurons[1].neuronTest();


	netOne.feedForward(input);
	netOne.backProp(correct);
	netOne.getResults(results);





	return 1;


}



