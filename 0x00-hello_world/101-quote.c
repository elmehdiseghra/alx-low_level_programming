#include <unistd.h>
/**
 * main - prints "and that piece of art is useful\" - Dora Korpar, 2015-10-19",
<<<<<<< HEAD
 * Discription: followed by a newfile, to standard error.
 * return: always 1
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
=======
 * followed by a newfile, to standard error.
 * return: always 1
*/
int main(void)
{
        write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
        return (1);
>>>>>>> 6c9fcb9ba97ae3947ab8ef4a3cff6120a89cc06b
}
