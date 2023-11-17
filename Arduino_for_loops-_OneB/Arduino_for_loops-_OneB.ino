int red=12;
int green=10;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for(int i=0;i< 4;i++){
                  digitalWrite(10, HIGH);
                  delay(1000);
                  digitalWrite(10, LOW);
                  delay(1000);
        }
        for(int i=0;i< 5;i++){
                  digitalWrite(12, HIGH);
                  delay(1000);
                  digitalWrite(12, LOW);
                  delay(1000);
        }


}
