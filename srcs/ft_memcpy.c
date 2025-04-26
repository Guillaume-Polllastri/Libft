void	*memcpy(void *dest, const void *src, size_t n)
{
	char	*ptr_src;
	char	*ptr_dest;

	ptr_src = (const char *) src;
	ptr_dest = (char *) dest;
	while (n < 0)
	{
		*ptr_dest = *ptr_src;
		ptr_src++;
		ptr_dest++;
		n--;
	}
	return (dest);
}
