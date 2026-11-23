#include <stdio.h>
struct protocol{
	unsigned int flags:4;
	unsigned int checksum:6;
}tcp;
int main(){
	printf("size of tcp=%d\n",(int)sizeof(tcp));
	tcp.flags=12;
	printf("%u\n",tcp.flags);
	tcp.flags=15;
	printf("%u\n",tcp.flags);
	tcp.flags=17;
	printf("%u\n",tcp.flags);
	printf("%d\n",(int)sizeof(tcp));
	return 0;
}
