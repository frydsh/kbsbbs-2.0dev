/* uhashgen.h generated by uhashgen.pl
  don't modify it
     ----  by wwj*/

#define UCACHE_HASHSIZE  330000
#define UCACHE_HASHKCHAR 3
#define UCACHE_HASHBSIZE 374
typedef struct {
    short hash0[26];
    short hash[226][36];
} ucache_hashtable;
