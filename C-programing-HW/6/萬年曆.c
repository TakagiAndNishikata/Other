#include<stdio.h>
#include<stdlib.h>
int main(){
	int year,month,day;				//定義年月日 
	int day_all=1,count=0;			//定義格數變數,day_all為第幾天,count是格數(包括空格) 
	int black=1;					//定義空格萬年曆,元年從星期一開始(不考慮實際曆法變化) 
	int j;							//定義迴圈變數 
	printf("請輸入年月:");
	scanf("%d %d",&year,&month);
	if(year<=0||month>12||month<=0){	//若輸入不合格式,輸入ERROR 
		printf("ERROR!!");
		return 0;
	}
	printf("\n    %d年 %d 月\n",year,month);
	printf("日 一 二 三 四 五 六\n");
	
	for(j=1;j<month;j++){			//計算空格數:月 
		if( j==1 || j==3 || j==5 || j==7 || j==8 || j==10 || j==12 )
			black+=3;				//大月,往後空三格(31%7=3) 
		else if( j==4 || j==6 || j==9 || j==11 )
			black+=2;				//小月,往後空兩格(30%7=2) 
		else if((year%4==0&&year%100!=0)||(year%400==0&&year%3200!=0))
			black+=1;				//閏年二月,往後空一格(29%7=1) 
		else
			black+=0;				//平年二月,不用動他 
	}
	for(j=1;j<year;j++){			//計算空格數:年 
		if((j%4==0&&j%100!=0)||(j%400==0&&j%3200!=0))
			black+=2;				//若為閏年,往後退兩格(366%7=2) 
		else
			black+=1;				//若為平年,往後退一格(365%7=1) 
	}
	
	if(black>=7)					//空格數為零到六格 
		black%=7;
		
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)		//判斷輸入月份的天數 
		day=31;
	else if(month==4||month==6||month==9||month==11)
		day=30;
	else if((year%4==0&&year%100!=0)||(year%400==0&&year%3200!=0))
		day=29;
	else
		day=28;
	
	while(day_all<=day){					//重複執行直到把該月份所有天數印完 
		if(count==0){						//當(月曆上)第零格 
			for(j=1;j<=black;j++){			//印出前面計算的空格 
				printf("   ");
				count++;					//每印一格,計算格數的變數+1 
			}
		}
		if(year==1941&&month==9&&day_all==9)
			printf("\b(%02d)",day_all);		//C語言之父的生日 
		else
			printf("%02d ",day_all);		//印出日期 
		count++;							//計算格數的變數+1 
		day_all++;							//日期+1 
		if(count%7==0) 
			printf("\n");					//根據格子數的變數,每七個換一行 
	}
	return 0;
} 
