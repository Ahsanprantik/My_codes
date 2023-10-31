 #include <stdio.h>
 double pi=3.14159265;
 double area_of_circle(double radius)
 {
     double area=pi*radius*radius;
     return area;
 }
 int main()
 {
     double radius;
     printf("Enter the radius: ");
     scanf("%lf", &radius);
     printf("The area of the circle is: %0.002lf", area_of_circle(radius));
 }
