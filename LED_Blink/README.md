# Button Controlled LEDs

## Overview

This Arduino project demonstrates how to control two LEDs using a push button. The button input is configured with the internal pull-up resistor (`INPUT_PULLUP`), allowing reliable button detection without requiring an external pull-up resistor.

## Features

* Controls two LEDs with a single push button.
* Uses the Arduino internal pull-up resistor.
* Demonstrates basic digital input and output operations.
* Suitable for beginners learning Arduino programming and embedded systems concepts.

## Hardware Required

* Arduino Uno (or compatible board)
* 1 Push Button
* 1 Red LED
* 1 Green LED
* 2 Current-limiting resistors (220Ω recommended)
* Breadboard and jumper wires

## Pin Configuration

| Component   | Arduino Pin |
| ----------- | ----------- |
| Push Button | D2          |
| Red LED     | D13         |
| Green LED   | D12         |

## Working Principle

* When the push button is **pressed**, the Arduino reads a `LOW` signal because `INPUT_PULLUP` is enabled.

  * Red LED turns **ON**
  * Green LED turns **OFF**

* When the push button is **not pressed**, the Arduino reads a `HIGH` signal.

  * Red LED turns **OFF**
  * Green LED turns **ON**

## Learning Outcomes

This project demonstrates:

* Configuring digital input pins with `INPUT_PULLUP`
* Reading button states using `digitalRead()`
* Controlling LEDs using `digitalWrite()`
* Implementing conditional logic with `if` and `else`

## Files Included

* `Button_Controlled_LEDs.ino` – Arduino source code
* `diagram.json` – Wokwi circuit configuration
* `circuit.png` – Circuit screenshot (if included)

## Author

**Lohith Vella**
