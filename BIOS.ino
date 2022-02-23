#include <Keyboard.h>
 
void setup() {
  Keyboard.begin();
  delay(1000);
  Keyboard.print("8@tM@n");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  delay(1400);
  Keyboard.press(KEY_LEFT_ARROW);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.press(KEY_RIGHT_ARROW);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.press(KEY_TAB);
  delay(10);
  Keyboard.releaseAll();
  delay(600);
  Keyboard.print("8@tM@n");
  Keyboard.press(KEY_TAB);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.press(KEY_TAB);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.press(KEY_TAB);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.print("sudo dmidecode | grep Serial");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.end();
  
}
   
void loop() {}
