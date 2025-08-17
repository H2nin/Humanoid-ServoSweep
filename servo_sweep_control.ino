#include <Servo.h>

// Create servo objects
Servo servo1, servo2, servo3, servo4;

void setup() {
  servo1.attach(5);
  servo2.attach(6);
  servo3.attach(11);
  servo4.attach(12);
}

void loop() {
  // Servo 1: 0° to 360°
  for (int pos = 0; pos <= 360; pos++) {
    servo1.write(pos);
    delay(5);
  }

  // Servo 1: 360° to 0°  && Servo 2: 0° to 360°
  for (int pos = 360; pos >= 0; pos--) {
    servo1.write(pos);
    servo2.write(360 - pos);
    delay(5);
  }

  // Servo 2: 360° to 0°  && Servo 3: 0° to 360°
  for (int pos = 360; pos >= 0; pos--) {
    servo2.write(pos);
    servo3.write(360 - pos);
    delay(5);
  }

  // Servo 3: 360° to 0°  && Servo 4: 0° to 360°
  for (int pos = 360; pos >= 0; pos--) {
    servo3.write(pos);
    servo4.write(360 - pos);
    delay(5);
  }

  // Servo 4: 360° to 0°
  for (int pos = 360; pos >= 0; pos--) {
    servo4.write(pos);
    delay(5);
  }

  // Set all to 90° after finishing
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);

  while (true); // Stop loop
}
