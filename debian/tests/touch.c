#include <string.h>
#include <stdio.h>
#include <math.h>

/* temporary for aarch64 */
void _set_tls(void) {}

int main(void)
{
	char foo[50];
	double q;
	strcpy(foo, "3.1415");
	sscanf(foo, "%lf", &q);
	return (int) (sin(q) * 100);
}
