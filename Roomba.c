#pragma config(Sensor, S1,     sonar,          sensorNone)
#pragma config(Sensor, S4,     button,         sensorNone)
#pragma config(Motor,  motorB,          left,          tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          right,         tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true){
	  motor(left) = 50;
	  motor(right) = 50;
	  wait1Msec(50);

	  while(SensorValue(sonar) > 5){
	  	motor(left) = 70;
	  	motor(right) = 50;
	  	wait1Msec(100);
	  }
	  while(SensorValue(sonar) < 5){
	  	motor(left) = 50;
	  	motor(right) = 70;
	  	wait1Msec(100);
	  }
	  if(SensorValue(button) == 1){
	  	motor(left) = -50;
	  	motor(right) = -50;
	  	wait1Msec(1200);

	  	motor(left) = 20;
	  	motor(right) = 50;
	  	wait1Msec(2000);
  	}
  }

}
