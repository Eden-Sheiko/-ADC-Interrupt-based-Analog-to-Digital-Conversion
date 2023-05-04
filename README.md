# ADC Interrupt-based Analog-to-Digital Conversion

This repository contains an Arduino code sample for performing an analog-to-digital conversion using the ADC interrupt-based approach. The code reads the voltage level from an analog input pin (ADC0) and prints the digital value (10-bit resolution) to the Serial Monitor.

## Hardware Requirements

- An Arduino compatible board (e.g., Arduino Uno, Arduino Mega, or Arduino Nano)
- A device or sensor that provides an analog voltage output connected to the ADC0 pin (A0)

## Software Requirements

- Arduino IDE (version 1.8.0 or higher)

## Setup

1. Clone this repository or download the provided code sample.
2. Open the `.ino` file in the Arduino IDE.
3. Connect your Arduino board to your computer using a USB cable.
4. In the Arduino IDE, select the appropriate board and port under the "Tools" menu.
5. Upload the code to your Arduino board by clicking the "Upload" button.

## Usage

1. After successfully uploading the code, open the Serial Monitor in the Arduino IDE.
2. Set the baud rate of the Serial Monitor to 9600.
3. Observe the digital values (10-bit resolution) printed to the Serial Monitor, representing the voltage level of the connected analog device or sensor.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.
