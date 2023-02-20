/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("Hello World\n");
 
    FILE* fp;
	fp = fopen("Sample.txt", "r");
	int file[50];

	for (int i=0; i< 50; i++){
    	fscanf(fp,"%d", &file[i]);
    	
    	//printf("%d", file[i]);
    }
    fclose(fp);

    int dept1 = 0;
    int dept2 = 0;
    int dept3 = 0;
    int dept4 = 0;
    int dept5 = 0;
    
    int q;
    for (q=0; q < 5; q++){
        for (int w = 0; w < 5; w++){
            if (q != w){
                if (file[q] == file[w]){ //conflict
                    printf("%d",q);
                    
                    int e;
                    for(e = 25; e < 50; e++){

                        if ((e % 5) == q){
                            int person = (q+1);
                            //printf("\nthis row %d", file[e]);
                            if ((file[e] == 1) && (q == 0)){
                                dept1 = (person);
                            }else if((file[e] == 2) && (q == 1)){
                                dept2 = (person);
                            }else if((file[e] == 3) && (q  == 2)){
                                dept3 = (person);
                            }else if((file[e] == 4) && (q  == 3)){
                                dept4 = (person);
                            }
                        }
                        
                        
                    }
                    
                    
                }else{ // no conflict
                    if (q = 4){// ------------------Add other departments!--------
                        dept5 = file[q];
                    }
                }
            }
        }
    }
    printf("Department #1 gets Programmer #%d\n",dept1);
    printf("Department #2 gets Programmer #%d\n",dept2);
    printf("Department #3 gets Programmer #%d\n",dept3);
    printf("Department #4 gets Programmer #%d\n",dept4);
    printf("Department #5 gets Programmer #%d\n",dept5);
    printf("\nGoodbye World");


    return 0;
}
