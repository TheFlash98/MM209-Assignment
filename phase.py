import math
import numpy as np
import matplotlib.pyplot as plt


def main():
	x = np.arange(600,1900,1)
	k = np.exp(5.292-(6663.46/x))
	y = k/(1+k)
	plt.plot(x,y,"-")
	plt.show()




def KFeFeO(temperature):
	k = np.exp(5.292-(6663.46/temperature))
	return k/(1+k)

def kFeFe3O4(temperature):
	k = np.exp(1.016-(643.493/temperature))	
	return k/(k+1)

def GFeFeO(temperature):
	return (-263700 + (64.3*temperature))

def GFeOFe3O4(temperature):
	return (-311100+(114.5*temperature))

def GFeFe3O4(temperature):
	return (-1102200 + (307.4*temperature))





if __name__ == "__main__":
	main()