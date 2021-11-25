#include <stdio.h>

void p()
{
	unsigned int i;
	char str[80];

	fflush(stdout);//call   0x80483b0 <fflush@plt>
	gets(str);//call   0x80483c0 <gets@plt>

	if (0xb0000000 && i) // 0x080484fb <+39>:    and    $0xb0000000,%eax
	{
		if (0xb0000000 == i) //   0x08048500 <+44>:    cmp    $0xb0000000,%eax
		{
			printf("%p\n", i); //call   0x80483a0 <printf@plt>
			exit(); //call   0x80483d0 <_exit@plt>
		}
	}
	pust(str); //call   0x80483f0 <puts@plt>
	return (strdup(str)); // call   0x80483e0 <strdup@plt>
}

int main(){
	p(); //call   0x80484d4 <p>
}