int lm35=A0;
float GC;
void setup(){
 Serial.begin(9600); 
}
void loop(){
  float mv=analogRead(lm35);
  GC=((mv*2.0039)-550)/10;
  Serial.println(GC);
  delay(1000);
}
