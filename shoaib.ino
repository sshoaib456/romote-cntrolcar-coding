#include <AFMotor.h>
//initial motors pin
AF_DCMotor motor1(1, MOTOR12_1KHZ);
AF_DCMotor motor2(2, MOTOR12_1KHZ);
AF_DCMotor motor3(3, MOTOR34_1KHZ);
AF_DCMotor motor4(4, MOTOR34_1KHZ);

char command;

void setup()
{
  Serial.begin(9600);
}


void loop() {
  {
    if (Serial.available() > 0){
       command = Serial.read();
       Stop();


      
      switch (Command){
        case 'F';
          forward();
          break;
        case 'B'
            backward();
          break;
        case 'L'
            Left();
          break;
        case 'R'
            right();
          break;
      }
 void forward()

 motor1.setSpeed(255);
 motor1.run(FORWARD);
 motor2.setSpeed(255);
 motor2.run(FORWARD);
 motor3.setSpeed(255);
 motor3.run(FORWARD)
 motor4.setSpeed(255);
 motor4.run(BACKWARD)

      void backward()

 motor1.setSpeed(255);
 motor1.run(BACKWARD);
 motor1.setSpeed(255);
 motor1.run(BACKWARD);
 motor1.setSpeed(255);
 motor1.run(BACKWARD)
 motor1.setSpeed(255);
 motor1.run(BACKWARD)

 void left()
    {
  motor1.setSpeed(255);
  motor1.run(BACKWARD)
  motor2.setSpeed(255);
  motor2.run(forward)
  motor3.setSpeed(255);
  motor3.run(BACKWARD)
  motor4.setSpeed(255);
  motor4.run(forward)


 void right();
 {
  motor1.setSpeed(255);
  motor1.run(FORWARD);
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  motor3.setSpeed(255);
  motor3.run(BACKWARD);
  motor4.setSpeed(255);
  motor4.run(FORWARD);

 void Stop()
 {
  motor1.setSpeed(255);
  motor1.run(RELEASE);
  motor2.setSpeed(255);
  motor2.run(RELEASE);
  motor3.setSpeed(255);
  motor3.run(RELEASE);
  motor4.setSpeed(255);
  motor4.run(RELEASE);

    }
    



    }


  }


}



}
