# include <stdio.h>
# include <stdlib.h>

char option;
int students[10];

char course[30][30];
int reg_table[10][30]={0};
int n_students;
int n_courses;




int main(){
    /*printf("%c", name);*/
    printf("Enter the numer of stdunts");
    scanf( "%d", &n_students);
    for (int i=0;i<n_students;i++){
        printf("Input stdudents %d ID : ", i);
        scanf("%d",&students[i]);

    }
    
    printf("Enter the numer of the courses");
    scanf( "%d", &n_courses);
    for (int i=0;i<n_courses;i++){
        printf("Input courses %d ID : ", i);
        scanf("%s",course[i]);

    }
    
    int course_index;
    int students_index;
    while (1){
        printf("for register type 'a' for drop type 'd'  for quit type 'q'  \n" );

         option = getchar();
         if (option=='q'){
            break;
        } else if(option=='a'){
            printf("input the stdunts index to add a course");
            scanf("%d", &students_index);
            printf("input the course index ");
            scanf("%d", &course_index);
            reg_table[students_index][course_index]=1;
                  
        } else if (option=='d'){
            printf("input the stdunts index to drop a course");
            scanf("%d", &students_index);
            printf("input the course index ");
            scanf("%d", &course_index);
            reg_table[students_index][course_index]=0;

        } else{
               printf("wrong input");
        }       

         

    }



    return 0;
}