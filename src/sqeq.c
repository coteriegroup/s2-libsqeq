#include "sqeq.h"
#include <math.h>

roots solve(float a, float b, float c)
{
	roots pair;
	float D = b * b - 4 * a * c;
	if (D < 0)
	{
		pair.x1 = NAN;
		pair.x2 = NAN;
	}
	if (D == 0)
	{
		pair.x1 = -b / (2 *a);
		pair.x2 = pair.x1;
	}
	if (D > 0)
	{
		pair.x1 = (-b + sqrt(D)) / (2 * a);
		pair.x2 = (-b - sqrt(D)) / (2 * a);
	}
	return pair;
}
