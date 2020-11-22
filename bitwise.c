#include <stdio.h>
#include <math.h>
    
  int bitwise_multiply(int x, int y) 
    { 
	    if (x<0 && y<0)
		{
		 x=x*(-1);
		 y=y*(-1);
		}
		 if (x>0 && y<0)
		{
		 x=x*(-1);
		 y=y*(-1);
		}
        int result = 0;   
        while (y > 0) 
        { 
             if ((y & 1) != 0) 
                 result = result + x; 
            x = x << 1; 
            y = y >> 1; 
        } 
        return result; 
    } 
 int main(void)
    {   
     int x,y;
     printf("Enter 2 numbers \n");
     scanf("%d%d",&x,&y);
     printf("Product of %d and %d using bitwise operators is: %d\n",x,y,bitwise_multiply(x, y)); 	
	 return 0;        
   }