import math
import numpy as np
import matplotlib.pyplot as plt


def main():
	x = np.arange(600,1900,1)

	plt.title('Fe Phase Diagrams')
	plt.ylabel('X_CO')
	plt.xlabel('Temperature')
	
	#Fe -> FeO
	k = np.exp((-17200+(21*x))/(8.314*x))
	y = k/(1+k)
	plt.plot(x,y,"-")

	#Fe -> Fe3O4
	k = np.exp((-21400+(33.8*x))/(8.314*x))
	y = np.power(k,0.25)/(1+np.power(k,0.25))
	plt.plot(x,y,"-")
	#plt.show()

	#FeO -> Fe3O4
	k = np.exp((30200+(-29.2*x))/(8.314*x))
	y = k/(1+k)
	plt.plot(x,y,"-")

	#Displaying all the plots
	plt.show()

if __name__ == "__main__":
	main()