 #include <iostream.h>
  
   using namespace std;
   
   const int regFee      = 10;
   const int unitFee     = 10;
   const int excessFee   = 50;
   // Prototype Declarations
   int calculateFee   (int firstTerm,
                       int secondTerm,
                       int thirdTerm);
   int termFee (int units);
   int main ()
   {
       cout << " Enter units for  First term:     ";
       int firstTerm;
       cin  >> firstTerm;
       
       cout << " Enter units for Second term:     ";
       int secondTerm;
       cin  >> secondTerm;
       
       cout << " Enter units for  Third term:     ";
       int thirdTerm;
       cin  >> thirdTerm;
       
       int totalFee;
       totalFee = calculateFee
                   (firstTerm, secondTerm, thirdTerm);
       cout << "\n The total tuition is :\t" << totalFee;
       getch ();
       return 0;
       }// main
       /* ================ CalculateFee =====================
       Calculate the total fees for the year.
              Pre  The number units to be taken each term 
              Post Return the annual fees            */
       int calculateFee (int firstTerm, 
                         int secondTerm,
                         int thirdTerm)
     { 
           int fee = termFee (firstTerm)
                   + termFee(secondTerm)
                   + termFee (thirdTerm);
      getch ();             
      return fee;
     }// calculationFee
     /* ================ termfees =======================
             Calculate the tuition for one term.
        Pre  units contains units to be taken in the term
        Post the fee is calculated and returned        */
     
     int termFee (int units) 
     {
         int totalFee = regFee
                   + ((units - 1) / 12 * excessFee)
                   +  (units * unitFee);
      
      return (totalFee);
      getch();
      } // termFee   