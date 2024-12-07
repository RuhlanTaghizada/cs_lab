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
double average_2(emp *e, int length){
    double avg =0;
    double sum =0;
    for (int i=0; i<length; i++){
        sum += e[i].salary;
    }
    avg = sum/length;
    return avg;
}
int getEmployeesWithSalaryAboveAverage(emp *emps, int length, double average, emp *result){
    int count =0;
    for(int i =0; i<length; i++){
        if (emps[i].salary >average){
            result[count++] = emps[i];
        }
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
        {2649, "Ruhlan", 140},
        {1936, "Someone", 170},

    };
    emp result[10] = {};
    e_printAll(arr, 4);
    double average = average_2(arr, 4);
    printf("%f", average);
    puts("-----------------------------");
    int filteredLength = getEmployeesWithSalaryAboveAverage(arr, 4, average, result);
    e_printAll(result, filteredLength);


    return 0;
}


