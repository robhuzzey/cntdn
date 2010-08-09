/* Header for cntdn

   James Stanley 2010 */

#ifndef CNTDN_H_INC
#define CNTDN_H_INC

#include <getopt.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

/* cntdn.c */
void die(const char *reason);

/* opts.c */
extern char *program_name;

extern int players;

void parse_opts(int argc, char **argv);

/* players.c */
typedef struct {
  char *name;
  int score;
} Player;
extern Player *player;

void make_players(void);
void show_scores(void);

/* strings.c */
const char *get_name(void);

/* games.c */
void letters_round(void);
void numbers_round(void);
void teatime_teaser(void);
void conundrum(void);

/* dictcorner.c */
void origin_of_words(void);

#endif
