
extern int a[];

int *p0 = &a[0];
static int *p1;
int sum=0;

void add() 
{        
    int i;
    for(i=0;i<10;i++,p0++)
		 sum = sum+*p0;
    p1=&sum;
   
}


