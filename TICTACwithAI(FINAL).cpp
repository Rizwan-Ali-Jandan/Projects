#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string>
using namespace::std;
void gametable(char y, char x,char z,char d,char e,char f,char k,char i,char l);
void gameai(string turnsymb,string prevsymb,int prevplacing, int x,int o);
void gameai(char turnsymb,char prevsymb,int prevplacing,int x,int o);
int turnone();
int aiplay(int x, int y);
int main()
{ 
  int cnt=0,turn=0,input=0,inpu=0,check1=0,check2=0,xwin=0,owin=0,mode,count,ailoop,ywin=0,awin=0;
  char y='1',x='2',z='3',d='4',e='5',f='6', k='7',i='8',l='9';
  int array[9]={0};
do
{

cout<<"\n\t\t\t\t\t<--------WELCOME TO-------->\n\n";

cout<<" \t\t\t@@@@@  @    @   @@@@@     @@@@@  @  @@@@      @@@@@  @@   @@@@   "<<endl;
cout<<" \t\t\t  @    @    @   @           @    @  @           @   @  @  @      "<<endl; 
cout<<"  \t\t\t  @    @@@@@@   @@@@@       @    @  @           @   @@@@  @      "<<endl;
cout<<"  \t\t\t  @    @    @   @           @    @  @           @  @    @ @      "<<endl;   
cout<<"  \t\t\t  @    @    @   @@@@@       @    @  @@@@        @  @    @ @@@@   "<<endl;
cout<<"___________________________________________________________________________________________________________________"<<endl;
cout<<endl<<endl;
cout<<"Enter 1 for Player vs Player"<<endl<<"Enter 2 to play against AI"<<endl<<"----->";
cin>>mode;

  cnt=0,turn=0,input=0,inpu=0;
  system("CLS"); 
  if (mode==1) turn=turnone(); 
  y='1',x='2',z='3',d='4',e='5',f='6', k='7',i='8',l='9';
  char again;
  while(cnt<9)
    {
    	input=0;
		 while (turn==0)
    	{   if (mode==1)gameai('X','O',inpu,xwin,owin);
    	    else if(mode==2)gameai("You","Ai",inpu,ywin,awin);
		    gametable(y,x,z,d,e,f,k,i,l);
		    cout<<"<---Choose Your Move X!--->: ";
		    cin>>input;
    		system("CLS");
    	    if(input!=9&&input!=8&&input!=7&&input!=6&&input!=5&&input!=4&&input!=3&&input!=2&&input!=1){cout<<"Invalid input"<<endl; continue;}
			else if(input==1&&y!='X'&&y!='O') {y='X'; turn++;}
    		else if(input==2&&x!='X'&&x!='O') {x='X';turn++;}
    		else if(input==3&&z!='X'&&z!='O') {z='X'; turn++;}
    		else if(input==4&&d!='X'&&d!='O') {d='X'; turn++;}
    		else if(input==5&&e!='X'&&e!='O') {e='X'; turn++;}
    		else if(input==6&&f!='X'&&f!='O') {f='X'; turn++;}
    		else if(input==7&&k!='X'&&k!='O') {k='X'; turn++;}
    		else if(input==8&&i!='X'&&i!='O') {i='X'; turn++;}
    		else if(input==9&&l!='X'&&l!='O') {l='X'; turn++;}
			else cout<<"**** Box Is already filled ****"<<endl;
    		
		}
	if((y==x&&x==z)||(d==e&&e==f)||(k==i&&i==l)||(y==d&&d==k)||(x==e&&e==i)||(z==f&&f==l)||(y==e&&e==l)||(k==e&&e==z)) {if(mode==1){system("CLS");gametable(y,x,z,d,e,f,k,i,l);cout<<endl<<"X is the winner"<<endl;xwin++; break;}
	else if(mode==2){system("CLS");gametable(y,x,z,d,e,f,k,i,l);cout<<endl<<"You are the winner"<<endl;ywin++; break;}}
	if(y!='1'&&x!='2'&&z!='3'&&d!='4'&&e!='5'&&f!='6'&&k!='7'&&i!='8'&&l!='9') {system("CLS");gametable(y,x,z,d,e,f,k,i,l);cout<<"<------It's a draw------>"<<endl; break;}
	    
		while(turn==1)
    	{   if(mode==1)
		  {
			gameai('O','X',input,xwin,owin);
		    gametable(y,x,z,d,e,f,k,i,l);
		    cout<<"Choose Your Move O!: ";
		    cin>>inpu;
    		system("CLS"); 
    		if(inpu!=9&&inpu!=8&&inpu!=7&&inpu!=6&&inpu!=5&&inpu!=4&&inpu!=3&&inpu!=2&&inpu!=1){cout<<"Invalid input"<<endl; continue;}
			else if(inpu==1&&y!='X'&&y!='O') {y='O'; turn--;}
    		else if(inpu==2&&x!='X'&&x!='O') {x='O'; turn--;}
    		else if(inpu==3&&z!='X'&&z!='O') {z='O'; turn--;}
    		else if(inpu==4&&d!='X'&&d!='O') {d='O'; turn--;}
    		else if(inpu==5&&e!='X'&&e!='O') {e='O'; turn--;}
    		else if(inpu==6&&f!='X'&&f!='O') {f='O'; turn--;}
    		else if(inpu==7&&k!='X'&&k!='O') {k='O'; turn--;}
    		else if(inpu==8&&i!='X'&&i!='O') {i='O'; turn--;}
    		else if(inpu==9&&l!='X'&&l!='O') {l='O'; turn--;}
			else cout<<"<----Box is already filled---->"<<endl;}
		  
		  if(mode==2)
		  {
		  	gameai("Ai","You",input,ywin,awin);
		    gametable(y,x,z,d,e,f,k,i,l);  
		    if(y==x&&z!='X'&&z!='O'){z='O'; turn--;inpu=3;}
		    else if(z==x&&y!='X'&&y!='O'){y='O'; turn--;inpu=1;}
		    else if(y==z&&x!='X'&&x!='O'){x='O'; turn--;inpu=2;}//
		    else if (d==e&&f!='X'&&f!='O'){f='O'; turn--;inpu=6;}
		    else if (d==f&&e!='X'&&e!='O'){e='O'; turn--;inpu=5;}
		    else if (f==e&&d!='X'&&d!='O'){d='O'; turn--;inpu=4;}//
		    else if (k==i&&l!='X'&&l!='O'){l='O'; turn--;inpu=9;}
		    else if (k==l&&i!='X'&&i!='O'){i='O'; turn--;inpu=8;}
		    else if (l==i&&k!='X'&&k!='O'){k='O'; turn--;inpu=7;}//
		    else if (y==d&&k!='X'&&k!='O'){k='O'; turn--;inpu=7;}
		    else if (y==k&&d!='X'&&d!='O'){d='O'; turn--;inpu=4;}
		    else if (k==d&&y!='X'&&y!='O'){y='O'; turn--;inpu=1;}//
		    else if (x==e&&i!='X'&&i!='O'){i='O';turn--;inpu=8;}
		    else if (x==i&&e!='X'&&e!='O'){e='O';turn--;inpu=5;}
		    else if (i==e&&x!='X'&&x!='O'){x='O';turn--;inpu=2;}//
		    else if (z==f&&l!='X'&&l!='O'){l='O'; turn--;inpu=9;} 
			else if (z==l&&f!='X'&&f!='O'){f='O'; turn--;inpu=6;}
			else if (l==f&&z!='X'&&z!='O'){z='O'; turn--;inpu=3;}//
			else if (y==e&&l!='X'&&l!='O'){l='O'; turn--;inpu=9;}
			else if (y==l&&e!='X'&&e!='O'){e='O'; turn--;inpu=5;}
			else if (l==e&&y!='X'&&y!='O'){y='O'; turn--;inpu=1;}//
			else if (k==e&&z!='X'&&z!='O'){z='O'; turn--;inpu=3;}
			else if (z==e&&k!='X'&&k!='O'){k='O'; turn--;inpu=7;}
			else if (k==z&&e!='X'&&e!='O'){e='O'; turn--;inpu=5;}//
			else
			{
			
		     do
			 {inpu=aiplay(9,1);
			 count=0;
			 for(int i=0;i<9;i++)
	         {if(array[i]==inpu)count++;}
             if (count!=0)continue;
	         else {array[ailoop]=inpu; break;}
	         }while(true);
		     
    		
    		if(inpu==1&&y!='X'&&y!='O') {y='O'; turn--;}
    		else if(inpu==2&&x!='X'&&x!='O') {x='O'; turn--;}
    		else if(inpu==3&&z!='X'&&z!='O') {z='O'; turn--;}
    		else if(inpu==4&&d!='X'&&d!='O') {d='O'; turn--;}
    		else if(inpu==5&&e!='X'&&e!='O') {e='O'; turn--;}
    		else if(inpu==6&&f!='X'&&f!='O') {f='O'; turn--;}
    		else if(inpu==7&&k!='X'&&k!='O') {k='O'; turn--;}
    		else if(inpu==8&&i!='X'&&i!='O') {i='O'; turn--;}
    		else if(inpu==9&&l!='X'&&l!='O') {l='O'; turn--;}
    		else if(input>=9||input<=1){cout<<"Invalid input"<<endl; continue;}
			else cout<<"Box is already filled"<<endl;}
		    system("CLS");
				}  	
			
    		
		}
	if((y==x&&x==z)||(d==e&&e==f)||(k==i&&i==l)||(y==d&&d==k)||(x==e&&e==i)||(z==f&&f==l)||(y==e&&e==l)||(k==e&&e==z)) {if(mode==1){system("CLS");gametable(y,x,z,d,e,f,k,i,l);cout<<endl<<"O is the winner"<<endl;xwin++;break;}
	else if(mode==2){system("CLS");gametable(y,x,z,d,e,f,k,i,l);cout<<endl<<"AI WON YOU NOOB"<<endl;awin++; break;}}
	if(y!='1'&&x!='2'&&z!='3'&&d!='4'&&e!='5'&&f!='6'&&k!='7'&&i!='8'&&l!='9') {system("CLS");gametable(y,x,z,d,e,f,k,i,l); cout<<"<------It's a draw------>"<<endl; break;}
    
	}
	cout<<"The Game has ended"<<endl;

  do
  {cout<<"Enter P to play again or Q to quit";
  cin>>again;}while(again!='p'&&again!='P'&&again!='Q'&&again!='q');
  if(again=='Q'||again=='q')
  break;
  system("CLS");

}while(true);
}

void gametable(char y, char x,char z,char d,char e,char f,char k,char i,char l)
{   cout<<" ________ ________ ________\n|        |        |        |\n|   "<<y<<"    |   "<<x<<"    |   "<<z<<"    |\n|________|________|________|";
    cout<<"\n|        |        |        |\n|   "<<d<<"    |   "<<e<<"    |   "<<f<<"    |\n|________|________|________|";
    cout<<"\n|        |        |        |\n|   "<<k<<"    |   "<<i<<"    |   "<<l<<"    |\n|________|________|________|\n";
}

int turnone()
  { char symbol;
  	do
   {
    cout<<"       Who goes first? (X or O)---->: ";
  	cin>>symbol;
  	if (symbol=='X'||symbol=='x') return 0;
  	else if (symbol=='O'||symbol=='o') return 1;}
  	while(symbol!='X'||symbol!='x'||symbol!='O'||symbol!='o');
  }

void gameai(char turnsymb,char prevsymb,int prevplacing,int x,int o)
  {
  	cout<<" __ _ _ _ _ _ _ _ _ _ _ _ _\n|  <---Game Updates!--->   |\n|                          |\n|   Current turn is of "<<turnsymb<<"   |";
    cout<<"\n|                          |\n|-------<Last move>--------|";
    cout<<"\n|                          |\n|      "<<prevsymb<<" input to "<<prevplacing<<"        |\n|                          |\n|---------<SCORE>----------|";
    cout<<"\n|      x won "<<x<<" times       |\n|                          |\n";
    cout<<"|      O won "<<o<<" times       |\n|_ _ _ _ _ _ _ _ _ _ _ _ __|\n";
  }
 void gameai(string turnsymb,string prevsymb,int prevplacing,int x,int o)
  {
  	cout<<" __ _ _ _ _ _ _ _ _ _ _ _ _\n|  <---Game Updates!--->   |\n|                          |\n|   Current turn is of "<<turnsymb<<" |";
    cout<<"\n|                          |\n|-------<Last move>--------|";
    cout<<"\n|                          |\n|      "<<prevsymb<<" input to "<<prevplacing<<"       |\n|                          |\n|---------<SCORE>----------|";
    cout<<"\n|      You won "<<x<<" times     |\n|                          |\n";
    cout<<"|      Ai won "<<o<<" times      |\n|_ _ _ _ _ _ _ _ _ _ _ _ __|\n";
  }
 int aiplay(int x, int y)
{
	int numb,count=0;
	
   
	srand(time(NULL));
	numb=rand()%x+y;
	return numb;
}  
  
