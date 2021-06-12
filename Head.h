//Function validating user input in category menu
int checkCategory (char &categoryChoice);

//Function validating user input for menu choice
char checkChoice (char &menuChoice);

//Function validating user choice in MCQs for round 2
char check2 (char &correctAnswer, char &answer);

//Function displaying categories available
void categoryMenu ();

//Function validating user choice in MCQs for round 1
char check (char &correctAnswer, char &answer);

//Function displaying countdown before starting a round
void countDown ();

//Function displaying userscore at the end if player passes the two rounds
void finalRound();

//Function displaying the game polkicy
void help ();

//Function displaying the main home of the program
void mainHome ();

//Function displaying loss message case the time ends
void ooops();

//Function displaying loss message case the user didn't pass the challenge
void ooopsEnd();

//Function displaying scoreboard
void scoreBoard();

//Function connecting the two rounds
void startRound2();

//Function for timer 
void timer();

//Function reading local date and time & storing them in variable stamp
void timestamp();

//Function storing & displaying round 1 questions for the category art 
void artRound_1();

 //Function storing & displaying round 2 questions for the category art
void artRound_2();

//Function storing & displaying round 2 questions for the category wild life
void wildLife2();

//Function storing & displaying round 1 questions for the category wild life
void wildLife();

//Function storing & displaying round 2 questions for the category technology
void Technology_round2();

//Function storing & displaying round 1 questions for the category technology
void Technology_round1();

//Function storing & displaying round 2 questions for the category movies
void movies_round2();

//Function storing & displaying round 1 questions for the category movies
void  movies_round1();

