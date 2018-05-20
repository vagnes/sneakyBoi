#include "Keyboard.h"

char winKey = KEY_LEFT_GUI;

void setup() {

  Keyboard.begin();
}

void launchPowerShell() {
  Keyboard.press(winKey); // L-GUI
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(300);
  Keyboard.print("powershell ise");
  delay(200); // Wait for search to populate result
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(2000);
  Keyboard.println("ping qore.no");
  delay(300);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
}

void loop() {
delay(2000);
launchPowerShell();
delay(20000000000
);

}

