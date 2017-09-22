#pragma config(Sensor, S3,     topButton,      sensorNone)
#pragma config(Sensor, S4,     button,         sensorEV3_Touch)
#pragma config(Motor,  motorB,          left,          tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          right,         tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while (SensorValue(button) == 0)
		{
			motor(left) = 100;
			motor(right) = 100;
			wait1Msec(50);

			if (SensorValue(button) == 1)
			{
				motor(left)= -100;
				motor(right) = -100;
				wait1Msec(1500);

				motor(left) = 50;
				motor(right) = -50;
				wait1Msec(960);
			}
		}


}
