#include "stack.h"
#include "stack_ptr.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
	struct Node* top = NULL;
	int opt = 0;
	printf("This is stack.\n");
	printf("/****************/\n");
	printf("1.Push into Stack\n");
	printf("2.Pop from Stack\n");
	printf("3.Print Stack\n");
	printf("4.Exit\n");
	printf("/****************/\n");
	while(opt != 4){
		printf("Option:");
		scanf("%d", &opt);
		if(opt == 1){
			int input;
			printf("0: char 1: short 2: int 3: long 4:float 5:double\n");
			printf("6: char_ptr 7: short_ptr 8: int_ptr 9: long_ptr 10:float_ptr 11:double_ptr\n");
			scanf("%d", &input);
			switch (input) {
				case 0:
					printf("Please input a char\n");
					getchar();
					char data_char;
					scanf("%c", &data_char);
					StackPush_char(&top,data_char, 0);
					break;
				case 1:
					printf("Please input a short integer\n");
					short data_short;
					scanf("%hd", &data_short);
					StackPush_short(&top,data_short, 1);
					break;
				case 2:
					printf("Please input a integer\n");
					int data_int;
					scanf("%d", &data_int);
					StackPush_int(&top,data_int, 2);
					break;
				case 3:
					printf("Please input a long integer\n");
					long data_long;
					scanf("%ld", &data_long);
					StackPush_long(&top,data_long, 3);
					break;
				case 4:
					printf("Please input a float\n");
					float data_float;
					scanf("%f", &data_float);
					StackPush_float(&top,data_float, 4);
					break;
				case 5:
					printf("Please input a double\n");
					double data_double;
					scanf("%lf", &data_double);
					StackPush_double(&top,data_double, 5);
					break;
				case 6:
					printf("Please input a char, store in pointer to char\n");
					getchar();
					BUG_FACILITY_MYMALLOC();
					char *data_ptr_char = (char *)Mymalloc(sizeof(short));
					scanf("%c", data_ptr_char);
					StackPush_ptr_char(&top,data_ptr_char, 6);
					break;
				case 7:
					printf("Please input a short integer, store in pointer to short\n");
					BUG_FACILITY_MYMALLOC();
					short *data_ptr_short = (short*)Mymalloc(sizeof(short));
					scanf("%hd", data_ptr_short);
					StackPush_ptr_short(&top,data_ptr_short, 7);
					break;
				case 8:
					printf("Please input a integer, store in pointer to int\n");
					BUG_FACILITY_MYMALLOC();
					int *data_ptr_int = (int*)Mymalloc(sizeof(int));
					scanf("%d", data_ptr_int);
					StackPush_ptr_int(&top,data_ptr_int, 8);
					break;
				case 9:
					printf("Please input a long integer, store in pointer to long\n");
					BUG_FACILITY_MYMALLOC();
					long *data_ptr_long = (long *)Mymalloc(sizeof(long));
					scanf("%ld", data_ptr_long);
					StackPush_ptr_long(&top,data_ptr_long, 9);
					break;
				case 10:
					printf("Please input a float, store in pointer to float\n");
					BUG_FACILITY_MYMALLOC();
					float *data_ptr_float = (float *)Mymalloc(sizeof(float));
					scanf("%f", data_ptr_float);
					StackPush_ptr_float(&top,data_ptr_float, 10);
					break;
				case 11:
					printf("Please input a double, store in pointer to double\n");
					BUG_FACILITY_MYMALLOC();
					double *data_ptr_double = (double *)Mymalloc(sizeof(double));
					scanf("%lf", data_ptr_double);
					StackPush_ptr_double(&top,data_ptr_double, 11);
					break;
			}
		}else if(opt == 2)
			if(top == NULL)
				printf("Stack is empty. Could't pop anything more.\n");
			else{
				char *temp1;
				short *temp2;
				int *temp3;
				long *temp4;
				float *temp5;
				double *temp6;
				switch (top->type) {
					case 0:
						printf("Pop data %c from Stack\n", StackPop_char(&top));	break;
					case 1:
						printf("Pop data %hd from Stack\n", StackPop_short(&top));	break;
					case 2:
						printf("Pop data %d from Stack\n", StackPop_int(&top));	break;
					case 3:
						printf("Pop data %ld from Stack\n", StackPop_long(&top));	break;
					case 4:
						printf("Pop data %f from Stack\n", StackPop_float(&top));	break;
					case 5:
						printf("Pop data %lf from Stack\n", StackPop_double(&top));	break;
					case 6:
						temp1 = StackPop_ptr_char(&top);
						BUG_FACILITY_MYFREE();
						Myfree(temp1);
						printf("Dequeue pointer %p from queue, value is %c\n",temp1,*temp1);
						break;
					case 7:
						temp2 = StackPop_ptr_short(&top);
						BUG_FACILITY_MYFREE();
						Myfree(temp2);
						printf("Dequeue pointer %p from queue, value is %hd\n",temp2,*temp2);
						break;
					case 8:
						temp3 = StackPop_ptr_int(&top);
						BUG_FACILITY_MYFREE();
						Myfree(temp3);
						printf("Dequeue pointer %p from queue, value is %d\n",temp3,*temp3);
						break;
					case 9:
						temp4 = StackPop_ptr_long(&top);
						BUG_FACILITY_MYFREE();
						Myfree(temp4);
						printf("Dequeue pointer %p from queue, value is %ld\n",temp4,*temp4);
						break;
					case 10:
						temp5 = StackPop_ptr_float(&top);
						BUG_FACILITY_MYFREE();
						Myfree(temp5);
						printf("Dequeue pointer %p from queue, value is %f\n",temp5,*temp5);
						break;
					case 11:
						temp6 = StackPop_ptr_double(&top);
						BUG_FACILITY_MYFREE();
						Myfree(temp6);
						printf("Dequeue pointer %p from queue, value is %lf\n",temp6,*temp6);
						break;
				}
			}
		else if(opt == 3)
			printStack(&top);
		else if(opt != 4)
			printf("Invaild input, please try again.\n");
	}
	//deleteAllStack(&top);
	return 0;
}
