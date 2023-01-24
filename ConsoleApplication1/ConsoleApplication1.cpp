#include <iostream>;
#include "..//ConsoleApplication1/steam_api.h";


//using namespace std;


int main()
{

	if (SteamAPI_RestartAppIfNecessary(2046801278)) // Replace with your App ID
	{
		return 1;
	}

	if (!SteamAPI_Init())
	{
		printf("Fatal Error - Steam must be running to play this game (SteamAPI_Init() failed).\n");
		return 1;

	}

		
		 void S_CALLTYPE SteamAPI_RunCallbacks();
		std::cout << SteamFriends()->GetPersonaName() << std::endl;
         

	return 0;
}