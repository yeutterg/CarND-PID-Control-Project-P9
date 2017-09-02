#include "PID.h"

using namespace std;

PID::PID() {}

PID::~PID() {}

/** 
 * Initializes the PID Controller
 *
 * @param Kp: The proportional gain coefficient
 * @param Ki: The integral gain coefficient
 * @param Kd: The derivative gain coefficient
 */
void PID::Init(double Kp, double Ki, double Kd) {
    // Set gain coeffients
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;

    // Init error values to zero
    p_error = 0.0;
    i_error = 0.0;
    d_error = 0.0;
}

/** 
 * Updates the PID error to improve the response given the cross track error
 * Note: this will hit a local maximum, may not be optimal
 *
 * @param cte: The cross track error value
 */
void PID::UpdateError(double cte) {
    d_error = cte - p_error;
    p_error = cte;
    i_error += cte;
}

/**
 * Calculates the total PID error 
 */
double PID::TotalError() {
    return Kp * p_error + Ki * i_error + Kd * d_error;
}

