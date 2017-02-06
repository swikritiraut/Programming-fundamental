#include<stdio.h>
struct student
{

    int student_id;
    int registration_id;
    float fee;
};
int main()
{
struct student swikriti;
swikriti.student_id=101;
swikriti.registration_id=1005;
swikriti.fee=10000.50;
printf("swikriti id=%d\n",swikriti.student_id);
printf("swikriti registration id=%d\n",swikriti.registration_id);
printf("swikriti fee=%f\n",swikriti.fee);
return 0;
}
