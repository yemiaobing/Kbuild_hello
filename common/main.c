#include <stdio.h>
#include "linux/i2c.h"

int main(void)
{
	printf("Kbuild hello\n");
#ifdef CONFIG_I2C
	printf("test i2c read write\n");
	i2c_read();
	i2c_write();
#else
	printf("no i2c support\n");
#endif

	return 0;
}
