       #include <stdlib.h>
       //#include <limits.h>
       #include <stdio.h>
       #include <errno.h>

       int
       main(int argc, char *argv[])
       {
           int base = 10; //десятичная СИ
           char *endptr, *str;
           long val;
           long sum = 0;
           
           printf("Программа сумматор чисел\n\n");
	   //обработчик если аргумент не был написан / только один аргумент
           if (argc < 2) {
               printf("Введи аргумент\n");
               exit(1);
           } else if (argc < 3){
           	printf("Введен только один аргумент\n");
           	exit(1);
           }
           
	   for (int i = 1; i < argc; i++){
	   	str = argv[i];
           
		errno = 0;    /* To distinguish success/failure after call */
		val = strtol(str, &endptr, base); //

		/* Check for various possible errors. */

		if (errno != 0) {
		    perror("Strtol error");
		    exit(1);
		}

		if (endptr == str) {
		    perror("No digits");
		    exit(1);
		}

		/* If we got here, strtol() successfully parsed a number. */

		printf("Число №%d: %ld\n", i, val);
		
		sum+=val;
	   
	   }
           
	   printf("Сумма чисел: %ld\n", sum);
           
           exit(1);
       }
