static void		*saved_ptr[1];

void			app_init(void *data, void (*ptr)(void *))
{
  saved_ptr[0] = data;
  ptr(data);
}

void			*get_data(int index)
{
  return (saved_ptr[index]);
}
