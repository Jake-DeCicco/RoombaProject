#pragma config(Sensor, S1,     sonar,          sensorNone)
#pragma config(Sensor, S4,     button,         sensorNone)
#pragma config(Motor,  motorB,          left,          tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          right,         tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
  int speed = 0;
  int counter = 0;

  while(counter < 101)
  {
  	motor(right) = 100;
  	motor(left) = speed;
  	wait1Msec(200);

  	counter = counter + 1;
  	speed = speed + 1;
  }
}
