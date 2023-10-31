
void showbin(const long long i, int bitt, int pin[])
{
  unsigned long long temp;

  temp = 1;

  bitt--;

  for (temp <<= bitt; temp != 0; temp >>= 1, bitt--)   {
    analogWrite(pin[bitt], ((temp & i) != 0) * 255);
  }


  return;
}
void setup() {
  int i;
  int pin[6] = {11, 10, 9, 6, 5, 3};
  for (i = 0; i < 6; i++)  {
    pinMode(pin[i], OUTPUT);
  }
  delay(1500);
  for (i = 0; i < 64; i++)  {
    showbin(i, 6, pin);
    delay(1000);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
