/**
 * print_alphabet - the function  prints the alphabet, in lowercase, followed
 * by a new line, using _putchar 
 */
void print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while(c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}

	_putchar('\n');
}
