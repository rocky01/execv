  #include <sys/types.h>
  #include <unistd.h>
  #include <stdio.h>

  main()
  {
     pid_t pid;
     char *const parmList[] = {"/home/rocky/myprojects/Bogu/midle",  NULL};

     printf("App first try to run fake");
     if ((pid = fork()) == -1)
        perror("fork error");
     else if (pid == 0) {
        
        execv("/home/rocky/myprojects/Bogu/midle", parmList);
        printf("Return not expected. Must be an execv error.n");
     }
  }