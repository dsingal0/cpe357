#ifndef PART5_H
#define PART5_H

struct point
{
   double x;
   double y;
};

struct rectangle{
	struct point topLeft;
	struct point bottomRight;
};
typedef struct rectangle rect;
struct point create_point(double x, double y);
int is_a_square(rect h);
#endif
