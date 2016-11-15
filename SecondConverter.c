int secToHours (long time, int* hours, int* minutes, int* seconds)
{
// Local Declarations 
	long localTime;

// Statements 
	localTime = time;
	*seconds = localTime % 60;
	localTime = localTime / 60;

	*minutes = localTime % 60;

	*hours = localTime / 60;

	if (*hours > 24)
		return 0;
	else 
		return 1;
} // secToHours