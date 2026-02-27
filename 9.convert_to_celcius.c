#include <stdio.h>

//(32 °F − 32) × 5/9 = 0 °C => F to C
//(0 °C × 9/5) + 32 = 32 °F => C to F

double fah_to_cel(double g_fah);
double cel_to_fah(double g_fah);

int main(){
  double g_fah = 0;
  double g_cel = 0;
  int option = 0;

  printf("Select to convert: \n");
  printf("1.Farenheit to celsius\n");
  printf("2.Celsius to Farenheit\n");
  scanf("%d",&option);

  switch(option){
    case 1:
      printf("1.Enter the degrees in Farenheit\n");
      scanf("%lf",&g_fah);
      g_cel = fah_to_cel(g_fah);
      break;
    case 2:
      printf("1.Enter the degrees in celsius\n");
      scanf("%lf",&g_cel);
      g_fah = cel_to_fah(g_cel);
      break;
    default:
      printf("Wrong option");
      break; 
  }

  printf("Degrees Fahrenheit => %.2lf : Degrees Celsius => %.2lf", g_fah,g_cel);
}

double fah_to_cel(double g_fah){
  return ((g_fah - 32) * 5 / 9);
}

double cel_to_fah(double g_cel){
  return ((g_cel * 9 / 5) + 32);
}