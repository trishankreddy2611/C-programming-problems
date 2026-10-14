#include<stdio.h>
#include<string.h>
#include<math.h>   //sine series 
float basic_operations();
float perimeter_area();
int swap_2num(); 
int ASCIIvalue();
float temperature_conversion();
int num_odd_even();
int max_min_of3int();
char range_test(); 
int conversion_seconds();
int palindrome();
int conditional_statements();
int sum_ofNnum();
int factorial_ofnum();
int addnum_until_enter0();
int multiplication_table();
int primenum_bw2num();
int armstrong_number();
int strong_number();
int flody_triangle();
int perfect_number();
int generic_root();
float quadratic();
int squares_of_evennum();
int prime_composite_count();
int add2_1Darray();
int reverse_1Darray();
int main(){
    return 0 ;
}
float basic_operations(){
    float a,b,result,sum,diff,product,division ; 
    printf("enter the values of a and b ");
    scanf("%f %f",&a,&b);
    sum = a + b ;
    diff = a - b ;
    product = a * b ;
    division = a / b ;
    printf("the sum is %.2f\n",sum);
    printf("the diff is %.2f\n",diff);
    printf("the product is %.2f\n",product);
    printf("the division is %.2f\n",division);
    return 0 ;
}
float perimeter_area(){
    float a , b , r ,per , area, pi = 3.14,base,hieght ;
    //for rectangle and square 
    printf("enter the values of a & b :");
    scanf("%f %f",&a,&b);
    per = 2*(a + b);
    area = a * b ;
    printf("the perimeter is %f and area is %f",per,area); 
    //for circle 
    printf("enter the value of r:");
    scanf("%f",&r);
    per = 2 * pi * r ;
    area = pi * r * r ;
    printf("the perimeter is %f and area is %f",per,area); 
    // for triangle ]
    printf("enter the values of base & hieght :");
    scanf("%f %f",&base,&hieght);
    area = (base * hieght)/2 ; 
    return 0 ;
}
int swap_2num(){
    int num1,num2,temp; 
    printf("enter the values of the numbers:");
    scanf("%d %d",&num1,&num2);
    temp =num1;
    num1 = num2 ; 
    num2 = temp ;
    printf("the value is  num1 = %d && num2 =%d",num1,num2);
    return 0 ;
}
int ASCIIvalue(){
    char ch; 
    printf("enter a character:");
    scanf("%c",&ch);
    printf("the ASCII value if %c is %d",ch,ch);
    return 0 ;
}
float temperature_conversion(){
    char ch;
    float result,F,C ; 
    printf("enter if the temperature is in celsisus(C) or farenhiet(F):");
    scanf("%c",&ch);
    switch (ch){
    case 'f':
    printf("enter the value of temp in farenhiet");
    scanf("%f",&F);
    result = ((F-32)*5)/9; 
    printf("the temp in celsius is %f",result);  
        break;
    case 'c':
    printf("enter the value of temp in celsius");
    scanf("%f",&C);
    result = ((C*9)/5)+ 32; 
    printf("the temp in celsius is %f",result); 
    break;
    default:
        break;
    }
    return 0 ;
}
int num_odd_even(){
    int num ;
    printf("enter the value of numbers :");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("%d is a even number",num);
    }
    else{
        printf("%d is a odd number",num);
    }
    return 0 ;
}
int max_min_of3int(){
    int a ,b, c ;
    printf("enter the values of a,b&c");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("a is the largest");
    }
    else if(b>c){
        printf("b is the largest");
    }
    else{
       printf("c is the largest"); 
    }
    if(a<b && a<c){
        printf("a is the smallest");
    }
    else if(b<c){
        printf("b is the smallest");
    }
    else{
       printf("c is thes smallest"); 
    }
    return 0 ;
}
char range_test(){
    char ch ;
    printf("enter a char :");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("LOWER CASE");
    }
    else if(ch>='A' && ch<='Z'){
        printf("UPPER CASE");
    }
    else if(ch>='0' && ch<='9'){
        printf("NUMERICAL VALUE");
    }
    else{
        printf("SPECIAL CHAR");
    }
    return 0 ; 
}
int conversion_seconds(){
    int sec , hrs , min ;
    printf("enter number of seconds :");
    scanf("%d",&sec);
    hrs = sec / 3600 ;
    min = (sec % 3600)/60 ;
    sec = sec - (hrs * 3600) -(min * 60);
    printf("the value of hrs is %d",hrs);
    printf("the value of min is %d",min);
    printf("the value of sec is %d",sec);
    return 0 ;
}
int conditional_statements(){
    int p ,q , r,s ;
    printf("enter the values of the 4 int");
    scanf("%d %d %d %d",&p,&q,&r,&s);
    if(q>0 && r>0 && s>0 && p%2==0 && q>r && s>p && r+s>p+q){
        printf("correct values");
    }
    else{
        printf("wrong values");
    }
    return 0 ;
}
int palindrome(){
    int num ,rev= 0,rem,flag ;
    printf("enter a number :");
    scanf("%d",&num);
    flag = num; 
    while (flag != 0){
        rem = flag %10 ;
        rev = rev*10 + rem ;
       flag /= 10 ;
    }
    if(num == rev ){
        printf("%d is a palindrome",num);
    }
    else{
        printf("%d is not a palindrome",num);
    }
    return 0 ;
}
int sum_ofNnum(){
    int num,sum =0 ; 
    printf("enter the value of the number:");
    scanf("%d",&num);
    for(int i ; i<= num ; i++){
        sum += i ;
    }
    printf("the sum of %d natural numbers is %d",num,sum);
    return 0;
}
int factorial_ofnum(){
    int num, i, factorial =1;
    printf("enter a number :");
    scanf("%d",&num);
    for(i= 1;i<= num ; i++){
        factorial *= i ;
    }
    printf("%d factorial is %d",num,factorial);
    return 0 ;
}
int addnum_until_enter0(){
    int num,sum = 0  ; 
    do
    {
        printf("enter a number:");
        scanf("%d",&num);
        sum += num ;
    } while (num != 0 );
    printf("the sum of all numbers is %d",sum);
    return 0 ;
}
int multiplication_table(){
    int i , j,m ,n,val ;
    printf("enter the value of n and m :");
    scanf("%d %d",&n,&m);
    for(i=1; i<=n; i++){
        for(j=1 ;j<=m;j++){
            val = i*j;
            printf("%d * %d = %d\n",i,j,val);
        }
    }
return 0 ;
}
int primenum_bw2num(){
    int ul , ll ,prime,i,j ;
    printf("enter the upper and lower limits:");
    scanf("%d %d",&ll,&ul);
    for(i=ll; i<=ul ;i++){
        if(i<1){
            continue;
        }
        prime = 1; 
        for(j=2;j<= i/2 ;j++){
            if(i%j== 0){
                prime = 0 ;
                break ; 
            }
        }
        if(prime == 1){
            printf("%d\n",i);
        }
    }
     printf("/n");
return 0 ;
}
int armstrong_number(){
   int num , sum = 0 , rem,flag ; 
    printf("enter a number :");
    scanf("%d",&num);
    flag =num ;
    while(flag != 0){
        rem = flag % 10 ;
        sum += pow(rem,3);
        flag /= 10 ;
    }
   if(num == sum){
    printf("%d is an armstrong number",num);
   } 
   else{
    printf("%d is not an armstrong number",num);
   }
   return 0 ;
}
int strong_number(){
    int num,flag,sum =0,rem,factorial= 1; 
    printf("enter a number :");
    scanf("%d",&num);
    flag = num ;
    while(flag !=0){
        rem = flag % 10 ;
        factorial= 1;
        for(int i = 1 ; i <= rem ; i++){
            factorial *= i ;
        }
        sum += factorial ; 
        flag /= 10 ;
    }
    if(num == sum){
        printf("%d is a strong number",num);
    }
    else{
        printf("%d is a not strong number",num);
    }
return 0 ;
}
int flody_triangle(){
     int n,i,j,num = 1;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i =1 ; i<= n ;i++){
       for(j=1 ; j<=i ; j++){
        printf("%d",num);
        num++ ; 
       }
       printf("\n");
    }
    return 0 ;
}
int perfect_number(){
     int num,i,sum = 0 ;
    printf("enter a numuber :");
    scanf("%d",&num);
    for(i= 1 ; i< num ; i++){
        if(num%i == 0 ){
            sum = sum + i ;
        }
    }
    if(sum == num){
        printf("%d is a perfect number",num);
    }
    else{
        printf("%d is not a perfect number",num);
    }
    return 0 ;
}
int generic_root(){
    int num , sum = 0 ;
    printf("enter the value of the number ");
    scanf("%d",&num);
    while (num >= 10) {
        sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
    }
    printf("The generic root is %d\n", num);
    
    return 0;
}
float quadratic(){
    float a,b,c ,root1 ,root2,real ,img , d;
    printf("enter the coeff of the equation :");
    scanf("%f %f %f",&a,&b,&c);
    d = (b*b)- (4 * a * c);
    if(d==0){
        printf("the roots are real and equal");
        root1 = -b / (2 *a) ;
        root2 = -b / (2 *a) ;
        printf("root1 = %f && root2 = %f",root1,root2);
    }
    else if(d>0){
        printf("the roots are real and distinct");
        root1 = (-b + sqrt(d))/ (2 *a) ;
        root2 = (-b - sqrt(d)) / (2 *a) ;
        printf("root1 = %f && root2 = %f",root1,root2);
    }
    else{
        printf("the roots are imaginary and complex");
        real =-b / (2*a ) ; 
        img = sqrt(-d) / (2*a) ;
        printf("root1 = %f+ i%f && root2 = %f - i%f",real,img,real,img);
    }
    return 0 ; 
}
int squares_of_evennum(){
    int num, i,square; 
    printf("enter the value of number :");
    scanf("%d",&num);
    for(i=1;i<=num ;i++ ){
        if(i%2==1){
            continue;
        }
        square = pow(i,2);
        printf("%d^2= %d\n",i,square);
    }
    printf("\n");
   return 0;
}
int prime_composite_count(){
           int num,prime,prime_count=0,composite_count=0, i  ;
    do {
        printf("enter a number:");
        scanf("%d",&num);
        if(num < 0){
            continue;
        }
        prime = 1 ;
        for(i=2 ; i< num; i++){
            if(num%i == 0){
                prime = 0 ;
                break;
            }}
            if(prime == 1){
                prime_count++;
            }
            else{
                composite_count++ ; 
            }  
    } while (num != 0);
    printf("the number of primes are %d",prime_count);
    printf("the number of composite num are %d",composite_count);
    return 0 ;
}
int add2_1Darray(){
    int a[50],b[50],c[50],i,n,m;
    printf("enter the values of n & m");
    scanf("%d %d",&n,&m);
     if(n != m ){
        printf("CAN NOT ADD");
    }
    else{
    printf("elements of first matrix");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("elements of second matrix");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    if(n != m ){
        printf("CAN NOT ADD");
    }
    
        for(i=0;i<n;i++){
            c[i] = a[i] +b[i]; 
            printf(" %d ",c[i]);
        }
    }
return 0;
}
int reverse_1Darray(){
    int arr[10],i,n;
    printf("enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=n-1 ;i>= 0 ; i--){
        printf("%d",arr[i]);
    }
    return 0;
}
