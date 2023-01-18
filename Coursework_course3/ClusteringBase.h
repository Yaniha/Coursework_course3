#pragma once
#include <vector>
#include "Abalone.h"
#include <string>
#include <iostream>
#include <fstream>

class ClusteringBase
{
	// TODO: реализовать 
private:
	std::string* split(std::string inputString);
protected:
	std::vector<Abalone> _abalones;
	void getDistance(Abalone first, Abalone second);

public:
	void setData(std::string fileName);
};

