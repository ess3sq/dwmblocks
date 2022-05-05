//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	// mpstat | awk '/all/ {print $3"%"}'

	{" 🗂️ ", "mpstat | awk '/all/ {print$3\"%\"}'" ,                       30,  0},							  
	{" 💻 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,	  0},
	{" ", "python3 /home/lorenzo/bin/battery_status.py",	             5,	  0},
	{" 📅 ", "date '+%b %d (%a)  🕐 %H:%M '",						     5,	  0},
};

// upower -i /org/freedesktop/UPower/devices/battery_BAT0 | awk 'FNR==11 || FNR==20' | cut -d" " -f15,20 | xargs -n2 -d'\n'
							   

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
