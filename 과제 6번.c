#include <stdio.h>
#include <stdlib.h>

/* A(a),S(s),M(m),D(d),Q(q)의 메뉴중 하나를 선택하여 연산을 하는 프로그램(그 외의 것이 선택되면 다시 연산을 선택하도록 한다) */

int main(int argc, char *argv[]) {
	
	char  op;
	int num1;
	int num2;
	
	printf("*****************\n");
	printf("A----Add\n");
	printf("S----Subtract\n");
	printf("M----Multiply\n");
	printf("D----Divide\n");
	printf("Q----Quit\n");
	printf("*****************\n");


	do
	{
		printf("연산을 선택하시오 : "); //연산 입력 
		scanf("%c", &op);  
		
		if (op=='A'||op=='a') //덧셈연산
		{
			printf("두수를 공백으로 분리하여 입력하시오  : ");
			scanf("%d %d",&num1,&num2); 
			printf("연산의 결과는 %d입니다.",num1 + num2);
			break;
		}	
		
		if(op=='S'||op=='s')//뺼셈 연산
		{
			printf("두수를 공백으로 분리하여 입력하시오  : ");
			scanf("%d %d",&num1,&num2); 
			printf("연산의 결과는 %d입니다.",num1 - num2);
			break;
		}	
		
		if(op=='M'||op=='m')//곱하기 연산
		{
			printf("두수를 공백으로 분리하여 입력하시오  : ");
			scanf("%d %d",&num1,&num2); 
			printf("연산의 결과는 %d입니다.",num1 * num2);
			break;
		}		
		
		if(op=='D'||op=='d') //나누기 연산 
		{
			printf("두수를 공백으로 분리하여 입력하시오  : ");
			scanf("%d %d",&num1,&num2); 
			printf("연산의 결과는 %d입니다.",num1 / num2);
			break;
		}		
		
		if(op=='Q'||op=='q')
		{
			break; //break로 실행을 멈춘다. 
    	}		  		
							
	}while(1); //무한반복으로 실행되게 하라. 
	
		return 0;
}
