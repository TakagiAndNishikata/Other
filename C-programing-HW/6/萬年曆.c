#include<stdio.h>
#include<stdlib.h>
int main(){
	int year,month,day;				//�w�q�~��� 
	int day_all=1,count=0;			//�w�q����ܼ�,day_all���ĴX��,count�O���(�]�A�Ů�) 
	int black=1;					//�w�q�Ů�U�~��,���~�q�P���@�}�l(���Ҽ{��ھ�k�ܤ�) 
	int j;							//�w�q�j���ܼ� 
	printf("�п�J�~��:");
	scanf("%d %d",&year,&month);
	if(year<=0||month>12||month<=0){	//�Y��J���X�榡,��JERROR 
		printf("ERROR!!");
		return 0;
	}
	printf("\n    %d�~ %d ��\n",year,month);
	printf("�� �@ �G �T �| �� ��\n");
	
	for(j=1;j<month;j++){			//�p��Ů��:�� 
		if( j==1 || j==3 || j==5 || j==7 || j==8 || j==10 || j==12 )
			black+=3;				//�j��,����ŤT��(31%7=3) 
		else if( j==4 || j==6 || j==9 || j==11 )
			black+=2;				//�p��,����Ũ��(30%7=2) 
		else if((year%4==0&&year%100!=0)||(year%400==0&&year%3200!=0))
			black+=1;				//�|�~�G��,����Ť@��(29%7=1) 
		else
			black+=0;				//���~�G��,���ΰʥL 
	}
	for(j=1;j<year;j++){			//�p��Ů��:�~ 
		if((j%4==0&&j%100!=0)||(j%400==0&&j%3200!=0))
			black+=2;				//�Y���|�~,����h���(366%7=2) 
		else
			black+=1;				//�Y�����~,����h�@��(365%7=1) 
	}
	
	if(black>=7)					//�Ů�Ƭ��s�줻�� 
		black%=7;
		
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)		//�P�_��J������Ѽ� 
		day=31;
	else if(month==4||month==6||month==9||month==11)
		day=30;
	else if((year%4==0&&year%100!=0)||(year%400==0&&year%3200!=0))
		day=29;
	else
		day=28;
	
	while(day_all<=day){					//���ư��檽���Ӥ���Ҧ��ѼƦL�� 
		if(count==0){						//��(���W)�Ĺs�� 
			for(j=1;j<=black;j++){			//�L�X�e���p�⪺�Ů� 
				printf("   ");
				count++;					//�C�L�@��,�p���ƪ��ܼ�+1 
			}
		}
		if(year==1941&&month==9&&day_all==9)
			printf("\b(%02d)",day_all);		//C�y���������ͤ� 
		else
			printf("%02d ",day_all);		//�L�X��� 
		count++;							//�p���ƪ��ܼ�+1 
		day_all++;							//���+1 
		if(count%7==0) 
			printf("\n");					//�ھڮ�l�ƪ��ܼ�,�C�C�Ӵ��@�� 
	}
	return 0;
} 
