/**
 * swap_int - this function update the value to 98
 *
 * @a: value
 * @b: value
 */
void swap_a(int *num1, int *num2)
{
	*num1 = *num2;
}
void swap_b(int *num1, int *num2)
{
	*num2 = *num1;
}
void swap_int(int *a, int *b)
{
	void swap_a(int *a, int *b);
	void swap_b(int *a, int *b);
}
