
#include "includes\Main.h"


struct _point {
	double 	x,
			y,
			z;
};


struct _point* createPoint(double a, double b, double c);
double calcDistance(struct _point *a, struct _point *b);
void distance(double x1, double y1, double z1, double x2, double y2, double z2);
void freePoint(struct _point *p);


int main(int argc, char **argv)
{
	system("cls");
	
	if (argc == 7) {
		double 	d1 = atoi(argv[1]),
				d2 = atoi(argv[2]),
				d3 = atoi(argv[3]),
				d4 = atoi(argv[4]),
				d5 = atoi(argv[5]),
				d6 = atoi(argv[6]);
				
				distance(d1,d2,d3,d4,d5,d6);
	} else {
		distance(0,0,0,3,4,0);
	
	}
	
	
	return EXIT_SUCCESS;
}


struct _point* createPoint(double a, double b, double c) {
	struct _point *newPoint = malloc(sizeof(struct _point));
	
	newPoint->x = a;
	newPoint->y = b;
	newPoint->z = c;
	
	return newPoint;
}


double calcDistance(struct _point *a, struct _point *b) {
	double x_sq = pow(b->x - a->x, 2);
	double y_sq = pow(b->y - a->y, 2);
	double z_sq = pow(b->z - a->z, 2);
	
	return (sqrt(x_sq + y_sq + z_sq));
}


void distance(double x1, double y1, double z1, double x2, double y2, double z2) {
	struct _point *point1 = createPoint(x1,y1,z1);
	struct _point *point2 = createPoint(x2,y2,z2);
	
	double d = calcDistance(point1,point2);
	printf("Distance: %.2f\n", d);
	
	freePoint(point1);
	freePoint(point2);
}


void freePoint(struct _point *p) {
	free(p);
}