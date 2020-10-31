#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<bits/stdc++.h>
#include<string>
using namespace::std;
void wordgame(string theword);
char cwac(string addedword);
int main()
{   int i=0,counter=0,mode;
    char playagain,returncwac ;
    string one="PRINCE",two="ZEBECK",three="JACKAL",four="CERVIX",five="DEFUZE",six="HUZZAS",seven="QUARTZ",eight="SYZYGY",nine="APATHY",ten="BURLED";
    string elev="CISTED",twel="ECZEMA",thirt="FORAGE",fourt="GLITCH",fift="HYMNAL",sixt="LATISH",sevent="MOPISH",eighteen="MINION",nint="NEWBIE",twen="OCELOT";
    int dupecheck [20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
	do
	{cout<<"Welcome to the best word game"<<endl;
	cout<<"Enter 1 to play:" <<endl<< "Enter 2 to go to developer options: ";
	cout<<endl<<"Enter 3 to quit: "<<endl;
	cin>>mode;
	system("cls");
	if(mode==2)
	{   int cnt=1;
	    do{
	    cout<<"<------------------------------------>\n You have entered the developer menu\n<------------------------------------>";
	    cout<<"\n\n<<<<YOU MAKE THE GAME>>>>\n";
		cout<<endl<<"You can enter 20 words or less for the player (length of word should be 6 chars)"<<endl;
		do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>one;
		returncwac=cwac(one);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A'); cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
		do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>two;
		returncwac=cwac(two);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	    
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>three;
		returncwac=cwac(three);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	    
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>four;
		returncwac=cwac(four);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	    
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>five;
		returncwac=cwac(five);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	  
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>six;
		returncwac=cwac(six);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	   
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>seven;
		returncwac=cwac(seven);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	   
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>eight;
		returncwac=cwac(eight);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	    
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>nine;
		returncwac=cwac(nine);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	    
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>ten;
		returncwac=cwac(ten);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	    
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>elev;
		returncwac=cwac(elev);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	    
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>twel;
		returncwac=cwac(twel);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	    
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>thirt;
		returncwac=cwac(thirt);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	   
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>fourt;
		returncwac=cwac(fourt);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	    
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>fift;
		returncwac=cwac(fift);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	    
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>sixt;
		returncwac=cwac(sixt);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	   
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>sevent;
		returncwac=cwac(sevent);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	    
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>eighteen;
		returncwac=cwac(eighteen);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	    
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>nint;
		returncwac=cwac(nint);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='Q'||returncwac=='q')break;
	    
	    do{
		cout<<"Enter word no "<<cnt<<" :";
		cin>>twen;
		returncwac=cwac(twen);}
		while(returncwac!='Q'&&returncwac!='q'&&returncwac!='a'&&returncwac!='A');cnt++;
		if(returncwac=='A'||returncwac=='a')cout<<"No more space"<<endl;
		while(returncwac!='Q'&&returncwac!='q')
		{cout<<"Enter Q to return to main menu: ";
		 cin>>returncwac;}break;}
	
		while(true); system("cls");}
	
	else if(mode!=2&&mode!=1&&mode!=3)
	cout<<"Enter valid no: ";
   
   else if(mode==1)
  {
	do
	{
	  
	  if ((i%20)==0)            //change 5 to no of words;
	  {
	  	for(int re=0;re<20;re++)
	  	{
	  		dupecheck[re]=0;
		  }
	  }
	  int wordno;
	 srand(time(NULL));
	 wordno=rand()%20+1;
	 //cout<<wordno<<endl;
	 counter=0;
	 
	 
	 for(int chkr=0;chkr<20;chkr++)
	 {
	 	if(wordno==dupecheck[chkr])
	 	counter=counter+1;
	 }
	 
    if(counter==1)
    continue;
    else
    dupecheck[i]=wordno;
	
     i++;
     
      /*for(int v=0;v<10;v++)
      {
    	cout<<dupecheck[v];
	  }*/
    
	switch (wordno)
	{
		case 1: wordgame(one);
		        break;
	    case 2: wordgame(two);
	            break;
		case 3: wordgame(three);
			    break;        
	    case 4: wordgame(four);
				break;
		case 5: wordgame(five);
		        break;
		case 6: wordgame(six);
		        break;
		case 7: wordgame(seven);
		        break;
		case 8: wordgame(eight);
		        break;     
	    case 9: wordgame(nine);
		        break;
	    case 10: wordgame(ten);
		        break;
	    case 11: wordgame(elev);
		        break;
	    case 12: wordgame(twel);
		        break; 
        case 13: wordgame(thirt);
		        break;
	    case 14: wordgame(fourt);
		        break;
	    case 15: wordgame(fift);
		        break;
	    case 16: wordgame(sixt);
		        break;
	    case 17: wordgame(sevent);
		        break;
	    case 18: wordgame(eighteen);
		        break;
	    case 19: wordgame(nint);
		        break;
	    case 20: wordgame(twen);
		        break;
	
	
	
	
	}
	
	while(true)                                                                 //looptogiveoption to quit or play again. Breaks the dowhile statement when user enters q/Q.
	{
	 cout<<endl<<"Enter P to play again or Q to quit: ";
	 cin>>playagain; 
	 system("cls");
	 if(playagain!='P'&&playagain!='p'&&playagain!='Q'&&playagain!='q') continue; 
	 else break;}
	}while(playagain!='Q'&&playagain!='q');
      
  }}while(mode!=3);


}

void wordgame(string theword)
{
	int turn=0;
	char letter,ans;
	char word[6];
	strcpy(word,theword.c_str());
	
	for(int i=0;i<6;i++)
	{   
		if (i==1)
		cout<<"_";
		else
		cout<<word[i];
	}

   cout<<"(Guess the missing letter / alphabet)"<<endl<<"Options are : A to Z OR a to z"<<endl<<"You have only five turns";
   
    while(turn<5)
    {
    	cout<<endl<<"turn no "<<turn+1<<":";
		cin>>letter;
		ans=word[1];
		
    	if(ans>=65&&ans<=90)
		{if (letter==ans||letter==(ans+32))
		{
			cout<<endl<<"<-------------->\n"<<" You won!"<<endl<<"<-------------->\n";
			return;
		 }} 
		 
		else if(ans>=97&&ans<=122)
		{
		   if (letter==ans||letter==(ans-32))
		   {
			cout<<endl<<"<-------------->\n"<<" You won!"<<endl<<"<-------------->\n";
			return;}
		 } 
	    cout<<"Wrong"<<endl<<endl;
		turn++;
	}

    cout<<endl<<"<-------------->\n"<<" You Lost!"<<endl<<"<-------------->\n";
    
}

char cwac(string addedword)   //function check word and continue )cwac.
{
	int length;
	char option;
	length=addedword.length();
	if (length>6||length<6)
	{
		cout<<"The word you entered was invalid "<<endl;
		cout<<"Enter Valid Word!"<<endl;
		return '0';
	}
    do{
	cout<<"Enter A to add another word or Q to exit: ";
	cin>>option;}
	while(option!='A'&&option!='a'&&option!='Q'&&option!='q');
	return option;

}
