int n = 2 ; //number
int bin[4]; //binary number
int i = 3;

void setup() {
  //assigning pins
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  while(i >= 0){
    bin[i] = n % 2;
    n = n/2;
    i--;
  } //divides the number by 2 and stores remainder in a 4 bit array

  if(n == 0){
    //if input is 0
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }

//Bulb glows for value 1, and does not glow for value 0
  if(bin[0] == 1){
    digitalWrite(2,LOW);
  }
  else if(bin[0] == 0){
    digitalWrite(2,HIGH);
  }
   if(bin[1] == 1){
    digitalWrite(3,LOW);
  }
  else if(bin[1] == 0){
    digitalWrite(3,HIGH);
  }
   if(bin[2] == 1){
    digitalWrite(4,LOW);
  }
  else if(bin[2] == 0){
    digitalWrite(4,HIGH);
  }
   if(bin[3] == 1){
    digitalWrite(5,LOW);
  }
  else if(bin[3] == 0){
    digitalWrite(5,HIGH);
  }
  
 /* attempt 1 failed
  *  for(j = 0; j<4; j++){
    if(bin[j] == 0){
      digitalWrite(p, LOW);
      p++;
    }
    else if(bin[j] == 1){
      digitalWrite(p, HIGH);
      p++;
    }*/
}
