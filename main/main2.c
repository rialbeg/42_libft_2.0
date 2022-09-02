#include "../libft.h"

int main(void)
{
	FILE *file;
	int i;
	char *current_line;
	// char *file_path = "files/file1";
	// char *file_path = "files/file2";
	char *file_path = "files/file3";
	// char *file_path = "files/file4";
	// char *file_path = "files/file5";

	i = 0;
	file = fopen(file_path, "r");

	// _fileno gets fd in linux
	while ((current_line = get_next_line(file->_fileno)) != NULL)
	{
		printf("Line %i : '%s", i, current_line);
		free(current_line);
		i++;
	}


	fclose(file);

	return (0);
}
