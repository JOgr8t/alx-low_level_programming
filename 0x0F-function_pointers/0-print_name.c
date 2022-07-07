#include <stdio.h>

void print_name(char *name);
{   
       	printf("%s\n", name);
}

int main(){

    void(*ptr)(char*);
    ptr = print_name;
   }
