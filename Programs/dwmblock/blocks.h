//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/						/*Update Interval*/   /*Update Signal*/
	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",		1,		0},

	{"", "/home/high/Scripts/time.sh",						5,		0},

	{"","/home/high/Scripts/battery.sh",						30,		0},
	{"","/home/high/Scripts/disk_usage.sh", 20, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
