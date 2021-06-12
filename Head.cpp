//for user defined functions
#include "Head.h"  
// for input & output  
#include <iostream> 
// for system clear
#include <stdlib.h> 
// for strings & related built-in functions
#include <string>  d
// for text file
#include <fstream> 
//for sleep         
#include <unistd.h>   
//for threads     
#include <pthread.h>  
 //for timestamp    
#include <chrono>       
#include <ctime>   
//for Sound effects     
#include<windows.h>    
#include "mmsystem.h"    

using std::string;
using namespace std;

char menuChoice;
char answer;
int categoryChoice;
int highestScore =0;
int userScore =0;
int userScore2 =0;
int Play[10];
string username;
string stamp;



struct data {

string question;
string choiceA;
string choiceB;
string choiceC;
string choiceD;

};

struct questions {
	string ques;
	string ansA;
	string ansB;
	string ansC;
	string ansD;
} movie1[10], movie2[10],tech1[10], tech2[10];



//class storing & displaying questions for both rounds for category the land of olives
class ThelandofOlives
  {
      private:
          

          void q1()
          {
              cout << "Q1: Which of the following isn't the name of the capital of FREE PALESTINE?"<<endl<<endl;
              cout << "   A.  Jerusalem  "<<endl;
 		      cout << "   B.  occupied Jerusalem "<<endl;
 		      cout << "   c.  yerushalaim      "<<endl;
 		      cout << "   D.  Al-Quds \n"<<endl;
            
 		  char answer1;
          char correctAnswer = 'C';
          
           cout << "\t";    cin>>answer1;
           

           answer1=toupper(answer1);
           

           if (answer1=='C'){      // all of the above
            userScore+=2;
            PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);
            cout<<"----------------------------------------";
            q2();
           }
           else
           {
		    PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
		   check(correctAnswer,answer1);
		   cout<<"----------------------------------------";
            q2();
           }
          }

            void q2()
            {
            cout << endl<<endl<<"Q2: What was the currency used in Palestine in  the past?"<<endl<<endl;
            cout << "  A. Dinar "<<endl;
 		    cout << "  B. Shekel"<<endl;
 		    cout << "  C. Lira" <<endl;
 		    cout << "  D. Pound \n"<<endl;
            
 
 		   char answer2;
           char correctAnswer='D';
            cout<<"\t";    cin>>answer2;
            
            answer2=toupper(answer2);

            if (answer2=='D'){       //pound
            userScore+=2;
             PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);
             cout<<"----------------------------------------";
            q3();
           }
           else
           {
		   PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
		   check(correctAnswer,answer2);
		   cout<<"----------------------------------------";
            q3();
           }
         }

          void q3()
          {
          cout << endl<<endl<<"Q3: When was the NAKBAH?"<<endl<<endl;
          cout << "  A. 1967"<<endl;
 		  cout << "  B. 1948 "<<endl;
 		  cout << "  C. 1940 "<<endl;
 		  cout << "  D. 1946 \n"<<endl;

 		  char answer3;
          char correctAnswer='B';
          
           cout<<"\t";    cin>>answer3;
           answer3=toupper(answer3);

          if (answer3=='B'){     //1948
          
           PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);
            userScore+=2;
            cout<<"----------------------------------------";
           q4();
           }
           else
           {
		   PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
		   check(correctAnswer,answer3);
		   cout<<"----------------------------------------";
           q4();
           }
         }


          void q4()
          {
          cout << endl<<endl<<"Q4: What was the first country to recognize the Zionist occupation?"<<endl<<endl;
          cout << " A. France"<<endl;
 		  cout << " B. Russia "<<endl;
 		  cout << " C. Germany "<<endl;
 		  cout << " D. None of the above \n"<<endl;

 		 char answer4;
 		 
           char correctAnswer='D';
          cout<<"\t";    cin>>answer4;
          answer4=toupper(answer4);

      	 if (answer4=='D'){      //united states
      	  PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);
            userScore+=2;
            cout<<"----------------------------------------";
            q5();
           }
           else
           {
		   PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
		   check(correctAnswer,answer4);
		   cout<<"----------------------------------------";
            q5();
           }
         }

             void q5()
          {
            cout << endl<<endl<<"Q5: Where is the city of (Bi'r al-saba'a) located in relation to Palestine?"<<endl<<endl;
            cout << "  A. South "<<endl;
 		    cout << "  B. North"<<endl;
 		    cout << "  C. West "<<endl;
 		    cout << "  D. East \n"<<endl;

 		  char answer5;
          char correctAnswer='A';
          
           cout<<"\t";    cin>>answer5;
           answer5=toupper(answer5);

           if (answer5=='A'){             //  south
           
            PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);
             userScore+=2;
             }
             
             
            else { 
               PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
               check(correctAnswer,answer5);
               
               
             }
             
            if(userScore>=6){
                  startRound2();
                  q6();
                  }
                  
            else {
                      {
          fstream myFile;
          myFile.open("userData.txt",ios::out |ios::app);//write
          if(myFile.is_open()){
          myFile<<"\n"<<"\t \t \t"<< "Warmup Score: " << userScore<<endl<<endl;
          myFile.close();}}
          
          system ("cls");
                    ooopsEnd(); 
					 
                  }
           }



             void q6()
          {
            cout << endl<<endl<<"Q6: What is the Palestinian city that is called (Little Damascus)?"<<endl<<endl;
            cout << "  A. Nables "<<endl;
 		    cout << "  B. Tulkarem "<<endl;
 		    cout << "  C. Ramallah "<<endl;
 		    cout << "  D. Lud \n "<<endl;

 		   char answer6;
           char correctAnswer='A';
              
            cout<<"\t";    cin>>answer6;
            answer6=toupper(answer6);

           if (answer6=='A'){       //Nables
           
             PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);
             userScore2+=2;
             cout<<"----------------------------------------";
             q7();
            }
           else
            {
			PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
			check2(correctAnswer,answer6);
			cout<<"----------------------------------------";
            q7();
           }
         }

                void q7()
          {
            cout << endl<<endl<<"Q7: What of the following was the second country to recognize the Zionist occupation?"<<endl<<endl;
            cout << "  A. United states of America "<<endl;
 		    cout << "  B. Russia "<<endl;
 		    cout << "  C. Italy "<<endl;
 		    cout << "  D. England \n"<<endl;
        
 		   char answer7;
           char correctAnswer='B';
           
            cout<<"\t";    cin>>answer7;
            answer7=toupper(answer7);

            if (answer7=='B'){  //Russia
            
             PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);
             userScore2+=2;
             cout<<"----------------------------------------";
             q8();
            }
           else
            {
			PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
			check2(correctAnswer,answer7);
			cout<<"----------------------------------------";
            q8();
           }
         }

             void q8()
          {
            cout << endl<<endl<<"Q8: Where is the city of (Kafr Qassem) located in relation to Palestine?"<<endl<<endl;
            cout << "  A. West "<<endl;
 		    cout << "  B. East "<<endl;
			cout << "  C. South"<<endl;;
 		    cout << "  D. North \n"<<endl;

 		   char answer8;
           char correctAnswer='D';
           
            cout<<"\t";    cin>>answer8;
            answer8=toupper(answer8);

            if (answer8=='D'){   //North
            
             PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);
             userScore2+=2;
             cout<<"----------------------------------------";
             q9();
           }
           else
           {
		   PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
		   check2(correctAnswer,answer8);
		   cout<<"----------------------------------------";
            q9();
           }
         }

             void q9()
          {
            cout << endl<<endl<<"Q9: How many palestinians families face ethnic cleansing in (Silwan)"<<endl<<endl;
            cout << "  A. 230 "<<endl;
 		    cout << "  B. 160"<<endl;
 		    cout << "  C. 70 "<<endl;
 		    cout << "  D. 200 \n"<<endl;

 	        char answer9;
            char correctAnswer='A';
            
             cout<<"\t";    cin>>answer9;
             answer9=toupper(answer9);

            if (answer9=='A'){   //230
             PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);
             userScore2+=2;
             cout<<"----------------------------------------";
             q10();
           }
           else
           {
		   PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
		   check2(correctAnswer,answer9);
		   cout<<"----------------------------------------";
            q10();
           }
         }

              void q10()
          {
            cout << endl<<endl<<"Q10: What is the wall under the full control of the oppressor?"<<endl<<endl;
            cout << "  A. Wailing wall "<<endl;
 		    cout << "  B. Hadrian's wall "<<endl;
 		    cout << "  C. City wall "<<endl;
 		    cout << "  D. All of the above \n "<<endl;

 		   char answer10;
           char correctAnswer='A';
           
            cout<<"\t";    cin>>answer10;
            answer10=toupper(answer10);
            
            
             if (answer10=='A'){   // Boraq / wailing wall
             
              PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);
             userScore2+=2;    
             }
			 else{ 
			 PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
			 cout<<"----------------------------------------";
			 }
            
           if(userScore2>=6){
           	
           	    userScore2 += userScore;
          {
             fstream myFile;
             myFile.open("userData.txt",ios::out |ios::app);//write
             if(myFile.is_open()){
             myFile <<"\t \t \t" << "Final Score: "<<userScore2 <<endl;
             myFile.close();}
              
          }
           	
              finalRound();
            }
           else {check2(correctAnswer,answer10);
             ooopsEnd();
           }
          }


  public:
      void startGame()
      {
          countDown ();
          
         q1();
         q6();
      }
  };
 
 
    
void artRound_1(){
	
string questions_round1[5]={
	
     "Who painted the Mona liza?",
     "How many times was the mona liza stolen?",
     "In which city is the Louvre art museum?",
     "Which of the folowing is a primary color?", 
     "In which city would you find van gogh museum?"
   };
  
string options[5][4]={
	
       {"Leonardo Da Vinci","Claude Monte","Kandinsky","Francaise Gilot"},
       {"Twice","Trice","Once","None"},
       {"London","Paris","NYC","Toronto"},
       {"Black","White","Red","Green"},
       {"Amesterdam","London","LA","Rome"}
   };
    char useroption[5] = {0,0,0,0,0};
    int totalquestions = 5;
    char iscorrect[5] = {'A','C','B','C','A'};
    
    
   system("cls");
   
   
   for(int i=0;i<totalquestions;i++)
   {
      
       cout << "Q" <<(i+1)<<": "<<questions_round1[i]<<endl;
       cout << "  A. "<<options[i][0]<<endl;
       cout << "  B. "<<options[i][1]<<endl;
       cout << "  C. "<<options[i][2]<<endl;
       cout << "  D. "<<options[i][3]<<endl<<endl;
       cout << "\t";
	   cin >> useroption[i];
      
      useroption[i] = toupper(useroption[i]);
      check(iscorrect[i],useroption[i]);
      
      if(useroption[i] == iscorrect[i]){
      	
      	 PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);
         userScore+=2;
         }
         
         else{
         	PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
		 }
        cout<<"----------------------------------------"<<endl<<endl;
   }
   
   if(userScore >= 6){
       startRound2();
       artRound_2();
       
       
   }
       else {
                      {
          fstream myFile;
          myFile.open("userData.txt",ios::out |ios::app);//write
          if(myFile.is_open()){
          myFile<<"\n"<<"\t \t \t" << "Warmup Score: "<< userScore<<endl<<endl;
          myFile.close();}}
          
          system ("cls");
                    ooopsEnd(); 
}
}
  
  
      
  void artRound_2(){
  	
   string question_round2[5]={
   	
       "Which artist was the first to have his art displayed in the louvre?",
       "Definition of art in the 21 st century devalued primarly which concept?",
       "In music what does forte mean?",
       "How many paintings did van gogh sell during his life time?",
       "Who created the famous sclupture the Thinkers?"
	};
  
  string options2[5][4]={
  	
       {"George Monte","Edvard Munch","Francis Bacon","Auguste Roden"},
       {"Technical skil","Beauty","Artist Agency","Abstraction"},
       {"Loud","Fast","Soft","Slow"},
       {"200","27","18","1"},
       {"Michael Angelo","Mark Haddon","Auguste Roden","Picasso"}
   };
    char useroption[5]={0,0,0,0,0};
    int totalquestions=5;
    char iscorrect2[5]={'A','B','A','D','C'};
      
   system("cls");
 
   
   for(int i=0;i<totalquestions;i++)
   {
      
       cout << "Q" <<(i+1)<<": "<<question_round2[i]<<endl;
       cout << "  A. "<<options2[i][0]<<endl;
       cout << "  B. "<<options2[i][1]<<endl;
       cout << "  C. "<<options2[i][2]<<endl;
       cout << "  D. "<<options2[i][3]<<endl<<endl;
       
       cout << "\t"; 
	   cin  >> useroption[i];
	   
      useroption[i] = toupper(useroption[i]);
      check2(iscorrect2[i],useroption[i]);
      
      if(useroption[i] == iscorrect2[i]){
      	
      	 PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);
         userScore2+=2;
         
      }
      
      else{
         	PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
		 }
     cout<<"----------------------------------------"<<endl<<endl;
   }
   
   if(userScore2 >= 6){
           	
           	    userScore2 += userScore;
          {
             fstream myFile;
             myFile.open("userData.txt",ios::out |ios::app);
             if(myFile.is_open()){
             myFile <<"\t \t \t"<<"Final Score: "<<userScore2 <<endl;
             myFile.close();}
              
          }
          finalRound();
            }
            
    else {
             ooopsEnd();
           }
          } 

 

void wildLife (){
    
data round1[10];	
	
round1 [0] = {"Q1: How many legs does an octopus have ?","  A. Eight ","  B. Seven","  C. Six ","  D. Five \n"};

round1 [1] = {"Q2: What is a baby sheep called ? ","  A. Cub  ","  B. Calf ","  C. Lamp  ","  D. None of the above  \n"};

round1 [2] = {"Q3: Which is the fastest animal?","  A. Lion  ","  B. Tiger ","  C. Cheetah  ","  D. Falcon  \n"};

round1 [3] = {"Q4: Which bird lays the largest egg ?","  A. Chicken  ","  B. Falcon ","  C. Ostrich  ","  D. Duck \n"};

round1 [4] = {"Q5: Which animal is kanown as a man's bestfriend ?","  A. Cat  ","  B. Dog","  C. Rabbit  ","  D. Horse  \n"};

char correct[10]{'A','C','C','B','B'};

    for (int i = 0; i < 5; ++i) {
        cout << round1[i].question <<endl<<endl;
        cout << round1[i].choiceA <<endl;
        cout << round1[i].choiceB <<endl;
        cout << round1[i].choiceC <<endl;
        cout << round1[i].choiceD <<endl<<endl;
        cout <<"\t";
        
		cin  >> answer;
		answer=toupper(answer);
		check(correct[i],answer);
		
		if (correct[i]==answer){
			
			 PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);
		    userScore+=2;
		}
		
		else{
         	PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
		 }
		cout<<"----------------------------------------"<<endl<<endl;
    }
       if(userScore>=6){
       startRound2();
       wildLife2();
       
       
   }
       else {
                      {
          fstream myFile;
          myFile.open("userData.txt",ios::out |ios::app);//write
          if(myFile.is_open()){
          myFile << "\n"<<"\t \t \t" << "Warmup Score: "<< userScore<<endl<<endl;
          myFile.close();}}
          
          system ("cls");
                    ooopsEnd(); 
}
}

//function storing & displaying round 2 questions for the category wild life
void wildLife2(){
	
data round2[10];
	
round2 [0] = {"Q1: Which animal can see  its four feet ? ","  A. Horse  ","  B. Donkey ","  C. Cow  ","  D. Camel  \n"};	

round2 [1] = {"Q2: Which is the fastest bird in the world ?","  A. Falcon  ","  B. Eagle ","  C. Ostrich  ","  D. None of the above  \n"};

round2 [2] = {"Q3: Which dog breed has the best sense of smell?","  A. Beagle  ","  B. The blood hound ","  C. German Shepard  ","  D. All of the above \n"};

round2 [3] = {"Q4: What sea creature is a blue whale's favourite meal ?","  A. Krill  ","  B. Fish ","  C. Shrimp  ","  D. Salmon\n"};

round2 [4] = {"Q5: Which mammal lives the longest ?","  A. Lion  ","  B. Dinossaur ","  C. Whale  ","  D. Horse  \n"};


char correct[10]{'B','A','D','A','C'};

    for (int i = 0; i < 5; ++i) {
    	
        cout << round2[i].question <<endl<<endl;
        cout << round2[i].choiceA <<endl;
        cout << round2[i].choiceB <<endl;
        cout << round2[i].choiceC <<endl;
        cout << round2[i].choiceD <<endl<<endl;
        cout <<"\t";
        
		cin  >> answer;
		answer=toupper(answer);
		check(correct[i],answer);
		
		if (correct[i]==answer){
			
			 PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);
		    userScore2+=2;
		}
		
		else{
         	PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
		 }
		cout<<"----------------------------------------"<<endl<<endl;
    }
    if(userScore2>=6){
           	
           	    userScore2 += userScore;
          {
             fstream myFile;
             myFile.open("userData.txt",ios::out |ios::app);
             if(myFile.is_open()){
             myFile <<"\t \t \t"<<"Final Score: "<<userScore2 <<endl;
             myFile.close();}
              
          }
          finalRound();
            }
           else {
             ooopsEnd();
           }
          } 



void  movies_round1() {
	movie1[0].ques = "In The Dark Knight Rises, what was initially Selina Kyle's ultimate goal?";
	movie1[0].ansA = "To steal a large diamond that belonged to Bruce Wayne's mother";
	movie1[0].ansB = "To help Bane get back into the League of Shadows";
	movie1[0].ansC = "To erase her criminal history";
	movie1[0].ansD = "Do the one heist that would set her up for life";

	movie1[1].ques = "In The Princess and the Frogs, what did Charlotte ask Tiana to make her for the ball?";
	movie1[1].ansA = "Beignets";
	movie1[1].ansB = "Gumbo";
	movie1[1].ansC = "Bananas Foster";
	movie1[1].ansD = "Jambalaya";

	movie1[2].ques = "What was the first movie in the Marvel Cinematic Universe?";
	movie1[2].ansA = "Spider-Man";
	movie1[2].ansB = "Iron Man";
	movie1[2].ansC = "The Avengers";
	movie1[2].ansD = "Batman";

	movie1[3].ques = "In the movie 'Frozen', who is Olaf?";
	movie1[3].ansA = "Knight";
	movie1[3].ansB = "Reindeer";
	movie1[3].ansC = "Ghost";
	movie1[3].ansD = "Snowman";

	movie1[4].ques = "In which form did 'The Jungle Book' originally appear?";
	movie1[4].ansA = "Book";
	movie1[4].ansB = "Film";
	movie1[4].ansC = "Radio Play";
	movie1[4].ansD = "An App";

	char correct[10]{'C','B','B','D','A'};
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Q" <<(i+1)<<": "<< movie1[i].ques <<endl<<endl;
		cout << "  A. " << movie1[i].ansA << endl;
		cout << "  B. " << movie1[i].ansB << endl;
		cout << "  C. " << movie1[i].ansC << endl;
		cout << "  D. " << movie1[i].ansD << endl<<endl;
		cout <<"\t";
		
		cin  >> answer;
		answer=toupper(answer);
		check(correct[i],answer);
		
		if (correct[i]==answer){
			
			 PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);
		    userScore+=2;
		}
		
		else{
         	PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
		 }
		 
		cout<<"----------------------------------------"<<endl<<endl;
	}
	if (userScore>=6){
       startRound2();
       movies_round2();
       }
       
    else {
                      {
          fstream myFile;
          myFile.open("userData.txt",ios::out |ios::app);//write
          if(myFile.is_open()){
          myFile << "\n"<<"\t \t \t" << "Warmup Score: "<< userScore<<endl<<endl;
          myFile.close();}}
          
          system ("cls");
                    ooopsEnd(); 
}
	
}



void movies_round2() {
	
	movie2[0].ques = "What year did the movie 'Titanic' come out in theaters ? ";
	movie2[0].ansA = "1912";
	movie2[0].ansB = "1994";
	movie2[0].ansC = "1977";
	movie2[0].ansD = "1997";
	
	movie2[1].ques = "In Home Alone 2: Lost in New York, Kevin checks into which iconic hotel?";
	movie2[1].ansA = "Waldorf Astoria";
	movie2[1].ansB = "The Plaza";
	movie2[1].ansC = "St. Regis";
	movie2[1].ansD = "The four seasons";

	movie2[2].ques = "'In The Little Mermaid: 'how long did Ursula tell Ariel she would make her into a human for?";
	movie2[2].ansA = "24 hours";
	movie2[2].ansB = "2 Days";
	movie2[2].ansC = "3 Days";
	movie2[2].ansD = "5 Days";

	movie2[3].ques = "In final D1, Clear was supposed to ........ in the plane";
	movie2[3].ansA = "Burn";
	movie2[3].ansB = "Suffocate";
	movie2[3].ansC = "get impaled";
	movie2[3].ansD = "Fall of the plane";

	movie2[3].ques = "In Final Destination 1, who has a vision?";
	movie2[3].ansA = "Clear";
	movie2[3].ansB = "Alex";
	movie2[3].ansC = "Billy";
	movie2[3].ansD = "Kerry";

	movie2[4].ques = "Which book is NOT a title of a book in the Twilight series?";
	movie2[4].ansA = "New Moon";
	movie2[4].ansB = "Midnight";
	movie2[4].ansC = "Twilight";
	movie2[4].ansD = "Eclipse";

	
	char correct[10]{'B','C','A','B','B'};
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Q" <<(i+1)<<": "<< movie2[i].ques <<endl<<endl;
		cout << "  A. " << movie2[i].ansA << endl;
		cout << "  B. " << movie2[i].ansB << endl;
		cout << "  C. " << movie2[i].ansC << endl;
		cout << "  D. " << movie2[i].ansD << endl<<endl;
		cout <<"\t";
		
		cin  >> answer;
		answer=toupper(answer);
		check(correct[i],answer);
		
			if (correct[i]==answer){
				
			 PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);	
		    userScore2+=2;
		}
		
		else{
         	PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
		 }
		
		cout<<"----------------------------------------"<<endl<<endl;
    }
    if(userScore2>=6){
           	
           	    userScore2 += userScore;
          {
             fstream myFile;
             myFile.open("userData.txt",ios::out |ios::app);
             if(myFile.is_open()){
             myFile <<"\t \t \t"<<"Final Score: "<<userScore2 <<endl;
             myFile.close();}
              
          }
          finalRound();
            }
           else {
             ooopsEnd();
           }

}

//function storing & displaying round 1 questions for the category technology

void Technology_round1() {
	tech1[0].ques = "What does OS stand for?";
	tech1[0].ansA = "Order of significance";
	tech1[0].ansB = "Open Software";
	tech1[0].ansC = "Operating system";
	tech1[0].ansD = "Optical sensor";

	tech1[1].ques = "What is the temporary memory of the computer?";
	tech1[1].ansA = "ROM";
	tech1[1].ansB = "Secondary memory";
	tech1[1].ansC = "Primary memory";
	tech1[1].ansD = "RAM";

	tech1[2].ques = "1GB is equal to?";
	tech1[2].ansA = "1250 megabytes";
	tech1[2].ansB = "1296 megabytes";
	tech1[2].ansC = "1150 megabytes";
	tech1[2].ansD = "1024 megabytes";

	tech1[3].ques = "What is the memory that starts the computer?";
	tech1[3].ansA = "Read only memory";
	tech1[3].ansB = "Random access memory";
	tech1[3].ansC = "Local area network";
	tech1[3].ansD = "Operating system";

	tech1[4].ques = "What does e-mail stand for?";
	tech1[4].ansA = "Emergency mail";
	tech1[4].ansB = "Electronic mail";
	tech1[4].ansC = "Extra mail";
	tech1[4].ansD = "External mail";

	
	char correct[10]{'C','D','D','A','B'};
	
		for (int i = 0; i < 5; i++)
	{
		cout << "Q" <<(i+1)<<": "<< tech1[i].ques << endl<<endl;
		cout << "  A. " << tech1[i].ansA << endl;
		cout << "  B. " << tech1[i].ansB << endl;
		cout << "  C. " << tech1[i].ansC << endl;
		cout << "  D. " << tech1[i].ansD << endl<<endl;
		cout <<"\t";
		
		cin  >> answer;
		answer=toupper(answer);
		check(correct[i],answer);

		if (correct[i]==answer){
			
			 PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);
		    userScore+=2;
		}
		
		else{
         	PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
		 }
		 
		cout<<"----------------------------------------"<<endl<<endl;}
		
		if(userScore>=6){
       startRound2();
       Technology_round2();
       }
       else {
                      {
          fstream myFile;
          myFile.open("userData.txt",ios::out |ios::app);//write
          if(myFile.is_open()){
          myFile << "\n"<<"\t \t \t" << "Warmup Score: "<< userScore<<endl<<endl;
          myFile.close();}}
          
          system ("cls");
                    ooopsEnd(); 
}
	
}

void Technology_round2() {
	
	tech2[0].ques = "Which one is the first fully supported 64-bit operating system?";
	tech2[0].ansA = "Windows Vista";
	tech2[0].ansB = "Mac";
	tech2[0].ansC = "Linux";
	tech2[0].ansD = "Windows XP";

	tech2[1].ques = "Computer Hard Disk was first introduced in 1956 by?";
	tech2[1].ansA = "Dell";
	tech2[1].ansB = "Apple";
	tech2[1].ansC = "Microsoft";
	tech2[1].ansD = "IBM";

	tech2[2].ques = "Which one of the followings is a programming language?";
	tech2[2].ansA = "HTTP";
	tech2[2].ansB = "HTML";
	tech2[2].ansC = "HPML";
	tech2[2].ansD = "FTP";

	tech2[3].ques = "Which key combination is used to minimize all open windows and displays in the screen?";
	tech2[3].ansA = "Alt+M";
	tech2[3].ansB = "Shift+M";
	tech2[3].ansC = "Windows Key+D";
	tech2[3].ansD = "CTRL+D";

	tech2[4].ques = "What is the total number of function keys in a computer keyboard?";
	tech2[4].ansA = "10";
	tech2[4].ansB = "12";
	tech2[4].ansC = "14";
	tech2[4].ansD = "8";

	
     char correct[10]{'C','D','B','C','B'};
	
		for (int i = 0; i < 5; i++)
	{
		cout << "Q" <<(i+1)<<": "<< tech2[i].ques <<endl<<endl;
		cout << "  A. " << tech2[i].ansA << endl;
		cout << "  B. " << tech2[i].ansB << endl;
		cout << "  C. " << tech2[i].ansC << endl;
		cout << "  D. " << tech2[i].ansD << endl<<endl;
		cout<<"\t";
		cin >> answer;
		answer=toupper(answer);
		check(correct[i],answer);
		
			if (correct[i]==answer){
				
			 PlaySound(TEXT("Correct answer.wav"), NULL, SND_FILENAME);	
		     userScore2+=2;
		}
		
		else{
         	PlaySound(TEXT("ohnoo.wav"), NULL, SND_FILENAME);
		 }
	
		cout<<"----------------------------------------"<<endl<<endl;
	}
    if(userScore2>=6){
           	
           	    userScore2 += userScore;
          {
             fstream myFile;
             myFile.open("userData.txt",ios::out |ios::app);
             if(myFile.is_open()){
             myFile <<"\t \t \t"<<"Final Score: "<<userScore2 <<endl;
             myFile.close();}
              
          }
          finalRound();
            }
           else {
             ooopsEnd();
           }
}

          
string timestamp(string &stamp){
	
auto timenow =
chrono::system_clock::to_time_t(chrono::system_clock::now());
stamp=ctime(&timenow) ;
  
    return stamp;
}


int checkCategory (int &categoryChoice){

system("cls");

while(categoryChoice!=1 && categoryChoice!=2 && categoryChoice!=3 && categoryChoice!=4 && categoryChoice!=5){

          cout << "Invalid Entry !\n"<<endl;
          cout<<"> Press 1 for ¬ The land of Olives"<<endl;
          cout<<"> Press 2 for ¬ Technology"<<endl;
          cout<<"> Press 3 for ¬ Wild life"<<endl;
          cout<<"> Press 4 for ¬ Movies"<<endl;
          cout<<"> Press 5 for ¬ Art"<<endl;
          
  cout<<"\t";
  cin >> categoryChoice;

}
return 0;
   }


char checkChoice (char &menuChoice){

   system("cls");

   while(menuChoice!='S' && menuChoice!='Q' && menuChoice!='V' && menuChoice!='H' && menuChoice!='M' && menuChoice!='C'){

     system("cls");

     cout << "Invalid Entry !\n"<<endl;
     cout << "> Press S to start the game"<<endl;
     cout << "> Press Q to quit the game"<<endl;
     cout << "> Press V to view the scoreBoard "<<endl;
     cout << "> Press M to return to main menu"<<endl;
     cout << "> Press H for Help"<<endl;
     
     cout<<"\t";
     cin>>menuChoice;
     
     menuChoice=toupper(menuChoice);
     
     
     if (menuChoice=='S'||menuChoice=='Q'||menuChoice=='V'||menuChoice=='H'||menuChoice=='M'){

      if (menuChoice == 'S')
      categoryMenu();
      break;

      if (menuChoice == 'Q')
      _Exit(menuChoice);
      break;

      if (menuChoice == 'V')
      scoreBoard();
      break;

      if (menuChoice == 'H')
      help();
      break;

      if (menuChoice == 'M'){
      	
      	{ fstream myFile;
          myFile.open("userData.txt",ios::out |ios::app);//write
          if(myFile.is_open()){   
          myFile<<"\n"<< "Warmup Score: " << userScore <<"\t \t \t";
          myFile.close();}}
          
          mainHome();
          break;
	  }
      
      
      
      if (menuChoice == 'C'){
                   startRound2();
                   break;
                   
                  }
      

    }
   }
   system ("cls");
   return 0;
      }

char check (char &correctAnswer, char &answer){

      while(answer!='A'&&answer!='B'&&answer!='C' && answer!='D'){

      cout << "Invalid choice !\n"<<"please enter A,B,C or D"<<endl;
      cout << "\t";
      
	  cin  >> answer;
      answer=toupper(answer);
      if (answer=='A'||answer=='B'||answer=='C'||answer=='D'){

          if (answer==correctAnswer){userScore+=2;}
            break;
       }
      }
      return 0;
         }
         
char check2 (char &correctAnswer, char &answer){

      while(answer!='A'&&answer!='B'&&answer!='C' && answer!='D'){

      cout << "Invalid choice !\n" << "please enter A,B,C or D" << endl;
      cout << "\t";
      
	  cin  >> answer;
      
      answer=toupper(answer);
      if (answer=='A'||answer=='B'||answer=='C'||answer=='D'){

          if (answer==correctAnswer){userScore2+=2;}
            break;
       }
      }
      return 0;
         }       

void categoryMenu (){
         
		 system("cls");

          cout <<"NAME SHOULD CONTAIN NO SPACES"
		       <<endl<<"Player Name: "<<endl<<endl;
          cout <<"\t";
          
		  cin  >>username;
          system("cls");
          
          timestamp(stamp);

         {
		   fstream myFile;
          myFile.open("userData.txt",ios::out |ios::app);//write
          if(myFile.is_open()){
          myFile<<"\n"<<stamp<< "\t \t \t"; 
          myFile<<"Username: " << username <<"\t \t \t";
          myFile.close();}}

          cout << "Choose a field of your interest from the following list"<<endl;
          cout << "> Press 1 for ¬ The land of Olives"<<endl;
          cout << "> Press 2 for ¬ Technology"<<endl;
          cout << "> Press 3 for ¬ Wild life"<<endl;
          cout << "> Press 4 for ¬ Movies"<<endl;
          cout << "> Press 5 for ¬ Art"<<endl<<endl;

          cout << "\t"; 
          
		  cin  >> categoryChoice;
          checkCategory (categoryChoice);
          system("cls");

          switch (categoryChoice)
          {
            case 1:
			ThelandofOlives q1;
			q1.startGame();
            break;
                  
                  
            case 2: 
		    countDown();
			Technology_round1();
            break;
              
            case 3: 
			countDown();
			wildLife();
            break;
              
            case 4: 
            countDown();
            movies_round1();
            break;
              
            case 5: 
            countDown();
			artRound_1();    
            break;


          }

          system("CLS");

      }



void countDown (){
                             	int	total_sec=4;
                             	cout << "The round starts in "<<endl<<endl;

                             	sleep(3);
                             	system("cls");
                             	while(total_sec>1){

                               if(total_sec<=4)
                               {
                               total_sec--;
                               cout << total_sec << endl;
                               }
                               sleep(2);
                               system("cls");
                               }
                               cout << " GO " << endl << endl;
                               
                               sleep(2);
                               system("cls");
                             	
                             }

void finalRound(){

                  system("cls");
                  PlaySound(TEXT("Final round.wav"), NULL, SND_FILENAME);
                  cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl<<endl;
                  cout << "          CONGRATS "<< username<< "!" <<" "<<endl<<endl;
                  cout << "             You made it !       "<<endl<<endl;
                  cout << "      Your final score is:  "<<userScore2<<endl<<endl;
                  cout << "      see you soon ... bye!   "<<endl<<endl;
                  cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl<<endl;

                  cout << "> Press M to return to main menu"<<endl<<endl;
                  cout << "> Press Q to quit the game"<<endl<<endl;
				  cout << "\t";
                  cin  >> menuChoice ;
                  system ("cls");
                  
				  menuChoice=
                  toupper(menuChoice);
                  checkChoice (menuChoice);

                  menuChoice=toupper(menuChoice);
                 if (menuChoice == 'M'){
                     userScore=0;
                     userScore2=0;
                     mainHome();}
                 
                 if (menuChoice == 'Q')
                 _Exit(menuChoice);
         }

void help (){

             cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
             cout << "         WELCOME TO QUIZ GAME"<<endl<<endl;
             cout << "A few tips to get you familiar with Quiz Game"<<endl;
             cout << "There are two round WARMUP ROUND and CHALLENGE ROUND"<<endl;
             cout << "In the WARM UP ROUND you will be asked 5 MCQ questions in 5 minutes in a category of your choice"<<endl;
             cout << "You will be given four options and should choose between A,B,C or D for the correct answer"<<endl;
             cout << "To unlock the CHALLENGE ROUND you should answer atleast 3 questions before the time ends"<<endl;
             cout << "In the CHALLENGE ROUND you will be asked 5 questions of increased difficuilty"<<endl;
             cout << "If you fail to answer 3 questions atleast before the time ends you fail round 2 "<<endl<<endl;
             cout << "Each question earns you two points"<<endl;
             cout << "No NEGATIVE MARKING!!!"<<endl<<endl;
             cout << "--------GOOD LUCK--------"<<endl<<endl;
             cout << "> Press M to return to the main menu"<<endl;
             cout << "> Press Q to Quit"<<endl;


             cout<<"\t";
			 cin >> menuChoice;
             menuChoice=
             toupper(menuChoice);
             checkChoice (menuChoice);

             system("CLS");

            if (menuChoice=='M')
             mainHome();

             if (menuChoice == 'Q')
             _Exit(menuChoice);


         }

void mainHome (){

             cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
             cout << "         WELCOME TO QUIZ GAME"<<endl<<endl;
             cout << "> Press S to start the game"<<endl;
             cout << "> Press Q to quit the game"<<endl;
             cout << "> Press V to view the scoreBoard "<<endl;
             cout << "> Press H for Help"<<endl<<endl;
			 cout <<"\t";
			 
			 cin  >> menuChoice;
             menuChoice=
             toupper(menuChoice);
             checkChoice (menuChoice);

             system("CLS");

             if (menuChoice == 'S')
             categoryMenu();

             if (menuChoice == 'Q')
             _Exit(menuChoice);

             if (menuChoice == 'V')
             scoreBoard();

             if (menuChoice == 'H')
             help();

         }

void ooops(){          system ("cls");


           cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
           cout << "          OOOOOOPS"<<endl<<endl;
           cout << "    You ran out of time"<<endl;
           cout << "    You scored:  "<<userScore<<endl<<endl;
           cout << "        Game over"<<endl<<endl;
           cout << "> Press M to return to main menu"<<endl<<endl;
           cout << "\t";
           
		   cin >> menuChoice;
           
           system ("cls");

            menuChoice=
            toupper(menuChoice);
            checkChoice(menuChoice);
            if (menuChoice=='M')
            mainHome ();
          }

void ooopsEnd(){          system ("cls");

            userScore2+=userScore;
            PlaySound(TEXT("failround1.wav"), NULL, SND_FILENAME);
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl<<endl;
            cout << "          OOOOOOPS"<<endl<<endl;
            cout << "    You didn't make it"<<endl<<endl;
            cout << "    You scored:  "<< userScore2 <<endl<<endl;
            cout << "          Game over"<<endl<<endl;
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl<<endl;
            cout << " > Press M to return to main menu"<<endl<<endl;
            cout << " > Press Q to quit the game"<<endl<<endl;
			cout << "\t";
			
			cin >> menuChoice;
            
			system ("cls");

             menuChoice=
             toupper(menuChoice);
             checkChoice(menuChoice);

             if (menuChoice=='M')
             mainHome ();
             
             if (menuChoice == 'Q')
             _Exit(menuChoice);
           }

void scoreBoard(){

             string line;
             ifstream myFile ("userData.txt");
             if (myFile.is_open())
             {
               while ( getline (myFile,line) )
               {
                 cout << line << endl<<endl;
               }
               myFile.close();
             }

             else cout << "Unable to open file"<<endl<<endl;

             cout << "> Press M to return to main menu"<<endl<<endl;
             cout << "> Press Q to quit the game"<<endl<<endl;
             cout << "\t";
             
			 cin  >> menuChoice;
             menuChoice=
             toupper(menuChoice);

             checkChoice (menuChoice);

             system("cls");

             
             if (menuChoice == 'Q')
             _Exit(menuChoice);


             if (menuChoice == 'M')
             mainHome();
           }           

void startRound2(){ 

                    {fstream myFile;
                    myFile.open("userData.txt",ios::out |ios::app);//write
                    if(myFile.is_open()){
                    myFile <<"\n"<<"\t \t \t"<< "Warmup Score: " <<userScore <<endl;
                    myFile.close();}}

                    system("cls");
                    PlaySound(TEXT("You won.wav"), NULL, SND_FILENAME);
                    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl<<endl;
                    cout << "               CONGRATS "<<username<<" !      "<<endl<<endl;
                    cout << "                    You won        "<<endl<<endl<<endl;
                    cout << "                you scored:    "<<userScore<<endl<<endl;
                    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl<<endl;
                    cout << "> Press C to move to ChallengeRound"<<endl;
                    cout << "> Press M to return to main menu"<<endl<<endl;
                    cout <<"\t";
                    
					cin >> menuChoice ;
                    system ("cls");
                    menuChoice=toupper(menuChoice);
                    checkChoice(menuChoice);

                    
                   if (menuChoice == 'M'){
                      userScore=0;
                      mainHome();}
                  

                   if (menuChoice == 'C')
                  {
                    system("cls");
                    countDown();
                    //timer();
                }
            }

void timer(){
                      int	total_min=1,total_sec=0;

                    	while(total_min>=0){

                    		system("cls");
                    		cout<<" Time "<<":"<<total_min<<":"<<total_sec<<endl;
                      if(total_sec==0)
                       {
                        total_min--;
                        total_sec=60;

                       }
                       total_sec--;
                       sleep(true);
                       system("cls");
                    	}
                      system("CLS");

                      ooops();
                    }
                    
                  