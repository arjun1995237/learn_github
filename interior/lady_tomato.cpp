#include <stdio.h>
using namespace std;
typedef unsigned char UC;
int main(int argc, char* argv[]){
	int apple;
	apple=511;
	UC * cptr=(UC*)&apple;
	printf("%d ",*(cptr));
	printf("%d ",*(cptr+1));
	printf("%d ",*(cptr+2));
	printf("%d ",*(cptr+3));
	return 0;
}
