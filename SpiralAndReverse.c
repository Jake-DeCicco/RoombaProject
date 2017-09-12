task main()
{
	int counter = 0;


	while(counter < 100){
	  motor(motorB) = 100;
		motor(motorC) = 0;
		wait1Msec(200);
		counter++;

	}


}
