#include <stdio.h>
int main()
{
	int decision, noCount = 1, no;
	
	do
	{
		printf ("\n\nTanner says ");
		
		for ( no = 1 ; no <= noCount; no++ )
			printf ("no ");
		
		noCount++;
		
		printf (" u.\nRebuttle? (1 for yes, 0 for no):\t");
		scanf ("%d", &decision);
		
		if (decision == 1)
		{
			printf ("\nYou say ");
			
			for ( no = 1 ; no <= noCount; no++ )
				printf ("no ");
			
			printf ("u. ");	
			
			noCount++;
		}
		else
			printf ("\nYou give up.\n");
	}
	while (decision == 1);
	printf ("\nTanner wins!\n\n");
	system ("PAUSE");
	return 0;
}
