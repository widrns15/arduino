# My fucking first arduino file

## seong_il
[github](https://github.com/widrns15/arduino/blob/master/seong_il/seong_il.ino)

인덕대학교 메카트로닉스공학과 2학년 1학기 기말고사

아두이노 우노 를 이용하여 자유롭게 개발해보시오

<br>

### 청각장애인을 위한 자동차 후방센서

```
if (cm < 30) // 빨간 LED만 켜짐
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
  }

  else if (cm < 50) // 노란 LED만 켜짐
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, LOW);
  }

  else if (cm < 100) // 초록 LED만 켜짐
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }

  else if (cm > 100) // 모두 꺼짐
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }
```


- '' : level 1
- challenge : level 2
- golden_bell : level 3
- mid_test : 중간고사 
- gimal_test : 기말고사