#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void Differential_1(double,double,double,double,double,double);		//�|�Ө�� 
void Differential_2(double,double,double,double,double,double);
void Integral_1(double,double,double,double,double,double,double,double);
void Integral_2(double,double,double,double,double,double,double,double);
int main(){
	double a,b,c,d,e,f;												//�w�q�� 
	double x_Down,x_Up;
	double x_P;
	int i,j;
	
	printf("�п�J���ӫY�ơG");										//��J�� 
	scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
	printf("�п�JX�b���d��G");
	scanf("%lf %lf",&x_Down,&x_Up);
	printf("�п�J�ҨD���u��x�ȡG");
	scanf("%lf",&x_P);
	
	printf(" ");
	
	for(i=-7;i<=7;i++)												//y�b�Ʀr 
		if( i==0 || i==1 )
			printf("%4d ",5*i);
		else
			printf("%5d",5*i);
	printf("\n");
	
	for(i=-39;i<=39;i++){
		if( i== (int)(a*pow(x_Down,5)+b*pow(x_Down,4)+c*pow(x_Down,3)+d*pow(x_Down,2)+e*pow(x_Down,1)+f) )
			printf("*");
		else if(i==-1){
			printf("%2.lf ",x_Down);
			i+=2;
		}
		else if(i%5==0)												//y�b 
			printf("+");
		else
			printf("-");
	} 
	printf("Y\n");
	
	for(i=x_Down+1;i<=x_Up;i++){									//�ϧ� 
		for(j=-39;j<=39;j++){
			if(j==0){
				if(i%5==0){
					printf("%-2d",i);
					j++;
				}
				else
					printf("|");
			}
			else if(j== (int)(a*pow(i,5)+b*pow(i,4)+c*pow(i,3)+d*pow(i,2)+e*pow(i,1)+f) ){
				printf("*");
			}
			
			else
				printf(" ");
		}
		printf("\n");
	}
	
	Differential_1(x_P,a,b,c,d,e);									//��� 
	Differential_2(x_P,a,b,c,d,e);
	Integral_1(x_Down,x_Up,a,b,c,d,e,f);
	Integral_2(x_Down,x_Up,a,b,c,d,e,f);
	
	return 0;
}
 
void Differential_1(double x_P,double a,double b,double c,double d,double e){		//�L���G�� 
	double i;
	printf("�ϥξɼƷL���p�⪺���G�G\n");
	for(i=0.1;i>=0.01;i-=0.01){
		double defferential=(a*pow(x_P+i,5)+b*pow(x_P+i,4)+c*pow(x_P+i,3)+d*pow(x_P+i,2)+e*pow(x_P,1)-a*pow(x_P,5)-b*pow(x_P,4)-c*pow(x_P,3)-d*pow(x_P,2)-e*pow(x_P,1))/i;
		printf("x�ܤƶq%lf , ���G���G%lf\n",i,defferential);
	}
}

void Differential_2(double p,double a,double b,double c,double d,double e){			//�L�� 
	double defferential=5*a*pow(p,4)+4*b*pow(p,3)+3*c*pow(p,2)+2*d*pow(p,1)+e;
	printf("�ϥηL���p�⪺���G��%lf\n",defferential);
}

void Integral_1(double down ,double up,double a,double b,double c,double d,double e,double f){		//���ҩM 
	double i,j;
	double key;
	printf("�ϥξ��ҩM�p�⪺���G�G\n");
	for(i=0.1;i>=0.01;i-=0.01){
		double sum=0.0;
		for(j=down;j<up;j+=i){
			if(j+i>up)
				break;
			key=i*(a*pow(j,5)+b*pow(j,4)+c*pow(j,3)+d*pow(j,2)+e*pow(j,1)+f);
			sum+=key;
		}
		printf("x�ܤƶq%f , ���G���G%f\n",i,sum);
	}
}

void Integral_2(double x_down ,double x_up,double a,double b,double c,double d,double e,double f){		//�n�� 
	double integral=a/6*pow(x_up,6)+b/5*pow(x_up,5)+c/4*pow(x_up,4)+d/3*pow(x_up,3)+e/2*pow(x_up,2)+f*x_up-(a/6*pow(x_down,6)+b/5*pow(x_down,5)+c/4*pow(x_down,4)+d/3*pow(x_down,3)+e/2*pow(x_down,2)+f*x_down);
	printf("�ϥοn���p�⪺���G��%lf",integral);
}
