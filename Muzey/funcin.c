#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#include <cstring>
void create(struct person **arr, int*n){
  printf("n = ");
  scanf("%d", n);
  if(*n <= 0)
    return;
  *arr = (struct person *)calloc(*n, sizeof(struct person));
  for(int i = 0; i < *n; i++){
    printf("name = ");
    scanf("%s", (*arr)[i].name);
    printf("price = ");
    scanf("%d", &(*arr)[i].price);
    printf("long = ");
    scanf("%d", &(*arr)[i].longs);
  }
}
void read(struct person **arr, int * n){
  FILE *f = fopen("1.txt", "r");
  if(!f)
    return;
  fscanf(f, "%d", n);
    return;
  if(*n <= 0);
    return;
  *arr = (struct person*)calloc(*n, sizeof(struct person));
  for(int i = 0; i < *n; i++)
    fscanf(f, "%s %d %d", (*arr)[i].name, &(*arr)[i].price, &(*arr)[i].longs);
  fclose(f);
}
void write(struct person *arr, int n){
  if(n <= 0)
    return;
  FILE *f = fopen("1.txt", "w");
  if(!f)
    return;
  fprintf(f, "%d\n", n);
  for(int i = 0; i < n; i++)
    fprintf(f, "\n%s %d %d\n", arr[i].name, arr[i].price, arr[i].longs);
  fclose(f);
}
void research(struct person *arr, int n){
	if(n == 0){
		printf("Netu Nichego");
		return;
	}
	printf("Проходка = ");
	char name[40];
	scanf("%s", name);
	printf("name\tprice\tlong\n");
	for(int i = 0; i < n; i++)
		if(strcmp(name, arr[i].name) == 0)
			printf("%s\t%d\t%d\n", arr[i].name, arr[i].price, arr[i].longs);
}

