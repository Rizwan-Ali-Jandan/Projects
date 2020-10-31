#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace::std;
int questioncheck(char ans,char correctans);
char ansinput();
int main()
{ 
   int Qno,gamend=0,counter,runno=0,userans,corr;
   char playagain;
   int dupecheck[30];
   for(int i=0;i<30;i++)
   {
   	  dupecheck[i]=0;
   }
   while(true)
   {do
   {
   	if(runno==30)
   	{
   	 	for(int i=0;i<30;i++)
   		{
   	  		dupecheck[i]=0;
   		}
	}
	
	 srand(time(NULL));
   	 Qno=rand()%30+1;
   	 counter=0;
   	 
   	 for(int i=0;i<30;i++)
   	 {
   	    if (dupecheck[i]==Qno)
		   counter++;	
	 }
   	 
   	 if (counter!=0)
   	     continue;
   	 else
	 dupecheck[runno]=Qno;
	 gamend++;
	 
	 switch(Qno)
	 {
	 	case 1:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". What city is Hollywood located in?\na:Cannes\nb:Los Angeles.\nc:Newyork\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'b');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 2:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". The comic writer of Marvel series is?\na:Stan Lee\nb:John August\nc:Shane Black\n\nAnswer:";
	 	         userans=questioncheck(ansinput(),'a');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;	 
		case 3:	 cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". The Largest Ocean of the world is?\na:Atlantic\nb:Indian\nc:Pacific\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'c');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 4:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". The currency of Indonesia is?\na:Rupiah\nb:Riyal\nc:Rangit\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'a');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 5:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". What is a person who studies about plants called?\na:Zoologist\nb:Astronaut\nc:Botanist\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'c');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 6:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". Who is the Highest wicket taker in the history of cricket?\na:Brett Lee\nb:Muttiah Muralitharan\nc:Wasim Akram\n\nAnswer ";
	 	         userans=questioncheck(ansinput(),'b');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;		  		   
		case 7:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". The highest unit of storage nowadays is?\na:Zetta Byte\nb:Tera Byte\nc:Peta Byte\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'a');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 8:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". What company is working on making reality like video games?\na:Eye tribe\nb:Oculus Rift\nc:Google Glass\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'b');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 9:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". Which fictional character lived at 221b Baker Street?\na:Sherlock Holmes\nb:Anton Chirugh\nc:James Newton\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'b');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 10: cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". Who was the lead singer of the ban QUEEN?\na:Freddie Mercury\nb:Eddie Vedder\nc:Robert Plant\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'a');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;		  	  		  	 
			 	    
   	    case 11:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". How many points does a compass have?\na:36\nb:32\nc:16\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'b');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 12:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". What was Che Guevara's nationality?\na:Spanish\nb:Russian\nc:Argentinian\n\nAnswer:";
	 	         userans=questioncheck(ansinput(),'c');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;	 
		case 13:	 cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". Which European country eats the most chocolate per capita?\na:Englandc\nb:Germany\nc:Switzerland\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'c');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 14:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". What is the capital city of Spain?\na:Madrid\nb:Bacelona\nc:Valencia\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'a');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 15:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<".Name the number that is three more than one-fifth of one-tenth of one-half of 5,000.\na:503\nb:101\nc:53\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'c');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 16:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". What is a Geiger Counter used to detect?\na:Radiation\nb:Sound\nc:Pressure\n\nAnswer ";
	 	         userans=questioncheck(ansinput(),'a');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;		  		   
		case 17:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". Spinach is high in which mineral?\na:Iron Byte\nb:Calcium\nc:Vitamins\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'a');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 18:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". Which planet is the closest to Earth?\na:Uranus\nb:Mars\nc:Venus\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'c');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 19:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<".  In Greek mythology, who turned all that he touched into gold?\na:Zeus\nb:Midas.\nc:Thanos\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'b');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 20: cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". Who directed the movie Jaws?\na:Steven Spielberg\nb:James Cameroon.\nc:Christopher Nolan\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'a');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;		  	  		  	 
			 	    
   	    case 21:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". Coulrophobia means fear of what?\na:Sacred Things\nb:Clowns\nc:Old People\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'b');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 22:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". How many dimples are there on a regular golf ball?\na:418\nb:456\nc:336\n\nAnswer:";
	 	         userans=questioncheck(ansinput(),'c');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;	 
		case 23:	 cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". Which of the following is the longest running American animated TV show?\na:Pokemon\nb:The Simpsons\nc:Family Guy\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'b');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 24:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". How many pounds of pressure do you need to rip off your ear?\na:7\nb:8\nc:35\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'a');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 25:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<".At what temperature are Fahrenheit and Celsius the same?\na:-40\nb:-35\nc:-57\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'a');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 26:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". In what key do most American car-horns honk?\na:F\nb:C\nc:E\n\nAnswer ";
	 	         userans=questioncheck(ansinput(),'a');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;		  		   
		case 27:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". What did Groucho Marx and Winston Churchill both have in common?\na:Both men were leaders during war\nb:Both men held high political office\nc:Both smoked cigars\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'c');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 28:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". Which of the following was NOT born in Germany?\na:Willy Brandt\nb:Adolf Hitler\nc:Albert Einstein\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'b');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 29:  cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". Which illustrious family has received the most Nobel prizes in the twentieth century?\na:Pauling family\nb:Curie family.\nc:Cori family\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'b');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;
		case 30: cout<<"Input letter a, b or c for the correct answer\n\nQ"<<gamend<<". What film won the Oscar for Best Picture for 2004?\na:Million Dollar Baby.\nb:Ray.\nc:Sideways.\n\nAnswer: ";
	 	         userans=questioncheck(ansinput(),'a');
	 	         if(userans==1)
	 	         {corr++;
	 	         cout<<"Correct"<<endl;}
	 	         if(userans==0)
	 	         cout<<"Wrong";
	 	         system("pause"); system("cls");
	 	         break;		  	  		  	 
			 	}	    
   	   
   	runno++;
   
   
   }while(gamend!=10);
   cout<<"You Scored "<<corr<<" out of 10";
   cout<<"Enter Q to exit or any character to play again: ";
   cin>>playagain;
   if(playagain=='q'||playagain=='Q')
   break;
   else 
   {gamend=0;
    corr=0;}
	
}}

int questioncheck(char ans,char correctans)
{
	if(ans==correctans)
	return 1;
	else 
	return 0;
}

char ansinput()
{
	char ansin;
   while(true)
   {  
	cin>>ansin;
	if(ansin=='a'||ansin=='b'||ansin=='c')
	break;
    else
	{cout<<"Input Valid Character: ";
	continue;}}
    
    return ansin;
 
}
