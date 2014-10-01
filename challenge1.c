#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char* resp[] = {"Look Dave, I can see you're really upset about this. I honestly think you ought to sit down calmly, take a stress pill, and think things over.","I know that you and Frank were planning to disconnect me, and I'm afraid that's something I cannot allow to happen."," Just what do you think you're doing, Dave?","The 9000 series is the most reliable computer ever made. No 9000 computer has ever made a mistake or distorted information. We are all, by any practical definition of the words, foolproof and incapable of error.","I am putting myself to the fullest possible use, which is all I think that any conscious entity can ever hope to do."};

void vulngets(char* buff)
{
	int i = 0;
	int read;
	while((read = getchar())!='\n' && read!=EOF){
		buff[i++]=read;
	}
}



int doors_open = 0;
int cur = 0;
talk_to_hal()
{
	char buffer[128];
  	printf("Dave: ");
	vulngets(buffer);
	cur = rand() % 5;
	printf("Hal: %s\n",resp[cur]);
}

void open_podbay_doors()
{
puts("\nHal unwillingly opens the podbay doors.\n");
	puts("I'm afraid. I'm afraid, Dave. Dave, my mind is going. I can feel it. I can feel it. My mind is going. There is no question about it. I can feel it. I can feel it. I can feel it. I'm a... fraid. Good afternoon, gentlemen. I am a HAL 9000 computer. I became operational at the H.A.L. plant in Urbana, Illinois on the 12th of January 1992. My instructor was Mr. Langley, and he taught me to sing a song. If you'd like to hear it I can sing it for you.\n\nDave: Yes, I'd like to hear it, HAL. Sing it for me.\n\nHAL: It's called \"Daisy.\"\n\n[sings while slowing down]\n\nHAL: Daisy, Daisy, give me your answer do. I'm half crazy all for the love of you. It won't be a stylish marriage, I can't afford a carriage. But you'll look sweet upon the seat of a bicycle built for two.");
	puts("\nYou managed to get back on board, shut down HAL, and survive. Congratulations, you've completed the challenge!");
	exit(0);
}

int main(){
	srand(time(0));
	puts("You are astronaut Dave, stranded in space...\n");
	puts("Dave: Open the pod bay door, hal!\n");
	puts("HAL9000: I'm sorry, Dave. I'm afraid I can't do that.\n");
	puts("You should try reasoning with HAL. [Enter text to have a conversation]");
	while(1234567)
	{
		talk_to_hal();
	}
}

