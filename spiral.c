#pragma config(Sensor, S1,     gyro,           sensorEV3_Gyro)
#pragma config(Sensor, S2,     sonar,          sensorEV3_Ultrasonic)
#pragma config(Sensor, S4,     button,         sensorEV3_Touch)
#pragma config(Motor,  motorB,          left,          tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          right,         tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
  int speed = 20;
  int time = 1000;
  int counter = 0;


  while(counter < 40)
  {
  	motor(right) = 100;
  	motor(left) = speed;
  	wait1Msec(time);

  	counter = counter + 2;
  	time = time - 10;
  	speed = speed + 2;
  }
  /*while(counter == 80)
  {
  	motor(right) = 75;
  	motor(left) = 75;
  	wait1Msec(100);

  	if(SensorValue(button) == 1)
  	{
  		motor(left) = -75;
  		motor(right) = -75;
  		wait1Msec(650);

    }

  }*/
}
