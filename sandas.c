#include <stdio.h>
#include <math.h>
#include <string.h>
//defining structure person
typedef struct person{
    char* name;
    int amount_paid;
    int amount_to_pay;
    int diff;
} person;
person group[n];

void sort(void);
void settle(void);

int main(void){
	
	printf("Enter the number of members\n");
	int n;
	scanf("%d", &n);
	printf("Enter the amount paid per person\n");
	
	for(int i=0; i<n; i++){
		int temp;
		printf("Person %d\n", i+1);
		scanf("%d", &temp);
		(group[i]).amount_paid=temp;
	}
	
	int total_amount_paid=0;
	
	for(int i=0; i<n; i++){
		total_amount_paid+=(group[i]).amount_paid;
	}
	
	printf("Enter amount to be paid per person\n");
	
	for(int i=0; i<n; i++){
		int temp;
		printf("Person %d\n", i+1)
		scanf("%d\n", &temp);
		(group[i]).amount_to_pay=temp;
	}
	
	int amount_due;
	
	for(int i=0; i<n; i++)
	    amount_to_be_paid+=amount_to_pay[i];
	
	if(amount_to_be_paid!=total_amount_paid){
	    return 1;
	}
	
	int count_positive=0, count_negative=0;
	
	for(int i=0; i<n; i++){
	    (group[i]).diff=(group[i]).amount_paid-(group[i]).amount_to_pay;
	    if((group[i]).diff>=0)
	        count_positive++;
	    else
	        count_negative++;
	}
	
	person group[]
	
	void sort(void);
	void settle(void);
	return 0;
}

void sort(void){
    for(int i=0;i<n; i++){
        for(int j=0; j<n-1;j++){
            if((group[j]).diff
        }
    }
}
