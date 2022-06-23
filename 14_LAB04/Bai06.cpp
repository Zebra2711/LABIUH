#include <stdio.h>
int main()
{
    printf("Nhap nhiet do (do C): ");
    int temp; scanf("%d", &temp);
    if (temp<0) 
    	printf("Freezing weather");
    else if (10>temp)
    	printf("Very Cold weather");
    else if (20>=temp)
		printf("Cold weather");
    else if (30>=temp)
		printf("Norman in Temp");
    else if (40>=temp)
    	printf("Its Hot");
    else
    	printf("Its Very Hot");
    return 0;
}
