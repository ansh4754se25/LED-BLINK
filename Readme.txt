System Description:

This project helps Linda get into her house safely when it's dark outside. She just presses a push button, and both the porch light and hallway light switch on right away. The porch light stays on for 30 seconds before turning off by itself, and the hallway light stays on a bit longer, turning off at 60 seconds. This way Linda doesn't need to worry about switching anything off manually once she's inside.

Components Used:

1.Arduino Nano 33 IoT
2. Push button
3. Porch LED
4. Hallway LED
5. Jumper wires
6.Breadboard
7. Arduino IoT Cloud

Code Description:

In the setup, the pins for both LEDs and the push button are configured, and the lights are kept off initially. The button uses INPUT_PULLUP, so pressing it pulls the pin LOW.

Inside the loop, the program checks the button state. Once it's pressed, both LEDs turn on at the same time and the current time is stored using millis(). The program then waits until 30 seconds have passed and turns the porch light off, then waits until 60 seconds total have passed and turns the hallway light off. If the button isn't pressed, both LEDs remain off.