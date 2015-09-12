int x = 0;
int sound;
int led1 = 5;
int led2 = 6;
int led3 = 7;
int led4 = 8;
int led5 = 9;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
  
  sound = analogRead(x);
  Serial.println(sound);
    if (sound > 30) {
    digitalWrite(led3, HIGH);
    delay(20);
  }

    if(!sound)
    {
    digitalWrite(led1, LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    }
      
    if (sound > 100) {
  
    digitalWrite(led1, HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
      delay(20);
  
  }
  
    if (sound < 100) {

    digitalWrite(led3, LOW);
   delay(15);
  }
    if (sound > 150) {
    digitalWrite(led1, HIGH);
    digitalWrite(led5, HIGH);
    delay(20);
  }
    if (sound < 150) {
    digitalWrite(led3, LOW);
  }
    if (sound > 200) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    delay(20);
  }
    if (sound < 200) {  
    digitalWrite(led3, LOW);
    
  }
    if (sound > 200) {
    digitalWrite(led3, HIGH);
  }
  delay(10);
}
