#include <stdio.h>

void p()
{
	unsigned int i;
	char str[100];//sub    $0x68,%esp

	fflush();//call   0x80483b0 <fflush@plt>
	gets(str);//call   0x80483c0 <gets@plt>

	if (0xb0000000 && i) // 0x080484fb <+39>:    and    $0xb0000000,%eax
	{
		if (0xb0000000 == i) //   0x08048500 <+44>:    cmp    $0xb0000000,%eax
		{
			printf(); //call   0x80483a0 <printf@plt>
			exit(); //call   0x80483d0 <_exit@plt>
		}
	}
	pust();
	strdup();
	return ;
}

int main(){
	p(); //call   0x80484d4 <p>
}