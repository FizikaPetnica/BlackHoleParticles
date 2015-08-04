
#include "c4x4Matrix.h"
#include "c4Vector.h"
class c2Tensor :
	public c4x4Matrix, public c4Vector
{
public:
	c2Tensor(int t00 = 0, int t01 = 0, int t02 = 0, int t03 = 0, int t10 = 0, int t11 = 0, int t12 = 0, int t13 = 0, int t20 = 0, int t21 = 0, int t22 = 0, int t23 = 0, int t30 = 0, int t31 = 0, int t32 = 0, int t33 = 0);
	~c2Tensor();
};
