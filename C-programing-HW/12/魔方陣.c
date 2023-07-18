#include<stdio.h>
#include<stdlib.h>

void binomial(int);
void median(int*);
void magic_square(int);


int main(){
	
	int n;
	printf("請輸入二項式次方係數:");
	scanf("%d",&n);
	binomial(n);
	printf("\n\n");
	
	int a[11],i;
	printf("請輸入11個數字:\n");
	for(i=0;i<11;i++){
		scanf("%d",&a[i]);
	}
	median(a);
	printf("\n");
	
	int num;
	printf("請輸入魔方陣大小:");
	scanf("%d",&num);
	magic_square(num);
	return 0;
	
} 

void binomial(int n){
	int i,j;
	int a[n+1][n+1];
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			if(j==0||j==i){
				a[i][j]=1;
			}else{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

void median(int *arr){
	int i,j;
	int tmp=0;
	for(i=0;i<11;i++){
		for(j=0;j<10-i;j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
	for(i=0;i<11;i++){
		printf("%d ",arr[i]);
	}
	printf("\n中位數為%d\n",arr[5]);
}

void magic_square(int n){
	int a[n][n];
	int i,l,j,large=n*n,d=0;
	int k=0,m=n/2;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=0;
		}
	}
	for(l=1;l<=n*n;l++){
		a[k][m]=l;
		k--;
		m--;
		if(k<0){
			k+=n;
		}
		if(m<0){
			m+=n;
		}
		if(a[k][m]!=0){
			k+=2;
			m+=1;
			if(k>=n){
				k-=n;
			}
			if(m>=n){
				m-=n;
			}
		}
	}
	while(large>0){
		large/=10;
		d++;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%*d ",d,a[i][j]);
		}
		printf("\n");
	}
}
