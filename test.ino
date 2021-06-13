/* assistant using by attiny13a developed on 10 03 2018  
 * 06 februari
 * ic manager for any truble restart assestant
*/

//const int IcIn = 2;         // Main IC signal inpur
const int pin0 = 0;       // Assistant active status
const int pin1 = 1;        // Main IC input Indicator
const int pin2 = 2;       // if got any truble restart reset power
const int pin3 = 3;
const int pin4 = 4;

int d = 810;
int i   = 0;


void setup() {
  pinMode(pin0, OUTPUT);       // Assistant active status
  pinMode(pin1, OUTPUT);        // Main IC input Indicator
  pinMode(pin2, OUTPUT);       // if got any truble restart reset power
  
  pinMode(pin3, INPUT);
  pinMode(pin4, INPUT);
  
  digitalWrite(pin0, LOW);       // Assistant active status
  digitalWrite(pin1, LOW);       // Main IC input Indicator
  digitalWrite(pin2, LOW);       // if got any truble restart reset power

  digitalWrite(pin3, HIGH);       // Assistant active status
  digitalWrite(pin4, HIGH);

}  

void loop() 
{

    digitalWrite(pin0, HIGH);       // Assistant active status
    delay(d/2);
    digitalWrite(pin0, LOW);       // Assistant active status
    delay(d/2);

    digitalWrite(pin1, HIGH);       // Assistant active status
    delay(d/2);
    digitalWrite(pin1, LOW);       // Assistant active status
    delay(d/2);

    digitalWrite(pin2, HIGH);       // Assistant active status
    delay(d/2);
    digitalWrite(pin2, LOW);       // Assistant active status
    delay(d/2);

    digitalWrite(pin0, HIGH);       // Assistant active status
    delay(d/2);
    digitalWrite(pin1, HIGH);       // Assistant active status
    delay(d/2);
    digitalWrite(pin2, HIGH);       // Assistant active status
    delay(d/2);
    digitalWrite(pin2, LOW);       // Assistant active status
    delay(d/2);
    digitalWrite(pin1, LOW);       // Assistant active status
    delay(d/2);
    digitalWrite(pin0, LOW);       // Assistant active status
    delay(d/2);
  
  
}
