#pragma once
class Abalone
{
private:
	char _sex;
	float _length;
	float _diameter;
	float _height;
	float _wholeWeight;
	float _shuckedWeight;
	float _visceraeWeight;
	float _shellWeight;
	int _rings;
public:
	Abalone(char sex, float length, float diameter, float height, float wholeWeight, float shuckedWeight, float visceraeWeight, float shellWeight, int rings);

	char getSex();
	float getLength();
	float getDiameter();
	float getHeight();
	float getWholeWeight();
	float getShuckedWeight();
	float getVisceraeWeight();
	float getShellWeight();
	int getAge();
};

