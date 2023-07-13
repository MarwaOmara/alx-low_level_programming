#include <unistd.h>
/**
 * main - main block
 * return: 1 (unsuccessful)
 * write function (int fd, const void, buf.size_t count)
 */

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quo, 59);
	return (1);
}
