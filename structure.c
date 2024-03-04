// print table of bla bla bla
#include<stdio.h>
#include<string.h>
struct date
{
    int dd;
    int mm;
    int yy;
};
struct addr
{
    int houseno;
    int pin;
    char street[31];
    char city[31];
    char district[31];
    char state[31];
};
struct mark
{
    int coa;
    int psuc;
    int maca;
    int lcs;
    int cn;
    int os;
};
struct student
{
    int roll;
    char name[41];
    char sic[8];
    struct date dob;
    struct mark marks;
    int total;
    float cgpa;
    char mobile[11];
    struct addr address;

};
void main(){
    struct student students[3],temp;
    int i;int j;

    for(i=0;i<3;i++){
        printf("ENter your roll no: ");
        scanf("%d",&students[i].roll);

        printf("ENter your name: ");
        scanf("%s",students[i].name);

        printf("ENter your sic: ");
        scanf(" %s",students[i].sic);
        
        printf("ENter day of birth ");
        scanf("%d",&students[i].dob.dd);
        
        printf("ENter month of birth ");
        scanf("%d",&students[i].dob.mm);
        
        printf("ENter year of birth ");
        scanf("%d",&students[i].dob.yy);

        printf("ENter mark in coa: ");
        scanf("%d",&students[i].marks.coa);

        printf("ENter mark in pusc: ");
        scanf("%d",&students[i].marks.psuc);
        
        printf("ENter mark in maca: ");
        scanf("%d",&students[i].marks.maca);

        printf("ENter mark in lcs: ");
        scanf("%d",&students[i].marks.lcs);

        printf("ENter mark in cn: ");
        scanf("%d",&students[i].marks.cn);

        printf("ENter mark in OS: ");
        scanf("%d",&students[i].marks.os);

        students[i].total=students[i].marks.coa+
        students[i].marks.psuc+students[i].marks.maca+
        students[i].marks.lcs+students[i].marks.cn+
        students[i].marks.os;

        printf("ENter your cgpa: ");
        scanf("%f",&students[i].cgpa);

        printf("ENter your mobile number: ");
        scanf("%s",students[i].mobile);

        printf("ENter your house number: ");
        scanf("%d",&students[i].address.houseno);

        printf("ENter your pin address: ");
        scanf("%d",&students[i].address.pin);

        printf("ENter your street: ");
        scanf("%s",students[i].address.street);

        printf("ENter your city: ");
        scanf("%s",students[i].address.city);

        printf("ENter your district: ");
        scanf("%s",students[i].address.district);

        printf("ENter your state: ");
        scanf("%s",students[i].address.state);
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++){
        if(students[i].cgpa>students[j].cgpa){
            temp=students[j];
            students[j]=students[i];
            students[i]=temp;
        }
        }

    }
printf("\n\nStudents details after sorting \n");
printf("roll\tname\t\tcgpa\tsic\t\tdob\t\tcoa\tpsuc\tmaca\tlcs\tcn\tos\ttotal\t\tmobile\t\taddress\n");

    for(i=0;i<3;i++){
        printf("%-4d%-20s%.2f\t%-8s\t%d/%d/%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d/600\t\t%s\t%d, %d, %s, %s, %s, %s\n",students[i].roll,students[i].name,students[i].cgpa,students[i].sic,students[i].dob.dd,students[i].dob.mm,students[i].dob.yy,students[i].marks.coa,students[i].marks.psuc,students[i].marks.maca,students[i].marks.lcs,students[i].marks.cn,students[i].marks.os,students[i].total,students[i].mobile,students[i].address.houseno,students[i].address.pin,students[i].address.street,students[i].address.city,students[i].address.district,students[i].address.state);
    }
}
