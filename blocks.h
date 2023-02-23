//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" 🔊 ", "/home/lori/.dwm/bar_volume_level.py",                            1,         0},
	{" 📶 ", "/home/lori/.dwm/wifi_name.sh",                                  10,         0},
	{" 🌡 ", "sensors | grep \"Tccd1\" | awk -F \"+\" '{print $2}'",         5*60,         0},
	{"💻 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",       30,         0},
	{" 📅 ", "date '+%b %d (%a)  🕐 %H:%M '",						          10,         0},
};
							   

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
