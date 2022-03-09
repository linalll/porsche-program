#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>
#define s 100

struct porsche
{
  int choices;
  int TEXTURE;
  int Rims_Size;
  int Exterior_Colors;
  int interior_colors;
};
struct porsche x;
void category()
{

  FILE *p;


  p = fopen("program.txt", "w");


  if (p == NULL)
  {
    printf("Error!");
    exit(1);
  }
  else
  {
    fprintf(p, " \t\t PORSCHE \t\t  \n ");
    fprintf(p, "Car category: \n");

    fprintf(p, "\n\nTexture: \n 1.Leather \t 10,000$\n 2.Plastic Hex \t 3,500$\n 3.Textile Gray\t 5,000$\n");
    fprintf(p, "\n\n Rims Size: \n\n 1.205/55/R16  4,000$\n\n 2.225/45/R17  6,000$ \n\n 3.225/40/R18  8,000$ \n\n 4.275/30/R19  11,000$ \n\n");
    fprintf(p, "\n\n Exterior Colors:\n\n 1.Black Matte   1,500$\n\n 2.Mettalic Blue 1,500$ \n\n 3.Mettalic Red  3,000$ \n\n 4.Venta Black   6,000$\n\n");
    fprintf(p, "\n\nInterior Colors:\n\n 1.Piano Black   4,500$ \n\n 2.Carbon Fiber  7,000$ \n\n 3.Red /Black    4,000$\n\n 4. Beige/Black  4,000$\n\n");
  }
  fclose(p);
}

int new_car()
{
  int nc;
  printf("1-CREATE NEW CAR\n");
  printf("2-EXIT\n");
  scanf("%d", &nc);

  return nc;
}

int choices()
{
  printf("1-PORSCHE 911\n");
  printf("2-PORSCHE MACAN\n");
  scanf("%d", &x.choices);
  return x.choices;
}
int TEXTURE()
{

  printf("\n\nTEXTURE:\n\n");
  printf("1-Leather \t 10,000$\n");
  printf("2-Plastic Hex \t 3,500$\n");
  printf("3.Textile Gray\t 5,000$\n");
  printf("\ntexture: ");
  scanf("%d", &x.TEXTURE);
  while(x.TEXTURE> 4)
  {

    printf("INVALID INPUT!!!");
    printf("\n\nTEXTURE:\n\n");
    scanf("%d", &x.TEXTURE);
  }
  return x.TEXTURE;
}
int Rims_Size()
{

  printf("\n\nRims Size:\n\n");
  printf("1.205/55/R16  4,000$\n");
  printf("2.225/45/R17  6,000$\n");
  printf("3.225/40/R18  8,000$\n");
  printf("4.275/30/R19  11,000$\n");
  printf("\nrims size: ");
  scanf("%d", &x.Rims_Size);
  while(x.Rims_Size > 4)
  {
    printf("INVALID INPUT!!!");
    printf("\n\nRims Size:\n\n");
    scanf("%d", &x.Rims_Size);
  }
  return x.Rims_Size;
}

int Exterior_Colors()
{

  printf("\n\nExterior colors:\n\n");
  printf("1.Black Matte   1,500$\n");
  printf("2.Mettalic Blue 1,500$ \n");
  printf("3.Mettalic Red  3,000$ \n");
  printf("4.Venta Black   6,000$\n");
  printf("\n\nexterior color: ");
  scanf("%d", &x.Exterior_Colors);
  while (x.Exterior_Colors > 4)
  {
    printf("INVALID INPUT!!!");
    printf("\n\nExterior colors:\n\n");
    scanf("%d", &x.Exterior_Colors);
  }
  return x.Exterior_Colors;
}
int interior_colors()
{

  printf("\n\nInterior Colors:\n\n");
  printf("1.Piano Black   4,500$\n");
  printf("2.Carbon Fiber  7,000$ \n");
  printf("3.Red /Black    4,000$\n");
  printf("4.Beige/Black   4,000$\n");
  printf("\ninterior color: ");
  scanf("%d", &x.interior_colors);

  while (x.interior_colors > 4)
  {

    printf("INVALID INPUT!!!");
    printf("\n\nInterior Colors :\n\n");
    scanf("%d", &x.interior_colors);

  }
    return x.interior_colors;

}
int main()
{
     struct porsche x;


  system("color 70");

  printf("\t\t\t\t\t\tWELCOME TO PORSCHE USA\n\n");

  PlaySound(TEXT("welcome.wav"),NULL,SND_SYNC);

  system("color 70");

  printf("Choose Your own Car: \n\n");

  category();

  while (1)

  {
    int nc;
    nc = new_car();
    while (nc != 1 && nc != 2)
    {
      nc = new_car();
    }

    switch (nc)
    {
    case 1:
      system("cls");
      system("color 04");
      printf("customize your PORSCHE car\n\n");

      break;

    case 2:
      return 0;

    default:
      printf("INVALID INPUT!!!\n");
    }

    int c = choices();
    while (c != 1 && c != 2 && c != 3)
    {
      c = choices();
    }
      system("cls");
      system("color 7D");

   int t = TEXTURE();
      system("color 01");
      system("cls");

    int rs= Rims_Size();
      system("color 72");
      system("cls");

   int  ec = Exterior_Colors();
      system("color 03");
      system("cls");

    int ic = interior_colors();
      system("color 76");
      system("cls");

    system("color 74");
printf("========================================================================================================================\n");
printf("\t\t\t\t\t\t R E C E I P T\n");
printf("========================================================================================================================\n");

    int result= 0 ;
    if (c == 1)
  {
    printf("\tPORSCHE 911\n");
  }
  else
  {
    printf("\tPORSCHE MACAN\n");
  }
if (t == 1){
    printf("\nLeather \t\t 10,000$\n\n");
    result+=10000;
}
  else if (t == 2){
    printf("\nPlastic Hex \t\t 3,500$\n\n");
    result+=3500;
  }
  else if (t == 3){
    printf("\nTextile Gray  \t\t5,000$\n\n");
    result+=5000;
  }
 if (rs == 1){
    printf("205/55/R16 \t\t 4,000$\n\n");
    result+=4000;
 }
  else if (rs == 2){
    printf("225/45/R17 \t\t 6,000$\n\n");
    result+=6000;
  }
  else if (rs == 3){
    printf("225/40/R18 \t\t 8,000$\n\n");
    result+=8000;
  }
  else if (rs == 4){
    printf("275/30/R19 \t\t  11,000$\n\n");
    result+=11000;
  }
     if (ec == 1){
    printf("Black Matte \t\t  1,500$\n\n");
    result+=1500;
     }
  else if (ec == 2){
    printf( "Mettalic Blue\t\t 1,500$ \n\n");
    result+=1500;
  }
  else if (ec == 3){
    printf("Mettalic Red \t\t 3,000$ \n\n");
    result+=3000;
  }
  else if (ec == 4){
    printf("Venta Black  \t\t 6,000$\n\n");
    result+=6000;
  }
    if (ic == 1){
    printf("Piano Black \t\t  4,500$\n\n");
    result+=4500;
    }
  else if (ic == 2){
    printf("Carbon Fiber\t\t7,000$ \n\n");
    result+=7000;
  }
  else if (ic == 3){
    printf("Red /Black  \t\t  4,000$\n\n");
    result+=4000;
  }
  else if (ic == 4){
    printf( "Beige/Black\t\t  4,000$\n\n");
    result+=4000;
  }
    printf("total cost:\t\t  %d \n\n", result);

  }
  return 0;
}