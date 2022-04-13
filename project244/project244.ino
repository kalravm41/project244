#define Buzzer 26;

const int VALUE_THRESHOLD = 30;

int TOUCH_SENSOR_VALUE_1; 
int TOUCH_SENSOR_VALUE_2;
int TOUCH_SENSOR_VALUE_3;
int TOUCH_SENSOR_VALUE_4;
int TOUCH_SENSOR_VALUE_5;


void setup() {

  pinMode(Buzzer, OUTPUT);
  Serial.begin(115200);
  delay(2000);

  digitalWrite(Buzzer, LOW);

}

void loop() {

  TOUCH_SENSOR_VALUE_1 = touchRead(T5);
  TOUCH_SENSOR_VALUE_2 = touchRead(T6);
  TOUCH_SENSOR_VALUE_3 = touchRead(T7);
  TOUCH_SENSOR_VALUE_4 = touchRead(T8);
  TOUCH_SENSOR_VALUE_5 = touchRead(T9);
  
  Serial.print("Touch Sensor 1 Value : ");
  Serial.print(TOUCH_SENSOR_VALUE_1);
  Serial.print(" ");

  Serial.print("Touch Sensor 2 Value : ");
  Serial.print(TOUCH_SENSOR_VALUE_2);
  Serial.print(" ");

  Serial.print("Touch Sensor 3 Value : ");
  Serial.print(TOUCH_SENSOR_VALUE_3);
  Serial.print(" ");

  Serial.print("Touch Sensor 4 Value : ");
  Serial.print(TOUCH_SENSOR_VALUE_4);
  Serial.print(" ");

  Serial.print("Touch Sensor 5 Value : ");
  Serial.print(TOUCH_SENSOR_VALUE_5);
  Serial.print(" ");

  delay(500);

  if (TOUCH_SENSOR_VALUE_1 < VALUE_THRESHOLD) {
    for (int i=0; i<5; i++) {
      digitalWrite(Buzzer, HIGH);
      delay(100); 

      digitalWrite(Buzzer, LOW);
      delay(100); 
    }
  }

    if (TOUCH_SENSOR_VALUE_2 < VALUE_THRESHOLD) {
    for (int i=0; i<5; i++) {
      digitalWrite(Buzzer, HIGH);
      delay(80); 
      
      digitalWrite(Buzzer, LOW);
      delay(80); 
    }
  }

    if (TOUCH_SENSOR_VALUE_3 < VALUE_THRESHOLD) {
    for (int i=0; i<5; i++) {
      digitalWrite(Buzzer, HIGH);
      delay(60); 

      digitalWrite(Buzzer, LOW);
      delay(60); 
    }
  }

    if (TOUCH_SENSOR_VALUE_4 < VALUE_THRESHOLD) {
    for (int i=0; i<5; i++) {
      digitalWrite(Buzzer, HIGH);
      delay(40); 

      digitalWrite(Buzzer, LOW);
      delay(40); 
    }
  }

    if (TOUCH_SENSOR_VALUE_5 < VALUE_THRESHOLD) {
    for (int i=0; i<5; i++) {
      digitalWrite(Buzzer, HIGH);
      delay(20); 

      digitalWrite(Buzzer, LOW);
      delay(20); 
    }
  }

  else{
    digitalWrite(Buzzer, LOW);
  }

}
