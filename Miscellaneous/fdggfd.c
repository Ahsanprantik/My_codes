#include <stdio.h>
 double pi = 3.14;
 void my_fnc() {        pi = 3.1416; /* এখােন আমরা pi-এর মান একটু পিরবতন কের িদলাম */        return; /* ফাংশেনর িরটান টাইপ void হেল এই return; না িদেলও িক চেল */
 }
 int main() {
     printf("%lf\n", pi); /* এখােন pi-এর মান হেব 3.14 */
     my_fnc();
     printf("%lf\n", pi); /* এখােন pi-এর মান হেব 3.1416 কারণ আমরা স my_fnc ফাংশেন িগেয় বদেল িদেয়িছ। */
     double pi=3.145;
     printf("%lf", pi);
     return 0;
 }
