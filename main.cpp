#include<stdio.h>
#include<stdint.h>
#include<netinet/in.h>
int main(int argc, char** argv){

 FILE *fp = fopen(argv[1],"rb");
 FILE *sp = fopen(argv[2],"rb");

 uint32_t first,second,sum;

 fread(&first,sizeof(uint32_t),1,fp);
 fread(&second,sizeof(uint32_t),1,sp);

	uint32_t first1 = ntohl(first);
	uint32_t second1 = ntohl(second);
	sum = first1 + second1;


	//printf("0x%x",int(sum));

//	printf("%x",sum);
	printf("%d(%x) + %d(%x) = %d(%x) ",first1,first1,second1,second1,sum,sum);
fclose(fp);
fclose(sp);



return 0; 
 
 
}
