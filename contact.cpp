#include"contact.h"

void Initcon(struct contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}

int Findbyname(struct contact* ps, char name[max])
{
	int pos = 0;
	for (pos = 0; pos < ps->size; pos++)
	{
		if (0==strcmp(name,ps->data[pos].name))
			return pos;
		}
	return -1;
}



void AddContact(struct contact* ps)
{
	if ((ps->size)== max)
	{
		printf("contacts are full");
	}
	else
	{
		printf("请输入姓名：\n");
		scanf_s("%s", ps->data[ps->size].name,20);
		printf("请输入年龄：\n");
		scanf_s("%d", &(ps->data[ps->size].age));
		printf("请输入性别：\n");
		scanf_s("%s", ps->data[ps->size].sex,8);
		printf("请输入电话：\n");
		scanf_s("%s", ps->data[ps->size].tel,12);
		printf("请输入地址：\n");
		scanf_s("%s", ps->data[ps->size].address,40);
		ps->size++;
	}
}

void ShowContact(struct contact* ps)
{
	if ((ps->size) == 0)
	{
		printf("通讯录为空");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-5s\t%-6s\t%-12s\t%-30s\n","name","age","sex","tele","address");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-5d\t % -6s\t % -12s\t % -30s\n",
				ps->data[i].name, 
				ps->data[i].age, 
				ps->data[i].sex, 
				ps->data[i].tel, 
				ps->data[i].address);
		}

	}
	
}

void DelContact(struct contact* ps)
{
	char name[max];
	printf("please input the name:");
	scanf_s("%s", name,20);
	
	int ret = Findbyname(ps, name);

		int j = 0;
		for (j = ret; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("delete is successful\n");
	
}

void SearchContact(struct contact* ps)
{
	char name[max];
	printf("please input the name");
	scanf_s("%s", name,20);
	int i = Findbyname(ps, name);
	if(i==-1)
	{
		printf("not found\n");
	}
	else
	{
		printf("%-20s\t%-5d\t % -6s\t % -12s\t % -30s\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tel,
			ps->data[i].address);
	}
}

void ModifyContact(struct contact* ps)
{
	char name[max];
	printf("please input the name");
	scanf_s("%s", name, 20);
	int i = Findbyname(ps, name);
	if(i==-1)
	{
		printf("not exist");
	}
	else
	{
		printf("请输入姓名：\n");
		scanf_s("%s", ps->data[ps->size].name, 20);
		printf("请输入年龄：\n");
		scanf_s("%d", &(ps->data[ps->size].age));
		printf("请输入性别：\n");
		scanf_s("%s", ps->data[ps->size].sex, 8);
		printf("请输入电话：\n");
		scanf_s("%s", ps->data[ps->size].tel, 12);
		printf("请输入地址：\n");
		scanf_s("%s", ps->data[ps->size].address, 40);
	}


}