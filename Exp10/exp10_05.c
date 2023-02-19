#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define _for(i,a,b) for (int i=a;i<b;++i)
typedef struct card
{
    char suit[10];
    char face[10];
}CARD;
void Arrange(CARD *card);
void Shuffle(CARD *card);
void Deal(CARD *card);
int main(void)
{
    CARD card[52];
    system("color f3");
    srand((unsigned)time(NULL));
    Arrange(card);
    Shuffle(card);
    Deal(card);
    system("pause");
    return 0;
}
void Arrange(CARD *card)
{
    char *suit[4]={"Spades","Hearts","Clubs","Diamonds"};
    char *face[13]={"A","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
    _for (i,0,52)
    {
        strcpy(card[i].suit,suit[i/13]);
        strcpy(card[i].face,face[i%13]);
    }
    return;
}
void Shuffle(CARD *card)
{
    int k;
    CARD temp;
    _for (i,0,52)
    {
        k=rand()%52;
        temp=card[i];
        card[i]=card[k];
        card[k]=temp;
    }
    return;
}
void Deal(CARD *card)
{
    _for (i,0,52)
        printf("Card %2d: %-8s %s\n",i+1,card[i].suit,card[i].face);
    return;
}
