#pragma config(Sensor, S1,     gyro,           sensorEV3_Gyro)
#pragma config(Sensor, S2,     buttonTwo,      sensorEV3_Touch)
#pragma config(Sensor, S4,     button,         sensorEV3_Touch)
#pragma config(Motor,  motorB,          left,          tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          right,         tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	 int defSpeed = 50;
	 int counter = 0;
	 int mode = 0;


	 while (true)
 {
   if (mode == 0) // mode 0 is wall follow
   {
		 motor(left) = defSpeed + 10;
		 motor(right) = defSpeed;

		 wait1Msec(250);

		 if(SensorValue(buttonTwo) == 1)
		 {
		   motor(left) = -defSpeed;
		   motor(right) = -defSpeed;
		   wait1Msec(500);

		   motor(left) = -defSpeed;
		   motor(right) = defSpeed;
		   wait1Msec(960 / 2);
		   counter ++;
		 }
		 if (SensorValue(button) == 1)
		 {
		   for( int i = 0; i < 10; i++)
		   {
			   motor(left) = -defSpeed + 2;
			   motor(right) = -defSpeed;
			   wait1Msec(50);

			 }
			  motor(left) = -defSpeed;
		   	motor(right) = defSpeed;
		    wait1Msec(960 / 2);
		 }

	 }
	 if ( mode == 1)
	 {

	 }

 } // end of while

}