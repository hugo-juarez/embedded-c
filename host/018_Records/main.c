/*
 * main.c
 *
 *  Created on: Mar 8, 2025
 *      Author: hseba
 */

#include <stdint.h>
#include <stdio.h>

typedef struct
{
	uint32_t rollNumber;
	uint32_t semester;
	char name[30];
	char branch[50];
	char DOB[15];
} STUDENT_INFO_t;

void clean_input(void);
void wait_user_input(void);
void select_menu_option(uint32_t *selection);
void display_all_records(STUDENT_INFO_t *records);
void add_new_record(STUDENT_INFO_t *records);
void delete_record(STUDENT_INFO_t *records);


int main(void){

	uint32_t selection;
	STUDENT_INFO_t records[10] = {0};

	do {
		select_menu_option(&selection);
		switch(selection){
			case 0:
				break;
			case 1:
				display_all_records(records);
				break;
			case 2:
				add_new_record(records);
				break;
			case 3:
				delete_record(records);
				break;
			default:
				printf("Invalid input. Try again\n");
				wait_user_input();
				break;
		}

	} while(selection!=0);

	return 0;

}

void select_menu_option(uint32_t *selection) {
	printf("Student record management program:\n\n"
			"Display all records\t--> 1\n"
			"Add new record\t\t--> 2\n"
			"Delete a record\t\t--> 3\n"
			"Exit application\t--> 0\n\n"
			"Enter your option here: ");
	scanf("%d", selection);
	printf("\n========================================\n\n");
}

void display_all_records(STUDENT_INFO_t *records){

	uint32_t recordsFound = 0;

	printf("Displaying current records: \n\n"
			"--------------------------------------------\n");

	for (uint32_t i = 0; i<10; i++){
		if(records[i].rollNumber != 0){
			recordsFound++;
			printf("rollNumber\t: %u\n"
					"studentSemister\t: %d\n"
					"studentDOB\t: %s\n"
					"studentBranch\t: %s\n"
					"studentName\t: %s\n"
					"--------------------------------------------\n",
					records[i].rollNumber,
					records[i].semester,
					records[i].DOB,
					records[i].branch,
					records[i].name);
		}

	}

	if(!recordsFound)
		printf("No records found.\n"
				"--------------------------------------------\n");

	wait_user_input();
}

void add_new_record(STUDENT_INFO_t *records){

	uint32_t rollNumber;
	uint32_t openSpace;

	printf("Enter the rollNumber\t\t: ");
	scanf("%d", &rollNumber);

	for(int32_t i=9; i>=0; i--){
		//Look if space is open + check if rollNumber exists
		if(records[i].rollNumber == 0)
			openSpace = i;
		else if(rollNumber == records[i].rollNumber){
			printf("\nRoll number already exist!!\n");
			wait_user_input();
			return;
		}
	}

	//Input values:
	records[openSpace].rollNumber = rollNumber;
	printf("Enter the studentSemester\t: ");
	scanf("%d", &records[openSpace].semester);
	clean_input();
	printf("Enter the DOB(mm/dd/yyyy)\t: ");
	scanf("%[^\n]s", records[openSpace].DOB);
	clean_input();
	printf("Enter the studentBranch\t\t: ");
	scanf("%[^\n]s", records[openSpace].branch);
	clean_input();
	printf("Enter the studentName\t\t: ");
	scanf("%[^\n]s", records[openSpace].name);

	printf("\nRecord added successfully!\n");
	wait_user_input();

}

void delete_record(STUDENT_INFO_t *records){

	//Ask for rollNumber and delete it based on that
	uint32_t rollNumber;
	printf("Enter the rollNumber\t: ");
	scanf("%d", &rollNumber);

	//Look if it exists or not
	for(uint32_t i=0; i<10; i++){
		if(rollNumber == records[i].rollNumber){
			records[i].rollNumber = 0;
			printf("\n Record Deleted!\n");
			wait_user_input();
			return;
		}
	}

	printf("\nCouldn't find record!\n");
	wait_user_input();
}

void wait_user_input(void){
	printf("\nEnter any key to continue ...");
	clean_input();
	getchar();
	printf("\n========================================\n\n");
}

void clean_input(void){
	while(getchar()!= '\n');
}
