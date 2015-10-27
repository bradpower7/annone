#ifndef NET_H
#define NET_H

#include <vector>
#include <string>

#include "layer.h"

using namespace std;

class Net{
	
	public:
	
		Net(vector<int> &topology);
		
		void feedForward(const vector<double> &inputVals);
		void backProp(const vector<double> &correctVals);
		void getResults(vector<double> &resultVals) const;
		
		vector<Layer>  m_topology;
		
	
	private:
	
		void makeWeights();
		
		vector<vector<double>> m_weights;
		
	
	
	
	
};

#endif
