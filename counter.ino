// Constants
const int DP = 0;
const int A = 1;
const int B = 2;
const int C = 3;
const int D = 4;
const int E = 5;
const int F = 6;
const int G = 7;
const int buttonPin = 14;

// Variables
int count = 0;
int buttonState;
int lastButtonState = LOW;

// Function to convert an int in an
// hexadecimal number on display
void display_number(int num){
  switch(num){
    case 0:
      digitalWrite(A,LOW);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,HIGH);
      break;
    case 1:
      digitalWrite(A,HIGH);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(G,HIGH);
      break;
    case 2:
      digitalWrite(A,LOW);
      digitalWrite(B,LOW);
      digitalWrite(C,HIGH);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,HIGH);
      digitalWrite(G,LOW);
      break;
    case 3:
      digitalWrite(A,LOW);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(G,LOW);
      break;
    case 4:
      digitalWrite(A,HIGH);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      break;
    case 5:
      digitalWrite(A,LOW);
      digitalWrite(B,HIGH);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,HIGH);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      break;
    case 6:
      digitalWrite(A,LOW);
      digitalWrite(B,HIGH);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      break;
    case 7:
      digitalWrite(A,LOW);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(G,HIGH);
      break;
    case 8:
      digitalWrite(A,LOW);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      break;
    case 9:
      digitalWrite(A,LOW);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,HIGH);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      break;
    case 10:
      digitalWrite(A,LOW);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,HIGH);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      break;
    case 11: 
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      break;
    case 12:
      digitalWrite(A,LOW);
      digitalWrite(B,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,HIGH);
      break;
    case 13:
      digitalWrite(A,HIGH);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,HIGH);
      digitalWrite(G,LOW);
      break;
    case 14:
      digitalWrite(A,LOW);
      digitalWrite(B,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      break;
    case 15:
      digitalWrite(A,LOW);
      digitalWrite(B,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(D,HIGH);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      break;
  }
}

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);
  // Start displaying zero
  display_number(0);
}

void loop() {
  int reading = digitalRead(buttonPin);
  while(digitalRead(buttonPin) == HIGH) {
    // turn on dot when button is pressed
  	digitalWrite(DP,LOW);
    // check to see if you just pressed the button
  	int reading = digitalRead(buttonPin);
  }
  // turn off dot when button is released
  digitalWrite(DP,HIGH);

    // if the button state has changed:
    if (reading != buttonState) {
      buttonState = reading;

      // only count and display number if the new button state is HIGH
      if (buttonState == HIGH) {
        count++;
        if(count > 15) count = 0;
      }
    }

  display_number(count);

  // save the reading. Next time through the loop, it'll be the lastButtonState:
  lastButtonState = reading;
}
