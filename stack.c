#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX_SIZE 10

void main()
{
	int stack[MAX_SIZE], i, ele, TOP=-1, och;
	clrscr();
	while(1)
	{
	   getch(); clrscr();
	   printf("\nSelect Operation\n");
	   printf("1 - PUSH op\n");
	   printf("2 - POP op\n");
	   printf("3 - DISPLAY op\n");
	   printf("4 - check is_full\n");
	   printf("5 - check is_empty\n");
	   printf("6 - print TOP\n");
	   printf("7 - EXIT\n");
	   printf("Provide your choice : ");
	   scanf("%d", &och);
	   switch(och)
	   {
		case 1: // performing PUSH operation
			if(TOP==MAX_SIZE - 1)
			{
				printf("Stack Overflow\n");
			}
			else
			{
				printf("Enter element to PUSH : ");
				scanf("%d", &ele);
				stack[TOP + 1] = ele;
				TOP++;
				printf("Element PUSHed into stack\n");
			}
			break;
		case 2: //performing POP operation
			if(TOP == -1)
			{
				printf("Stack Underflow\n");
			}
			else
			{
				printf("TOP element %d is POPped out\n", stack[TOP] );
				TOP--;
			}
			break;
		case 3: // performing DISPLAY operation
			if(TOP == -1)
			{
				printf("Stack is Empty. Nothing to Display.\n");
			}
			else
			{
				printf("Stack Contains\n");
				for(i=TOP; i>=0; i--)
				{
					printf("%d\n", stack[i] );
				}
			}
			break;
		case 4: // check is_full
			TOP==MAX_SIZE-1? printf("YES\n") : printf("NO\n");
			break;
		case 5: // check is_empty
			TOP==-1? printf("YES\n") : printf("NO\n");
			break;
		case 6: //print TOP
			if(TOP==-1)
			{
				printf("Stack is Empty. No TOP element.\n");
			}
			else
			{
				printf("TOP is %d @ index %d\n", stack[TOP], TOP );
			}
			break;
		case 7: exit(0);
	   } //end of switch-case
	} //end of while

	getch();

}
