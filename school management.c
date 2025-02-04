#include <stdio.h>
struct student{
	char name[100];
	int roll_no;
	char sec;
	int marks;
	char address[50];
};
void main(){
	int n,i,j,count = 0;
	printf("Enter number of student: ");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++){
	printf("Insert %d student data\n",i+1);
	printf("Enter name of the student :");
	scanf("%s",s[i].name);
	printf("Enter Roll number of the student : ");
	scanf("%d",&s[i].roll_no);
	printf("Enter section of the student : ");
	scanf(" %c",&s[i].sec);
	printf("Total marks of the student : ");
	scanf("%d",&s[i].marks);
	printf("Enter address of the student : ");
	scanf("%s",s[i].address);
	count++;
}
for(i=0;i<n;i++){
	printf("%d student data\n",i+1);
	printf("name = %s\n",s[i].name);
	printf("roll number = %d\n",s[i].roll_no);
	printf("section = %c\n",s[i].sec);
	printf("marks = %d\n",s[i].marks);
	printf("address = %s\n",s[i].address);
}
printf("Enter the student roll no\n");
int roll;
scanf("%d",&roll);
printf("find student date\n");
for(i=0;i<n;i++){
if(roll == s[i].roll_no){
printf("name = %s\n",s[i].name);
	printf("roll number = %d\n",s[i].roll_no);
	printf("section = %c\n",s[i].sec);
	printf("marks = %d\n",s[i].marks);
	printf("address = %s\n",s[i].address);
}
}
printf("no of student entered %d\n",count);
int roll_no;
printf("student to be delete is with a roll number : ");
scanf("%d",&roll_no);
for(i = 0;i < count;i++){
	if(s[i].roll_no == roll_no){
		for(j = i;j < count-1;j++){
			s[j] = s[j+1];
		}
		count--;
		printf("student with roll number %d has been deleted \n",s[i].roll_no);
	}
}
printf("To update the student detail\n");
int update;
int rollno;
printf("Enter the roll number ");
scanf("%d",&rollno);
for(i = 0;i<count;i++){
	if(s[i].roll_no == rollno){
	printf("%d student data\n",i+1);
	printf("name = %s\n",s[i].name);
	printf("roll number = %d\n",s[i].roll_no);
	printf("section = %c\n",s[i].sec);
	printf("marks = %d\n",s[i].marks);
	printf("address = %s\n",s[i].address);
	printf("which are the detail to be updated : ");
	scanf("%d",&update);
	switch(update){
		case 1 : {
			printf("Enter name : ");
			scanf("%s",s[i].name);
			printf("updated name : %s\n",s[i].name);
		}	break;
			case 2 : {
			printf("Enter roll number : ");
			scanf("%s",&s[i].roll_no);
			printf("updated roll no : %d\n",s[i].roll_no);
		}
			break;
			case 3 : {
			printf("Enter section : ");
			scanf("%c",&s[i].sec);
			printf("updated section : %c\n",s[i].sec);
		}
			break;
			case 4 : {
			printf("Enter marks : ");
			scanf("%d",s[i].marks);
			printf("updated marks : %d\n",s[i].marks);
		}
			break;
			case 5 : {
			printf("Enter address : ");
			scanf("%s",s[i].address);
			printf("updated address : %s\n",s[i].address);
		}
			break;
		
		}
	}
			printf("name = %s\n",s[i].name);
	printf("roll number = %d\n",s[i].roll_no);
	printf("section = %c\n",s[i].sec);
	printf("marks = %d\n",s[i].marks);
	printf("address = %s\n",s[i].address);
	
	}
}

