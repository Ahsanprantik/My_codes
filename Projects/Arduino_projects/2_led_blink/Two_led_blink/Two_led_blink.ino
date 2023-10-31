int led_1 = 6, led_2 = 9;
int b1, b2, tmp;
int long_blink, short_blink, fade_amount;  //Set the fade_amount to a number by which 255 is divisable.

void process()
{
  while (1) {
    b1 = 0;
    b2 = 255;
    long_blink = 5;
    short_blink = 10;
    fade_amount = 1;
    while (long_blink--) {
      while (1) {
        analogWrite(led_1, b1);
        analogWrite(led_2, b2);
        delay(5);
        b1 += fade_amount;
        b2 -= fade_amount;
        if (!b1 || !b2) break;
      }
      delay(150);
      fade_amount = -fade_amount;
    }
    b1 = 0;
    b2 = 255;
    while (short_blink--)  {
      analogWrite(led_1, b1);
      analogWrite(led_2, b2);
      delay(250);
      tmp = b1;
      b1 = b2;
      b2 = tmp;
    }
  }
  analogWrite(led_1, 0);
  analogWrite(led_2, 0);

  return;
}
void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  process();
}

void loop() {}
