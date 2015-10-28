#ifndef NET_H
#define NET_H

#include <vector>
#include <string>

#include "layer.h"



class Net{

	public:

		Net(std::vector<int> &topology);

		void feedForward(const std::vector<double> &inputVals);
		void backProp(const std::vector<double> &correctVals);
		void getResults(std::vector<double> &resultVals) const;

		std::vector<Layer>  m_topology;


	private:

		void makeWeights();

		//std::vector<std::vector<std::vector<double>>> m_weights;    // A vector for each weight, attached to each output node, attached to each layer





};

#endif
