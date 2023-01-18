#include "ClusteringBase.h"

void ClusteringBase::setData(std::string fileName) {
	std::string line;
	std::ifstream inputFile;
	inputFile.open(fileName);
	if (inputFile.is_open()) {
		while (std::getline(inputFile, line))
		{
			auto stringArray = split(line);
			auto sex = stringArray[0].c_str()[0];
			auto length = std::stof(stringArray[1]);
			auto diameter = std::stof(stringArray[2]);
			float height = std::stof(stringArray[3]);
			float wholeWeight = std::stof(stringArray[4]);
			float shuckedWeight = std::stof(stringArray[5]);
			float visceraeWeight = std::stof(stringArray[6]);
			float shellWeight = std::stof(stringArray[7]);
			int rings = std::stoi(stringArray[8]);

			auto abalone = Abalone(sex,
				length,
				diameter,
				height,
				wholeWeight,
				shuckedWeight,
				visceraeWeight,
				shellWeight,
				rings);
			_abalones.push_back(abalone);
		}
		inputFile.close();
	}
}

std::string* ClusteringBase::split(std::string inputString)
{
	std::string* arr = new std::string[9];
	std::string delimiter = ",";
	size_t pos = 0;
	int i = 0;
	std::string token;
	while ((pos = inputString.find(delimiter)) != std::string::npos) {
		token = inputString.substr(0, pos);
		arr[i++] = token;
		inputString.erase(0, pos + delimiter.length());
	}
	arr[i] = inputString;

	return arr;
}
