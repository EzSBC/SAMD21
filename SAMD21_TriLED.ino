// 5V PSU Control

#define RTC_INT 2
#define LEDR    7
#define LEDG    8
#define LEDB    13

void setup () {
  //while (!SerialUSB);       // Wait for USB to stop being the download port.
  SerialUSB.begin(115200);
  //delay(1500);
  //while (!SerialUSB); 
  
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
   
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
  digitalWrite(LEDR, HIGH);
  digitalWrite(LEDG, HIGH);
  digitalWrite(LEDB, HIGH);
  }

void loop () {
    //digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);
    //digitalWrite(13, LOW);    
    digitalWrite(LEDR, LOW);
    
    delay(1000);
    digitalWrite(LEDR, HIGH);
    digitalWrite(LEDG, LOW);
    
    delay(1000);
    digitalWrite(LEDG, HIGH);
    digitalWrite(LEDB, LOW);
    
    delay(1000);
    digitalWrite(LEDB, HIGH);
    
    //delay(1000);
}
