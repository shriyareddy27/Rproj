#include <stdio.h>


int main(){
int high= 100;
int low= 1;
int guess;
char feedback;
int attempts=0;
printf("Think of a number between 1 and 100; I will guess it in 7 attempts or less!\n");

while (low<=high&& attempts<7){
   guess= (low+high)/2;
   attempts+=1;

    while(1){
      printf("Is your number %d ?type if its higher lower or correct(h,l,c)\n" , guess);
            scanf(" %c", &feedback);
            if(feedback>='A'&& feedback <='Z'){
            feedback+=32;
            }
   if(feedback =='c'){
      printf("Yay i guessed your number in %d attempts\n", attempts);
       break;
   } else if(feedback=='l'){
     high= guess-1;
     break;
   } else if(feedback=='h'){
     low= guess+1;
     break;}
     else {
        printf("invalid input. Enter only h,l or c \n");
    } }
   if(feedback == 'c') break; 
   if(feedback!='c');
   
}printf("Oh noo i couldn't guess in 7 attempts :( ");
return 0;

}
