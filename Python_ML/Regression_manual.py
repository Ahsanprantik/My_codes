import matplotlib.pyplot as plt
import numpy as np
import math

x = np.array([1, 2, 3, 4, 5])
y = np.array([4, 12, 28, 52, 80])

xmean = np.mean(x)
ymean = np.mean(y)

# Only first and last values
#m = (y[4]-y[0])/(x[4]-x[0])
#c = y[0]-m*x[0]

# Proper simple linear regression
m = sum((x-xmean)*(y-ymean))/sum((x-xmean)**2)
c = ymean - m*xmean

# Regression line
xprime = x
yprime = m*xprime + c

#Printing error square
errorsq = sum((y-yprime)**2)
print("Error Square: " + str(round(errorsq, 3)))

plt.plot(x, y)
plt.plot(xprime, yprime)
for i in range(len(x)):
	plt.annotate((x[i], y[i]), (x[i], y[i]))
for i in range(len(x)):
	plt.annotate((round(xprime[i],2), round(yprime[i], 2)), (xprime[i], yprime[i]))
plt.show()