#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>


struct contestant {
	int position;
	char *winspeech;
	int prize;
};

void goal()
{
	printf( "You reached the goal!" );
}


int main(int argc, char **argv)
{
	struct contestant *c1, *c2, *c3;

	c1 = malloc(sizeof(struct contestant) );
	c1->position = 1;
	c1->prize = 10000;
	c1->winspeech = malloc(20);

	c2 = malloc(sizeof(struct contestant) );
	c2->position = 3;
	c2->prize = 1;
	c2->winspeech = malloc(20);

	c3 = malloc(sizeof(struct contestant) );
	c3->position = 2;
	c3->prize = 2500;
	c3->winspeech = malloc(20);

	strcpy(c1->winspeech, argv[1] );
	strcpy(c2->winspeech, argv[2] );
	strcpy(c3->winspeech, argv[3] );

	printf( "The winner is contestant 1! This is what he has to say:\n" );
	printf( "%s", c1->winspeech );
}



