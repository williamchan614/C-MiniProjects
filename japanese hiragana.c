#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



struct dataHira{
	char *script;
	char *romanji;
};

struct phrase{
	char *script;
	char *romanji;
};

const struct dataHira table[] = {
	{"あ","a"},
	{"い","i"},
	{"う","u"},
	{"え","e"},
	{"お","o"},
	{"か","ka"},
	{"き","ki"},
	{"く","ku"},
	{"け","ke"},
	{"こ","ko"},
	{"さ","sa"},
	{"し","shi"},
	{"す","su"},
	{"せ","se"},
	{"そ","so"},
	{"た","ta"},
	{"ち","chi"},
	{"つ","tsu"},
	{"て","te"},
	{"と","to"},
	{"な","na"},
	{"に","ni"},
	{"ぬ","nu"},
	{"ね","ne"},
	{"の","no"},
	{"は","ha"},
	{"ひ","hi"},
	{"ふ","fu"},
	{"へ","he"},
	{"ほ","ho"},
	{"ま","ma"},
	{"み","mi"},
	{"む","mu"},
	{"め","me"},
	{"も","mo"},
	{"や","ya"},
	{"ゆ","yu"},
	{"よ","yo"},
	{"ら","ra"},
	{"り","ri"},
	{"る","ru"},
	{"れ","re"},
	{"ろ","ro"},
	{"わ","wa"},
	{"を","wo"},
	{"が","ga"},
	{"ぎ","gi"},
	{"ぐ","gu"},
	{"げ","ge"},
	{"ご","go"},
	{"ざ","za"},
	{"じ","ji"},
	{"ず","zu"},
	{"ぜ","ze"},
	{"ぞ","zo"},
	{"だ","da"},
	{"ぢ","di"},
	{"づ","du"},
	{"で","de"},
	{"ど","do"},
	{"ば","ba"},
	{"び","bi"},
	{"ぶ","bu"},
	{"べ","be"},
	{"ぼ","bo"},
	{"ぱ","pa"},
	{"ぴ","pi"},
	{"ぷ","pu"},
	{"ぺ","pe"},
	{"ぽ","po"},
	{"あ","a"},
	{"い","i"},
	{"う","u"},
	{"え","e"},
	{"お","o"},
	{"か","ka"},
	{"き","ki"},
	{"く","ku"},
	{"け","ke"},
	{"こ","ko"},
	{"さ","sa"},
	{"し","shi"},
	{"す","su"},
	{"せ","se"},
	{"そ","so"},
	{"た","ta"},
	{"ち","chi"},
	{"つ","tsu"},
	{"て","te"},
	{"と","to"},
	{"な","na"},
	{"に","ni"},
	{"ぬ","nu"},
	{"ね","ne"},
	{"の","no"},
	{"は","ha"},
	{"ひ","hi"},
	{"ふ","fu"},
	{"へ","he"},
	{"ほ","ho"},
	{"ま","ma"},
	{"み","mi"},
	{"む","mu"},
	{"め","me"},
	{"も","mo"},
	{"や","ya"},
	{"ゆ","yu"},
	{"よ","yo"},
	{"ら","ra"},
	{"り","ri"},
	{"る","ru"},
	{"れ","re"},
	{"ろ","ro"},
	{"わ","wa"},
	{"を","wo"},
	{"が","ga"},
	{"ぎ","gi"},
	{"ぐ","gu"},
	{"げ","ge"},
	{"ご","go"},
	{"ざ","za"},
	{"じ","ji"},
	{"ず","zu"},
	{"ぜ","ze"},
	{"ぞ","zo"},
	{"だ","da"},
	{"ぢ","di"},
	{"づ","du"},
	{"で","de"},
	{"ど","do"},
	{"ば","ba"},
	{"び","bi"},
	{"ぶ","bu"},
	{"べ","be"},
	{"ぼ","bo"},
	{"ぱ","pa"},
	{"ぴ","pi"},
	{"ぷ","pu"},
	{"ぺ","pe"},
	{"ぽ","po"},
	{"あ","a"},
	{"い","i"},
	{"う","u"},
	{"え","e"},
	{"お","o"},
	{"か","ka"},
	{"き","ki"},
	{"く","ku"},
	{"け","ke"},
	{"こ","ko"},
	{"さ","sa"},
	{"し","shi"},
	{"す","su"},
	{"せ","se"},
	{"そ","so"},
	{"た","ta"},
	{"ち","chi"},
	{"つ","tsu"},
	{"て","te"},
	{"と","to"},
	{"な","na"},
	{"に","ni"},
	{"ぬ","nu"},
	{"ね","ne"},
	{"の","no"},
	{"は","ha"},
	{"ひ","hi"},
	{"ふ","fu"},
	{"へ","he"},
	{"ほ","ho"},
	{"ま","ma"},
	{"み","mi"},
	{"む","mu"},
	{"め","me"},
	{"も","mo"},
	{"や","ya"},
	{"ゆ","yu"},
	{"よ","yo"},
	{"ら","ra"},
	{"り","ri"},
	{"る","ru"},
	{"れ","re"},
	{"ろ","ro"},
	{"わ","wa"},
	{"を","wo"},
	{"が","ga"},
	{"ぎ","gi"},
	{"ぐ","gu"},
	{"げ","ge"},
	{"ご","go"},
	{"ざ","za"},
	{"じ","ji"},
	{"ず","zu"},
	{"ぜ","ze"},
	{"ぞ","zo"},
	{"だ","da"},
	{"ぢ","di"},
	{"づ","du"},
	{"で","de"},
	{"ど","do"},
	{"ば","ba"},
	{"び","bi"},
	{"ぶ","bu"},
	{"べ","be"},
	{"ぼ","bo"},
	{"ぱ","pa"},
	{"ぴ","pi"},
	{"ぷ","pu"},
	{"ぺ","pe"},
	{"ぽ","po"},
	{"あ","a"},
	{"い","i"},
	{"う","u"},
	{"え","e"},
	{"お","o"},
	{"か","ka"},
	{"き","ki"},
	{"く","ku"},
	{"け","ke"},
	{"こ","ko"},
	{"さ","sa"},
	{"し","shi"},
	{"す","su"},
	{"せ","se"},
	{"そ","so"},
	{"た","ta"},
	{"ち","chi"},
	{"つ","tsu"},
	{"て","te"},
	{"と","to"},
	{"な","na"},
	{"に","ni"},
	{"ぬ","nu"},
	{"ね","ne"},
	{"の","no"},
	{"は","ha"},
	{"ひ","hi"},
	{"ふ","fu"},
	{"へ","he"},
	{"ほ","ho"},
	{"ま","ma"},
	{"み","mi"},
	{"む","mu"},
	{"め","me"},
	{"も","mo"},
	{"や","ya"},
	{"ゆ","yu"},
	{"よ","yo"},
	{"ら","ra"},
	{"り","ri"},
	{"る","ru"},
	{"れ","re"},
	{"ろ","ro"},
	{"わ","wa"},
	{"を","wo"},
	{"が","ga"},
	{"ぎ","gi"},
	{"ぐ","gu"},
	{"げ","ge"},
	{"ご","go"},
	{"ざ","za"},
	{"じ","ji"},
	{"ず","zu"},
	{"ぜ","ze"},
	{"ぞ","zo"},
	{"だ","da"},
	{"ぢ","di"},
	{"づ","du"},
	{"で","de"},
	{"ど","do"},
	{"ば","ba"},
	{"び","bi"},
	{"ぶ","bu"},
	{"べ","be"},
	{"ぼ","bo"},
	{"ぱ","pa"},
	{"ぴ","pi"},
	{"ぷ","pu"},
	{"ぺ","pe"},
	{"ぽ","po"},
	{"きゃ","kya"},
	{"きゅ","kyu"},
	{"きょ","kyo"},
	{"ひゃ","hya"},
	{"ひゅ","hyu"},
	{"ひょ","hyo"},
	{"じゃ","jya"},
	{"じゅ","jyu"},
	{"じょ","jyo"},
	{"しゃ","sha"},
	{"しゅ","shu"},
	{"しょ","sho"},
	{"みゃ","mya"},
	{"みゅ","myu"},
	{"みょ","myo"},
	{"ぢゃ","dya"},
	{"ぢゅ","dyu"},
	{"ぢょ","dyo"},
	{"ちゃ","cha"},
	{"ちゅ","chu"},
	{"ちょ","cho"},
	{"りゃ","rya"},
	{"りゅ","ryu"},
	{"りょ","ryo"},
	{"びゃ","bya"},
	{"びゅ","byu"},
	{"びょ","byo"},
	{"にゃ","nya"},
	{"にゅ","nyu"},
	{"にょ","nyo"},
	{"ぎゃ","gya"},
	{"ぎゅ","gyu"},
	{"ぎょ","gyo"},
	{"ぴゃ","pya"},
	{"ぴゅ","pyu"},
	{"ぴょ","pyo"},
	{"ん","n"},
	{"ん","n"},
	{"ん","n"},
	{"ん","n"},
	{"ん","n"},
	{"ん","n"}
};

struct phrase randomHira(){
	int x = rand() % (321 + 1 - 0) + 0;
	struct phrase part = {table[x].script,table[x].romanji};
	return part;
}

struct phrase randHiraFront(){
	int x = rand() % (315 + 1 - 0) + 0;
	struct phrase part = {table[x].script,table[x].romanji};
	return part;
}


void constructHira(char** hira, char** roman){
	int x = rand() % (5 + 1  - 2) + 2;
	char* sentence = calloc(3*x*sizeof("あ")+1,sizeof("あ"));
	char* target = calloc(3*x*sizeof(char)+1 ,sizeof(char));

	struct phrase front = randHiraFront();
	strcat(sentence,front.script);
	strcat(target,front.romanji);

	for (int i = 1; i < x; i++){
		struct phrase next = randomHira();
		strcat(sentence, next.script);
		strcat(target, next.romanji);
	}

	*hira = sentence;
	*roman = target;
}



int main(){
	srand(time(NULL));
	printf("Hello, let's practice your Hiragana!\n");
	while(1){
		printf("Please input how many do you want to do?\n");
		printf("Depending on how many you want, you will be given more lives\n");
		int uinput;
		scanf("%d",&uinput);

		while(uinput < 1){
			printf("Please enter a number greater than 0");
			scanf("%d",&uinput);
		}


		int score = 0;
		int questions = uinput;
		int lives = uinput/6;
		while(uinput > 0 && lives >= 0){
			if (lives >= 0){
				char* h = NULL;
				char* r = NULL;
				constructHira(&h,&r);
				printf("%s\n",h);


				char utarget[100];
				scanf("%s",utarget);
				printf("\nDEBUG:{%s}\n",r);
				if (strcmp(utarget,r) != 0){
					lives--;
					printf("incorrect: answer is %s\n", r);
					if(lives > 1){
						printf("%d lives remaining\n",lives+1);
					}
					else if (lives == 0){
						printf("%d life remaining\n",lives+1);
					}
					else{
						printf("game over \n");
					}
				}
				else{
					score++;
				}
				free(h);
				free(r);
				uinput--;
			}
			else{
				printf("You ran out of lives!\n");
			}
		}
		printf("Your accuracy was %d/%d\n",score,questions);
	}
}

