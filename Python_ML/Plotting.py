# Importing matplotlib for important graphs
import matplotlib.pyplot as plt
import numpy as np
import statistics as stats

# x axis = Cricket chirps every 15 seconds
# y axis = Temperature
x = [44.000,46.400,43.600,35.000,35.000,32.600,28.900,27.700,25.500,20.375,12.500,37.000,37.500,36.500,36.200]

y = [26.944,25.833,25.556,23.056,21.389,20.000,18.889,18.333,16.389,13.889,12.778,24.583,23.333,23.333,22.500]

# Entering titles and labels to x and y axes
plt.xlabel('Cricket Chirp / 15 seconds')
plt.ylabel('Temperature / Celsius')
plt.title('Cricket Chirp and Temperature')
plt.grid(True)
plt.plot(x,y,'ro')
plt.show()

xmean = np.mean(x)
ymean = np.mean(y)

print(sum(x-xmean))
print(x-xmean)

m = sum(x-xmean)*sum(y-ymean)/sum((x-xmean)**2)
c = ymean - m*xmean
print(xmean, ymean, m, c)

xprime = np.array(range(1,80))
yprime = xprime*m + c
print(yprime)

plt.plot(x, y, linestyle = 'dotted')
plt.show()