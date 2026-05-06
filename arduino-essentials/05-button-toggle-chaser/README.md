05 - Button Toggle Knight Rider (Non-Blocking)
This project features a Knight Rider LED animation controlled by a single push button (Start/Stop). It is built using professional state management to ensure a responsive user experience.

 Key Features
Non-Blocking Architecture: Uses a "step-by-step" logic instead of long delay() or for loops, allowing the system to listen to the button at all times.

Toggle Control: Implements a state-based logic (Press once to start, press again to stop).

Debounced Input: Includes software debouncing to prevent mechanical button noise.

Hardware Connections
LEDs: Connected to Digital Pins 2 - 9.

Button: Connected to Digital Pin 10 (with a 10kΩ Pull-down resistor).

Instructions
Upload the code via Arduino IDE.

Press once to initiate the LED sequence.
Press again to immediately stop the animation.
