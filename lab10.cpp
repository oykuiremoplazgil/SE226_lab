int LED1pin=44;
int LED2pin=45;
int LED3pin=46;
int LED0pin=43;

int SW1=39;
int SW2=40;
int SW3=41;
int SW0=38;


byte lastButtonState1 = LOW;
byte lastButtonState2 = LOW;
byte lastButtonState3 = LOW;
byte lastButtonState4 = LOW;
byte ledState = LOW;

void setup() {
 pinMode(LED1pin, OUTPUT);
 pinMode(LED2pin, OUTPUT);
 pinMode(LED3pin, OUTPUT);
 pinMode(LED0pin, OUTPUT);
 pinMode(SW1, INPUT);
 pinMode(SW2, INPUT);
 pinMode(SW3, INPUT);
 pinMode(SW0, INPUT);
}

void loop(){
byte buttonState4 = digitalRead(SW0);
if (buttonState4 != lastButtonState4) {
  lastButtonState4 = buttonState4;
  if (buttonState4 == LOW) {
    ledState = (ledState == HIGH) ? LOW: HIGH;
    digitalWrite(LED0pin, ledState);
  }
}

byte buttonState1 = digitalRead(SW1);
if (buttonState1 != lastButtonState1) {
  lastButtonState1 = buttonState1;
  if (buttonState1 == LOW) {
    ledState = (ledState == HIGH) ? LOW: HIGH;
    digitalWrite(LED1pin, ledState);
  }
}

byte buttonState2 = digitalRead(SW2);
if (buttonState2 != lastButtonState2) {
  lastButtonState2 = buttonState2;
  if (buttonState2 == LOW) {
    ledState = (ledState == HIGH) ? LOW: HIGH;
    digitalWrite(LED2pin, ledState);
  }
}

byte buttonState3 = digitalRead(SW3);
if (buttonState3 != lastButtonState3) {
  lastButtonState3 = buttonState3;
  if (buttonState3 == LOW) {
    ledState = (ledState == HIGH) ? LOW: HIGH;
    digitalWrite(LED3pin, ledState);
  }
}

}
