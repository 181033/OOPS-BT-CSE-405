#include <iostream>
/*
	Use of inline function to find Square of a number.
*/
class square
{
	public:
		int x;
		square(int y)
		{
			this->x=y;
		}
	public:
		inline int getSquare()
		{
			return x*x;	
		}	
	
};
int main()
{
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	square s(x);
	printf("square of %d is %d",x,s.getSquare());
	return 0;	
}
