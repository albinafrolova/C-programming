/*This program prints the student scores and calculates and prints the statistics for each quiz.
    Written by: Albina Frolova
    Date: 11/14/2016 
*/
#include <stdio.h>
#include <stdlib.h>
#define Max_Students 40
#define Max_Quizzes 5

//Funciton declarations
void getData(int ID[], int Scores[][Max_Quizzes], int* numStudents);
int HighScore (int Scores[][Max_Quizzes],int quiz_count, int numStudents);
int LowScore (int Scores[][Max_Quizzes],int quiz_count, int numStudents);
double AverageScore (int Scores[][Max_Quizzes],int quiz_count, int numStudents);
void printFile(int ID[ ], int Scores[ ][Max_Quizzes], int numStudents, int Highest[], int Lowest[], double Avg[]);

//Start of the program
int main(){

  //Local declarations [main]
  int ID[Max_Students];
  int Scores[Max_Students][Max_Quizzes];
  int Highest[Max_Quizzes];
  int Lowest[Max_Quizzes];
  double Avg[Max_Quizzes];
  int numStudents, a;

  //Calling getData function and sending numStudents's address
  getData(ID, Scores, &numStudents);
  //Calculate highest, lowest, and average grades
  for(a = 0; a < Max_Quizzes; ++a){
    Highest[a] = HighScore(Scores, a, numStudents);
    Lowest[a] = LowScore(Scores, a, numStudents);
    Avg[a] = AverageScore(Scores, a, numStudents);
  }
  //Print out the whole data file along with calculations
  printFile(ID, Scores, numStudents, Highest, Lowest, Avg);

  return 0;
}

//Get data from input file
void getData(int ID[], int Scores[][Max_Quizzes], int* numStudents){
  int count_student=0;
  int quiz_count;

  //Open file input stream
  FILE *file;
  file = fopen("./data.txt", "r");

  //Check whether file is NULL or Valid for processing
  if (file != NULL){

    while(fscanf(file, "%d", &ID[count_student]) != EOF){

      for (quiz_count = 0; quiz_count < Max_Quizzes; ++quiz_count) 
        fscanf(file, "%d", &Scores[count_student][quiz_count]); //Read the grades into 2D array

      count_student++; //Increment the number of students
    }
    *numStudents=count_student++; //Dereference the pointer to assign a value
    fclose (file); //Close file stream
  }
  //If file is NULL terminate the program
  else{
    printf("File not found!");
    exit(101);
  }
}

//Calculate the highest score of each quiz
int HighScore (int Scores[][Max_Quizzes],int quiz_count, int numStudents){
  int result;
  int count_student;
  result = Scores[0][quiz_count];
  for (count_student = 1; count_student < numStudents; count_student++){
    if (Scores[count_student][quiz_count] > result) //Compare next grade to previous and if bigger reassign to result
      result = Scores[count_student][quiz_count];
  }
  return result;
}

int LowScore (int Scores[][Max_Quizzes],int quiz_count, int numStudents){
  int result;
  int count_student;
  result = Scores[0][quiz_count];
  for (count_student = 1; count_student < numStudents; count_student++){
    if (Scores[count_student][quiz_count] < result) //Compare next grade to previous and if lower reassign to result
      result = Scores[count_student][quiz_count];
  }
  return result;
}

double AverageScore (int Scores[][Max_Quizzes],int quiz_count, int numStudents){
  double sum=0.0;
  int count_student;
  for (count_student = 0; count_student < numStudents; count_student++){
    sum += Scores[count_student][quiz_count]; //Sum up all grades
  }
  return sum/numStudents; //Divide by the total number of students found to get average
}

//Print out the input and the calculations made
void printFile(int ID[ ], int Scores[ ][Max_Quizzes], int numStudents, int Highest[], int Lowest[], double Avg[]){
  int r,a;

  printf("Student\t\tQuiz1\tQuiz2\tQuiz3\tQuiz4\tQuiz5\n");

  for(r=0;r<numStudents;r++){
    printf("%d\t\t",ID[r]);
    for(a=0;a<Max_Quizzes;a++)
    printf("%d\t",Scores[r][a]);
    printf("\n");
  }

  printf("High score\t");

  for(a=0;a<Max_Quizzes;a++){
    printf("%d\t",Highest[a]);
  }

  printf("\nLow score\t");

  for(a=0;a<Max_Quizzes;a++){
    printf("%d\t",Lowest[a]);
  }

  printf("\nAverage\t");

  for(a=0;a<Max_Quizzes;a++){
    printf("\t%2.1f",Avg[a]);
  }
    printf("\n");
}