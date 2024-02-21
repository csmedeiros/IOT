void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(1, OUTPUT);
  Serial.begin(9000);
}

void loop() {
  // put your main code here, to run repeatedly:
  int tensao = analogRead(A0);
  int voltagem = tensao * (5.0 / 1024);
  Serial.println(tensao);
  Serial.println(voltagem);
  delay(1000);
}