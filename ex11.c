# include <stdio.h>
# include <string.h>

int main( )
{

	FILE *filePointer ;
	char data[200]= "Vatsal Shah"; 
	filePointer = fopen("Test.c", "w") ;
		
	if (strlen(data) > 0)
	{
    	fputs(data, filePointer);
		fputs("\n", filePointer) ;
	}
		
	fclose(filePointer) ;
	printf("Data is written in file Test.c\n");
	printf("The file is now closed.");
	
	return 0;	
}
