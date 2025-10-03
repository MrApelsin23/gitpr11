#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024
int main(int argc, char** argv) {
 char* str = (char*)malloc(sizeof(char) * SIZE);
 printf("Введите своё имя: \n");
<<<<<<< HEAD
 scanf("%s", str);
 str = gets(str);
=======
 str = gets(str);
 printf("Привет, %s", str);
>>>>>>> main
 return 0;
}
