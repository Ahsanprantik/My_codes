## Begginner Coding in R

x <- 1:5

print(x)

x <- cumsum(x)

print(x)

nchar("a string")

nchar(c("a", "aa", "aaa", "aaaa"))

c(c(), NA, 1, NULL)

a = 1 +
        2
print(a)

d <- data.frame(x = c(1, NA, 3))
print(d)

d$x[is.na(d$x)] <- 0
print(d)

