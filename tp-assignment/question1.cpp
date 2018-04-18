#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
	ofstream myfile;
	myfile.open("out.txt");
	const double h = 1600;
	const double cp = 510.7896000000000000000000; //from https://www.engineersedge.com/materials/specific_heat_capacity_of_metals_13259.htm
	const double d = 7850;//from https://en.wikipedia.org/wiki/Carbon_steel
	const double tInfinity = 1400;
	double tI = 300;
	vector<double> centreTemperatue;
	//centreTemperatue[0] = tI;
	for(int i = 0; i<=1200; i++){
		centreTemperatue.push_back(tI);
		myfile << i/60.0 << " " << centreTemperatue[i] << " "<<endl;
		tI = tI + (2*h/(cp*d))*(tInfinity - tI);
	}
}