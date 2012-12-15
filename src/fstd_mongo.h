/* What's a word */
#define word float

/* define error levels */
#define TRIVIAL 0               /* trivial error */
#define INFORM 1                /* informative message */
#define WARNING 2               /* warning message */
#define ERROR 3                 /* important error */
#define ERRFATAL 4              /* fatal error */
#define SYSTEM 5                /* internal software error */
#define KAPUT 6                 /* error not tolerable, automatic abort */

#define bytesperword 8 /* Just guessing... */
char errmsg[1024];     /* buffer to format error messages */
int msg_level=INFORM;  /* error tolerance before error message is issued */
int xdf_toler=ERROR;   /* error tolerance before program is aborted */
int xdf_stride=1;      /* stride */
int xdf_double=0;      /* double float indicator */
int xdf_short=0;       /* short integer indicator */
int xdf_byte=0;        /* byte array indicator */
int xdf_enforc8=0;     /* enforce 8 char for date specifications */
int xdf_datatyp;       /* data type of last record read */
int xdf_nsplit=1;      /* number of splited output files in xdfuse */
int FTN_Bitmot=8*bytesperword; /* number of bits per FORTRAN word */
int image_mode_copy=0; /* no pack/unpack, used by editfst */
int xdf_checkpoint=0;  /* chekcpoint mode, no closing of the file */

/* define maximum values for stdf descriptors */
#define DEET_MAX    0xFFFFFF
#define NBITS_MAX   64
#define NI_MAX      0xFFFFFF
#define NJ_MAX      0xFFFFFF
#define NK_MAX      0xFFFFF
#define NPAS_MAX    0xFFFFFF
#define IG1_MAX     0xFFFFFF
#define IG2_MAX     0xFFFFFF
#define IG3_MAX     0xFFFFFF
#define IG4_MAX     0xFFFFFF
#define IP1_MAX     0xFFFFFFF
#define IP2_MAX     0xFFFFFFF
#define IP3_MAX     0xFFFFFFF

#define MAX_RECORD_LENGTH 33554400

/* Not sure why they defined they're own... */
#define string_copy(dest,src,l) while(--l >= 0) dest[l]=src[l]
#define Min(x,y) ((x < y) ? x : y)
#define Max(x,y) ((x > y) ? x : y)

