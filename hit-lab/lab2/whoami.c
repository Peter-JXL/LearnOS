# define __LIBRARY__
# include <unistd.h>

_syscall2(int, whoami,char*,name,unsigned int,size);

int main() {
	char s[30];
	int rlen = 0;
	rlen = whoami(s,30);//这里调用了_syscall2写的whoami函数
	printf("%s\n",s);
	return rlen;
}