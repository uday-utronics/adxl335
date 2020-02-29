void setup() {
  // put your setup code here, to run once:
  //intialisation of adxl335 analog pins as inputs
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
Serial.begin(9600);//for serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
  int x,y,z;
  x=analogRead(A0);// reads adxl335 values
  y=analogRead(A1);
  z=analogRead(A2);
  Serial.println("x    :y    :z");
  Serial.print(x,DEC);// printing read values as decimal
  Serial.print("    ");
  Serial.print(y,DEC);
  Serial.print("    ");
  Serial.println(z,DEC);
  delay(1500);// time delay
}
