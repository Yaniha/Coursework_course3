#include "Abalone.h"

Abalone::Abalone(char sex, float length, float diameter, float height, float wholeWeight, float shuckedWeight, float visceraeWeight, float shellWeight, int rings)
{
	_sex = sex;
	_length = length;
	_diameter = diameter;
	_height = height;
	_wholeWeight = wholeWeight;
	_shuckedWeight = shuckedWeight;
	_visceraeWeight = visceraeWeight;
	_shellWeight = shellWeight;
	_rings = rings;
}

char Abalone::getSex()
{
	return _sex;
}

float Abalone::getLength()
{
	return _length;
}

float Abalone::getDiameter()
{
	return _diameter;
}

float Abalone::getHeight()
{
	return _height;
}

float Abalone::getWholeWeight()
{
	return _wholeWeight;
}

float Abalone::getShuckedWeight()
{
	return _shuckedWeight;
}

float Abalone::getVisceraeWeight()
{
	return _visceraeWeight;
}

float Abalone::getShellWeight()
{
	return _shellWeight;
}

int Abalone::getAge()
{
	return _rings;
}
