
int led = 9;

void timer(int m, int s)
{
  int ms = 0, fade = 1;
  while (1 + m--)  {
    while (s--)  {
      while (1) {
        ms += fade;
        analogWrite(led, (1 & s) * ms);
        delay(4);
        if (!ms || ms == 250)  break;
      }
      fade = -fade;
    }
    s = 60;
  }
  analogWrite(led, 0);
}
void setup() {
  pinMode(led, OUTPUT);
  timer(0, 10);
}

void loop() {
  // put your main code here, to run repeatedly:

}
