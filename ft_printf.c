 int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	int			result;

	i = 0;
	result = 0;
	va_start(ap, format);
	while (format[i])
	{
		if ((format[i] == '%')
			&& (ft_strchr("cspdiuxX%", format[i + 1])))
		{
			result += format_check(format, i, ap);
			i++;
		}
		else
			result += ft_putchar(format[i]);
		i++;
	}
