
int led = 9;

void timer(int m, int s)
{
  while(1+m--)  {
    while(s--)  {
      analogWrite(led, (1 & s) * 255);
      delay(1000);
    }
    s=60;
  }
  analogWrite(led, 0);
  analogWrite(6, 255);
}
void setup() {
  pinMode(led, OUTPUT);
  timer(1, 00);
}

void loop() {
  // put your main code here, to run repeatedly:

}
