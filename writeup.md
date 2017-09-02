# Self-Driving Car Engineer Nanodegree
## PID Control Project Writeup

By Greg Yeutter

2017-09-02

## Explanation of PID Control

PID stands for Proportional, Integral, Derivative. The control loop is based on the error recorded by a sensor versus a setpoint (P, I, and D) at a consistent interval.

In this instance, a simulated racetrack provided a cross track error at each time interval. A function was implemented to update the proportional, integral, and derivative errors.

The proportional error is proportional to the cross track error, given by the equation p_error = cte.

The derivative term considers the rate of change of the error. In practice, this is given by the difference between the previous proportional error and the new cross track error. It can be explained by the equation d_error = cte - p_error(previous).

The integral term helps bring the controller to zero by analyzing the cross track error over time. In practice, this value is relatively small. It is explained by the equation i_error += cte.

## Project Implementation

The goal of this project was to implement a PID controller for steering a vehicle around a simulated racetrack. Started code was given.

To implement the code, I had to:
* Implement the initialization routine for the PID controller
* Implement the function the updates the proportional, derivative, and integral error given the cross track error
* Calculate the total error for PID
* Initialize the PID controller using variables I defined
* Update the PID errors based on cross track error and compute steering angles based on the total error

Along the way, I found it useful to print the error values for P, I, and D on each step, to help tune parameters.

Once the code was successfully implemented, I tuned the parameters manually, starting with P, then D, then I. Once I was satisfied with the performance, I increased the throttle to 0.7 and made minor adjustments to P, I, and D.

I settled on these values:
* Kp: -0.08
* Ki: -0.0001
* Kd: -3.0
* Throttle: 0.7

Those values gave me relatively smooth performance at a speed around 70 mph. Performance could be improved by using twiddle. 

