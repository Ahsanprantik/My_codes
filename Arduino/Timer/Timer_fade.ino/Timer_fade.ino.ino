
int led_1 = 9;
int led_2 = 6;

void timer(int m, int s)
{
  int b1, b2, tmp;
  int long_blink, fade_amount;  /* Set the fade_amount to a number by which 255 is divisable.  */

    b1 = 0;
    b2 = 255;
    long_blink = m*60 + s;
    fade_amount = 1;
    analogWrite(led_2, 255);
    
    while (long_blink--) {
      analogWrite(led_2, 0);
      delay(235);
      while (1) {
        analogWrite(led_1, b1);
        //analogWrite(led_2, b2);
        delay(3);
        b1 += fade_amount;
        b2 -= fade_amount;
        if (!b1 || !b2) break;
      }
      fade_amount = -fade_amount;
      analogWrite(led_2, 255);
    }

  analogWrite(led_1, 0);
  analogWrite(led_2, 255);
}

void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  timer(1, 0); /* void timer (int mm, int ss)  */
}

void loop() {}
