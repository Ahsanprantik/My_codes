# Importing visualization library seaborn
import seaborn as sns; sns.set(color_codes=True)

# Importing matplotlib for important graphs
import matplotlib.pyplot as plt
import pandas as pd
import statistics as stats

#Loading CSV file
chirp_data = pd.read_csv("C:/Users/Hp/My Drive/Codes/Python_ML/chirps.csv")

g = sns.lmplot(x="Chirps_15s", y="Temp_C", data=chirp_data)

plt.title('Cricket Chirp and Temperature')
plt.show()