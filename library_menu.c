#include<stdio.h>
#include<string.h>
int count();

void display(int);
void giv_author(char*);
void adbuk();
void which1(int);

void albuk();

struct library
{
	int an;
	char title[50];
	char author[30];
	int price;
	int flag;
}geclib[50] = {
	1, "Let Us C", "Yashavant Kanethkar", 258, 1,
};

int main()
{
	int ans = 1, an;
	char auth[30];
	while (ans != 7)
	{
		printf("\nYou are in menu section\n");
		printf("\n1. Add Book Information");
		printf("\n2. Display Book Information");
		printf("\n3. List all books of given author");
		printf("\n4. List the title of specified book");
		printf("\n5. List the counts of the books in library");
		printf("\n6. List the books in order of accession number");
		printf("\n7. Exit");
		printf("\n\n\t\tEnter you choice : ");
		scanf("%d", &ans);
		switch (ans)
		{
		case 1:
			adbuk();
			break;
		case 2:
			printf("\nEnter the accession number of the book : ");
			scanf("%d", &an);
			display(an);
			break;
		case 3:
			while (getchar() != '\n');
			printf("Enter the name of the author (case sensitive) : ");
			gets(auth);
			giv_author(auth);
			break;
		case 4:
			printf("\nEnter the accession number of book : ");
			scanf("%d", &an);
			which1(an);
			break;
		case 5:
			printf("\nTotal Number of books : %d", count());
			break;
		case 6:
			albuk();
			break;
		case 7:
			return 0;
		default:
			printf("\nWrong choice, Try Again!!");

		}
	}
	return 0;
}

int count()
{
	int i = 0;
	while (geclib[i].an)
		i++;
	return i;
}

void display(int i)
{
	i--;
	printf("\n\n\n");
	printf("\nAccession Number : %d", geclib[i].an);
	printf("\nTitle : %s", geclib[i].title);
	printf("\nAuthor : %s", geclib[i].author);
	printf("\nPrice : %d", geclib[i].price);
	if (geclib[i].flag)
		printf("\nStatus : Issued");
	else
		printf("\nStatus : Available");
}

void giv_author(char *author)
{
	int i = 0;
	printf("\nBooks of \"%s\" are following : \n\n", author);
	while (geclib[i].an)
	{
		if (!(strcmp(author, geclib[i].author)))
			display(geclib[i].an);
		i++;
	}
}

void adbuk()
{
	int next = count();
	geclib[next].an = next + 1;
	while (getchar() != '\n');
	printf("\nEnter the title of the book : ");
	gets(geclib[next].title);
	printf("\nEnter the author name of the book : ");
	gets(geclib[next].author);
	printf("\nEnter the price of the book : ");
	scanf("%d", &geclib[next].price);
	geclib[next].flag = 1;
}

void which1(int an)
{
	int i = 0;
	while (geclib[i].an)
	{
		if (geclib[i].an == an)
		{
			printf("\n\nTitle of the book : %s\n", geclib[i].title);
			return;
		}
	}
	printf("No any book found found\n");
}

void albuk()
{
	int i = 0;
	while (geclib[i].an)
	{
		display(i + 1);
		i++;
	}
}
