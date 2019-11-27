#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>


void partialwin()
{
	printf("Achieved 1/2!\n");
}

void fullwin()
{
	printf("Achieved 2/2!\n");
}

void vuln()
{
  char buffer[64];

  gets(buffer);

  printf(buffer);

}

int main(int argc, char **argv)
{
  vuln();
}
