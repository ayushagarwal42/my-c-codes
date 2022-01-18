#include<stdio.h>
int main()
{
  /* initialize diff,
                fdt,fmth,fyr,
                tdt,tmth,tyr;
  
     enter (from date)  | scanf and printf user input date
     enter (from month) | scanf and printf user input month
     enter (from year)  | scanf and printf user input year

     enter (to date)  | scanf and printf user input date
     enter (to month) | scanf and printf user input month
     enter (to year)  | scanf and printf user input year

     diff_in_years = tyr - fyr;
     diff_in_mths = tmth - fmth;
     diff_in_dt = tdt - fdt;

     */

   int fdt,fmth,fyr,tdt,tmth,tyr,diff_dt,diff_mth,diff_yr,tot_dys;
   printf("\nenter (from date ,from month ,from year) in dd/mm/yyyy\n");
   scanf("%d/%d/%d",&fdt,&fmth,&fyr);
   printf("your input is -> ");
   printf("%d/%d/%d\n",fdt,fmth,fyr);

   printf("\nenter (to date ,to month ,to year) in dd/mm/yyyy\n");
   scanf("%d/%d/%d",&tdt,&tmth,&tyr);
   printf("your input is -> ");
   printf("%d/%d/%d\n",tdt,tmth,tyr);


   diff_dt = tdt - fdt;
   diff_mth = tmth - fmth;
   diff_yr = tyr - fyr;
   
   printf("\ndifference\n");
   printf("%d yrs %d months %d days\n",diff_yr,diff_mth,diff_dt);
   diff_yr*=365;
   diff_mth*=30.0;
   tot_dys = diff_yr + diff_mth + diff_dt;
   printf("%d ",tot_dys);
   printf("from %d/%d/%d to %d/%d/%d\n\n",fdt,fmth,fyr,tdt,tmth,tyr);
   return 0;
}
// 1yr = 365 days
// 1mth = 30 days