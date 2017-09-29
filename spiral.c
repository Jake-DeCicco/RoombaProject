#pragma config(Sensor, S1,     gyro,           sensorEV3_Gyro)
#pragma config(Sensor, S2,     wallButton,     sensorEV3_Touch)
#pragma config(Sensor, S4,     button,         sensorEV3_Touch)
#pragma config(Motor,  motorB,          left,          tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          right,         tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
  int leftSpeed = 10;
  int counter = 0;
  int rightSpeed = 40;

  while(counter < 91)
  {
  	motor(left) = leftSpeed;
  	motor(right) = rightSpeed;
  	wait1Msec(300);

  	counter = counter + 1;
  	leftSpeed = leftSpeed + 1;
  	rightSpeed = rightSpeed + 1;
  }
}
