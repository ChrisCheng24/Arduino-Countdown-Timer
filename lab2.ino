// Pin assignments for buttons
const int buttonPin = A2;     // Main control button
const int buttonPin1 = A3;    // Secondary control button (pause)
const int buttonPin2 = A4;    // Tertiary control button (resume/reset)
   
void setup() {
  // Set pins 2-8 as outputs (likely controlling one 7-segment display)
  for(int i=2; i<=8; i++)
    pinMode(i, OUTPUT); 
  
  // Set pins 9-13 as outputs (likely controlling another 7-segment display)
  for(int j=9; j<=13; j++)
    pinMode(j, OUTPUT); 
  
  // Set A0 and A1 as outputs (additional segments for the second display)
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  
  // Set button pins as inputs
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

// Function for 60-second countdown mode with pause and reset capabilities
void Button() {
  int p, o; // Variables to store tens and ones digits

  // Main countdown loop from 60 to 0
  for(int s = 60; s >= 0; s--) {
    // Check if main button is pressed to exit the countdown mode
    if(s != 60 && digitalRead(buttonPin) == HIGH)
      return;

    // Pause functionality at 59 seconds
    if(s == 59) {
      while(digitalRead(buttonPin1) != HIGH) {
        if(digitalRead(buttonPin) == HIGH)
          return;
      }
    }
    else {
      // Reset functionality
      if(digitalRead(buttonPin1) == HIGH) {
        while(digitalRead(buttonPin2) != HIGH) {
          if(digitalRead(buttonPin) == HIGH)
            return;
        }
        s = 60; // Reset the countdown to 60 seconds
      }
    }

    // Calculate tens and ones digits
    p = (s - s % 10) / 10;
    o = s % 10;

    // Display ones digit
    switch (o) { 
      case 0:
        // Set appropriate segments for digit 0
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        break;
      // ... (cases 1-9 follow the same pattern)
    }

    // Display tens digit
    switch (p) { 
      case 0:
        // Set appropriate segments for digit 0
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
        digitalWrite(A0, HIGH);
        digitalWrite(A1, LOW);
        break;
      // ... (cases 1-6 follow the same pattern)
    }
    
    delay(1000); // Wait for 1 second
    
    // Reset countdown if it reaches 0
    if(s == 0)
      s = 61;
  }
}

void loop() {
  int l, m; // Variables to store tens and ones digits
  
  // Main loop counting from 0 to 59 repeatedly
  for(int k = 0; k <= 59; k++) {
    // Check if main button is pressed to enter 60-second countdown mode
    if(digitalRead(buttonPin) == HIGH) {
      Button();
    }

    // Calculate tens and ones digits
    l = (k - k % 10) / 10;
    m = k % 10;

    // Display ones digit
    switch (m) { 
      case 0:
        // Set appropriate segments for digit 0
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        break;
      // ... (cases 1-9 follow the same pattern)
    }

    // Display tens digit
    switch (l) { 
      case 0:
        // Set appropriate segments for digit 0
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
        digitalWrite(A0, HIGH);
        digitalWrite(A1, LOW);
        break;
      // ... (cases 1-6 follow the same pattern)
    }
    
    delay(1000); // Wait for 1 second
  }
}
