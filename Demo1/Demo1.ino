int green_1 = 13;
int yellow_1 = 12;
int red_1 = 11;

int green_2 = 5;
int yellow_2 = 4;
int red_2 = 3;

void setup() {
    pinMode(green_1, OUTPUT);
    pinMode(yellow_1, OUTPUT);
    pinMode(red_1, OUTPUT);
    pinMode(green_2, OUTPUT);
    pinMode(yellow_2, OUTPUT);
    pinMode(red_2, OUTPUT);
}

void loop() {
  //State 1
  digitalWrite(green_1, HIGH);
  digitalWrite(yellow_1, LOW);
  digitalWrite(red_1, LOW);

  digitalWrite(green_2, LOW);
  digitalWrite(yellow_2, LOW);
  digitalWrite(red_2, HIGH);

  delay(7000);

  //State 2
  digitalWrite(green_1, LOW);
  digitalWrite(yellow_1, HIGH);
  digitalWrite(red_1, LOW);

  digitalWrite(green_2, LOW);
  digitalWrite(yellow_2, LOW);
  digitalWrite(red_2, HIGH);

  delay(1000);

  //State 3
  digitalWrite(green_1, LOW);
  digitalWrite(yellow_1, LOW);
  digitalWrite(red_1, HIGH);

  digitalWrite(green_2, LOW);
  digitalWrite(yellow_2, LOW);
  digitalWrite(red_2, HIGH);

  delay(500);
  //State 4
  digitalWrite(green_1, LOW);
  digitalWrite(yellow_1, LOW);
  digitalWrite(red_1, HIGH);

  digitalWrite(green_2, HIGH);
  digitalWrite(yellow_2, LOW);
  digitalWrite(red_2, LOW);

  delay(7000);

  //State 5 
  digitalWrite(green_1, LOW);
  digitalWrite(yellow_1, LOW);
  digitalWrite(red_1, HIGH);

  digitalWrite(green_2, LOW);
  digitalWrite(yellow_2, HIGH);
  digitalWrite(red_2, LOW);

  delay(1000);
  //State 6
  digitalWrite(green_1, LOW);
  digitalWrite(yellow_1, LOW);
  digitalWrite(red_1, HIGH);

  digitalWrite(green_2, LOW);
  digitalWrite(yellow_2, LOW);
  digitalWrite(red_2, HIGH);

  delay(500);

}
