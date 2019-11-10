void setup()
{
  Serial.begin(9600);
  delay(1000);
  
  Serial.print ("ATD+910328483766;\r"); // make call
  
  delay(1000);
  Serial.print ("AT+CMGS=1 \r");//gui tin nhan
  delay(1000);
  Serial.print ("AT+CMGS=\"+910328483766\"\r");
  delay(1000);
  Serial.print ("HeLLO \r");
  delay(1000);
  Serial.write (0x1A);
  delay(1000);
  
  
}

void loop()
{
  
}

