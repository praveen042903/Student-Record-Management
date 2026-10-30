#include"header.h"
int main()
{
        char op;
        struct st *head=NULL;
	stud_load(&head);
	while(1)
	{
        printf("   **** STUDENT RECORD MENU ****\n");
        printf(" \n");
        printf(" *--------------------------------*\n");
        printf(" | A/a |     Add New Record       |\n");
        printf(" +--------------------------------+\n");
        printf(" | D/d |     Delete a Record      |\n");
        printf(" +--------------------------------+\n");
        printf(" | S/s |     Show the List        |\n");
        printf(" +--------------------------------+\n");
        printf(" | M/m |     Modify a Record      |\n");
        printf(" +--------------------------------+\n");
        printf(" | V/v |     Save                 |\n");
        printf(" +--------------------------------+\n");
        printf(" | T/t |     Sort the List        |\n");
        printf(" +--------------------------------+\n");
        printf(" | E/e |     Exit                 |\n");
        printf(" *--------------------------------*\n");
        printf("\n");
        printf("Enter Your Choice:");
        scanf(" %c",&op);
       

/////////
      switch (op|32)
      {
        case'A':
        case'a':add_end(&head);
                break;

        case'D':
        case'd':stud_del(&head);
                break;

        case's':
        case'S':stud_show(&head);
		break;

	case'M':
        case'm':stud_mod(&head);
                break;
	
	case'T':
        case't':stud_sort(&head);
                break;	

	case'V':
        case'v':stud_save(&head);
                break;
	
	case'E':
	case'e':stud_exit(&head);
                break;

	
      }


}
}

