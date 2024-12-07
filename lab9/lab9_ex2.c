#include<stdio.h>

typedef struct employee {
    int id;
    char name[50];
    double salary;
} emp;
void e_print(emp e)
{
    printf("(ID: %d, Employee name: %s , Salary: %.2f manat)\n", e.id, e.name, e.salary);
}
int Above_treshold(emp e, double trsh){
    return e.salary>trsh;
}
int getEmployeesWithSalaryMoreThan(emp *emps, int length, double threshold, emp *result){
    int count =0;
    for(int i =0; i<length; i++){
        if (Above_treshold(emps[i], threshold)){
            result[count++] = emps[i];
        };
    }
    return count;

}
void e_printAll(emp *e, int length)
{
    for (int i = 0; i < length; i++)
        e_print(e[i]);
}

int main(){
    emp arr[10] =
    {
        {1013, "Valid", 150},
        {1201, "Federico", 160},

    };
    int treshhold;
    scanf("%d", &treshhold);
    emp result[10] = {};
    e_printAll(arr, 2);
    puts("-----------------------------");
    int filteredLength = getEmployeesWithSalaryMoreThan(arr, 2, treshhold, result);
    e_printAll(result, filteredLength);
    printf("%lu - because the size of 2 char arrys is 100, and size of float is 8", sizeof(struct employee));



    return 0;
}


