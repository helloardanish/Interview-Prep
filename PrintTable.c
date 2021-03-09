/*Table program for C*/


#include <stdio.h>

int main(){
	int a;
	int ans;
	
	scanf("%d",&a);
	printf("Table of %d:\n",a);
	for(int i=1; i<=10; i++){
		ans = a*i;
		printf("%d * %d = %d\n",a, i, ans);
	}
	return 0;
}

// Tables of multiples numbers with using arrays and functions in c



/*Table program for C*/


#include <stdio.h>

void printTable(int);

int main(){
	int a, ind;
	int arr[100];
	scanf("%d",&a);
	printf("Enter the %d numbers.\n\n",a);
	for (int i=0; i<a; i++){
		scanf("%d",&ind);
		arr[i] = ind;
	}
	for (int i=0; i<a; i++){
		printf("Table of %d are:\n",arr[i]);
		printTable(arr[i]);
	}
	return 0;
}

void printTable(int num){
	int temp;
	for(int i=1; i<=10; i++){
		temp = num*i;
		printf("%d * %d = %d\n",num, i, temp);
	}
}
