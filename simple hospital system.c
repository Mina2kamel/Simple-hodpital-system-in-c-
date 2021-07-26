#include <stdio.h>
#include <stdlib.h>


struct patient{
int ID;
char name[50];
float weight;

};

void Get_Patient_Data(struct patient *pArr);
int Get_Patient_Index(struct patient pArr[],int ArrSize, int SearchID);
void Print_Patient_Data(struct patient *pArr);

int main()
{

    struct patient patArr[5];
    int num, SearchID,Index;
    while(1)
   {
    printf("_________Simple Hospital system_________________\n");
    printf("***********************************************\n");
    printf("Enter [1] to enter patient data.\n");
    printf("Enter [2] to search patient by ID.\n");
    //printf("Enter [3] to print patient data.\n");
    printf("************************************************\n");
    printf("Enter a number : ");
    scanf("%d",&num);
    if (num == 1){

    Get_Patient_Data(patArr);

       }
    else if (num == 2){

    printf("Enter Patient_ID to search : ");
    scanf("%d",&SearchID);

    Index= Get_Patient_Index(patArr,5,SearchID);

           if(Index==0){

                printf("patient not found\n");
                    }
          else{
               //printf("PatientID is found\n");
              Print_Patient_Data(&patArr[Index]);
              }

       }

    else{

    printf("Invalid number");
        }

   }

        return 0;
}

void Get_Patient_Data(struct patient *pArr)

   {
        for (int i=1;i<6;i++){

        printf("Enter information of patient no.%d",i);
        printf("\nEnter Patient ID: ");
        scanf("%d",&pArr->ID);
        printf("Enter Patient Name: ");
        scanf("%s",&pArr->name);
        printf("Enter Patient Weight: ");
        scanf("%f",&pArr->weight);
        printf("************************************\n");



    }

   }

    int Get_Patient_Index(struct patient pArr[],int ArrSize, int SearchID)

    {
        int flag =0;
        for (int i = 0;i< ArrSize;i++){

                if (pArr[i].ID==SearchID){
                         flag=1;
                }

                }

                return flag;
                }

    void Print_Patient_Data(struct patient *pArr)

{       printf("*******************\n");
        printf("Patient data: \n");
        printf("Name : %s, weight :%0.1f \n" ,pArr->name,pArr->weight);


}

