#include "Keyboard.h"
#include "Arduboy.h"

Arduboy arduboy;

char winKey = KEY_LEFT_GUI;

void setup() {
  arduboy.begin();
  arduboy.setFrameRate(15);
  arduboy.setTextSize(1);
  Keyboard.begin();
}

void launchPowerShell() {
  //start powershell
  Keyboard.press(winKey); // L-GUI
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(300);
  Keyboard.print("powershell ise");
  delay(200); 
  
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(3000);
  Keyboard.println("ping qore.no");
  delay(300);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
}

void launchWSL() {
  //start powershell
  Keyboard.press(winKey); // L-GUI
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(300);
  Keyboard.print("bash.exe");
  delay(200); 
  
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(2000);
  Keyboard.println("ping qore.no");
  delay(300);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
}

void launchTerminalGUI() {
  //start powershell
  Keyboard.press(winKey); // L-GUI
  Keyboard.releaseAll();
  delay(300);
  Keyboard.print("terminal");
  delay(200); 
  
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(2000);
  Keyboard.println("ping qore.no");
  delay(300);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
}

void loop() {

  if (!(arduboy.nextFrame()))
    return;
    
  arduboy.clear();
  arduboy.setCursor(0, 0);

  arduboy.print("A Button: Powershell\nB Button: WSL\nUp Button: Linux GUI");

  if (arduboy.pressed(A_BUTTON)) { 
    launchPowerShell();
  }

  if (arduboy.pressed(B_BUTTON)) { 
    launchWSL();
  }

  if (arduboy.pressed(UP_BUTTON)) { 
    launchTerminalGUI();
  }

  arduboy.display();
}
