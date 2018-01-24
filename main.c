#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>
void topic_generator(char * playername);
int num_word,subject;
struct final_score
{
    char name[30];
    float score;
};

struct word
{
    char kalame[50];
    struct word * next;
};

char* choosetopic(char * a, int n);

struct word* creatnode(char* kalame)
{
    struct word* nn=(struct word*) malloc(sizeof(struct word));
    strcpy(nn->kalame,kalame);
    nn->next=NULL;
    return nn;
}

void add_end(struct word* p,struct word* p_org)
{
    struct word* current;
    for(current=p_org; current->next!=NULL; current=current->next);
    current->next=p;
}

int is_false(struct word* sample, char guess)
{
    int i=0;
    for(; i<strlen(sample->kalame); i++)
    {
        if(sample->kalame[i]==guess)
            return 0;
    }
    return 1;
}

void adamak(int wrong_guess)
{
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    switch(wrong_guess)
    {
    case 0:
        printf("    %c%c%c%c%c%c%c\n",177,177,177,177,177,177,177);
        printf("   @%c %c %c %c@\n",177,233,233,177);

        printf("    %c  %c  %c\n",179,164,179);
        printf("    %c%c%c%c%c%c%c\n",192,196,194,196,194,196,217);
        printf("   %c%c%c%c %c%c%c%c\n",218,196,196,217,192,196,196,191);
        printf("  /         \\\n",179,179);
        printf(" / /  MRA  \\ \\\n");
        printf("/ /%c       %c\\ \\\n",179,179);
        printf("   %c%c%c%c%c%c%c%c%c\n",195,196,196,196,196,196,196,196,180);
        printf("   %c  %c%c%c  %c\n",179,218,196,191,179);
        printf("   %c  %c %c  %c\n",179,179,179,179);
        printf("   %c  %c %c  %c\n",179,179,179,179);
        printf("   %c  %c %c  %c\n",179,179,179,179);
        printf("   %c%c%c%c %c%c%c%c\n",212,205,205,190,212,205,205,190);
        SetConsoleTextAttribute(hConsole, 9);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);

        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        SetConsoleTextAttribute(hConsole, 15);
        return;
    case 1:
        printf("    %c%c%c%c%c%c%c\n",177,177,177,177,177,177,177);
        printf("   @%c %c %c %c@\n",177,233,233,177);

        printf("    %c  %c  %c",179,164,179);
        SetConsoleTextAttribute(hConsole, 10);
        printf("\tSHIT!!!\n");
        SetConsoleTextAttribute(hConsole, 15);
        printf("    %c%c%c%c%c%c%c\n",192,196,194,196,194,196,217);
        printf("   %c%c%c%c %c%c%c%c\n",218,196,196,217,192,196,196,191);
        printf("  /         \\\n",179,179);
        printf(" / /  MRA  \\ \\\n");
        printf("/ /%c       %c\\ \\\n",179,179);
        printf("   %c%c%c%c%c%c%c%c%c\n",195,196,196,196,196,196,196,196,180);
        printf("   %c  %c%c%c  %c\n",179,218,196,191,179);
        printf("   %c  %c %c  %c\n",179,179,179,179);
        SetConsoleTextAttribute(hConsole, 9);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        SetConsoleTextAttribute(hConsole, 15);
        return;
    case 2:
        printf("    %c%c%c%c%c%c%c\n",177,177,177,177,177,177,177);
        printf("   @%c %c %c %c@\n",177,232,232,177);

        printf("    %c  %c  %c",179,164,179);
        SetConsoleTextAttribute(hConsole, 4);
        printf("\tHELP ME!!!\n");
        SetConsoleTextAttribute(hConsole, 15);
        printf("    %c%c%c%c%c%c%c\n",192,196,194,196,194,196,217);
        printf("   %c%c%c%c %c%c%c%c\n",218,196,196,217,192,196,196,191);
        printf("  /         %c  /\n",251);
        printf(" / /  MRA  \\  /\n",251);
        printf("/ /%c       %c\\/\n",179,179);
        SetConsoleTextAttribute(hConsole, 9);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        SetConsoleTextAttribute(hConsole, 15);
        return;
    case 3:
        printf("    %c%c%c%c%c%c%c\n",177,177,177,177,177,177,177);
        printf("   @%c %c %c %c@\n",177,236,236,177);
        printf("    %c  %c  %c",179,164,179);
        SetConsoleTextAttribute(hConsole, 5);
        printf("\tHURRY UP!!!\n");
        SetConsoleTextAttribute(hConsole, 15);
        printf("    %c%c%c%c%c%c%c\n",192,196,194,196,194,196,217);
        printf("   %c%c%c%c %c%c%c%c\n",218,196,196,217,192,196,196,191);
        SetConsoleTextAttribute(hConsole, 9);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        SetConsoleTextAttribute(hConsole, 15);
        return ;
    case 4:
        printf("    %c%c%c%c%c%c%c\n",177,177,177,177,177,177,177);
        printf("   @%c * * %c@\n",177,177);
        printf("    %c  %c  %c",179,164,179);
        SetConsoleTextAttribute(hConsole, 14);
        printf("\tPLEASE!!!\n");
        SetConsoleTextAttribute(hConsole, 15);
        SetConsoleTextAttribute(hConsole, 9);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        SetConsoleTextAttribute(hConsole, 15);
        return;
    case 5:
        SetConsoleTextAttribute(hConsole, 12);
        printf("    BYE:(\n");
        SetConsoleTextAttribute(hConsole, 15);
        SetConsoleTextAttribute(hConsole, 9);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        SetConsoleTextAttribute(hConsole, 15);
    }
}

void Savegame(struct word * p_org, FILE * fplayerchoice,char * playername,char * sub,float tscore)
{
    fclose(fplayerchoice);
    char str[100]={".\\"};
    strcat(str,playername);
    strcat(str,"\\");
    strcat(str,sub);
    struct word* sample=p_org;
    FILE * fplayerchoice2=fopen(str,"w");
    int i,j;
    for(i=0;i<num_word;i++)
    {
        for(j=0;j<strlen(sample->kalame);j++)
        {
           putc(sample->kalame[j],fplayerchoice2);
        }
        sample=sample->next;
        putc(' ',fplayerchoice2);
    }
    fclose(fplayerchoice2);
    struct final_score ttscore;
    char str2[50]={".\\"};
    strcat(str2,playername);
    strcat(str2,"\\");
    strcat(str2,"\\score.mra");
    FILE* f=fopen(str2,"rb+");
    fseek(f,(subject-1)*sizeof(struct final_score),SEEK_SET);
    fread(&ttscore,sizeof(struct final_score),1,f);
    ttscore.score+=tscore;
    printf("Your total score in %s is %f\n",ttscore.name,ttscore.score);
    fseek(f,(-1)*sizeof(struct final_score),SEEK_CUR);
    fwrite(&ttscore,sizeof(struct final_score),1,f);
    fclose(f);
}

void dltnode(struct word** p_org,int random)
{
    int i;
    struct word * temp=*p_org;
    if(random==0)
    {
        *p_org=temp->next;
        free(temp);
        return;
    }
    for(i=0; i<random-1; i++)
    {
        temp=temp->next;
    }
    struct word* next=temp->next->next;
    free(temp->next);
    temp->next=next;
    return;
}

void play(struct word * p_org,FILE* fplayerchoice,char * playerchoice,char * playername,char * sub)
{
    time_t t=time(NULL);
    time_t first,end;
    srand(t);
    int i,wrong_guess=0,ttrue=0,j,ttime;
    float score=0,tscore=0;
    char guess;
    char eshtebah[6]= {0};
    struct word* sample=p_org;
    while(1)
    {
        int random=rand()%num_word;
        for(i=0; i<random; i++)
        {
            sample=sample->next;
        }
        for(i=0; i<strlen(sample->kalame); i++)
            printf("-");
        printf("\n");
          time(&first);
        char true_guess[50]= {0};
        while(wrong_guess<5)
        {
            fflush(stdin);
            guess=getchar();
            if(guess>=97&&guess<=122||guess>=65&&guess<=90)
            {
                system("cls");
                if(is_false(sample,guess))
                {
                    if(guess!='Q')
                    {
                        eshtebah[wrong_guess]=guess;
                        printf("Your guess is wrong!\n");
                        wrong_guess++;
                    }
                    else
                    {
                        printf("Are you sure? [y/n]\n");
                        fflush(stdin);
                        guess=getchar();
                        if(guess=='y')
                        {
                            tscore=tscore/ttime;
                            printf("Your final score is %f\n",tscore);
                            printf("Do you want to save? [y/n]\n");
                            fflush(stdin);
                            guess=getchar();
                            if(guess=='y')
                            {
                                Savegame(p_org,fplayerchoice,playername,sub,tscore);
                                printf("Good luck!!!");
                                return 0;
                            }
                            else
                            {
                                fclose(fplayerchoice);
                                printf("Good luck!!!");
                                return -1;
                            }
                        }
                        else
                        {
                            system("cls");
                            for(i=0; i<strlen(sample->kalame); i++)
                            {
                                if(true_guess[i]==NULL)
                                    printf("-");
                                else
                                    printf("%c",true_guess[i]);
                            }
                            printf("\n");
                            printf("wrong guesses: (%d/5) (%s)\n",wrong_guess,eshtebah);
                            adamak(wrong_guess);
                            continue;
                        }
                    }
                }
                else
                {
                        printf("Your guess is true!\n");
                        for(i=0; i<strlen(sample->kalame); i++)
                        {
                            if(sample->kalame[i]==guess)
                                true_guess[i]=guess;
                        }
                        ttrue++;
                }

                for(i=0; i<strlen(sample->kalame); i++)
                {
                    if(true_guess[i]==NULL)
                        printf("-");
                    else
                        printf("%c",true_guess[i]);
                }
                printf("\n");
                printf("wrong guesses: (%d/5) (%s)\n",wrong_guess,eshtebah);
                printf("\n");
                adamak(wrong_guess);
                if(strlen(true_guess)==strlen(sample->kalame))
                {
                    printf("You succeeded!!! The word was %s\n",sample->kalame);
                    break;
                }
                if(wrong_guess==5)
                {
                    printf("You lost!!! The word was %s\n",sample->kalame);
                }
            }
        }
       if(wrong_guess!=5)
       score=3*strlen(sample->kalame)-wrong_guess;
       else
        score=0;
       tscore+=score;
       printf("score is: %.0f\n",score);
       score=0;
        dltnode(&p_org,random);
        num_word--;
        wrong_guess=0;
        Sleep(2500);
        system("cls");
        fflush(stdin);
        if(num_word==0)
        {
            printf("End words of this topic...\n");
            tscore=tscore/ttime;
            printf("Your final score is %f\n",tscore);
            printf("Do you want to continue ? [y/n]\n");
            guess=getchar();
            if(guess=='n')
            {
                printf("Do you want to save? [y/n]\n");
                fflush(stdin);
                guess=getchar();
                if(guess=='n')
                {
                    fclose(fplayerchoice);
                    printf("Good Luck!!!");
                    return 0;
                }
                else
                {
                    Savegame(p_org,fplayerchoice,playername,sub,tscore);
                    fclose(fplayerchoice);
                    printf("Good Luck!!!");
                    return 0;
                }
            }
            else
            {
                printf("Do you want to save? [y/n]");
                fflush(stdin);
                guess=getchar();
                if(guess=='n')
                {
                    fclose(fplayerchoice);
                    choosetopic(playername,1);
                    return 0;
                }
                else
                {
                    Savegame(p_org,fplayerchoice,playername,sub,tscore);
                    fclose(fplayerchoice);
                    choosetopic(playername,1);
                    return 0;
                }
            }
        }
        sample=p_org;
        time(&end);
        ttime+=difftime(end,first);
        printf("Next word\n");
        for(i=0; i<5; i++)
            eshtebah[i]=0;
    }
}

void startgame(char * playername, char * sub)
{
    char playerchoice[70]=".\\";
    strcat(playerchoice,playername);
    strcat(playerchoice,"\\");
    strcat(playerchoice,sub);
    FILE* fplayerchoice=fopen(playerchoice,"r+");
    int i;
    char c;
    char kalame[50];
    struct word* p_org;
    while(1)
    {
        c=getc(fplayerchoice);
        if(c==EOF)
        {
            printf("Words of this topic have finished :-)");
            Sleep(1500);
            system("cls");
            fclose(fplayerchoice);
            choosetopic(playername,1);
            return;
        }
        else
        {
            for(i=0; c!=' '; i++)
            {
                kalame[i]=c;
                c=getc(fplayerchoice);
            }
            kalame[i]=0;
            p_org=creatnode(kalame);
            num_word++;
            break;
        }
    }
    for (i=0;; i++)
    {
        c=getc(fplayerchoice);
        if(c==EOF)
            break;
        else if(c==' ')
        {
            kalame[i]=0;
            i=-1;
            struct word* p=creatnode(kalame);
            add_end(p,p_org);
            num_word++;
        }
        else
            kalame[i]=c;
    }
    play(p_org,fplayerchoice,playerchoice,playername,sub);
}

char* choosetopic(char * playername,int is_null)
{
    printf("Please choose one topic:\n");
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int i,j;
    fflush(stdin);
    char c;
    char str[50]={".\\"};
    strcat(str,playername);
    strcat(str,"\\AVAILABLE_TOPICS.txt");
    FILE* topicfile=fopen(str,"r");
    if(topicfile==NULL)
        exit(-1);
    for(i=0;; i++)
    {
        printf("%d ->",i+1);
        while(1)
        {
            c=getc(topicfile);
            if(c=='.'||c==EOF)
                break;
            printf("%c",c);
        }
        for(j=0; j<=3; j++)
            getc(topicfile);
        printf("\n");
        if(feof(topicfile))
            break;
    }
    fseek(topicfile,0,SEEK_SET);
    if(!is_null)
    {
        int k=0;
        struct final_score save[i];
        for(j=0;j<i+1;j++)
        {
            for(k=0;;k++)
            {
                c=getc(topicfile);
                if(c=='.'||c==EOF)
                {
                    save[j].name[k]=0;
                    break;
                }
                save[j].name[k]=c;
            }
             save[j].score=0;
            c=getc(topicfile);
            c=getc(topicfile);
            c=getc(topicfile);
            c=getc(topicfile);
        }
        fseek(topicfile,0,SEEK_SET);
        char str[50]={".\\"};
        strcat(str,playername);
        strcat(str,".\\score.mra");
        FILE* ffile=fopen(str,"wb");
        fwrite(save,sizeof(struct final_score),i+1,ffile);
        fclose(ffile);
    }
    SetConsoleTextAttribute(hConsole, 11);
    char mozo[2];
    scanf("%s",mozo);
    if(mozo[0]=='Q')
    {
        printf("Good Luck!!!");
        SetConsoleTextAttribute(hConsole, 15);
        exit(-1);
    }
    subject=atoi(mozo);
    if(subject>i+1||subject<1)
    {
        printf("Invalid Input!!!");
        exit(-1);
    }
    SetConsoleTextAttribute(hConsole, 12);
    printf("GAME STARTED!!!");
    Sleep(500);
    system("cls");
    SetConsoleTextAttribute(hConsole, 15);
    char sub[50];
    for(i=1; i<subject;)
    {
        c=getc(topicfile);
        if(c=='\n')
        {
            i++;
        }
    }
    for(i=0;; i++)
    {
        c=getc(topicfile);
        if(c!='\n'&&c!=EOF)
            sub[i]=c;
        else
        {
            sub[i]=0;
            break;
        }
    }
    fclose(topicfile);
    printf(" ");
    startgame(playername,sub);
}

int newgame(char * playername)
{
    char subject[50];
    int i=0;
    char c;
    int x=_mkdir(playername);
    if(x==-1)
    {
        HANDLE  hConsole;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        printf("%s already exists!!!\nDo you want to replace it?[y/n]\n",playername);
        char test;
        fflush(stdin);
        SetConsoleTextAttribute(hConsole, 11);
        test=getchar();
        SetConsoleTextAttribute(hConsole, 15);
        if(test=='y')
        {
            char str[50]="rmdir/s/Q ";
            strcat(str,playername);
            system(str);
            _mkdir(playername);
            system("cls");
        }
        else
            return -1;
    }
    char str[50]=".\\";
    strcat(str,playername);
    strcat(str,"\\AVAILABLE_TOPICS.txt");
    FILE* playerfile=fopen(str,"w");
    FILE* topicfile=fopen(".\\TOPICS\\AVAILABLE_TOPICS.txt","r");
    while(1)
    {
        c=getc(topicfile);
        if(c==EOF)
            break;
        putc(c,playerfile);
    }
    fclose(playerfile);
    fseek(topicfile,0,SEEK_SET);
    char str_first[70]=".\\TOPICS\\";
    char str_end[70]=".\\";
    while(1)
    {
        for(i=0;; i++)
        {

            c=getc(topicfile);
            if(c==10||c==EOF)
            {
                subject[i]=0;
                break;
            }
            subject[i]=c;
        }
        strcat(str_first,subject);
        strcat(str_end,playername);
        strcat(str_end,"\\");
        strcat(str_end,subject);
        FILE* playerfile=fopen(str_end,"w");
        FILE* ffile=fopen(str_first,"r");
        while(1)
        {
            c=getc(ffile);
            if(c==EOF)
                break;
            putc(c,playerfile);
        }
        fclose(playerfile);
        fclose(ffile);
        str_first[9]=0;
        str_end[2]=0;
        if(feof(topicfile))
            break;
    }
    fclose(str_end);
    fclose(topicfile);
    int is_null=0;
    choosetopic(playername,is_null);
    return 0;
}

void prntscr(char* playername)
{
    printf("%s score is:\n",playername);
    char str[50]={".\\"};
    strcat(str,playername);
    strcat(str,"\\score.mra");
    FILE * ff=fopen(str,"rb");
    struct final_score a;
    int test;
    while(1)
    {
        test=fread(&a,sizeof(struct final_score),1,ff);
        if(test!=1)
            break;
        printf("%s  %f\n",a.name,a.score);
    }
    fflush(stdin);
    printf("\nPlease enter any key to continue\n");
    getchar();
    fflush(stdin);
    system("cls");
}

void resumegame(char * playername)
{
    int x=mkdir(playername);
    if(x==0)
    {
        printf("You have not saved anything !!!\n Please enter n to set a new game otherwise press another key to quit:\n");
        rmdir(playername);
        char c;
        HANDLE  hConsole;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 11);
        fflush(stdin);
        c=getchar();
        SetConsoleTextAttribute(hConsole, 15);
        if(c=='n')
        {
            system("cls");
            newgame(playername);
        }
        else
            return ;
    }
    int is_null=1;
     prntscr(playername);
    choosetopic(playername,is_null);
}

int main()
{
    char playername[20];
    int item;
   /* FILE * ff=fopen(".\\TOPICS\\AVAILABLE_TOPICS.txt","r");
    char c;
    while(1)
    {
        c=getc(ff);
        if(c==EOF)
            break;
        else if(c==10)
            printf("    %d \n",c);
        else
        printf("%d ",c);
    }*/
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 15);
    printf("Welcome to HANGMAN game\n");
    printf("Please enter your name:\n");
    SetConsoleTextAttribute(hConsole, 11);
    scanf("%s",playername);
    SetConsoleTextAttribute(hConsole, 15);
    printf("Hello %s :-)",playername);
    Sleep(1500);
    system("cls");
    printf("Choose one item\n");
    printf("1 -> New game\n2 -> Resume game\n3 -> Topic generator\n");
    SetConsoleTextAttribute(hConsole, 11);
    scanf("%d",&item);
    SetConsoleTextAttribute(hConsole, 15);
    Sleep(500);
    system("cls");
    if(item==1)
    {
        int x=newgame(playername);
        if(x==-1)
        {
           while(x==-1)
           {
            printf("Please enter another name:\n");
            SetConsoleTextAttribute(hConsole, 11);
            scanf("%s",playername);
            if(playername[0]=='Q')
                exit(0);
            SetConsoleTextAttribute(hConsole, 15);
            x=newgame(playername);
           }
            system("cls");
            resumegame(playername);
        }
    }
    else if(item==2)
    {
       resumegame(playername);
    }
    else if(item==3)
    {
        topic_generator(playername);
    }
    else
        printf("Invalid Input!!!");
    return 0;
}
void topic_generator(char * playername)
{
    printf("Please enter your topic name:\n");
    char topic[50];
    char str[60]={".\\TOPICS\\"};
    scanf("%s",topic);
   // char c=10;
    strcat(topic,".txt\0");
    FILE * file=fopen(".\\TOPICS\\AVAILABLE_TOPICS.txt","a");
    if(file==NULL)
        exit(-1);
    putc('\n',file);
    fprintf(file,"%s",topic);
    fclose(file);
    strcat(str,topic);
    FILE * ff=fopen(str,"w");
    char word[50]={0};
    printf("Please enter topics word (word should be ......)\n");
    while(1)
    {
        scanf("%s",word);
        if(word[0]=='Q')
        {
            break;
        }
        fprintf(ff,"%s",word);
        putc(' ',ff);
    }
fclose(ff);
}
