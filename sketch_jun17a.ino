// Motor A

int enA = 9;
int in1 = 8;
int in2 = 7;

// Motor B
 
int enB = 3;
int in3 = 5;
int in4 = 4;

void setup()

{

 pinMode(enA, OUTPUT);
 pinMode(enB, OUTPUT);
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
 pinMode(in4, OUTPUT);
  
}

void demoOne()
{
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  analogWrite(enA, 200);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  analogWrite(enB, 500);

  delay(1000);

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  
}

void demoTwo()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  for(int i = 0; i<256; i++)

  {
    analogWrite(enA, i);
    analogWrite(enB, i);

    delay(20);
    }

    for(int i = 255; i>=0; --i)
    {
      analogWrite(enA, i);
      analogWrite(enB, i);

      delay(20); 
      }
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
}

void loop()

{
  demoOne();

  delay(1000);

  demoTwo();

  delay(1000);
}
