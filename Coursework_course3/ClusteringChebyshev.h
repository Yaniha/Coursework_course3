#pragma once
#include "ClusteringBase.h"
class ClusteringChebyshev :
    public ClusteringBase
{
protected:
	void getDistance(Abalone first, Abalone second);
};

