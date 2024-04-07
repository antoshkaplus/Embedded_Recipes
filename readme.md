## Setup:
* Download Arduino Studio (IDE) for Linux: https://www.arduino.cc/en/software
* Move the extracted app to Home/Tools/
* You need to download icon if not present
* Follow instructions from 
`https://askubuntu.com/questions/1026528/adding-custom-programs-to-favourites-of-ubuntu-dock`
	* Then make a `arduino-ide.desctop` in `~/.local/share/applications`:
    ```
    [Desktop Entry]
    Type=Application
    Encoding=UTF-8
    Name=Arduino
    Comment=Arduino IDE
    Exec=/home/antoshkaplus/Tools/arduino-ide_2.3.2_Linux_64bit/arduino-ide
    Icon=/home/antoshkaplus/Tools/arduino-ide_2.3.2_Linux_64bit/arduino-ide-icon-2048x2025.png
    Terminal=false
    ```
	* And make .desktop file executable: chmod a+x arduino-ide.desktop
	* Now it should show up in search and you can add it to favourites.

### Arduino Upload permission issue.
You may end up having permission issues uploading to the board.
Use the following commands:
```
sudo usermod -a -G dialout $USER  
sudo chmod a+rw /dev/ttyUSB0
```
Replace `ttyUSB0` with your port name, could be `ttyACM0`.
Link: https://askubuntu.com/questions/1056314/uploading-code-to-arduino-gives-me-the-error-avrdude-ser-open-cant-open-d


## LED
* Looks like along with LOW and HIGH digital pin can take values 0 - 255.
* LED short leg is minus
* Short leg should go to the ground
* Long leg goes to numbered digital pin.
* Placing the resistor on the positive (anode) side of the resistor will have no differing effects from placing the resistor on the negative (cathode) side of the LED. 
  So don't sweat it, just pick a side!

## Resistors
* My resistors are exposed. Make sure nothing touches wire leads, otherwise may not work as expected.
* Color to resistance: https://www.digikey.com/en/resources/conversion-calculators/conversion-calculator-resistor-color-code-5-band




## Commands:
* initialize the digital pin as an output.
`pinMode({led pin number 0-13}, OUTPUT);`     
* turn the LED on (HIGH is the voltage level):
`digitalWrite(led, HIGH);`       
* turn the LED off by making the voltage LOW
`digitalWrite(led, LOW);` 
* wait for a second
`delay(1000);` 
* read from A0: `int sensorPin = A0;`
```sensorValue = analogRead(sensorPin);```
* print to serial monitor:
`Serial.println(sensorValue);`
* `analogRead({pin number})` - reads the value from the specified analog pin. 
  Arduino boards contain a multichannel, 10-bit analog to digital converter.
  That means values range: 0 - 1023.