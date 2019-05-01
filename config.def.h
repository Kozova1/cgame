/* Version of the game */
static char version[] = "";

/* Name of the game */
static char name[] = "";

/* rows and columns of the map.
 * to create an empty space make the square have no entrances.
 * */
#define columns 1
#define rows 1

/* room at which to spawn
 * on a grid of 3x3:
 * room 0 is upper left, room 1 is upper middle, etc...
 * */
static int spawnroom = 0;

/* defines the map grid */
struct map_type {
	int grid[columns][rows];
	int directions[columns][rows];
};

static struct map_type map;
