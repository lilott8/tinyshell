//#include "commands.h"
cmdEntry_t cmdsTable[] =
{
  { "quit", cmd_quit, " : Quit TinyShell" },
  { "q",    cmd_quit, " : Alias for quit" },
  { "help", cmd_help, " : Display list of commands" },
  { "?",    cmd_help, " : Alias for help"},
  { "jobs", cmd_jobs, " : List running jobs" },
  { "bg",   cmd_bg,   " : Move program <pid> to the background" },
  { "fg",   cmd_fg,   " : Move program <pid> to the forground" }
};

/* Implementation of the functions */
int cmd_quit(int argc, char *argv[]){
  printf("We are quitting!\n");
  exit(0);
}

int cmd_help(int argc, char *argv[]){
  int i;

  printf("TinyShell provides these limited commands: \n");

  for(i=0;i<sizeof(cmdsTable)/sizeof(cmdsTable[0]);i++) {
    printf("%s %s\n", cmdsTable[i].cmd, cmdsTable[i].help);
  }
  return 1;
}

int cmd_jobs(int argc, char *argv[]){
  return 1;
}

int cmd_bg(int argc, char *argv[]){
  return 1;
}

int cmd_fg(int argc, char *argv[]){
  return 1;
}
