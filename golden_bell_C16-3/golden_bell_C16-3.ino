int POTEN_PIN = A0;
int red = 11;
int green = 10;
int blue = 9;


void setup() 
{
  Serial.begin(9600); // 시리얼 통신 시작
  pinMode(13,OUTPUT); //13번핀 트리거 출력
  pinMode(12,INPUT);  //12번핀 에코 입력
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  
}

void loop() 
{
  long duration, cm; // 변수 duration, cm설정
  digitalWrite(13,LOW);//HIGH신호를 보내기전 깨끗하게
  delayMicroseconds(2);

  digitalWrite(13,HIGH);// 초음파 트리거 출력 시작
  delayMicroseconds(10);

  digitalWrite(13,LOW);//출력 종료
  
  duration = pulseIn(12,HIGH); //에코핀이 트리거가 HIGH인 시간 저장

  cm=(duration/2)/29.4; //초음파 거리를 cm로 산출

  Serial.print(cm);
  Serial.println("cm");
  delay(1000);

  int readVal= analogRead(POTEN_PIN);
  readVal = map(readVal, 0, 1023, 0, 255);
  Serial.println(readVal);
  delay(1000);
    
    if(cm<=10)
    {
      Color(readVal,0,0); // Red On
    }

    else if(cm<20)
    {
      Color(0,readVal,0); // Green On
    }

    else if(cm>=20)
    {
      Color(0,0,readVal); // Blue On
    }
    
  }

void Color(int r, int g, int b)
{
  analogWrite(red,r);
  analogWrite(green,g);
  analogWrite(blue,b);
}
