int sw1_state=7; //스위치 함수 지정

int sw2_state=3;

int LED1=13; // LED 출력 지정

int call=0;

int count=0;

 

void setup() {

pinMode(7, INPUT); // LED 입력핀 지정

pinMode(3,INPUT);

pinMode(13, OUTPUT); // LED 출력핀 지정

Serial.begin(9600);

}

 

void loop() {

  sw2_state = digitalRead(3); 

  sw1_state = digitalRead(7);

  

 if(sw1_state==HIGH){

  if(call==0){

    delay(100);

    call=1;

  }

 }

 if(sw1_state==LOW){

  if(call==1){

    count+=1;

    delay(100);

    call=0;

  }

 }

 if(count>=3){

  digitalWrite(LED1,HIGH);

  delay(1000);

  digitalWrite(LED1,LOW);

  delay(1000);

 

  Serial.print(HIGH);

  Serial.println("LED1 on HIGH");

 }

 

 

 

while(sw2_state==1){

  digitalWrite(LED1,HIGH);

  delay(2000);

  digitalWrite(LED1,LOW);

  delay(2000);

  

  Serial.print(HIGH);

  Serial.println("LED2 on HIGH");

  }

}
