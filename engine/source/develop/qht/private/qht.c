#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "cmake_config.h"

int main()
{
	char* header = "/runtime/core/type_def/public/type_def.h";
	char* root = CMAKE_SOURCE_DIR;
	uint32_t num_path = strlen(root) + strlen(header) + 1;
	char* path = calloc(num_path, sizeof(char));
	strcpy(path, root);
	strcat(path, header);

	printf("[qht][log] path %s\n", path);

	FILE* file;
	file = fopen(path, "r");
	if (file)
	{
		fseek(file, 0L, SEEK_END);
		size_t size = ftell(file);
		printf("[qht][log] size %d\n", size);
		char *buffer = calloc(size, sizeof(char));
		fseek(file, 0L, SEEK_SET);
		size_t num_read;
		while ((num_read = fread(buffer, 1, size, file)) > 0)
		{
			fwrite(buffer, 1, num_read, stdout);
		}
		if (ferror(file)) {
			/* deal with error */
		}
		fclose(file);
	}
	else
	{
		printf("[qht][error] file is null");
	}

	free(path);

	int wait;
	scanf("%d", &wait);

	return 0;
}