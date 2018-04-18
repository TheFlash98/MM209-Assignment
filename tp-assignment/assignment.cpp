#include <iostream>
#include <vector>

using namespace std;
//For Silicon only the values of K, Cp, d need to be changed. Everything else remains the same.
int main() {
	
	int n = 10;
	const double h = 1600;
	const double cp = 386.00; 
	const double d = 8960;
	const double l = 0.5/(n-1);
	const double k = 385;
	double tInfinity = 1200;
	double tI = 500;
	vector<double> centreTemperatue;
	
	double T[n][n];
	for(int i = 0; i<n; i++){
		for(int j=0; j<n; j++){
			T[i][j] = 500 - max(abs(i-5), abs(j-5))*100/(10);
		}
	}

	cout<< T[5][5];
	for(int i = 0; i<1200; i++){
		
		double temp[n][n];
		centreTemperatue.push_back(temp[5][5]); //Will contain the data to be plotted in the end.
		for(int x = 0; x < n; x++) {
			for(int y = 0; y < n; y++) {
				bool con = (x == 0 && y == 0) || (x == 0 && y == n-1) || (x == n-1 && y == 0) || (x == n-1 && y == n-1);
				if(x!=0 && y!=0 && x!=n-1 && y!=n-1) {
					temp[x][y] = T[x][y] + ((2*h)/(d*cp))*(tInfinity - T[x][y]) + (T[x+1][y] + T[x-1][y] + T[x][y+1] + T[x][y-1]-(4*T[x][y]))*k/(d*cp*l);
				}	else if (!con) {
					temp[x][y] = T[x][y] + (2*h)/(d*cp)*(tInfinity - T[x][y]) + (T[1][1] - T[x][y])*k/(d*l*cp);
				} 	else if(con) {
					temp[x][y] = T[x][y] + (2*h)/(d*cp)*(tInfinity - T[x][y]);
				}

			}
		}
		for(int x = 0; x<n; x++) {
			for(int y = 0; y<n; y++) {
				T[x][y] = temp[x][y];
			}
		}
		double tInfinity = tInfinity + 1;
		
	}
}