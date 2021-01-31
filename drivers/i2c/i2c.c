#include <stdio.h>
#include "linux/i2c.h"

int i2c_write(void)
{
#ifdef CONFIG_MY_I2C
	printf("my i2c write\n");
#elif defined(CONFIG_DW_I2C)
	printf("DW i2c write\n");
#else
	printf("error i2c write\n");
#endif
	return 0;
}

int i2c_read(void)
{
#ifdef CONFIG_MY_I2C
	printf("my i2c read\n");
#elif defined(CONFIG_DW_I2C)
	printf("DW i2c read\n");
#else
	printf("error i2c read\n");
#endif
	return 0;
}
