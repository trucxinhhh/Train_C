#include"math.h"
#include"stdio.h"
#include"conio.h"
// TASK 1a
//int main (){
//	char ten[50],lop[10];int d,m,y,ms;
//	printf("\n Nhap ten :");
//	fgets(ten,sizeof(ten),stdin);
//	printf("\n Nhap Lop :");
//	fgets(lop,sizeof(lop),stdin);
//	printf("\n Nhap ngay sinh ");
//	scanf("%d%d",&d,&m);scanf("%d",&y);
//	printf("\n Nhap MSSV : ");
//	scanf("%d",&ms);
//	// XUAT
//	printf("\nHo va Ten :%s",ten);
//	printf("\nNgay sinh : %d/%d/%d",d,m,y);
//	printf("\nMSSV      : %d",ms);
//	printf("\nLop       : %s",lop);	
//}
//// TASK 1b
//int main (){
//	int a,i;
//	printf("\n Nhap so ban cuu chuong :");
//	scanf("%d",&a);	printf("\n Ban cuu chuong Nhan %d",a);
//	for (i=1;i<=a+1;i+=1){
//		printf("\n %d x %d = %d ",a,i,i*a);
//	}
//	printf("\n Ban cuu chuong Chia %d",a);
//	i=1;
//	do{
//		printf("\n %d / %d = %d ",i*a,a,i);
//		i++;
//	}while(i<=10);
//}
// TASK 1c
// int main (){
// 	int a,i,jj,j,n,k;
// 	printf("Nhap n ve Cay Thong : ");
// 	scanf("%d",&n);
// 	for (i=0;i<=n;i++) {
//    for(j=1; j<=n-i; j++){
//      printf(" ");
//    }
//    for(k=1; k<=2*i-1; k++){
//     printf("*");
//    }
//    for(j=1; j<=n-i; j++){
//     printf(" ");
//	 }
//     printf("\n");
// }  
//   for (i=0;i<=n;i++) {
//    for(j=2; j<=n-i; j++){
//      printf(" ");
//    }printf("*"); goto A;
//}
//A:
//	  printf("\n");
//  for (i=0;i<=n;i++) {
//    for(j=2; j<=n-i; j++){
//      printf(" ");
//    }printf("*"); goto B;
//} B:
//	return 0;
//}
// TASK 2
//int main (){
//  long a,b,c,d,e,f,g,h,hh;
//  printf("\n\tSo Tien :");
//  scanf("%d",&a);
//	b=a/500000;
//	c=a%500000;
//	d=c/200000;
//	e=c%200000;
//	f=e/100000;
//	g=e%100000;
//	h=g/50000;
//	hh=g%50000;
//	printf("500.000 : %d to| 200.000 : %d to | 100.000 : %d to | 50.000 : %d to",b,d,f,h);
//	printf("\n\tCon lai : %d ",hh);
//}
//// TASK 3

bool check_date(int d, int m){
 if ((m==2) && (d>0) && (d<30)){
 return true;
 }
 if (((m==1) ||(m==3) ||(m==5) ||(m==7) ||(m==8) ||(m==10)||(m==12)) && ((d>0) && (d<32)))
 {
 return true;
 }
 if (( (m==4) || (m==6) || (m==9) || (m==11) ) && ((d>0) && (d<31)))
 {
 return true;
 }
 return false;
}
 
bool check_month(int m){
 if ((m>0) && (m<13)){
  return true;
 }else{
  return false;
 }
}
bool check_year(int y){
 
 if ((y>999) && (y < 10000)){
 return true;
 }else{
 return false;
 }
 
}
bool check_leap_year(int y){
 if (((y % 4)==0) && ((y % 100)!=0)||((y% 400)==0)){
  return true;
 }else {
  return false;
 }
}
 
const char *get_day(int d, int m, int y){
  int JMD;
   JMD = (d + ((153 * (m+ 12 * ((14 - m) / 12) - 3) + 2) / 5) +
     (365 * (y + 4800 - ((14 - m) / 12))) +
     ((y + 4800 - ((14 - m) / 12)) / 4) - 
    ((y + 4800 - ((14 - m) / 12)) / 100) + 
    ((y + 4800 - ((14 - m) / 12)) / 400)  - 32045) % 7;
 const char *weekday[] = {"Thu 2",  "Thu 3",  "Thu 4", "Thu 5", "Thu 6",  "Thu 7",  "Chu nhat"};
 return weekday[JMD];
}
 
 
main(){
 int y, m, d, x, i;
 printf("\nNHAP NGAY : ");
scanf("%d",&d);
 
 
 // verify date
 if (check_date(d, m)){
  printf("\nOK");
 }else{
   printf("\n NHAP SAI \n");
 return 0;
 }
  printf("\nNHAP THANG ");
 scanf("%d",&m);
 
 // verify month
 if (check_month(m)){
   printf("\nOK");
 }else{
   printf("\n NHAP SAI \n");return 0;
 }
 printf("\nNHAP NAM : ");
scanf("%d",&y);
// cout << "\n[+] Kiem tra  [YYYY] : ";
 
 // verify year
 if (check_year(y)){
   printf("\nOK");
 }else{
  printf("\n NHAP SAI \n");return 0;
 }
 
 
 
 printf("\n NGAY : %d || THANG : %d || NAM : %d \n",d,m,y);
 printf("\nNgay trong tuan:");
printf("%s \n", get_day(d, m, y));

}
