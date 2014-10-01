#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void vulngets(char* buff)
{
	int i = 0;
	int read;
	while((read = getchar())!='\n' && read!=EOF){
		buff[i++]=read;
	}
}

void destroyTheEnterprise()
{
	puts("*BOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOM*\n\nThe Enterprise was exploded. :'(");
	exit(0);
}

void is_it_my_wrath(int so1337, char* donttouchit)
{
	if( so1337 != 1337)
	{
		puts("Hey, what do you mean I'm not the most 1337 warlord in the galaxy?! Someone's in the system! For that, you die!");
		destroyTheEnterprise();
	}
	if(strcmp(donttouchit,"wrathofkhan") != 0)
	{
		puts("This isn't my wrath I'm executing! BEGONE, HACKERS!");
		destroyTheEnterprise();
	}
}

void manualTargettingOverride()
{
	puts("The Enterprise is back under your control! You fire your photon torpedos at Khan and he is no more. Live long and prosper, ensign.");
	exit(0);
}

void wrathOfMe()
{
	char donttouchit[] = {'w','r','a','t','h','o','f','k','h','a','n',0};
	int so1337 = 1337;
	char buff[7];

	puts("ENTER 7 DIGIT OVERRIDE CODE:. [Guess]: ");
	vulngets(buff);

	is_it_my_wrath(so1337,donttouchit);
}

int main(){
	puts("Captain Kirk & Friends are in trouble. Khan Noonien Singh has taken over the enterprise and has set all of its photon torpedos detonate in their tubes and destroy the enterprise. Spock believes he may be able to hack into the computer and make the torpedos target Khan's ship instead... if only he can get access to the system without setting off any traps.\n");

	puts("Spock: ps -aux | grep torpedoProgram\n$: {nothing prints out}\n");

	puts("Spock: kill khan\n$: kill: khan: arguments must be process or job IDs\n");

	puts("Spock: umount /dev/ptpds /photon_torpedos\n$: umount: i'm a madman, do you think i'd just let you unmount the torpedos? mwhahahaha\n");

	puts("Spock: apt-get install Deus-Ex-Machina\n$: Err: Unable to locate package.\n");

	puts("Kirk: Wait, spock, what's that over there!\n");

	puts("Spock: I see, captain. Let me try that.\nSpock: ./thewrathofme\n");

	wrathOfMe();

	puts("Ha! There IS NO OVERRIDE CODE! GOODBYE, KIRK!");

	destroyTheEnterprise();
}
