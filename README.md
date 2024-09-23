# Arduino Countdown Timer

#### Video Demo: [Arduino Countdown Timer](https://youtube.com/shorts/Lgh5dq49zwU)

#### Description:

This Arduino-based countdown timer is a digital project designed to display and manage time countdown on two seven-segment displays. The system offers a range of features to enhance functionality and user interaction.

Key Features:
1. **Dual Seven-Segment Display**: The timer uses two seven-segment displays to show minutes and seconds, allowing for a clear and easily readable countdown.

2. **Countdown Functionality**: The timer counts down from a preset time, displaying the remaining time in minutes and seconds.

3. **Button Controls**: The project incorporates multiple buttons for user interaction, allowing for start, stop, and reset functions.

4. **60-Second Timer**: As demonstrated in the video, the timer is set up to count down from 60 seconds, but this can be easily modified in the code.

5. **Pause and Resume**: Users can pause the countdown and resume it from where it left off.

6. **Reset Capability**: The timer can be reset to its initial state, ready for a new countdown.

Technical Implementation:
The project is implemented using an Arduino board and makes use of several components and programming concepts:

- **Arduino Board**: The core of the project, managing all logic and I/O operations.
- **Seven-Segment Displays**: Two displays are used to show the minutes and seconds.
- **Push Buttons**: Used for user input to control the timer's functions.
- **Digital I/O**: Extensively used to control the seven-segment displays and read button inputs.
- **Timer Logic**: Implemented in the Arduino sketch to manage the countdown process.

Code Structure:
- The code uses `setup()` function to initialize pin modes and set initial states.
- The `loop()` function contains the main program logic, including button checks and display updates.
- Separate functions are used to handle different digit displays and button actions.

Hardware Setup:
- Two seven-segment displays connected to digital pins for each segment.
- Multiple push buttons connected to analog pins for input.
- Appropriate resistors and wiring to ensure proper circuit functionality.

User Interaction:
1. The timer starts at 60 seconds when powered on or reset.
2. Users can start the countdown using a designated button.
3. The countdown can be paused and resumed using another button.
4. A reset button allows users to return to the initial 60-second state.

This Arduino countdown timer project demonstrates the use of digital I/O, timer programming, user input handling, and display management in embedded systems. It serves as a practical application of Arduino programming skills and can be a foundation for more complex timing-based projects.
