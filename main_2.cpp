  #include <sys/types.h>
  #include <unistd.h>
  #include <stdio.h>

  main()
  {
     pid_t pid;
     char *const parmList[] = {"/bin/ls", "-l", "/u/userid/dirname", NULL};

     if ((pid = fork()) == -1)
        perror("fork error");
     else if (pid == 0) {
        execv("/home/rocky/myprojects/Bogu/b.out", parmList);
        printf("Return not expected. Must be an execv error.n");
     }
  }