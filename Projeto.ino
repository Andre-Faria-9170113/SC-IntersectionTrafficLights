long tempo;
int contadorseg;



int red01= 12;
int yellow01 = 11;
int green01= 10;

int red02= 9;
int yellow02= 8;
int green02= 7;

int button01 = 6;
int button02=5; 

int LED_peao01= 4;
int LED_peao02= 19;

void setup() {
  pinMode(red01, OUTPUT);
pinMode(yellow01, OUTPUT);
pinMode(green01, OUTPUT);

pinMode(red02, OUTPUT);
pinMode(yellow02, OUTPUT);
pinMode(green02, OUTPUT);

pinMode(button01, INPUT);
pinMode(button02, INPUT);


pinMode(LED_peao01, OUTPUT);
pinMode(LED_peao02, OUTPUT);

}

void loop() {

if(millis()-tempo>1000){
tempo=millis();
  contadorseg++;
  
}

  if(contadorseg==0){
  digitalWrite (red01, HIGH);
  digitalWrite (yellow01, LOW);
  digitalWrite (green01, LOW);

  digitalWrite (red02, LOW);
  digitalWrite (yellow02, LOW);
  digitalWrite (green02, HIGH);
  }
  if(contadorseg==3){

  digitalWrite (red01, HIGH);
  digitalWrite (yellow01, LOW);
  digitalWrite (green01, LOW);

  digitalWrite (red02, LOW);
  digitalWrite (yellow02, HIGH);
  digitalWrite (green02, LOW);
  }
 if(contadorseg==6){

  digitalWrite (red01, LOW);
  digitalWrite (yellow01, LOW);
  digitalWrite (green01, HIGH);

  digitalWrite (red02, HIGH);
  digitalWrite (yellow02, LOW);
  digitalWrite (green02, LOW);
 }
  if(contadorseg==9){

  digitalWrite (red01, LOW);
  digitalWrite (yellow01, HIGH);
  digitalWrite (green01, LOW);

  digitalWrite (red02, HIGH);
  digitalWrite (yellow02, LOW);
  digitalWrite (green02, LOW);
  }
  if(contadorseg==12){
  contadorseg=0;
  }

  if(digitalRead(button01) == HIGH){
    digitalWrite (red01, LOW);
  digitalWrite (yellow01, HIGH);
  digitalWrite (green01, LOW);

  digitalWrite (red02, LOW);
  digitalWrite (yellow02, HIGH);
  digitalWrite (green02, LOW);

  delay(3000);

  digitalWrite (red01, HIGH);
  digitalWrite (yellow01, LOW);
  digitalWrite (green01, LOW);

  digitalWrite (red02, LOW);
  digitalWrite (yellow02, LOW);
  digitalWrite (green02, HIGH);

  digitalWrite(LED_peao01, HIGH);

  delay(5000);

  digitalWrite(button01, LOW);
    digitalWrite(LED_peao01, LOW);

  contadorseg = 2;

  
  }

  if(digitalRead(button02) == HIGH){
    digitalWrite (red01, LOW);
  digitalWrite (yellow01, HIGH);
  digitalWrite (green01, LOW);

  digitalWrite (red02, LOW);
  digitalWrite (yellow02, HIGH);
  digitalWrite (green02, LOW);

  delay(3000);

  digitalWrite (red01, LOW);
  digitalWrite (yellow01, LOW);
  digitalWrite (green01, HIGH);

  digitalWrite (red02, HIGH);
  digitalWrite (yellow02, LOW);
  digitalWrite (green02, LOW);

  digitalWrite(LED_peao02, HIGH);

  delay(5000);

  digitalWrite(button02, LOW);
    digitalWrite(LED_peao02, LOW);

  contadorseg = 11;

  
  }

}


