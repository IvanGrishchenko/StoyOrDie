#pragma once

#include<vector>
#include <string>


struct s_data {
	int time1;
	int time2;
	
	int dimension;

	int numOfSensors;
	int* sensors;

	std::string Lfunc;
}	t_data ;