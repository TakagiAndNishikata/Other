#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14159265

int main(){
	float a,b,c,d,e;	//�����ܼ� 
	int x_Down,x_Up;	//X�b�d�� 
	float x_P;			//P�I�y�� 
	float x_slope;		//���u�ײv 
	float value=1;
	int i,j;			//�j���ܼ� 
	
	printf("�п�J���ӼƦr�G");		//��J�� 
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	printf("�п�JX�b���d��G");
	scanf("%d %d",&x_Down,&x_Up);
	printf("�п�J�ҨD���u��x�ȡG");
	scanf("%f",&x_P);
	
	x_slope=cos(d*PI/30*x_P)*c*d*PI/30-a*sin(b*PI/30*x_P)*b*PI/30;	//�p��ײv(�����g�X�L�������G) 
	printf("��ڤ��u�ײv�G%f\n ",x_slope);
	
	if(abs(x_Up-x_Down)<=10){	//�Y�W�U���d��p��Q,��X���~ abs()������Ȩ�� 
		printf("\"ERROR!!\"");
		return 0;
	}
	
	x_slope=(int)(x_slope*100)/100.0;	//�N�ײv���ܤp���I���� 
		
	for(int i=-7;i<=7;i++)	//Y�b�Ʀr 
		if( i==0 || i==1 )
			printf("%4d ",5*i);
		else
			printf("%5d",5*i);
	printf("\n");
	
	for(int i=-39;i<=39;i++){	//Y�b 
		if( i== (int)(a*cos(b*PI/30*x_Down)+c*sin(d*PI/30*x_Down)+e) )
			printf("*");
		else if(i==-1){		//�����L�XX�b�W�����Ʀr 
			printf("%3d",x_Down);
			i+=2;			//�]�榡�T�w���T,�j���ܼƸ��L��� 
		}
		else if(i%5==0)
			printf("+");
		else
			printf("-");
	} 
	printf("Y\n");	//�L�XY�b�r�� 
	
	for(int i=x_Down+1;i<=x_Up;i++){	//�L�XY�b�H�U:���V 
		for(int j=-39;j<=39;j++){		//�L�XY�b:��V 
			if(j==0){					//�P�_X�b 
				if(i%5==0){ 			//�C�������ƪ��y�ЭȦL�X�ƭ� 
					printf("%2d",i);
					j++;				//�T�w�L�X�榡,�ҥH�h���@�� 
				}
				else
					printf("|");		//�L�XX�b 
			}
			else if(j== (int)(a*cos(b*PI/30*i)+c*sin(d*PI/30*i)+e) ){		//�P�_�O�_�����(�|�ˤ��J 
				if(i==x_P){	
					printf("\b\b\b\b\b\b\b\b\b\b\b( %2d, %2d ) P",i,j);		//�Y��P,�˰h10��,�L�X�y�ЭȩMP 
				}
				else
					printf("*");		//�L�X�P�P 
			}
			else if(abs(i-x_P)<6 && j==(int)(x_slope*(i-x_P)+(int)(a*cos(b*PI/30*x_P)+c*sin(d*PI/30*x_P)+e)) ){		//�Y�bP�I���椺�B�b���u��{���W,�L�X���u�Ÿ� 
				if( (int)(x_slope)==0 )
					printf("|");
				else if( abs((int)(x_slope+0.5))<=10 ){
					if((int)(x_slope)<0)
						printf("/");
					else
						printf("\\");
				}
				else
					printf("-");
			}
			else
				printf(" ");			//��L�h�L�X�ť�
		}
		printf("\n");
	}
	return 0;
} 
