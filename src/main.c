#include <SDL.h>
#include <stdio.h>



//gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2


int main(int argc, char  **argv)
{
	SDL_version nd;
	SDL_VERSION(&nd);

	printf("Bienvenu sur la SDL %d.%d.%d !\n", nd.major, nd.minor, nd.patch);



	return 0;
}