   
//What2Eat Today
//  Copyright (C) 2021, written by Alperen AKYOL,alperen.akyol@ozu.edu.tr, 2021.


    // For GNU v3.0 or higher
   // This program is free software: you can redistribute it and/or modify
   // it under the terms of the GNU General Public License as published by
   // the Free Software Foundation, either version 3 of the License, or
   // (at your option) any later version.

   // This program is distributed in the hope that it will be useful,
   // but WITHOUT ANY WARRANTY; without even the implied warranty of
   // MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   //GNU General Public License for more details.

   //You should have received a copy of the GNU General Public License
   //along with this program.  If not, see <https://www.gnu.org/licenses/>.


#include <stdio.h>

int main(void){

char *food_list[10];
food_list[0]="1-Kebab";
food_list[1]="2-Lahmacun";
food_list[2]="3-Pizza";
food_list[3]="4-Hamburger";
food_list[4]="5-Penne Pesto";
food_list[5]="6-Chicken Alfredo ";
food_list[6]="7-Cheesecake";
food_list[7]="8-Mushroom Risotto";
food_list[8]="9-Tiramisu";
food_list[9]="10-Tomato Soup";

int kebab_points=0;
int lahmacun_points=0;
int pizza_points=0;
int hamburger_points=0;
int penne_points=0;
int alfredo_points=0;
int cheesecake_points=0;
int risotto_points=0;
int tiramisu_points=0;
int soup_points=0;


int item;
int room_mate_size;
printf("Please enter the number of roommates:");
scanf("%d",&room_mate_size);

for(int j=1;j<=room_mate_size;j++){
    for(int s=0;s<5;s++){
        printf("Please enter the menu item you want: ");
    scanf("%d",&item);
    if (item==1){
        kebab_points +=5;
    }
    else if (item==2){
        lahmacun_points +=5;
    }
    else if (item==3){
        pizza_points +=5;
    }
    else if (item==4){
        hamburger_points +=5;
    }
    else if (item==5){
        penne_points +=5;
    }
    else if (item==6){
        alfredo_points +=5;
    }
    else if (item==7){
        cheesecake_points +=5;
    }
    else if (item==8){
        risotto_points +=5;
    }
    else if (item==9){
        tiramisu_points +=5;
    }
    else if (item==10){
        soup_points +=5;
    }
    else{
        printf("wrong menu item \n");
    }
    }
    printf("The next roommate \n");
}
int food_points[10];
food_points[0]=kebab_points;
food_points[1]=lahmacun_points;
food_points[2]=pizza_points;
food_points[3]=hamburger_points;
food_points[4]=penne_points;
food_points[5]=alfredo_points;
food_points[6]=cheesecake_points;
food_points[7]=risotto_points;
food_points[8]=tiramisu_points;
food_points[9]=soup_points;

int above_10=0;
for (int k=0;k<10;k++){
    if (food_points[k]>=10){
        above_10+=1;

        
    }
    else{
        //do nothing
    }
}
char *meal;
if (above_10==0){
    printf("You are eating at home today! %s");
}
else{

const char *second_list[above_10];
int index=0;
for(int i=0;i<10;i++){
    if(food_points[i]>=10){
        second_list[index]=food_list[i];
        index +=1;
    }
    else{
        // do nothing
    }

}
printf("Second round has begun! Enter your choices! %s \n");
for (int c = 0; c <above_10; c++)
{
    printf("\n %s",second_list[c]);
}

int vote;
for (int p = 1; p <=room_mate_size ; p++)
{
    printf("\n Please enter your vote:");
    scanf("%d",&vote);
    if (vote==1){
        kebab_points +=5;
    }
    else if (vote==2){
        lahmacun_points +=5;
    }
    else if (vote==3){
        pizza_points +=5;
    }
    else if (vote==4){
        hamburger_points +=5;
    }
    else if (vote==5){
        penne_points +=5;
    }
    else if (vote==6){
        alfredo_points +=5;
    }
    else if (vote==7){
        cheesecake_points +=5;
    }
    else if (vote==8){
        risotto_points +=5;
    }
    else if (vote==9){
        tiramisu_points +=5;
    }
    else if (vote==10){
        soup_points +=5;
    }
    else{
        printf("wrong menu item");
    }
    printf("The next roommate \n");
}
for (int l = 0; l < 10; l++)
{
    if (food_points[l]>food_points[l-1])
    {
      meal=food_list[l];
    }
    else{
        //do nothing
    }
}

}


printf("Food that was selected: %s ",meal);


return 0;


}
