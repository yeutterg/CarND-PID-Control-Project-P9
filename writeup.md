# Self-Driving Car Engineer Nanodegree
## PID Control Project Writeup
### By Greg Yeutter
### 2017-09-02

## Project Overview

The goal of this project was to implement a PID controller for steering a vehicle around a simulated racetrack. Started code was given.

To implement the code, I had to:
* Implement the initialization routine for the PID controller
* Implement the function the updates the proportional, derivative, and integral error given the cross track error
* Calculate the total error for PID
* Initialize the PID controller using variables I defined
* Update the PID errors based on cross track error and compute steering angles based on the total error

Once the code was successfully implemented, I tuned the parameters, starting with P, then D, then I. Once I was satisfied with the performance, I increased the throttle to 0.7 and made minor adjustments to P, I, and D.

I settled on these values:
* Kp: -0.08
* Ki: -0.0001
* Kd: -3.0
* Throttle: 0.7

Those values gave me relatively smooth performance at a speed around 70 mph.

Along the way, I found it useful to print the error values for P, I, and D on each step, to help tune parameters.