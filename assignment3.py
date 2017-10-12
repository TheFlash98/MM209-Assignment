import math
import numpy as np
import matplotlib.pyplot as plt

def main():
	
	x = np.arange(600,1900,1)
	y = np.arange(10,100,1)
	X,Y = np.meshgrid(x,y)
	Z = np.exp(20.52-(67572.77/X))*(np.power(((100.0/Y)-1), 2))
	A = np.log10(Z)
	

	plt.figure()
	CS = plt.contour(X, Y, A)
	plt.clabel(CS, inline=1, fontsize=10)
	plt.title('Simplest default with labels')
	plt.ylabel('X_CO2')
	plt.xlabel('Temperature')
	plt.show()

			
if __name__ == "__main__":
    main()