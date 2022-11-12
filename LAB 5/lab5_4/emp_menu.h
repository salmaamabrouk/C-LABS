#ifndef  x
#define X

void SetColor(int);
void layout1 (void);
void layout2 (void);
void layout3 (void);

typedef struct Employee
{
    int id;//4bytes
    int salary;//4bytes
    int bonus;//4bytes
    int deduction;//4bytes
    int net;//4bytes
    char name[15];//15*1=15bytes
} Emp_Struct;


void display(Emp_Struct *dis,int i);
void addemp (Emp_Struct *, int *);

#endif // x
