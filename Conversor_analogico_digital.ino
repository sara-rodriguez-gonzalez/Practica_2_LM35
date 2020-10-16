void setup() {
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

int pot1 = 0;
int val = 0;

void loop() {
  delay(1000);
  pot1 = analogRead(A0);
  val=map(pot1, 0, 1023, 0, 63);
  Serial.print("La temperatura es: ");
  Serial.print(val);
  Serial.print(char(176));
  Serial.println("C");
}
