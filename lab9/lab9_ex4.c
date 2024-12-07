#include<stdio.h>

typedef struct {
    int id;
    char name[50];
    double salary;
} emp;
void e_print(emp e)
{
    printf("(ID: %d, Employee name: %s , Salary: %.2f manat)\n", e.id, e.name, e.salary);
}
int compare(emp emp1, emp emp2){
    if (emp1.salary >emp2.salary){
        return emp1.salary;
    } else
        return  -emp2.salary;
}

void e_printAll(emp *e, int length)
{
    for (int i = 0; i < length; i++)
        e_print(e[i]);
}

int main(){
    emp emp1 ={1013, "Valid", 150};
    emp emp2 = {1201, "Federico", 160};

    puts("-----------------------------");

    int value = compare(emp1, emp2);
    printf("%d", value);



    return 0;
}


