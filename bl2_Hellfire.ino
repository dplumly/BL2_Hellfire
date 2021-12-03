/*==========================
  Variables
  ==========================*/
const int triggerPin = 2;
const int motorPin = 3;

const int led1 = 4;
const int led2 = 5;
const int led3 = 6;
const int led4 = 7;
const int led5 = 8;


const int barrelDelay = 50;
int buttonState = 0;
int fadeValue = 5;

void setup() {
  Serial.begin(9600);
  pinMode(triggerPin, INPUT_PULLUP);
  pinMode(motorPin, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(triggerPin);
  Serial.println(buttonState);

  if (buttonState == LOW) {
    Serial.println("gate 1");
    if (fadeValue < 255)
    {
      Serial.println("gate 2");
      if (fadeValue >= 245)
      {
        fadeValue = 255;
      }
      else
      {
        fadeValue = fadeValue + 10;
        Serial.println(fadeValue);
      }
      analogWrite(motorPin, fadeValue);
    }
  }

  if (buttonState == HIGH) {
    Serial.println("gate 3");
    if (fadeValue > 1)
    {
      Serial.println("gate 4");
      if (fadeValue <= 25)
      {
        fadeValue = 20;
      }
      else
      {
         fadeValue = fadeValue - 10;
        Serial.println(fadeValue);
      }
      analogWrite(motorPin, fadeValue);
    }
  }
}







//void loop()
//{
//  buttonState = digitalRead(triggerPin);
//  Serial.println(buttonState);
//
//  if (buttonState == LOW) {
//    Serial.println("gate 1");
//    if (fadeValue < 255)
//    {
//      Serial.println("gate 2");
//      if (fadeValue >= 245)
//      {
//        fadeValue = 255;
//      }
//      else
//      {
//        fadeValue++;
//        Serial.println(fadeValue);
//      }
//      analogWrite(motorPin, fadeValue);
//      delay(100);
//    }
//  }
//}











//void barrelSpeedUp()
//{
//  int barrelSpeed;
//  Serial.println("in  speed Function");
//  for (int barrelSpeed = 0; barrelSpeed <= 255; barrelSpeed += 5) {
//    analogWrite(motorPin, barrelSpeed);
//    delay(barrelDelay);
//    Serial.println("in for loop");
//  }
//  if (barrelSpeed > 250) {
//    analogWrite(motorPin, 255);
//  }
//}


//
//  if (fadeValue < 255)
//    {
//        if (fadeValue >= 245)
//        {
//            fadeValue = 255;
//        }
//        else
//        {
//            fadeValue++;
//        }
//        analogWrite(motorPin, fadeValue);
//        delay(100);
//    }
//}
