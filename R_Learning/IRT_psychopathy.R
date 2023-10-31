# Load base packages
library(datasets)

# Load IRT and plot packages
pacman::p_load(pacman, rio, ltm, MASS, msm, dplyr, ggplot2, polycor, mvtnorm)

# Load data
rio_psych <- import("D:/R_Coding/IRT_practice.csv")
head(rio_psych)
summary(rio_psych)
str(rio_psych)
View(rio_psych)

PSYTST = rio_psych[, c(1:6)]
summary(PSYTST)

IRTmodel = ltm(PSYTST ~ z1, IRT.param = TRUE)

summary(IRTmodel)
#IRTmodel[["coefficients"]]
coef(IRTmodel)

plot(IRTmodel, type = "IIC")
plot(IRTmodel, type = "ICC")
cor(rio_psych)

# CLEAN UP #################################################

# Clear packages
detach("package:datasets", unload = TRUE)  # For base

# Clear plots
dev.off()  # But only if there IS a plot

# Clear console
cat("\014")  # ctrl+L

# Clear mind :)

