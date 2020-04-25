#include <stdio.h>
#include<string.h>

int main(void) {
 char *arr ;
 char str[10]= "sapna";
 
 arr = str;
 strcpy(arr, "SAPNA");
 printf("arr=%s \r\n",arr);
 printf("size of %ld \r\n", sizeof(arr));

 return 0;
}
