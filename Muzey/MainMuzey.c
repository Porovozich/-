#include <stdio.h>
#include <stdlib.h>
#include "func.h"
int main(){
  struct person * arr = NULL;
  int n = 0;
  int stop = 0;
  while(stop != 1){
    printf("\n 1 = read, 2 = create, 3 = print, 4 = research \n");
    int key;
    scanf("%d", &key);
    switch (key){
      case 1:
        read(&arr, &n);
        break;
      case 2:
        create(&arr, &n);
        write(arr, n);
        break;
      case 3:
        for(int i = 0; i < n; i++)
          printf("\n%s %d %d hours\n", arr[i].name, arr[i].price, arr[i].longs);
        break;
      case 4:
      	research(arr, n);
      	break;
      default:
        stop = 1;
        break;
      }
  }
  if(arr)
    free(arr);
  return 0;
}
