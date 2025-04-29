/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[BG] =     "black",     /* background */
	[INIT] = "black",       /* after initialization */
	[INPUT] = "#005577",    /* during input */
  [FAILED] = "#CC3333",   /* wrong password */
};

/*
* Xresources preferences to load at startup
*/
ResourcePref resources[] = {
	{ "color0",       STRING,  &colorname[BG] },
	{ "color0",       STRING,  &colorname[INIT] },
	{ "color3",       STRING,  &colorname[INPUT] },
	{ "color8",       STRING,  &colorname[FAILED] },
};


/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*
* Shapes:
* 0: square
* 1: circle
*/
static const int shape = 0;
/* size of square in px */
static const int shapesize = 50;
static const int shapegap = 35;
