#ifndef __RBENV_H__
#define __RBENV_H__

#include "path.h"
#include "strarray.h"
#include <sys/types.h>

#define streq(a, b) (a && b && strcmp(a, b) == 0)
#define default(a, b) a ? a : b

void rbenv_initialize(char *);
void rbenv_initialize_debug_mode();
void rbenv_initialize_root();
void rbenv_initialize_dir();
void rbenv_initialize_path();
void rbenv_initialize_hook_path();
void rbenv_exec_subcommand(char *, char **);
void rbenv_print_version();
void rbenv_print_help();
char *rbenv_subcommand_name(char *);

char *rbenv_progname;
char *rbenv_root;
char *rbenv_dir;

#endif