#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14159265

int main(){
	float a,b,c,d,e;	//五個變數 
	int x_Down,x_Up;	//X軸範圍 
	float x_P;			//P點座標 
	float x_slope;		//切線斜率 
	float value=1;
	int i,j;			//迴圈變數 
	
	printf("請輸入五個數字：");		//輸入區 
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	printf("請輸入X軸的範圍：");
	scanf("%d %d",&x_Down,&x_Up);
	printf("請輸入所求切線的x值：");
	scanf("%f",&x_P);
	
	x_slope=cos(d*PI/30*x_P)*c*d*PI/30-a*sin(b*PI/30*x_P)*b*PI/30;	//計算斜率(直接寫出微分的結果) 
	printf("實際切線斜率：%f\n ",x_slope);
	
	if(abs(x_Up-x_Down)<=10){	//若上下限範圍小於十,輸出錯誤 abs()為絕對值函數 
		printf("\"ERROR!!\"");
		return 0;
	}
	
	x_slope=(int)(x_slope*100)/100.0;	//將斜率取至小數點後兩位 
		
	for(int i=-7;i<=7;i++)	//Y軸數字 
		if( i==0 || i==1 )
			printf("%4d ",5*i);
		else
			printf("%5d",5*i);
	printf("\n");
	
	for(int i=-39;i<=39;i++){	//Y軸 
		if( i== (int)(a*cos(b*PI/30*x_Down)+c*sin(d*PI/30*x_Down)+e) )
			printf("*");
		else if(i==-1){		//中間印出X軸上限的數字 
			printf("%3d",x_Down);
			i+=2;			//因格式固定為三,迴圈變數跳過兩個 
		}
		else if(i%5==0)
			printf("+");
		else
			printf("-");
	} 
	printf("Y\n");	//印出Y軸字樣 
	
	for(int i=x_Down+1;i<=x_Up;i++){	//印出Y軸以下:直向 
		for(int j=-39;j<=39;j++){		//印出Y軸:橫向 
			if(j==0){					//判斷X軸 
				if(i%5==0){ 			//每五的倍數的座標值印出數值 
					printf("%2d",i);
					j++;				//固定印出格式,所以多跳一格 
				}
				else
					printf("|");		//印出X軸 
			}
			else if(j== (int)(a*cos(b*PI/30*i)+c*sin(d*PI/30*i)+e) ){		//判斷是否為其值(四捨五入 
				if(i==x_P){	
					printf("\b\b\b\b\b\b\b\b\b\b\b( %2d, %2d ) P",i,j);		//若為P,倒退10格,印出座標值和P 
				}
				else
					printf("*");		//印出星星 
			}
			else if(abs(i-x_P)<6 && j==(int)(x_slope*(i-x_P)+(int)(a*cos(b*PI/30*x_P)+c*sin(d*PI/30*x_P)+e)) ){		//若在P點六格內且在切線方程式上,印出切線符號 
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
				printf(" ");			//其他則印出空白
		}
		printf("\n");
	}
	return 0;
} 
