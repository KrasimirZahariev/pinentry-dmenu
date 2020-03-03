/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int bottom = 0;
static int embedded = 0;
static int minpwlen = 32;
static int mon = -1;

static const char *asterisk = "*";
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt = NULL;
static const char *colors[SchemeLast][4] = {
	[SchemePrompt] = { "#afaf00", "#262626" },
	[SchemeNormal] = { "#afaf00", "#262626" },
	[SchemeSelect] = { "#eeeeee", "#005577" },
	[SchemeDesc]   = { "#afaf00", "#262626" }
};
