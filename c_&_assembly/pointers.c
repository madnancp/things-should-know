#include <stdio.h>

struct Coordinate {
	int x;
	int y;
};

typedef struct Coordinate coordinate_t;

coordinate_t get_current_cords(coordinate_t *cords, int lat);

int main() {

	coordinate_t usa = {
		.x=50,
		.y=20
	};

	get_current_cords(&usa, 4);

	printf("x of usa %d, y of usa %d", usa.x, usa.y);

	return 0;
}


coordinate_t get_current_cords(coordinate_t *cords, int lat) {
	cords->x *= lat;
	cords->y *= 2*lat;
	return *cords;
}
