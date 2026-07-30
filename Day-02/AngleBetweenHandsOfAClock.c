 double hourAngle = hour * 30 + minutes * 0.5;
    double minuteAngle = minutes * 6;

    double angle = hourAngle - minuteAngle;

    angle = (angle < 0) ? -angle : angle;
    angle = (angle > 180) ? 360 - angle : angle;

    return angle;
