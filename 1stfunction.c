#include <stdio.h>
#include <math.h>
#include <time.h>
int RectangleArea(int a,int b);
int RectangleCircumference(int, int);
int RandLength(int,int);
void AboutRectangle();
void PrintFilledRec(int a, int b, char c);
void PrintEmptyRec(int a, int b, char c);


main()
{
	int a, b,c;
	printf("Enter a:");
	scanf("%d", &a);
	
	b=RandLength(1,9);
	printf("b=%d\n",b);
	
	int area;
	area=RectangleArea(a,b);
	printf("%d",area);
	
	int circ;
	circ=RectangleCircumference(a,b);
	printf("\n%d",circ);
	AboutRectangle();
	printf("\n");
	printf("Enter a custom character:");
	scanf("%c",&c);
	if(c=='\n'){
			scanf("%c",&c);
	}
	PrintFilledRec(a, b, c);
	printf("\n");
	PrintEmptyRec(a, b, c);
}

int RectangleCircumference(int a, int b)
{
	return 2*a+2*b;
}

int RectangleArea(int a,int b)
{
	return a*b;	
}

void AboutRectangle(){
	printf("\nRectangle is a quadrilateral, which's angles all have 90degrees.'");
}

void PrintFilledRec(int a, int b, char c)
{
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%c",c);
		}
		printf("\n");
	}
	
}

void PrintEmptyRec(int a, int b, char c)
{
	int i,j,k,l;
	for(i=1; i<=b;i++){
		printf("%c",c);
		}
		for(j=1 ;j<=a-2;j++){
			printf("\n%c",c);
			for(k=1;k<=b-2;k++){
				printf(" ");
			}
			printf("%c",c);
		}
			
			printf("\n%c",a);
			for(l=1;l<b;l++){
				printf("%c",c);
			}
}

int RandLength(int a,int b){
	int r;
	srand(time(NULL));
	r=rand()%(b-a+1)+a;
	return r;
}


