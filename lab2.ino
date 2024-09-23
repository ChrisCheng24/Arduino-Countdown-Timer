const int buttonPin = A2;     
const int buttonPin1 = A3;     
const int buttonPin2 = A4;     

void setup() {
for(int i=2; i<=8; i++)
pinMode( i, OUTPUT); 
for(int j=9; j<=13; j++)
pinMode( j, OUTPUT); 
pinMode( A0, OUTPUT);
pinMode( A1, OUTPUT);
pinMode( buttonPin, INPUT);
pinMode( buttonPin1, INPUT);
pinMode( buttonPin2, INPUT);
}

void Button(){


  int p, o;
    for( int s = 60; s >= 0; s--){
      if(s != 60 && digitalRead(buttonPin) == HIGH)
        return ;
       if(s == 59){
            while(digitalRead(buttonPin1) != HIGH){
              if(digitalRead(buttonPin) == HIGH)
                    return ;
            }
       }
       else{
          if(digitalRead(buttonPin1) == HIGH){
            while(digitalRead(buttonPin2) != HIGH){
                if(digitalRead(buttonPin) == HIGH)
                  return ;
            }
            s = 60;
          }
          
      }

    p = (s - s % 10) / 10;
    o = s % 10;

  switch (o) { 
    case 0:
    digitalWrite( 2, LOW);  //0
    digitalWrite( 3, LOW);
    digitalWrite( 4, LOW);
    digitalWrite( 5, LOW);
    digitalWrite( 6, LOW);
    digitalWrite( 7, HIGH);
    digitalWrite( 8, LOW);
    break;
    case 1:
    digitalWrite( 2, HIGH);  //1
digitalWrite( 3, LOW);
digitalWrite( 4, LOW);
digitalWrite( 5, HIGH);
digitalWrite( 6, HIGH);
digitalWrite( 7, HIGH);
digitalWrite( 8, HIGH);

    break;
    case 2:
    digitalWrite( 2, LOW);  //2
digitalWrite( 3, LOW);
digitalWrite( 4, HIGH);
digitalWrite( 5, LOW);
digitalWrite( 6, LOW);
digitalWrite( 7, LOW);
digitalWrite( 8, HIGH);

    break;
    case 3:
    digitalWrite( 2, LOW);  //3
digitalWrite( 3, LOW);
digitalWrite( 4, LOW);
digitalWrite( 5, LOW);
digitalWrite( 6, HIGH);
digitalWrite( 7, LOW);
digitalWrite( 8, HIGH);

    break;
    case 4:
    digitalWrite( 2, HIGH);  //4
digitalWrite( 3, LOW);
digitalWrite( 4, LOW);
digitalWrite( 5, HIGH);
digitalWrite( 6, HIGH);
digitalWrite( 7, LOW);
digitalWrite( 8, LOW);

    break;
    case 5:
   digitalWrite( 2, LOW);  //5
digitalWrite( 3, HIGH);
digitalWrite( 4, LOW);
digitalWrite( 5, LOW);
digitalWrite( 6, HIGH);
digitalWrite( 7, LOW);
digitalWrite( 8, LOW);

    break;
    case 6:
    digitalWrite( 2, LOW);  //6
digitalWrite( 3, HIGH);
digitalWrite( 4, LOW);
digitalWrite( 5, LOW);
digitalWrite( 6, LOW);
digitalWrite( 7, LOW);
digitalWrite( 8, LOW);

    break;
    case 7:
    digitalWrite( 2, LOW);  //7
digitalWrite( 3, LOW);
digitalWrite( 4, LOW);
digitalWrite( 5, HIGH);
digitalWrite( 6, HIGH);
digitalWrite( 7, HIGH);
digitalWrite( 8, HIGH);

    break;
    case 8:
   digitalWrite( 2, LOW);  //8
digitalWrite( 3, LOW);
digitalWrite( 4, LOW);
digitalWrite( 5, LOW);
digitalWrite( 6, LOW);
digitalWrite( 7, LOW);
digitalWrite( 8, LOW);

    break;
    case 9:
   digitalWrite( 2, LOW); //9
digitalWrite( 3, LOW);
digitalWrite( 4, LOW);
digitalWrite( 5, LOW);
digitalWrite( 6, HIGH);
digitalWrite( 7, LOW);
digitalWrite( 8, LOW);

    break;
  }
  switch (p) { 
    case 0:
   digitalWrite( 9, LOW);
digitalWrite( 10, LOW);
digitalWrite( 11, LOW);
digitalWrite( 12, LOW);
digitalWrite( 13, LOW);
digitalWrite( A0, HIGH);
digitalWrite( A1, LOW);

    break;
    case 1:
digitalWrite( 9, HIGH);  //1
digitalWrite( 10, LOW);
digitalWrite( 11, LOW);
digitalWrite( 12, HIGH);
digitalWrite( 13, HIGH);
digitalWrite( A0, HIGH);
digitalWrite( A1, HIGH);

    break;
    case 2:
    digitalWrite( 9, LOW);  //2
digitalWrite( 10, LOW);
digitalWrite( 11, HIGH);
digitalWrite( 12, LOW);
digitalWrite( 13, LOW);
digitalWrite( A0, LOW);
digitalWrite( A1, HIGH);

    break;
    case 3:
    digitalWrite( 9, LOW);  //3
digitalWrite( 10, LOW);
digitalWrite( 11, LOW);
digitalWrite( 12, LOW);
digitalWrite( 13, HIGH);
digitalWrite( A0, LOW);
digitalWrite( A1, HIGH);

    break;
    case 4:
    digitalWrite( 9, HIGH);  //4
digitalWrite( 10, LOW);
digitalWrite( 11, LOW);
digitalWrite( 12, HIGH);
digitalWrite( 13, HIGH);
digitalWrite( A0, LOW);
digitalWrite( A1, LOW);

    break;
    case 5:
    digitalWrite( 9, LOW);  //5
digitalWrite( 10, HIGH);
digitalWrite( 11, LOW);
digitalWrite( 12, LOW);
digitalWrite( 13, HIGH);
digitalWrite( A0, LOW);
digitalWrite( A1, LOW);

    break;
    case 6:
    digitalWrite( 9, LOW);  //6
digitalWrite( 10, HIGH);
digitalWrite( 11, LOW);
digitalWrite( 12, LOW);
digitalWrite( 13, LOW);
digitalWrite( A0, LOW);
digitalWrite( A1, LOW);

    break;
  }
  delay(1000);
  if(s == 0)
    s = 61;
  }
  
}

void loop() {
 

    int l, m;
     for(int k = 0; k <= 59; k++){
      
      if(digitalRead(buttonPin) == HIGH){
          Button();
      }

    l = (k - k % 10) / 10;
    m = k % 10;


 switch (m) { 
    case 0:
    digitalWrite( 2, LOW);  //0
    digitalWrite( 3, LOW);
    digitalWrite( 4, LOW);
    digitalWrite( 5, LOW);
    digitalWrite( 6, LOW);
    digitalWrite( 7, HIGH);
    digitalWrite( 8, LOW);
    break;
    case 1:
    digitalWrite( 2, HIGH);  //1
digitalWrite( 3, LOW);
digitalWrite( 4, LOW);
digitalWrite( 5, HIGH);
digitalWrite( 6, HIGH);
digitalWrite( 7, HIGH);
digitalWrite( 8, HIGH);

    break;
    case 2:
    digitalWrite( 2, LOW);  //2
digitalWrite( 3, LOW);
digitalWrite( 4, HIGH);
digitalWrite( 5, LOW);
digitalWrite( 6, LOW);
digitalWrite( 7, LOW);
digitalWrite( 8, HIGH);

    break;
    case 3:
    digitalWrite( 2, LOW);  //3
digitalWrite( 3, LOW);
digitalWrite( 4, LOW);
digitalWrite( 5, LOW);
digitalWrite( 6, HIGH);
digitalWrite( 7, LOW);
digitalWrite( 8, HIGH);

    break;
    case 4:
    digitalWrite( 2, HIGH);  //4
digitalWrite( 3, LOW);
digitalWrite( 4, LOW);
digitalWrite( 5, HIGH);
digitalWrite( 6, HIGH);
digitalWrite( 7, LOW);
digitalWrite( 8, LOW);

    break;
    case 5:
   digitalWrite( 2, LOW);  //5
digitalWrite( 3, HIGH);
digitalWrite( 4, LOW);
digitalWrite( 5, LOW);
digitalWrite( 6, HIGH);
digitalWrite( 7, LOW);
digitalWrite( 8, LOW);

    break;
    case 6:
    digitalWrite( 2, LOW);  //6
digitalWrite( 3, HIGH);
digitalWrite( 4, LOW);
digitalWrite( 5, LOW);
digitalWrite( 6, LOW);
digitalWrite( 7, LOW);
digitalWrite( 8, LOW);

    break;
    case 7:
    digitalWrite( 2, LOW);  //7
digitalWrite( 3, LOW);
digitalWrite( 4, LOW);
digitalWrite( 5, HIGH);
digitalWrite( 6, HIGH);
digitalWrite( 7, HIGH);
digitalWrite( 8, HIGH);

    break;
    case 8:
   digitalWrite( 2, LOW);  //8
digitalWrite( 3, LOW);
digitalWrite( 4, LOW);
digitalWrite( 5, LOW);
digitalWrite( 6, LOW);
digitalWrite( 7, LOW);
digitalWrite( 8, LOW);

    break;
    case 9:
   digitalWrite( 2, LOW); //9
digitalWrite( 3, LOW);
digitalWrite( 4, LOW);
digitalWrite( 5, LOW);
digitalWrite( 6, HIGH);
digitalWrite( 7, LOW);
digitalWrite( 8, LOW);

    break;
  }
  switch (l) { 
    case 0:
   digitalWrite( 9, LOW);
digitalWrite( 10, LOW);
digitalWrite( 11, LOW);
digitalWrite( 12, LOW);
digitalWrite( 13, LOW);
digitalWrite( A0, HIGH);
digitalWrite( A1, LOW);

    break;
    case 1:
digitalWrite( 9, HIGH);  //1
digitalWrite( 10, LOW);
digitalWrite( 11, LOW);
digitalWrite( 12, HIGH);
digitalWrite( 13, HIGH);
digitalWrite( A0, HIGH);
digitalWrite( A1, HIGH);

    break;
    case 2:
    digitalWrite( 9, LOW);  //2
digitalWrite( 10, LOW);
digitalWrite( 11, HIGH);
digitalWrite( 12, LOW);
digitalWrite( 13, LOW);
digitalWrite( A0, LOW);
digitalWrite( A1, HIGH);

    break;
    case 3:
    digitalWrite( 9, LOW);  //3
digitalWrite( 10, LOW);
digitalWrite( 11, LOW);
digitalWrite( 12, LOW);
digitalWrite( 13, HIGH);
digitalWrite( A0, LOW);
digitalWrite( A1, HIGH);

    break;
    case 4:
    digitalWrite( 9, HIGH);  //4
digitalWrite( 10, LOW);
digitalWrite( 11, LOW);
digitalWrite( 12, HIGH);
digitalWrite( 13, HIGH);
digitalWrite( A0, LOW);
digitalWrite( A1, LOW);

    break;
    case 5:
    digitalWrite( 9, LOW);  //5
digitalWrite( 10, HIGH);
digitalWrite( 11, LOW);
digitalWrite( 12, LOW);
digitalWrite( 13, HIGH);
digitalWrite( A0, LOW);
digitalWrite( A1, LOW);

    break;
    case 6:
    digitalWrite( 9, LOW);  //6
digitalWrite( 10, HIGH);
digitalWrite( 11, LOW);
digitalWrite( 12, LOW);
digitalWrite( 13, LOW);
digitalWrite( A0, LOW);
digitalWrite( A1, LOW);

    break;
  }
  delay(1000);
  }
}
