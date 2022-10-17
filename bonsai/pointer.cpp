#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct triangle
{

unsigned int base;
unsigned int height;
char * name;
};

int main(){

triangle * t=(triangle*)malloc(sizeof(triangle));
t->base=10;
t->height=124;
t->name=" Its a triangle\n";
printf("%d ",t->base);
printf("%d",t->height);
printf("%s",t->name);
return 0;
}
