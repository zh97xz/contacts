#include"contact.h"

void menu()
{
	printf("*******   1.add;    2,del      *************\n");
	printf("*******   3.search; 4.modify   *************\n");
	printf("*******   5.show;   6.sort     *************\n");
	printf("*******   0.exit               ************\n");
}

int main()
{
	int input = 0;
	struct contact con;
	Initcon(&con);
	do
	{
		menu();
           
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			break;
		case 0:
			printf("exit\n");
			break;
		default:
            printf("error\n");
			break;
		}
	}
	while (input);
		
	return 0;
}