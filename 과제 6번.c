#include <stdio.h>
#include <stdlib.h>

/* A(a),S(s),M(m),D(d),Q(q)�� �޴��� �ϳ��� �����Ͽ� ������ �ϴ� ���α׷�(�� ���� ���� ���õǸ� �ٽ� ������ �����ϵ��� �Ѵ�) */

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
		printf("������ �����Ͻÿ� : "); //���� �Է� 
		scanf("%c", &op);  
		
		if (op=='A'||op=='a') //��������
		{
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�  : ");
			scanf("%d %d",&num1,&num2); 
			printf("������ ����� %d�Դϴ�.",num1 + num2);
			break;
		}	
		
		if(op=='S'||op=='s')//�E�� ����
		{
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�  : ");
			scanf("%d %d",&num1,&num2); 
			printf("������ ����� %d�Դϴ�.",num1 - num2);
			break;
		}	
		
		if(op=='M'||op=='m')//���ϱ� ����
		{
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�  : ");
			scanf("%d %d",&num1,&num2); 
			printf("������ ����� %d�Դϴ�.",num1 * num2);
			break;
		}		
		
		if(op=='D'||op=='d') //������ ���� 
		{
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�  : ");
			scanf("%d %d",&num1,&num2); 
			printf("������ ����� %d�Դϴ�.",num1 / num2);
			break;
		}		
		
		if(op=='Q'||op=='q')
		{
			break; //break�� ������ �����. 
    	}		  		
							
	}while(1); //���ѹݺ����� ����ǰ� �϶�. 
	
		return 0;
}
