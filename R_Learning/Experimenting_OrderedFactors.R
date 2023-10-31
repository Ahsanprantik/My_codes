x <- c(1:3)
y <- c(1:9)

(a <- cbind.data.frame(x, y))
str(a)

a$x <- ordered(a$x,
               levels = c(1, 2, 3),
               labels = c("No", "Maybe", "Yes"))
str(a)
str(a [a$x >= "Maybe", ])
plot(a [a$x >= "Maybe", ])