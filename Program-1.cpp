#include<conio.h>
#include<iostream>
using namespace std;
class matrix 
{
	private:
		int a,b,m=0,n=-1;
		int **A;
	public:
		matrix( int d,int f)
		{
			A=new int *[d];
			{
				for(int i=0;i<d;i++)
				{
					A[i]=new int [f];
					
				}
				a=d-1;
				b=f-1;
				
			}
		}
		void insertvalue(int x)
		{
			if( a==n && b==m)
			return;
			else if (n==a)
			{
				m++;
				n=0;
			}
			else 
			{
				this->n++;
			}
			A[m][n]=x;
			
		}
	void display()
	{
		for(int i=0;i<=a;i++)
		{
			for(int j=0;j<=b;j++)
			{
				printf("%d\t",A[i][j]);
				
			}
			printf("\n");
			
		}
		
	}
	
};
int main()
{
	int d,f,temp;
	printf("enter the size of matrix\n");
	scanf("%d%d",&d,&f);
	matrix g(d,f);
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<f;j++)
		{
			printf("entr next elemnt\n");
			scanf("%d",&temp);
			g.insertvalue(temp);
		}
	}
	g.display();
	return 0;
	
}
