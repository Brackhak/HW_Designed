int ledPin1 = 5;
int ledPin2 = 6;
int ledPin3 = 7;
int ledPin4 = 8;
int ledPin5 = 9;
int ledPin6 = 10;
int ledPin7 = 11;
int ledPin8 = 12; // LED connected to digital pin 9
int led[6] = {3,5,6,9,10,11};

void setup() {
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
  pinMode(ledPin4,OUTPUT);
  pinMode(ledPin5,OUTPUT);
  pinMode(ledPin6,OUTPUT);
  pinMode(ledPin7,OUTPUT);
  pinMode(ledPin8,OUTPUT);
}

void loop() {
  // fade in from min to max in increments of 5 points:
  for(int i=0;i<=5;i++){
  for(int j=0;j<=255;j++){
  analogWrite(led[i],j);
  delay(15);
  }
}

for(int i=0;i<=5;i++){
  for(int j=255;j>=0;j--){
  analogWrite(led[i],j);
  delay(15);
  }
}


delay(100);
for(int m=0;m<=255;m++){
  analogWrite(led[0],m);
  analogWrite(led[1],m);
  analogWrite(led[2],m);
  analogWrite(led[3],m);
  analogWrite(led[4],m);
  analogWrite(led[5],m);
  Serial.print("ALL LED");
  Serial.print(": ");
  Serial.println(m);
  delay(15);
}
for(int n=255;n>=0;n--){
  analogWrite(led[0],n);
  analogWrite(led[1],n);
  analogWrite(led[2],n);
  analogWrite(led[3],n);
  analogWrite(led[4],n);
  analogWrite(led[5],n);
  Serial.print("ALL LED");
  Serial.print(": ");
  Serial.println(n);
  delay(15);
}



  
}