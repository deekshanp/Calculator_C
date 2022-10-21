#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.141592
struct complex
{
  int real, img;
};
void transpose()
{
   int m, n, i, j, matrix[10][10], transpose[10][10];
   printf("Enter rows and columns :\n");
   scanf("%d%d", &m, &n);
   printf("Enter elements of the matrix\n");
   for (i= 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &matrix[i][j]);
   for (i = 0;i < m;i++)
      for (j = 0; j < n; j++)
         transpose[j][i] = matrix[i][j];
   printf("Transpose of the matrix:\n");
   for (i = 0; i< n; i++) {
      for (j = 0; j < m; j++)
         printf("%d\t", transpose[i][j]);
      printf("\n");
   }
}
void sparse()
{
   int row,col,i,j,a[10][10],count = 0;
   printf("Enter the number of rows:\n");
   scanf("%d",&row);
   printf("Enter the number of Columns:\n");
   scanf("%d",&col);
   printf("Enter elements of the Matrix:\n");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         scanf("%d",&a[i][j]);
      }
   }
   printf("Elements are:\n");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         printf("%d\t",a[i][j]);
      }
      printf("\n");
   }
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         if(a[i][j] == 0)
            count++;
      }
   }
   if(count > ((row * col)/2))
      printf("Matrix is a sparse matrix \n");
   else
      printf("Matrix is not sparse matrix\n");
}
void matrix_add()
{
float a[2][2], b[2][2], c[2][2];
int i,j;
printf("Enter the elements of 1st matrix\n");

for(i=0;i<2;i++)
for(j=0;j<2;j++)
{
scanf("%f",&a[i][j]);
}
printf("Enter the elements of 2nd matrix\n");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
{
scanf("%f",&b[i][j]);
}
for(i=0;i<2;i++)
    for(j=0;j<2;j++)
{

c[i][j]=a[i][j]+b[i][j];
}
printf("\nSum Of Matrix:");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
printf("%f\t", c[i][j]);
printf("\n");
}
}

void matrix_sub()
{
float a[2][2], b[2][2], c[2][2];
int i,j;
printf("Enter the elements of 1st matrix\n");

for(i=0;i<2;i++)
for(j=0;j<2;j++)
{
scanf("%f",&a[i][j]);
}
printf("Enter the elements of 2nd matrix\n");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
{
scanf("%f",&b[i][j]);
}
for(i=0;i<2;i++) for(j=0;j<2;j++)
{

c[i][j]=a[i][j]-b[i][j];
}
printf("\nSum Of Matrix:");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
printf("%f\t", c[i][j]);
printf("\n");
}
}

void matrix_multiply()
{
int i,j,k;
int row1,col1,row2,col2,row3,col3;
int mat1[5][5], mat2[5][5], mat3[5][5];
printf("\n enter the number of rows in the first matrix:");
scanf("%d", &row1);
printf("\n enter the number of columns in the first matrix:");
scanf("%d", &col1);
printf("\n enter the number of rows in the second matrix:");
scanf("%d", &row2);
printf("\n enter the number of columns in the second matrix:");
scanf("%d", &col2);
if(col1 != row2)
{
printf("\n The number of columns in the first matrix must be equal to the number of rows in the second matrix ");
}
row3= row1; col3= col2;
printf("\n Enter the elements of the first matrix");
for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
scanf("%d",&mat1[i][j]);
}
printf("\n Enter the elements of the second matrix");
for(i=0;i<row2;i++)
{
for(j=0;j<col2;j++)
scanf("%d",&mat2[i][j]);
}
for(i=0;i<row3;i++)
{
for(j=0;j<col3;j++)
{
mat3[i][j]=0;
for(k=0;k<col3;k++)
mat3[i][j] +=mat1[i][k]*mat2[k][j];
}
}
printf("\n The elements of the product matrix are");
for(i=0;i<row3;i++)
{
printf("\n");
for(j=0;j<col3;j++)
printf("\t %d", mat3[i][j]);
}
}

void polToCart()
{
	 float x, y, r, theta;
	 printf("Enter radius of polar coordinate (r): ");
	 scanf("%f", &r);
	 printf("Enter angle of polar coordinate in degree (theta): ");
	 scanf("%f", &theta);
	 theta = theta * PI/180.0;
	 x = r * cos(theta);
	 y = r * sin(theta);
	 printf("Cartesian form is: %0.3f + i(%0.3f)", x, y);
}
void cartToPol()
{
    float x, y, r, theta;
    printf("Enter Cartesian Co-ordinates x and y\n");
    scanf("%f%f", &x, &y);
    r = sqrt(x*x + y*y);
    theta = atan(y/x);
    theta = theta * (180.0 / PI);
    printf("Polar form is %0.2f(cos(%0.2f°) + isin(%0.2f°))", r, theta,theta);
}
void conjugate()
{
    int x,y;
    printf("Enter the real part:");
    scanf("%d",&x);
    printf("Enter the imaginary part:");
    scanf("%d",&y);
    y=-y;
    printf("The conjugate is: %d+(%d)i",x,y);
}
void emi()
{
    float principal, rate, time, emi;

    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time in year: ");
    scanf("%f", &time);

    rate = rate / (12 * 100);
    time = time * 12;

    emi = (principal * rate * pow(1 + rate, time)) / (pow(1 + rate, time) - 1);

    printf("Monthly EMI is= %f\n", emi);
}
void simpleinterest()
{
    float principle, time, rate, SI;
    printf("Enter principle amount: ");
    scanf("%f", &principle);
    printf("Enter time: ");
    scanf("%f", &time);
    printf("Enter rate: ");
    scanf("%f", &rate);
    SI = (principle * time * rate) / 100;
    printf("Simple Interest = %f", SI);
}
void CompoundInterest()
{
    float principle, rate, time, CI;
    printf("Enter principle amount: ");
    scanf("%f", &principle);
    printf("Enter time: ");
    scanf("%f", &time);
    printf("Enter rate: ");
    scanf("%f", &rate);
    CI = principle* (pow((1 + rate / 100), time));
    printf("Compound Interest = %f", CI);
}
void bmi()
{
    float height, weight, bmi;

    printf("Enter height in meter\n");
    scanf("%f", &height);

    printf("Enter weight in kg\n");
    scanf("%f", &weight);

    bmi = weight / (height * height);

    printf("Your Body Mass Index(BMI) is %f\n", bmi);

    if(bmi < 15)
    {
        printf("Your BMI category is: Starvation\n");
    }
    else if(bmi >= 15.1 && bmi <= 17.5)
    {
        printf("Your BMI category is: Anorexic\n");
    }
    else if(bmi >= 17.6 && bmi <= 18.5)
    {
        printf("Your BMI category is: Underweight\n");
    }
    else if(bmi >= 18.6 && bmi <= 24.9)
    {
        printf("Your BMI category is: Ideal\n");
    }
    else if(bmi >= 25 && bmi <= 29.9)
    {
        printf("Your BMI category is: Overweight\n");
    }
    else if(bmi >= 30 && bmi <= 39.9)
    {
        printf("Your BMI category is: Obese\n");
    }
    else if(bmi >= 40)
    {
        printf("Your BMI category is: Morbidly Obese\n");
    }
    else
    {
        printf("Wrong entry\n");
    }
}
void main()
{
struct complex a, b, c;
int ch,ch1,ch2,ch3,ch5,a1,b1,result,choice, x, y, z;
double number,p,num;
while(1)
{
    printf("1.Simple Calculator\n 2.Scientific Calculator\n 3.Conversions\n 4.Health-BMI\n 5.Finance\n 6.Exit\nChose your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:while(1)
                {
                    printf("1.Addition\n 2.Subtraction\n 3.Mult\n 4.Div\n 5.Power\n 6.Root\n 7.Main menu\n 8.Exit\nChose your choice: ");
                    scanf("%d",&ch1);
                    switch(ch1)
                    {
                    case 1:
                        printf("\nEnter the first value  : ");
                        scanf("%d", &a1);
                        printf("Enter the Second value : ");
                        scanf("%d", &b1);
                        result = a1 + b1;
                        printf("Addition = %d\n\n", result);


                        break;
                    case 2:
                        printf("\nEnter the first value  : ");
                        scanf("%d", &a1);
                        printf("Enter the Second value : ");
                        scanf("%d", &b1);
                        result = a1 - b1;
                        printf("Subtraction = %d\n\n", result);

                        break;
                    case 3:
                        printf("\nEnter the first value  : ");
                        scanf("%d", &a1);
                        printf("Enter the Second value : ");
                        scanf("%d", &b1);
                        result = a1 * b1;
                        printf("Product = %d\n\n", result);

                        break;
                    case 4:
                        printf("\nEnter the first value  : ");
                        scanf("%d", &a1);
                        printf("Enter the Second value : ");
                        scanf("%d", &b1);
                        float result = (float) a1 / (float) b1;
                        printf("Quotient = %.2f\n\n", result);

                        break;
                    case 5:
                        printf("Enter The Number : ");
                        scanf("%lf",&number);
                        printf("Enter The Power : ");
                        scanf("%lf",&num);
                        p = pow(number, num);
                        printf("Result = %.2lf\n\n", p);

                        break;
                    case 6:
                        printf("Enter The Number : ");
                        scanf("%lf",&number);
                        p = sqrt(number);
                        printf("Result = %.2lf\n\n", p);

                        break;
                    case 7:
                        main();

                        break;
                    case 8:
                        exit(0);
                        break;
                    default:printf("Invalid number");

                  }
              }
               break;
         case 2:while(1)
         {
             printf("1.Simple Calculator\n 2.Complex Operation\n 3.Matrix Operations\n 4.Polynomial Operations\n 5.Trigonometric functions\n 6.Simultaneous Equations\n 7.Main menu\n 8.EXIT\n");
             printf("Choose your choice: ");
             scanf("%d",&ch2);
             switch(ch2)
             {
             case 1:while(1)
                {
                    printf("1.Addition\n 2.Subtraction\n 3.Mult\n 4.Div\n 5.Power\n 6.Root\n 7.Main menu\n 8.Exit\nChose your choice: ");
                    scanf("%d",&ch1);
                    switch(ch1)
                    {
                    case 1:
                        printf("\nEnter the first value  : ");
                        scanf("%d", &a1);
                        printf("Enter the Second value : ");
                        scanf("%d", &b1);
                        result = a1 + b1;
                        printf("Addition = %d\n\n", result);


                        break;
                    case 2:
                        printf("\nEnter the first value  : ");
                        scanf("%d", &a1);
                        printf("Enter the Second value : ");
                        scanf("%d", &b1);
                        result = a1 - b1;
                        printf("Subtraction = %d\n\n", result);

                        break;
                    case 3:
                        printf("\nEnter the first value  : ");
                        scanf("%d", &a1);
                        printf("Enter the Second value : ");
                        scanf("%d", &b1);
                        result = a1 * b1;
                        printf("Product = %d\n\n", result);

                        break;
                    case 4:
                        printf("\nEnter the first value  : ");
                        scanf("%d", &a1);
                        printf("Enter the Second value : ");
                        scanf("%d", &b1);
                        float result = (float) a1 / (float) b1;
                        printf("Quotient = %.2f\n\n", result);

                        break;
                    case 5:
                        printf("Enter The Number : ");
                        scanf("%lf",&number);
                        printf("Enter The Power : ");
                        scanf("%lf",&num);
                        p = pow(number, num);
                        printf("Result = %.2lf\n\n", p);

                        break;
                    case 6:
                        printf("Enter The Number : ");
                        scanf("%lf",&number);
                        p = sqrt(number);
                        printf("Result = %.2lf\n\n", p);

                        break;
                    case 7:
                        main();

                        break;
                    case 8:
                        exit(0);
                        break;
                    default:printf("Invalid number");

                  }
              }
               break;
             case 2:while(1)
                      {
                        printf("1.Add\n");
                        printf("2.Subtract\n");
                        printf("3.Multiply\n");
                        printf("4.Divide\n");
                        printf("5.Conjugate\n");
                        printf("6.Polar to Cartesian\n");
                        printf("7.Cartesian to polar\n");
                        printf("8.Main Menu\n");
                        printf("9.EXIT\n");
                        printf("Enter your choice\n");
                        scanf("%d", &choice);

                        if (choice == 9)
                          exit(0);
                          if (choice ==8)
                          main();

                        if (choice >= 1 && choice <= 4)
                        {
                          printf("Enter a and b where a + ib is the first complex number.");
                          printf("\na = ");
                          scanf("%d", &a.real);
                          printf("b = ");
                          scanf("%d", &a.img);
                          printf("Enter c and d where c + id is the second complex number.");
                          printf("\nc = ");
                          scanf("%d", &b.real);
                          printf("d = ");
                          scanf("%d", &b.img);
                        }
                        if (choice == 1)
                        {
                          c.real = a.real + b.real;
                          c.img = a.img + b.img;

                          if (c.img >= 0)
                            printf("Sum of the complex numbers = %d + %di", c.real, c.img);
                          else
                            printf("Sum of the complex numbers = %d %di", c.real, c.img);
                        }
                        else if (choice == 2)
                        {
                          c.real = a.real - b.real;
                          c.img = a.img - b.img;

                          if (c.img >= 0)
                            printf("Difference of the complex numbers = %d + %di", c.real, c.img);
                          else
                            printf("Difference of the complex numbers = %d %di", c.real, c.img);
                        }
                        else if (choice == 3)
                        {
                          c.real = a.real*b.real - a.img*b.img;
                          c.img = a.img*b.real + a.real*b.img;

                          if (c.img >= 0)
                            printf("Multiplication of the complex numbers = %d + %di", c.real, c.img);
                          else
                            printf("Multiplication of the complex numbers = %d %di", c.real, c.img);
                        }
                        else if (choice == 4)
                        {
                          if (b.real == 0 && b.img == 0)
                            printf("Division by 0 + 0i isn't allowed.");
                          else
                          {
                            x = a.real*b.real + a.img*b.img;
                            y = a.img*b.real - a.real*b.img;
                            z = b.real*b.real + b.img*b.img;

                            if (x%z == 0 && y%z == 0)
                            {
                              if (y/z >= 0)
                                printf("Division of the complex numbers = %d + %di", x/z, y/z);
                              else
                                printf("Division of the complex numbers = %d %di", x/z, y/z);
                            }
                            else if (x%z == 0 && y%z != 0)
                            {
                              if (y/z >= 0)
                                printf("Division of two complex numbers = %d + %d/%di", x/z, y, z);
                              else
                                printf("Division of two complex numbers = %d %d/%di", x/z, y, z);
                            }
                            else if (x%z != 0 && y%z == 0)
                            {
                              if (y/z >= 0)
                                printf("Division of two complex numbers = %d/%d + %di", x, z, y/z);
                              else
                                printf("Division of two complex numbers = %d %d/%di", x, z, y/z);
                            }
                            else
                            {
                              if (y/z >= 0)
                                printf("Division of two complex numbers = %d/%d + %d/%di",x, z, y, z);
                              else
                                printf("Division of two complex numbers = %d/%d %d/%di", x, z, y, z);
                            }
                          }
                        }
                        else if(choice==5)
                        {
                            conjugate();
                        }
                        else if(choice==6)
                        {
                            polToCart();
                        }
                        else if(choice==7)
                        {
                            cartToPol();
                        }
                        else
                          printf("Invalid choice.");
                          exit(0);
                      }
              break;
             case 3:
             while(1)
             {
                 int chm;
                 printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Transpose\n 5.Sparse form\n 6.Main menu\n 7.Exit\n Chose your choice: ");
                 scanf("%d",&chm);
                 switch(chm)
                 {
                     case 1:matrix_add();
                            break;
                     case 2:matrix_sub();
                            break;
                     case 3:matrix_multiply();
                            break;
                     case 4:transpose();
                            break;
                     case 5:sparse();
                            break;
                     case 6:main();
                     case 7:exit(0);
                     default:printf("Invalid number");
                 }

             }
             case 4:
             case 5:
             case 6:
             case 7:main();
             case 8:exit(0);
             default:printf("Invalid number");
             }

         case 4:bmi();
                break;
         case 5:while(1)
            {
             printf(" 1.Simple Interest\n 2.Compound Interest\n 3.EMI\n 4.Main Menu\n 5.EXIT\nChose your choice: ");
             scanf("%d",&ch5);
             switch(ch5)
             {
                 case 1:simpleinterest();
                 case 2:CompoundInterest();
                 case 3:emi();
                 case 4:main();
                 case 5:exit(0);
                 default:printf("Invalid number");
             }
         }
                break;
       case 6:exit(0);
       default:printf("Invalid number");
                }
    }
}
}
