  #include <sys/types.h>
  #include <unistd.h>
  #include <stdio.h>

  main()
  {
     pid_t pid;
     char *const parmList[] = {"/usr/bin/valgrind", "/home/rocky/myprojects/Bogu/midle_2", NULL};
     
     printf("Running vsalgrind from midle");
     if ((pid = fork()) == -1)
        perror("fork error");
     else if (pid == 0) {
        execv("/usr/bin/valgrind", parmList);
        printf("Return not expected. Must be an execv error.n");
     }
  }