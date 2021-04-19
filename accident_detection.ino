  /*
                            *
                            * Project Name:   Instant road accident notyfying system
                            * Author List:    Adnan Mujawar,Team#30
                            *     
                            * Filename:       accident_detection.ino
                            * Functions:    output_pin(int), Main(), loop()
                            * Global Variables: <List of all the global variables defined in this file, None if no global
                            *     variables>
                            *
                            */
int OutPin = 8;
int outputPin = 9;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(OutPin, OUTPUT);
  pinMode(outputPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(OutPin); 
  int val1 = digitalRead(outputPin);
  if (val == HIGH) {
    Serial.println("1");
     }
     else if  (val1 == HIGH) {
      Serial.println("0");
     }
     
    
     delay(800);
  

}
