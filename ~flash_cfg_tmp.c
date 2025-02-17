#line 1 "tools\\NVRAMStatistic\\src\\ckSysDrv_flash_cfg_preproc.c"

































 










































































































 

#line 1 "custom\\common\\hal\\flash_opt.h"

































 
































































 

#line 1 "custom\\system\\HEXING60A_11B_BB\\custom_MemoryDevice.h"

































 

































































































































































































































































































 


























 






 









 























 








 
























 





























 


































 


 












 



  
























          

























































 











































 






















































 

#line 702 "custom\\system\\HEXING60A_11B_BB\\custom_MemoryDevice.h"



















 


















 



#line 102 "custom\\common\\hal\\flash_opt.h"
#line 1 "custom\\system\\HEXING60A_11B_BB\\custom_FeatureConfig.h"

































 























































































 


























 









 
#line 1 "interface\\hal\\peripheral\\kbd_table.h"

































 


























 


  
  
#line 140 "interface\\hal\\peripheral\\kbd_table.h"

   
#line 168 "interface\\hal\\peripheral\\kbd_table.h"
   
#line 177 "interface\\hal\\peripheral\\kbd_table.h"

#line 193 "interface\\hal\\peripheral\\kbd_table.h"






#line 161 "custom\\system\\HEXING60A_11B_BB\\custom_FeatureConfig.h"
#line 1 "hal\\system\\bootloader\\inc\\bl_custom.h"

































 













































 




#line 86 "hal\\system\\bootloader\\inc\\bl_custom.h"






typedef enum
{
   LOG_DEBUG,
   LOG_INFO,
   LOG_WARN,
   LOG_ERROR,
   LOG_CRIT,
   LOG_NONE,
}LOG_LEVEL;

#line 162 "custom\\system\\HEXING60A_11B_BB\\custom_FeatureConfig.h"
#line 1 "kal\\include\\kal_general_types.h"

































 










































 




#line 1 "kal\\include\\clib.h"

































 















































 
 















 
#line 1 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\setjmp.h"
 






 

 
 






 












#line 38 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\setjmp.h"




typedef __int64 jmp_buf[48];     
                             
                             

extern const int __aeabi_JMP_BUF_SIZE;
              
 
 
 
 

extern __declspec(__nothrow) int setjmp(jmp_buf  );
   




 


extern __declspec(__nothrow) __declspec(__noreturn) void longjmp(jmp_buf  , int  );
   


















 











#line 101 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\setjmp.h"



 
#line 101 "kal\\include\\clib.h"

typedef long long mtk_jmpbuf[6];







 
char *strtok_r(char *s1, const char *s2, char **ptr);

 

 
#line 1 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\time.h"
 
 
 
 









 





 












#line 40 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\time.h"


  
  typedef unsigned int size_t;








    
 
#line 64 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\time.h"





typedef unsigned int clock_t;     
typedef unsigned int time_t;      

#pragma push
#pragma anon_unions

struct tm {
    int tm_sec;   
 
    int tm_min;    
    int tm_hour;   
    int tm_mday;   
    int tm_mon;    
    int tm_year;   
    int tm_wday;   
    int tm_yday;   
    int tm_isdst;  
    union {        
        struct {
            int __extra_1, __extra_2;
        };
        struct {
            long __extra_1_long, __extra_2_long;
        };
        struct {
            char *__extra_1_cptr, *__extra_2_cptr;
        };
        struct {
            void *__extra_1_vptr, *__extra_2_vptr;
        };
    };
};

#pragma pop

   



 

extern __declspec(__nothrow) clock_t clock(void);
   





 
extern __declspec(__nothrow) double difftime(time_t  , time_t  );
   


 
extern __declspec(__nothrow) time_t mktime(struct tm *  );
   













 
extern __declspec(__nothrow) time_t time(time_t *  );
   






 

extern __declspec(__nothrow) char *asctime(const struct tm *  );

extern __declspec(__nothrow) char *asctime_r(const struct tm *  ,
                     char * __restrict  );

   



 
extern __declspec(__nothrow) char *ctime(const time_t *  );
   




 
extern __declspec(__nothrow) struct tm *gmtime(const time_t *  );
   



 
extern __declspec(__nothrow) struct tm *localtime(const time_t *  );

extern __declspec(__nothrow) struct tm *localtime_r(const time_t * __restrict  ,
                          struct tm * __restrict  );

   



 
extern __declspec(__nothrow) size_t strftime(char * __restrict  , size_t  ,
                       const char * __restrict  ,
                       const struct tm * __restrict  );
   











































 











#line 258 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\time.h"



 
#line 117 "kal\\include\\clib.h"
struct tm *localtime_r(const time_t *timer, struct tm *result);
struct tm *gmtime_r(const time_t *timer, struct tm *result);

#line 1 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdio.h"
 
 
 





 






 









#line 34 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdio.h"


  
  typedef unsigned int size_t;    








 
 

 
  typedef struct __va_list __va_list;





typedef struct __fpos_t_struct {
    unsigned __int64 __pos;
    



 
    struct {
        unsigned int __state1, __state2;
    } __mbstate;
} fpos_t;
   


 


   

 

typedef struct __FILE FILE;
   






 

extern FILE __stdin, __stdout, __stderr;
extern FILE *__aeabi_stdin, *__aeabi_stdout, *__aeabi_stderr;

#line 115 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdio.h"
    

    

    





     



   


 


   


 

   



 

   


 




   


 





    


 






extern __declspec(__nothrow) int remove(const char *  );
   





 
extern __declspec(__nothrow) int rename(const char *  , const char *  );
   








 
extern __declspec(__nothrow) FILE *tmpfile(void);
   




 
extern __declspec(__nothrow) char *tmpnam(char *  );
   











 

extern __declspec(__nothrow) int fclose(FILE *  );
   







 
extern __declspec(__nothrow) int fflush(FILE *  );
   







 
extern __declspec(__nothrow) FILE *fopen(const char * __restrict  ,
                           const char * __restrict  );
   








































 
extern __declspec(__nothrow) FILE *freopen(const char * __restrict  ,
                    const char * __restrict  ,
                    FILE * __restrict  );
   








 
extern __declspec(__nothrow) void setbuf(FILE * __restrict  ,
                    char * __restrict  );
   




 
extern __declspec(__nothrow) int setvbuf(FILE * __restrict  ,
                   char * __restrict  ,
                   int  , size_t  );
   















 
#pragma __printf_args
extern __declspec(__nothrow) int fprintf(FILE * __restrict  ,
                    const char * __restrict  , ...);
   


















 
#pragma __printf_args
extern __declspec(__nothrow) int _fprintf(FILE * __restrict  ,
                     const char * __restrict  , ...);
   



 
#pragma __printf_args
extern __declspec(__nothrow) int printf(const char * __restrict  , ...);
   




 
#pragma __printf_args
extern __declspec(__nothrow) int _printf(const char * __restrict  , ...);
   



 
#pragma __printf_args
extern __declspec(__nothrow) int sprintf(char * __restrict  , const char * __restrict  , ...);
   






 
#pragma __printf_args
extern __declspec(__nothrow) int _sprintf(char * __restrict  , const char * __restrict  , ...);
   



 

#pragma __printf_args
extern __declspec(__nothrow) int snprintf(char * __restrict  , size_t  ,
                     const char * __restrict  , ...);
   















 

#pragma __printf_args
extern __declspec(__nothrow) int _snprintf(char * __restrict  , size_t  ,
                      const char * __restrict  , ...);
   



 
#pragma __scanf_args
extern __declspec(__nothrow) int fscanf(FILE * __restrict  ,
                    const char * __restrict  , ...);
   






























 
#pragma __scanf_args
extern __declspec(__nothrow) int _fscanf(FILE * __restrict  ,
                     const char * __restrict  , ...);
   



 
#pragma __scanf_args
extern __declspec(__nothrow) int scanf(const char * __restrict  , ...);
   






 
#pragma __scanf_args
extern __declspec(__nothrow) int _scanf(const char * __restrict  , ...);
   



 
#pragma __scanf_args
extern __declspec(__nothrow) int sscanf(const char * __restrict  ,
                    const char * __restrict  , ...);
   








 
#pragma __scanf_args
extern __declspec(__nothrow) int _sscanf(const char * __restrict  ,
                     const char * __restrict  , ...);
   



 

 
extern __declspec(__nothrow) int vfscanf(FILE * __restrict  , const char * __restrict  , __va_list);
extern __declspec(__nothrow) int vscanf(const char * __restrict  , __va_list);
extern __declspec(__nothrow) int vsscanf(const char * __restrict  , const char * __restrict  , __va_list);

extern __declspec(__nothrow) int _vfscanf(FILE * __restrict  , const char * __restrict  , __va_list);
extern __declspec(__nothrow) int _vscanf(const char * __restrict  , __va_list);
extern __declspec(__nothrow) int _vsscanf(const char * __restrict  , const char * __restrict  , __va_list);

extern __declspec(__nothrow) int vprintf(const char * __restrict  , __va_list  );
   





 
extern __declspec(__nothrow) int _vprintf(const char * __restrict  , __va_list  );
   



 
extern __declspec(__nothrow) int vfprintf(FILE * __restrict  ,
                    const char * __restrict  , __va_list  );
   






 
extern __declspec(__nothrow) int vsprintf(char * __restrict  ,
                     const char * __restrict  , __va_list  );
   






 

extern __declspec(__nothrow) int vsnprintf(char * __restrict  , size_t  ,
                     const char * __restrict  , __va_list  );
   







 

extern __declspec(__nothrow) int _vsprintf(char * __restrict  ,
                      const char * __restrict  , __va_list  );
   



 
extern __declspec(__nothrow) int _vfprintf(FILE * __restrict  ,
                     const char * __restrict  , __va_list  );
   



 
extern __declspec(__nothrow) int _vsnprintf(char * __restrict  , size_t  ,
                      const char * __restrict  , __va_list  );
   



 
extern __declspec(__nothrow) int fgetc(FILE *  );
   







 
extern __declspec(__nothrow) char *fgets(char * __restrict  , int  ,
                    FILE * __restrict  );
   










 
extern __declspec(__nothrow) int fputc(int  , FILE *  );
   







 
extern __declspec(__nothrow) int fputs(const char * __restrict  , FILE * __restrict  );
   




 
extern __declspec(__nothrow) int getc(FILE *  );
   







 




    extern __declspec(__nothrow) int (getchar)(void);

   





 
extern __declspec(__nothrow) char *gets(char *  );
   









 
extern __declspec(__nothrow) int putc(int  , FILE *  );
   





 




    extern __declspec(__nothrow) int (putchar)(int  );

   



 
extern __declspec(__nothrow) int puts(const char *  );
   





 
extern __declspec(__nothrow) int ungetc(int  , FILE *  );
   






















 

extern __declspec(__nothrow) size_t fread(void * __restrict  ,
                    size_t  , size_t  , FILE * __restrict  );
   











 

extern __declspec(__nothrow) size_t __fread_bytes_avail(void * __restrict  ,
                    size_t  , FILE * __restrict  );
   











 

extern __declspec(__nothrow) size_t fwrite(const void * __restrict  ,
                    size_t  , size_t  , FILE * __restrict  );
   







 

extern __declspec(__nothrow) int fgetpos(FILE * __restrict  , fpos_t * __restrict  );
   








 
extern __declspec(__nothrow) int fseek(FILE *  , long int  , int  );
   














 
extern __declspec(__nothrow) int fsetpos(FILE * __restrict  , const fpos_t * __restrict  );
   










 
extern __declspec(__nothrow) long int ftell(FILE *  );
   











 
extern __declspec(__nothrow) void rewind(FILE *  );
   





 

extern __declspec(__nothrow) void clearerr(FILE *  );
   




 

extern __declspec(__nothrow) int feof(FILE *  );
   


 
extern __declspec(__nothrow) int ferror(FILE *  );
   


 
extern __declspec(__nothrow) void perror(const char *  );
   









 

extern __declspec(__nothrow) int _fisatty(FILE *   );
    
 

extern __declspec(__nothrow) void __use_no_semihosting_swi(void);
extern __declspec(__nothrow) void __use_no_semihosting(void);
    





 











#line 934 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdio.h"



 
#line 122 "kal\\include\\clib.h"
#line 1 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdarg.h"
 
 
 





 









#line 26 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdarg.h"








 

 
 
  typedef struct __va_list { void *__ap; } va_list;

   






 


   










 


   















 


    


   




 



   





 






#line 114 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdarg.h"











 
#line 123 "kal\\include\\clib.h"
#line 1 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\wchar.h"
 
 




 









#line 25 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\wchar.h"


      
      typedef unsigned int size_t;    







        



          typedef unsigned short wchar_t;  
#line 47 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\wchar.h"


      
      typedef int wint_t;    








         
        
 



#line 72 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\wchar.h"


     
     

     
      typedef struct __va_list __va_list;





    











 
    typedef struct {
        unsigned int __state, __state2;
    } mbstate_t;

    


 
    struct tm;

    extern __declspec(__nothrow) size_t wcsftime(wchar_t * __restrict  , size_t  ,
                       const wchar_t * __restrict  , const struct tm * __restrict  );

    





 
#pragma __printf_args
    int swprintf(wchar_t * __restrict  , size_t  ,
                 const wchar_t * __restrict  , ...);
#pragma __printf_args
    int vswprintf(wchar_t * __restrict  , size_t  ,
                  const wchar_t * __restrict  , __va_list  );
#pragma __scanf_args
    int swscanf(const wchar_t * __restrict  ,
                const wchar_t * __restrict  , ...);
#pragma __scanf_args
    int vswscanf(const wchar_t * __restrict  ,
                 const wchar_t * __restrict  , __va_list  );

    wint_t btowc(int  );
    wint_t wctob(int  );
    int mbsinit(const mbstate_t *  );
    size_t mbrlen(const char * __restrict  , size_t  ,
                  mbstate_t * __restrict  );
    size_t mbrtowc(wchar_t * __restrict  ,
                   const char * __restrict  ,
                   size_t  , mbstate_t * __restrict  );
    size_t wcrtomb(char * __restrict  , wchar_t  ,
                   mbstate_t * __restrict  );
    size_t mbsrtowcs(wchar_t * __restrict  ,
                     const char ** __restrict  ,
                     size_t  , mbstate_t * __restrict  );
    size_t wcsrtombs(char * __restrict dst,
                     const wchar_t ** __restrict  ,
                     size_t  , mbstate_t * __restrict  );

    

 
    double wcstod(const wchar_t *  , wchar_t **  );
    float wcstof(const wchar_t *  , wchar_t **  );
    long double wcstold(const wchar_t *  , wchar_t **  );
    long int wcstol(const wchar_t *  , wchar_t ** ,
                    int  );
    unsigned long int wcstoul(const wchar_t *  ,
                              wchar_t **  , int  );

    long long int wcstoll(const wchar_t * __restrict  ,
                          wchar_t ** __restrict  , int  );
    unsigned long long int wcstoull(const wchar_t * __restrict  ,
                                    wchar_t ** __restrict  ,
                                    int  );


    

 
    wchar_t *wcscpy(wchar_t * __restrict  ,
                    const wchar_t * __restrict  );
    wchar_t *wcsncpy(wchar_t * __restrict  ,
                     const wchar_t * __restrict  , size_t  );
    wchar_t *wmemcpy(wchar_t * __restrict  ,
                     const wchar_t * __restrict  , size_t  );
    wchar_t *wmemmove(wchar_t * __restrict  ,
                      const wchar_t * __restrict  , size_t  );
    wchar_t *wcscat(wchar_t * __restrict  ,
                    const wchar_t * __restrict  );
    wchar_t *wcsncat(wchar_t * __restrict  ,
                     const wchar_t * __restrict  , size_t  );
    int wcscmp(const wchar_t * __restrict  ,
               const wchar_t * __restrict  );
    int wcsncmp(const wchar_t * __restrict  ,
                const wchar_t * __restrict  , size_t  );
    int wcscoll(const wchar_t * __restrict  ,
                const wchar_t * __restrict  );
    size_t wcsxfrm(wchar_t * __restrict  ,
                   const wchar_t * __restrict  , size_t  );
    int wmemcmp(const wchar_t * __restrict  ,
                const wchar_t * __restrict  , size_t  );
    size_t wcscspn(const wchar_t * __restrict  ,
                   const wchar_t * __restrict  );
    size_t wcsspn(const wchar_t * __restrict  ,
                  const wchar_t * __restrict  );
    wchar_t *wcstok(wchar_t * __restrict  ,
                    const wchar_t * __restrict  ,
                    wchar_t ** __restrict  );
    wchar_t *wmemchr(const wchar_t * __restrict  , wchar_t  ,
                     size_t  );
    size_t wcslen(const wchar_t * __restrict  );
    wchar_t *wmemset(wchar_t * __restrict  , wchar_t  , size_t  );

#line 225 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\wchar.h"
    






 
    wchar_t *wcschr(const wchar_t * __restrict  , wchar_t  );
    wchar_t *wcspbrk(const wchar_t * __restrict  ,
                     const wchar_t * __restrict  );
    wchar_t *wcsrchr(const wchar_t * __restrict  , wchar_t  );
    wchar_t *wcsstr(const wchar_t * __restrict  ,
                    const wchar_t * __restrict  );












#line 300 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\wchar.h"

 
#line 124 "kal\\include\\clib.h"


#pragma diag_error 1361,2570  
#line 1 "kal\\include\\clib_list.h"

































 










































 
 
 
 





 




 
void *__alloca(size_t size) __attribute__((deprecated)) ;

 




 
void (*signal (int sig, void (* func )(int)))(int) __attribute__((deprecated)) ;
int raise(int sig) __attribute__((deprecated)) ;

 
int remove(const char * filename) __attribute__((deprecated)) ;
int rename(const char * old, const char * newname) __attribute__((deprecated)) ;
FILE *tmpfile(void) __attribute__((deprecated)) ;
char *tmpnam(char * s) __attribute__((deprecated)) ;

#line 169 "kal\\include\\clib_list.h"

 

void *calloc(size_t nmemb, size_t size) __attribute__((deprecated));
void free(void * ptr) __attribute__((deprecated));
void *malloc(size_t size) __attribute__((deprecated));
void *realloc(void * ptr, size_t size) __attribute__((deprecated));

int atexit(void (* func)(void)) __attribute__((deprecated));  
void exit(int status) __attribute__((deprecated)) ;
void _Exit(int status) __attribute__((deprecated)) ;
char *getenv(const char * name) __attribute__((deprecated));  
int  system(const char * string) __attribute__((deprecated)) ;

 
char *strtok(char * __restrict s1, const char * __restrict s2) __attribute__((deprecated)) ;

 
struct tm;
char *asctime(const struct tm * timeptr) __attribute__((deprecated)) ;
char *ctime(const time_t * timer) __attribute__((deprecated)) ;
struct tm *gmtime(const time_t * timer) __attribute__((deprecated)) ;
struct tm *localtime(const time_t * timer) __attribute__((deprecated)) ;




#line 133 "kal\\include\\clib.h"



#line 148 "kal\\include\\clib.h"

void clib_basic_init(void);
void clib_init(void);







#line 83 "kal\\include\\kal_general_types.h"



 
 
 
typedef char                    kal_char;
 
typedef unsigned short          kal_wchar;

 
typedef unsigned char           kal_uint8;
 
typedef signed char             kal_int8;
 
typedef unsigned short int      kal_uint16;
 
typedef signed short int        kal_int16;
 
typedef unsigned int            kal_uint32;
 
typedef signed int              kal_int32;

#line 112 "kal\\include\\kal_general_types.h"
 
   typedef unsigned long long   kal_uint64;
 
   typedef signed long long     kal_int64;


 
typedef enum 
{
     
    KAL_FALSE,
     
    KAL_TRUE
} kal_bool;


typedef unsigned short WCHAR;




 




#line 163 "custom\\system\\HEXING60A_11B_BB\\custom_FeatureConfig.h"
#line 1 "interface\\hal\\peripheral\\dcl.h"








 






















































































































































 






typedef char              DCL_CHAR;
typedef signed char       DCL_INT8;
typedef signed short      DCL_INT16;
typedef signed long       DCL_INT32;

typedef unsigned char      DCL_UCHAR;
typedef unsigned char      DCL_UINT8;
typedef unsigned short     DCL_UINT16;
typedef unsigned long      DCL_UINT32;





   typedef unsigned long long   DCL_UINT64;
   typedef signed long long     DCL_INT64;


typedef double             DCL_DOUBLE;

typedef int DCL_BOOL;
typedef enum
{
   DCL_FALSE = 0,
   DCL_TRUE
}DCL_BOOLEAN;

#line 1 "interface\\hal\\peripheral\\dcl_gpt.h"








 


































































 

#line 1 "kal\\include\\kal_non_specific_general_types.h"
#line 82 "interface\\hal\\peripheral\\dcl_gpt.h"
#line 1 "kal\\include\\kal_release.h"

































 










































 







 

#line 88 "kal\\include\\kal_release.h"
#line 1 "kal\\include\\kal_public_defs.h"

































 



















































































 




#line 124 "kal\\include\\kal_public_defs.h"
#line 1 "config\\include\\hal\\stack_config.h"

































 

















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































 







 




#line 1 "interface\\hal\\drv_sw_def\\drv_sw_features_g2d.h"

































 




















































 



#line 1 "hal\\drv_def\\drv_features_g2d.h"

































 


























































































 



#line 1 "hal\\drv_def\\drv_features_chip_select.h"

































 






































































 



#line 1 "hal\\drv_def\\drv_features_6260.h"

































 






































































































































 




 


 

 

 

 

 

 

 


 

 

 

 

 

 
















 

 

 

 


 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 


 


 



#line 162 "hal\\drv_def\\drv_features_chip_select.h"
     
#line 190 "hal\\drv_def\\drv_features_chip_select.h"


#line 136 "hal\\drv_def\\drv_features_g2d.h"


#line 146 "hal\\drv_def\\drv_features_g2d.h"






#line 159 "hal\\drv_def\\drv_features_g2d.h"

#line 171 "hal\\drv_def\\drv_features_g2d.h"

#line 188 "hal\\drv_def\\drv_features_g2d.h"

#line 218 "hal\\drv_def\\drv_features_g2d.h"


#line 244 "hal\\drv_def\\drv_features_g2d.h"


#line 270 "hal\\drv_def\\drv_features_g2d.h"








   
#line 285 "hal\\drv_def\\drv_features_g2d.h"
   



      
#line 299 "hal\\drv_def\\drv_features_g2d.h"


#line 1 "hal\\drv_def\\drv_features_mdp.h"

































 

































































































































































































 





#line 235 "hal\\drv_def\\drv_features_mdp.h"
#line 1 "custom\\common\\hal_public\\lcd_sw_inc.h"








 


















































 





 
#line 1 "custom\\drv\\LCD\\HEXING60A_11B_LCM\\lcd_hw.h"








 



















 

 


 


#line 38 "custom\\drv\\LCD\\HEXING60A_11B_LCM\\lcd_hw.h"

 

 
 




 

 
 





 

 
 
 
 



 





 
#line 79 "custom\\drv\\LCD\\HEXING60A_11B_LCM\\lcd_hw.h"

typedef struct {
	kal_uint8 addr;
	kal_uint8 data;
} lcd_init_setting;
    

#line 68 "custom\\common\\hal_public\\lcd_sw_inc.h"






 











 










 
#line 170 "custom\\common\\hal_public\\lcd_sw_inc.h"











 













 





#line 236 "hal\\drv_def\\drv_features_mdp.h"
#line 1 "custom\\drv\\Camera_common\\sensor_capability.h"

































 



































































































































































































































 




#line 309 "custom\\drv\\Camera_common\\sensor_capability.h"

#line 338 "custom\\drv\\Camera_common\\sensor_capability.h"

     
#line 346 "custom\\drv\\Camera_common\\sensor_capability.h"
         
#line 369 "custom\\drv\\Camera_common\\sensor_capability.h"
    
    





    
#line 388 "custom\\drv\\Camera_common\\sensor_capability.h"
    





    





    
#line 410 "custom\\drv\\Camera_common\\sensor_capability.h"



#line 420 "custom\\drv\\Camera_common\\sensor_capability.h"










#line 456 "custom\\drv\\Camera_common\\sensor_capability.h"


#line 513 "custom\\drv\\Camera_common\\sensor_capability.h"


#line 534 "custom\\drv\\Camera_common\\sensor_capability.h"
    





#line 237 "hal\\drv_def\\drv_features_mdp.h"



 








 






 


#line 280 "hal\\drv_def\\drv_features_mdp.h"


#line 327 "hal\\drv_def\\drv_features_mdp.h"


#line 391 "hal\\drv_def\\drv_features_mdp.h"
















 
#line 417 "hal\\drv_def\\drv_features_mdp.h"

#line 426 "hal\\drv_def\\drv_features_mdp.h"




#line 449 "hal\\drv_def\\drv_features_mdp.h"


#line 476 "hal\\drv_def\\drv_features_mdp.h"


#line 495 "hal\\drv_def\\drv_features_mdp.h"



#line 516 "hal\\drv_def\\drv_features_mdp.h"

#line 303 "hal\\drv_def\\drv_features_g2d.h"
      
#line 311 "hal\\drv_def\\drv_features_g2d.h"


 


#line 92 "interface\\hal\\drv_sw_def\\drv_sw_features_g2d.h"









































#line 1122 "config\\include\\hal\\stack_config.h"
#line 1 "interface\\hal\\drv_sw_def\\drv_sw_features_gif.h"

































 






































 




#line 1 "hal\\drv_def\\drv_features_gif.h"

































 










































 



#line 82 "hal\\drv_def\\drv_features_gif.h"


#line 91 "hal\\drv_def\\drv_features_gif.h"
   
#line 107 "hal\\drv_def\\drv_features_gif.h"




#line 79 "interface\\hal\\drv_sw_def\\drv_sw_features_gif.h"











#line 1123 "config\\include\\hal\\stack_config.h"
#line 1 "interface\\hal\\drv_sw_def\\drv_sw_features_jpeg.h"

































 




































 



#line 1 "hal\\drv_def\\drv_features_jpeg.h"

































 



























































































































































 



#line 205 "hal\\drv_def\\drv_features_jpeg.h"














#line 236 "hal\\drv_def\\drv_features_jpeg.h"




#line 248 "hal\\drv_def\\drv_features_jpeg.h"

#line 255 "hal\\drv_def\\drv_features_jpeg.h"

#line 264 "hal\\drv_def\\drv_features_jpeg.h"






#line 304 "hal\\drv_def\\drv_features_jpeg.h"















#line 328 "hal\\drv_def\\drv_features_jpeg.h"










   

#line 350 "hal\\drv_def\\drv_features_jpeg.h"







#line 371 "hal\\drv_def\\drv_features_jpeg.h"

#line 386 "hal\\drv_def\\drv_features_jpeg.h"

#line 402 "hal\\drv_def\\drv_features_jpeg.h"

#line 413 "hal\\drv_def\\drv_features_jpeg.h"
   

   


#line 76 "interface\\hal\\drv_sw_def\\drv_sw_features_jpeg.h"

















#line 101 "interface\\hal\\drv_sw_def\\drv_sw_features_jpeg.h"


#line 1124 "config\\include\\hal\\stack_config.h"
#line 1 "interface\\hal\\drv_sw_def\\drv_sw_features_mmsysmisc.h"

































 






































 





 



 
#line 1 "hal\\drv_def\\drv_features_mmsysmisc.h"

































 


























































































 





 



 
#line 137 "hal\\drv_def\\drv_features_mmsysmisc.h"



 
#line 150 "hal\\drv_def\\drv_features_mmsysmisc.h"

#line 160 "hal\\drv_def\\drv_features_mmsysmisc.h"

#line 170 "hal\\drv_def\\drv_features_mmsysmisc.h"

#line 187 "hal\\drv_def\\drv_features_mmsysmisc.h"

#line 198 "hal\\drv_def\\drv_features_mmsysmisc.h"


  




 



#line 218 "hal\\drv_def\\drv_features_mmsysmisc.h"

#line 237 "hal\\drv_def\\drv_features_mmsysmisc.h"



 




#line 264 "hal\\drv_def\\drv_features_mmsysmisc.h"

#line 284 "hal\\drv_def\\drv_features_mmsysmisc.h"

#line 306 "hal\\drv_def\\drv_features_mmsysmisc.h"

#line 328 "hal\\drv_def\\drv_features_mmsysmisc.h"

#line 350 "hal\\drv_def\\drv_features_mmsysmisc.h"

#line 372 "hal\\drv_def\\drv_features_mmsysmisc.h"



 































#line 85 "interface\\hal\\drv_sw_def\\drv_sw_features_mmsysmisc.h"



#line 1125 "config\\include\\hal\\stack_config.h"
#line 1 "interface\\hal\\drv_sw_def\\drv_sw_features_kbd.h"

































 


























 



#line 1 "hal\\drv_def\\drv_features_kbd.h"

































 






































































 




#line 111 "hal\\drv_def\\drv_features_kbd.h"
#line 1 "custom\\codegen\\HEXING60A_11B_BB\\keypad_drv.h"




 















#line 153 "custom\\codegen\\HEXING60A_11B_BB\\keypad_drv.h"










#line 171 "hal\\drv_def\\drv_features_kbd.h"
#line 181 "hal\\drv_def\\drv_features_kbd.h"








#line 66 "interface\\hal\\drv_sw_def\\drv_sw_features_kbd.h"






#line 1126 "config\\include\\hal\\stack_config.h"
#line 1 "interface\\hal\\drv_sw_def\\drv_sw_features_png.h"

































 
































 




#line 1 "hal\\drv_def\\drv_features_png.h"

































 










































 



#line 82 "hal\\drv_def\\drv_features_png.h"




#line 101 "hal\\drv_def\\drv_features_png.h"
  
#line 109 "hal\\drv_def\\drv_features_png.h"


#line 73 "interface\\hal\\drv_sw_def\\drv_sw_features_png.h"







#line 1127 "config\\include\\hal\\stack_config.h"
#line 1 "interface\\hal\\drv_sw_def\\drv_sw_features_opengles.h"

































 




































 






 
#line 1 "hal\\drv_def\\drv_features_opengles.h"

































 


















































































 



#line 122 "hal\\drv_def\\drv_features_opengles.h"

 
#line 199 "hal\\drv_def\\drv_features_opengles.h"
        








#line 80 "interface\\hal\\drv_sw_def\\drv_sw_features_opengles.h"







#line 1128 "config\\include\\hal\\stack_config.h"



 









typedef enum
{
    KAL_PRIORITY_CLASS0        =     0,
    KAL_PRIORITY_CLASS1        =     10,
    KAL_PRIORITY_CLASS2        =     20,
    KAL_PRIORITY_CLASS3        =     30,
    KAL_PRIORITY_CLASS4        =     40,
    KAL_PRIORITY_CLASS5        =     50,
    KAL_PRIORITY_CLASS6        =     60,
    KAL_PRIORITY_CLASS7        =     70,
    KAL_PRIORITY_CLASS8        =     80,
    KAL_PRIORITY_CLASS9        =     90,
    KAL_PRIORITY_CLASS10       =     100,
    KAL_PRIORITY_CLASS11       =     110,
    KAL_PRIORITY_CLASS12       =     120,
    KAL_PRIORITY_CLASS13       =     130,
    KAL_PRIORITY_CLASS14       =     140,
    KAL_PRIORITY_CLASS15       =     150,
    KAL_PRIORITY_CLASS16       =     160,
    KAL_PRIORITY_CLASS17       =     170,
    KAL_PRIORITY_CLASS18       =     180,
    KAL_PRIORITY_CLASS19       =     190,
    KAL_PRIORITY_CLASS20       =     200,
    KAL_PRIORITY_CLASS21       =     210,
    KAL_PRIORITY_CLASS22       =     220,
    KAL_PRIORITY_CLASS23       =     230,
    KAL_PRIORITY_CLASS24       =     240,
    KAL_PRIORITY_CLASS25       =     250
} kal_priority_type;

 
#line 1 "config\\include\\hal\\hal_task_config.h"

































 






















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































 

 
 














#line 1470 "config\\include\\hal\\hal_task_config.h"
 



 
#line 1496 "config\\include\\hal\\hal_task_config.h"







#line 1521 "config\\include\\hal\\hal_task_config.h"

#line 1528 "config\\include\\hal\\hal_task_config.h"







#line 1542 "config\\include\\hal\\hal_task_config.h"
 






 


 



 




#line 1567 "config\\include\\hal\\hal_task_config.h"
  


 






 






#line 1602 "config\\include\\hal\\hal_task_config.h"

#line 1174 "config\\include\\hal\\stack_config.h"
#line 1 "config\\include\\app\\app_task_config.h"

































 

































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































 




 












#line 1342 "config\\include\\app\\app_task_config.h"







#line 1361 "config\\include\\app\\app_task_config.h"
































#line 1409 "config\\include\\app\\app_task_config.h"










#line 1175 "config\\include\\hal\\stack_config.h"


 
#line 1193 "config\\include\\hal\\stack_config.h"



typedef enum {
#line 1 "config\\include\\hal\\hal_task_config.h"

































 






















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































 
#line 1605 "config\\include\\hal\\hal_task_config.h"




 
 
 
INDX_NIL, 
 


 









 
 
 
 
INDX_NVRAM, 
 


 



























 
 

 
INDX_TST, 
 




















 


 

 
INDX_TST_READER, 
 


 
















 

 

  
INDX_TST_FTRANS, 
 


















 

 
 
 

 
#line 1772 "config\\include\\hal\\hal_task_config.h"
 


 
#line 1792 "config\\include\\hal\\hal_task_config.h"
 

 
 
INDX_IDLER,    

 

















 



 
#line 1839 "config\\include\\hal\\hal_task_config.h"
 

 
 
INDX_PPP, 
 


 













 

 
 


 
INDX_UPS,              
 


 













 

 
#line 1906 "config\\include\\hal\\hal_task_config.h"
 

 
#line 1926 "config\\include\\hal\\hal_task_config.h"
 

 
#line 1946 "config\\include\\hal\\hal_task_config.h"
 

 
#line 1966 "config\\include\\hal\\hal_task_config.h"
 

 
 
INDX_RATCM, 
 

#line 1982 "config\\include\\hal\\hal_task_config.h"




















 

 
 
INDX_RATDM, 
 

#line 2018 "config\\include\\hal\\hal_task_config.h"




















 

 
 
#line 2083 "config\\include\\hal\\hal_task_config.h"
 

 
 
#line 2117 "config\\include\\hal\\hal_task_config.h"
 
 
#line 2150 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2183 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2215 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2239 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2264 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2288 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2312 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2353 "config\\include\\hal\\hal_task_config.h"
 

 
 
INDX_MM, 
 

#line 2369 "config\\include\\hal\\hal_task_config.h"

 

















 

 
 
INDX_CC, 
 

#line 2404 "config\\include\\hal\\hal_task_config.h"

 













 

 
 
INDX_CISS, 
 

#line 2435 "config\\include\\hal\\hal_task_config.h"

 















 

 
 
INDX_SMS, 
 

#line 2468 "config\\include\\hal\\hal_task_config.h"

 















 

 
 
INDX_SIM, 
 

#line 2501 "config\\include\\hal\\hal_task_config.h"

 

















 

 
#line 2546 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2574 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2602 "config\\include\\hal\\hal_task_config.h"
 
 
 
INDX_L4, 

 

#line 2618 "config\\include\\hal\\hal_task_config.h"


 

#line 2631 "config\\include\\hal\\hal_task_config.h"


#line 2642 "config\\include\\hal\\hal_task_config.h"

 

#line 2654 "config\\include\\hal\\hal_task_config.h"



 

#line 2668 "config\\include\\hal\\hal_task_config.h"

 

#line 2680 "config\\include\\hal\\hal_task_config.h"



 

#line 2694 "config\\include\\hal\\hal_task_config.h"

 





 

#line 2712 "config\\include\\hal\\hal_task_config.h"

 











   


#line 2738 "config\\include\\hal\\hal_task_config.h"

#line 2747 "config\\include\\hal\\hal_task_config.h"


 

 
   
INDX_RR, 
     

#line 2765 "config\\include\\hal\\hal_task_config.h"





#line 2785 "config\\include\\hal\\hal_task_config.h"



#line 2809 "config\\include\\hal\\hal_task_config.h"


#line 2820 "config\\include\\hal\\hal_task_config.h"


#line 2831 "config\\include\\hal\\hal_task_config.h"



#line 2844 "config\\include\\hal\\hal_task_config.h"
    
 







#line 2862 "config\\include\\hal\\hal_task_config.h"









     





     






 

 
 
INDX_REASM, 
 

#line 2900 "config\\include\\hal\\hal_task_config.h"
 













 

 
 
INDX_SNDCP, 
 

#line 2930 "config\\include\\hal\\hal_task_config.h"
 













 

 
 
INDX_SM, 
 

#line 2960 "config\\include\\hal\\hal_task_config.h"
 













 

 
 
INDX_LLC, 
 

#line 2990 "config\\include\\hal\\hal_task_config.h"
 













 

 
 
INDX_DATA, 
 

#line 3020 "config\\include\\hal\\hal_task_config.h"


#line 3031 "config\\include\\hal\\hal_task_config.h"


#line 3042 "config\\include\\hal\\hal_task_config.h"


#line 3053 "config\\include\\hal\\hal_task_config.h"


#line 3064 "config\\include\\hal\\hal_task_config.h"


 













 

  
#line 3100 "config\\include\\hal\\hal_task_config.h"
 
 

 

 
INDX_CAL,              
 


 










 

 

 
INDX_CAL_LOW,  
 


 










 

 
#line 3161 "config\\include\\hal\\hal_task_config.h"
 


 
#line 3181 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3200 "config\\include\\hal\\hal_task_config.h"
 

 
 
#line 3218 "config\\include\\hal\\hal_task_config.h"
 
 
 
#line 3235 "config\\include\\hal\\hal_task_config.h"
 
 
 
#line 3254 "config\\include\\hal\\hal_task_config.h"
 
 
 
#line 3273 "config\\include\\hal\\hal_task_config.h"
 


 
 
INDX_L1, 
 








 






















 
 
#line 3349 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3391 "config\\include\\hal\\hal_task_config.h"
 


 
#line 3433 "config\\include\\hal\\hal_task_config.h"
 


 
 
INDX_FMR, 
 


 













 

 
 
INDX_EXT_MODEM,        
 


 














 


 
 
INDX_EC_TASK,     
 


 













 

 
 
INDX_DRVKBD,
 


 

















 

 
 
INDX_BMT,
 


     




















 

    
 

     
INDX_AUX,          
 


 














 
    

 
 
INDX_IRCOMM, 
 


 













 

    
 
 
INDX_USB, 
 


 



















 

 
 
INDX_BRT,   
 


 













   

 
#line 3676 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3707 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3727 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3747 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3767 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3787 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3807 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3827 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3847 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3867 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3887 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3907 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3927 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3947 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3967 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3987 "config\\include\\hal\\hal_task_config.h"
 

 
#line 4007 "config\\include\\hal\\hal_task_config.h"
 

 
#line 4027 "config\\include\\hal\\hal_task_config.h"
 


 
#line 4048 "config\\include\\hal\\hal_task_config.h"
 

 
#line 4068 "config\\include\\hal\\hal_task_config.h"
 

 
#line 4088 "config\\include\\hal\\hal_task_config.h"
 

 
 
INDX_SYSDEBUG, 
 


 













 

 

     
INDX_FLC, 
 


 










 

 
 
INDX_WNDRV,     
 


 

















 

 
 
INDX_SUPC,  
 


 













 

 
#line 4203 "config\\include\\hal\\hal_task_config.h"


 
 
 
INDX_WMT,     
 




 







    





 

 
 
INDX_VT, 
 

 













 

 
 
INDX_L1SP, 
 


 



#line 4270 "config\\include\\hal\\hal_task_config.h"

#line 4277 "config\\include\\hal\\hal_task_config.h"





#line 4288 "config\\include\\hal\\hal_task_config.h"




 

 

 
INDX_L1AUDIO_SPH_SRV,
 


 














 

 
#line 4342 "config\\include\\hal\\hal_task_config.h"
 


 
#line 4368 "config\\include\\hal\\hal_task_config.h"
 

 
 
INDX_VCODEC,
 


 













 

 
 
INDX_VFILE, 
 


 













  

 
 
INDX_VCODEC_V2, 
 


 













 

 
 
INDX_VSRC, 
 


 













  
 
 
 
INDX_FT, 
 

 













 

 
 
INDX_FTC, 

 


 













 
 
#line 4522 "config\\include\\hal\\hal_task_config.h"
 
 
#line 4546 "config\\include\\hal\\hal_task_config.h"
 

 
 
INDX_FS,  

 














 

 
 
INDX_MATV,  
 


 













 

 
 
INDX_KMP_APP,  
 


 













 

 
#line 4631 "config\\include\\hal\\hal_task_config.h"
 
    
 

#line 4646 "config\\include\\hal\\hal_task_config.h"

    

  
 
 
 
 
 
 
 
 
  

 
#line 4668 "config\\include\\hal\\hal_task_config.h"










































    














#line 1198 "config\\include\\hal\\stack_config.h"
#line 1 "config\\include\\app\\app_task_config.h"

































 

































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































 
#line 1420 "config\\include\\app\\app_task_config.h"

 

 
INDX_FMT, 
 

 

 















 


 
 
INDX_VRT, 
 


 

















 

 

 
INDX_GDI, 
 


 










 

 
 
INDX_MMI, 
 






 

 




#line 1529 "config\\include\\app\\app_task_config.h"
  
#line 1541 "config\\include\\app\\app_task_config.h"





#line 1553 "config\\include\\app\\app_task_config.h"
      




 

 
#line 1578 "config\\include\\app\\app_task_config.h"
 

 
 
INDX_ABM, 
 

 

 













 

 
 
INDX_TCPIP, 
 

 

 



















#line 1637 "config\\include\\app\\app_task_config.h"






 

 
 
INDX_SOC, 
 


 



















 

 
 
INDX_WAP, 
 

 
 













 

 
 
INDX_WPS,              
 


 

















 

    
 
 
INDX_MMS,              
 


 













 

 
 
INDX_J2ME,              
 


 











    





 

 
 
INDX_JAM,              
 


 













 

 
 
INDX_JASYN,              
 




 













 

 
 
INDX_EMAIL,              
 


 

















 

 

 
  
INDX_GDC,              
 


 










 

 

 
 
INDX_GDD,              
 


 










 

 
#line 1903 "config\\include\\app\\app_task_config.h"
 

 
 
INDX_IMPS, 
 


 













 

 
 
INDX_SIP,              
 


 













 

 
 
INDX_XDM,  
 


 













 

 
 
INDX_DHCP,  
 


 

















 

 
 
INDX_SAF,  
 


 













 


 
 
INDX_SYNCML,  
 


 













 

 
 
INDX_UDX,  
 


 













 
    
 
#line 2082 "config\\include\\app\\app_task_config.h"
 

 
#line 2102 "config\\include\\app\\app_task_config.h"
 

 
#line 2122 "config\\include\\app\\app_task_config.h"
 

 
#line 2142 "config\\include\\app\\app_task_config.h"
 

 
 
INDX_RTSP,  
 


 













 

 
 
INDX_DM,  
 


 













 

 
 
INDX_DRMT,            
 

 






 










 
    
 
#line 2231 "config\\include\\app\\app_task_config.h"
 
 
 
 
INDX_CMMB,  
 

 

 













 


 
 
INDX_MBBMSDRV,  
 


 















 

 
 
INDX_MBBMSDRV2,  
 


 



 










 

 
 
INDX_MTV,  
 


 













 

 
 
INDX_ESG,  
 


 













 

 
 
INDX_CERTMAN,  
 


 













 

 
 
INDX_TLS,  
 


 













 

 
 
INDX_DHCPD,  
 


 















    
 
 
INDX_IVD,              
 


 














 

 
 
INDX_PLS,              
 


 













 

 
 
INDX_NMS,              
 


 















 

 
 
INDX_SNS,
 


 













 

 
 
      
INDX_GADGET,
 


 













 

 
 
      
INDX_OPERA_CORE,
 


 













 

 
 
INDX_EMLST,  
 


 













 
 
 
     
INDX_NMC,  
 


 













 

 
#line 2614 "config\\include\\app\\app_task_config.h"
 

 
 
INDX_MTP, 
 

 

 













 

 
 
INDX_MED, 
 

    
 

 





















 


 

 
INDX_MED_V, 
 


 














 
 
#line 2713 "config\\include\\app\\app_task_config.h"
  


 
 
INDX_BEE,  
 


 













 


 
 
INDX_GPS,  
 


 













 

 
 
INDX_MNL,  
 


 













 

 
 
INDX_IDLE, 
 


 

















 

 
#line 2827 "config\\include\\app\\app_task_config.h"
 

 
 
INDX_IRDA, 
 




 













 

 
 
INDX_OBEX, 
 


 













 

 
 
INDX_BT,     
 


 













 

 
 
INDX_CARDAV,  
 


 















 

 
 
 
INDX_MTKTASKEND,   
 









 


#line 2956 "config\\include\\app\\app_task_config.h"
 
INDX_IVTTS,  
 


 











#line 2991 "config\\include\\app\\app_task_config.h"

 
 
#line 3011 "config\\include\\app\\app_task_config.h"
  

#line 1199 "config\\include\\hal\\stack_config.h"
     
    RPS_TOTAL_STACK_TASKS,
}task_indx_type;

typedef enum {
     




    
#line 1 "config\\include\\hal\\hal_task_config.h"

































 






















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































 
#line 1605 "config\\include\\hal\\hal_task_config.h"




 
 
 
 
 
MOD_NIL,

 









 
 
 
 
 
 
MOD_NVRAM,

 



























 
 

 
 
 

MOD_TST,


















 


 

 
 
 

MOD_TST_READER,
 
















 

 

  
 
 

MOD_TST_FTRANS,
















 

 
 
 

 
#line 1772 "config\\include\\hal\\hal_task_config.h"
 


 
#line 1792 "config\\include\\hal\\hal_task_config.h"
 

 
 
    
MOD_IDLER,
 

















 



 
#line 1839 "config\\include\\hal\\hal_task_config.h"
 

 
 
 
 
MOD_PPP,

 













 

 
 


 
              
 
MOD_UPS,

 













 

 
#line 1906 "config\\include\\hal\\hal_task_config.h"
 

 
#line 1926 "config\\include\\hal\\hal_task_config.h"
 

 
#line 1946 "config\\include\\hal\\hal_task_config.h"
 

 
#line 1966 "config\\include\\hal\\hal_task_config.h"
 

 
 
 
 
MOD_RATCM,
#line 1982 "config\\include\\hal\\hal_task_config.h"




















 

 
 
 
 
MOD_RATDM,
#line 2018 "config\\include\\hal\\hal_task_config.h"




















 

 
 
#line 2083 "config\\include\\hal\\hal_task_config.h"
 

 
 
#line 2117 "config\\include\\hal\\hal_task_config.h"
 
 
#line 2150 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2183 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2215 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2239 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2264 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2288 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2312 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2353 "config\\include\\hal\\hal_task_config.h"
 

 
 
 
 
MOD_MM,
#line 2369 "config\\include\\hal\\hal_task_config.h"

 

















 

 
 
 
 
MOD_CC,
#line 2404 "config\\include\\hal\\hal_task_config.h"

 













 

 
 
 
 
MOD_CISS,
#line 2435 "config\\include\\hal\\hal_task_config.h"

 















 

 
 
 
 
MOD_SMS,
#line 2468 "config\\include\\hal\\hal_task_config.h"

 















 

 
 
 
 
MOD_SIM,
#line 2501 "config\\include\\hal\\hal_task_config.h"

 

















 

 
#line 2546 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2574 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2602 "config\\include\\hal\\hal_task_config.h"
 
 
 
 

 
MOD_ATCI,
#line 2618 "config\\include\\hal\\hal_task_config.h"


 
MOD_L4C,
#line 2631 "config\\include\\hal\\hal_task_config.h"

MOD_TCM,
#line 2642 "config\\include\\hal\\hal_task_config.h"

 
MOD_SMSAL,
#line 2654 "config\\include\\hal\\hal_task_config.h"

MOD_UEM,

 
MOD_RAC,
#line 2668 "config\\include\\hal\\hal_task_config.h"

 
MOD_SMU,
#line 2680 "config\\include\\hal\\hal_task_config.h"

MOD_USAT,

 
MOD_CSM,
#line 2694 "config\\include\\hal\\hal_task_config.h"

 
MOD_ENG,




 
MOD_PHB,
#line 2712 "config\\include\\hal\\hal_task_config.h"

 











   


#line 2738 "config\\include\\hal\\hal_task_config.h"

#line 2747 "config\\include\\hal\\hal_task_config.h"


 

 
   
 
     
MOD_RRM,
#line 2765 "config\\include\\hal\\hal_task_config.h"


MOD_GAS = MOD_RRM,
MOD_AS = MOD_RRM,
MOD_RMPC = MOD_RRM,
#line 2785 "config\\include\\hal\\hal_task_config.h"


MOD_RLC,
#line 2809 "config\\include\\hal\\hal_task_config.h"

MOD_MAC,
#line 2820 "config\\include\\hal\\hal_task_config.h"

MOD_LAPDM,
#line 2831 "config\\include\\hal\\hal_task_config.h"


MOD_MPAL,
#line 2844 "config\\include\\hal\\hal_task_config.h"
    
 







#line 2862 "config\\include\\hal\\hal_task_config.h"









     





     






 

 
 
 
 
MOD_REASM,
#line 2900 "config\\include\\hal\\hal_task_config.h"
 













 

 
 
 
 
MOD_SNDCP,
#line 2930 "config\\include\\hal\\hal_task_config.h"
 













 

 
 
 
 
MOD_SM,
#line 2960 "config\\include\\hal\\hal_task_config.h"
 













 

 
 
 
 
MOD_LLC,
#line 2990 "config\\include\\hal\\hal_task_config.h"
 













 

 
 
 
 
MOD_TDT,
#line 3020 "config\\include\\hal\\hal_task_config.h"

MOD_RLP,
#line 3031 "config\\include\\hal\\hal_task_config.h"

MOD_L2R,
#line 3042 "config\\include\\hal\\hal_task_config.h"

MOD_T30,
#line 3053 "config\\include\\hal\\hal_task_config.h"

MOD_FA,
#line 3064 "config\\include\\hal\\hal_task_config.h"


 













 

  
#line 3100 "config\\include\\hal\\hal_task_config.h"
 
 

 

 
              
 
MOD_CAL,

 










 

 

 
  
 
MOD_CAL_LOW,

 










 

 
#line 3161 "config\\include\\hal\\hal_task_config.h"
 


 
#line 3181 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3200 "config\\include\\hal\\hal_task_config.h"
 

 
 
#line 3218 "config\\include\\hal\\hal_task_config.h"
 
 
 
#line 3235 "config\\include\\hal\\hal_task_config.h"
 
 
 
#line 3254 "config\\include\\hal\\hal_task_config.h"
 
 
 
#line 3273 "config\\include\\hal\\hal_task_config.h"
 


 
 
 
 



MOD_L1,




 






















 
 
#line 3349 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3391 "config\\include\\hal\\hal_task_config.h"
 


 
#line 3433 "config\\include\\hal\\hal_task_config.h"
 


 
 
 
 
MOD_FMR,

 













 

 
 
        
 
MOD_EXT_MODEM,

 














 


 
 
     
 
MOD_EC_TASK,

 













 

 
 

 
MOD_DRVKBD,

 

















 

 
 

 
MOD_BMT,

     




















 

    
 

     
          
 
MOD_AUX,

 














 
    

 
 
 
 
MOD_IRCOMM,

 













 

    
 
 
 
 
MOD_USB,

 



















 

 
 
   
 
MOD_BRT,

 













   

 
#line 3676 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3707 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3727 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3747 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3767 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3787 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3807 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3827 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3847 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3867 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3887 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3907 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3927 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3947 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3967 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3987 "config\\include\\hal\\hal_task_config.h"
 

 
#line 4007 "config\\include\\hal\\hal_task_config.h"
 

 
#line 4027 "config\\include\\hal\\hal_task_config.h"
 


 
#line 4048 "config\\include\\hal\\hal_task_config.h"
 

 
#line 4068 "config\\include\\hal\\hal_task_config.h"
 

 
#line 4088 "config\\include\\hal\\hal_task_config.h"
 

 
 
 
 
MOD_SYSDEBUG,

 













 

 

     
 
 
MOD_FLC,

 










 

 
 
     
 
MOD_WNDRV,

 

















 

 
 
  
 
MOD_SUPC,

 













 

 
#line 4203 "config\\include\\hal\\hal_task_config.h"


 
 
 
     
 
MOD_WMT,
MOD_STP,
MOD_BWCS,

 







    





 

 
 
 
 
MOD_VT,
 













 

 
 
 
 
MOD_L1SP,

 



#line 4270 "config\\include\\hal\\hal_task_config.h"

#line 4277 "config\\include\\hal\\hal_task_config.h"





#line 4288 "config\\include\\hal\\hal_task_config.h"




 

 

 

 
MOD_L1AUDIO_SPH_SRV,

 














 

 
#line 4342 "config\\include\\hal\\hal_task_config.h"
 


 
#line 4368 "config\\include\\hal\\hal_task_config.h"
 

 
 

 
MOD_VCODEC,

 













 

 
 
 
 
MOD_VFILE,

 













  

 
 
 
 
MOD_VCODEC_V2,

 













 

 
 
 
 
MOD_VSRC,

 













  
 
 
 
 
 
MOD_FT,
 













 

 
 
 

 
MOD_FTC,

 













 
 
#line 4522 "config\\include\\hal\\hal_task_config.h"
 
 
#line 4546 "config\\include\\hal\\hal_task_config.h"
 

 
 
  
MOD_FS,
 














 

 
 
  
 
MOD_MATV,

 













 

 
 
  
 
MOD_KMP_APP,

 













 

 
#line 4631 "config\\include\\hal\\hal_task_config.h"
 
    
 

#line 4646 "config\\include\\hal\\hal_task_config.h"

MOD_TIMER,    
MOD_EINT_HISR,
MOD_UART1_HISR,  
MOD_UART2_HISR, 
MOD_UART3_HISR, 
MOD_KEYPAD_HISR, 
MOD_GPT_HISR, 
MOD_RTC_HISR, 
MOD_USB_HISR, 
MOD_RESIZER_HISR, 
MOD_MSDC_HISR, 
MOD_TP_TASK,  

MOD_ISP_HISR, 
#line 4668 "config\\include\\hal\\hal_task_config.h"
MOD_SYSTEM,
MOD_WNDRV_HISR,
MOD_EVENT_INFO,




MOD_DRV_IDP,


































    














#line 1215 "config\\include\\hal\\stack_config.h"




     
    MOD_HISR_BEGIN,
#line 1 "config\\include\\hal\\hisr_config_internal.h"

































 


























































































































































































































































 

            



MOD_DRV_HISR,




MOD_GFXHISR,





MOD_IRDA_HISR,









MOD_L1SPHISR,









MOD_L1HISR,




MOD_VISUAL_HISR,








































MOD_TIMER_HISR,

#line 377 "config\\include\\hal\\hisr_config_internal.h"

#line 384 "config\\include\\hal\\hisr_config_internal.h"






#line 398 "config\\include\\hal\\hisr_config_internal.h"

#line 1224 "config\\include\\hal\\stack_config.h"


    MOD_HISR_END,
    MOD_APP_BEGIN = (MOD_HISR_BEGIN + 20 + 1),
             




    




     
#line 1 "config\\include\\app\\app_task_config.h"

































 

































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































 
#line 1420 "config\\include\\app\\app_task_config.h"

 

 
 
 
MOD_FMT,
 

 















 


 
 
 
 
MOD_VRT,

 

















 

 

 
 
 
MOD_GDI,

 










 

 
 
 
 




MOD_MMI,

 

 




#line 1529 "config\\include\\app\\app_task_config.h"
  
#line 1541 "config\\include\\app\\app_task_config.h"





#line 1553 "config\\include\\app\\app_task_config.h"
      




 

 
#line 1578 "config\\include\\app\\app_task_config.h"
 

 
 
 
 
MOD_ABM,
 

 













 

 
 
 
 
MOD_TCPIP,
 

 



















#line 1637 "config\\include\\app\\app_task_config.h"






 

 
 
 
 
MOD_SOC,

 



















 

 
 
 
 
MOD_WAP,
 
 













 

 
 
              
 
MOD_WPS,

 

















 

    
 
 
              
 
MOD_MMS,

 













 

 
 
              
 
MOD_J2ME,
MOD_J2ME_D,
 











    





 

 
 
              
 
MOD_JAM,

 













 

 
 
              
 
MOD_JASYN,
MOD_JASYN_D,
MOD_JASYN_D2,
MOD_JASYN_D3,
 













 

 
 
              
 
MOD_EMAIL,

 

















 

 

 
  
              
 
MOD_GDC,

 










 

 

 
 
              
 
MOD_GDD,

 










 

 
#line 1903 "config\\include\\app\\app_task_config.h"
 

 
 
 
 
MOD_IMPS,

 













 

 
 
              
 
MOD_SIP,

 













 

 
 
  
 
MOD_XDM,

 













 

 
 
  
 
MOD_DHCP,

 

















 

 
 
  
 
MOD_SAF,

 













 


 
 
  
 
MOD_SYNCML,

 













 

 
 
  
 
MOD_UDX,
MOD_VCARD,
 













 
    
 
#line 2082 "config\\include\\app\\app_task_config.h"
 

 
#line 2102 "config\\include\\app\\app_task_config.h"
 

 
#line 2122 "config\\include\\app\\app_task_config.h"
 

 
#line 2142 "config\\include\\app\\app_task_config.h"
 

 
 
  
 
MOD_RTSP,

 













 

 
 
  
 
MOD_DM,

 













 

 
 
            
 
MOD_DRMT,
 






 










 
    
 
#line 2231 "config\\include\\app\\app_task_config.h"
 
 
 
 
  
 
MOD_CMMB,
 

 













 


 
 
  
 
MOD_MBBMSDRV,

 















 

 
 
  
 
MOD_MBBMSDRV2,

 



 










 

 
 
  
 
MOD_MTV,

 













 

 
 
  
 
MOD_ESG,

 













 

 
 
  
 
MOD_CERTMAN,

 













 

 
 
  
 
MOD_TLS,

 













 

 
 
  
 
MOD_DHCPD,

 















    
 
 
              
 
MOD_IVD,

 














 

 
 
              
 
MOD_PLS,

 













 

 
 
              
 
MOD_NMS,

 















 

 
 

 
MOD_SNS,

 













 

 
 
      

 
MOD_GADGET,
MOD_GADGET_MDI,
 













 

 
 
      

 
MOD_OPERA_CORE,
MOD_OPERA_CORE_MDI,
 













 

 
 
  
 
MOD_EMLST,

 













 
 
 
     
  
 
MOD_NMC,

 













 

 
#line 2614 "config\\include\\app\\app_task_config.h"
 

 
 
 
 
MOD_MTP,
 

 













 

 
 
 
 
MOD_MED,
MOD_AUD=MOD_MED,    
 

 





















 


 

 
 
 
MOD_MED_V,

 














 
 
#line 2713 "config\\include\\app\\app_task_config.h"
  


 
 
  
 
MOD_BEE,

 













 


 
 
  
 
MOD_GPS,

 













 

 
 
  
 
MOD_MNL,

 













 

 
 
 
 
MOD_IDLE,

 

















 

 
#line 2827 "config\\include\\app\\app_task_config.h"
 

 
 
 
 
MOD_LAP,
MOD_LMP,
MOD_TTP,

 













 

 
 
 
 
MOD_OBEX,

 













 

 
 
     
 
MOD_BT,

 













 

 
 
  
 
MOD_CARDAV,

 















 

 
 
 
   
 
MOD_MTKTASKEND,








 


#line 2956 "config\\include\\app\\app_task_config.h"
 
  
 
MOD_IVTTS,

 











#line 2991 "config\\include\\app\\app_task_config.h"

 
 
#line 3011 "config\\include\\app\\app_task_config.h"
  

#line 1240 "config\\include\\hal\\stack_config.h"
#line 1246 "config\\include\\hal\\stack_config.h"
    LAST_MOD_ID,      
    


 
    RPS_TOTAL_STACK_MODULES = LAST_MOD_ID,           
     
    MOD_LIBRARY_BEGIN = 300, 



#line 1 "config\\include\\hal\\hal_task_config.h"

































 






















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































 
#line 1605 "config\\include\\hal\\hal_task_config.h"




 
 
 
 
 


 









 
 
 
 
 
 


 



























 
 

 
 
 




















 


 

 
 
 


 
















 

 

  
 
 


















 

 
 
 

 
#line 1772 "config\\include\\hal\\hal_task_config.h"
 


 
#line 1792 "config\\include\\hal\\hal_task_config.h"
 

 
 
    

 

















 



 
#line 1839 "config\\include\\hal\\hal_task_config.h"
 

 
 
 
 


 













 

 
 


 
              
 


 













 

 
#line 1906 "config\\include\\hal\\hal_task_config.h"
 

 
#line 1926 "config\\include\\hal\\hal_task_config.h"
 

 
#line 1946 "config\\include\\hal\\hal_task_config.h"
 

 
#line 1966 "config\\include\\hal\\hal_task_config.h"
 

 
 
 
 

#line 1982 "config\\include\\hal\\hal_task_config.h"




















 

 
 
 
 

#line 2018 "config\\include\\hal\\hal_task_config.h"




















 

 
 
#line 2083 "config\\include\\hal\\hal_task_config.h"
 

 
 
#line 2117 "config\\include\\hal\\hal_task_config.h"
 
 
#line 2150 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2183 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2215 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2239 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2264 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2288 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2312 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2353 "config\\include\\hal\\hal_task_config.h"
 

 
 
 
 

#line 2369 "config\\include\\hal\\hal_task_config.h"

 

















 

 
 
 
 

#line 2404 "config\\include\\hal\\hal_task_config.h"

 













 

 
 
 
 

#line 2435 "config\\include\\hal\\hal_task_config.h"

 















 

 
 
 
 

#line 2468 "config\\include\\hal\\hal_task_config.h"

 















 

 
 
 
 

#line 2501 "config\\include\\hal\\hal_task_config.h"

 

















 

 
#line 2546 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2574 "config\\include\\hal\\hal_task_config.h"
 

 
#line 2602 "config\\include\\hal\\hal_task_config.h"
 
 
 
 

 

#line 2618 "config\\include\\hal\\hal_task_config.h"


 

#line 2631 "config\\include\\hal\\hal_task_config.h"


#line 2642 "config\\include\\hal\\hal_task_config.h"

 

#line 2654 "config\\include\\hal\\hal_task_config.h"



 

#line 2668 "config\\include\\hal\\hal_task_config.h"

 

#line 2680 "config\\include\\hal\\hal_task_config.h"



 

#line 2694 "config\\include\\hal\\hal_task_config.h"

 





 

#line 2712 "config\\include\\hal\\hal_task_config.h"

 











   


#line 2738 "config\\include\\hal\\hal_task_config.h"

#line 2747 "config\\include\\hal\\hal_task_config.h"


 

 
   
 
     

#line 2765 "config\\include\\hal\\hal_task_config.h"





#line 2785 "config\\include\\hal\\hal_task_config.h"



#line 2809 "config\\include\\hal\\hal_task_config.h"


#line 2820 "config\\include\\hal\\hal_task_config.h"


#line 2831 "config\\include\\hal\\hal_task_config.h"



#line 2844 "config\\include\\hal\\hal_task_config.h"
    
 







#line 2862 "config\\include\\hal\\hal_task_config.h"









     





     






 

 
 
 
 

#line 2900 "config\\include\\hal\\hal_task_config.h"
 













 

 
 
 
 

#line 2930 "config\\include\\hal\\hal_task_config.h"
 













 

 
 
 
 

#line 2960 "config\\include\\hal\\hal_task_config.h"
 













 

 
 
 
 

#line 2990 "config\\include\\hal\\hal_task_config.h"
 













 

 
 
 
 

#line 3020 "config\\include\\hal\\hal_task_config.h"


#line 3031 "config\\include\\hal\\hal_task_config.h"


#line 3042 "config\\include\\hal\\hal_task_config.h"


#line 3053 "config\\include\\hal\\hal_task_config.h"


#line 3064 "config\\include\\hal\\hal_task_config.h"


 













 

  
#line 3100 "config\\include\\hal\\hal_task_config.h"
 
 

 

 
              
 


 










 

 

 
  
 


 










 

 
#line 3161 "config\\include\\hal\\hal_task_config.h"
 


 
#line 3181 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3200 "config\\include\\hal\\hal_task_config.h"
 

 
 
#line 3218 "config\\include\\hal\\hal_task_config.h"
 
 
 
#line 3235 "config\\include\\hal\\hal_task_config.h"
 
 
 
#line 3254 "config\\include\\hal\\hal_task_config.h"
 
 
 
#line 3273 "config\\include\\hal\\hal_task_config.h"
 


 
 
 
 








 






















 
 
#line 3349 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3391 "config\\include\\hal\\hal_task_config.h"
 


 
#line 3433 "config\\include\\hal\\hal_task_config.h"
 


 
 
 
 


 













 

 
 
        
 


 














 


 
 
     
 


 













 

 
 

 


 

















 

 
 

 


     




















 

    
 

     
          
 


 














 
    

 
 
 
 


 













 

    
 
 
 
 


 



















 

 
 
   
 


 













   

 
#line 3676 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3707 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3727 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3747 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3767 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3787 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3807 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3827 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3847 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3867 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3887 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3907 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3927 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3947 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3967 "config\\include\\hal\\hal_task_config.h"
 

 
#line 3987 "config\\include\\hal\\hal_task_config.h"
 

 
#line 4007 "config\\include\\hal\\hal_task_config.h"
 

 
#line 4027 "config\\include\\hal\\hal_task_config.h"
 


 
#line 4048 "config\\include\\hal\\hal_task_config.h"
 

 
#line 4068 "config\\include\\hal\\hal_task_config.h"
 

 
#line 4088 "config\\include\\hal\\hal_task_config.h"
 

 
 
 
 


 













 

 

     
 
 


 










 

 
 
     
 


 

















 

 
 
  
 


 













 

 
#line 4203 "config\\include\\hal\\hal_task_config.h"


 
 
 
     
 




 







    





 

 
 
 
 

 













 

 
 
 
 


 



#line 4270 "config\\include\\hal\\hal_task_config.h"

#line 4277 "config\\include\\hal\\hal_task_config.h"





#line 4288 "config\\include\\hal\\hal_task_config.h"




 

 

 

 


 














 

 
#line 4342 "config\\include\\hal\\hal_task_config.h"
 


 
#line 4368 "config\\include\\hal\\hal_task_config.h"
 

 
 

 


 













 

 
 
 
 


 













  

 
 
 
 


 













 

 
 
 
 


 













  
 
 
 
 
 

 













 

 
 
 

 


 













 
 
#line 4522 "config\\include\\hal\\hal_task_config.h"
 
 
#line 4546 "config\\include\\hal\\hal_task_config.h"
 

 
 
  

 














 

 
 
  
 


 













 

 
 
  
 


 













 

 
#line 4631 "config\\include\\hal\\hal_task_config.h"
 
    
 

#line 4646 "config\\include\\hal\\hal_task_config.h"

    

  
 
 
 
 
 
 
 
 
  

 
#line 4668 "config\\include\\hal\\hal_task_config.h"










MOD_SST_COMMON,
MOD_SST_INIT,
MOD_EMS,
MOD_DP_ENGINE,
MOD_SDP,
MOD_SSL,
MOD_SECLIB,
MOD_OSSL_CRYPTO,
MOD_OSSL_PKI,
MOD_OSSL_SSL,
MOD_OSSL_OSADP,
MOD_OSSL_PKIADP,
MOD_MMI_FW,
MOD_MMI_COMMON_APP,
MOD_MMI_MEDIA_APP,
MOD_MMI_CONN_APP,
MOD_MMI_INET_APP,
MOD_PLUTO_FW,
MOD_FMGR_SRV,
MOD_MRE,
MOD_MRE_APP_LOG,
MOD_MRE_APP_INFO,
MOD_RFC2507,
MOD_PPP_HW,
MOD_VFX,
MOD_VAPP,
MOD_SQLITE3,




MOD_DRV_LCD,
MOD_VIDEO,    

MOD_BTDRV,
MOD_JPG,
MOD_GFX,

MOD_PMU,
MOD_PMIC,
MOD_LPWR,
MOD_MOTION_SENSOR,
MOD_F32K,
MOD_PWM,
MOD_UART,
MOD_BACKLIGHT,

#line 1260 "config\\include\\hal\\stack_config.h"
#line 1 "config\\include\\app\\app_task_config.h"

































 

































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































 
#line 1420 "config\\include\\app\\app_task_config.h"

 

 
 
 

 

 















 


 
 
 
 


 

















 

 

 
 
 


 










 

 
 
 
 






 

 




#line 1529 "config\\include\\app\\app_task_config.h"
  
#line 1541 "config\\include\\app\\app_task_config.h"





#line 1553 "config\\include\\app\\app_task_config.h"
      




 

 
#line 1578 "config\\include\\app\\app_task_config.h"
 

 
 
 
 

 

 













 

 
 
 
 

 

 



















#line 1637 "config\\include\\app\\app_task_config.h"






 

 
 
 
 


 



















 

 
 
 
 

 
 













 

 
 
              
 


 

















 

    
 
 
              
 


 













 

 
 
              
 


 











    





 

 
 
              
 


 













 

 
 
              
 




 













 

 
 
              
 


 

















 

 

 
  
              
 


 










 

 

 
 
              
 


 










 

 
#line 1903 "config\\include\\app\\app_task_config.h"
 

 
 
 
 


 













 

 
 
              
 


 













 

 
 
  
 


 













 

 
 
  
 


 

















 

 
 
  
 


 













 


 
 
  
 


 













 

 
 
  
 


 













 
    
 
#line 2082 "config\\include\\app\\app_task_config.h"
 

 
#line 2102 "config\\include\\app\\app_task_config.h"
 

 
#line 2122 "config\\include\\app\\app_task_config.h"
 

 
#line 2142 "config\\include\\app\\app_task_config.h"
 

 
 
  
 


 













 

 
 
  
 


 













 

 
 
            
 

 






 










 
    
 
#line 2231 "config\\include\\app\\app_task_config.h"
 
 
 
 
  
 

 

 













 


 
 
  
 


 















 

 
 
  
 


 



 










 

 
 
  
 


 













 

 
 
  
 


 













 

 
 
  
 


 













 

 
 
  
 


 













 

 
 
  
 


 















    
 
 
              
 


 














 

 
 
              
 


 













 

 
 
              
 


 















 

 
 

 


 













 

 
 
      

 


 













 

 
 
      

 


 













 

 
 
  
 


 













 
 
 
     
  
 


 













 

 
#line 2614 "config\\include\\app\\app_task_config.h"
 

 
 
 
 

 

 













 

 
 
 
 

    
 

 





















 


 

 
 
 


 














 
 
#line 2713 "config\\include\\app\\app_task_config.h"
  


 
 
  
 


 













 


 
 
  
 


 













 

 
 
  
 


 













 

 
 
 
 


 

















 

 
#line 2827 "config\\include\\app\\app_task_config.h"
 

 
 
 
 




 













 

 
 
 
 


 













 

 
 
     
 


 













 

 
 
  
 


 















 

 
 
 
   
 









 


#line 2956 "config\\include\\app\\app_task_config.h"
 
  
 


 











#line 2991 "config\\include\\app\\app_task_config.h"

 
 
#line 3011 "config\\include\\app\\app_task_config.h"
  

#line 1261 "config\\include\\hal\\stack_config.h"
   
   
    MOD_BOUNDARY,   
     
    END_OF_MOD_ID = 384 
}module_type;



 
#line 1277 "config\\include\\hal\\stack_config.h"




 
typedef unsigned int module_id_boundary_check[END_OF_MOD_ID-MOD_BOUNDARY];
typedef unsigned int total_stack_modules_boundary_check[MOD_LIBRARY_BEGIN + 1 - RPS_TOTAL_STACK_MODULES]; 
 




 
typedef unsigned int hisr_total_num_check[MOD_APP_BEGIN + 1 - MOD_HISR_END];
 
typedef unsigned int hisr_max_num_check[(20 - 19) * (21 - 20)];
 

#line 125 "kal\\include\\kal_public_defs.h"
#line 1 "config\\include\\hal\\stack_msgs.h"

































 











































































































































































































































































































































































































































































































































 



#line 563 "config\\include\\hal\\stack_msgs.h"


 





 

 
 






 
typedef void (*FSM_FUNCTION) (void*, void*);



typedef enum {
   INVALID_SAP = 0,
 
    
    
   GMMREG_SAP,
    
    
   MM_SMS_SAP,
   MM_CC_SAP,
   MM_SS_SAP,
   MM_AS_SAP,
   MM_SIM_SAP,
   GMM_SM_SAP,
   MNCC_SAP,
   MNSMS_SAP,
   MMREG_SAP,
   MNSS_SAP,
    
   CSM_TDT_SAP,
   CSM_L2R_SAP,
   CSM_T30_SAP,
   CSM_SIM_SAP,
   T30_L4C_SAP,
   CSM_L4C_SAP,
   SMSAL_L4C_SAP,
   UEM_L4C_SAP,
   PHB_L4C_SAP,
   SMU_L4C_SAP,
   TCM_L4C_SAP,
   RAC_L4C_SAP,
   UART_L4C_SAP,
   ATCI_SAP,			



    
   RRM_LAPDM_SAP,
   RR_PRR_SAP,
   LAPDM_MPAL_SAP,
   RLC_MAC_SAP,
   RLC_RRM_SAP,
   RLC_MPAL_SAP,
   RLC_REASM_SAP,
   MAC_RRM_SAP,
   RRM_MPAL_SAP,
   MAC_MPAL_SAP,
   MMI_AS_SAP,
   SMSAL_AS_SAP,
   AS_L4C_SAP,
   RATCM_L4C_SAP, 
   
    
   LLC_GMM_SAP,
   LLC_RLC_SAP,
   LLC_SNDCP_SAP,
   LLC_SMS_SAP,
   GMM_RLC_SAP,
   SNDCP_REG_SAP,
   SM_SNDCP_SAP,
   SMREG_SAP,
   PPP_L4C_SAP,
   TCM_PPP_SAP,

    
   RATDM_PPP_SAP,
    
   L4C_RATDM_SAP,
   NDIS_RATDM_SAP,
   RABM_PPP_SAP,
   RABM_TCPIP_SAP,
   RABM_NDIS_SAP,

    
   L2R_RLP_SAP,
   RLP_RA_SAP,
   T30_FA_SAP,
   FA_RA_SAP,
   SNDCP_PPP_SAP,
   DATA_MPAL_SAP,
   L2R_SMU_SAP,

    
   GPS_LCSP_SAP,
   RR_RRLP_SAP,
   RRLP_GAS_SAP, 
   RRLP_RATCM_SAP, 
   L4C_RRLP_SAP, 

    
   PS_NVRAM_SAP,
   PS_SIM_SAP,

    
   CSM_VT_SAP,
   VT_CSR_SAP,
   VT_F_CSR_SAP,

    
   MED_SAP,
   L4_AUD_SAP=MED_SAP,


    
   MED_V_SAP,


    
   MMI_L4C_SAP,
   ABM_MMI_SAP,
   MMI_ABM_SAP,
   MMI_MMI_SAP,
   MMI_FMT_SAP,
   MMI_WAP_SAP,
   MMI_JASYN_SAP,
   MMI_SYNCML_SAP,
   MMI_UDX_SAP,
   MMI_EMAIL_SAP,
   SOC_MMI_SAP,

    
   ABM_APP_SAP,
   ABM_SOC_SAP,
   L4C_ABM_SAP,
   TCPIP_SOC_SAP,
   TCPIP_DHCP_SAP,
   WAP_MMI_SAP,
   WPS_APP_SAP,
   TDT_PPP_SAP,
   L2R_PPP_SAP,
   PPP_TCPIP_SAP,
   TCM_TCPIP_SAP,
   SOC_APP_SAP,  
   SMSAL_SOC_SAP,
   EM_PS_SAP,
   EM_L1_SAP,
   L1_EM_SAP,

   MMI_J2ME_SAP,
   J2ME_MMI_SAP,
   WAP_J2ME_SAP,
   J2ME_WAP_SAP,
   J2ME_JASYN_SAP,

   EMAIL_MMI_SAP,
   IMPS_MMI_SAP,   
   SIP_APP_SAP,
   POC_MMI_SAP,

   XDM_APP_SAP,
   SAF_APP_SAP,
   RTSP_APP_SAP,

    
   SME_SAP,
   SME_READER_SAP,
   SME_TIMER_SAP,
    

    
   OBEX_APP_SAP,
   IRCOMM_APP_SAP,
   IRDA_OBEX_SAP,
   IRDA_IRCOMM_SAP,   

    
   L1_MPAL_SAP,
   MPAL_L1_SAP,
   MAC_L1_SAP,
   L1_AS_SAP,
   L1HISR_AS_SAP,
   L1_GAS_SAP,
   L1HISR_GAS_SAP,
   L1_LAPDM_SAP,

   L1_L1_SAP,
   GPS_L1_SAP,
   FMR_SAP, 

   DRIVER_PS_SAP,
   DRIVER_L1_SAP,
   FT_TST_SAP,
   STACK_TIMER_SAP,
   STACK_SIM_TIMER_SAP,
   L4C_CMUX_SAP,
   CMUX_SAP,
   CMUX_UH_SAP,
   UPS_SAP,
   RNDIS_ABM_SAP,
   RNDIS_TCPIP_SAP,

   EXTMODEM_PPP_SAP,
   EXTMODEM_L4C_SAP,

   WNDRV_WNDRV_SAP,
   FT_WNDRV_SAP,
   WNDRV_SUPC_SAP,
   WNDRV_TCPIP_SAP,
   WNDRV_MMI_SAP,
   WNDRV_BT_SAP,
   
   SUPC_MMI_SAP,
   SUPC_ABM_SAP,

   DHCP_ABM_SAP,
   DHCP_SIP_SAP,

   IPERF_MMI_SAP,

   BCHS_L4C_SAP,
   BCHS_MMI_SAP,
   BT_A2DP_SAP,
   BT_APP_SAP,
   BT_AVRCP_SAP,
   BT_HFG_SAP,
   BT_BPP_SAP,
   BT_BIP_SAP,
   BT_PBAP_SAP,
   BT_OBEX_SAP,

   DT_L4C_SAP,

   GDC_SAP,
   GDD_SAP,
   GDI_SAP,

   DRMT_APP_SAP,
   DRMT_WAP_SAP,
   DRMT_MMI_SAP,

   NFC_NFC_READER_SAP,
   NFC_READER_NFC_SAP,
   NFC_NFC_APP_SAP,
   NFC_APP_NFC_SAP,
   MMI_NFC_SAP,
   NFC_MMI_SAP,
    
   
   RTC_GPS_SAP,
   GPS_MNL_SAP,
   MNL_BEE_SAP,
   GPS_SUPL_SAP,
   GPS_FT_SAP,
   
   SUPL_MMI_SAP,
   SUPL_LCSP_SAP,
   SUPL_INT_SAP,

   LCSP_APP_SAP,

   CERTMAN_MMI_SAP,
   CERTMAN_APP_SAP,
   MMI_CERTMAN_APP_SAP,

   TLS_APP_SAP,

   RATCM_RRCE_SAP,
   RATCM_SLCE_SAP,
   RATCM_CSCE_SAP,
   RATCM_CSE_SAP,
   RATCM_USIME_SAP,
   RATCM_CSR_SAP,
   RATCM_BMC_SAP,
   RATCM_URLC_SAP,
   RATCM_LLC_SAP,
   RATCM_GAS_SAP,
   RATCM_RLC_SAP,
   MM_RATCM_SAP,
   SMSAL_RATCM_SAP,
   MM_RATDM_SAP,
   SM_RATDM_SAP,
   TCM_RATDM_SAP,
   RATCM_RATDM_SAP,
   RATDM_RATDM_SAP,
   RATDM_RABM_SAP,
   RATDM_SNDCP_SAP,
   RATDM_URLC_SAP,
   RATDM_TCPIP_SAP, 
   RAC_MEME_SAP,
   L4C_MEME_SAP, 
   UAS_GAS_SAP,
   SLCE_URLC_SAP,
   RRCE_URLC_SAP,
   RRCE_RABM_SAP,
   CSR_DRLC_SAP,
   BMC_DRLC_SAP,
   PDCP_DRLC_SAP,
   PDCP_URLC_SAP,
   RRCE_PDCP_SAP,
   RRCE_DRLC_SAP,
   MEME_DRLC_SAP,
   ADR_DRLC_SAP,
   ADR_UL1_SAP,
   ADR_TL1_SAP,
   DRLC_URLC_SAP,
   DRLC_UMAC_SAP,
   SLCE_PDCP_SAP,
   PDCP_RABM_SAP,
   SLCE_BMC_SAP,
   RRCE_BMC_SAP,
   SLCE_RABM_SAP,
   SLCE_CSR_SAP,
   SLCE_UMAC_SAP,
   RRCE_UMAC_SAP,
   MEME_UMAC_SAP,
   URLC_UMAC_SAP,
   URLC_URLC_SAP,
   CSR_UMAC_SAP,
   RRCE_CSCE_SAP,
   RRCE_MEME_SAP,
   CSCE_MEME_SAP,
   CSE_MEME_SAP,
   CSCE_SLCE_SAP,
   RRCE_SLCE_SAP,
   SIBE_SLCE_SAP,
   SIBE_UL1_SAP,
   MEME_SLCE_SAP,
   CSE_SLCE_SAP,
   SLCE_SLCE_SAP,
   CSCE_CSE_SAP,
   CSCE_SIBE_SAP,
   CSCE_USIME_SAP,
   CSE_SIBE_SAP,
   RRCE_SIBE_SAP,
   MEME_SIBE_SAP,
   RRCE_USIME_SAP,
   SLCE_UL1_SAP,
   MEME_UL1_SAP,
   RRCE_UL1_SAP,
   CSE_UL1_SAP,
   CSCE_UL1_SAP,
   URR_SAP, 
   UMAC_UL1_SAP,
   UMAC_UMAC_SAP,
   UMAC_UL2ACCRXHISR_SAP,
   URLC_UL2ACCRXHISR_SAP,   
   UMAC_SEQ_SAP,
   URLC_SEQ_SAP,
   SEQ_UL1_SAP,
   SEQ_SEQ_SAP,
   SLCE_UL2SEQ_SAP,
   UL1_L1_SAP,
   GAS_UL2_SAP,
   GAS_UL2D_SAP,
   GAS_CSCE_SAP, 
   GAS_MEME_SAP,
   GAS_MEME_MEAS_REPORT_SAP,
   GAS_RRCE_SAP,
   GAS_USIME_SAP,
   CSR_L1AUD_SAP,
   UL1HISR_UL1_SAP,
   UL1C_SAP,
   UL1_UL1_SAP,
   UL1_UL1DATA_SAP,
   URLC_UL1_SAP,
   UL1SM_SAP,

    
   TL1_LL1_SAP,
   TL1_TL1DATA_SAP,
   TL1_TL1HISR_SAP,
   TL1_FTA_SAP,
   TL1_TL1_SAP,
   SIBE_TL1_SAP,
   SLCE_TL1_SAP,
   MEME_TL1_SAP,
   MEME_TL1_MEAS_REPORT_SAP,
   RRCE_TL1_SAP,
   CSE_TL1_SAP,
   CSCE_TL1_SAP,
   UMAC_TL1_SAP,
   UMAC_TL1DATA_SAP,
   
  
   UL1TST_FT_SAP,
   FT_UL1TST_SAP,

#line 970 "config\\include\\hal\\stack_msgs.h"

   VT_SAP,
   VT_L4C_SAP,
   TCPIP_ABM_SAP,
   TCPIP_LOOP_SAP,





   WMT_BT_SAP,
   WMT_FMR_SAP,
   WMT_WNDRV_SAP,
   WMT_WMT_SAP,

   BWCS_BT_SAP,
   BWCS_WNDRV_SAP,
   BWCS_WMT_SAP,

   RSVAS_SAP,
   RSVAK_SAP,
   CSE_RSVAU_SAP,
   SLCE_RSVAU_SAP,
   RSVAU_UL1_SAP,
   URR_RSVAU_SAP,
   GAS_RSVAG_SAP,

    
    
   MPAL_UL1_SAP,
   UL1_MPAL_SAP,

    
   UAS_L1_SAP,
   L1_UAS_SAP,
   GPS_UL1_SAP,




   V2DEC_SAP,
   VFILE_SAP,
   FT_FTC_SAP,
   FTC_FT_SAP,
   FT_FTA_SAP,
   FTA_FT_SAP,

    
   GADGET_MMI_SAP,
   MMI_GADGET_SAP,
   GADGET_WPS_SAP,
   OPERA_MMI_SAP,
   
   EMLST_SAP,

    
   NMC_MMI_SAP,


    
   CAL_SAP,
   CAL_LOW_SAP=CAL_SAP,







    FS_SAP,
    INLINE_ILM_SAP,
    L1_L4C_SAP,
    L4C_L1_SAP,
   CUSTOM_SAP_BEGIN,



 
	GGT_SAP,






	KJX_RFID_EINT,


	
   LAST_SAP_CODE = (CUSTOM_SAP_BEGIN + 10) 
} sap_type;


 








 






 




typedef enum {
   MSG_ID_XXX_CODE_BASE = 500, 
#line 1 "config\\include\\hal\\user_msgid_hal.h"

































 








































































































































































































































































































































































































































































































































































































































































































































































































































































































 







 






















 
 
#line 947 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_GPU_CODE_BEGIN, MSG_ID_GPU_CODE_TAIL = MSG_ID_GPU_CODE_BEGIN + 100,

 

 
#line 959 "config\\include\\hal\\user_msgid_hal.h"
    
    MSG_ID_DT_CODE_BEGIN, MSG_ID_DT_CODE_TAIL = MSG_ID_DT_CODE_BEGIN + 100,

 

 
#line 971 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_MM_CODE_BEGIN, MSG_ID_MM_CODE_TAIL = MSG_ID_MM_CODE_BEGIN + 100,


 

 
#line 984 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_CC_CODE_BEGIN, MSG_ID_CC_CODE_TAIL = MSG_ID_CC_CODE_BEGIN + 100,

 


 
#line 997 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_CISS_CODE_BEGIN, MSG_ID_CISS_CODE_TAIL = MSG_ID_CISS_CODE_BEGIN + 100,

 

 
#line 1009 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_SMS_CODE_BEGIN, MSG_ID_SMS_CODE_TAIL = MSG_ID_SMS_CODE_BEGIN + 100,

 

 
#line 1021 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_SIM_PUBLIC_CODE_BEGIN, MSG_ID_SIM_PUBLIC_CODE_TAIL = MSG_ID_SIM_PUBLIC_CODE_BEGIN + 50,


#line 1031 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_SIM_PS_CODE_BEGIN, MSG_ID_SIM_PS_CODE_TAIL = MSG_ID_SIM_PS_CODE_BEGIN + 170,


 

 
#line 1044 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_L4_PUBLIC_CODE_BEGIN, MSG_ID_L4_PUBLIC_CODE_TAIL = MSG_ID_L4_PUBLIC_CODE_BEGIN + 50,

 

 
 
#line 1057 "config\\include\\hal\\user_msgid_hal.h"

 
 
   MSG_ID_L4C_CODE_BEGIN, MSG_ID_L4C_CODE_TAIL = MSG_ID_L4C_CODE_BEGIN + 400,       
                                
   MSG_ID_TCM_CODE_BEGIN, MSG_ID_TCM_CODE_TAIL = MSG_ID_TCM_CODE_BEGIN + 100,
   MSG_ID_CSM_CODE_BEGIN, MSG_ID_CSM_CODE_TAIL = MSG_ID_CSM_CODE_BEGIN + 100,
   MSG_ID_SMSAL_CODE_BEGIN, MSG_ID_SMSAL_CODE_TAIL = MSG_ID_SMSAL_CODE_BEGIN + 100,
   MSG_ID_SMU_CODE_BEGIN, MSG_ID_SMU_CODE_TAIL = MSG_ID_SMU_CODE_BEGIN + 100,
   MSG_ID_UEM_CODE_BEGIN, MSG_ID_UEM_CODE_TAIL = MSG_ID_UEM_CODE_BEGIN + 100,
   MSG_ID_RAC_CODE_BEGIN, MSG_ID_RAC_CODE_TAIL = MSG_ID_RAC_CODE_BEGIN + 100,
   MSG_ID_USAT_CODE_BEGIN, MSG_ID_USAT_CODE_TAIL = MSG_ID_USAT_CODE_BEGIN + 100,
   MSG_ID_PHB_CODE_BEGIN, MSG_ID_PHB_CODE_TAIL = MSG_ID_PHB_CODE_BEGIN + 100,
   MSG_ID_PS_CODE_BEGIN, MSG_ID_PS_CODE_TAIL = MSG_ID_PS_CODE_BEGIN + 100,
   MSG_ID_ATCI_CODE_BEGIN, MSG_ID_ATCI_CODE_TAIL = MSG_ID_ATCI_CODE_BEGIN + 100,
   MSG_ID_ENG_CODE_BEGIN, MSG_ID_ENG_CODE_TAIL = MSG_ID_ENG_CODE_BEGIN + 100,

    






 

     
   DUMMY_L4_TAIL, 




 
#line 1097 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_RLC_CODE_BEGIN, MSG_ID_RLC_CODE_TAIL = MSG_ID_RLC_CODE_BEGIN + 100,
    MSG_ID_RRM_COMMON_CODE_BEGIN, MSG_ID_RRM_COMMON_CODE_TAIL = MSG_ID_RRM_COMMON_CODE_BEGIN + 100,
    MSG_ID_RRM_CODE_BEGIN = MSG_ID_RRM_COMMON_CODE_BEGIN,
    MSG_ID_RABBISH_CODE2 = MSG_ID_RRM_COMMON_CODE_TAIL,
    MSG_ID_RCS_CODE_BEGIN, MSG_ID_RCS_CODE_TAIL = MSG_ID_RCS_CODE_BEGIN + 100,
    MSG_ID_RMPC_CODE_BEGIN, MSG_ID_RMPC_CODE_TAIL = MSG_ID_RMPC_CODE_BEGIN + 100,
    MSG_ID_RRM_MPAL_DM_CODE_BEGIN, MSG_ID_RRM_MPAL_DM_CODE_TAIL = MSG_ID_RRM_MPAL_DM_CODE_BEGIN + 100,
    MSG_ID_MAC_CODE_BEGIN, MSG_ID_MAC_CODE_TAIL = MSG_ID_MAC_CODE_BEGIN + 100,
    MSG_ID_LAPDM_CODE_BEGIN, MSG_ID_LAPDM_CODE_TAIL = MSG_ID_LAPDM_CODE_BEGIN + 100,
    MSG_ID_REASM_CODE_BEGIN, MSG_ID_REASM_CODE_TAIL = MSG_ID_REASM_CODE_BEGIN + 100,
    MSG_ID_MPAL_CODE_BEGIN, MSG_ID_MPAL_CODE_TAIL = MSG_ID_MPAL_CODE_BEGIN + 100,

    DUMMY_RR_TAIL,

 

 
#line 1121 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_LLC_CODE_BEGIN, MSG_ID_LLC_CODE_TAIL = MSG_ID_LLC_CODE_BEGIN + 100,

 

 
#line 1133 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_P2P_CODE_BEGIN, MSG_ID_P2P_CODE_TAIL = MSG_ID_P2P_CODE_BEGIN + 100,

 

 
#line 1145 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_SND_CODE_BEGIN, MSG_ID_SND_CODE_TAIL = MSG_ID_SND_CODE_BEGIN + 100,

 

 
#line 1157 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_SM_CODE_BEGIN, MSG_ID_SM_CODE_TAIL = MSG_ID_SM_CODE_BEGIN + 100,

 

 
#line 1169 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_TDT_CODE_BEGIN, MSG_ID_TDT_CODE_TAIL = MSG_ID_TDT_CODE_BEGIN + 100,

     
    MSG_ID_T30_CODE_BEGIN = MSG_ID_TDT_CODE_BEGIN + 9, 
    MSG_ID_FA_CODE_BEGIN = MSG_ID_T30_CODE_BEGIN + 50,
    MSG_RABBISH_CODEID = MSG_ID_TDT_CODE_TAIL,
     
    
    MSG_ID_L2R_CODE_BEGIN, MSG_ID_L2R_CODE_TAIL = MSG_ID_L2R_CODE_BEGIN + 100,
    MSG_ID_RLP_CODE_BEGIN, MSG_ID_RLP_CODE_TAIL = MSG_ID_RLP_CODE_BEGIN + 100,

    DUMMY_DATA_TAIL,

 


 
#line 1192 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_PS_PUBLIC_VT_MSG_CODE_BEGIN, MSG_ID_PS_PUBLIC_VT_MSG_CODE_TAIL = MSG_ID_PS_PUBLIC_VT_MSG_CODE_BEGIN + 30,

 

 
#line 1204 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_VT_CODE_BEGIN, MSG_ID_VT_CODE_TAIL = MSG_ID_VT_CODE_BEGIN + 70,
    MSG_ID_VT_CODE_RANGE = 70,
    MSG_ID_RABBISH_CODE22 = MSG_ID_VT_CODE_TAIL,
    DUMMY_VT_TAIL,

 






 
 
#line 1224 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_IRDA_CODE_BEGIN, MSG_ID_IRDA_CODE_TAIL = MSG_ID_IRDA_CODE_BEGIN + 100,

 

 
#line 1235 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_IRCOMM_CODE_BEGIN, MSG_ID_IRCOMM_CODE_TAIL = MSG_ID_IRCOMM_CODE_BEGIN + 100,

 

 




    MSG_ID_NVRAM_CODE_BEGIN, MSG_ID_NVRAM_CODE_TAIL = MSG_ID_NVRAM_CODE_BEGIN + 100,

 

 




    MSG_ID_L1_CODE_BEGIN, MSG_ID_L1_CODE_TAIL = MSG_ID_L1_CODE_BEGIN + 200,
    L1_MSG_CODE_BEGIN = MSG_ID_L1_CODE_BEGIN,
    MSG_ID_RABBISH_CODE7 = MSG_ID_L1_CODE_TAIL,
    DUMMY_L1_TAIL,

 

 




    MSG_ID_HAL_L1_CODE_BEGIN, MSG_ID_HAL_L1_CODE_TAIL = MSG_ID_HAL_L1_CODE_BEGIN + 20,

    DUMMY_HAL_L1_TAIL,

 

 




    MSG_ID_L1HISR_CODE_BEGIN, MSG_ID_L1HISR_CODE_TAIL = MSG_ID_L1HISR_CODE_BEGIN + 700,
    L1HISR_MSG_CODE_BEGIN = MSG_ID_L1HISR_CODE_BEGIN,
    MSG_ID_RABBISH_CODE8 = MSG_ID_L1HISR_CODE_TAIL,
    DUMMY_L1HISR_TAIL,

 

 




    MSG_ID_FT_CODE_BEGIN, MSG_ID_FT_CODE_TAIL = MSG_ID_FT_CODE_BEGIN + 100,
    FT_MSG_CODE_BEGIN = MSG_ID_FT_CODE_BEGIN,
    MSG_ID_RABBISH_CODE9 = MSG_ID_FT_CODE_TAIL,
    DUMMY_FT_TAIL,

 

 




    MSG_ID_TST_CODE_BEGIN, MSG_ID_TST_CODE_TAIL = MSG_ID_TST_CODE_BEGIN + 1200,

    TST_MSG_CODE_BEGIN = MSG_ID_TST_CODE_BEGIN,
    MSG_ID_RABBISH_CODE10 = MSG_ID_TST_CODE_TAIL,
    DUMMY_TST_TAIL,

 


 




    MSG_ID_SYSDEBUG_CODE_BEGIN, MSG_ID_SYSDEBUG_CODE_TAIL = MSG_ID_SYSDEBUG_CODE_BEGIN + 100,
    SYSDEBUG_MSG_CODE_BEGIN = MSG_ID_SYSDEBUG_CODE_BEGIN,
    MSG_ID_RABBISH_CODE11 = MSG_ID_SYSDEBUG_CODE_TAIL,
    DUMMY_SYSDEBUG_TAIL,

 


    


 


 


 





    MSG_ID_VSRC_CODE_BEGIN, MSG_ID_VSRC_CODE_TAIL = MSG_ID_VSRC_CODE_BEGIN + 100,


 


 




    MSG_ID_MEXE_CODE_BEGIN, MSG_ID_MEXE_CODE_TAIL = MSG_ID_MEXE_CODE_BEGIN + 10,


 

    
 
 
#line 1363 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_AUDIO_MSG_CODE_BEGIN, MSG_ID_AUDIO_MSG_CODE_TAIL = MSG_ID_AUDIO_MSG_CODE_BEGIN + 50,

    DUMMY_AUDIO_TAIL,


 



 




    MSG_ID_L1AUDIO_SPH_SRV_CODE_BEGIN, MSG_ID_L1AUDIO_SPH_SRV_CODE_TAIL = MSG_ID_L1AUDIO_SPH_SRV_CODE_BEGIN + 50,

 


 
#line 1390 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_LCSP_MSG_CODE_BEGIN, MSG_ID_LCSP_MSG_CODE_TAIL = MSG_ID_LCSP_MSG_CODE_BEGIN + 50,


 


 




    MSG_ID_FM_MSG_CODE_BEGIN, MSG_ID_FM_MSG_CODE_TAIL = MSG_ID_FM_MSG_CODE_BEGIN + 20,


 

 




    MSG_ID_RATCM_CODE_BEGIN, MSG_ID_RATCM_CODE_TAIL = MSG_ID_RATCM_CODE_BEGIN + 200,


 

 




    MSG_ID_RATDM_CODE_BEGIN, MSG_ID_RATDM_CODE_TAIL = MSG_ID_RATDM_CODE_BEGIN + 100,


 


 
 
#line 1435 "config\\include\\hal\\user_msgid_hal.h"

 
 
   MSG_ID_ADR_CODE_BEGIN, MSG_ID_ADR_CODE_TAIL = MSG_ID_ADR_CODE_BEGIN + 100,       
                                
   MSG_ID_CSCE_CODE_BEGIN, MSG_ID_CSCE_CODE_TAIL = MSG_ID_CSCE_CODE_BEGIN + 100,
   MSG_ID_CSE_CODE_BEGIN, MSG_ID_CSE_CODE_TAIL = MSG_ID_CSE_CODE_BEGIN + 100,
   MSG_ID_MEME_CODE_BEGIN, MSG_ID_MEME_CODE_TAIL = MSG_ID_MEME_CODE_BEGIN + 100,
   MSG_ID_RRCE_CODE_BEGIN, MSG_ID_RRCE_CODE_TAIL = MSG_ID_RRCE_CODE_BEGIN + 100,
   MSG_ID_SIBE_CODE_BEGIN, MSG_ID_SIBE_CODE_TAIL = MSG_ID_SIBE_CODE_BEGIN + 100,
   MSG_ID_SLCE_CODE_BEGIN, MSG_ID_SLCE_CODE_TAIL = MSG_ID_SLCE_CODE_BEGIN + 200,
   MSG_ID_USIME_CODE_BEGIN, MSG_ID_USIME_CODE_TAIL = MSG_ID_USIME_CODE_BEGIN + 100,
   MSG_ID_DBME_CODE_BEGIN, MSG_ID_DBME_CODE_TAIL = MSG_ID_DBME_CODE_BEGIN + 20,
   MSG_ID_URR_CODE_BEGIN, MSG_ID_URR_CODE_TAIL = MSG_ID_URR_CODE_BEGIN + 50,
   
    






 

     
   DUMMY_URR_TAIL, 


 
 
#line 1472 "config\\include\\hal\\user_msgid_hal.h"

 
 
   MSG_ID_UMAC_CODE_BEGIN, MSG_ID_UMAC_CODE_TAIL = MSG_ID_UMAC_CODE_BEGIN + 100,       
                                
   MSG_ID_URLC_CODE_BEGIN, MSG_ID_URLC_CODE_TAIL = MSG_ID_URLC_CODE_BEGIN + 100,
   MSG_ID_UL2_CODE_BEGIN, MSG_ID_UL2_CODE_TAIL = MSG_ID_UL2_CODE_BEGIN + 100,
   MSG_ID_SEQ_CODE_BEGIN, MSG_ID_SEQ_CODE_TAIL = MSG_ID_SEQ_CODE_BEGIN + 100,

    






 

     
   DUMMY_UL2_TAIL, 


 

 
 
#line 1504 "config\\include\\hal\\user_msgid_hal.h"

 
 
   MSG_ID_BMC_CODE_BEGIN, MSG_ID_BMC_CODE_TAIL = MSG_ID_BMC_CODE_BEGIN + 100,       
                                
   MSG_ID_CSR_CODE_BEGIN, MSG_ID_CSR_CODE_TAIL = MSG_ID_CSR_CODE_BEGIN + 100,
   MSG_ID_DRLC_CODE_BEGIN, MSG_ID_DRLC_CODE_TAIL = MSG_ID_DRLC_CODE_BEGIN + 100,
   MSG_ID_PDCP_CODE_BEGIN, MSG_ID_PDCP_CODE_TAIL = MSG_ID_PDCP_CODE_BEGIN + 100,
   MSG_ID_RABM_CODE_BEGIN, MSG_ID_RABM_CODE_TAIL = MSG_ID_RABM_CODE_BEGIN + 100,
   MSG_ID_UL2D_CODE_BEGIN, MSG_ID_UL2D_CODE_TAIL = MSG_ID_UL2D_CODE_BEGIN + 100,
    






 

     
   DUMMY_UL2D_TAIL, 


 

 
#line 1537 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_DM_CSCE_CODE_BEGIN, MSG_ID_DM_CSCE_CODE_TAIL = MSG_ID_DM_CSCE_CODE_BEGIN + 100,
    MSG_ID_DM_GAS_CODE_BEGIN, MSG_ID_DM_GAS_CODE_TAIL = MSG_ID_DM_GAS_CODE_BEGIN + 200,
    MSG_ID_DM_MEME_CODE_BEGIN, MSG_ID_DM_MEME_CODE_TAIL = MSG_ID_DM_MEME_CODE_BEGIN + 100,
    MSG_ID_DM_RRCE_CODE_BEGIN, MSG_ID_DM_RRCE_CODE_TAIL = MSG_ID_DM_RRCE_CODE_BEGIN + 100,

    DUMMY_URR_GRR_TAIL,

 

 
#line 1554 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_GEMINI_UAS_CODE_BEGIN, MSG_ID_GEMINI_UAS_CODE_TAIL = MSG_ID_GEMINI_UAS_CODE_BEGIN + 100,
    MSG_ID_GEMINI_GAS_CODE_BEGIN, MSG_ID_GEMINI_GAS_CODE_TAIL = MSG_ID_GEMINI_GAS_CODE_BEGIN + 100,

    DUMMY_GEMINI_URR_GRR_TAIL,

 


 
#line 1569 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_UL1_MSG_CODE_BEGIN, MSG_ID_UL1_MSG_CODE_TAIL = MSG_ID_UL1_MSG_CODE_BEGIN + 200,

    DUMMY_UL1_TAIL,

 

 
#line 1583 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_UL1DATA_MSG_CODE_BEGIN, MSG_ID_UL1DATA_MSG_CODE_TAIL = MSG_ID_UL1DATA_MSG_CODE_BEGIN + 20,

    DUMMY_UL1DATA_TAIL,

 

 
#line 1597 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_UL1HISR_MSG_CODE_BEGIN, MSG_ID_UL1HISR_MSG_CODE_TAIL = MSG_ID_UL1HISR_MSG_CODE_BEGIN + 5,

    DUMMY_UL1HISR_TAIL,

 

 
#line 1611 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_UL1C_MSG_CODE_BEGIN, MSG_ID_UL1C_MSG_CODE_TAIL = MSG_ID_UL1C_MSG_CODE_BEGIN + 10,
    
    DUMMY_UL1C_TAIL,

 

 
#line 1625 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_LL1_MSG_CODE_BEGIN, MSG_ID_LL1_MSG_CODE_TAIL = MSG_ID_LL1_MSG_CODE_BEGIN + 100,

    DUMMY_LL1_TAIL,

 

 
#line 1639 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_UL1TST_MSG_CODE_BEGIN, MSG_ID_UL1TST_MSG_CODE_TAIL = MSG_ID_UL1TST_MSG_CODE_BEGIN + 50,
    
    DUMMY_UL1TST_TAIL,

 

 

#line 1653 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_UAGPS_CP_CODE_BEGIN, MSG_ID_UAGPS_CP_CODE_TAIL = MSG_ID_UAGPS_CP_CODE_BEGIN + 50,

 

 

#line 1666 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_TL1_MSG_CODE_BEGIN, MSG_ID_TL1_MSG_CODE_TAIL = MSG_ID_TL1_MSG_CODE_BEGIN + 200,


#line 1675 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_TL1DATA_AST_MSG_CODE_BEGIN, MSG_ID_TL1DATA_AST_MSG_CODE_TAIL = MSG_ID_TL1DATA_AST_MSG_CODE_BEGIN + 200,


#line 1684 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_TL1HISR_AST_MSG_CODE_BEGIN, MSG_ID_TL1HISR_AST_MSG_CODE_TAIL = MSG_ID_TL1HISR_AST_MSG_CODE_BEGIN + 50,


#line 1693 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_TL1FTA_AST_MSG_CODE_BEGIN, MSG_ID_TL1FTA_AST_MSG_CODE_TAIL = MSG_ID_TL1FTA_AST_MSG_CODE_BEGIN + 50,


 

 
#line 1705 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_RSVAS_CODE_BEGIN, MSG_ID_RSVAS_CODE_TAIL = MSG_ID_RSVAS_CODE_BEGIN + 100,
    MSG_ID_RSVAK_CODE_BEGIN, MSG_ID_RSVAK_CODE_TAIL = MSG_ID_RSVAK_CODE_BEGIN + 50,
    MSG_ID_RSVAU_CODE_BEGIN, MSG_ID_RSVAU_CODE_TAIL = MSG_ID_RSVAU_CODE_BEGIN + 50,
    MSG_ID_RSVAG_CODE_BEGIN, MSG_ID_RSVAG_CODE_TAIL = MSG_ID_RSVAG_CODE_BEGIN + 50,

    DUMMY_RSVA_TAIL,

 


 




    MSG_ID_NDIS_MSG_CODE_BEGIN, MSG_ID_NDIS_MSG_CODE_TAIL = MSG_ID_NDIS_MSG_CODE_BEGIN + 20,

 

 
#line 1731 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_UPS_PUBLIC_CODE_BEGIN, MSG_ID_UPS_PUBLIC_CODE_TAIL = MSG_ID_UPS_PUBLIC_CODE_BEGIN + 20,

 

  
#line 1743 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_UPS_MSG_CODE_BEGIN, MSG_ID_UPS_MSG_CODE_TAIL = MSG_ID_UPS_MSG_CODE_BEGIN + 100,

 

 
#line 1754 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_PS_PUBLIC_SUPL_MSG_CODE_BEGIN, MSG_ID_PS_PUBLIC_SUPL_MSG_CODE_TAIL = MSG_ID_PS_PUBLIC_SUPL_MSG_CODE_BEGIN + 20,


 

 
#line 1767 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_SUPL_MSG_CODE_BEGIN, MSG_ID_SUPL_MSG_CODE_TAIL = MSG_ID_SUPL_MSG_CODE_BEGIN + 20,


 

 




    MSG_ID_CMUX_CODE_BEGIN, MSG_ID_CMUX_CODE_TAIL = MSG_ID_CMUX_CODE_BEGIN + 1100,
    CMUX_MSG_CODE_BEGIN = MSG_ID_CMUX_CODE_BEGIN,
    MSG_ID_RABBISH_CODE12 = MSG_ID_CMUX_CODE_TAIL,
    DUMMY_CMUX_TAIL,

 

 
#line 1792 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_PPP_CODE_BEGIN, MSG_ID_PPP_CODE_TAIL = MSG_ID_PPP_CODE_BEGIN + 100,

 

 




    MSG_ID_GPS_MSG_CODE_BEGIN, MSG_ID_GPS_MSG_CODE_TAIL = MSG_ID_GPS_MSG_CODE_BEGIN + 50,
    DUMMY_GPS_TAIL,


 

 




    MSG_ID_MNL_MSG_CODE_BEGIN, MSG_ID_MNL_MSG_CODE_TAIL = MSG_ID_MNL_MSG_CODE_BEGIN + 50,

    DUMMY_MNL_TAIL,


 

 




    MSG_ID_NFC_MSG_CODE_BEGIN, MSG_ID_NFC_MSG_CODE_TAIL = MSG_ID_NFC_MSG_CODE_BEGIN + 100,

    DUMMY_NFC_TAIL,


 

 




    MSG_ID_NFC_READER_MSG_CODE_BEGIN, MSG_ID_NFC_READER_MSG_CODE_TAIL = MSG_ID_NFC_READER_MSG_CODE_BEGIN + 50,

    DUMMY_NFC_READER_TAIL,


 

 




    MSG_ID_NFC_APP_MSG_CODE_BEGIN, MSG_ID_NFC_APP_MSG_CODE_TAIL = MSG_ID_NFC_APP_MSG_CODE_BEGIN + 50,

    DUMMY_NFC_APP_TAIL,


 

 




    MSG_ID_CAL_CODE_BEGIN, MSG_ID_CAL_CODE_TAIL = MSG_ID_CAL_CODE_BEGIN + 100,

 

 




    MSG_ID_EXT_MODEM_CODE_BEGIN, MSG_ID_EXT_MODEM_CODE_TAIL = MSG_ID_EXT_MODEM_CODE_BEGIN + 50,


 

 





    MSG_ID_WNDRV_CODE_BEGIN, MSG_ID_WNDRV_CODE_TAIL = MSG_ID_WNDRV_CODE_BEGIN + 100,
    WNDRV_MSG_CODE_BEGIN = MSG_ID_WNDRV_CODE_BEGIN,
    MSG_ID_RABBISH_CODE17 = MSG_ID_WNDRV_CODE_TAIL,
    DUMMY_WNDRV_TAIL,

 

 




    MSG_ID_WMT_MSG_CODE_BEGIN, MSG_ID_WMT_MSG_CODE_TAIL = MSG_ID_WMT_MSG_CODE_BEGIN + 100,

 
 




    MSG_ID_XDM_CODE_BEGIN, MSG_ID_XDM_CODE_TAIL = MSG_ID_XDM_CODE_BEGIN + 50,

    XDM_MSG_CODE_BEGIN = MSG_ID_XDM_CODE_BEGIN,
    MSG_ID_RABBISH_CODE16 = MSG_ID_XDM_CODE_TAIL,
    DUMMY_XDM_TAIL,


 

 




    MSG_ID_SUPC_CODE_BEGIN, MSG_ID_SUPC_CODE_TAIL = MSG_ID_SUPC_CODE_BEGIN + 100,
    SUPC_MSG_CODE_BEGIN = MSG_ID_SUPC_CODE_BEGIN,
    MSG_ID_RABBISH_CODE18 = MSG_ID_SUPC_CODE_TAIL,
    DUMMY_SUPC_TAIL,

 

 




    MSG_ID_SAF_CODE_BEGIN, MSG_ID_SAF_CODE_TAIL = MSG_ID_SAF_CODE_BEGIN + 50,
    SAF_MSG_CODE_BEGIN = MSG_ID_SAF_CODE_BEGIN,
    MSG_ID_RABBISH_CODE19 = MSG_ID_SAF_CODE_TAIL,
    DUMMY_SAF_TAIL,

 

 
#line 1941 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_L4A_CODE_BEGIN, MSG_ID_L4A_CODE_TAIL = MSG_ID_L4A_CODE_BEGIN + 1300,
    DUMMY_MMI_TAIL,

 

 
#line 1953 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_ABM_CODE_BEGIN, MSG_ID_ABM_CODE_TAIL = MSG_ID_ABM_CODE_BEGIN + 100,

 

 
#line 1964 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_SOC_CODE_BEGIN, MSG_ID_SOC_CODE_TAIL = MSG_ID_SOC_CODE_BEGIN + 100,

     

 
#line 1975 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_TCPIP_CODE_BEGIN, MSG_ID_TCPIP_CODE_TAIL = MSG_ID_TCPIP_CODE_BEGIN + 100,

 

 
#line 1986 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_EM_CODE_BEGIN, MSG_ID_EM_CODE_TAIL = MSG_ID_EM_CODE_BEGIN + 100,

  

 
#line 1997 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_EMAIL_CODE_BEGIN, MSG_ID_EMAIL_CODE_TAIL = MSG_ID_EMAIL_CODE_BEGIN + 180,

 

 




    MSG_ID_IMPS_CODE_BEGIN, MSG_ID_IMPS_CODE_TAIL = MSG_ID_IMPS_CODE_BEGIN + 150,

 

 




    MSG_ID_SIP_CODE_BEGIN, MSG_ID_SIP_CODE_TAIL = MSG_ID_SIP_CODE_BEGIN + 50,
    SIP_MSG_CODE_BEGIN = MSG_ID_SIP_CODE_BEGIN,
    MSG_ID_RABBISH_CODE13 = MSG_ID_SIP_CODE_TAIL,
    DUMMY_SIP_TAIL,

 

 




    MSG_ID_BT_CODE_BEGIN, MSG_ID_BT_CODE_TAIL = MSG_ID_BT_CODE_BEGIN + 900,
    BT_MSG_CODE_BEGIN = MSG_ID_BT_CODE_BEGIN,
    MSG_ID_RABBISH_CODE15 = MSG_ID_BT_CODE_TAIL,

    DUMMY_BT_TAIL,

 

 




    MSG_ID_DHCP_CODE_BEGIN, MSG_ID_DHCP_CODE_TAIL = MSG_ID_DHCP_CODE_BEGIN + 50,


 

 




    MSG_ID_IPERF_CODE_BEGIN, MSG_ID_IPERF_CODE_TAIL = MSG_ID_IPERF_CODE_BEGIN + 50,


 

 




    MSG_ID_SYNCML_CODE_BEGIN, MSG_ID_SYNCML_CODE_TAIL = MSG_ID_SYNCML_CODE_BEGIN + 100,


 

 




    MSG_ID_RTSP_CODE_BEGIN, MSG_ID_RTSP_CODE_TAIL = MSG_ID_RTSP_CODE_BEGIN + 20,
    RTSP_MSG_CODE_BEGIN = MSG_ID_RTSP_CODE_BEGIN,
    MSG_RABBISH_CODEID3 = MSG_ID_RTSP_CODE_TAIL,
    DUMMY_RTSP_TAIL,

 

 




    MSG_ID_DM_CODE_BEGIN, MSG_ID_DM_CODE_TAIL = MSG_ID_DM_CODE_BEGIN + 80,


 

 




    MSG_ID_DRMT_MSG_CODE_BEGIN, MSG_ID_DRMT_MSG_CODE_TAIL = MSG_ID_DRMT_MSG_CODE_BEGIN + 100,
    DUMMY_DRMT_TAIL,

 

 
#line 2104 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_EMLST_CODE_BEGIN, MSG_ID_EMLST_CODE_TAIL = MSG_ID_EMLST_CODE_BEGIN + 100,

 

 




    MSG_ID_DHCPD_CODE_BEGIN, MSG_ID_DHCPD_CODE_TAIL = MSG_ID_DHCPD_CODE_BEGIN + 30,

 

 
#line 2124 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_HOSTAP_MSG_CODE_BEGIN, MSG_ID_HOSTAP_MSG_CODE_TAIL = MSG_ID_HOSTAP_MSG_CODE_BEGIN + 100,

 

 




    MSG_ID_FS_CODE_BEGIN, MSG_ID_FS_CODE_TAIL = MSG_ID_FS_CODE_BEGIN + 60,    

 


 
#line 2145 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_MTP_MSG_CODE_BEGIN, MSG_ID_MTP_MSG_CODE_TAIL = MSG_ID_MTP_MSG_CODE_BEGIN + 50,

    DUMMY_MTP_TAIL,

 
 




    MSG_ID_MED_HAL_CODE_BEGIN, MSG_ID_MED_HAL_CODE_TAIL = MSG_ID_MED_HAL_CODE_BEGIN + 80,


 

    

 




    MSG_ID_L1_EXT_CODE_BEGIN, MSG_ID_L1_EXT_CODE_TAIL = MSG_ID_L1_EXT_CODE_BEGIN + 20,

    DUMMY_L1_EXT_TAIL,

 

 




    MSG_ID_CARDAV_CODE_BEGIN, MSG_ID_CARDAV_CODE_TAIL = MSG_ID_CARDAV_CODE_BEGIN + 30,

 

#line 1087 "config\\include\\hal\\stack_msgs.h"
#line 1 "config\\include\\app\\user_msgid_app.h"

































 




































































































































































































































































































































































































































































































































































































































































































































































































































































































 







 






















 

 
#line 944 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_MMIAPI_CODE_BEGIN, MSG_ID_MMIAPI_CODE_TAIL = MSG_ID_MMIAPI_CODE_BEGIN + 500,

 

 
#line 955 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_WAP_CODE_BEGIN, MSG_ID_WAP_CODE_TAIL = MSG_ID_WAP_CODE_BEGIN + 600,

 

 
#line 966 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_J2ME_CODE_BEGIN, MSG_ID_J2ME_CODE_TAIL = MSG_ID_J2ME_CODE_BEGIN + 220,

 

 




    MSG_ID_UDX_CODE_BEGIN, MSG_ID_UDX_CODE_TAIL = MSG_ID_UDX_CODE_BEGIN + 50,


 

 
#line 987 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_CERTMAN_MSG_CODE_BEGIN, MSG_ID_CERTMAN_MSG_CODE_TAIL = MSG_ID_CERTMAN_MSG_CODE_BEGIN + 100,

    DUMMY_CERTMAN_TAIL,


 

  
#line 1001 "config\\include\\app\\user_msgid_app.h"
   MSG_ID_MMI_CERTMAN_MSG_CODE_BEGIN, MSG_ID_MMI_CERTMAN_MSG_CODE_TAIL = MSG_ID_MMI_CERTMAN_MSG_CODE_BEGIN + 20,

   DUMMY_MMI_CERTMAN_TAIL,


 

 
#line 1015 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_TLS_CODE_BEGIN, MSG_ID_TLS_CODE_TAIL = MSG_ID_TLS_CODE_BEGIN + 20,


 

 
#line 1028 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_WISE_MSG_CODE_BEGIN, MSG_ID_WISE_MSG_CODE_TAIL = MSG_ID_WISE_MSG_CODE_BEGIN + 600,


 

 
#line 1041 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_WISE_IPT_MSG_CODE_BEGIN, MSG_ID_WISE_IPT_MSG_CODE_TAIL = MSG_ID_WISE_IPT_MSG_CODE_BEGIN + 250,


 

 
#line 1053 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_KMP_CODE_BEGIN, MSG_ID_KMP_CODE_TAIL = MSG_ID_KMP_CODE_BEGIN + 50,


 

 
#line 1065 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_WIDGET_MSG_CODE_BEGIN, MSG_ID_WIDGET_MSG_CODE_TAIL = MSG_ID_WIDGET_MSG_CODE_BEGIN + 100,

 

 
#line 1077 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_OPERA_BROWSER_MSG_CODE_BEGIN, MSG_ID_OPERA_BROWSER_MSG_CODE_TAIL = MSG_ID_OPERA_BROWSER_MSG_CODE_BEGIN + 100,

 

 
#line 1088 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_NMC_CODE_BEGIN, MSG_ID_NMC_CODE_TAIL = MSG_ID_NMC_CODE_BEGIN + 5,

 

 
#line 1100 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_MED_CODE_BEGIN, MSG_ID_MED_CODE_TAIL = MSG_ID_MED_CODE_BEGIN + 920,

 

 
#line 1111 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_MED_V_CODE_BEGIN, MSG_ID_MED_V_CODE_TAIL = MSG_ID_MED_V_CODE_BEGIN + 100,

 

 
#line 1122 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_OBEX_CODE_BEGIN, MSG_ID_OBEX_CODE_TAIL = MSG_ID_OBEX_CODE_BEGIN + 100,

 

 




    MSG_ID_VCODEC_CODE_BEGIN, MSG_ID_VCODEC_CODE_TAIL = MSG_ID_VCODEC_CODE_BEGIN + 100,

 

 




    MSG_ID_DRIVER_CODE_BEGIN, MSG_ID_DRIVER_CODE_TAIL = MSG_ID_DRIVER_CODE_BEGIN + 300,
    DRIVER_MSG_CODE_BEGIN = MSG_ID_DRIVER_CODE_BEGIN,
    MSG_ID_RABBISH_CODE4 = MSG_ID_DRIVER_CODE_TAIL,
    DUMMY_DRIVER_TAIL,

 

 
 
#line 1156 "config\\include\\app\\user_msgid_app.h"

    MSG_ID_DPS_CODE_BEGIN, MSG_ID_DPS_CODE_TAIL = MSG_ID_DPS_CODE_BEGIN + 100,
    MSG_ID_DPS_MSG_START = MSG_ID_DPS_CODE_BEGIN,
    MSG_ID_RABBISH_CODE5 = MSG_ID_DPS_CODE_TAIL,

    DUMMY_DPS_TAIL,

 

 
#line 1173 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_UDPS_CODE_BEGIN, MSG_ID_UDPS_CODE_TAIL = MSG_ID_UDPS_CODE_BEGIN + 1000,
    MSG_ID_UDPS_MSG_START = MSG_ID_UDPS_CODE_BEGIN,
    MSG_ID_RABBISH_CODE6 = MSG_ID_UDPS_CODE_TAIL, 
    DUMMY_UDPS_TAIL,

 

 





    MSG_ID_VCODEC_V2_CODE_BEGIN, MSG_ID_VCODEC_V2_CODE_TAIL = MSG_ID_VCODEC_V2_CODE_BEGIN + 100,


 

 





    MSG_ID_VFILE_CODE_BEGIN, MSG_ID_VFILE_CODE_TAIL = MSG_ID_VFILE_CODE_BEGIN + 100,


 

 
#line 1209 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_MEUT_MSG_CODE_BEGIN, MSG_ID_MEUT_MSG_CODE_TAIL = MSG_ID_MEUT_MSG_CODE_BEGIN + 500,

 

 
#line 1220 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_FMT_MSG_CODE_BEGIN, MSG_ID_FMT_MSG_CODE_TAIL = MSG_ID_FMT_MSG_CODE_BEGIN + 120,
    DUMMY_FMT_TAIL,

 

 
#line 1233 "config\\include\\app\\user_msgid_app.h"
 
 
#line 1241 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_MRE_CODE_BEGIN, MSG_ID_MRE_CODE_TAIL = MSG_ID_MRE_CODE_BEGIN + 10,

 


 
#line 1254 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_FUN_GPS_CODE_BEGIN, MSG_ID_FUN_GPS_CODE_TAIL = MSG_ID_FUN_GPS_CODE_BEGIN + 100,


#line 1267 "config\\include\\app\\user_msgid_app.h"

#line 1278 "config\\include\\app\\user_msgid_app.h"

#line 1286 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_RFID_CODE_BEGIN, MSG_ID_RFID_CODE_TAIL = MSG_ID_RFID_CODE_BEGIN + 100,


#line 1295 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_RFID_EINT_CODE_BEGIN, MSG_ID_RFID_EINT_CODE_TAIL = MSG_ID_RFID_EINT_CODE_BEGIN + 100,






 


#line 1088 "config\\include\\hal\\stack_msgs.h"
   MSG_ID_CODE_END,

} MSG_ID_CODE_BEGIN;











typedef enum {
   MSG_ID_INVALID_TYPE = 0,
#line 1 "config\\include\\hal\\user_msgid_hal.h"

































 








































































































































































































































































































































































































































































































































































































































































































































































































































































































 







 






















 
 





    MSG_ID_GPU_CODE_CHECK_POINT,



 

 


#line 1 "ps\\interfaces\\sap\\dt_sap.h"

































 
 














































 
	 
	 
#line 103 "ps\\interfaces\\sap\\dt_sap.h"
	 

#line 956 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_DT_CODE_CHECK_POINT,




 

 
#line 1 "ps\\interfaces\\sap\\mm_sap.h"

































 
 







 

 





























































































































 








 


 
	 
	 

	 
	MSG_ID_MMCC_PROMPT_REJ = MSG_ID_MM_CODE_BEGIN,
	MSG_ID_MMCC_PROMPT_RSP,
	MSG_ID_MMCC_REL_REQ,
	MSG_ID_MMCC_EST_REQ,
	MSG_ID_MMCC_REEST_REQ,
	MSG_ID_MMCC_DATA_REQ,
    MSG_ID_MMCC_ABORT_CALL_REQ,

	 
	MSG_ID_MMSS_EST_REQ,
	MSG_ID_MMSS_DATA_REQ,
	MSG_ID_MMSS_REL_REQ,
	 
	MSG_ID_MMSMS_REL_REQ,
	MSG_ID_MMSMS_DATA_REQ,
	MSG_ID_MMSMS_EST_REQ,

	 
        MSG_ID_GMMREG_ATTACH_REQ, 
        MSG_ID_GMMREG_DETACH_REQ,                     
        MSG_ID_GMMREG_PLMN_SEARCH_REQ,
        MSG_ID_GMMREG_START_REG_REQ,
        MSG_ID_GMMREG_INIT_REQ,
        MSG_ID_GMMREG_BAND_SEL_REQ,
        MSG_ID_GMMREG_SEL_MODE_REQ, 
        MSG_ID_GMMREG_RFOFF_REQ,
        MSG_ID_GMMREG_SET_ROAMING_MODE_REQ,
        MSG_ID_GMMREG_SET_PREFER_RAT_REQ,

        MSG_ID_GMMREG_PLMN_LIST_REQ,
        MSG_ID_GMMREG_PLMN_LIST_STOP_REQ,
        MSG_ID_GMMREG_SET_RAT_MODE_REQ,

        MSG_ID_GMMREG_SET_GPRS_TRANSFER_PREFERENCE_REQ,
        MSG_ID_GMMREG_SET_PREFERRED_BAND_REQ,    
        MSG_ID_GMMREG_END_PS_DATA_SESSION_REQ, 







	 
	 

	 
	MSG_ID_GMMSMS_EST_REQ,
	MSG_ID_GMMSMS_UNITDATA_REQ,

	 
        MSG_ID_GMMSM_ESTABLISH_REQ,          
        MSG_ID_GMMSM_UNITDATA_REQ,
        MSG_ID_GMMSM_SEQUENCE_IND,
        MSG_ID_GMMSM_NSAPI_STATUS_REQ,

        MSG_ID_GMMSM_ATTACH_REQ,
        MSG_ID_GMMSM_EST_REQ,

	 
	 

	 
	 

	 
	 
	
                 
        MSG_ID_MM_RATDM_SEQUENCE_CNF,
        MSG_ID_MM_RATDM_REESTABLISH_RAB_IND,
        MSG_ID_MM_RATDM_SEND_USER_DATA_IND,

        MSG_ID_MM_RATDM_RAB_RELEASE_IND,


         
	MSG_ID_MM_RATCM_SET_RAT_MODE_CNF,
	MSG_ID_MM_RATCM_INIT_CNF,
	MSG_ID_MM_RATCM_RFOFF_CNF,
	MSG_ID_MM_RATCM_PLMN_SEARCH_CNF,
	MSG_ID_MM_RATCM_BAND_CHANGE_CNF,
	MSG_ID_MM_RATCM_SYS_INFO_IND,
	MSG_ID_MM_RATCM_PLMN_LOSS_IND,
	MSG_ID_MM_RATCM_OUT_OF_SERVICE_IND,
	MSG_ID_MM_RATCM_PLMN_LIST_CNF,
	MSG_ID_MM_RATCM_PLMN_LIST_STOP_CNF,
	MSG_ID_MM_RATCM_CELL_CHANGE_START_IND,
	MSG_ID_MM_RATCM_CELL_CHANGE_FINISH_IND,
	MSG_ID_MM_RATCM_PAGE_IND,
	MSG_ID_MM_RATCM_SYNC_IND,
	MSG_ID_MM_RATCM_SECURITY_MODE_COMPLETE_IND,
	MSG_ID_MM_RATCM_SECURITY_MODE_CHANGE_IND,
	MSG_ID_MM_RATCM_CONN_EST_CNF,
	MSG_ID_MM_RATCM_CONN_EST_IND,
	MSG_ID_MM_RATCM_CONN_REL_CNF,
	MSG_ID_MM_RATCM_CONN_REL_IND,
	MSG_ID_MM_RATCM_CONN_LOSS_IND,
	MSG_ID_MM_RATCM_CONN_ABORT_IND,
	MSG_ID_MM_RATCM_READY_TIMER_UPDATE_IND,
	MSG_ID_MM_RATCM_CS_DATA_IND,
	MSG_ID_MM_RATCM_PS_DATA_CNF,
	MSG_ID_MM_RATCM_PS_DATA_IND,
	MSG_ID_MM_RATCM_RESET_KEYS_IND,
	MSG_ID_MM_RATCM_LLC_STATUS_IND,
	MSG_ID_MM_RATCM_T3122_TIMEOUT_IND,
	MSG_ID_MM_RATCM_CCO_ACTIVATION_TIME_TIMEOUT_IND,
        MSG_ID_MM_RATCM_END_PS_DATA_SESSION_CNF,   
#line 303 "ps\\interfaces\\sap\\mm_sap.h"

    MSG_ID_MM_RATCM_LCS_PROC_START_IND,
    MSG_ID_MM_RATCM_LCS_PROC_END_IND,


       MSG_ID_MM_RATCM_LLC_PSHO_IND,
       MSG_ID_MM_RATCM_PS_HO_SUCCESS_IND,

	MSG_ID_MM_RATCM_SIGNAL_APPEAR_IND,
    MSG_ID_MM_RATCM_START_TEST_MODE_IND,
	MSG_ID_MM_RATCM_STOP_TEST_MODE_IND,
	MSG_ID_MM_CODE_END = MSG_ID_MM_RATCM_STOP_TEST_MODE_IND,
 


#line 968 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_MM_CODE_CHECK_POINT,




 

 


#line 1 "ps\\interfaces\\sap\\cc_sap.h"

































 
 







 

 

















































 








 


	 
	MSG_ID_MNCC_SETUP_REQ = MSG_ID_CC_CODE_BEGIN,
	MSG_ID_MNCC_SETUP_RES,
	MSG_ID_MNCC_REJ_REQ,
	MSG_ID_MNCC_CALL_CONF_REQ,
	MSG_ID_MNCC_ALERT_REQ,
	MSG_ID_MNCC_NOTIFY_REQ,
	MSG_ID_MNCC_DISC_REQ,
	MSG_ID_MNCC_REL_REQ,
	MSG_ID_MNCC_REL_COMP_REQ,
	MSG_ID_MNCC_FACILITY_REQ,
	MSG_ID_MNCC_START_DTMF_REQ,
	MSG_ID_MNCC_STOP_DTMF_REQ,
	MSG_ID_MNCC_MODIFY_REQ,
	MSG_ID_MNCC_MODIFY_RES,
	MSG_ID_MNCC_HOLD_REQ,
	MSG_ID_MNCC_RETRIEVE_REQ,
	MSG_ID_MNCC_ABORT_CALL_REQ,
	MSG_ID_MNCC_USER_INFO_REQ,
	MSG_ID_MNCC_CCBS_EST_RES,
	MSG_ID_MNCC_CCBS_SETUP_REQ,
	MSG_ID_MNCC_CCBS_REJ_REQ,
	MSG_ID_MNCC_ACM_UPDATE_REQ,
	MSG_ID_MMCC_DATA_IND,
	MSG_ID_MMCC_EST_CNF,
	MSG_ID_MMCC_EST_REJ,
	MSG_ID_MMCC_EST_INTR,
	MSG_ID_MMCC_EST_IND,
	MSG_ID_MMCC_REL_IND,
	MSG_ID_MMCC_ERR_IND,
	MSG_ID_MMCC_PROMPT_IND,
	MSG_ID_MMCC_REEST_CNF,
	MSG_ID_MMCC_REEST_START_IND,
	MSG_ID_MMCC_SYNC_IND,
	MSG_ID_MMCC_RAT_IND,
   MSG_ID_MMCC_PLMN_INFO_IND,
	MSG_ID_CC_TIMER_EXPIRY,
	MSG_ID_CC_CODE_END =  MSG_ID_CC_TIMER_EXPIRY,
	 

#line 981 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_CC_CODE_CHECK_POINT,



 


 


#line 1 "ps\\interfaces\\sap\\ciss_sap.h"

































 
 







 

 





























 








 


	 
	MSG_ID_MNSS_BEGIN_REQ = MSG_ID_CISS_CODE_BEGIN,
	MSG_ID_MNSS_FAC_REQ,
	MSG_ID_MNSS_END_REQ,
	MSG_ID_MMSS_DATA_IND,
	MSG_ID_MMSS_EST_CNF,
	MSG_ID_MMSS_EST_REJ,
	MSG_ID_MMSS_EST_INTR,
	MSG_ID_MMSS_EST_IND,
	MSG_ID_MMSS_REL_IND,
	MSG_ID_MMSS_ERR_IND,
	MSG_ID_CISS_TIMER_EXPIRY,
	MSG_ID_CISS_CODE_END = MSG_ID_CISS_TIMER_EXPIRY,
	 

#line 994 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_CISS_CODE_CHECK_POINT,



 

 


#line 1 "ps\\interfaces\\sap\\sms_sap.h"

































 
 







 

 

































 








 


	 
	MSG_ID_GMMSMS_REG_STATE_IND = MSG_ID_SMS_CODE_BEGIN,
	MSG_ID_LLSMS_UNITDATA_IND,
	MSG_ID_MMSMS_EST_IND,
	MSG_ID_MMSMS_EST_CNF,
	MSG_ID_MMSMS_DATA_IND,
	MSG_ID_MMSMS_REL_IND,
	MSG_ID_MMSMS_ERR_IND,
	MSG_ID_MMSMS_EST_REJ,
	MSG_ID_SMS_TIMER_EXPIRY,
	MSG_ID_MMSMS_EST_INTR,

	 
	MSG_ID_GMMSMS_EST_CNF,
	MSG_ID_GMMSMS_EST_REJ,
	MSG_ID_GMMSMS_ERR_IND,
	MSG_ID_GMMSMS_UNITDATA_IND,

	 
	MSG_ID_SMS_SUBMIT,
	MSG_ID_SMS_SUBMIT_ABORT,
	MSG_ID_SMS_COMMAND,
	MSG_ID_SMS_COMMAND_ABORT,
	MSG_ID_SMS_DELIVER_REPORT_ACK,
	MSG_ID_SMS_DELIVER_REPORT_NACK,
	MSG_ID_SMS_SERVICE_REQ,
	MSG_ID_SMS_MORE_MSG_SEND_REQ,
	MSG_ID_SMS_TRY_NEXT_BEARER_REQ,
	MSG_ID_SMS_MEM_AVL_NOTIF,
	MSG_ID_SMS_CODE_END = MSG_ID_SMS_MEM_AVL_NOTIF,
	 


#line 1006 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_SMS_CODE_CHECK_POINT,



 

 


#line 1 "interface\\ps\\sap\\sim_public_sap.h"

































 
 







 

 

































 

    
   MSG_ID_SIM_READY_IND = MSG_ID_SIM_PUBLIC_CODE_BEGIN,   
   MSG_ID_SIM_RESET_REQ,  
   MSG_ID_SIM_RESET_CNF,  
   MSG_ID_BT_SIM_CONNECT_REQ,  
   MSG_ID_BT_SIM_CONNECT_CNF,
   MSG_ID_BT_SIM_RESET_REQ,
   MSG_ID_BT_SIM_RESET_CNF,
   MSG_ID_BT_SIM_APDU_REQ,
   MSG_ID_BT_SIM_APDU_CNF,
   MSG_ID_BT_SIM_DISCONNECT_REQ,
   MSG_ID_BT_SIM_DISCONNECT_CNF,
   MSG_ID_BT_SIM_POWER_OFF_REQ,
   MSG_ID_BT_SIM_POWER_OFF_CNF,
   MSG_ID_BT_SIM_POWER_ON_REQ,
   MSG_ID_BT_SIM_POWER_ON_CNF,
   MSG_ID_SIM_AUTHENTICATE_REQ,
   MSG_ID_SIM_AUTHENTICATE_CNF,
   MSG_ID_SIM_PUBLIC_CODE_END = MSG_ID_SIM_AUTHENTICATE_CNF,
    

#line 1018 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_SIM_PUBLIC_CODE_CHECK_POINT,






#line 1 "ps\\interfaces\\sap\\sim_ps_sap.h"

































 
 







 

 



























































 

    
   MSG_ID_GMMSIM_GSM_ALGO_REQ = MSG_ID_SIM_PS_CODE_BEGIN,
   MSG_ID_SIM_START_REQ,
   MSG_ID_SIM_START_CNF,
   MSG_ID_SIM_ERROR_IND,
        
   MSG_ID_SIM_MMI_READY_IND,
   MSG_ID_SIM_MMI_SECURITY_IND,  
   MSG_ID_SIM_MMRR_READY_IND,  
   MSG_ID_SIM_MM_READY_IND,
   MSG_ID_SIM_READ_REQ,
   MSG_ID_SIM_READ_CNF,
   MSG_ID_SIM_WRITE_REQ,
   MSG_ID_SIM_WRITE_CNF,
   MSG_ID_SIM_INCREASE_REQ,
   MSG_ID_SIM_INCREASE_CNF,
   MSG_ID_SIM_SECURITY_REQ,
   MSG_ID_SIM_SECURITY_CNF,
   MSG_ID_SIM_FILE_INFO_REQ,
   MSG_ID_SIM_FILE_INFO_CNF,
   MSG_ID_SIM_DIAL_MODE_REQ,
   MSG_ID_SIM_DIAL_MODE_CNF,
   MSG_ID_SIM_STATUS_REQ,
   MSG_ID_SIM_STATUS_CNF,
   MSG_ID_SIM_POWEROFF_REQ,
   MSG_ID_SIM_POWEROFF_CNF,
   MSG_ID_SIM_ERROR_TEST_REQ,
   MSG_ID_SIM_READ_PLMN_REQ,
   MSG_ID_SIM_READ_PLMN_CNF,
   MSG_ID_SIM_WRITE_PLMN_REQ,
   MSG_ID_SIM_WRITE_PLMN_CNF,
   MSG_ID_SIM_ACL_MODE_REQ,
   MSG_ID_SIM_ACL_MODE_CNF,
   MSG_ID_SAT_READY_REQ,
   MSG_ID_SIM_STATUS_UPDATE_IND,        
    
   MSG_ID_L4C_SIM_GET_GSMCDMA_DUALSIM_INFO_REQ,
   MSG_ID_L4C_SIM_GET_GSMCDMA_DUALSIM_INFO_CNF,   
   MSG_ID_L4C_SIM_SET_GSMCDMA_DUALSIM_MODE_REQ,
   MSG_ID_L4C_SIM_SET_GSMCDMA_DUALSIM_MODE_CNF,   
   MSG_ID_L4C_SIM_SET_VSIM_MODE_REQ,
   MSG_ID_L4C_SIM_SET_VSIM_MODE_CNF,   
   MSG_ID_USIM_URR_READY_IND,
   MSG_ID_USIM_UPDATE_NETPAR_REQ,  
   MSG_ID_USIM_UPDATE_NETPAR_CNF,  
    
   MSG_ID_SAT_PROACTIVE_CMD_IND,
   MSG_ID_SAT_MORE_TIME_RES,             
   MSG_ID_SAT_DSPL_TEXT_RES,
   MSG_ID_SAT_GET_INKEY_RES,
   MSG_ID_SAT_GET_INPUT_RES,
   MSG_ID_SAT_PLAY_TONE_RES,
   MSG_ID_SAT_SETUP_MENU_RES,
   MSG_ID_SAT_SELECT_ITEM_RES,
   MSG_ID_SAT_MENU_SELECT_REQ,
   MSG_ID_SAT_CALL_CTRL_BY_SIM_REQ,
   MSG_ID_SAT_SS_CTRL_BY_SIM_REQ,
   MSG_ID_SAT_SEND_SMS_CTRL_BY_SIM_REQ,
   MSG_ID_SAT_SMS_DL_REQ,
   MSG_ID_SAT_CB_DL_REQ,
   MSG_ID_SAT_EVDL_MT_CALL_REQ,
   MSG_ID_SAT_EVDL_CALL_CONNECT_REQ,
   MSG_ID_SAT_EVDL_CALL_DISCONNECT_REQ,
   MSG_ID_SAT_EVDL_USER_ACTIVITY_REQ,
   MSG_ID_SAT_EVDL_IDLE_SCREEN_AVAILABLE_REQ,
   MSG_ID_SAT_EVDL_HCI_CONNECTIVITY_REQ, 
   MSG_ID_SAT_EVDL_LANGUAGE_SELECTION_REQ,
   MSG_ID_SAT_EVDL_CARD_READER_STATUS_REQ,
   MSG_ID_SAT_EVDL_BROWSER_TERMINATION_REQ,
   MSG_ID_SAT_EVDL_DATA_AVAILABLE_REQ,
   MSG_ID_SAT_EVDL_CHANNEL_STATUS_REQ,
   MSG_ID_SAT_EVDL_ACCESS_TECHNOLOGY_CHANGE_REQ,       
   MSG_ID_SAT_SEND_SMS_RES,
   MSG_ID_SAT_SEND_SS_RES,
   MSG_ID_SAT_SEND_USSD_RES,
   MSG_ID_SAT_SETUP_CALL_RES,
   MSG_ID_SAT_SETUP_IDLE_DSPL_RES,
   MSG_ID_SAT_RUN_AT_COMMAND_RES,
   MSG_ID_SAT_SEND_DTMF_RES,
   MSG_ID_SAT_LANG_NOTIFY_RES,
   MSG_ID_SAT_LAUNCH_BROWSER_RES,
   MSG_ID_SAT_ACTIVATE_RES, 
   MSG_ID_SAT_FILE_CHANGE_IND,
   MSG_ID_SAT_FILE_CHANGE_RES,
   MSG_ID_SAT_IMEI_INFO_REQ,
   MSG_ID_SAT_IMEI_INFO_CNF,  
   MSG_ID_SAT_LOCATION_INFO_IND,
   MSG_ID_SAT_PROVIDE_LOCATION_INFO_IND,   
   MSG_ID_SAT_TIME_ZONE_REQ,
   MSG_ID_SAT_TIME_ZONE_CNF, 
   MSG_ID_SAT_CURRENT_TIME_REQ,
   MSG_ID_SAT_CURRENT_TIME_CNF,     
   MSG_ID_SAT_ME_STATUS_REQ,
   MSG_ID_SAT_ME_STATUS_CNF,    
   MSG_ID_SAT_NMR_REQ,
   MSG_ID_SAT_NMR_CNF,   
   MSG_ID_SAT_LANGUAGE_REQ,
   MSG_ID_SAT_LANGUAGE_CNF, 
   MSG_ID_SAT_TIMING_ADVANCE_IND,  
   MSG_ID_SAT_ACCESS_TECHNOLOGY_CHANGE_IND,      
   MSG_ID_SAT_CALL_STATUS_IND,   
   MSG_ID_SAT_PROFILE_DOWNLOAD_REQ,
   MSG_ID_SAT_PROFILE_DOWNLOAD_CNF,
   MSG_ID_SAT_TERMINAL_RSP,
   MSG_ID_SAT_MORETIME_IND,
   MSG_ID_SAT_POLL_INTERVAL_IND,
   MSG_ID_SAT_ENVELOPE_REQ,
   MSG_ID_SAT_ENVELOPE_CNF,
   MSG_ID_SAT_REFRESH_IND,
   MSG_ID_SAT_POLLING_OFF_IND,
   MSG_ID_SAT_PROVIDE_LOCAL_INFO_IND,
   MSG_ID_SAT_SETUP_EVENT_LIST_IND,
   MSG_ID_SAT_ACTIVATE_IND, 
   MSG_ID_SAT_TIMER_MANAGEMENT_IND,
   MSG_ID_SAT_OPEN_GPRS_CHANNEL_IND,
   MSG_ID_SAT_OPEN_GPRS_CHANNEL_RES,
   MSG_ID_SAT_OPEN_CSD_CHANNEL_IND,
   MSG_ID_SAT_OPEN_CSD_CHANNEL_RES,
   MSG_ID_SAT_OPEN_SERVER_MODE_CHANNEL_IND,
   MSG_ID_SAT_OPEN_SERVER_MODE_CHANNEL_RES,
   MSG_ID_SAT_CLOSE_CHANNEL_IND,
   MSG_ID_SAT_CLOSE_CHANNEL_RES,
   MSG_ID_SAT_SEND_DATA_IND,
   MSG_ID_SAT_SEND_DATA_RES,
   MSG_ID_SAT_RECV_DATA_IND,
   MSG_ID_SAT_RECV_DATA_RES,
   MSG_ID_SAT_CH_STATUS_IND,
   MSG_ID_SAT_CH_STATUS_RES,
   MSG_ID_SAT_OPEN_CHANNEL_IND,
   MSG_ID_SAT_NW_SEARCH_MODE_IND,   
   MSG_ID_SAT_PROVIDE_NW_SEARCH_MODE_IND,
   MSG_ID_SIM_IMEI_LOCK_VERIFIED_IND,  
   MSG_ID_SIM_O2_PREPAID_SIM_IND,     
   MSG_ID_SIM_CSIM_REQ,  
   MSG_ID_SIM_CSIM_CNF,       
      
   MSG_ID_SIM_JSR177_APDU_REQ,
   MSG_ID_SIM_JSR177_APDU_CNF,
   MSG_ID_SIM_JSR177_ATR_REQ,
   MSG_ID_SIM_JSR177_ATR_CNF,    
   MSG_ID_SIM_CALL_DISCONNECT_IND,  
   MSG_ID_SIM_PLUG_OUT_IND,     
   MSG_ID_SIM_PLUG_IN_IND,
   MSG_ID_SIM_SEARCH_RECORD_REQ,  
   MSG_ID_SIM_SEARCH_RECORD_CNF,   
   MSG_ID_SIM_SYNC_POLL_TIMER_IND,  
   MSG_ID_SIM_PS_CODE_END = MSG_ID_SIM_SYNC_POLL_TIMER_IND,
    


#line 1028 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_SIM_PS_CODE_CHECK_POINT,




 

 


#line 1 "interface\\ps\\sap\\ps_public_l4_sap.h"

































 




















































 

    MSG_ID_GATI_DATA_IND = MSG_ID_L4_PUBLIC_CODE_BEGIN,  
    MSG_ID_GATI_DATA_RSP,
    MSG_ID_GATI_DATA_REQ,
    MSG_ID_GATI_DATA_CNF,
    MSG_ID_GATI_RTW_IND,
    MSG_ID_GATI_CTRL_REQ,
    MSG_ID_GATI_CTRL_CNF,
    MSG_ID_GATI_SWITCH_MODE_REQ,
    MSG_ID_GATI_SWITCH_MODE_CNF,
    MSG_ID_ATCIDT_FORCE_TRANSFER_REQ,
    MSG_ID_ATCIDT_FORCE_TRANSFER_CNF,
    MSG_ID_MMI_ATCI_MASTER_SIM_CHANGE_REQ,      
    MSG_ID_MMI_ATCI_MASTER_SIM_CHANGE_CNF,    
    MSG_ID_RMMI_REGISTER_CHANNEL_REQ,
    MSG_ID_RMMI_REGISTER_CHANNEL_CNF,
    MSG_ID_RMMI_EXE_AT_REQ,
    MSG_ID_RMMI_EXE_AT_CNF,
    MSG_ID_RMMI_RESPONSE_AT_IND,
    MSG_ID_RMMI_URC_AT_IND,
    MSG_ID_L4C_END_PS_DATA_SENSSION_REQ,
    MSG_ID_RMMI_LOCK_AT_CMD_REQ,
    MSG_ID_RMMI_LOCK_AT_CMD_CNF,
    MSG_ID_L4C_NBR_CELL_INFO_REG_REQ,       
    MSG_ID_L4C_NBR_CELL_INFO_REG_CNF,
    MSG_ID_L4C_NBR_CELL_INFO_DEREG_REQ,    
    MSG_ID_L4C_NBR_CELL_INFO_DEREG_CNF,
    MSG_ID_L4C_NBR_CELL_INFO_IND,
    MSG_ID_GAS_DATA_IND,
    MSG_ID_GAS_DATA_REQ,
    MSG_ID_L4_PUBLIC_CODE_END = MSG_ID_L4C_NBR_CELL_INFO_IND,
#line 1041 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_L4_PUBLIC_CODE_CHECK_POINT,



 

 
 


#line 1 "ps\\interfaces\\sap\\l4_sap.h"

































 
 







 

 
































































































































































































































































































































































































































































 








 


 
	 
	MSG_TAG_L4C_FIRST_CNF_MSG = MSG_ID_L4C_CODE_BEGIN,
#line 1 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"

































 
 







 

 


















































 








 


MSG_ID_L4CCSM_CC_STARTUP_CNF,

MSG_ID_L4CCSM_CC_ACM_RESET_CNF,
MSG_ID_L4CCSM_CC_ACMMAX_SET_CNF,

MSG_ID_L4CCSM_CC_LAST_CCM_RESET_CNF,
MSG_ID_L4CCSM_CC_CRSS_CNF,
MSG_ID_L4CCSM_CC_CALL_DEFLECTION_CNF,
MSG_ID_L4CCSM_CC_START_DTMF_CNF,
MSG_ID_L4CCSM_CC_STOP_DTMF_CNF,
MSG_ID_L4CCSM_CC_CALL_ACCEPT_CNF,
MSG_ID_L4CCSM_CC_CALL_MODIFY_CNF,
MSG_ID_L4CCSM_CC_CALL_SETUP_CNF,
MSG_ID_L4CCSM_CC_CALL_DISC_CNF,
MSG_ID_L4CCSM_CC_EMERGENCY_CALL_SETUP_CNF,  



MSG_ID_L4CCSM_CC_SAT_SETUP_CNF,
MSG_ID_L4CCSM_CC_SAT_SEND_DTMF_CNF,
MSG_ID_L4CCSM_CC_UPDATE_ALS_CNF,

MSG_ID_L4CCSM_CISS_STARTUP_CNF,
MSG_ID_L4CCSM_CISS_SS_PARSE_CNF,
MSG_ID_L4CCSM_CISS_CF_END_CNF,
MSG_ID_L4CCSM_CISS_CW_END_CNF,
MSG_ID_L4CCSM_CISS_CB_END_CNF,
MSG_ID_L4CCSM_CISS_EMLPP_END_CNF,
MSG_ID_L4CCSM_CISS_CLI_END_CNF,
MSG_ID_L4CCSM_CISS_CCBS_END_CNF,
MSG_ID_L4CCSM_CISS_PUSSR_END_CNF,
MSG_ID_L4CCSM_CISS_USSR_END_CNF,            
MSG_ID_L4CCSM_CISS_USSN_END_CNF,

MSG_ID_L4CCSM_CISS_SIM_END_CNF,










MSG_ID_L4CUEM_STARTUP_CNF,
MSG_ID_L4CUEM_SET_AUDIO_PROFILE_CNF,
MSG_ID_L4CUEM_SET_AUDIO_PARAM_CNF,
MSG_ID_L4CUEM_SET_HW_LEVEL_CNF,
MSG_ID_L4CUEM_AUDIO_PLAY_BY_NAME_CNF,
MSG_ID_L4CUEM_AUDIO_STOP_BY_NAME_CNF,
MSG_ID_L4CUEM_AUDIO_PLAY_BY_STRING_CNF,
MSG_ID_L4CUEM_AUDIO_STOP_BY_STRING_CNF,
#line 174 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"


MSG_ID_L4CRAC_ACT_CNF,
MSG_ID_L4CRAC_REG_CNF,
MSG_ID_L4CRAC_PS_REG_CNF,
MSG_ID_L4CRAC_DEREG_CNF,
MSG_ID_L4CRAC_PLMN_LIST_CNF,
MSG_ID_L4CRAC_CLASS_CHANGE_CNF,
MSG_ID_L4CRAC_SET_PREFERRED_BAND_CNF, 
MSG_ID_L4CRAC_RFOFF_CNF,
MSG_ID_L4CRAC_SET_ROAMING_MODE_CNF,
MSG_ID_L4CRAC_PLMN_SEARCH_CNF,
MSG_ID_L4CRAC_SET_RAT_MODE_CNF,
MSG_ID_L4CRAC_PLMN_LIST_STOP_CNF,
MSG_ID_L4CRAC_SET_PREFER_RAT_CNF,
MSG_ID_L4CRAC_END_PS_DATA_SESSION_CNF, 



MSG_ID_L4CPHB_INIT_LN_CNF,
MSG_ID_L4CPHB_STARTUP_CNF,
MSG_ID_L4CPHB_SEARCH_CNF,
MSG_ID_L4CPHB_READ_CNF,
MSG_ID_L4CPHB_WRITE_CNF,
MSG_ID_L4CPHB_DELETE_CNF,
MSG_ID_L4CPHB_READ_LN_CNF,
MSG_ID_L4CPHB_WRITE_LN_CNF,
MSG_ID_L4CPHB_DELETE_LN_CNF,
MSG_ID_L4CPHB_APPROVE_CNF,
MSG_ID_L4CPHB_SYNC_CNF,
#line 214 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"
MSG_ID_L4CPHB_FDN_GET_NAME_CNF,

MSG_ID_L4CPHB_READ_SIM_LN_CNF,
MSG_ID_L4CPHB_WRITE_SIM_LN_CNF,
MSG_ID_L4CPHB_DELETE_SIM_LN_CNF,




MSG_ID_L4CSMU_START_CNF,
MSG_ID_L4CSMU_SECURITY_CNF,
MSG_ID_L4CSMU_SET_PERSONALIZATION_CNF,  
MSG_ID_L4CSMU_SML_STATUS_CNF,  
MSG_ID_L4CSMU_PLMN_SEL_WRITE_CNF,
MSG_ID_L4CSMU_SIM_ACCESS_CNF,
MSG_ID_L4CSMU_PUCT_WRITE_CNF,
MSG_ID_L4CSMU_CSP_READ_CNF,



MSG_ID_L4CSMU_DIAL_MODE_CNF,
MSG_ID_L4CSMU_PUCT_READ_CNF,



MSG_ID_SAT_MENU_SELECT_CNF,




 


MSG_ID_L4CSMSAL_INIT_CNF,
MSG_ID_L4CSMSAL_READ_CNF,
MSG_ID_L4CSMSAL_SEND_CNF,
MSG_ID_L4CSMSAL_WRITE_CNF,
MSG_ID_L4CSMSAL_DELETE_CNF,
MSG_ID_L4CSMSAL_SEND_FROM_STORAGE_CNF,
MSG_ID_L4CSMSAL_SEND_ABORT_CNF,
MSG_ID_L4CSMSAL_SEND_DELIVER_REPORT_CNF, 

MSG_ID_L4CSMSAL_SAT_SEND_CNF,


MSG_ID_L4CSMSAL_CB_UPDATE_CNF,



MSG_ID_L4CSMSAL_SET_COMMON_PARA_CNF,
MSG_ID_L4CSMSAL_SET_PROFILE_PARA_CNF,
MSG_ID_L4CSMSAL_COPY_MSG_CNF,
MSG_ID_L4CSMSAL_SET_STATUS_CNF,
MSG_ID_L4CSMSAL_GET_MAILBOX_NUM_CNF,



MSG_ID_L4CSMSAL_SET_MSG_WAITING_CNF,







MSG_ID_TCM_PDP_ACTIVATE_CNF,
MSG_ID_TCM_PDP_ACTIVATE_REJ,
MSG_ID_TCM_PDP_DEACTIVATE_CNF,



MSG_ID_TCM_PDP_MODIFY_CNF,
MSG_ID_TCM_PDP_MODIFY_REJ,
MSG_ID_L4CTCM_START_CNF,
MSG_ID_L4CTCM_SET_PRI_PDP_INFO_CNF,
MSG_ID_L4CTCM_SET_SEC_PDP_INFO_CNF,
MSG_ID_L4CTCM_SET_QOS_INFO_CNF,
MSG_ID_L4CTCM_SET_EQOS_INFO_CNF,  
MSG_ID_L4CTCM_SET_TFT_INFO_CNF,
MSG_ID_L4CTCM_SET_GPRS_STATISTICS_INFO_CNF,
MSG_ID_L4CTCM_SET_PPP_AUTH_CNF, 
MSG_ID_L4CTCM_UNDEFINE_PDP_INFO_CNF, 
MSG_ID_L4CTCM_SET_ACL_MODE_CNF,
MSG_ID_L4CTCM_GET_ACL_ENTRIES_CNF,
MSG_ID_L4CTCM_SET_ACL_ENTRY_CNF,
MSG_ID_L4CTCM_ADD_ACL_ENTRY_CNF,
MSG_ID_L4CTCM_DEL_ACL_ENTRY_CNF,

MSG_ID_L4CPPP_ACTIVATE_CNF,
MSG_ID_L4CPPP_DEACTIVATE_CNF,
MSG_ID_L4CPPP_RESUME_CNF,





MSG_ID_L4CABM_SET_GPRS_ACCOUNT_INFO_CNF, 
MSG_ID_L4CABM_GET_GPRS_ACCOUNT_INFO_CNF,




MSG_ID_L4CTCM_QUERY_EXT_GPRS_HISTORY_RSP, 
MSG_ID_L4CTCM_RESET_EXT_GPRS_HISTORY_CNF, 
MSG_ID_L4CTCM_GET_GPRS_STATISTICS_INFO_RSP,



MSG_ID_L4CABM_START_CNF, 









#line 343 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"

MSG_ID_L4C_OPEN_UART_PORT_CNF,
MSG_ID_L4C_CLOSE_UART_PORT_CNF,

MSG_ID_L4C_CHANGE_UART_PORT_CNF,





 
MSG_ID_L4CDT_DOWNLOAD_CNF,
MSG_ID_L4CDT_UPLOAD_CNF,
MSG_ID_L4CDT_FILELIST_CNF,
MSG_ID_L4CDT_FILECOUNT_CNF,
MSG_ID_L4CDT_DISKINFO_CNF,


MSG_ID_L4CPS_NBR_CELL_INFO_START_CNF,   
MSG_ID_L4CPS_NBR_CELL_INFO_STOP_CNF,    


 
























  
  
 
  
	
  











  

#line 417 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"









 





#line 442 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"

 	

 
 




 	












 
 





 


#line 485 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"










 




  









#line 516 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"


#line 525 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"







     
           









#line 550 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"
 



 




    


 




 









#line 583 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"














#line 608 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"






#line 513 "ps\\interfaces\\sap\\l4_sap.h"



    MSG_TAG_L4C_LAST_CNF_MSG,

   MSG_TAG_L4C_FIRST_IND_MSG,
#line 1 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"

































 
 







 

 


















































 








 
















  
















            





















#line 174 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"








 






 














#line 214 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"











  
  

















 









 




































  


 
 














 





 
 




 









#line 343 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"










 







   
    


 






MSG_ID_L4CCSM_CC_ATTACH_IND,
MSG_ID_L4CCSM_CC_DETACH_IND,
MSG_ID_L4CCSM_CC_CCM_IND,
MSG_ID_L4CCSM_CC_CALL_MODIFY_IND,
MSG_ID_L4CCSM_CC_CALL_SETUP_IND,
MSG_ID_L4CCSM_CC_CALL_ALERT_IND,
MSG_ID_L4CCSM_CC_CALL_CONNECT_IND,
MSG_ID_L4CCSM_CC_CALL_DISC_IND,
MSG_ID_L4CCSM_CC_CALL_REL_IND,
MSG_ID_L4CCSM_CC_PROGRESS_IND,
MSG_ID_L4CCSM_CC_CALL_PROC_IND,
MSG_ID_L4CCSM_CC_NOTIFY_SS_IND,
MSG_ID_L4CCSM_CC_AUTO_DTMF_START_IND,
MSG_ID_L4CCSM_CC_AUTO_DTMF_COMPLETE_IND,
MSG_ID_L4CCSM_CC_CCBS_CALL_DEACTIVATE_IND,
MSG_ID_L4CCSM_CC_CALL_PREEMPT_IND,
MSG_ID_L4CCSM_CC_UART_TRANSFER_IND,
MSG_ID_L4CCSM_CC_CSD_EST_IND,
MSG_ID_L4CCSM_CPHS_DISPLAY_ALS_IND,  
MSG_ID_L4CCSM_CC_CALL_INFO_IND,  
MSG_ID_L4CCSM_CC_CPI_IND, 
MSG_ID_L4CCSM_CC_CALL_SYNC_IND,  
MSG_ID_L4CCSM_CC_VIDEO_CALL_STATUS_IND,	
MSG_ID_L4CCSM_CC_UPDATE_CALL_STATE_IND,  
MSG_ID_L4CCSM_CC_CALL_PRESENT_IND,





MSG_ID_L4CCSM_CISS_USSR_BEGIN_IND,
MSG_ID_L4CCSM_CISS_USSN_BEGIN_IND,
MSG_ID_L4CCSM_CISS_USSR_FAC_IND,
MSG_ID_L4CCSM_CISS_USSN_FAC_IND,
MSG_ID_L4CCSM_CISS_CB_FAC_IND,
MSG_ID_L4CCSM_CPHS_DISPLAY_CFU_IND,  

#line 417 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"








MSG_ID_L4CRAC_REG_STATE_IND,
MSG_ID_L4CRAC_REG_CAUSE_IND, 

MSG_ID_L4CRAC_NW_INFO_IND,
MSG_ID_L4CRAC_CIPHER_IND,
MSG_ID_L4CRAC_NW_ECC_IND,
MSG_ID_L4CRAC_PS_EVENT_REPORT_IND,
#line 442 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"

 	
MSG_ID_L4CSMU_SECURITY_IND,
MSG_ID_L4CSMU_MMRR_READY_IND, 
MSG_ID_L4CSMU_MMI_INFO_IND, 




 	

MSG_ID_SAT_DSPL_TEXT_IND,
MSG_ID_SAT_GET_INKEY_IND,
MSG_ID_SAT_GET_INPUT_IND,
MSG_ID_SAT_SETUP_MENU_IND,
MSG_ID_SAT_SELECT_ITEM_IND,
MSG_ID_SAT_PLAY_TONE_IND,
MSG_ID_SAT_SETUP_CALL_IND,
MSG_ID_SAT_SEND_SMS_IND,
MSG_ID_SAT_SEND_SS_IND,
MSG_ID_SAT_SEND_USSD_IND,
MSG_ID_SAT_MMI_INFO_IND,
 
MSG_ID_SAT_SETUP_IDLE_DSPL_IND, 
MSG_ID_SAT_RUN_AT_COMMAND_IND,
MSG_ID_SAT_SEND_DTMF_IND,
MSG_ID_SAT_LANG_NOTIFY_IND,
MSG_ID_SAT_LAUNCH_BROWSER_IND,
MSG_ID_SAT_NO_OTHER_CMD_IND,
 


#line 485 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"


MSG_ID_L4CSMSAL_CB_MSG_TEXT_IND,
MSG_ID_L4CSMSAL_CB_MSG_PDU_IND,
MSG_ID_L4CSMSAL_CB_DL_IND,





MSG_ID_L4CSMSAL_MT_SMS_FINAL_ACK_IND, 
MSG_ID_L4CSMSAL_MEM_FULL_IND,
MSG_ID_L4CSMSAL_MEM_EXCEED_IND,
MSG_ID_L4CSMSAL_MEM_AVAILABLE_IND,
MSG_ID_L4CSMSAL_MSG_WAITING_IND,
MSG_ID_L4CSMSAL_ENHANCED_VOICE_MAIL_IND,  
MSG_ID_L4CSMSAL_NEW_MSG_PDU_IND,
MSG_ID_L4CSMSAL_NEW_MSG_TEXT_IND,
MSG_ID_L4CSMSAL_NEW_MSG_INDEX_IND,
MSG_ID_L4CSMSAL_APP_DATA_IND,
MSG_ID_L4CSMSAL_SYNC_MSG_IND,
MSG_ID_L4CSMSAL_STARTUP_READ_MSG_IND,
MSG_ID_L4CSMSAL_STARTUP_BEGIN_IND,
MSG_ID_L4CSMSAL_STARTUP_FINISH_IND,
MSG_ID_L4CSMSAL_FDN_CHECK_IND,
#line 516 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"
MSG_ID_L4CSMSAL_CB_GS_CHANGE_IND,

#line 525 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"


MSG_ID_TCM_PDP_ACTIVATE_IND,
MSG_ID_TCM_PDP_DEACTIVATE_IND,



MSG_ID_TCM_MOBILITY_STATUS_IND,     
MSG_ID_TCM_EVENT_REP_IND,           

MSG_ID_L4CTCM_PS_EVENT_REPORT_IND,





MSG_ID_L4CPPP_DEACTIVATE_IND,
MSG_ID_L4CPPP_ESCAPE_IND,
#line 550 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"
MSG_ID_L4CPPP_PPPTYPEPDP_ACTIVATED_IND, 



MSG_ID_L4CPHB_STARTUP_BEGIN_IND, 
MSG_ID_L4CPHB_STARTUP_READ_IND,
MSG_ID_FLC_STATUS_REPORT_IND,


MSG_ID_L4CPS_NBR_CELL_INFO_IND,    


MSG_ID_L4CPS_GAS_CELL_POWER_LEVEL_IND, 




 









#line 583 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"














#line 608 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"






#line 523 "ps\\interfaces\\sap\\l4_sap.h"



    MSG_TAG_L4C_LAST_IND_MSG,

   MSG_TAG_L4C_FIRST_REQ_MSG,
#line 1 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"

































 
 







 

 


















































 








 
















  
















            





















#line 174 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"








 






 














#line 214 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"











  
  

















 









 




































  


 
 














 





 
 




 









#line 343 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"










 







   
    


 
























  
  
 
  
	
  











  

#line 417 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"









 





#line 442 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"

 	

 
 




 	












 
 





 


#line 485 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"










 




  









#line 516 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"


#line 525 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"







     
           









#line 550 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"
 



 




    


 




 







MSG_ID_L4C_PS_ABM_SETUP_REQ,
MSG_ID_L4C_PS_ABM_DISC_REQ,
#line 583 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"






MSG_ID_L4C_ABM_DISALLOW_GPRS_AND_CSD_REQ,
MSG_ID_L4C_ABM_ALLOW_GPRS_AND_CSD_REQ,



MSG_ID_L4C_PS_ABM_GET_DIALUP_INFO_REQ,
MSG_ID_L4C_ABM_DIALUP_DISC_REQ,
MSG_ID_L4C_PS_ABM_RESET_DIALUP_INFO_REQ,
#line 608 "ps\\l4\\l4c\\include\\common\\l4c_msg_hdlr_defs.h"

MSG_ID_L4C_OPEN_UART_PORT_REQ,
MSG_ID_L4C_CLOSE_UART_PORT_REQ,

MSG_ID_L4C_CHANGE_UART_PORT_REQ,

#line 533 "ps\\interfaces\\sap\\l4_sap.h"



    MSG_TAG_L4C_LAST_REQ_MSG,

	MSG_ID_L4C_CODE_END = MSG_TAG_L4C_LAST_REQ_MSG,
	 

     
          MSG_TAG_TCM_FIRST_MSG_AFFECT_MAIN_FSM = MSG_ID_TCM_CODE_BEGIN,
    MSG_ID_TAF_EXT_PDP_ACTIVATE_IND = MSG_TAG_TCM_FIRST_MSG_AFFECT_MAIN_FSM,
    MSG_ID_TCM_PDP_ACTIVATE_REQ,
    MSG_ID_SMREG_PDP_ACTIVATE_IND,
    MSG_ID_SMREG_PDP_ACTIVATE_CNF,
    MSG_ID_SMREG_PDP_ACTIVATE_REJ,
    MSG_ID_SMREG_PDP_ACTIVATE_SEC_CNF,
    MSG_ID_SMREG_PDP_ACTIVATE_SEC_REJ,
    MSG_ID_TCM_PDP_ACTIVATE_REJ_RSP,
    MSG_ID_TCM_TIMER_EXPIRY,
    MSG_ID_TCM_PDP_MODIFY_REQ,
    MSG_ID_SMREG_PDP_MODIFY_IND,
    MSG_ID_SMREG_PDP_MODIFY_CNF,
    MSG_ID_SMREG_PDP_MODIFY_REJ,
    MSG_ID_TCM_PDP_DEACTIVATE_REQ,
    MSG_ID_TCM_PDP_REACTIVATE_REQ,
    MSG_ID_TAF_EXT_PDP_DEACTIVATE_IND,
    MSG_ID_SMREG_PDP_DEACTIVATE_IND,
    MSG_ID_SMREG_PDP_DEACTIVATE_CNF,

     
    MSG_ID_TCM_RATDM_CONFIG_CNF, 
          MSG_TAG_TCM_FIRST_MSG_AFFECT_DATA_PLANE_FSM = MSG_ID_TCM_RATDM_CONFIG_CNF,
    MSG_ID_TCM_RATDM_DECONFIG_CNF, 
          MSG_TAG_TCM_LAST_MSG_AFFECT_DATA_PLANE_FSM = MSG_ID_TCM_RATDM_DECONFIG_CNF,
     

    MSG_ID_TAF_LINK_FREE_IND,	
          MSG_TAG_TCM_LAST_MSG_AFFECT_MAIN_FSM = MSG_ID_TAF_LINK_FREE_IND,

     
    MSG_ID_TCM_RATDM_ENTER_DATA_MODE_CNF,
          MSG_TAG_TCM_FIRST_NDIS_RELATED_MSG = MSG_ID_TCM_RATDM_ENTER_DATA_MODE_CNF,
          MSG_TAG_TCM_LAST_NDIS_RELATED_MSG = MSG_ID_TCM_RATDM_ENTER_DATA_MODE_CNF,

    MSG_ID_TCM_RATDM_QUERY_PS_STATISTICS_CNF,
          MSG_TAG_TCM_FIRST_EXT_CALL_HISTORY_RELATED_MSG = MSG_ID_TCM_RATDM_QUERY_PS_STATISTICS_CNF,
    MSG_ID_TCM_RATDM_RESET_PS_STATISTICS_CNF,
    MSG_ID_L4CTCM_QUERY_EXT_GPRS_HISTORY_REQ,
    MSG_ID_L4CTCM_RESET_EXT_GPRS_HISTORY_REQ,
          MSG_TAG_TCM_LAST_EXT_CALL_HISTORY_RELATED_MSG = MSG_ID_L4CTCM_RESET_EXT_GPRS_HISTORY_REQ,

	 
    MSG_ID_L4C_PS_QUERY_EXT_PDP_STATISTICS_REQ,
    MSG_ID_L4C_PS_QUERY_EXT_PDP_STATISTICS_RSP,
    MSG_ID_L4C_PS_RESET_EXT_PDP_STATISTICS_REQ,
    MSG_ID_L4C_PS_RESET_EXT_PDP_STATISTICS_RSP,
    MSG_ID_L4C_PS_EXT_PDP_STATISTICS_IND,

     
    MSG_ID_TAF_DATA_IND,
          MSG_TAG_TCM_FIRST_PHASE_OUT_MSG = MSG_ID_TAF_DATA_IND,
    MSG_ID_TCPIP_TCM_DATA_REQ,
    MSG_ID_SN_DATA_IND,
    MSG_ID_SN_UNITDATA_IND,	
    MSG_ID_TCM_RATDM_DATA_IND,
          MSG_TAG_TCM_LAST_PHASE_OUT_MSG = MSG_ID_TCM_RATDM_DATA_IND,



     
#line 634 "ps\\interfaces\\sap\\l4_sap.h"



     
    MSG_ID_L4CTCM_START_REQ,
          MSG_TAG_TCM_FIRST_BOOTUP_MSG = MSG_ID_L4CTCM_START_REQ,
          MSG_TAG_TCM_LAST_BOOTUP_MSG = MSG_ID_L4CTCM_START_REQ,


     
    MSG_ID_L4CTCM_SET_PRI_PDP_INFO_REQ,
          MSG_TAG_TCM_FIRST_AT_RELATED_MSG = MSG_ID_L4CTCM_SET_PRI_PDP_INFO_REQ,
    MSG_ID_L4CTCM_SET_SEC_PDP_INFO_REQ,
    MSG_ID_L4CTCM_SET_QOS_INFO_REQ,
    MSG_ID_L4CTCM_SET_EQOS_INFO_REQ,
    MSG_ID_L4CTCM_SET_TFT_INFO_REQ,
    MSG_ID_L4CTCM_SET_GPRS_STATISTICS_INFO_REQ,
    MSG_ID_L4CTCM_GET_GPRS_STATISTICS_INFO_REQ,
    MSG_ID_L4CTCM_SET_PPP_AUTH_INFO_REQ,
    MSG_ID_L4CTCM_UNDEFINE_PDP_INFO_REQ, 
    MSG_ID_L4CTCM_SET_CONFIG_OPTION_REQ, 
    MSG_ID_L4CTCM_ENTER_DATA_MODE_REQ, 
          MSG_TAG_TCM_LAST_AT_RELATED_MSG = MSG_ID_L4CTCM_ENTER_DATA_MODE_REQ,



     
    MSG_ID_L4CTCM_SET_ACL_MODE_REQ,
          MSG_TAG_TCM_FIRST_ACL_RELATED_MSG = MSG_ID_L4CTCM_SET_ACL_MODE_REQ,
    MSG_ID_L4CTCM_GET_ACL_ENTRIES_REQ,
    MSG_ID_L4CTCM_SET_ACL_ENTRY_REQ,
    MSG_ID_L4CTCM_ADD_ACL_ENTRY_REQ,
    MSG_ID_L4CTCM_DEL_ACL_ENTRY_REQ,
    MSG_ID_L4CTCM_LEAVE_ACL_MENU_REQ,
          MSG_TAG_TCM_LAST_ACL_RELATED_MSG = MSG_ID_L4CTCM_LEAVE_ACL_MENU_REQ,

		
     
    MSG_ID_SMREG_PDP_PRESERVE_IND,	
          MSG_TAG_TCM_FIRST_PDP_PRESERVE_RELATED_MSG = MSG_ID_SMREG_PDP_PRESERVE_IND,
    MSG_ID_SMREG_PDP_REESTABLISH_IND,	
          MSG_TAG_TCM_LAST_PDP_PRESERVE_RELATED_MSG = MSG_ID_SMREG_PDP_REESTABLISH_IND,



     
    MSG_ID_SMREG_PS_SUSPEND_IND, 
          MSG_TAG_TCM_FIRST_PS_SUSPEND_RELATED_MSG = MSG_ID_SMREG_PS_SUSPEND_IND,
    MSG_ID_SMREG_PS_RESUME_IND, 
          MSG_TAG_TCM_LAST_PS_SUSPEND_RELATED_MSG = MSG_ID_SMREG_PS_RESUME_IND,

    
    MSG_ID_TCM_RATDM_PS_BEARER_CAPABILITY_IND,


     
    MSG_ID_TAF_EXT_PDP_SET_IP_AND_DNS_INFO_REQ,
          MSG_TAG_TCM_FIRST_PPP_PDP_RELATED_MSG = MSG_ID_TAF_EXT_PDP_SET_IP_AND_DNS_INFO_REQ,
          MSG_TAG_TCM_LAST_PPP_PDP_RELATED_MSG = MSG_ID_TAF_EXT_PDP_SET_IP_AND_DNS_INFO_REQ,



          MSG_ID_TCM_CODE_END = MSG_ID_TAF_EXT_PDP_SET_IP_AND_DNS_INFO_REQ,
     

	 
	MSG_ID_MNCC_SETUP_IND = MSG_ID_CSM_CODE_BEGIN,
	MSG_ID_MNCC_SETUP_CNF,
	MSG_ID_MNCC_SETUP_COMPL_IND,
	MSG_ID_MNCC_REJ_IND,
	MSG_ID_MNCC_CALL_PROC_IND,
	MSG_ID_MNCC_PROGRESS_IND,
	MSG_ID_MNCC_ALERT_IND,
	MSG_ID_MNCC_NOTIFY_IND,
	MSG_ID_MNCC_DISC_IND,
	MSG_ID_MNCC_REL_IND,
	MSG_ID_MNCC_REL_CNF,
	MSG_ID_MNCC_FACILITY_IND,
	MSG_ID_MNCC_START_DTMF_CNF,
	MSG_ID_MNCC_STOP_DTMF_CNF,
	MSG_ID_MNCC_MODIFY_IND,
	MSG_ID_MNCC_MODIFY_CNF,
	MSG_ID_MNCC_SYNC_IND,
	MSG_ID_MNCC_RAT_IND,	
	MSG_ID_MNCC_HOLD_CNF,
	MSG_ID_MNCC_RETRIEVE_CNF,
	MSG_ID_MNCC_USER_INFO_IND,
	MSG_ID_MNCC_CONGESTION_CTRL_IND,
	MSG_ID_MNCC_CCBS_EST_IND,
	MSG_ID_MNCC_CCBS_RECALL_IND,
	MSG_ID_MNCC_AOC_IND,
	MSG_ID_MNCC_SIG_CON_REEST_IND,
	MSG_ID_MNCC_SIG_CON_REEST_CNF,

   	MSG_ID_L4CCSM_CC_STARTUP_REQ,
   	MSG_ID_L4CCSM_CC_ACM_RESET_REQ,
	MSG_ID_L4CCSM_CC_ACMMAX_SET_REQ,
	MSG_ID_L4CCSM_CC_LAST_CCM_RESET_REQ,
	MSG_ID_L4CCSM_CC_CALL_DEFLECTION_REQ,
	MSG_ID_L4CCSM_CC_CRSS_REQ,
	MSG_ID_L4CCSM_CC_CALL_ACCEPT_REQ,
	MSG_ID_L4CCSM_CC_CALL_DISC_REQ,
	MSG_ID_L4CCSM_CC_CALL_MODIFY_REQ,
	MSG_ID_L4CCSM_CC_CALL_SETUP_REQ,
	MSG_ID_L4CCSM_CC_AUTO_DTMF_START_REQ,
	MSG_ID_L4CCSM_CC_EMERGENCY_CALL_SETUP_REQ,
	MSG_ID_L4CCSM_CC_START_DTMF_REQ,
	MSG_ID_L4CCSM_CC_STOP_DTMF_REQ,
	MSG_ID_L4CCSM_CC_SAT_SETUP_REQ,
	MSG_ID_L4CCSM_CC_SAT_SEND_DTMF_REQ,
	MSG_ID_L4CCSM_CC_SAT_ABORT_DTMF_REQ,
	MSG_ID_L4CCSM_CC_SET_CSD_PROF_REQ,
	MSG_ID_L4CCSM_CC_UPDATE_ALS_REQ,
	MSG_ID_L4CCSM_CC_UART_TRANSFER_REQ,
	MSG_ID_L4CCSM_CC_CALL_PRESENT_RSP,  
	MSG_ID_L4CCSM_CC_ABORT_CALL_REQ,
	MSG_ID_L4CCSM_CC_REL_COMP_REQ,

	MSG_ID_SAT_CALL_CTRL_BY_SIM_CNF,

	MSG_ID_CSM_TDT_ACTIVATE_CNF,
	MSG_ID_CSM_TDT_DEACTIVATE_CNF,
	MSG_ID_CSM_TDT_ESC_ON_IND,
	MSG_ID_CSM_TDT_DISC_IND,
	MSG_ID_CSM_L2R_ACTIVATE_CNF,
	MSG_ID_CSM_L2R_DEACTIVATE_CNF,
	MSG_ID_CSM_L2R_XID_IND,
	MSG_ID_CSM_L2R_DISC_IND,
	MSG_ID_CSM_L2R_ESC_ON_IND,

   MSG_ID_CSM_T30_ACTIVATE_CNF,
   MSG_ID_CSM_T30_DEACTIVATE_CNF,
   MSG_ID_CSM_T30_FAX_RATE_CNF,
   MSG_ID_CSM_T30_DISC_IND,

   MSG_ID_L4CCSM_CISS_STARTUP_REQ,
   MSG_ID_L4CCSM_CISS_SS_PARSE_REQ,
   MSG_ID_L4CCSM_CISS_CF_BEGIN_REQ,
   MSG_ID_L4CCSM_CISS_CW_BEGIN_REQ,
   MSG_ID_L4CCSM_CISS_CB_BEGIN_REQ,
   MSG_ID_L4CCSM_CISS_EMLPP_BEGIN_REQ,
   MSG_ID_L4CCSM_CISS_CLI_BEGIN_REQ,
   MSG_ID_L4CCSM_CISS_CCBS_BEGIN_REQ,
   MSG_ID_L4CCSM_CISS_PUSSR_BEGIN_REQ,
   MSG_ID_L4CCSM_CISS_CB_FAC_RES,
   MSG_ID_L4CCSM_CISS_USSR_FAC_RES,
   MSG_ID_L4CCSM_CISS_USSN_FAC_RES,
   MSG_ID_L4CCSM_CISS_END_RES,
   MSG_ID_MNSS_BEGIN_IND,
   MSG_ID_MNSS_FAC_IND,
   MSG_ID_MNSS_END_IND,
   MSG_ID_SAT_SS_CTRL_BY_SIM_CNF,

    MSG_ID_L4CCSM_CISS_MTLR_END_RSP,
    MSG_ID_L4CCSM_CISS_AERQ_END_RSP,
    MSG_ID_L4CCSM_CISS_AERP_REQ,
    MSG_ID_L4CCSM_CISS_AERP_FAC_RES,
    MSG_ID_L4CCSM_CISS_AERP_END_REQ,
    MSG_ID_L4CCSM_CISS_AECL_END_RSP,
    MSG_ID_L4CCSM_CISS_MOLR_REQ,
    MSG_ID_L4CCSM_CISS_MOLR_FAC_RES,
    MSG_ID_L4CCSM_CISS_MOLR_END_REQ,

   MSG_ID_CSM_TIMER_EXPIRY,
   MSG_ID_CSM_CODE_END  = MSG_ID_CSM_TIMER_EXPIRY,
	 

	 
	MSG_ID_L4CSMSAL_INIT_REQ = MSG_ID_SMSAL_CODE_BEGIN,
	MSG_ID_L4CSMSAL_DE_INIT_REQ,
	MSG_ID_L4CSMSAL_DELETE_REQ,
	MSG_ID_L4CSMSAL_DE_PERSONALIZATION_ACK,
	MSG_ID_L4CSMSAL_READ_REQ,
	MSG_ID_L4CSMSAL_WRITE_REQ,
	MSG_ID_L4CSMSAL_SEND_REQ,
	MSG_ID_L4CSMSAL_SEND_SMMA_REQ,    
	MSG_ID_L4CSMSAL_SEND_FROM_STORAGE_REQ,
	MSG_ID_L4CSMSAL_SEND_DELIVER_REPORT_REQ, 
	MSG_ID_L4CSMSAL_SEND_ABORT,
	MSG_ID_L4CSMSAL_SET_PARAMETER_REQ,
	MSG_ID_L4CSMSAL_SET_COMMON_PARA_REQ,
	MSG_ID_L4CSMSAL_SET_PROFILE_PARA_REQ,
        MSG_ID_L4CSMSAL_SAT_SEND_REQ,  
        MSG_ID_L4CSMSAL_STARTUP_READ_NEXT_REQ,
        MSG_ID_L4CSMSAL_FDN_CHECK_RSP,
        MSG_ID_L4CSMSAL_SMS_DEPERSONALIZATION_RSP,
        MSG_ID_L4CSMSAL_COPY_MSG_REQ,
        MSG_ID_L4CSMSAL_SET_STATUS_REQ,
        MSG_ID_L4CSMSAL_GET_MAILBOX_NUM_REQ,
	MSG_ID_L4CSMSAL_INIT_ME_SMS_REQ,       
	MSG_ID_L4CSMSAL_SET_MSG_WAITING_REQ,
        MSG_ID_L4CSMSAL_SYNC_MSG_STORAGE_REQ,
	MSG_ID_L4CSMSAL_READ_RAW_DATA_REQ,
	MSG_ID_L4CSMSAL_WRITE_RAW_DATA_REQ,

	 
	MSG_ID_SMS_DELIVER,
	MSG_ID_SMS_SUBMIT_REPORT_ACK,
	MSG_ID_SMS_SUBMIT_REPORT_NACK,
	MSG_ID_SMS_STATUS_REPORT,
	MSG_ID_SMS_SUBMIT_ABORT_CNF,
	MSG_ID_SMS_MEM_AVL_NOTIF_CNF,
	MSG_ID_SMS_MORE_MSG_SEND_IND,
        MSG_ID_SMS_MT_FINAL_ACK_IND,
	MSG_ID_SMSAL_TST_DELIVER,

	 
	MSG_ID_SAT_SMS_DL_CNF,
	MSG_ID_SAT_CB_DL_CNF,
        MSG_ID_SAT_SEND_SMS_CTRL_BY_SIM_CNF,

	MSG_ID_L4CSMSAL_CBCH_REQ,
	MSG_ID_L4CSMSAL_CB_UPDATE_REQ,
        MSG_ID_L4CSMSAL_HZ_CB_ACT_REQ,
        MSG_ID_SMSAL_AS_CB_PAGE_IND,
        MSG_ID_SMSAL_AS_CB_GS_CHANGE_IND,

        MSG_ID_SMSAL_RATCM_CB_DATA_IND,
        MSG_ID_SMSAL_RATCM_CB_RECONFIG_IND,
        MSG_ID_SMSAL_RATCM_CB_GS_CHANGE_IND,

         
        MSG_ID_PHBSMSAL_GET_EXT1_NUM_REQ,
        MSG_ID_PHBSMSAL_GET_EXT1_NUM_CNF,
        
	 
	MSG_ID_SMSAL_SOC_REG_PORT_REQ,
	MSG_ID_SMSAL_CODE_END = MSG_ID_SMSAL_SOC_REG_PORT_REQ,
	 

	 
	MSG_ID_L4CSMU_START_REQ = MSG_ID_SMU_CODE_BEGIN,
	MSG_ID_L4CSMU_SECURITY_REQ,
	MSG_ID_L4CSMU_SET_PERSONALIZATION_REQ,  
	MSG_ID_L4CSMU_SML_STATUS_REQ,  
	MSG_ID_L4CSMU_PLMN_SEL_WRITE_REQ,
	MSG_ID_L4CSMU_SIM_ACCESS_REQ,
	MSG_ID_L4CSMU_PUCT_WRITE_REQ,
	MSG_ID_L4CSMU_PUCT_READ_REQ,
	MSG_ID_L4CSMU_CSP_READ_REQ,
       MSG_ID_L4CSMU_SMS_DEPERSONALIZATION_REQ,
	MSG_ID_L4CSMU_DIAL_MODE_REQ,
	 



#line 889 "ps\\interfaces\\sap\\l4_sap.h"
        
       MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_REQ,
       MSG_ID_L4CSMU_SAT_SEND_DATA_REQ,
       MSG_ID_L4CSMU_SAT_RECV_DATA_REQ,
       MSG_ID_L4CSMU_SAT_BEARER_PARA_REQ, 
       MSG_ID_L4CSMU_SAT_SET_CSD_PROF_RES,
       MSG_ID_L4CSMU_SAT_SET_GPRS_PROF_RES,
       

	MSG_ID_SMU_CODE_END = MSG_ID_L4CSMU_SAT_SET_GPRS_PROF_RES, 
	 

	 
	MSG_ID_DRVUEM_AUDIO_PLAY_FINISH_IND = MSG_ID_UEM_CODE_BEGIN,
	MSG_ID_DRVUEM_KEYPAD_IND,
	MSG_ID_DRVUEM_POWER_ON_IND,
	MSG_ID_DRVUEM_PMIC_IND,
	MSG_ID_DRVUEM_GPIO_DETECT_IND,
	MSG_ID_DRVUEM_RTC_PERIOD_IND,

    MSG_ID_DRVUEM_USBDETECT_IND,

        MSG_ID_DRVUEM_CCCI_EM_REQ_IND,
	MSG_ID_L4CUEM_AUDIO_PLAY_BY_NAME_REQ,
	MSG_ID_L4CUEM_AUDIO_STOP_BY_NAME_REQ,
	MSG_ID_L4CUEM_AUDIO_PLAY_BY_STRING_REQ,
	MSG_ID_L4CUEM_AUDIO_STOP_BY_STRING_REQ,
	MSG_ID_L4CUEM_STARTUP_REQ,
	MSG_ID_L4CUEM_SET_AUDIO_PROFILE_REQ,
	MSG_ID_L4CUEM_SET_AUDIO_PARAM_REQ,
	MSG_ID_L4CUEM_SET_HW_LEVEL_REQ,
#line 933 "ps\\interfaces\\sap\\l4_sap.h"
    MSG_ID_UEM_CODE_END = MSG_ID_L4CUEM_SET_HW_LEVEL_REQ,

	 

	 
   MSG_ID_L4CRAC_ACT_REQ = MSG_ID_RAC_CODE_BEGIN,
   MSG_ID_L4CRAC_REG_REQ,
   MSG_ID_L4CRAC_PS_REG_REQ,
   MSG_ID_L4CRAC_DEREG_REQ,
   MSG_ID_L4CRAC_PLMN_LIST_REQ,
   MSG_ID_L4CRAC_CLASS_CHANGE_REQ,
   MSG_ID_L4CRAC_ABORT_LIST_REQ,
   MSG_ID_L4CRAC_SET_PREFERRED_BAND_REQ, 
   MSG_ID_L4CRAC_RFOFF_REQ,  
   MSG_ID_L4CRAC_SIM_STATUS_UPDATE_REQ, 
   MSG_ID_L4CRAC_SET_ROAMING_MODE_REQ,   
   MSG_ID_L4CRAC_PLMN_SEARCH_REQ ,
   MSG_ID_L4CRAC_SET_RAT_MODE_REQ,
   MSG_ID_L4CRAC_PLMN_LIST_STOP_REQ,
   MSG_ID_L4CRAC_SET_PREFER_RAT_REQ,
   MSG_ID_L4CRAC_END_PS_DATA_SESSION_REQ , 

   MSG_ID_GMMREG_ATTACH_CNF,
   MSG_ID_GMMREG_ATTACH_REJ,
   MSG_ID_GMMREG_DETACH_CNF,
   MSG_ID_GMMREG_DETACH_IND,
   MSG_ID_GMMREG_PLMN_LIST_IND,
   MSG_ID_GMMREG_NW_INFO_IND,
   MSG_ID_GMMREG_STATUS_IND,
   MSG_ID_GMMREG_CELL_INFO_UPDATE_IND,
   MSG_ID_GMMREG_PS_SERVICE_INFO_IND,  
   MSG_ID_GMMREG_CIPHER_IND, 
   MSG_ID_GMMREG_RFOFF_CNF,  
   MSG_ID_GMMREG_DEDICATED_MODE_IND,  
   MSG_ID_GMMREG_SEARCH_NORMAL_FINISH_IND, 



   MSG_ID_GMMREG_RR_SERVICE_STATUS_IND,  
       
   MSG_ID_GMMREG_SET_ROAMING_MODE_CNF,
   MSG_ID_GMMREG_SET_PREFER_RAT_CNF,
   MSG_ID_GMMREG_SET_RAT_MODE_CNF,  
   MSG_ID_GMMREG_PLMN_SEARCH_CNF,  
   MSG_ID_GMMREG_PLMN_LIST_CNF,  
   MSG_ID_GMMREG_PLMN_LIST_STOP_CNF,  
   MSG_ID_GMMREG_BAND_SEL_CNF,
   MSG_ID_GMMREG_END_PS_DATA_SESSION_CNF, 
   MSG_ID_GMMREG_NW_ECC_IND,   

   MSG_ID_MMIAS_CELL_POWER_LEVEL_IND,
   MSG_ID_MMIAS_PKT_TRANSFER_MODE_IND,  
   MSG_ID_RAC_CODE_END = MSG_ID_MMIAS_PKT_TRANSFER_MODE_IND,

	 
	 
	 
	 
	MSG_ID_L4CPHB_STARTUP_REQ = MSG_ID_PHB_CODE_BEGIN,
	MSG_ID_L4CPHB_INIT_LN_REQ,
	MSG_ID_L4CPHB_READ_REQ,
	MSG_ID_L4CPHB_ADD_REQ,
	MSG_ID_L4CPHB_UPDATE_REQ,
	MSG_ID_L4CPHB_DELETE_REQ,
	MSG_ID_L4CPHB_SEARCH_REQ,
	MSG_ID_L4CPHB_APPROVE_REQ,
	MSG_ID_L4CPHB_READ_LN_REQ,
	MSG_ID_L4CPHB_WRITE_LN_REQ,
	MSG_ID_L4CPHB_DELETE_LN_REQ,
	MSG_ID_L4CPHB_SYNC_REQ,
	MSG_ID_L4CPHB_STARTUP_READ_NEXT_REQ,
	MSG_ID_L4CPHB_WRITE_REQ,
	MSG_ID_L4CPHB_UPDATE_NW_ECC_REQ, 
	MSG_ID_L4CPHB_INIT_ME_LN_REQ,	
	MSG_ID_L4CPHB_INIT_ME_PHB_REQ,	
        MSG_ID_L4CPHB_WRITE_USIM_REQ,
        MSG_ID_L4CPHB_READ_USIM_REQ,
        MSG_ID_L4CPHB_DELETE_USIM_REQ,
        MSG_ID_L4CPHB_CHECK_WRITE_USIM_ENTRY_REQ,
      MSG_ID_L4CPHB_FDN_GET_NAME_REQ, 
        MSG_ID_L4CPHB_READ_SIM_LN_REQ, 
        MSG_ID_L4CPHB_WRITE_SIM_LN_REQ, 
        MSG_ID_L4CPHB_DELETE_SIM_LN_REQ, 

	MSG_ID_PHB_CODE_END = MSG_ID_L4CPHB_DELETE_SIM_LN_REQ,
	 
	 
    
	MSG_ID_ATCI_UT_RMMI_INPUT_STRING = MSG_ID_ATCI_CODE_BEGIN,	
	MSG_ID_ATCI_UT_RMMI_OUTPUT_STRING, 
    MSG_ID_ATCIDT_UART_TRANSFER_REQ, 
    MSG_ID_ATCIDT_UART_TRANSFER_CNF,
    MSG_ID_ATCIDT_UART_TRANSFER_IND,   
    
	MSG_ID_ATCI_CODE_END = MSG_ID_ATCIDT_UART_TRANSFER_IND,
	 
	 
	 


     
   MSG_ID_L4CPS_NBR_CELL_INFO_START_REQ = MSG_ID_PS_CODE_BEGIN,
   MSG_ID_L4CPS_NBR_CELL_INFO_STOP_REQ,











   MSG_ID_L4CAS_SET_PLMN_LIST_PREFERENCE_REQ,

   MSG_ID_L4CAS_SET_HSPA_PREFERENCE_REQ, 

   MSG_ID_L4CAS_SET_PREFER_RAT_REQ,

   
   MSG_ID_L4C_LCSP_AGPS_CP_START_IND,
   MSG_ID_L4C_LCSP_AGPS_CP_END_IND,
   MSG_ID_L4C_LCSP_AGPS_CP_ABORT_REQ,
   
   MSG_ID_L4C_RATCM_AGPS_RESET_POSITIONING_IND,
   MSG_ID_PS_CODE_END = MSG_ID_L4C_RATCM_AGPS_RESET_POSITIONING_IND,
    

    


#line 1054 "config\\include\\hal\\user_msgid_hal.h"

   MSG_ID_L4_CODE_CHECK_POINT,   
#line 1086 "config\\include\\hal\\user_msgid_hal.h"



 


#line 1 "ps\\interfaces\\sap\\rr_sap.h"

































 
 







 

 













































































































































































































































 








 


 

     
    MSG_ID_GRR_DATA_REQ = MSG_ID_RLC_CODE_BEGIN,
    MSG_ID_GRR_UNITDATA_REQ,
    MSG_ID_GRR_FLUSH_REQ,
    MSG_ID_MAC_RLC_UL_CON_IND,





    MSG_ID_MAC_RLC_ACK_IND,
    MSG_ID_MAC_RLC_SWITCH_TO_DL,
    MSG_ID_MAC_RLC_READY_IND,
    MSG_ID_MAC_RLC_PDCH_REL_IND,

    MSG_ID_RATCM_GAS_READY_TIMER_UPDATE_REQ,
  
    MSG_ID_MAC_RLC_REL_CNF,
    MSG_ID_RATCM_GAS_CELL_UPDATED_REQ,
    MSG_ID_MAC_RLC_ACCESS_REJECT_IND,

    MSG_ID_MAC_RLC_SWITCH_TO_UL,
    MSG_ID_RLC_DL_CODE_BEGIN = MSG_ID_MAC_RLC_SWITCH_TO_UL,
    MSG_ID_MAC_RLC_DL_CON_IND,






    MSG_ID_REASM_RLC_REASM_DONE_IND,

    MSG_ID_RATCM_GAS_START_TEST_MODE_REQ,    

    MSG_ID_MAC_RLC_TBF_REL_IND,
    MSG_ID_RLC_COMMON_CODE_BEGIN = MSG_ID_MAC_RLC_TBF_REL_IND,
#line 339 "ps\\interfaces\\sap\\rr_sap.h"
    MSG_ID_RLC_CODE_END = MSG_ID_MAC_RLC_TBF_REL_IND,

    

     

    MSG_ID_SIM_RR_READY_IND = MSG_ID_RRM_COMMON_CODE_BEGIN,
    
    MSG_ID_RATCM_GAS_ADD_FORBIDDEN_LA_REQ,
    MSG_ID_RATCM_GAS_DEACTIVATE_REQ,
    MSG_ID_RATCM_GAS_DEL_FORBIDDEN_LA_REQ,
    MSG_ID_RATCM_GAS_EQ_PLMN_LIST_UPDATE_REQ,
    MSG_ID_RATCM_GAS_INIT_REQ,
    MSG_ID_RATCM_GAS_PAGING_PARAM_ASSIGN_REQ,
    MSG_ID_RATCM_GAS_REGN_STATUS_UPDATE_REQ,
    MSG_ID_RATCM_GAS_RFOFF_REQ,
    MSG_ID_RATCM_GAS_RFON_REQ,
    MSG_ID_RATCM_GAS_SET_RAT_MODE_REQ,
    MSG_ID_RATCM_GAS_SIM_INFO_RESET_REQ,
    MSG_ID_RATCM_GAS_TLLI_ASSIGN_REQ,
    MSG_ID_RATCM_GAS_HPLMN_INFO_UPDATE_REQ, 
    MSG_ID_RATCM_GAS_SET_PREFERRED_BAND_REQ,

    MSG_ID_RATCM_GAS_SET_GPRS_TRANSFER_PREFERENCE_REQ,


#line 373 "ps\\interfaces\\sap\\rr_sap.h"





    MSG_ID_MPAL_RR_SET_RAT_SERVICE_CNF,
    MSG_ID_MPAL_RR_BSIC_SYNC_CNF,
    MSG_ID_MPAL_RR_NEIGHBOR_BSIC_IND,
    MSG_ID_MPAL_RR_CELL_BSIC_IND,
    MSG_ID_MPAL_RR_DATA_IND,
    MSG_ID_MPAL_RR_CELL_SELECTION_INIT_CNF,

#line 405 "ps\\interfaces\\sap\\rr_sap.h"
    MSG_ID_RRM_COMMON_CODE_END = MSG_ID_MPAL_RR_CELL_SELECTION_INIT_CNF,



     
    
    MSG_ID_RATCM_GAS_PLMN_LIST_REQ = MSG_ID_RCS_CODE_BEGIN,
    MSG_ID_RATCM_GAS_PLMN_LIST_STOP_REQ,
    MSG_ID_RATCM_GAS_PLMN_SEARCH_REQ,

    MSG_ID_MPAL_RR_SEARCH_RF_CNF,
    
#line 425 "ps\\interfaces\\sap\\rr_sap.h"
    MSG_ID_RCS_CODE_END = MSG_ID_MPAL_RR_SEARCH_RF_CNF,




     

    MSG_ID_RATCM_GAS_CONN_EST_REQ = MSG_ID_RMPC_CODE_BEGIN, 
    MSG_ID_RATCM_GAS_CONN_REL_REQ,
    MSG_ID_RATCM_GAS_CONN_ABORT_REQ,  
    MSG_ID_RATCM_GAS_DATA_REQ,
    MSG_ID_RATCM_GAS_SECURITY_MODE_REQ,
    MSG_ID_RATCM_GAS_SERVICE_CHANGE_REQ,
    MSG_ID_RATCM_GAS_CBCH_REQ,           
    MSG_ID_RATCM_GAS_CB_UPDATE_REQ, 




     


    MSG_ID_MAC_RMPC_CTRL_MSG_IND,
    MSG_ID_MAC_RMPC_PKT_ACCESS_REQ,
    MSG_ID_MAC_RMPC_ACCESS_RESULT_IND,
    MSG_ID_MAC_RMPC_ENTER_IDLE_REQ,
    
    MSG_ID_MAC_RMPC_DL_ASSIGN_RESULT_IND,
    MSG_ID_MAC_RMPC_TBF_STATUS_IND,
    MSG_ID_MAC_RMPC_CTRL_MSG_CNF,
    MSG_ID_MAC_RMPC_PS_HANDOVER_MSG_IND,
    MSG_ID_MAC_RMPC_PS_HANDOVER_CONNECT_IND,
    MSG_ID_MAC_RMPC_PS_HANDOVER_RESULT_IND,
    MSG_ID_MAC_RMPC_PS_HANDOVER_RECONNECT_IND,
    MSG_ID_MAC_RMPC_PS_HANDOVER_RSP_IND,
    MSG_ID_RLC_RMPC_RESEL_REQ,
    MSG_ID_RLC_RMPC_MS_STATE_CHANGE_IND,

    MSG_ID_MPAL_RR_NEIGHBOR_MEAS_IND,
    MSG_ID_MPAL_RR_NC_MEASUREMENT_IND,
    MSG_ID_MPAL_RR_EXTENDED_MEAS_IND,
    MSG_ID_MPAL_RR_SERV_IDLE_MEAS_IND,
    MSG_ID_MPAL_RR_SERV_DEDI_MEAS_IND,
    




#line 480 "ps\\interfaces\\sap\\rr_sap.h"





    MSG_ID_MPAL_RR_RACH_CNF,
    MSG_ID_MPAL_RR_HANDOVER_FAIL_IND,
    MSG_ID_MPAL_RR_HANDOVER_SUCCESS_IND,
    MSG_ID_MPAL_RR_HANDOVER_CONNECT_IND,
    MSG_ID_MPAL_RR_DEDICATED_CHANNEL_CONNECT_CNF,
    MSG_ID_MPAL_RR_DEDICATED_CHANNEL_DISCONNECT_CNF,
    MSG_ID_MPAL_RR_DEDICATED_CHANNEL_RECONNECT_CNF,
    MSG_ID_MPAL_RR_FREQUENCY_REDEFINITION_CNF,
    MSG_ID_MPAL_RR_CHANNEL_MODE_MODIFY_CNF,
    MSG_ID_MPAL_RR_CIPHERING_MODE_COMMAND_CNF,
    MSG_ID_MPAL_RR_CLOSE_TCH_LOOP_CNF,
    MSG_ID_MPAL_RR_OPEN_TCH_LOOP_CNF,
    MSG_ID_RMP_MSG_CODE_END = MSG_ID_MPAL_RR_OPEN_TCH_LOOP_CNF,
  
    MSG_ID_LAPDM_RR_ESTB_CONF,
    MSG_ID_LAPDM_RR_ESTB_IND,
    MSG_ID_LAPDM_RR_REL_IND,
    MSG_ID_LAPDM_RR_REL_CONF,
    MSG_ID_LAPDM_RR_SUS_CONF,
    MSG_ID_LAPDM_RR_RESUME_CONF,
    MSG_ID_LAPDM_RR_RECON_CONF,
    MSG_ID_LAPDM_RR_DATA_IND,
    MSG_ID_LAPDM_RR_UNITDATA_IND,
    MSG_ID_LAPDM_RR_ERROR_IND,
    




    MSG_ID_LAPDM_RR_DATA_CONF,
    MSG_ID_RMPC_CODE_END = MSG_ID_LAPDM_RR_DATA_CONF,
  

     
    
#line 526 "ps\\interfaces\\sap\\rr_sap.h"

     
    MSG_ID_RLC_MAC_RES_REQ = MSG_ID_MAC_CODE_BEGIN,
    MSG_ID_RLC_MAC_TBF_REL_REQ,
    MSG_ID_RLC_MAC_UL_DATA_IND,
    MSG_ID_RLC_MAC_ACK_RES,
 
    MSG_ID_RMPC_MAC_CTRL_MSG_REQ,
    MSG_ID_RMPC_MAC_CTRL_MSG_DELETE_REQ,
    MSG_ID_RMPC_MAC_UL_ASSIGN_IND,
    MSG_ID_RMPC_MAC_DL_ASSIGN_IND,
    MSG_ID_RMPC_MAC_SUSPEND_TBF_REQ,
    MSG_ID_RMPC_MAC_RESUME_TBF_REQ,
    MSG_ID_RMPC_MAC_SI_INFO_READY_IND,

    MSG_ID_RMPC_MAC_PS_HANDOVER_REQ,
    MSG_ID_RMPC_MAC_PS_HANDOVER_ERROR_RSP,
    MSG_ID_MPAL_RR_PS_HANDOVER_CNF,
    MSG_ID_MPAL_RR_PS_HANDOVER_RECONNECT_CNF,
    

    MSG_ID_MPAL_RR_TRANSFER_DATA_IND,
    MSG_ID_MPAL_RR_EGPRS_TRANSFER_DATA_IND,
    MSG_ID_MPAL_RR_READY_TO_SEND_IND,
    MSG_ID_MPAL_RR_PDTCH_DISCONN_CNF,
    MSG_ID_MPAL_RR_CCCH_RRBP_CNF,
  

     








    MSG_ID_MAC_MAC_TRANS_DATA_IND,


    MSG_ID_MPAL_RR_EGPRS_LOOP_CNF,
    MSG_ID_MPAL_RR_PDTCH_CONNECT_IND,
    
    MSG_ID_MAC_RMPC_COMMON_CODE_BEGIN = MSG_ID_MPAL_RR_PDTCH_CONNECT_IND,
    MSG_ID_MPAL_RR_INT_MEASUREMENT_IND,
    MSG_ID_MAC_RMPC_COMMON_CODE_END = MSG_ID_MPAL_RR_INT_MEASUREMENT_IND,
    
    MSG_ID_MAC_CODE_END = MSG_ID_MAC_RMPC_COMMON_CODE_END,
  
     
    MSG_ID_RR_LAPDM_DATA_REQ = MSG_ID_LAPDM_CODE_BEGIN,
    MSG_ID_RR_LAPDM_UNITDATA_REQ,




     

    MSG_ID_RR_LAPDM_ESTB_REQ,
    MSG_ID_RR_LAPDM_SUS_REQ,
    MSG_ID_RR_LAPDM_RESUME_REQ,
    MSG_ID_RR_LAPDM_RECON_REQ,
    MSG_ID_RR_LAPDM_REL_REQ,
    MSG_ID_RR_LAPDM_MDL_REL_REQ,
    MSG_ID_RR_LAPDM_CELL_OPTION_UPDATE_REQ,
    MSG_ID_LAPDM_UL_DATA_REQ,
    MSG_ID_LAPDM_DOWNLINK_IND,

    MSG_ID_RR_LAPDM_INTER_RAT_EST_REQ,
    MSG_ID_LAPDM_CODE_END = MSG_ID_RR_LAPDM_INTER_RAT_EST_REQ,

    MSG_ID_RR_MPAL_DEDICATED_DATA_REQ,
    MSG_ID_MPAL_RR_DEDICATED_DATA_IND,
    MSG_ID_MPAL_RR_DEDICATED_READY_TO_SEND_IND,
    MSG_ID_MPAL_RR_DEDICATED_DATA_CALLBACK_IND,
    MSG_ID_MPAL_RR_DEDICATED_READY_TO_SEND_CALLBACK_IND,
  
     
    MSG_ID_RLC_REASM_BEGIN_REASM_IND = MSG_ID_REASM_CODE_BEGIN,
    MSG_ID_RLC_REASM_TBF_REL_IND,
    MSG_ID_FLC_REASM_RESUME_REQ,
    MSG_ID_REASM_CODE_END = MSG_ID_FLC_REASM_RESUME_REQ,
  
     
    MSG_ID_RR_MPAL_SEARCH_RF_REQ = MSG_ID_MPAL_CODE_BEGIN,
    MSG_ID_RR_MPAL_REQ_CODE_BEGIN = MSG_ID_RR_MPAL_SEARCH_RF_REQ,  
    MSG_ID_RR_MPAL_SEARCH_RF_STOP_REQ,
    MSG_ID_RR_MPAL_BSIC_SYNC_REQ,
    MSG_ID_RR_MPAL_SPECIFIC_SYNC_REQ,
    MSG_ID_RR_MPAL_SERV_BCCH_MONITOR_REQ,
    MSG_ID_RR_MPAL_CCCH_MONITOR_REQ,
    MSG_ID_RR_MPAL_PAGE_MODE_CHANGE_REQ,
    MSG_ID_RR_MPAL_RACH_REQ,
    MSG_ID_RR_MPAL_STOP_RACH_REQ,
    MSG_ID_RR_MPAL_DEDICATED_CHANNEL_CONNECT_REQ,
    MSG_ID_RR_MPAL_DEDICATED_CHANNEL_DISCONNECT_REQ,
    MSG_ID_RR_MPAL_HANDOVER_REQ,
    MSG_ID_RR_MPAL_HANDOVER_STOP_REQ,
    MSG_ID_RR_MPAL_DEDICATED_CHANNEL_RECONNECT_REQ,
    MSG_ID_RR_MPAL_FREQUENCY_REDEFINITION_REQ,
    MSG_ID_RR_MPAL_CHANNEL_MODE_MODIFY_REQ,
    MSG_ID_RR_MPAL_CIPHERING_MODE_COMMAND_REQ,
    MSG_ID_RR_MPAL_CLOSE_TCH_LOOP_REQ,
    MSG_ID_RR_MPAL_OPEN_TCH_LOOP_REQ,
    MSG_ID_RR_MPAL_DAI_TEST_REQ,
    MSG_ID_RR_MPAL_POWER_CLASS_REQ,
    MSG_ID_RR_MPAL_CELL_OPTION_UPDATE_REQ,
    MSG_ID_RR_MPAL_EXTENDED_MEAS_REQ,
    MSG_ID_RR_MPAL_NEIGHBOR_MEAS_REQ,
    MSG_ID_RR_MPAL_NEIGHBOR_BSIC_START_REQ,
    MSG_ID_RR_MPAL_NEIGHBOR_BSIC_STOP_REQ,
    MSG_ID_RR_MPAL_NEIGHBOR_SYS_INFO_READ_REQ,
    MSG_ID_RR_MPAL_NEIGHBOR_SYS_INFO_STOP_REQ,
    MSG_ID_RR_MPAL_CELL_BSIC_START_REQ,
    MSG_ID_RR_MPAL_CELL_BSIC_STOP_REQ,
    MSG_ID_RR_MPAL_CELL_SYS_INFO_READ_REQ,
    MSG_ID_RR_MPAL_CELL_SYS_INFO_STOP_REQ,
#line 651 "ps\\interfaces\\sap\\rr_sap.h"

     
    MSG_ID_RR_MPAL_CBCH_CONFIG_REQ,
    MSG_ID_RR_MPAL_CBCH_START_REQ,
    MSG_ID_RR_MPAL_CBCH_STOP_REQ,
    MSG_ID_RR_MPAL_CBCH_SKIP_REQ,
    
#line 672 "ps\\interfaces\\sap\\rr_sap.h"

    MSG_ID_RR_MPAL_SIM_READY_NOTIFY_REQ,
    MSG_ID_RR_MPAL_SET_RAT_SERVICE_REQ, 
    MSG_ID_RR_MPAL_CELL_SELECTION_INIT_REQ, 

    MSG_ID_T3124_EXPIRY,
  


   MSG_ID_RR_MPAL_MONITOR_PAGE_IN_PTM_START_REQ,
   MSG_ID_RR_MPAL_MONITOR_PAGE_IN_PTM_STOP_REQ,





    MSG_ID_RR_MPAL_MONITOR_PBCCH_REQ,
    MSG_ID_RR_MPAL_STOP_MONITOR_PBCCH_REQ,
    MSG_ID_RR_MPAL_MONITOR_PCCCH_REQ,
    MSG_ID_RR_MPAL_NCELL_PBCCH_REQ,
    MSG_ID_RR_MPAL_STOP_NCELL_PBCCH_REQ,

    MSG_ID_RR_MPAL_NC_MEASUREMENT_REQ,
    MSG_ID_RR_MPAL_STOP_NC_MEASUREMENT_REQ,




    MSG_ID_RR_MPAL_INT_MEASUREMENT_REQ,

    MSG_ID_RR_MPAL_PDTCH_CONNECT_REQ,
    MSG_ID_RR_MPAL_RRBP_REQ,
    MSG_ID_RR_MPAL_CTRL_REQ,
    MSG_ID_RR_MPAL_DATA_REQ,
    MSG_ID_RR_MPAL_PKT_TIMING_ADV_PWR_CTRL_REQ,
    MSG_ID_RR_MPAL_PDCH_RELEASE_REQ,
    MSG_ID_RR_MPAL_PDTCH_DISCONN_REQ,




    MSG_ID_RR_MPAL_PDCH_ASSIGNMENT_REQ,



    MSG_ID_RR_MPAL_UPDATE_IR_RESET_REQ,
    MSG_ID_RR_MPAL_EGPRS_LOOP_REQ,


 
 
    MSG_ID_RR_MPAL_REQ_CODE_END, 

#line 733 "ps\\interfaces\\sap\\rr_sap.h"

     





    MSG_ID_MPAL_CODE_END,


     
#line 751 "ps\\interfaces\\sap\\rr_sap.h"
 
 
#line 1094 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_RR_CODE_CHECK_POINT,
#line 1111 "config\\include\\hal\\user_msgid_hal.h"
 

 


#line 1 "ps\\interfaces\\sap\\llc_sap.h"

































 
 







 

 









































 








 


	 
	MSG_ID_LLSMS_UNITDATA_REQ = MSG_ID_LLC_CODE_BEGIN,
	MSG_ID_LLTOM_UNITDATA_REQ,
	MSG_ID_LLGMM_UNITDATA_REQ,
	MSG_ID_LLGMM_ASSIGN_REQ,
	MSG_ID_LLGMM_TRIGGER_REQ,
	MSG_ID_LLGMM_SUSPEND_REQ,
	MSG_ID_LLGMM_RESUME_REQ,
	MSG_ID_LLSND_UNITDATA_REQ,
	MSG_ID_LLSND_DATA_REQ,
	MSG_ID_LLSND_XID_REQ,
	MSG_ID_LLSND_XID_RES,
	MSG_ID_LLSND_ESTABLISH_REQ,
	MSG_ID_LLSND_ESTABLISH_RES,
	MSG_ID_LLSND_RELEASE_REQ,
	MSG_ID_LLSND_CREATE_REG_REQ,
	MSG_ID_LLSND_SAPI_MEM_XID,
	MSG_ID_LLSND_RNR_STOP,
	MSG_ID_GRR_DATA_IND,
	MSG_ID_GRR_UNITDATA_IND,
	MSG_ID_GRR_STATUS_IND,
	MSG_ID_GRR_FLUSH_CNF,

	 
	MSG_ID_RATCM_LLC_ASSIGN_REQ,
	MSG_ID_RATCM_LLC_RESUME_REQ,
	MSG_ID_RATCM_LLC_SUSPEND_REQ,
	MSG_ID_RATCM_LLC_TRIGGER_REQ,
	MSG_ID_RATCM_LLC_UNITDATA_REQ,
	 







	MSG_ID_SAPI_MEM_FLOW_ON_REQ,
	MSG_ID_RLC_LLC_FLOW_CONTROL_OFF,
	MSG_ID_LL_TIMER_EXPIRY,
	MSG_ID_LL_CIPHER_RSP,
	MSG_ID_LL_DECIPHER_RSP,
	MSG_ID_RLC_LLC_RNR_TRIGGER,
	MSG_ID_LLSND_SAPI_ACT_REQ,
	MSG_ID_GRR_CIBUFF_AVAIL_IND,
	MSG_ID_AS_NAS_DATA_CNF,
	MSG_ID_LLSND_FLUSH_REQ,
	MSG_ID_LLSND_SAPI_DEACT_REQ,
	MSG_ID_LLC_CODE_END = MSG_ID_LLSND_SAPI_DEACT_REQ,
	 


#line 1118 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_LLC_CODE_CHECK_POINT,



 

 





    MSG_ID_P2P_CODE_CHECK_POINT,



 

 


#line 1 "ps\\interfaces\\sap\\sndcp_sap.h"

































 
 







 

 

















































 








 


     
     
    MSG_ID_SN_DATA_REQ = MSG_ID_SND_CODE_BEGIN,
    MSG_ID_SN_UNITDATA_REQ,
    MSG_ID_SN_XID_REQ,

     
     
     
    MSG_ID_LLSND_UNITDATA_IND,
    MSG_ID_LLSND_XID_IND,
    MSG_ID_LLSND_XID_CNF,
    MSG_ID_LLSND_DATA_IND,
    MSG_ID_LLSND_DATA_CNF,
    MSG_ID_LLSND_ESTABLISH_IND,
    MSG_ID_LLSND_ESTABLISH_CNF,
    MSG_ID_LLSND_RELEASE_IND,
    MSG_ID_LLSND_RELEASE_CNF,
    MSG_ID_LLSND_STATUS_IND,
     

    MSG_ID_LLSND_RESET_IND,
    MSG_ID_LLSND_T100_RESET_IND,  
    MSG_ID_LLSND_FLUSH_CNF,

    MSG_ID_SNSM_ACTIVATE_IND,
    MSG_ID_SNSM_DEACTIVATE_IND,
    MSG_ID_SNSM_MODIFY_IND,
    MSG_ID_SNSM_SEQUENCE_IND,
    MSG_ID_SNSM_CELL_INFO_UPDATE_IND,  

    MSG_ID_SND_FLC_SUSPEND_RESUME,
    MSG_ID_SND_ACTIVATE_IND,
    MSG_ID_SND_ACTIVATE_RSP,
    MSG_ID_SND_DEACTIVATE_IND,
    MSG_ID_SND_DEACTIVATE_RSP,
    MSG_ID_SND_MODIFY_EST,
    MSG_ID_SND_MODIFY_EST_RSP,
    MSG_ID_SND_MODIFY_REL,
    MSG_ID_SND_MODIFY_REL_RSP,
    MSG_ID_SND_UNITDATA_IND,
    MSG_ID_SND_UNITDATA_TX_REQ,
    MSG_ID_SND_DATA_IND,
    MSG_ID_SND_DATA_TX_REQ,
    MSG_ID_SND_RESET_IND,
    MSG_ID_SND_DATA_ERROR,
    MSG_ID_SND_COMPRESS_RSP,
    MSG_ID_SND_DECOMPRESS_RSP,
    MSG_ID_SND_FLC_DATA_RESUME_PPP,

     
    MSG_ID_RATDM_SNDCP_ACTIVATE_REQ,
    MSG_ID_RATDM_SNDCP_DATA_REQ,
    MSG_ID_RATDM_SNDCP_MODIFY_REQ,
    MSG_ID_RATDM_SNDCP_DEACTIVATE_REQ,
    MSG_ID_RATDM_SNDCP_SEQUENCE_REQ,

    MSG_ID_SOC_SND_DL_SRPDU_RESUME,
    MSG_ID_SND_NPDU_INQUEUE_IND, 
    MSG_ID_SND_CODE_END = MSG_ID_SND_NPDU_INQUEUE_IND,
 

#line 1142 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_SND_CODE_CHECK_POINT,



 

 


#line 1 "ps\\interfaces\\sap\\sm_sap.h"

































 
 







 

 

















































 








 


	 
	MSG_ID_SMREG_PDP_ACTIVATE_REQ = MSG_ID_SM_CODE_BEGIN,
	MSG_ID_SMREG_PDP_DEACTIVATE_REQ,
	MSG_ID_SMREG_PDP_MODIFY_REQ,
	MSG_ID_SMREG_PDP_ACTIVATE_SEC_REQ,
	MSG_ID_SM_RATDM_ACTIVATE_CNF,
	MSG_ID_SM_RATDM_MODIFY_CNF,
	MSG_ID_SM_RATDM_DEACTIVATE_CNF,
	MSG_ID_SM_RATDM_STATUS_IND,
	MSG_ID_SM_NSAPI_MSG_CODE_END = MSG_ID_SM_RATDM_STATUS_IND,

	
       
      MSG_ID_SM_RATDM_RAB_ACTIVATE_CNF,
      MSG_ID_SM_RATDM_RAB_ACTIVATE_IND,
      MSG_ID_SM_RATDM_RAB_DEACTIVATE_IND,
	 	
	MSG_ID_GMMSM_ATTACH_CNF,
	MSG_ID_GMMSM_ATTACH_REJ,
	MSG_ID_GMMSM_DETACH_IND,
	MSG_ID_GMMSM_EST_CNF,
	MSG_ID_GMMSM_EST_REJ,
	MSG_ID_GMMSM_ERR_IND,
	MSG_ID_GMMSM_UNITDATA_CNF,

	MSG_ID_GMMSM_UNITDATA_IND,
	MSG_ID_GMMSM_SUSPEND_REQ,
	MSG_ID_GMMSM_RESUME_REQ,
	MSG_ID_GMMSM_NSAPI_STATUS_IND, 
	MSG_ID_SMREG_PDP_ACTIVATE_REJ_RSP,
	MSG_ID_GMMSM_CELL_INFO_UPDATE_IND,  
	MSG_ID_SM_CODE_END = MSG_ID_GMMSM_CELL_INFO_UPDATE_IND,
	 


#line 1154 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_SM_CODE_CHECK_POINT,



 

 


#line 1 "ps\\interfaces\\sap\\data_sap.h"

































 
 







 

 

































 








 


 

	 
   MSG_ID_CSM_TDT_ACTIVATE_REQ = MSG_ID_TDT_CODE_BEGIN,
   MSG_ID_CSM_TDT_DEACTIVATE_REQ,
   MSG_ID_CSM_TDT_UART_SETOWNER_REQ,
   MSG_ID_CSM_TDT_ESC_OFF_REQ, 
   MSG_ID_PPP_TDT_DATA_REQ,
   MSG_ID_TDT_CODE_END = MSG_ID_PPP_TDT_DATA_REQ,
	
	 
   MSG_ID_CSM_L2R_ACTIVATE_REQ = MSG_ID_L2R_CODE_BEGIN,
   MSG_ID_CSM_L2R_DEACTIVATE_REQ,
   MSG_ID_CSM_L2R_UART_SETOWNER_REQ,
   MSG_ID_CSM_L2R_ESC_OFF_REQ,  
   MSG_ID_PPP_L2R_DATA_REQ,  
   MSG_ID_SMU_L2R_DATA_REQ,
  
   MSG_ID_L2R_RLP_CONN_CNF,
   MSG_ID_L2R_RLP_CONN_IND,
   MSG_ID_L2R_RLP_XID_IND,  
   MSG_ID_L2R_RLP_TEST_CNF,           
   MSG_ID_L2R_RLP_UNITDATA_IND,    
   MSG_ID_L2R_RLP_DISC_CNF,
   MSG_ID_L2R_RLP_DISC_IND,
   MSG_ID_L2R_RLP_DETACH_CNF,
   MSG_ID_L2R_RLP_ERROR_IND,
   MSG_ID_L2R_RLP_RESET_CNF,
   MSG_ID_L2R_RLP_RESET_IND,
   MSG_ID_L2R_RLP_DATA_IND,   
   MSG_ID_L2R_RLP_READY_IND,   
   MSG_ID_L2R_RLP_CHANGE_RATE_IND,
   MSG_ID_L2R_RLP_PREPARE_REMAP_IND,
   MSG_ID_L2R_RLP_REMAP_IND,       
   MSG_ID_FLC_CSD_DL_APPDU_RESUME,
   MSG_ID_L2R_CODE_END = MSG_ID_L2R_RLP_REMAP_IND,
   
    
	MSG_ID_L2R_RLP_ATTACH_REQ = MSG_ID_RLP_CODE_BEGIN,
   MSG_ID_L2R_RLP_DATA_REQ,
   MSG_ID_L2R_RLP_CONN_REQ,
   MSG_ID_L2R_RLP_CONN_RESP,
   MSG_ID_L2R_RLP_RESET_RESP,
   MSG_ID_L2R_RLP_RESET_REQ,
   MSG_ID_L2R_RLP_DISC_REQ,
   MSG_ID_L2R_RLP_UNITDATA_REQ,
   MSG_ID_L2R_RLP_XID_REQ,
   MSG_ID_L2R_RLP_TEST_REQ,
   MSG_ID_L2R_RLP_PREPARE_REMAP_RESP,
   MSG_ID_L2R_RLP_REMAP_RESP,
   MSG_ID_L2R_RLP_DETACH_REQ,
   MSG_ID_RLP_RA_DATA_REQ,  
   MSG_ID_RLP_RA_DATA_IND,      
	MSG_ID_FLC_RLP_RR_REQ,
	MSG_ID_FLC_RLP_RNR_REQ,
   MSG_ID_L2R_RLP_ABOVE_UP_THRESHOLD_IND,
   MSG_ID_L2R_RLP_BELOW_UP_THRESHOLD_IND,

   MSG_ID_CSD_UART_READY_TO_READ,
   MSG_ID_CSD_UART_READY_TO_WRITE,
   MSG_ID_CSD_UART_DATA_REQ,
   MSG_ID_CSD_UART_FULL_IND,
   MSG_ID_CSD_ACTIVATE_REQ,
   MSG_ID_CSD_DEACTIVATE_REQ,
   MSG_ID_CSD_RA_DATA_REQ,  
   MSG_ID_CSD_RA_DATA_IND,      
   MSG_ID_CSD_CEEL_CHANGE_START_IND,
   MSG_ID_CSD_CEEL_CHANGE_FINIDSH_IND,
   MSG_ID_CSD_UPLINK_TICK_IND,
   MSG_ID_CSD_DOWNLINK_TICK_IND,
   MSG_ID_RLP_CODE_END = MSG_ID_CSD_DOWNLINK_TICK_IND,

	 
   MSG_ID_CSM_T30_ACTIVATE_REQ = MSG_ID_T30_CODE_BEGIN,
   MSG_ID_CSM_T30_DEACTIVATE_REQ,
   MSG_ID_CSM_T30_FAX_RATE_REQ,

   MSG_ID_L4C_T30_RW_STR_PARAM_REQ,
   MSG_ID_L4C_T30_RW_PARAM_REQ,
   MSG_ID_L4C_T30_TX_MSG_REQ, 
   MSG_ID_L4C_T30_RX_MSG_REQ,
   MSG_ID_L4C_T30_TX_BCS_REQ,
   MSG_ID_L4C_T30_RX_BCS_REQ,
   MSG_ID_L4C_T30_TX_SILENCE_REQ,
   MSG_ID_L4C_T30_RX_SILENCE_REQ,
   MSG_ID_L4C_T30_TRANSFER_UART_REQ,
   MSG_ID_L4C_T30_TX_PPM_REQ,

   MSG_ID_FA_T30_ACTIVATE_CNF,
   MSG_ID_FA_T30_DEACTIVATE_CNF,
   MSG_ID_FA_T30_TX_DATA_CNF, 
   MSG_ID_FA_T30_RX_DATA_CNF, 
   MSG_ID_FA_T30_DISC_IND,
   MSG_ID_FA_T30_CMD_CNF,

   MSG_ID_FA_T30_CMD_IND,
   MSG_ID_FA_T30_DATA_IND,
   MSG_ID_FA_T30_GET_CMD_IND,
   MSG_ID_FA_T30_GET_DATA_IND,

   MSG_ID_FA_T30_TX_DATA_END_IND,
   MSG_ID_FA_T30_RX_DATA_END_IND,
   MSG_ID_FA_T30_TX_CMD_END_IND, 
   MSG_ID_FA_T30_RX_CMD_END_IND, 

   MSG_ID_FA_T30_GETMORE_DATA_IND,
   MSG_ID_FA_T30_OVERFLOW_IND,
   MSG_ID_FA_T30_DATA_AVAILABLE_IND,
   MSG_ID_FA_T30_RATE_CHANGE_IND,
   MSG_ID_FA_T30_HDLC_IND,
   MSG_ID_T30_CODE_END = MSG_ID_FA_T30_HDLC_IND,

	 
   MSG_ID_T30_FA_ACTIVATE_REQ = MSG_ID_FA_CODE_BEGIN,
   MSG_ID_T30_FA_DEACTIVATE_REQ, 
   MSG_ID_T30_FA_CMD_REQ, 
   MSG_ID_T30_FA_DATA_REQ,   
   MSG_ID_T30_FA_TX_DATA_REQ, 
   MSG_ID_T30_FA_RX_DATA_REQ, 
   MSG_ID_T30_FA_FAX_RATE_REQ,  
   MSG_ID_T30_FA_SEND_DATA_REQ, 
   MSG_ID_FA_T30_HDLC_REQ,

   MSG_ID_RA_FA_PROCESS_CMD_IND,

   MSG_ID_RA_FA_ACTIVATE_CNF, 
   MSG_ID_RA_FA_DL_Q_FULL_IND, 
   MSG_ID_RA_FA_DL_Q_OVERFLOW_IND, 
   MSG_ID_RA_FA_UL_Q_UNDERFLOW_IND, 
   MSG_ID_RA_FA_TX_DATA_CNF, 
   MSG_ID_RA_FA_RX_DATA_CNF, 
   MSG_ID_RA_FA_RX_DATA_END_IND, 
   MSG_ID_RA_FA_TX_DATA_END_IND, 
   MSG_ID_RA_FA_RX_CMD_END_IND, 
   MSG_ID_RA_FA_TX_CMD_END_IND, 
   MSG_ID_RA_FA_RX_MSG_REC_IND, 
   MSG_ID_RA_FA_RATE_CHANGE_IND,
   MSG_ID_FA_CODE_END = MSG_ID_RA_FA_RATE_CHANGE_IND,
  
 
	


#line 1166 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_DATA_CODE_CHECK_POINT,
#line 1182 "config\\include\\hal\\user_msgid_hal.h"
 


 




    MSG_ID_PS_PUBLIC_VT_MSG_CODE_CHECK_POINT,



 

 





    MSG_ID_VT_CODE_CHECK_POINT,
#line 1209 "config\\include\\hal\\user_msgid_hal.h"
 






 
 
#line 1 "interface\\middleware\\irda_sap.h"

































 








 

 















 
 
 
	 
	 

	 
	 
	MSG_ID_LAP_CONNECT_REQUEST=MSG_ID_IRDA_CODE_BEGIN,
	MSG_ID_LAP_DISCOVERY_REQUEST,
	MSG_ID_LAP_DATA_REQUEST,
	MSG_ID_LAP_DISCONNECT_REQUEST,
	MSG_ID_LAP_CONNECT_RESPONSE,

	
	 
	MSG_ID_LAP_DISCOVERY_INDICATION,
	MSG_ID_LAP_DISCOVERY_CONFIRM,
	MSG_ID_LAP_CONNECT_INDICATION,
	MSG_ID_LAP_CONNECT_CONFIRM,
	MSG_ID_LAP_DATA_INDICATION,
	MSG_ID_LAP_DISCONNECT_INDICATION,
	MSG_ID_LAP_DISCOVERY_MEDIA_BUSY_ERROR,
	
	 
	MSG_ID_TTP_DATA_REQUEST,
	MSG_ID_TTP_CONNECT_REQUEST,
	MSG_ID_TTP_CONNECT_RESPONSE,
	MSG_ID_TTP_DISCONNECT_REQUEST,

	 
	MSG_ID_LMP_DATA_REQUEST,
	MSG_ID_LMP_CONNECT_REQUEST,
	MSG_ID_LMP_CONNECT_RESPONSE,
	MSG_ID_LMP_DISCONNECT_REQUEST,			 
	MSG_ID_LMP_LINK_DISCONNECT_REQUEST,		 
	MSG_ID_IAS_GET_REMOTE_LSAP_SEL,			
	
	 
	MSG_ID_LMP_DATA_INDICATION,
	MSG_ID_LMP_CONNECT_INDICATION,
	MSG_ID_LMP_CONNECT_CONFIRM,
	MSG_ID_LMP_LSAP_DISCONNECT_INDICATION,		 
	MSG_ID_LMP_LINK_DISCONNECT_INDICATION,		 
	MSG_ID_IRDA_CLOSE_IND,
	
	MSG_ID_TTP_DATA_INDICATION,
	MSG_ID_TTP_CONNECT_INDICATION,
	MSG_ID_TTP_CONNECT_CONFIRM,
	MSG_ID_TTP_LSAP_DISCONNECT_INDICATION,		 
	
	MSG_ID_IAS_GET_REMOTE_LSAP_SEL_CONFIRM,	
	
	MSG_ID_IRDA_OPEN,
	MSG_ID_IRDA_CLOSE,
	 
   MSG_ID_IRDA_READY_TO_WRITE_IND,
   MSG_ID_IRDA_END_OF_DISCOVERY_IND,        
   MSG_ID_FLC_LMP_IRPDU_HIGH_THRESHOLD_HIT,
	MSG_ID_IRAP_LMP_DL_IRPDU_RESUME,        
 

#line 1221 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_IRDA_CODE_CHECK_POINT,



 

 
#line 1 "interface\\middleware\\ircomm_sap.h"

































 
 







 

 









































 
 
  
	MSG_ID_IRCOMM_CONNECT_REQ = MSG_ID_IRCOMM_CODE_BEGIN,
	MSG_ID_IRCOMM_CONNECT_CNF,
	MSG_ID_IRCOMM_CONNECT_RSP,
   MSG_ID_IRCOMM_CONNECT_IND,
   MSG_ID_IRCOMM_DISCONNECT_REQ,
   MSG_ID_IRCOMM_DISCONNECT_IND,   
   MSG_ID_IRCOMM_OPEN,
   MSG_ID_IRCOMM_CLOSE,   
   MSG_ID_LAP_IRAP_UL_IRPDU_RESUME,
   MSG_ID_IRCOMM_CODE_END = MSG_ID_LAP_IRAP_UL_IRPDU_RESUME,

#line 1232 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_IRCOMM_CODE_CHECK_POINT,



 

 
#line 1 "interface\\nvram\\nvram_sap.h"

































 
 







 

 























































































 


#line 464 "interface\\nvram\\nvram_sap.h"

    MSG_ID_NVRAM_STARTUP_REQ = MSG_ID_NVRAM_CODE_BEGIN,
    MSG_ID_NVRAM_STARTUP_CNF,
    MSG_ID_NVRAM_RESET_REQ,
    MSG_ID_NVRAM_RESET_CNF,
    MSG_ID_NVRAM_READ_REQ,
    MSG_ID_NVRAM_READ_CNF,
    MSG_ID_NVRAM_WRITE_REQ,
    MSG_ID_NVRAM_WRITE_CNF,
    MSG_ID_NVRAM_WRITE_IMEI_REQ,
    MSG_ID_NVRAM_WRITE_IMEI_CNF,
    MSG_ID_NVRAM_READ_SM_REQ,
    MSG_ID_NVRAM_READ_SM_CNF,
    MSG_ID_NVRAM_WRITE_SM_REQ,
    MSG_ID_NVRAM_WRITE_SM_CNF,
    MSG_ID_NVRAM_SET_LOCK_REQ,
    MSG_ID_NVRAM_SET_LOCK_CNF,
    MSG_ID_NVRAM_CREATE_IMAGE_REQ,
    MSG_ID_NVRAM_CREATE_IMAGE_CNF,
    MSG_ID_NVRAM_RECOVER_IMAGE_REQ,
    MSG_ID_NVRAM_RECOVER_IMAGE_CNF,
    MSG_ID_NVRAM_VERIFY_IMAGE_REQ,
    MSG_ID_NVRAM_VERIFY_IMAGE_CNF,
    MSG_ID_NVRAM_SUSPEND_REQ,
    MSG_ID_NVRAM_SUSPEND_CNF,
    MSG_ID_NVRAM_SDS_REQ,
    MSG_ID_NVRAM_SDS_CNF,
    MSG_ID_NVRAM_RESERVED_1,
    MSG_ID_NVRAM_RESERVED_2,
    MSG_ID_NVRAM_RESERVED_3,
    MSG_ID_NVRAM_RESERVED_4,
    MSG_ID_NVRAM_RESERVED_5,
    MSG_ID_NVRAM_RESERVED_6,
    MSG_ID_NVRAM_RESERVED_7,
    MSG_ID_NVRAM_RESERVED_8,
    MSG_ID_NVRAM_MAX,
    MSG_ID_NVRAM_CODE_END = MSG_ID_NVRAM_MAX,

#line 1242 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_NVRAM_CODE_CHECK_POINT,



 

 
#line 1 "interface\\l1interface\\sap\\l1_sap.h"

































 


























































































































































































































































 



  

 

MSG_ID_MPHC_POWER_SCAN_REQ = L1_MSG_CODE_BEGIN,
MSG_ID_MPHC_MANUSEL_PWRSCAN_REQ,
MSG_ID_MPHC_MANUSEL_PWRSCAN_STOP_REQ,
MSG_ID_MPHC_BSIC_SYNC_REQ,
MSG_ID_MPHC_SPECIFIC_SYNC_REQ,
MSG_ID_MPHC_SERV_BCCH_MONITOR_REQ,
MSG_ID_MPHC_IDLE_CCCH_START_REQ,
MSG_ID_MPHC_CCCH_UPDATE_REQ,
MSG_ID_MPHC_PAGE_MODE_CHANGE_REQ,
MSG_ID_MPHC_SMART_PAGE_START_REQ,
MSG_ID_MPHC_RANDOM_ACCESS_REQ,
MSG_ID_MPHC_RACH_ABORT_REQ,
MSG_ID_MPHC_IMMED_ASSIGN_REQ,
MSG_ID_MPHC_CHANNEL_ASSIGN_REQ,
MSG_ID_MPHC_CHANNEL_RELEASE_REQ,
MSG_ID_MPHC_HANDOVER_REQ,
MSG_ID_MPHC_HANDOVER_ACCESS_STOP_REQ,
MSG_ID_MPHC_CHANNEL_RECONNECT_REQ,
MSG_ID_MPHC_FREQUENCY_REDEFINITION_REQ,
MSG_ID_MPHC_CHANNEL_MODE_MODIFY_REQ,
MSG_ID_MPHC_CIPHERING_MODE_COMMAND_REQ,
MSG_ID_MPHC_CLOSE_TCH_LOOP_REQ,
MSG_ID_MPHC_OPEN_TCH_LOOP_REQ,
MSG_ID_MPHC_DAI_TEST_REQ,
MSG_ID_MPHC_POWER_CLASS_REQ,
MSG_ID_MPHC_CELL_OPTION_UPDATE_REQ,
MSG_ID_MPHC_EXTENDED_MEAS_REQ,
MSG_ID_MPHC_NEIGHBOR_MEAS_REQ,
MSG_ID_MPHC_NEIGHBOR_BSIC_START_REQ,
MSG_ID_MPHC_NEIGHBOR_BSIC_STOP_REQ,
MSG_ID_MPHC_NEIGHBOR_SYS_INFO_READ_REQ,
MSG_ID_MPHC_NEIGHBOR_SYS_INFO_STOP_REQ,
MSG_ID_MPHC_CELL_BSIC_START_REQ,
MSG_ID_MPHC_CELL_BSIC_STOP_REQ,
MSG_ID_MPHC_CELL_SYS_INFO_READ_REQ,
MSG_ID_MPHC_CELL_SYS_INFO_STOP_REQ,
MSG_ID_MPHC_CBCH_CONFIG_REQ,
MSG_ID_MPHC_CBCH_START_REQ,
MSG_ID_MPHC_CBCH_STOP_REQ,
MSG_ID_MPHC_CBCH_SKIP_REQ,

MSG_ID_MPHC_BLIND_HANDOVER_BSIC_REQ,

MSG_ID_MPHC_DEACTIVATE_REQ,
MSG_ID_MPHC_SIM_READY_NOTIFY_REQ,
MSG_ID_MPHC_CELL_SELECTION_INIT_REQ,



 
MSG_ID_MPHP_DOWNLINK_SINGLE_BLOCK_REQ,
MSG_ID_MPHP_INTERFERENCE_MEAS_REQ,
MSG_ID_MPHP_PACKET_IDLE_CCCH_START_REQ,

MSG_ID_MPHP_NEIGHBOR_PBCCH_START_REQ,
MSG_ID_MPHP_NEIGHBOR_PBCCH_STOP_REQ,
MSG_ID_MPHP_PACKET_CCCH_CONFIG_REQ,
MSG_ID_MPHP_PACKET_IDLE_PCCCH_START_REQ,
MSG_ID_MPHP_PACKET_PAGE_MODE_UPDATE_REQ,
MSG_ID_MPHP_PACKET_RANDOM_ACCESS_REQ,
MSG_ID_MPHP_PRACH_ABORT_REQ,
MSG_ID_MPHP_PBCCH_START_REQ,
MSG_ID_MPHP_PBCCH_STOP_REQ,
MSG_ID_MPHP_PCCCH_CONFIG_REQ,

MSG_ID_MPHP_PACKET_DOWNLINK_ASSIGNMENT_REQ,



MSG_ID_MPHP_PACKET_NC_MEAS_START_REQ,
MSG_ID_MPHP_PACKET_NC_MEAS_STOP_REQ,
MSG_ID_MPHP_PACKET_PDCH_RELEASE_REQ,
MSG_ID_MPHP_PACKET_UNASSIGNMENT_REQ,
MSG_ID_MPHP_PACKET_UPLINK_ASSIGNMENT_REQ,
MSG_ID_MPHP_PACKET_TIMESLOT_RECONFIGURE_REQ,
MSG_ID_MPHP_PDCH_FAIL_RECONNECT_REQ,
MSG_ID_MPHP_POLL_RESPONSE_REQ,
MSG_ID_MPHP_POWER_CONTROL_UPDATE_REQ,



MSG_ID_MPHP_TIMING_ADVANCE_UPDATE_REQ,
MSG_ID_MPHP_UPLINK_SINGLE_BLOCK_REQ,

MSG_ID_MPHP_MONITOR_PAGE_IN_PTM_START_REQ,
MSG_ID_MPHP_MONITOR_PAGE_IN_PTM_STOP_REQ,
#line 386 "interface\\l1interface\\sap\\l1_sap.h"

MSG_ID_MPHC_ACTIVE_REQ,

#line 398 "interface\\l1interface\\sap\\l1_sap.h"


MSG_ID_MPHP_EGPRS_LOOP_REQ,
MSG_ID_MPHP_UPDATE_IR_RESET_REQ,






#line 418 "interface\\l1interface\\sap\\l1_sap.h"


 
MSG_ID_MPHC_POWER_OFF_REQ,

 

MSG_ID_MPHC_POWER_SCAN_CNF,
MSG_ID_L1_CNF_CODE_BEGIN = MSG_ID_MPHC_POWER_SCAN_CNF,
MSG_ID_MPHC_MANUSEL_PWRSCAN_CNF,
MSG_ID_MPHC_BSIC_SYNC_CNF,
MSG_ID_MPHC_UNITDATA_IND,
MSG_ID_MPHC_RANDOM_ACCESS_CNF,
MSG_ID_MPHC_IMMED_ASSIGN_CNF,
MSG_ID_MPHC_CHANNEL_ASSIGN_CNF,
MSG_ID_MPHC_CHANNEL_RELEASE_CNF,
MSG_ID_MPHC_HANDOVER_CNF,
MSG_ID_MPHC_HANDOVER_ACCESS_START_IND,
MSG_ID_MPHC_HANDOVER_CONNECTED_IND,
MSG_ID_MPHC_HANDOVER_ACCESS_STOP_CNF,
MSG_ID_MPHC_CHANNEL_RECONNECT_CNF,
MSG_ID_MPHC_FREQUENCY_REDEFINITION_CNF,
MSG_ID_MPHC_CHANNEL_MODE_MODIFY_CNF,
MSG_ID_MPHC_CIPHERING_MODE_COMMAND_CNF,
MSG_ID_MPHC_CLOSE_TCH_LOOP_CNF,
MSG_ID_MPHC_OPEN_TCH_LOOP_CNF,
MSG_ID_MPHC_EXTENDED_MEAS_IND,
MSG_ID_MPHC_BLOCK_QUALITY_IND,
MSG_ID_MPHC_SERV_IDLE_MEAS_IND,
MSG_ID_MPHC_SERV_DEDI_MEAS_IND,
MSG_ID_MPHC_NEIGHBOR_MEAS_IND,
MSG_ID_MPHC_NEIGHBOR_BSIC_IND,
MSG_ID_MPHC_CELL_BSIC_IND,

MSG_ID_MPHC_BLIND_HANDOVER_BSIC_IND,

MSG_ID_MPHC_CELL_SELECTION_INIT_CNF,
MSG_ID_MPHC_ACTIVE_CNF,
MSG_ID_MPHC_DEACTIVATE_CNF,



 
MSG_ID_MPHP_DOWNLINK_SINGLE_BLOCK_CNF,
MSG_ID_MPHP_INTERFERENCE_MEAS_IND,
MSG_ID_MPHP_PACKET_BLOCK_QUALITY_IND,
MSG_ID_MPHP_PACKET_DATA_IND,
MSG_ID_MPHP_PACKET_DOWNLINK_ASSIGNMENT_CNF,



MSG_ID_MPHP_PACKET_NC_MEAS_IND,

MSG_ID_MPHP_PACKET_RANDOM_ACCESS_CNF,

MSG_ID_MPHP_PACKET_SERV_MEAS_IND,
MSG_ID_MPHP_PACKET_UNASSIGNMENT_CNF,
MSG_ID_MPHP_PACKET_UPLINK_ASSIGNMENT_CNF,
MSG_ID_MPHP_PACKET_TIMESLOT_RECONFIGURE_CNF,





MSG_ID_MPHP_PDCH_FAIL_RECONNECT_CNF,
MSG_ID_MPHP_POLL_RESPONSE_CNF,
#line 492 "interface\\l1interface\\sap\\l1_sap.h"
MSG_ID_MPHP_UPLINK_SINGLE_BLOCK_CNF,


MSG_ID_MPHP_EGPRS_LOOP_CNF,


#line 504 "interface\\l1interface\\sap\\l1_sap.h"

MSG_ID_L1_CNF_CODE_END,  

#line 517 "interface\\l1interface\\sap\\l1_sap.h"

#line 1251 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_L1_CODE_CHECK_POINT,
#line 1258 "config\\include\\hal\\user_msgid_hal.h"
 

 
#line 1 "interface\\hal\\L1\\hal_l1_sap.h"

































 
 

































 













#line 1263 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_HAL_L1_CODE_CHECK_POINT,





 

 
#line 1 "interface\\l1interface\\sap\\l1hisr_sap.h"

































 







































 
 

MSG_ID_L1TASK_WAKEUP,

#line 1274 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_L1HISR_CODE_CHECK_POINT,
#line 1281 "config\\include\\hal\\user_msgid_hal.h"
 

 
#line 1 "interface\\l1interface\\sap\\ft_sap.h"

































 


















































 

 

MSG_ID_FT_TO_TST = FT_MSG_CODE_BEGIN,
MSG_ID_TST_TO_FT,
MSG_ID_FT_TO_UL1TST,
#line 1286 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_FT_CODE_CHECK_POINT,
#line 1293 "config\\include\\hal\\user_msgid_hal.h"
 

 
#line 1 "tst\\include\\tstsap.h"

































 
MSG_ID_TST_INJECT_STRING = TST_MSG_CODE_BEGIN,
MSG_ID_TST_GET_GPRS_POOL_STATUS,
MSG_ID_TST_POOL_QUERY_TIME_EXPIRY,
MSG_ID_TST_MSG_FROM_DSP,
MSG_ID_TST_STREAM_FROM_DSP,
MSG_ID_TST_UT_MSG1,
MSG_ID_TST_L2COPRO_FILTER_RETRIEVAL,
MSG_ID_TST_L2COPRO_FILTER_SAVE,
MSG_ID_TST_MSG_FROM_AP,
MSG_ID_TST_UT_CCCI_MSG,
MSG_ID_TST_TR_INTERNAL,
#line 1298 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_TST_CODE_CHECK_POINT,
#line 1306 "config\\include\\hal\\user_msgid_hal.h"
 


 
#line 1 "interface\\os\\sysservice_sap.h"

































 
MSG_ID_TIMER_EXPIRY =  SYSDEBUG_MSG_CODE_BEGIN,





MSG_ID_STACK_SIM_TIMER_START,
MSG_ID_STACK_SIM_TIMER_STOP,
MSG_ID_STACK_SIM_TIMER_EXPIRY,


#line 1312 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_SYSDEBUG_CODE_CHECK_POINT,
#line 1319 "config\\include\\hal\\user_msgid_hal.h"
 


    


 


 


 


#line 1 "interface\\hal\\video\\vsrc_sap.h"

































 
 







 

 































 

    
    MSG_ID_VSRC_TEST = MSG_ID_VSRC_CODE_BEGIN,
    MSG_ID_VSRC_SOURCE_PROVIDER_DATA_IND,
    MSG_ID_VSRC_CODE_END = MSG_ID_VSRC_SOURCE_PROVIDER_DATA_IND,
    

#line 1335 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_VSRC_CODE_CHECK_POINT,




 


 
#line 1 "interface\\middleware\\mexe_sap.h"

































 



































 

 
    MSG_ID_MMI_GET_SIM_CERTIFICATE_REQ = MSG_ID_MEXE_CODE_BEGIN,
    MSG_ID_MMI_SEND_SIM_CERTIFICATE_RECORD_IND,
    MSG_ID_MMI_SEND_SIM_CERTIFICATE_RECORD_RES,
    MSG_ID_MMI_GET_SIM_CERTIFICATE_RSP,
 
#line 1346 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_MEXE_CODE_CHECK_POINT,




 

    
 
 





    MSG_ID_AUDIO_CODE_CHECK_POINT,






 



 
#line 1 "interface\\hal\\audio\\l1audio_sph_srv_sap.h"
 

MSG_ID_L1AUDIO_SPH_SRV_TRANSCODING_UL_READ_PATTERN = MSG_ID_L1AUDIO_SPH_SRV_CODE_BEGIN,
MSG_ID_L1AUDIO_SPH_SRV_TRANSCODING_DL_READ_PATTERN,
MSG_ID_L1AUDIO_SPH_SRV_TRANSCODING_UL_DONE,
MSG_ID_L1AUDIO_SPH_SRV_TRANSCODING_DL_DONE,
MSG_ID_L1AUDIO_SPH_SRV_TRANSCODING_CONTINUE,

 

#line 1375 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_L1AUDIO_SPH_SRV_CODE_CHECK_POINT,



 


 





    MSG_ID_LCSP_MSG_CODE_CHECK_POINT,




 


 
#line 1 "fmr\\inc\\fmr_sap.h"

































 
 







 

 

























 

    
    MSG_ID_FMR_START = MSG_ID_FM_MSG_CODE_BEGIN,
    MSG_ID_FMR_HWSEARCH_IND,
    MSG_ID_FMR_RDS_IND,
    
#line 1399 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_FM_MSG_CODE_CHECK_POINT,




 

 
#line 1 "ps\\interfaces\\sap\\ratcm_sap.h"

































 


















 



MSG_ID_RATCM_RRCE_CONN_EST_CNF = MSG_ID_RATCM_CODE_BEGIN,
MSG_ID_RATCM_RRCE_CONN_REL_CNF,
MSG_ID_RATCM_RRCE_CONN_REL_IND,
MSG_ID_RATCM_RRCE_DATA_TRANSFER_IND,
MSG_ID_RATCM_RRCE_DATA_TRANSFER_CNF,
MSG_ID_RATCM_RRCE_SECURITY_MODE_COMPLETE_IND,
MSG_ID_RATCM_RRCE_SECURITY_MODE_CHANGE_IND,
MSG_ID_RATCM_RRCE_CONN_LOSS_IND,
MSG_ID_RATCM_RRCE_RESET_KEYS_IND,
MSG_ID_RATCM_RRCE_RB_RE_ESTABLISHMENT_IND,
MSG_ID_RATCM_RRCE_END_PS_DATA_SESSION_CNF,   

MSG_ID_RATCM_RRCE_PAGE_IND,

MSG_ID_RATCM_UAS_SYS_INFO_IND,
MSG_ID_RATCM_CSCE_INIT_CNF,
MSG_ID_RATCM_CSCE_PLMN_SEARCH_CNF,
MSG_ID_RATCM_CSCE_PLMN_LOSS_IND,
MSG_ID_RATCM_CSE_PLMN_LIST_CNF,
MSG_ID_RATCM_CSE_PLMN_LIST_UPDATE_IND,
MSG_ID_RATCM_CSE_PLMN_LIST_STOP_CNF, 
MSG_ID_RATCM_CSCE_RRC_DEACTIVATE_CNF,
MSG_ID_RAC_UAS_CELL_POWER_LEVEL_IND,
MSG_ID_RATCM_RRCE_CELL_CHANGE_START_IND,
MSG_ID_RATCM_RRCE_CELL_CHANGE_FINISH_IND,
MSG_ID_RATCM_CSCE_START_TIMER_OUT_OF_SERVICE_IND,
MSG_ID_RATCM_CSCE_RFON_CNF,
MSG_ID_RATCM_CSCE_RFOFF_CNF,
MSG_ID_RATCM_UAS_SIGNAL_APPEAR_IND,
MSG_ID_RATCM_CSCE_SET_RAT_MODE_CNF,


MSG_ID_RATCM_SLCE_MONITORING_CLOSE_LOOP_CNF,
MSG_ID_RATCM_SLCE_MONITORING_CLOSE_LOOP_IND,
MSG_ID_RATCM_SLCE_RAB_ESTABLISHMENT_IND,
MSG_ID_RATCM_SLCE_RAB_MODIFY_IND,
MSG_ID_RATCM_SLCE_RAB_RELEASE_IND,

 
MSG_ID_RATCM_LLC_STATUS_IND,
MSG_ID_RATCM_LLC_UNITDATA_IND,
MSG_ID_RATCM_LLC_AS_NAS_DATA_CNF,




 
MSG_ID_RATCM_URLC_UTEST_OPEN_LOOP_CNF,
MSG_ID_RATCM_URLC_UTEST_CLOSE_LOOP_M1_CNF,
MSG_ID_RATCM_URLC_UTEST_CLOSE_LOOP_M2_CNF,

 
MSG_ID_RATCM_BMC_DATA_IND,
MSG_ID_RATCM_BMC_CB_GS_CHANGE_IND, 

 
MSG_ID_RATCM_GAS_CELL_CHANGE_START_IND,
MSG_ID_RATCM_GAS_CELL_CHANGE_FINISH_IND,
MSG_ID_RATCM_GAS_CONN_ABORT_IND,
MSG_ID_RATCM_GAS_CONN_LOSS_IND,
MSG_ID_RATCM_GAS_CONN_EST_CNF,
MSG_ID_RATCM_GAS_CONN_EST_IND,
MSG_ID_RATCM_GAS_CONN_REL_CNF,
MSG_ID_RATCM_GAS_CONN_REL_IND,
MSG_ID_RATCM_GAS_DATA_CNF,
MSG_ID_RATCM_GAS_DATA_IND,
MSG_ID_RATCM_GAS_DEACTIVATE_CNF,
MSG_ID_RATCM_GAS_INIT_CNF,
MSG_ID_RATCM_GAS_PLMN_LIST_CNF,
MSG_ID_RATCM_GAS_PLMN_LIST_STOP_CNF,
MSG_ID_RATCM_GAS_PLMN_LOSS_IND,
MSG_ID_RATCM_GAS_PAGE_IND,
MSG_ID_RATCM_GAS_PLMN_SEARCH_CNF,
MSG_ID_RATCM_GAS_READY_TIMER_UPDATE_IND,
MSG_ID_RATCM_GAS_RFOFF_CNF,
MSG_ID_RATCM_GAS_RFON_CNF,
MSG_ID_RATCM_GAS_SET_RAT_MODE_CNF,
MSG_ID_RATCM_GAS_STOP_TEST_MODE_IND,
MSG_ID_RATCM_GAS_SYNC_IND,
MSG_ID_RATCM_GAS_SYS_INFO_IND,
MSG_ID_RATCM_GAS_PS_HO_SUCCESS_IND,
MSG_ID_RATCM_GAS_CB_PAGE_IND,
MSG_ID_RATCM_GAS_T3122_TIMEOUT_IND,
 
MSG_ID_RATCM_GAS_CCO_ACTIVATION_TIME_TIMEOUT_IND,
MSG_ID_RATCM_GAS_CB_GS_CHANGE_IND,
MSG_ID_RATCM_GAS_SIGNAL_APPEAR_IND,
#line 151 "ps\\interfaces\\sap\\ratcm_sap.h"

 
 
MSG_ID_RATCM_RRLP_LCS_PROC_START_IND,
MSG_ID_RATCM_RRLP_LCS_PROC_END_IND,
MSG_ID_RATCM_GAS_AGPS_RESET_POSITIONING_IND,
 

 
MSG_ID_RATCM_UAGPS_CP_LCS_PROC_START_IND, 
MSG_ID_RATCM_UAGPS_CP_LCS_PROC_END_IND,

 
MSG_ID_SMSAL_RATCM_CBCH_REQ,
MSG_ID_SMSAL_RATCM_CB_UPDATE_REQ,

 
MSG_ID_RATCM_RATDM_RAT_CHANGE_CNF,

 
MSG_ID_MM_RATCM_SET_RAT_MODE_REQ,
MSG_ID_MM_RATCM_INIT_REQ,
MSG_ID_MM_RATCM_SIM_INFO_RESET_REQ,
MSG_ID_MM_RATCM_RFOFF_REQ,
MSG_ID_MM_RATCM_PLMN_SEARCH_REQ,
MSG_ID_MM_RATCM_EQ_PLMN_LIST_UPDATE_REQ,
MSG_ID_MM_RATCM_HPLMN_INFO_UPDATE_REQ,
MSG_ID_MM_RATCM_ADD_FORBIDDEN_LA_REQ,
MSG_ID_MM_RATCM_DEL_FORBIDDEN_LA_REQ,
MSG_ID_MM_RATCM_PLMN_LIST_REQ,
MSG_ID_MM_RATCM_PLMN_LIST_STOP_REQ,
MSG_ID_MM_RATCM_TLLI_ASSIGN_REQ,
MSG_ID_MM_RATCM_PAGING_PARAM_ASSIGN_REQ,
MSG_ID_MM_RATCM_SECURITY_MODE_REQ,
MSG_ID_MM_RATCM_CONN_EST_REQ,
MSG_ID_MM_RATCM_CONN_ABORT_REQ, 
MSG_ID_MM_RATCM_CONN_REL_REQ,
MSG_ID_MM_RATCM_REGN_STATUS_REQ,
MSG_ID_MM_RATCM_CELL_UPDATED_REQ,
MSG_ID_MM_RATCM_CB_LOC_UPDATE_REQ,  
MSG_ID_MM_RATCM_READY_TIMER_UPDATE_REQ,
MSG_ID_MM_RATCM_SERVICE_CHANGE_REQ,
MSG_ID_MM_RATCM_CS_DATA_REQ,
MSG_ID_MM_RATCM_PS_DATA_REQ,
MSG_ID_MM_RATCM_LLC_ASSIGN_REQ,
MSG_ID_MM_RATCM_LLC_RESUME_REQ,
MSG_ID_MM_RATCM_LLC_SUSPEND_REQ,
MSG_ID_MM_RATCM_LLC_TRIGGER_REQ,
#line 205 "ps\\interfaces\\sap\\ratcm_sap.h"

MSG_ID_MM_RATCM_SET_GPRS_TRANSFER_PREFERENCE_REQ, 
MSG_ID_MM_RATCM_SET_PREFERRED_BAND_REQ,    
MSG_ID_MM_RATCM_END_PS_DATA_SESSION_REQ,   
MSG_ID_MM_RATCM_START_TEST_MODE_REQ,
MSG_ID_RATCM_CODE_END = MSG_ID_MM_RATCM_START_TEST_MODE_REQ,

#line 1409 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_RATCM_CODE_CHECK_POINT,




 

 
#line 1 "ps\\interfaces\\sap\\ratdm_sap.h"

































 

























































 








 



 
MSG_ID_TCM_RATDM_DATA_REQ = MSG_ID_RATDM_CODE_BEGIN,
MSG_ID_TCM_RATDM_CONFIG_REQ,
MSG_ID_TCM_RATDM_DECONFIG_REQ,
MSG_ID_TCM_RATDM_ENTER_DATA_MODE_REQ,
MSG_ID_TCM_RATDM_QUERY_PS_STATISTICS_REQ,
MSG_ID_TCM_RATDM_RESET_PS_STATISTICS_REQ,

 
MSG_ID_CMUX_RATDM_DATA_ACTIVATE_RSP,
MSG_ID_CMUX_RATDM_DATA_DEACTIVATE_RSP,

 
MSG_ID_PS_DATA_REQ,
MSG_ID_PS_DATA_IND,

 
MSG_ID_SM_RATDM_RAB_ACTIVATE_REQ,
MSG_ID_SM_RATDM_RAB_ACTIVATE_RSP,
MSG_ID_SM_RATDM_ACTIVATE_REQ,
MSG_ID_SM_RATDM_DEACTIVATE_REQ,
MSG_ID_SM_RATDM_MODIFY_REQ,

 
MSG_ID_MM_RATDM_REESTABLISH_RAB_RSP,
MSG_ID_MM_RATDM_SEQUENCE_REQ,
MSG_ID_MM_RATDM_SEND_USER_DATA_RSP,




 
MSG_ID_RATCM_RATDM_RAT_CHANGE_REQ,
MSG_ID_RATCM_RATDM_REGAIN_COVERAGE_REQ,

 
MSG_ID_RATDM_RABM_ACTIVATE_CNF,
MSG_ID_RATDM_RABM_ACTIVATE_IND,
MSG_ID_RATDM_RABM_DEACTIVATE_CNF,
MSG_ID_RATDM_RABM_DEACTIVATE_IND,
MSG_ID_RATDM_RABM_MODIFY_CNF,
MSG_ID_RATDM_RABM_REESTABLISH_IND,
MSG_ID_RATDM_RABM_DATA_CNF,
MSG_ID_RATDM_RABM_DATA_IND,
MSG_ID_RATDM_RABM_SUSPEND_DATA_PLANE_IND,
MSG_ID_RATDM_RABM_RESUME_DATA_PLANE_IND,
MSG_ID_RATDM_RABM_PDCP_RELOC_IND,
MSG_ID_RATDM_RABM_RETRANSMIT_IND,
MSG_ID_RATDM_RABM_RB_CONFIG_IND,



MSG_ID_RATDM_RABM_RAB_CAPABILITY_IND,
MSG_ID_RATDM_RABM_CONFIG_CNF,
MSG_ID_RATDM_RABM_QUERY_STATISTICS_RSP,
MSG_ID_RATDM_RABM_RESET_STATISTICS_RSP,
MSG_ID_RATDM_RABM_STATISTICS_IND,
MSG_ID_RATDM_RABM_SET_STATISTICS_CNF,

 
MSG_ID_RATDM_URLC_DEACTIVATE_PS_RAB_CNF,

 
MSG_ID_RATDM_SNDCP_DATA_IND,
MSG_ID_RATDM_SNDCP_DATA_CNF,
MSG_ID_RATDM_SNDCP_ACTIVATE_CNF,
MSG_ID_RATDM_SNDCP_MODIFY_CNF,
MSG_ID_RATDM_SNDCP_DEACTIVATE_CNF,
MSG_ID_RATDM_SNDCP_STATUS_IND,
MSG_ID_RATDM_SNDCP_SUSPEND_DATA_PLANE_IND,
MSG_ID_RATDM_SNDCP_RESUME_DATA_PLANE_IND,
MSG_ID_RATDM_SNDCP_FLUSH_IND,  
MSG_ID_RATDM_SNDCP_TRANSMIT_IND,
MSG_ID_RATDM_SNDCP_SEQUENCE_CNF,
MSG_ID_RATDM_SNDCP_RESET_NPDU_SEQ_IND,  

 
MSG_ID_RATDM_PROCESS_TX_QUEUE_IND,
MSG_ID_RATDM_CODE_END = MSG_ID_RATDM_PROCESS_TX_QUEUE_IND,

#line 1419 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_RATDM_CODE_CHECK_POINT,




 


 
 




   MSG_ID_URR_CODE_CHECK_POINT,   
#line 1462 "config\\include\\hal\\user_msgid_hal.h"

 
 





   MSG_ID_UL2_CODE_CHECK_POINT,   
#line 1493 "config\\include\\hal\\user_msgid_hal.h"

 

 
 




   MSG_ID_UL2D_CODE_CHECK_POINT,   
#line 1526 "config\\include\\hal\\user_msgid_hal.h"

 

 

 



    MSG_ID_URR_GRR_CODE_CHECK_POINT,
#line 1544 "config\\include\\hal\\user_msgid_hal.h"
 

 





    MSG_ID_GEMINI_URR_GRR_CODE_CHECK_POINT,
#line 1559 "config\\include\\hal\\user_msgid_hal.h"
 


 




    MSG_ID_UL1_CODE_CHECK_POINT,





 

 





    MSG_ID_UL1DATA_CODE_CHECK_POINT,





 

 





    MSG_ID_UL1HISR_CODE_CHECK_POINT,





 

 





    MSG_ID_UL1C_CODE_CHECK_POINT,





 

 





    MSG_ID_LL1_CODE_CHECK_POINT,





 

 





    MSG_ID_UL1TST_CODE_CHECK_POINT,





 

 





    MSG_ID_UAGPS_CP_CODE_CHECK_POINT,



 

 






    MSG_ID_TL1_MSG_CODE_CHECK_POINT,








    MSG_ID_TL1DATA_AST_MSG_CODE_CHECK_POINT,








    MSG_ID_TL1HISR_AST_MSG_CODE_CHECK_POINT,








    MSG_ID_TL1FTA_AST_MSG_CODE_CHECK_POINT,




 

 




    MSG_ID_RSVA_CODE_CHECK_POINT,
#line 1712 "config\\include\\hal\\user_msgid_hal.h"
 


 
#line 1 "ps\\interfaces\\sap\\ndis_sap.h"

































 






































 

 
MSG_ID_NDIS_RATDM_DATA_ACTIVATE_IND=MSG_ID_NDIS_MSG_CODE_BEGIN,
MSG_ID_NDIS_RATDM_DATA_ACTIVATE_RSP,
MSG_ID_NDIS_RATDM_DATA_DEACTIVATE_IND,
MSG_ID_NDIS_RATDM_DATA_DEACTIVATE_RSP,
 

#line 1718 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_NDIS_MSG_CODE_CHECK_POINT,



 

 




    MSG_ID_UPS_PUBLIC_CODE_CHECK_POINT,



 

  





    MSG_ID_UPS_MSG_CODE_CHECK_POINT,



 

 




    MSG_ID_PS_PUBLIC_SUPL_MSG_CODE_CHECK_POINT,




 

 





    MSG_ID_SUPL_MSG_CODE_CHECK_POINT,




 

 
#line 1 "ps\\interfaces\\sap\\cmux_sap.h"

































 
























































 

 
MSG_ID_CMUX_STARTUP_REQ=CMUX_MSG_CODE_BEGIN,
MSG_ID_CMUX_CLOSE_DOWN_REQ,
MSG_ID_CMUX_CLOSE_DOWN_IND,

MSG_ID_CMUX_DLC_CONNECT_IND, 


MSG_ID_CMUX_DLC_DATA_READY_REQ,
MSG_ID_CMUX_DLC_READY_TO_RECEIVE_REQ,

MSG_ID_CMUX_READY_TO_SEND_IND,
MSG_ID_CMUX_UART_DATA_IND,
MSG_ID_CMUX_UART_DATA_REQ,
MSG_ID_CMUX_UART_CLOSE_DOWN_REQ,
MSG_ID_CMUX_UART_CLOSE_DOWN_CNF,

 
MSG_ID_CMUX_UT_UART_DATA_IND,
MSG_ID_CMUX_UT_UART_DATA_REQ,

 
MSG_ID_CMUX_VP_SET_BUFF_CONFIG_REQ,
MSG_ID_CMUX_VP_SET_BUFF_CONFIG_CNF,
MSG_ID_CMUX_VP_RESET_BUFF_CONFIG_REQ,
MSG_ID_CMUX_VP_RESET_BUFF_CONFIG_CNF,

 
MSG_ID_CMUX_FLC_DATA_RESUME_IND,
MSG_ID_CMUX_FLC_DATA_SUSPEND_IND,
 

#line 1775 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_CMUX_CODE_CHECK_POINT,
#line 1782 "config\\include\\hal\\user_msgid_hal.h"
 

 


#line 1 "ps\\interfaces\\sap\\ppp_sap.h"

































 
 







 

 
























































 

	 
	 
	 
	MSG_TAG_PPP_FIRST_GPRS_MSG = MSG_ID_PPP_CODE_BEGIN,
	MSG_ID_L4CPPP_ACTIVATE_REQ = MSG_TAG_PPP_FIRST_GPRS_MSG,
	MSG_ID_L4CPPP_DEACTIVATE_REQ,
	MSG_ID_L4CPPP_RESUME_REQ,
	MSG_ID_L4CPPP_PPPTYPEPDP_UART_TRANSFER_IND, 

     
	MSG_ID_TAF_EXT_PDP_ACTIVATE_ACK_RSP,
  	MSG_ID_TAF_EXT_PDP_ACTIVATE_REJ_RSP,
  	MSG_ID_TAF_EXT_PDP_DEACTIVATE_ACK_RSP,
  	MSG_ID_TAF_EXT_PDP_DEACTIVATE_REQ,
  	MSG_ID_TAF_DATA_REQ,
  	MSG_ID_TAF_EXT_UPDATE_PDP_ADDR_REQ,
  	MSG_ID_TAF_EXT_PDP_SET_IP_AND_DNS_INFO_CNF,

	 
	MSG_ID_PPP_FLC_DATA_RESUME_IND,
	MSG_ID_PPP_STATUS_REPORT_IND,
	MSG_ID_PPP_PROCESS_PKT_IND,

       MSG_ID_TAF_PS_SUSPEND_IND,
       MSG_ID_TAF_PS_RESUME_IND,
	MSG_TAG_PPP_LAST_GPRS_MSG = MSG_ID_TAF_PS_RESUME_IND,

	
	 
	 
	MSG_TAG_PPP_FIRST_CSD_MSG,
	MSG_ID_L4CPPP_CSD_ACTIVATE_REQ = MSG_TAG_PPP_FIRST_CSD_MSG,
	MSG_ID_L4CPPP_CSD_DEACTIVATE_REQ,
	
	 
	MSG_ID_TCPIP_PPP_DATA_REQ,
	MSG_ID_SOC_PPP_DL_SRPDU_RESUME,
	
	 
	MSG_ID_FLC_PPP_UL_APPDU_RESUME,
	MSG_ID_PPP_TDT_DATA_IND,




	MSG_ID_PPP_L2R_DATA_IND,		
		
	MSG_TAG_PPP_LAST_CSD_MSG = MSG_ID_PPP_L2R_DATA_IND,

        
       MSG_TAG_PPP_FIRST_EXT_MODEM_MSG,  
        
       MSG_ID_PPP_EXT_MODEM_DATA_REQ = MSG_TAG_PPP_FIRST_EXT_MODEM_MSG,
       MSG_ID_PPP_EXT_MODEM_DATA_IND,
       MSG_ID_EXT_MODEM_PPP_ACTIVATE_REQ,
       MSG_ID_EXT_MODEM_PPP_ACTIVATE_CNF,
       MSG_ID_EXT_MODEM_PPP_DEACTIVATE_REQ,
       MSG_ID_EXT_MODEM_PPP_DEACTIVATE_CNF,
       MSG_ID_EXT_MODEM_PPP_DEACTIVATE_IND,

       MSG_TAG_PPP_LAST_EXT_MODEM_MSG = MSG_ID_EXT_MODEM_PPP_DEACTIVATE_IND,

       MSG_ID_PPP_CODE_END = MSG_TAG_PPP_LAST_EXT_MODEM_MSG,
	
	 


#line 1789 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_PPP_CODE_CHECK_POINT,



 

 
#line 1 "interface\\gps\\gps_sap.h"

































 
 







 

 




















































































 
MSG_ID_GPS_UART_OPEN_REQ = MSG_ID_GPS_MSG_CODE_BEGIN,
MSG_ID_GPS_UART_READ_REQ,
MSG_ID_GPS_UART_WRITE_REQ,
MSG_ID_GPS_UART_CLOSE_REQ,
MSG_ID_GPS_UART_NMEA_LOCATION,
MSG_ID_GPS_UART_NMEA_SENTENCE,
MSG_ID_GPS_UART_RAW_DATA,
MSG_ID_GPS_UART_DEBUG_RAW_DATA,
MSG_ID_GPS_UART_P_INFO_IND,
MSG_ID_GPS_UART_OPEN_SWITCH_REQ,
MSG_ID_GPS_UART_CLOSE_SWITCH_REQ,

MSG_ID_GPS_UART_LOG_WRITE_REQ,


MSG_ID_GPS_POS_GAD_CNF,
MSG_ID_GPS_LCSP_MSG_CODE_BEGIN = MSG_ID_GPS_POS_GAD_CNF,
MSG_ID_GPS_LCSP_MEAS_GAD_CNF,
MSG_ID_GPS_LCSP_ASSIST_DATA_CNF,
MSG_ID_GPS_LCSP_MSG_CODE_END = MSG_ID_GPS_LCSP_ASSIST_DATA_CNF,
MSG_ID_GPS_POS_GAD_REQ,
MSG_ID_GPS_LCSP_MEAS_GAD_REQ,
MSG_ID_GPS_LCSP_ASSIST_DATA_REQ,
MSG_ID_GPS_LCSP_ABORT_REQ,

MSG_ID_GPS_ASSIST_BIT_MASK_IND,







 
MSG_ID_RTC_GPS_TIME_CHANGE_IND,
 
MSG_ID_GPS_HOST_WAKE_UP_IND,

MSG_ID_UAGPS_CP_GPS_ASSIST_DATA_ENQUIRY_IND,
MSG_ID_UAGPS_CP_GPS_SFN_GPS_TOW_DRIFT_TIME_REQ,
MSG_ID_UAGPS_CP_GPS_SFN_GPS_TOW_DRIFT_TIME_CNF,
MSG_ID_UAGPS_CP_GPS_SFN_GPS_TOW_DRIFT_TIME_CANCEL_REQ,
MSG_ID_GPS_AREA_EVENT_ADD_RSP,
MSG_ID_GPS_AREA_EVENT_ADD_REQ,
MSG_ID_GPS_AREA_EVENT_DEL_REQ,
MSG_ID_GPS_AREA_EVENT_HAPPEN_IND,
MSG_ID_UAGPS_CP_GPS_POS_CHANGE_EVALUATION_REQ,
MSG_ID_UAGPS_CP_GPS_POS_CHANGE_EVALUATION_RSP,
MSG_ID_UAGPS_CP_GPS_POS_CHANGE_EVALUATION_DEL,

 
MSG_ID_GPS_HOTSTILL_SHUTDOWN_REQ,
MSG_ID_GPS_HOTSTILL_RESUME_REQ,
MSG_ID_GPS_HOTSTILL_DEBUG_ENABLE_REQ,
MSG_ID_GPS_HOTSTILL_DEBUG_DISABLE_REQ,

 
MSG_ID_MMI_GPS_ATE_TEST_REQ,







 
MSG_ID_META_GPS_OP_REQ,    

 
MSG_ID_META_GPS_OP_RSP,
MSG_ID_META_GPS_DATA_IND,
#line 1799 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_GPS_CODE_CHECK_POINT,





 

 
#line 1 "interface\\gps\\mnl_sap.h"

































 
 







 

 












































 
 
MSG_ID_MNL_HOST_WAKE_UP_IND = MSG_ID_MNL_MSG_CODE_BEGIN,
 
MSG_ID_MNL_HOST_OWN,
 
MSG_ID_GPS_MNL_INIT_REQ,
MSG_ID_GPS_MNL_SHUTDOWN_REQ,
 
MSG_ID_GPS_MNL_INIT_RSP,    
MSG_ID_GPS_MNL_SHUTDOWN_RSP,
 
MSG_ID_MNL_BEE_AUTO_GEN_REQ,
#line 1810 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_MNL_CODE_CHECK_POINT,






 

 
#line 1 "interface\\nfc\\nfc_sap.h"

































 
 







 

 





















































 
MSG_ID_NFC_DEFERRED_CALL_REQ = MSG_ID_NFC_MSG_CODE_BEGIN,
MSG_ID_NFC_LIB_INIT,
MSG_ID_NFC_LIB_DEINIT,
MSG_ID_NFC_LIB_INIT_REQ,   
MSG_ID_NFC_LIB_INIT_RSP,   
MSG_ID_NFC_LIB_DEINIT_REQ, 
MSG_ID_NFC_LIB_DEINIT_RSP, 
MSG_ID_NFC_TEST_SUITE_REQ, 
MSG_ID_NFC_TEST_SUITE_MSG, 
MSG_ID_NFC_TEST_REQ,
MSG_ID_NFC_TEST_RSP,
MSG_ID_NFC_LIB_MMI_EVENT_NOTIFY, 

 
MSG_ID_NFC_NTF_INITIAL_REQ,
MSG_ID_NFC_REMOTE_DEV_NTF_REGISTER_REQ, 
MSG_ID_NFC_REMOTE_DEV_NTF_UNREGISTER_REQ,
MSG_ID_NFC_REMOTE_DEV_CONNECT_REQ,
MSG_ID_NFC_REMOTE_DEV_DISCONNECT_REQ,
MSG_ID_NFC_REMOTE_DEV_TRANSCEIVE_REQ,
MSG_ID_NFC_REMOTE_DEV_CHECK_PRESENCE_REQ,
MSG_ID_NFC_NDEF_CHECK_NDEF_REQ,
MSG_ID_NFC_NDEF_WRITE_REQ,
MSG_ID_NFC_NDEF_READ_REQ,
MSG_ID_NFC_MGT_CONFIGURE_DISCOVERY_REQ,
MSG_ID_NFC_SE_NTF_REGISTER_REQ,
MSG_ID_NFC_SE_NTF_UNREGISTER_REQ,
MSG_ID_NFC_SE_GET_SECURE_ELEMENT_LIST_REQ,
MSG_ID_NFC_SE_SET_MODE_REQ,

 
MSG_ID_NFC_NTF_INITIAL_RSP,
MSG_ID_NFC_REMOTE_DEV_NTF_REGISTER_RSP,
MSG_ID_NFC_REMOTE_DEV_NTF_UNREGISTER_RSP,
MSG_ID_NFC_REMOTE_DEV_CONNECT_RSP,
MSG_ID_NFC_REMOTE_DEV_DISCONNECT_RSP,
MSG_ID_NFC_REMOTE_DEV_TRANSCEIVE_RSP,
MSG_ID_NFC_REMOTE_DEV_CHECK_PRESENCE_RSP,
MSG_ID_NFC_NDEF_CHECK_NDEF_RSP,
MSG_ID_NFC_NDEF_WRITE_RSP,
MSG_ID_NFC_NDEF_READ_RSP,
MSG_ID_NFC_MGT_CONFIGURE_DISCOVERY_RSP,
MSG_ID_NFC_SE_NTF_REGISTER_RSP,
MSG_ID_NFC_SE_NTF_UNREGISTER_RSP,
MSG_ID_NFC_SE_GET_SECURE_ELEMENT_LIST_RSP,
MSG_ID_NFC_SE_SET_MODE_RSP,
MSG_ID_NFC_CHECK_OWNER_RSP,


 
MSG_ID_NFC_REMOTE_DEV_NTF_REGISTER_CB_IND,
MSG_ID_NFC_REMOTE_DEV_CONNECT_CB_IND,
MSG_ID_NFC_REMOTE_DEV_DISCONNECT_CB_IND,
MSG_ID_NFC_REMOTE_DEV_TRANSCEIVE_CB_IND,
MSG_ID_NFC_REMOTE_DEV_CHECK_PRESENCE_CB_IND,
MSG_ID_NFC_NDEF_CHECK_NDEF_CB_IND,
MSG_ID_NFC_NDEF_WRITE_CB_IND,
MSG_ID_NFC_NDEF_READ_CB_IND,
MSG_ID_NFC_MGT_CONFIGURE_DISCOVERY_CB_IND,
MSG_ID_NFC_SE_NTF_REGISTER_CB_IND,
MSG_ID_NFC_SE_SET_MODE_CB_IND,  

 
MSG_ID_NFC_DEFERRED_CALL_CB_IND,

 
MSG_ID_NFC_PUSH_INFO_REGISTER,
MSG_ID_NFC_PUSH_REGISTRY_NOTIFICATION,
#line 1822 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_NFC_CODE_CHECK_POINT,






 

 
#line 1 "interface\\nfc\\nfc_reader_sap.h"

































 
 







 

 

































 
MSG_ID_NFC_READER_UART_OPEN_REQ = MSG_ID_NFC_READER_MSG_CODE_BEGIN,
MSG_ID_NFC_READER_UART_READ_REQ,    
MSG_ID_NFC_READER_UART_WRITE_REQ,    
MSG_ID_NFC_READER_UART_CLOSE_REQ,
#line 1834 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_NFC_READER_CODE_CHECK_POINT,






 

 
#line 1 "interface\\nfc\\nfc_app_sap.h"

































 
 







 

 

































 
MSG_ID_NFC_APP_UART_OPEN_REQ = MSG_ID_NFC_APP_MSG_CODE_BEGIN,
MSG_ID_NFC_APP_UART_READ_REQ,    
MSG_ID_NFC_APP_UART_WRITE_REQ,    
MSG_ID_NFC_APP_UART_CLOSE_REQ,
#line 1846 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_NFC_APP_CODE_CHECK_POINT,






 

 
#line 1 "interface\\hal\\camera\\cal_sap.h"

































 
 







 

 































































































 

 
    MSG_ID_CAL_STARTUP_REQ = MSG_ID_CAL_CODE_BEGIN,
    MSG_ID_CAL_STARTUP_CNF,     
    MSG_ID_CAL_ROTATE_IMAGE_REQ,
    MSG_ID_CAL_RESIZE_QUICK_VIEW_AND_THUMBNAIL_IMAGE_REQ,
    MSG_ID_CAL_JAIA_MERGE_REQ,
    MSG_ID_CAL_PP_START_REQ,
    MSG_ID_CAL_WEBCAM_FRAME_READY_REQ,
    MSG_ID_CAL_INFORM_MDP_FRAME_RATE_REQ,
    MSG_ID_CAL_GET_PREVIEW_IMAGE_REQ,
    MSG_ID_CAL_JPEG_SENSOR_PARSE_REQ,
    MSG_ID_CAL_SW_Y2R_DITHERING_REQ,
    MSG_ID_CAL_SW_RESIZER_START_REQ,
    MSG_ID_CAL_VIDEO_RENDERER_REQ,
    MSG_ID_CAL_SW_IMAGE_EFFECT_REQ,
    MSG_ID_CAL_COPY_AND_RESIZE_POSTPROC_IMAGE_REQ,
    MSG_ID_CAL_G2D_REQ,
    MSG_ID_CAL_MAX,

    MSG_ID_CAL_LOW_START,
    MSG_ID_CAL_LOW_SW_JPEG_ENCODE_REQ = MSG_ID_CAL_LOW_START,
    MSG_ID_CAL_LOW_HW_JPEG_ENCODE_REQ,
    MSG_ID_CAL_LOW_JPEG_DECODE_REQ,
    MSG_ID_CAL_LOW_PP_START_REQ,
    MSG_ID_CAL_LOW_PP_START_TIMER_REQ,
    MSG_ID_CAL_LOW_PP_STOP_REQ, 
    MSG_ID_CAL_LOW_GET_AF_RESULT,
    MSG_ID_CAL_LOW_ROTATE_IMAGE_LIST_REQ,
    MSG_ID_CAL_LOW_MAX,
    MSG_ID_CAL_CODE_END = MSG_ID_CAL_LOW_MAX,
 

#line 1858 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_CAL_CODE_CHECK_POINT,



 

 
#line 1 "ps\\interfaces\\sap\\ext_modem_sap.h"

































 
 







 

 
































 
  
   
  MSG_ID_L4C_EXT_MODEM_SETUP_REQ = MSG_ID_EXT_MODEM_CODE_BEGIN,
  MSG_ID_L4C_EXT_MODEM_DISC_REQ,
  MSG_ID_EXT_MODEM_CODE_END = MSG_ID_L4C_EXT_MODEM_DISC_REQ,
   
  
#line 1867 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_EXT_MODEM_CODE_CHECK_POINT,




 

 

#line 1 "interface\\wifi\\wndrv_sap.h"

































 



















































































 


















 




    
 
MSG_ID_WNDRV_TEST_SET_REQ = WNDRV_MSG_CODE_BEGIN,
MSG_ID_WNDRV_TEST_QUERY_REQ,
MSG_ID_WNDRV_SUPC_DATA_REQ,
MSG_ID_WNDRV_SUPC_INIT_REQ,
MSG_ID_WNDRV_SUPC_DEINIT_REQ,
MSG_ID_WNDRV_SUPC_SITE_SURVEY_REQ,
MSG_ID_WNDRV_SUPC_JOIN_NETWORK_REQ,
MSG_ID_WNDRV_SUPC_DISJOIN_NETWORK_REQ,
MSG_ID_WNDRV_SUPC_COUNTRY_SETTING_REQ,
MSG_ID_WNDRV_SUPC_REMOVE_KEY_REQ,
MSG_ID_WNDRV_SUPC_ADD_KEY_REQ,
MSG_ID_WNDRV_SUPC_PMKID_UPDATE_REQ,
MSG_ID_WNDRV_SUPC_AUTH_STATE_UPDATE_REQ,
MSG_ID_WNDRV_SUPC_BLACKLIST_UPDATE_REQ, 
MSG_ID_WNDRV_SUPC_CHIP_POWERON_REQ,
MSG_ID_WNDRV_SUPC_CHIP_POWEROFF_REQ,
MSG_ID_WNDRV_SUPC_QUERY_CAPABILITY_REQ,
MSG_ID_TCPIP_WNDRV_DATA_REQ,
MSG_ID_TCPIP_WNDRV_SETBEARER_REQ,



    
MSG_ID_WNDRV_TEST_SET_CNF,
MSG_ID_WNDRV_TEST_QUERY_CNF,



    
MSG_ID_WNDRV_SCAN_INDICATION,
MSG_ID_WNDRV_STATISTIC_INDICATION,



    
MSG_ID_WNDRV_INTERRUPT_IND,



   
MSG_ID_SOC_WNDRV_DL_SRPDU_RESUME,



   
MSG_ID_WNDRV_MMI_POWEROFF_REQ,
MSG_ID_WNDRV_MMI_POWEROFF_RSP,



 
MSG_ID_WNDRV_ABM_SET_PS_MODE_REQ,
MSG_ID_WNDRV_ABM_SET_PS_MODE_CNF,

MSG_ID_WNDRV_ABM_NET_STATUS_IND,
MSG_ID_WNDRV_ABM_SET_TX_PWR_REQ,
MSG_ID_WNDRV_ABM_SET_TX_PWR_CNF,
MSG_ID_ABM_WNDRV_IPNETWORK_STATUS_IND,

#line 1878 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_WNDRV_CODE_CHECK_POINT,
#line 1885 "config\\include\\hal\\user_msgid_hal.h"
 

 
#line 1 "interface\\wmt\\wmt_sap.h"

































 






















































 


 
 


 
MSG_ID_BT_WMT_CONN_STATUS_UPDATE_IND = MSG_ID_WMT_MSG_CODE_BEGIN,
MSG_ID_BT_WMT_QUERY_RSSI_IND,
MSG_ID_WMT_BT_SET_RX_RANGE_CNF,
MSG_ID_WMT_WNDRV_SET_BWCS_IND,
MSG_ID_WMT_BT_SET_DEFAULT_TX_POWER_CNF,
MSG_ID_WMT_BT_UPDATE_CONN_TX_POWER_CNF,



 
MSG_ID_WMT_BT_SET_BWCS_REQ,
MSG_ID_WMT_BT_QUERY_RSSI_REQ,
MSG_ID_WMT_BT_SET_RX_RANGE_REQ,
MSG_ID_WMT_BT_SET_DEFAULT_TX_POWER_REQ,
MSG_ID_WMT_BT_UPDATE_CONN_TX_POWER_REQ,


 
MSG_ID_WNDRV_WMT_CONN_STATUS_UPDATE_IND,
MSG_ID_WNDRV_WMT_QUERY_RSSI_IND,



 
MSG_ID_WMT_WNDRV_SET_BWCS_REQ,
MSG_ID_WMT_WNDRV_QUERY_RSSI_REQ,
MSG_ID_WMT_WNDRV_SET_ANT_REQ,
MSG_ID_WMT_WNDRV_SET_FLOW_CTRL_REQ,
MSG_ID_WMT_WNDRV_SET_FIXED_RX_GAIN_REQ,
MSG_ID_WMT_WNDRV_SET_OMIT_LOW_RATE_REQ,



 
MSG_ID_FM_WMT_SLEEP_REQ,



 
MSG_ID_FM_WMT_SLEEP_CNF,



 
MSG_ID_BT_WMT_HCI_EVENT_IND,
MSG_ID_WMT_BT_HCI_CMD_CNF,



 
MSG_ID_WMT_BT_HCI_CMD_REQ,



 
MSG_ID_WNDRV_WMT_CM_MODE_UPDATE_IND,

#line 1890 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_WMT_MSG_CODE_CHECK_POINT,



 
 
#line 1 "interface\\inet_ps\\xdm_sap.h"

































 
 







 

 


































 


 
	MSG_ID_XDM_CREATE_SESSION_REQ = XDM_MSG_CODE_BEGIN,
	MSG_ID_XDM_CREATE_SESSION_RSP,
	MSG_ID_XDM_DELETE_SESSION_REQ,
	MSG_ID_XDM_DELETE_SESSION_RSP,
	MSG_ID_XDM_GET_DOC_REQ,
	MSG_ID_XDM_GET_DOC_RSP,
	MSG_ID_XDM_PUT_DOC_REQ,
	MSG_ID_XDM_PUT_DOC_RSP,
	MSG_ID_XDM_DEL_DOC_REQ,
	MSG_ID_XDM_DEL_DOC_RSP,
	MSG_ID_XDM_GET_ELEMENT_REQ,
	MSG_ID_XDM_GET_ELEMENT_RSP,
	MSG_ID_XDM_PUT_ELEMENT_REQ,
	MSG_ID_XDM_PUT_ELEMENT_RSP,
	MSG_ID_XDM_DEL_ELEMENT_REQ,
	MSG_ID_XDM_DEL_ELEMENT_RSP,
	MSG_ID_XDM_GET_ATTR_REQ,
	MSG_ID_XDM_GET_ATTR_RSP,
	MSG_ID_XDM_PUT_ATTR_REQ,
	MSG_ID_XDM_PUT_ATTR_RSP,
	MSG_ID_XDM_DEL_ATTR_REQ,
	MSG_ID_XDM_DEL_ATTR_RSP,
	MSG_ID_XDM_CANCEL_REQUEST_REQ,
	MSG_ID_XDM_CANCEL_REQUEST_RSP,
	MSG_ID_XDM_GET_DIRECTORY_REQ,
	MSG_ID_XDM_GET_DIRECTORY_RSP,

	MSG_ID_XDM_CODE_END = MSG_ID_XDM_GET_DIRECTORY_RSP,
 
#line 1898 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_XDM_CODE_CHECK_POINT,
#line 1907 "config\\include\\hal\\user_msgid_hal.h"
 

 
#line 1 "interface\\wifi\\supc_sap.h"

































 





















































 


















 



    

MSG_ID_SUPC_ABM_WIFI_INIT_REQ = SUPC_MSG_CODE_BEGIN,
MSG_ID_SUPC_ABM_WIFI_DEINIT_REQ,
MSG_ID_SUPC_ABM_WIFI_CONNECT_REQ,
MSG_ID_SUPC_ABM_WIFI_DISCONNECT_REQ,
MSG_ID_SUPC_ABM_WIFI_AP_LIST_REQ,

MSG_ID_SUPC_MMI_WIFI_CURR_AP_INFO_IND,




    

MSG_ID_WNDRV_SUPC_DATA_IND,
MSG_ID_WNDRV_SUPC_INIT_CNF,
MSG_ID_WNDRV_SUPC_DEINIT_CNF,
MSG_ID_WNDRV_SUPC_SITE_SURVEY_IND,
MSG_ID_WNDRV_SUPC_NETWORK_CONNECT_IND,
MSG_ID_WNDRV_SUPC_NETWORK_CONNECT_FAIL_IND,
MSG_ID_WNDRV_SUPC_NETWORK_DISCONNECT_IND,
MSG_ID_WNDRV_SUPC_NETWORK_STATISTICS_IND,
MSG_ID_WNDRV_SUPC_PMKID_CANDIDATE_IND,
MSG_ID_WNDRV_SUPC_STATUS_IND,
MSG_ID_WNDRV_SUPC_QUERY_CAPABILITY_IND,



 
MSG_ID_SUPC_ABM_WIFI_WPS_INFO_IND,

#line 1912 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_SUPC_CODE_CHECK_POINT,
#line 1919 "config\\include\\hal\\user_msgid_hal.h"
 

 
#line 1 "interface\\inet_ps\\saf_sap.h"

































 

 
#line 45 "interface\\inet_ps\\saf_sap.h"
    

   




 
   MSG_ID_APP_SAF_OPEN_CHANNEL_REQ = SAF_MSG_CODE_BEGIN,
   
   




 
   MSG_ID_APP_SAF_ABORT_OPEN_CHANNEL_REQ,
   
   




 
   MSG_ID_APP_SAF_CLOSE_CHANNEL_REQ,
   
   




 
   MSG_ID_APP_SAF_GET_DERIVED_ADDR_REQ,
   
   




 
   MSG_ID_APP_SAF_ABORT_GET_DERIVED_ADDR_REQ,
   
   




 
   MSG_ID_APP_SAF_GET_NAT_TYPE_REQ,
   
   




 
   MSG_ID_APP_SAF_ABORT_GET_NAT_TYPE_REQ,
   
   




 
   MSG_ID_APP_SAF_GET_NAT_BINDING_LIFETIME_REQ,
   
   




 
   MSG_ID_APP_SAF_ABORT_GET_NAT_BINDING_LIFETIME_REQ,
   

       

   




 
   MSG_ID_APP_SAF_OPEN_CHANNEL_CNF,
   
   




 
   MSG_ID_APP_SAF_ABORT_OPEN_CHANNEL_CNF,
   
   




 
   MSG_ID_APP_SAF_CLOSE_CHANNEL_CNF,
   
   




 
   MSG_ID_APP_SAF_GET_DERIVED_ADDR_CNF,
   
   




 
   MSG_ID_APP_SAF_ABORT_GET_DERIVED_ADDR_CNF,
   
   




 
   MSG_ID_APP_SAF_GET_NAT_TYPE_CNF,
   
   




 
   MSG_ID_APP_SAF_ABORT_GET_NAT_TYPE_CNF,
   
   




 
   MSG_ID_APP_SAF_GET_NAT_BINDING_LIFETIME_CNF,
   
   




 
   MSG_ID_APP_SAF_ABORT_GET_NAT_BINDING_LIFETIME_CNF,

   MSG_ID_APP_SAF_CODE_END = MSG_ID_APP_SAF_ABORT_GET_NAT_BINDING_LIFETIME_CNF,
    
 




#line 1924 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_SAF_CODE_CHECK_POINT,
#line 1931 "config\\include\\hal\\user_msgid_hal.h"
 

 


#line 1 "interface\\ps\\sap\\mmi_sap.h"

































 
 







 

 




















































































































































































































































































































































































































































































































































































































































































































































































































































































































 

    
 
	MSG_ID_MMI_L4_CODE_BEGIN = MSG_ID_L4A_CODE_BEGIN,
	MSG_ID_MMI_CC_RESET_ACM_REQ,
	MSG_ID_MOD_CSM_1_BEGIN	=	MSG_ID_MMI_CC_RESET_ACM_REQ,
	MSG_ID_MMI_CC_GET_ACM_REQ,
	MSG_ID_MMI_CC_SET_MAX_ACM_REQ,
	MSG_ID_MMI_CC_GET_MAX_ACM_REQ,
	MSG_ID_MMI_CC_RESET_CCM_REQ,
	MSG_ID_MMI_CC_GET_CCM_REQ,
	MSG_ID_MMI_CC_SET_CUG_REQ,
	MSG_ID_MMI_CC_CHLD_REQ,
	MSG_ID_MMI_CC_ATH_REQ,
	MSG_ID_MMI_CC_GET_CALL_LIST_REQ,
	MSG_ID_MMI_CC_CALL_DEFLECT_REQ,
	MSG_ID_MMI_CC_START_DTMF_REQ,
	MSG_ID_MMI_CC_STOP_DTMF_REQ,
	MSG_ID_MMI_CC_START_AUTO_DTMF_REQ,
	MSG_ID_MMI_CC_ATA_REQ,
	MSG_ID_MMI_CC_DIAL_REQ,
	MSG_ID_MMI_CC_REL_COMP_REQ,
	MSG_ID_MMI_CC_CALL_PRESENT_RES_REQ,
	MSG_ID_MMI_CC_CPI_REQ,
	MSG_ID_MMI_DATA_CALL_RES_REQ,
	MSG_ID_MMI_SS_EMLPP_REQ,
	MSG_ID_MMI_SS_CALL_FORWARD_REQ,
	MSG_ID_MMI_SS_CALL_WAIT_REQ,
	MSG_ID_MMI_SS_CALL_BARRING_REQ,
	MSG_ID_MMI_SS_USSD_REQ,
	MSG_ID_MMI_SS_CHANGE_PASSWORD_REQ,
	MSG_ID_MMI_SS_PARSING_STRING_REQ,
	MSG_ID_MMI_SS_OPERATION_REQ,
	MSG_ID_MMI_SS_CCBS_REQ,
	MSG_ID_MMI_SS_ABORT_REQ,
	MSG_ID_MMI_SS_SET_CLIR_FLAG_REQ,
	MSG_ID_MMI_SS_ACK_REQ,
	MSG_ID_MOD_CSM_1_END	=	MSG_ID_MMI_SS_ACK_REQ,

	MSG_ID_MMI_EQ_SET_VOLUME_REQ,
	MSG_ID_MOD_UEM_2_BEGIN	=	MSG_ID_MMI_EQ_SET_VOLUME_REQ,
	MSG_ID_MMI_EQ_SET_MUTE_REQ,
	MSG_ID_MMI_EQ_SET_GPIO_LEVEL_REQ,
	MSG_ID_MMI_EQ_GET_GPIO_LEVEL_REQ,
	MSG_ID_MMI_EQ_EXE_GPIO_LEVEL_REQ,
	MSG_ID_MMI_EQ_PLAY_AUDIO_REQ,
	MSG_ID_MMI_EQ_STOP_AUDIO_REQ,
	MSG_ID_MMI_EQ_PLAY_EXT_IMELODY_REQ,
	MSG_ID_MMI_EQ_GPIO_DETECT_RES_REQ,
	MSG_ID_MMI_EQ_SET_SPEECH_MODE_REQ,
	MSG_ID_MMI_EQ_PLAY_AUDIO_BY_NAME_REQ,
	MSG_ID_MMI_EQ_STOP_AUDIO_BY_NAME_REQ,
	MSG_ID_MMI_EQ_SET_AUDIO_PROFILE_REQ,
	MSG_ID_MMI_EQ_GET_AUDIO_PROFILE_REQ,
	MSG_ID_MMI_EQ_SET_AUDIO_PARAM_REQ,
	MSG_ID_MMI_EQ_GET_AUDIO_PARAM_REQ,
	MSG_ID_MMI_EQ_START_ADC_ALL_CHANNEL_REQ,
	MSG_ID_MMI_EQ_STOP_ADC_ALL_CHANNEL_REQ,
	MSG_ID_MMI_EQ_SET_AUDIO_MODE_REQ,
	MSG_ID_MMI_EQ_PLAY_PATTERN_REQ,
	MSG_ID_MMI_EQ_SET_HW_LEVEL_REQ,
	MSG_ID_MMI_EQ_GET_HW_LEVEL_REQ,
	MSG_ID_MMI_EQ_SET_SLEEP_MODE_REQ,
	MSG_ID_MMI_EQ_QUERY_HAND_FREE_MODE_RES_REQ,
	MSG_ID_MMI_EQ_SET_CAM_RES_REQ,
	MSG_ID_MMI_EQ_SET_AVR_RES_REQ,
	MSG_ID_MMI_EQ_SET_RTC_TIME_REQ,
	MSG_ID_MMI_EQ_EXE_RTC_TIMER_REQ,
	MSG_ID_MMI_EQ_GET_RTC_TIME_REQ,
	MSG_ID_MMI_EQ_DEL_RTC_TIMER_REQ,
	MSG_ID_MMI_EQ_EXE_DEL_RTC_TIMER_REQ,
	MSG_ID_MMI_EQ_SET_DATE_TIME_FORMAT_REQ,
	MSG_ID_MMI_AT_ALARM_QUERY_RES_REQ,
	MSG_ID_MMI_AT_ALARM_SET_RES_REQ,
	MSG_ID_MMI_AT_ALARM_DELETE_RES_REQ,
	MSG_ID_MMI_AT_CBKLT_QUERY_RES_REQ,
	MSG_ID_MMI_AT_KEYPAD_EVENT_OUTPUT_REQ,
	MSG_ID_MMI_EQ_SET_LANGUAGE_REQ,
	MSG_ID_MMI_EQ_GET_EQUIP_ID_REQ,
	MSG_ID_MMI_EQ_POWER_ON_REQ,
	MSG_ID_MMI_EQ_POWER_OFF_REQ,
	MSG_ID_MMI_EQ_CANCEL_LOCK_POWERON_REQ,
	MSG_ID_MMI_EQ_PMIC_CONFIG_REQ,
	MSG_ID_MMI_EQ_BATTERY_STATUS_RES_REQ,
	MSG_ID_MMI_EQ_RF_TEST_GSM_REQ,
	MSG_ID_MMI_EQ_FM_RADIO_CONFIG_REQ,
	MSG_ID_MMI_EQ_RF_TEST_WIFI_REQ,
	MSG_ID_MMI_EQ_CALL_STATUS_REQ,
	MSG_ID_MMI_EQ_QUERY_CAL_DATA_DL_STATUS_REQ,
	MSG_ID_MOD_UEM_2_END	=	MSG_ID_MMI_EQ_QUERY_CAL_DATA_DL_STATUS_REQ,

	MSG_ID_MMI_EQ_NVRAM_READ_REQ,
	MSG_ID_MOD_NVRAM_3_BEGIN	=	MSG_ID_MMI_EQ_NVRAM_READ_REQ,
	MSG_ID_MMI_EQ_NVRAM_WRITE_REQ,
	MSG_ID_MMI_EQ_NVRAM_RESET_REQ,
	MSG_ID_MMI_EQ_SET_UART_REQ,
	MSG_ID_MMI_EQ_GET_UART_REQ,
	MSG_ID_MMI_ATTACH_UART_PORT_REQ,
	MSG_ID_MMI_DETACH_UART_PORT_REQ,
	MSG_ID_MMI_EQ_DCM_ENABLE_REQ,
	MSG_ID_MOD_NVRAM_3_END	=	MSG_ID_MMI_EQ_DCM_ENABLE_REQ,

	MSG_ID_MMI_NW_GET_IMEI_REQ,
	MSG_ID_MOD_RAC_4_BEGIN	=	MSG_ID_MMI_NW_GET_IMEI_REQ,
	MSG_ID_MMI_NW_ABORT_PLMN_LIST_REQ,
	MSG_ID_MMI_NW_SET_ATTACH_REQ,
	MSG_ID_MMI_NW_SET_PLMN_SELECT_MODE_REQ,
	MSG_ID_MMI_NW_GET_PLMN_SELECT_MODE_REQ,
	MSG_ID_MMI_NW_SET_GPRS_TRANSFER_PREFERENCE_REQ,
	MSG_ID_MMI_NW_GET_GPRS_TRANSFER_PREFERENCE_REQ,
	MSG_ID_MMI_NW_SET_PLMN_REQ,
	MSG_ID_MMI_NW_GET_PLMN_LIST_REQ,
	MSG_ID_MMI_NW_GET_BAND_REQ,
	MSG_ID_MMI_NW_SET_PREFERRED_BAND_REQ,
	MSG_ID_MMI_NW_SET_GPRS_CONNECT_TYPE_REQ,
	MSG_ID_MMI_NW_GET_GPRS_CONNECT_TYPE_REQ,
	MSG_ID_MMI_NW_PWROFF_DETACH_REQ,
	MSG_ID_MMI_NW_CFUN_STATE_REQ,
	MSG_ID_MMI_NW_EFUN_STATE_REQ,
	MSG_ID_MMI_NW_GET_RAT_MODE_REQ,
	MSG_ID_MMI_NW_SET_RAT_MODE_REQ,
	MSG_ID_MMI_NW_GET_PREFER_RAT_REQ,
	MSG_ID_MMI_NW_SET_PREFER_RAT_REQ,
	MSG_ID_MMI_NW_SET_HSPA_MODE_REQ,
	MSG_ID_MMI_NW_GET_HSPA_MODE_REQ,
	MSG_ID_MMI_NW_SET_PLMN_LIST_PREFERENCE_REQ,
	MSG_ID_MMI_NW_GET_PLMN_LIST_PREFERENCE_REQ,
	MSG_ID_MMI_NW_END_PS_DATA_SESSION_REQ,
	MSG_ID_MOD_RAC_4_END	=	MSG_ID_MMI_NW_END_PS_DATA_SESSION_REQ,

	MSG_ID_MMI_SMU_GET_IMSI_REQ,
	MSG_ID_MOD_SMU_5_BEGIN	=	MSG_ID_MMI_SMU_GET_IMSI_REQ,
	MSG_ID_MMI_SMU_LOCK_REQ,
	MSG_ID_MMI_SMU_GET_DIAL_MODE_REQ,
	MSG_ID_MMI_SMU_VERIFY_PIN_REQ,
	MSG_ID_MMI_SMU_SET_PREFERRED_OPER_LIST_REQ,
	MSG_ID_MMI_SMU_GET_PREFERRED_OPER_LIST_REQ,
	MSG_ID_MMI_SMU_SET_PUC_REQ,
	MSG_ID_MMI_SMU_GET_PUC_REQ,
	MSG_ID_MMI_SMU_CHANGE_PASSWORD_REQ,
	MSG_ID_MMI_SMU_SET_DIAL_MODE_REQ,
	MSG_ID_MMI_SMU_WRITE_SIM_REQ,
	MSG_ID_MMI_SMU_READ_SIM_REQ,
	MSG_ID_MMI_SMU_POWER_OFF_REQ,
	MSG_ID_MMI_SIM_GET_GSMCDMA_DUALSIM_INFO_REQ,
	MSG_ID_MMI_SIM_SET_GSMCDMA_DUALSIM_MODE_REQ,
	MSG_ID_MMI_SMU_READ_FILE_INFO_REQ,
	MSG_ID_MMI_SMU_CHECK_PIN_STATUS_REQ,
	MSG_ID_MMI_SMU_SET_PERSONALIZATION_REQ,
	MSG_ID_MMI_SMU_SML_STATUS_REQ,
	MSG_ID_MMI_SMU_READ_SIM_PLMN_REQ,
	MSG_ID_MMI_SMU_WRITE_SIM_PLMN_REQ,
	MSG_ID_MMI_SMU_RESET_SIM_REQ,
	MSG_ID_MMI_SMU_SML_READY_NOTIFY_REQ,
	MSG_ID_MMI_SMU_SEARCH_RECORD_REQ,
	MSG_ID_MOD_SMU_5_END	=	MSG_ID_MMI_SMU_SEARCH_RECORD_REQ,

	MSG_ID_MMI_PHB_GET_ENTRY_BY_INDEX_REQ,
	MSG_ID_MOD_PHB_6_BEGIN	=	MSG_ID_MMI_PHB_GET_ENTRY_BY_INDEX_REQ,
	MSG_ID_MMI_PHB_SET_ENTRY_REQ,
	MSG_ID_MMI_PHB_DEL_ENTRY_REQ,
	MSG_ID_MMI_PHB_GET_LAST_NUMBER_REQ,
	MSG_ID_MMI_PHB_SET_LAST_NUMBER_REQ,
	MSG_ID_MMI_PHB_DEL_LAST_NUMBER_REQ,
	MSG_ID_MMI_PHB_STARTUP_READ_NEXT_REQ,
	MSG_ID_MMI_PHB_GET_TYPE_INFO_REQ,
	MSG_ID_MMI_PHB_APPROVE_REQ,
	MSG_ID_MMI_PHB_FDN_GET_NAME_REQ,
	MSG_ID_MMI_L4C_READ_PHB_RES_REQ,
	MSG_ID_MMI_L4C_WRITE_PHB_RES_REQ,
	MSG_ID_MMI_L4C_DELETE_PHB_RES_REQ,
	MSG_ID_MMI_L4C_PHB_INIT_RES_REQ,
	MSG_ID_MMI_L4C_PHB_UPDATE_STATUS_RES_REQ,
	MSG_ID_MMI_PHB_READ_SIM_LN_REQ,
	MSG_ID_MMI_PHB_WRITE_SIM_LN_REQ,
	MSG_ID_MMI_PHB_DELETE_SIM_LN_REQ,
	MSG_ID_MMI_PHB_GET_LN_TYPE_INFO_REQ,
	MSG_ID_MMI_L4C_READ_CLOG_RES_REQ,
	MSG_ID_MMI_L4C_WRITE_CLOG_RES_REQ,
	MSG_ID_MMI_L4C_DELETE_CLOG_RES_REQ,
	MSG_ID_MMI_L4C_CLOG_UPDATE_STATUS_RES_REQ,
	MSG_ID_MMI_PHB_READ_USIM_REQ,
	MSG_ID_MMI_PHB_WRITE_USIM_REQ,
	MSG_ID_MMI_PHB_DELETE_USIM_REQ,
	MSG_ID_MMI_PHB_CHECK_WRITE_USIM_ENTRY_REQ,
	MSG_ID_MMI_L4C_READ_ADDITIONAL_RES_REQ,
	MSG_ID_MMI_L4C_WRITE_ADDITIONAL_RES_REQ,
	MSG_ID_MMI_L4C_DELETE_ADDITIONAL_RES_REQ,
	MSG_ID_MOD_PHB_6_END	=	MSG_ID_MMI_L4C_DELETE_ADDITIONAL_RES_REQ,

	MSG_ID_MMI_SMS_SET_PROFILE_PARAMS_REQ,
	MSG_ID_MOD_SMSAL_7_BEGIN	=	MSG_ID_MMI_SMS_SET_PROFILE_PARAMS_REQ,
	MSG_ID_MMI_SMS_GET_PROFILE_PARAMS_REQ,
	MSG_ID_MMI_SMS_SET_COMMON_PARAMS_REQ,
	MSG_ID_MMI_SMS_GET_COMMON_PARAMS_REQ,
	MSG_ID_MMI_SMS_SEND_COMMAND_REQ,
	MSG_ID_MMI_SMS_DEL_MSG_REQ,
	MSG_ID_MMI_SMS_GET_MSG_REQ,
	MSG_ID_MMI_SMS_SEND_MSG_REQ,
	MSG_ID_MMI_SMS_SET_MSG_REQ,
	MSG_ID_MMI_SMS_SET_PREFERRED_STORAGE_REQ,
	MSG_ID_MMI_SMS_GET_PREFERRED_STORAGE_REQ,
	MSG_ID_MMI_SMS_REG_PORT_NUM_REQ,
	MSG_ID_MMI_SMS_GET_MSG_NUM_REQ,
	MSG_ID_MMI_SMS_GET_PROFILE_NUM_REQ,
	MSG_ID_MMI_SMS_ABORT_REQ,
	MSG_ID_MMI_SMS_SET_MAILBOX_ADDRESS_REQ,
	MSG_ID_MMI_SMS_GET_MAILBOX_ADDRESS_REQ,
	MSG_ID_MMI_SMS_SET_MBI_REQ,
	MSG_ID_MMI_SMS_GET_MBI_REQ,
	MSG_ID_MMI_SMS_SET_MSP_REQ,
	MSG_ID_MMI_SMS_GET_MSP_REQ,
	MSG_ID_MMI_SMS_SYNC_MSG_RES_REQ,
	MSG_ID_MMI_SMS_STARTUP_READ_NEXT_REQ,
	MSG_ID_MMI_SMS_COPY_MSG_REQ,
	MSG_ID_MMI_SMS_GET_MSG_LIST_REQ,
	MSG_ID_MMI_SMS_SEND_FROM_STORAGE_REQ,
	MSG_ID_MMI_SMS_SET_STATUS_REQ,
	MSG_ID_MMI_SMS_SEND_SMMA_REQ,
	MSG_ID_MMI_SMS_SET_MSG_WAITING_REQ,
	MSG_ID_MMI_SMS_READ_RAW_DATA_REQ,
	MSG_ID_MMI_SMS_WRITE_RAW_DATA_REQ,
	MSG_ID_MMI_USM_GENERAL_RCODE_REQ,
	MSG_ID_MMI_SMS_SEND_PDU_MSG_REQ,
	MSG_ID_MMI_SMS_SYNC_MSG_STORAGE_REQ,
	MSG_ID_MMI_SMS_SEND_DELIVER_REPORT_REQ,
	MSG_ID_MMI_SMS_STARTUP_READ_RES_REQ,
	MSG_ID_MMI_SMS_GET_MEM_STATUS_RES_REQ,
	MSG_ID_MMI_SMS_MEM_STATUS_REQ,
	MSG_ID_MMI_SMS_ATCMD_CMGR_RES_REQ,
	MSG_ID_MMI_SMS_ATCMD_CMGL_RES_REQ,
	MSG_ID_MMI_SMS_ATCMD_CMGD_RES_REQ,
	MSG_ID_MMI_SMS_ATCMD_CMGW_RES_REQ,
	MSG_ID_MMI_SMS_ATCMD_EQSI_RES_REQ,
	MSG_ID_MMI_SMS_ETWS_SETTING_REQ,
	MSG_ID_MOD_SMSAL_7_END	=	MSG_ID_MMI_SMS_ETWS_SETTING_REQ,

	MSG_ID_MMI_PS_ACT_TEST_REQ,
	MSG_ID_MOD_TCM_8_BEGIN	=	MSG_ID_MMI_PS_ACT_TEST_REQ,
	MSG_ID_MMI_PS_SET_DEFINITION_REQ,
	MSG_ID_MMI_PS_SET_SEC_DEFINITION_REQ,
	MSG_ID_MMI_PS_SET_TFT_REQ,
	MSG_ID_MMI_PS_GET_TFT_REQ,
	MSG_ID_MMI_PS_SET_QOS_REQ,
	MSG_ID_MMI_PS_SET_EQOS_REQ,
	MSG_ID_MMI_PS_SEND_DATA_REQ,
	MSG_ID_MMI_PS_GET_GPRS_EMPTY_PROFILE_REQ,
	MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ,
	MSG_ID_MMI_PS_SET_GPRS_DATA_ACCOUNT_REQ,
	MSG_ID_MMI_PS_GET_GPRS_DATA_ACCOUNT_REQ,
	MSG_ID_MMI_PS_RESET_GPRS_DATA_COUNTER_REQ,
	MSG_ID_MMI_PS_GET_ACL_MODE_REQ,
	MSG_ID_MMI_PS_SET_ACL_MODE_REQ,
	MSG_ID_MMI_PS_GET_ACL_ENTRIES_REQ,
	MSG_ID_MMI_PS_ADD_ACL_ENTRY_REQ,
	MSG_ID_MMI_PS_SET_ACL_ENTRY_REQ,
	MSG_ID_MMI_PS_DEL_ACL_ENTRY_REQ,
	MSG_ID_MMI_PS_LEAVE_ACL_MENU_REQ,
	MSG_ID_MOD_TCM_8_END	=	MSG_ID_MMI_PS_LEAVE_ACL_MENU_REQ,

	MSG_ID_MMI_SAT_DISPLAY_TEXT_RES_REQ,
	MSG_ID_SAT_9_BEGIN	=	MSG_ID_MMI_SAT_DISPLAY_TEXT_RES_REQ,
	MSG_ID_MMI_SAT_GET_INKEY_RES_REQ,
	MSG_ID_MMI_SAT_GET_INPUT_RES_REQ,
	MSG_ID_MMI_SAT_SETUP_MENU_RES_REQ,
	MSG_ID_MMI_SAT_SELECT_ITEM_RES_REQ,
	MSG_ID_MMI_SAT_PLAY_TONE_RES_REQ,
	MSG_ID_MMI_SAT_MENU_SELECT_REQ,
	MSG_ID_MMI_SAT_EVDL_IDLE_SCREEN_AVAILABLE_REQ,
	MSG_ID_MMI_SAT_LANGUAGE_SELECTION_REQ,
	MSG_ID_MMI_SAT_EVDL_BROWSER_TERMINATION_REQ,
	MSG_ID_MMI_SAT_CALL_SETUP_STAGE1_REQ,
	MSG_ID_MMI_SAT_CALL_SETUP_STAGE2_REQ,
	MSG_ID_MMI_SAT_SEND_SMS_STAGE1_REQ,
	MSG_ID_MMI_SAT_SEND_SMS_STAGE2_REQ,
	MSG_ID_MMI_SAT_SEND_SS_STAGE1_REQ,
	MSG_ID_MMI_SAT_SEND_SS_STAGE2_REQ,
	MSG_ID_MMI_SAT_SEND_USSD_STAGE1_REQ,
	MSG_ID_MMI_SAT_SEND_USSD_STAGE2_REQ,
	MSG_ID_MMI_SAT_SETUP_IDLE_DISPLAY_RES_REQ,
	MSG_ID_MMI_SAT_SEND_DTMF_STAGE1_REQ,
	MSG_ID_MMI_SAT_SEND_DTMF_STAGE2_REQ,
	MSG_ID_MMI_SAT_ABORT_DTMF_REQ,
	MSG_ID_MMI_SAT_LANG_NOTIFY_RES_REQ,
	MSG_ID_MMI_SAT_LAUNCH_BROWSER_RES_REQ,
	MSG_ID_MMI_SAT_PROVIDE_LANG_INFO_REQ,
	MSG_ID_MMI_SAT_FILE_CHANGE_RES_REQ,
	MSG_ID_SAT_9_END	=	MSG_ID_MMI_SAT_FILE_CHANGE_RES_REQ,

	MSG_ID_MMI_SAT_OPEN_CHANNEL_REQ,
	MSG_ID_SATCE_10_BEGIN	=	MSG_ID_MMI_SAT_OPEN_CHANNEL_REQ,
	MSG_ID_MMI_SAT_CLOSE_CHANNEL_REQ,
	MSG_ID_MMI_SAT_SEND_DATA_REQ,
	MSG_ID_MMI_SAT_RECV_DATA_REQ,
	MSG_ID_MMI_RSAT_EVDL_DATA_AVAILABLE_REQ,
	MSG_ID_MMI_RSAT_EVDL_CHANNEL_STATUS_REQ,
	MSG_ID_MMI_RSAT_OPEN_GPRS_CHANNEL_RES_REQ,
	MSG_ID_MMI_RSAT_OPEN_CSD_CHANNEL_RES_REQ,
	MSG_ID_MMI_RSAT_OPEN_SERVER_MODE_CHANNEL_RES_REQ,
	MSG_ID_MMI_RSAT_CLOSE_CHANNEL_RES_REQ,
	MSG_ID_MMI_RSAT_SEND_DATA_RES_REQ,
	MSG_ID_MMI_RSAT_RECV_DATA_RES_REQ,
	MSG_ID_MMI_RSAT_CH_STATUS_RES_REQ,
	MSG_ID_SATCE_10_END	=	MSG_ID_MMI_RSAT_CH_STATUS_RES_REQ,

	MSG_ID_MMI_CB_SUBSCRIBE_REQ,
	MSG_ID_MMI_SMS_SET_CB_MODE_REQ,
	MSG_ID_MMI_SMS_GET_CB_MODE_REQ,
	MSG_ID_MMI_EM_UPDATE_REQ,
	MSG_ID_EM_MODE_11_BEGIN	=	MSG_ID_MMI_EM_UPDATE_REQ,
	MSG_ID_MMI_VT_EM_GET_CONFIG_REQ,
	MSG_ID_MMI_VT_EM_SET_CONFIG_REQ,
	MSG_ID_EM_MODE_11_END	=	MSG_ID_MMI_VT_EM_SET_CONFIG_REQ,

	MSG_ID_MMI_EM_KEYPAD_EVENT_OUTPUT_REQ,
	MSG_ID_MMI_EM_CELL_RESEL_SUSPEND_REQ,
	MSG_ID_MMI_EM_CELL_RESEL_RESUME_REQ,
	MSG_ID_MMI_EM_GET_CELL_LOCK_REQ,
	MSG_ID_MMI_EM_SET_CELL_LOCK_REQ,
	MSG_ID_MMI_EM_NW_EVENT_NOTIFY_REQ,
	MSG_ID_MMI_EM_FEATURE_COMMAND_REQ,
	MSG_ID_MMI_EM_GET_CONFORM_TEST_PARAM_REQ,
	MSG_ID_MMI_EM_SET_CONFORM_TEST_PARAM_REQ,
	MSG_ID_MMI_EM_QUICK_TEST_REPORT_RES_REQ,
	MSG_ID_MMI_EM_SET_ESSP_REQ,
	MSG_ID_MMI_EM_GET_ESSP_REQ,
	MSG_ID_MMI_CPHS_UPDATE_ALS_REQ,
	MSG_ID_MMI_EQ_IRDA_OPEN_REQ,
	MSG_ID_IRDA_SUPPORT_12_BEGIN	=	MSG_ID_MMI_EQ_IRDA_OPEN_REQ,
	MSG_ID_MMI_EQ_IRDA_CLOSE_REQ,
	MSG_ID_IRDA_SUPPORT_12_END	=	MSG_ID_MMI_EQ_IRDA_CLOSE_REQ,

	MSG_ID_MMI_EQ_USBCONFIG_REQ,
	MSG_ID_USB_ENABLE_13_BEGIN	=	MSG_ID_MMI_EQ_USBCONFIG_REQ,
	MSG_ID_MMI_EQ_USBUART_SWITCH_PORT_REQ,
	MSG_ID_MMI_EQ_USBDETECT_RES_REQ,
	MSG_ID_USB_ENABLE_13_END	=	MSG_ID_MMI_EQ_USBDETECT_RES_REQ,

	MSG_ID_WAP_MMC_READ_FOLDER_STATUS_OUTPUT_REQ,
	MSG_ID_WAP_MMC_UPLOAD_MSG_OUTPUT_REQ,
	MSG_ID_WAP_MMC_DELETE_MSG_OUTPUT_REQ,
	MSG_ID_WAP_MMC_READ_MSG_PATH_RES_REQ,
	MSG_ID_MMI_EQ_QUERY_GREETING_TEXT_RES_REQ,
	MSG_ID_MMI_EQ_QUERY_LANGUAGE_RES_REQ,
	MSG_ID_MMI_EQ_QUERY_SILENT_MODE_RES_REQ,
	MSG_ID_MMI_EQ_QUERY_VIBRATOR_MODE_RES_REQ,
	MSG_ID_MMI_EQ_QUERY_DATE_TIME_FORMAT_RES_REQ,
	MSG_ID_MMI_EQ_QUERY_MUTE_MODE_RES_REQ,
	MSG_ID_MMI_READY_NOTIFY_REQ,
	MSG_ID_MMI_AT_GENERAL_RES_REQ,
	MSG_ID_MMI_EQ_VCARD_RES_REQ,
	MSG_ID_MMI_EQ_VCALENDAR_RES_REQ,
	MSG_ID_MMI_EQ_STR_RES_REQ,
	MSG_ID_MMI_UCM_AT_RES_REQ,
	MSG_ID_MMI_UCM_GENERAL_RCODE_REQ,
	MSG_ID_MMI_UCM_HF_CIEV_RCODE_REQ,
	MSG_ID_MMI_EQ_RINGTONE_PLAY_RES_REQ,
	MSG_ID_MMI_JAVA_LOCAL_INSTALL_RES_REQ,
	MSG_ID_MMI_L4_BT_SET_VR_REQ,
	MSG_ID_BT_SUPPORT_14_BEGIN	=	MSG_ID_MMI_L4_BT_SET_VR_REQ,
	MSG_ID_BT_SUPPORT_14_END	=	MSG_ID_MMI_L4_BT_SET_VR_REQ,

	MSG_ID_HOMEZONE_SUPPORT_15_BEGIN	=	MSG_ID_MMI_L4_BT_SET_VR_REQ,
	MSG_ID_HOMEZONE_SUPPORT_15_END	=	MSG_ID_MMI_L4_BT_SET_VR_REQ,

	MSG_ID_MMI_CTM_SET_STATUS_REQ,
	MSG_ID_CTM_SUPPORT_16_BEGIN	=	MSG_ID_MMI_CTM_SET_STATUS_REQ,
	MSG_ID_CTM_SUPPORT_16_END	=	MSG_ID_MMI_CTM_SET_STATUS_REQ,

	MSG_ID_MMI_VOIP_AT_CALL_CTRL_APPROVE_RES_REQ,
	MSG_ID_VOIP_17_BEGIN	=	MSG_ID_MMI_VOIP_AT_CALL_CTRL_APPROVE_RES_REQ,
	MSG_ID_VOIP_17_END	=	MSG_ID_MMI_VOIP_AT_CALL_CTRL_APPROVE_RES_REQ,

	MSG_ID_MMI_SMU_SIM_STATUS_UPDATE_REQ,
	MSG_ID_GEMINI_18_BEGIN	=	MSG_ID_MMI_SMU_SIM_STATUS_UPDATE_REQ,
	MSG_ID_MMI_SMU_DUAL_SIM_TO_FLIGHT_MODE_REQ,
	MSG_ID_MMI_NW_SIM_MODE_SWITCH_START_REQ,
	MSG_ID_MMI_NW_SIM_MODE_SWITCH_STOP_REQ,
	MSG_ID_MMI_NW_SET_MONITOR_PEER_PCH_REQ,
	MSG_ID_MMI_NW_GET_MONITOR_PEER_PCH_REQ,
	MSG_ID_MMI_L4C_SET_SIM_CAPABILITY_REQ,
	MSG_ID_MMI_L4C_GET_SIM_CAPABILITY_REQ,
	MSG_ID_GEMINI_18_END	=	MSG_ID_MMI_L4C_GET_SIM_CAPABILITY_REQ,

	MSG_ID_MMI_SS_MTLR_BEGIN_RES_REQ,
	MSG_ID_AGPS_CONTROL_PLANE_19_BEGIN	=	MSG_ID_MMI_SS_MTLR_BEGIN_RES_REQ,
	MSG_ID_MMI_SS_AERQ_BEGIN_RES_REQ,
	MSG_ID_MMI_SS_AERP_BEGIN_REQ,
	MSG_ID_MMI_SS_AERP_END_REQ,
	MSG_ID_MMI_SS_AECL_BEGIN_RES_REQ,
	MSG_ID_MMI_SS_MOLR_BEGIN_REQ,
	MSG_ID_MMI_SS_MOLR_END_REQ,
	MSG_ID_MMI_AGPS_ENABLE_DISABLE_REQ,
	MSG_ID_MMI_AGPS_KEY_UPDATE_REQ,
	MSG_ID_MMI_AGPS_CP_ABORT_REQ,
	MSG_ID_AGPS_CONTROL_PLANE_19_END	=	MSG_ID_MMI_AGPS_CP_ABORT_REQ,

	MSG_ID_MMI_EQ_RAM_USAGE_RES_REQ,
	MSG_ID_MMI_EQ_LAUNCH_APP_RES_REQ,
	MSG_ID_MMI_EQ_APP_INFO_OUTPUT_RES_REQ,
	MSG_ID_MMI_EQ_SCREEN_TOUCH_RES_REQ,
	MSG_ID_MMI_EQ_SCRNORIENT_RES_REQ,
	MSG_ID_MMI_EQ_SCRNSIZE_QUERY_RES_REQ,
	MSG_ID_MMI_EQ_SCRNTCH_EVENT_OUTPUT_REQ,
	MSG_ID_MMI_EQ_SCREEN_SHOT_RES_REQ,
	MSG_ID_MMI_EQ_UART_TRANSFER_REQ,
	MSG_ID_MMI_EQ_UART_RELEASE_REQ,
	MSG_ID_MMI_EQ_PLAY_AUDIO_STREAM_REQ,
	MSG_ID_MMI_EQ_STOP_AUDIO_STREAM_REQ,
	MSG_ID_MMI_EQ_LCD_SET_CONTRAST_REQ,
	MSG_ID_MMI_EQ_SET_SILENT_MODE_REQ,
	MSG_ID_NONE_USED_L4MMI_MESSAGE_20_BEGIN	=	MSG_ID_MMI_EQ_SET_SILENT_MODE_REQ,
	MSG_ID_MMI_EQ_GET_MS_IMEI_REQ,
	MSG_ID_MMI_EQ_SET_MS_IMEI_REQ,
	MSG_ID_MMI_EQ_RTC_POWERON_STATE_REQ,
	MSG_ID_MMI_EQ_START_TIMER_REQ,
	MSG_ID_MMI_EQ_STOP_TIMER_REQ,
	MSG_ID_MMI_EQ_SIMULATE_KEY_PRESS_REQ,
	MSG_ID_MMI_EQ_SET_INDICATOR_REQ,
	MSG_ID_MMI_EQ_GET_INDICATOR_REQ,
	MSG_ID_MMI_EQ_DISPLAY_TEXT_REQ,
	MSG_ID_MMI_EQ_SET_GREETING_TEXT_REQ,
	MSG_ID_MMI_EQ_SET_VIBRATOR_MODE_REQ,
	MSG_ID_MMI_EQ_SET_COUNTRY_CODE_REQ,
	MSG_ID_MMI_EQ_GET_COUNTRY_CODE_REQ,
	MSG_ID_MMI_EQ_GET_BATTERY_STATUS_REQ,
	MSG_ID_MMI_EQ_LOAD_DEFAULT_CONFIG_REQ,
	MSG_ID_MMI_EM_SET_CELL_ID_LOCK_REQ,
	MSG_ID_MMI_UPDATE_MMI_DEFAULT_PROF_VALUE_REQ,
	MSG_ID_MMI_VM_PLAY_REQ,
	MSG_ID_MMI_VM_DEL_REQ,
	MSG_ID_MMI_VM_APPEND_REQ,
	MSG_ID_MMI_VM_RENAME_REQ,
	MSG_ID_MMI_VM_GET_INFO_REQ,
	MSG_ID_MMI_VM_STOP_REQ,
	MSG_ID_MMI_VM_ABORT_REQ,
	MSG_ID_MMI_VM_PAUSE_REQ,
	MSG_ID_MMI_VM_RESUME_REQ,
	MSG_ID_MMI_VM_RECORD_REQ,
	MSG_ID_WAP_START_DTMF_REQ,
	MSG_ID_WAP_STOP_DTMF_REQ,
	MSG_ID_WAP_DIAL_REQ,
	MSG_ID_WAP_SET_ENTRY_REQ,
	MSG_ID_NONE_USED_L4MMI_MESSAGE_20_END	=	MSG_ID_WAP_SET_ENTRY_REQ,
	MSG_ID_L4A_REQ_CODE_END = MSG_ID_WAP_SET_ENTRY_REQ,

	MSG_ID_MMI_CC_RESET_ACM_RSP,
	MSG_ID_MMI_CC_GET_ACM_RSP,
	MSG_ID_MMI_CC_SET_MAX_ACM_RSP,
	MSG_ID_MMI_CC_GET_MAX_ACM_RSP,
	MSG_ID_MMI_CC_RESET_CCM_RSP,
	MSG_ID_MMI_CC_GET_CCM_RSP,
	MSG_ID_MMI_CC_SET_CUG_RSP,
	MSG_ID_MMI_CC_CHLD_RSP,
	MSG_ID_MMI_CC_ATH_RSP,
	MSG_ID_MMI_CC_GET_CALL_LIST_RSP,
	MSG_ID_MMI_CC_CALL_DEFLECT_RSP,
	MSG_ID_MMI_CC_START_DTMF_RSP,
	MSG_ID_MMI_CC_STOP_DTMF_RSP,
	MSG_ID_MMI_CC_START_AUTO_DTMF_RSP,
	MSG_ID_MMI_CC_ATA_RSP,
	MSG_ID_MMI_CC_DIAL_RSP,
	MSG_ID_MMI_CC_REL_COMP_RSP,
	MSG_ID_MMI_CC_CALL_PRESENT_RES_RSP,
	MSG_ID_MMI_CC_CPI_RSP,
	MSG_ID_MMI_DATA_CALL_RES_RSP,
	MSG_ID_MMI_SS_EMLPP_RSP,
	MSG_ID_MMI_SS_CALL_FORWARD_RSP,
	MSG_ID_MMI_SS_CALL_WAIT_RSP,
	MSG_ID_MMI_SS_CALL_BARRING_RSP,
	MSG_ID_MMI_SS_USSD_RSP,
	MSG_ID_MMI_SS_CHANGE_PASSWORD_RSP,
	MSG_ID_MMI_SS_PARSING_STRING_RSP,
	MSG_ID_MMI_SS_OPERATION_RSP,
	MSG_ID_MMI_SS_CCBS_RSP,
	MSG_ID_MMI_SS_ABORT_RSP,
	MSG_ID_MMI_SS_SET_CLIR_FLAG_RSP,
	MSG_ID_MMI_SS_ACK_RSP,
	MSG_ID_MMI_EQ_SET_VOLUME_RSP,
	MSG_ID_MMI_EQ_SET_MUTE_RSP,
	MSG_ID_MMI_EQ_SET_GPIO_LEVEL_RSP,
	MSG_ID_MMI_EQ_GET_GPIO_LEVEL_RSP,
	MSG_ID_MMI_EQ_EXE_GPIO_LEVEL_RSP,
	MSG_ID_MMI_EQ_PLAY_AUDIO_RSP,
	MSG_ID_MMI_EQ_STOP_AUDIO_RSP,
	MSG_ID_MMI_EQ_PLAY_EXT_IMELODY_RSP,
	MSG_ID_MMI_EQ_GPIO_DETECT_RES_RSP,
	MSG_ID_MMI_EQ_SET_SPEECH_MODE_RSP,
	MSG_ID_MMI_EQ_PLAY_AUDIO_BY_NAME_RSP,
	MSG_ID_MMI_EQ_STOP_AUDIO_BY_NAME_RSP,
	MSG_ID_MMI_EQ_SET_AUDIO_PROFILE_RSP,
	MSG_ID_MMI_EQ_GET_AUDIO_PROFILE_RSP,
	MSG_ID_MMI_EQ_SET_AUDIO_PARAM_RSP,
	MSG_ID_MMI_EQ_GET_AUDIO_PARAM_RSP,
	MSG_ID_MMI_EQ_START_ADC_ALL_CHANNEL_RSP,
	MSG_ID_MMI_EQ_STOP_ADC_ALL_CHANNEL_RSP,
	MSG_ID_MMI_EQ_SET_AUDIO_MODE_RSP,
	MSG_ID_MMI_EQ_PLAY_PATTERN_RSP,
	MSG_ID_MMI_EQ_SET_HW_LEVEL_RSP,
	MSG_ID_MMI_EQ_GET_HW_LEVEL_RSP,
	MSG_ID_MMI_EQ_SET_SLEEP_MODE_RSP,
	MSG_ID_MMI_EQ_QUERY_HAND_FREE_MODE_RES_RSP,
	MSG_ID_MMI_EQ_SET_CAM_RES_RSP,
	MSG_ID_MMI_EQ_SET_AVR_RES_RSP,
	MSG_ID_MMI_EQ_SET_RTC_TIME_RSP,
	MSG_ID_MMI_EQ_EXE_RTC_TIMER_RSP,
	MSG_ID_MMI_EQ_GET_RTC_TIME_RSP,
	MSG_ID_MMI_EQ_DEL_RTC_TIMER_RSP,
	MSG_ID_MMI_EQ_EXE_DEL_RTC_TIMER_RSP,
	MSG_ID_MMI_EQ_SET_DATE_TIME_FORMAT_RSP,
	MSG_ID_MMI_AT_ALARM_QUERY_RES_RSP,
	MSG_ID_MMI_AT_ALARM_SET_RES_RSP,
	MSG_ID_MMI_AT_ALARM_DELETE_RES_RSP,
	MSG_ID_MMI_AT_CBKLT_QUERY_RES_RSP,
	MSG_ID_MMI_AT_KEYPAD_EVENT_OUTPUT_RSP,
	MSG_ID_MMI_EQ_SET_LANGUAGE_RSP,
	MSG_ID_MMI_EQ_GET_EQUIP_ID_RSP,
	MSG_ID_MMI_EQ_POWER_ON_RSP,
	MSG_ID_MMI_EQ_POWER_OFF_RSP,
	MSG_ID_MMI_EQ_CANCEL_LOCK_POWERON_RSP,
	MSG_ID_MMI_EQ_PMIC_CONFIG_RSP,
	MSG_ID_MMI_EQ_BATTERY_STATUS_RES_RSP,
	MSG_ID_MMI_EQ_RF_TEST_GSM_RSP,
	MSG_ID_MMI_EQ_FM_RADIO_CONFIG_RSP,
	MSG_ID_MMI_EQ_RF_TEST_WIFI_RSP,
	MSG_ID_MMI_EQ_CALL_STATUS_RSP,
	MSG_ID_MMI_EQ_QUERY_CAL_DATA_DL_STATUS_RSP,
	MSG_ID_MMI_EQ_NVRAM_READ_RSP,
	MSG_ID_MMI_EQ_NVRAM_WRITE_RSP,
	MSG_ID_MMI_EQ_NVRAM_RESET_RSP,
	MSG_ID_MMI_EQ_SET_UART_RSP,
	MSG_ID_MMI_EQ_GET_UART_RSP,
	MSG_ID_MMI_ATTACH_UART_PORT_RSP,
	MSG_ID_MMI_DETACH_UART_PORT_RSP,
	MSG_ID_MMI_EQ_DCM_ENABLE_RSP,
	MSG_ID_MMI_NW_GET_IMEI_RSP,
	MSG_ID_MMI_NW_ABORT_PLMN_LIST_RSP,
	MSG_ID_MMI_NW_SET_ATTACH_RSP,
	MSG_ID_MMI_NW_SET_PLMN_SELECT_MODE_RSP,
	MSG_ID_MMI_NW_GET_PLMN_SELECT_MODE_RSP,
	MSG_ID_MMI_NW_SET_GPRS_TRANSFER_PREFERENCE_RSP,
	MSG_ID_MMI_NW_GET_GPRS_TRANSFER_PREFERENCE_RSP,
	MSG_ID_MMI_NW_SET_PLMN_RSP,
	MSG_ID_MMI_NW_GET_PLMN_LIST_RSP,
	MSG_ID_MMI_NW_GET_BAND_RSP,
	MSG_ID_MMI_NW_SET_PREFERRED_BAND_RSP,
	MSG_ID_MMI_NW_SET_GPRS_CONNECT_TYPE_RSP,
	MSG_ID_MMI_NW_GET_GPRS_CONNECT_TYPE_RSP,
	MSG_ID_MMI_NW_PWROFF_DETACH_RSP,
	MSG_ID_MMI_NW_CFUN_STATE_RSP,
	MSG_ID_MMI_NW_EFUN_STATE_RSP,
	MSG_ID_MMI_NW_GET_RAT_MODE_RSP,
	MSG_ID_MMI_NW_SET_RAT_MODE_RSP,
	MSG_ID_MMI_NW_GET_PREFER_RAT_RSP,
	MSG_ID_MMI_NW_SET_PREFER_RAT_RSP,
	MSG_ID_MMI_NW_SET_HSPA_MODE_RSP,
	MSG_ID_MMI_NW_GET_HSPA_MODE_RSP,
	MSG_ID_MMI_NW_SET_PLMN_LIST_PREFERENCE_RSP,
	MSG_ID_MMI_NW_GET_PLMN_LIST_PREFERENCE_RSP,
	MSG_ID_MMI_NW_END_PS_DATA_SESSION_RSP,
	MSG_ID_MMI_SMU_GET_IMSI_RSP,
	MSG_ID_MMI_SMU_LOCK_RSP,
	MSG_ID_MMI_SMU_GET_DIAL_MODE_RSP,
	MSG_ID_MMI_SMU_VERIFY_PIN_RSP,
	MSG_ID_MMI_SMU_SET_PREFERRED_OPER_LIST_RSP,
	MSG_ID_MMI_SMU_GET_PREFERRED_OPER_LIST_RSP,
	MSG_ID_MMI_SMU_SET_PUC_RSP,
	MSG_ID_MMI_SMU_GET_PUC_RSP,
	MSG_ID_MMI_SMU_CHANGE_PASSWORD_RSP,
	MSG_ID_MMI_SMU_SET_DIAL_MODE_RSP,
	MSG_ID_MMI_SMU_WRITE_SIM_RSP,
	MSG_ID_MMI_SMU_READ_SIM_RSP,
	MSG_ID_MMI_SMU_POWER_OFF_RSP,
	MSG_ID_MMI_SIM_GET_GSMCDMA_DUALSIM_INFO_RSP,
	MSG_ID_MMI_SIM_SET_GSMCDMA_DUALSIM_MODE_RSP,
	MSG_ID_MMI_SMU_READ_FILE_INFO_RSP,
	MSG_ID_MMI_SMU_CHECK_PIN_STATUS_RSP,
	MSG_ID_MMI_SMU_SET_PERSONALIZATION_RSP,
	MSG_ID_MMI_SMU_SML_STATUS_RSP,
	MSG_ID_MMI_SMU_READ_SIM_PLMN_RSP,
	MSG_ID_MMI_SMU_WRITE_SIM_PLMN_RSP,
	MSG_ID_MMI_SMU_RESET_SIM_RSP,
	MSG_ID_MMI_SMU_SML_READY_NOTIFY_RSP,
	MSG_ID_MMI_SMU_SEARCH_RECORD_RSP,
	MSG_ID_MMI_PHB_GET_ENTRY_BY_INDEX_RSP,
	MSG_ID_MMI_PHB_SET_ENTRY_RSP,
	MSG_ID_MMI_PHB_DEL_ENTRY_RSP,
	MSG_ID_MMI_PHB_GET_LAST_NUMBER_RSP,
	MSG_ID_MMI_PHB_SET_LAST_NUMBER_RSP,
	MSG_ID_MMI_PHB_DEL_LAST_NUMBER_RSP,
	MSG_ID_MMI_PHB_STARTUP_READ_NEXT_RSP,
	MSG_ID_MMI_PHB_GET_TYPE_INFO_RSP,
	MSG_ID_MMI_PHB_APPROVE_RSP,
	MSG_ID_MMI_PHB_FDN_GET_NAME_RSP,
	MSG_ID_MMI_L4C_READ_PHB_RES_RSP,
	MSG_ID_MMI_L4C_WRITE_PHB_RES_RSP,
	MSG_ID_MMI_L4C_DELETE_PHB_RES_RSP,
	MSG_ID_MMI_L4C_PHB_INIT_RES_RSP,
	MSG_ID_MMI_L4C_PHB_UPDATE_STATUS_RES_RSP,
	MSG_ID_MMI_PHB_READ_SIM_LN_RSP,
	MSG_ID_MMI_PHB_WRITE_SIM_LN_RSP,
	MSG_ID_MMI_PHB_DELETE_SIM_LN_RSP,
	MSG_ID_MMI_PHB_GET_LN_TYPE_INFO_RSP,
	MSG_ID_MMI_L4C_READ_CLOG_RES_RSP,
	MSG_ID_MMI_L4C_WRITE_CLOG_RES_RSP,
	MSG_ID_MMI_L4C_DELETE_CLOG_RES_RSP,
	MSG_ID_MMI_L4C_CLOG_UPDATE_STATUS_RES_RSP,
	MSG_ID_MMI_PHB_READ_USIM_RSP,
	MSG_ID_MMI_PHB_WRITE_USIM_RSP,
	MSG_ID_MMI_PHB_DELETE_USIM_RSP,
	MSG_ID_MMI_PHB_CHECK_WRITE_USIM_ENTRY_RSP,
	MSG_ID_MMI_L4C_READ_ADDITIONAL_RES_RSP,
	MSG_ID_MMI_L4C_WRITE_ADDITIONAL_RES_RSP,
	MSG_ID_MMI_L4C_DELETE_ADDITIONAL_RES_RSP,
	MSG_ID_MMI_SMS_SET_PROFILE_PARAMS_RSP,
	MSG_ID_MMI_SMS_GET_PROFILE_PARAMS_RSP,
	MSG_ID_MMI_SMS_SET_COMMON_PARAMS_RSP,
	MSG_ID_MMI_SMS_GET_COMMON_PARAMS_RSP,
	MSG_ID_MMI_SMS_SEND_COMMAND_RSP,
	MSG_ID_MMI_SMS_DEL_MSG_RSP,
	MSG_ID_MMI_SMS_GET_MSG_RSP,
	MSG_ID_MMI_SMS_SEND_MSG_RSP,
	MSG_ID_MMI_SMS_SET_MSG_RSP,
	MSG_ID_MMI_SMS_SET_PREFERRED_STORAGE_RSP,
	MSG_ID_MMI_SMS_GET_PREFERRED_STORAGE_RSP,
	MSG_ID_MMI_SMS_REG_PORT_NUM_RSP,
	MSG_ID_MMI_SMS_GET_MSG_NUM_RSP,
	MSG_ID_MMI_SMS_GET_PROFILE_NUM_RSP,
	MSG_ID_MMI_SMS_ABORT_RSP,
	MSG_ID_MMI_SMS_SET_MAILBOX_ADDRESS_RSP,
	MSG_ID_MMI_SMS_GET_MAILBOX_ADDRESS_RSP,
	MSG_ID_MMI_SMS_SET_MBI_RSP,
	MSG_ID_MMI_SMS_GET_MBI_RSP,
	MSG_ID_MMI_SMS_SET_MSP_RSP,
	MSG_ID_MMI_SMS_GET_MSP_RSP,
	MSG_ID_MMI_SMS_SYNC_MSG_RES_RSP,
	MSG_ID_MMI_SMS_STARTUP_READ_NEXT_RSP,
	MSG_ID_MMI_SMS_COPY_MSG_RSP,
	MSG_ID_MMI_SMS_GET_MSG_LIST_RSP,
	MSG_ID_MMI_SMS_SEND_FROM_STORAGE_RSP,
	MSG_ID_MMI_SMS_SET_STATUS_RSP,
	MSG_ID_MMI_SMS_SEND_SMMA_RSP,
	MSG_ID_MMI_SMS_SET_MSG_WAITING_RSP,
	MSG_ID_MMI_SMS_READ_RAW_DATA_RSP,
	MSG_ID_MMI_SMS_WRITE_RAW_DATA_RSP,
	MSG_ID_MMI_USM_GENERAL_RCODE_RSP,
	MSG_ID_MMI_SMS_SEND_PDU_MSG_RSP,
	MSG_ID_MMI_SMS_SYNC_MSG_STORAGE_RSP,
	MSG_ID_MMI_SMS_SEND_DELIVER_REPORT_RSP,
	MSG_ID_MMI_SMS_STARTUP_READ_RES_RSP,
	MSG_ID_MMI_SMS_GET_MEM_STATUS_RES_RSP,
	MSG_ID_MMI_SMS_MEM_STATUS_RSP,
	MSG_ID_MMI_SMS_ATCMD_CMGR_RES_RSP,
	MSG_ID_MMI_SMS_ATCMD_CMGL_RES_RSP,
	MSG_ID_MMI_SMS_ATCMD_CMGD_RES_RSP,
	MSG_ID_MMI_SMS_ATCMD_CMGW_RES_RSP,
	MSG_ID_MMI_SMS_ATCMD_EQSI_RES_RSP,
	MSG_ID_MMI_SMS_ETWS_SETTING_RSP,
	MSG_ID_MMI_PS_ACT_TEST_RSP,
	MSG_ID_MMI_PS_SET_DEFINITION_RSP,
	MSG_ID_MMI_PS_SET_SEC_DEFINITION_RSP,
	MSG_ID_MMI_PS_SET_TFT_RSP,
	MSG_ID_MMI_PS_GET_TFT_RSP,
	MSG_ID_MMI_PS_SET_QOS_RSP,
	MSG_ID_MMI_PS_SET_EQOS_RSP,
	MSG_ID_MMI_PS_SEND_DATA_RSP,
	MSG_ID_MMI_PS_GET_GPRS_EMPTY_PROFILE_RSP,
	MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_RSP,
	MSG_ID_MMI_PS_SET_GPRS_DATA_ACCOUNT_RSP,
	MSG_ID_MMI_PS_GET_GPRS_DATA_ACCOUNT_RSP,
	MSG_ID_MMI_PS_RESET_GPRS_DATA_COUNTER_RSP,
	MSG_ID_MMI_PS_GET_ACL_MODE_RSP,
	MSG_ID_MMI_PS_SET_ACL_MODE_RSP,
	MSG_ID_MMI_PS_GET_ACL_ENTRIES_RSP,
	MSG_ID_MMI_PS_ADD_ACL_ENTRY_RSP,
	MSG_ID_MMI_PS_SET_ACL_ENTRY_RSP,
	MSG_ID_MMI_PS_DEL_ACL_ENTRY_RSP,
	MSG_ID_MMI_PS_LEAVE_ACL_MENU_RSP,
	MSG_ID_MMI_SAT_DISPLAY_TEXT_RES_RSP,
	MSG_ID_MMI_SAT_GET_INKEY_RES_RSP,
	MSG_ID_MMI_SAT_GET_INPUT_RES_RSP,
	MSG_ID_MMI_SAT_SETUP_MENU_RES_RSP,
	MSG_ID_MMI_SAT_SELECT_ITEM_RES_RSP,
	MSG_ID_MMI_SAT_PLAY_TONE_RES_RSP,
	MSG_ID_MMI_SAT_MENU_SELECT_RSP,
	MSG_ID_MMI_SAT_EVDL_IDLE_SCREEN_AVAILABLE_RSP,
	MSG_ID_MMI_SAT_LANGUAGE_SELECTION_RSP,
	MSG_ID_MMI_SAT_EVDL_BROWSER_TERMINATION_RSP,
	MSG_ID_MMI_SAT_CALL_SETUP_STAGE1_RSP,
	MSG_ID_MMI_SAT_CALL_SETUP_STAGE2_RSP,
	MSG_ID_MMI_SAT_SEND_SMS_STAGE1_RSP,
	MSG_ID_MMI_SAT_SEND_SMS_STAGE2_RSP,
	MSG_ID_MMI_SAT_SEND_SS_STAGE1_RSP,
	MSG_ID_MMI_SAT_SEND_SS_STAGE2_RSP,
	MSG_ID_MMI_SAT_SEND_USSD_STAGE1_RSP,
	MSG_ID_MMI_SAT_SEND_USSD_STAGE2_RSP,
	MSG_ID_MMI_SAT_SETUP_IDLE_DISPLAY_RES_RSP,
	MSG_ID_MMI_SAT_SEND_DTMF_STAGE1_RSP,
	MSG_ID_MMI_SAT_SEND_DTMF_STAGE2_RSP,
	MSG_ID_MMI_SAT_ABORT_DTMF_RSP,
	MSG_ID_MMI_SAT_LANG_NOTIFY_RES_RSP,
	MSG_ID_MMI_SAT_LAUNCH_BROWSER_RES_RSP,
	MSG_ID_MMI_SAT_PROVIDE_LANG_INFO_RSP,
	MSG_ID_MMI_SAT_FILE_CHANGE_RES_RSP,
	MSG_ID_MMI_SAT_OPEN_CHANNEL_RSP,
	MSG_ID_MMI_SAT_CLOSE_CHANNEL_RSP,
	MSG_ID_MMI_SAT_SEND_DATA_RSP,
	MSG_ID_MMI_SAT_RECV_DATA_RSP,
	MSG_ID_MMI_RSAT_EVDL_DATA_AVAILABLE_RSP,
	MSG_ID_MMI_RSAT_EVDL_CHANNEL_STATUS_RSP,
	MSG_ID_MMI_RSAT_OPEN_GPRS_CHANNEL_RES_RSP,
	MSG_ID_MMI_RSAT_OPEN_CSD_CHANNEL_RES_RSP,
	MSG_ID_MMI_RSAT_OPEN_SERVER_MODE_CHANNEL_RES_RSP,
	MSG_ID_MMI_RSAT_CLOSE_CHANNEL_RES_RSP,
	MSG_ID_MMI_RSAT_SEND_DATA_RES_RSP,
	MSG_ID_MMI_RSAT_RECV_DATA_RES_RSP,
	MSG_ID_MMI_RSAT_CH_STATUS_RES_RSP,
	MSG_ID_MMI_CB_SUBSCRIBE_RSP,
	MSG_ID_MMI_SMS_SET_CB_MODE_RSP,
	MSG_ID_MMI_SMS_GET_CB_MODE_RSP,
	MSG_ID_MMI_EM_UPDATE_RSP,
	MSG_ID_MMI_VT_EM_GET_CONFIG_RSP,
	MSG_ID_MMI_VT_EM_SET_CONFIG_RSP,
	MSG_ID_MMI_EM_KEYPAD_EVENT_OUTPUT_RSP,
	MSG_ID_MMI_EM_CELL_RESEL_SUSPEND_RSP,
	MSG_ID_MMI_EM_CELL_RESEL_RESUME_RSP,
	MSG_ID_MMI_EM_GET_CELL_LOCK_RSP,
	MSG_ID_MMI_EM_SET_CELL_LOCK_RSP,
	MSG_ID_MMI_EM_NW_EVENT_NOTIFY_RSP,
	MSG_ID_MMI_EM_FEATURE_COMMAND_RSP,
	MSG_ID_MMI_EM_GET_CONFORM_TEST_PARAM_RSP,
	MSG_ID_MMI_EM_SET_CONFORM_TEST_PARAM_RSP,
	MSG_ID_MMI_EM_QUICK_TEST_REPORT_RES_RSP,
	MSG_ID_MMI_EM_SET_ESSP_RSP,
	MSG_ID_MMI_EM_GET_ESSP_RSP,
	MSG_ID_MMI_CPHS_UPDATE_ALS_RSP,
	MSG_ID_MMI_EQ_IRDA_OPEN_RSP,
	MSG_ID_MMI_EQ_IRDA_CLOSE_RSP,
	MSG_ID_MMI_EQ_USBCONFIG_RSP,
	MSG_ID_MMI_EQ_USBUART_SWITCH_PORT_RSP,
	MSG_ID_MMI_EQ_USBDETECT_RES_RSP,
	MSG_ID_WAP_MMC_READ_FOLDER_STATUS_OUTPUT_RSP,
	MSG_ID_WAP_MMC_UPLOAD_MSG_OUTPUT_RSP,
	MSG_ID_WAP_MMC_DELETE_MSG_OUTPUT_RSP,
	MSG_ID_WAP_MMC_READ_MSG_PATH_RES_RSP,
	MSG_ID_MMI_EQ_QUERY_GREETING_TEXT_RES_RSP,
	MSG_ID_MMI_EQ_QUERY_LANGUAGE_RES_RSP,
	MSG_ID_MMI_EQ_QUERY_SILENT_MODE_RES_RSP,
	MSG_ID_MMI_EQ_QUERY_VIBRATOR_MODE_RES_RSP,
	MSG_ID_MMI_EQ_QUERY_DATE_TIME_FORMAT_RES_RSP,
	MSG_ID_MMI_EQ_QUERY_MUTE_MODE_RES_RSP,
	MSG_ID_MMI_READY_NOTIFY_RSP,
	MSG_ID_MMI_AT_GENERAL_RES_RSP,
	MSG_ID_MMI_EQ_VCARD_RES_RSP,
	MSG_ID_MMI_EQ_VCALENDAR_RES_RSP,
	MSG_ID_MMI_EQ_STR_RES_RSP,
	MSG_ID_MMI_UCM_AT_RES_RSP,
	MSG_ID_MMI_UCM_GENERAL_RCODE_RSP,
	MSG_ID_MMI_UCM_HF_CIEV_RCODE_RSP,
	MSG_ID_MMI_EQ_RINGTONE_PLAY_RES_RSP,
	MSG_ID_MMI_JAVA_LOCAL_INSTALL_RES_RSP,
	MSG_ID_MMI_L4_BT_SET_VR_RSP,
	MSG_ID_MMI_CTM_SET_STATUS_RSP,
	MSG_ID_MMI_VOIP_AT_CALL_CTRL_APPROVE_RES_RSP,
	MSG_ID_MMI_SMU_SIM_STATUS_UPDATE_RSP,
	MSG_ID_MMI_SMU_DUAL_SIM_TO_FLIGHT_MODE_RSP,
	MSG_ID_MMI_NW_SIM_MODE_SWITCH_START_RSP,
	MSG_ID_MMI_NW_SIM_MODE_SWITCH_STOP_RSP,
	MSG_ID_MMI_NW_SET_MONITOR_PEER_PCH_RSP,
	MSG_ID_MMI_NW_GET_MONITOR_PEER_PCH_RSP,
	MSG_ID_MMI_L4C_SET_SIM_CAPABILITY_RSP,
	MSG_ID_MMI_L4C_GET_SIM_CAPABILITY_RSP,
	MSG_ID_MMI_SS_MTLR_BEGIN_RES_RSP,
	MSG_ID_MMI_SS_AERQ_BEGIN_RES_RSP,
	MSG_ID_MMI_SS_AERP_BEGIN_RSP,
	MSG_ID_MMI_SS_AERP_END_RSP,
	MSG_ID_MMI_SS_AECL_BEGIN_RES_RSP,
	MSG_ID_MMI_SS_MOLR_BEGIN_RSP,
	MSG_ID_MMI_SS_MOLR_END_RSP,
	MSG_ID_MMI_AGPS_ENABLE_DISABLE_RSP,
	MSG_ID_MMI_AGPS_KEY_UPDATE_RSP,
	MSG_ID_MMI_AGPS_CP_ABORT_RSP,
	MSG_ID_MMI_EQ_RAM_USAGE_RES_RSP,
	MSG_ID_MMI_EQ_LAUNCH_APP_RES_RSP,
	MSG_ID_MMI_EQ_APP_INFO_OUTPUT_RES_RSP,
	MSG_ID_MMI_EQ_SCREEN_TOUCH_RES_RSP,
	MSG_ID_MMI_EQ_SCRNORIENT_RES_RSP,
	MSG_ID_MMI_EQ_SCRNSIZE_QUERY_RES_RSP,
	MSG_ID_MMI_EQ_SCRNTCH_EVENT_OUTPUT_RSP,
	MSG_ID_MMI_EQ_SCREEN_SHOT_RES_RSP,
	MSG_ID_MMI_EQ_UART_TRANSFER_RSP,
	MSG_ID_MMI_EQ_UART_RELEASE_RSP,
	MSG_ID_MMI_EQ_PLAY_AUDIO_STREAM_RSP,
	MSG_ID_MMI_EQ_STOP_AUDIO_STREAM_RSP,
	MSG_ID_MMI_EQ_LCD_SET_CONTRAST_RSP,
	MSG_ID_MMI_EQ_SET_SILENT_MODE_RSP,
	MSG_ID_MMI_EQ_GET_MS_IMEI_RSP,
	MSG_ID_MMI_EQ_SET_MS_IMEI_RSP,
	MSG_ID_MMI_EQ_RTC_POWERON_STATE_RSP,
	MSG_ID_MMI_EQ_START_TIMER_RSP,
	MSG_ID_MMI_EQ_STOP_TIMER_RSP,
	MSG_ID_MMI_EQ_SIMULATE_KEY_PRESS_RSP,
	MSG_ID_MMI_EQ_SET_INDICATOR_RSP,
	MSG_ID_MMI_EQ_GET_INDICATOR_RSP,
	MSG_ID_MMI_EQ_DISPLAY_TEXT_RSP,
	MSG_ID_MMI_EQ_SET_GREETING_TEXT_RSP,
	MSG_ID_MMI_EQ_SET_VIBRATOR_MODE_RSP,
	MSG_ID_MMI_EQ_SET_COUNTRY_CODE_RSP,
	MSG_ID_MMI_EQ_GET_COUNTRY_CODE_RSP,
	MSG_ID_MMI_EQ_GET_BATTERY_STATUS_RSP,
	MSG_ID_MMI_EQ_LOAD_DEFAULT_CONFIG_RSP,
	MSG_ID_MMI_EM_SET_CELL_ID_LOCK_RSP,
	MSG_ID_MMI_UPDATE_MMI_DEFAULT_PROF_VALUE_RSP,
	MSG_ID_MMI_VM_PLAY_RSP,
	MSG_ID_MMI_VM_DEL_RSP,
	MSG_ID_MMI_VM_APPEND_RSP,
	MSG_ID_MMI_VM_RENAME_RSP,
	MSG_ID_MMI_VM_GET_INFO_RSP,
	MSG_ID_MMI_VM_STOP_RSP,
	MSG_ID_MMI_VM_ABORT_RSP,
	MSG_ID_MMI_VM_PAUSE_RSP,
	MSG_ID_MMI_VM_RESUME_RSP,
	MSG_ID_MMI_VM_RECORD_RSP,
	MSG_ID_WAP_START_DTMF_RSP,
	MSG_ID_WAP_STOP_DTMF_RSP,
	MSG_ID_WAP_DIAL_RSP,
	MSG_ID_WAP_SET_ENTRY_RSP,

	MSG_ID_MMI_CC_START_AUTO_DTMF_IND,
	MSG_ID_MMI_CC_START_AUTO_DTMF_FINISH_IND,
	MSG_ID_MMI_CC_DIAL_REQ_IND,
	MSG_ID_MMI_CC_DIAL_IND,
	MSG_ID_MMI_CC_CCM_IND,
	MSG_ID_MMI_CC_INTERNAL_ALERT_IND,
	MSG_ID_MMI_CC_CALL_WAIT_IND,
	MSG_ID_MMI_CC_CALL_RING_IND,
	MSG_ID_MMI_CC_CALL_CONNECT_IND,
	MSG_ID_MMI_CC_CALL_DISCONNECT_IND,
	MSG_ID_MMI_CC_CALL_RELEASE_IND,
	MSG_ID_MMI_CC_SPEECH_IND,
	MSG_ID_MMI_CC_NOTIFY_SS_IND,
	MSG_ID_MMI_CC_NOTIFY_SS_ECT_IND,
	MSG_ID_MMI_CC_NOTIFY_SS_CNAP_IND,
	MSG_ID_MMI_CC_NOTIFY_SS_CCBS_IND,
	MSG_ID_MMI_CC_CALL_ACCEPT_REQ_IND,
	MSG_ID_MMI_CC_CALL_ABORT_REQ_IND,
	MSG_ID_MMI_CC_CALL_SYNC_REQ_IND,
	MSG_ID_MMI_CC_VIDEO_CALL_STATUS_IND,
	MSG_ID_MMI_CC_CALL_PRESENT_IND,
	MSG_ID_MMI_CC_CPI_IND,
	MSG_ID_MMI_DATA_CALL_REQ_IND,
	MSG_ID_MMI_SS_CLIP_INTERROGATE_IND,
	MSG_ID_MMI_SS_CLIR_INTERROGATE_IND,
	MSG_ID_MMI_SS_CNAP_INTERROGATE_IND,
	MSG_ID_MMI_SS_COLP_INTERROGATE_IND,
	MSG_ID_MMI_SS_COLR_INTERROGATE_IND,
	MSG_ID_MMI_SS_USSR_IND,
	MSG_ID_MMI_SS_USSN_IND,
	MSG_ID_MMI_SMS_CB_GS_CHANGE_IND,
	MSG_ID_MMI_EQ_EXE_VOLUME_REQ_IND,
	MSG_ID_MMI_EQ_VOLUME_CHANGE_IND,
	MSG_ID_MMI_EQ_EXE_MUTE_REQ_IND,
	MSG_ID_MMI_EQ_MUTE_CHANGE_IND,
	MSG_ID_MMI_EQ_SET_SILENT_MODE_REQ_IND,
	MSG_ID_MMI_EQ_SET_GPIO_LEVEL_REQ_IND,
	MSG_ID_MMI_EQ_EXE_GPIO_LEVEL_REQ_IND,
	MSG_ID_MMI_EQ_PLAY_AUDIO_FINISH_IND,
	MSG_ID_MMI_EQ_GPIO_DETECT_IND,
	MSG_ID_MMI_EQ_ADC_ALL_CHANNEL_IND,
	MSG_ID_MMI_EQ_SET_SLEEP_MODE_REQ_IND,
	MSG_ID_MMI_EQ_SET_HAND_FREE_MODE_REQ_IND,
	MSG_ID_MMI_EQ_QUERY_HAND_FREE_MODE_REQ_IND,
	MSG_ID_MMI_EQ_SET_CAM_REQ_IND,
	MSG_ID_MMI_EQ_SET_AVR_REQ_IND,
	MSG_ID_MMI_EQ_SET_RTC_TIME_REQ_IND,
	MSG_ID_MMI_EQ_DEL_RTC_TIMER_REQ_IND,
	MSG_ID_MMI_EQ_SET_DATE_TIME_FORMAT_REQ_IND,
	MSG_ID_MMI_EQ_CLOCK_TICK_IND,
	MSG_ID_MMI_EQ_ALARM_IND,
	MSG_ID_MMI_AT_ALARM_QUERY_REQ_IND,
	MSG_ID_MMI_AT_ALARM_SET_REQ_IND,
	MSG_ID_MMI_AT_ALARM_DELETE_REQ_IND,
	MSG_ID_MMI_EQ_SIMULATE_KEY_PRESS_REQ_IND,
	MSG_ID_MMI_EQ_SET_INDICATOR_REQ_IND,
	MSG_ID_MMI_EQ_DISPLAY_TEXT_REQ_IND,
	MSG_ID_MMI_EQ_KEYPAD_DETECT_IND,
	MSG_ID_MMI_AT_CBKLT_QUERY_REQ_IND,
	MSG_ID_MMI_AT_KEYPAD_EVENT_ACT_IND,
	MSG_ID_MMI_EQ_SET_LANGUAGE_REQ_IND,
	MSG_ID_MMI_EQ_SET_GREETING_TEXT_REQ_IND,
	MSG_ID_MMI_EQ_SET_VIBRATOR_MODE_REQ_IND,
	MSG_ID_MMI_EQ_POWER_ON_IND,
	MSG_ID_MMI_EQ_BATTERY_STATUS_IND,
	MSG_ID_MMI_EQ_LEAVE_PRECHARGE_IND,
	MSG_ID_MMI_EQ_FM_TEST_REQ_IND,
	MSG_ID_MMI_EQ_FACTORY_RESET_IND,
	MSG_ID_MMI_EQ_NVRAM_READY_IND,
	MSG_ID_MMI_NW_ATTACH_IND,
	MSG_ID_MMI_NW_REG_CAUSE_IND,
	MSG_ID_MMI_NW_REG_STATE_IND,
	MSG_ID_MMI_NW_RX_LEVEL_IND,
	MSG_ID_MMI_NW_TIME_ZONE_IND,
	MSG_ID_MMI_NW_SEL_MODE_IND,
	MSG_ID_MMI_NW_MMRR_SERVICE_STATUS_IND,
	MSG_ID_MMI_NW_UPDATE_ECC_IND,
	MSG_ID_MMI_NW_EF_RAT_MODE_CHANGE_IND,
	MSG_ID_MMI_NW_CFUN_STATE_REQ_IND,
	MSG_ID_MMI_SMU_PASSWORD_REQUIRED_IND,
	MSG_ID_MMI_SMU_SUPPORT_PLMN_LIST_IND,
	MSG_ID_MMI_SMU_FAIL_IND,
	MSG_ID_MMI_SMU_SML_STATUS_NOTIFY_IND,
	MSG_ID_MMI_SMU_STARTUP_INFO_IND,
	MSG_ID_MMI_SMU_CIPHER_IND,
	MSG_ID_MMI_SMU_VERIFY_PIN_RESULT_IND,
	MSG_ID_MMI_SIM_O2_PREPAID_SIM_IND,
	MSG_ID_MMI_PHB_LAST_NUMBER_READY_IND,
	MSG_ID_MMI_PHB_STARTUP_FINISH_IND,
	MSG_ID_MMI_PHB_UPDATE_IND,
	MSG_ID_MMI_PHB_STARTUP_READ_IND,
	MSG_ID_MMI_PHB_STARTUP_BEGIN_IND,
	MSG_ID_MMI_L4C_READ_PHB_REQ_IND,
	MSG_ID_MMI_L4C_WRITE_PHB_REQ_IND,
	MSG_ID_MMI_L4C_DELETE_PHB_REQ_IND,
	MSG_ID_MMI_L4C_READ_CLOG_REQ_IND,
	MSG_ID_MMI_L4C_WRITE_CLOG_REQ_IND,
	MSG_ID_MMI_L4C_DELETE_CLOG_REQ_IND,
	MSG_ID_MMI_L4C_READ_ADDITIONAL_REQ_IND,
	MSG_ID_MMI_L4C_WRITE_ADDITIONAL_REQ_IND,
	MSG_ID_MMI_L4C_DELETE_ADDITIONAL_REQ_IND,
	MSG_ID_MMI_SMS_DELIVER_MSG_IND,
	MSG_ID_MMI_SMS_STATUS_REPORT_IND,
	MSG_ID_MMI_SMS_MEM_AVAILABLE_IND,
	MSG_ID_MMI_SMS_MEM_EXCEED_IND,
	MSG_ID_MMI_SMS_MEM_FULL_IND,
	MSG_ID_MMI_SMS_READY_IND,
	MSG_ID_MMI_SMS_APP_DATA_IND,
	MSG_ID_MMI_SMS_MSG_WAITING_IND,
	MSG_ID_MMI_SMS_ENHANCED_VOICE_MAIL_IND,
	MSG_ID_MMI_SMS_SYNC_MSG_IND,
	MSG_ID_MMI_SMS_SEND_ABORT_START_IND,
	MSG_ID_MMI_SMS_SEND_ABORT_FINISH_IND,
	MSG_ID_MMI_SMS_STARTUP_BEGIN_IND,
	MSG_ID_MMI_SMS_STARTUP_FINISH_IND,
	MSG_ID_MMI_SMS_STARTUP_READ_MSG_IND,
	MSG_ID_MMI_USM_AT_REQ_IND,
	MSG_ID_MMI_SMS_MT_SMS_FINAL_ACK_IND,
	MSG_ID_MMI_SMS_NEW_MSG_PDU_IND,
	MSG_ID_MMI_SMS_CB_MSG_PDU_IND,
	MSG_ID_MMI_SMS_STARTUP_READ_IND,
	MSG_ID_MMI_SMS_GET_MEM_STATUS_IND,
	MSG_ID_MMI_SMS_ATCMD_CMGR_IND,
	MSG_ID_MMI_SMS_ATCMD_CMGL_IND,
	MSG_ID_MMI_SMS_ATCMD_CMGD_IND,
	MSG_ID_MMI_SMS_ATCMD_CMGW_IND,
	MSG_ID_MMI_SMS_ATCMD_EQSI_IND,
	MSG_ID_MMI_SMS_ATCMD_CGSMS_IND,
	MSG_ID_MMI_SMS_ATCMD_CSAS_IND,
	MSG_ID_MMI_SMS_ETWS_INFO_IND,
	MSG_ID_MMI_PS_GPRS_STATUS_UPDATE_IND,
	MSG_ID_MMI_SAT_DISPLAY_TEXT_IND,
	MSG_ID_MMI_SAT_GET_INKEY_IND,
	MSG_ID_MMI_SAT_GET_INPUT_IND,
	MSG_ID_MMI_SAT_SETUP_MENU_IND,
	MSG_ID_MMI_SAT_SELECT_ITEM_IND,
	MSG_ID_MMI_SAT_PLAY_TONE_IND,
	MSG_ID_MMI_SAT_CALL_SETUP_IND,
	MSG_ID_MMI_SAT_SEND_SMS_IND,
	MSG_ID_MMI_SAT_SEND_SS_IND,
	MSG_ID_MMI_SAT_SEND_USSD_IND,
	MSG_ID_MMI_SAT_MMI_INFO_IND,
	MSG_ID_MMI_SAT_SETUP_IDLE_DISPLAY_IND,
	MSG_ID_MMI_SAT_RUN_AT_COMMAND_IND,
	MSG_ID_MMI_SAT_SEND_DTMF_IND,
	MSG_ID_MMI_SAT_LANG_NOTIFY_IND,
	MSG_ID_MMI_SAT_LAUNCH_BROWSER_IND,
	MSG_ID_MMI_SAT_NO_OTHER_CMD_IND,
	MSG_ID_MMI_SAT_SIM_FILE_CHANGE_IND,
	MSG_ID_MMI_SAT_SETUP_EVENT_LIST_IND,
	MSG_ID_MMI_SAT_PROVIDE_LANG_INFO_IND,
	MSG_ID_MMI_SAT_OPEN_CHANNEL_IND,
	MSG_ID_MMI_SAT_CLOSE_CHANNEL_IND,
	MSG_ID_MMI_SAT_SEND_DATA_IND,
	MSG_ID_MMI_SAT_RECV_DATA_IND,
	MSG_ID_MMI_SAT_NOTIFY_MMI_IND,
	MSG_ID_MMI_RSAT_OPEN_CHANNEL_IND,
	MSG_ID_MMI_RSAT_CLOSE_CHANNEL_IND,
	MSG_ID_MMI_RSAT_SEND_DATA_IND,
	MSG_ID_MMI_RSAT_RECV_DATA_IND,
	MSG_ID_MMI_RSAT_CH_STATUS_IND,
	MSG_ID_MMI_CB_MSG_IND,
	MSG_ID_MMI_EM_STATUS_IND,
	MSG_ID_MMI_EM_LCM_TEST_IND,
	MSG_ID_MMI_EM_KEYPAD_EVENT_ACT_IND,
	MSG_ID_MMI_FACTORY_TEST_IND,
	MSG_ID_MMI_SET_MMI_DEFAULT_PROF_IND,
	MSG_ID_MMI_EM_RGB_TEST_REQ_IND,
	MSG_ID_MMI_EM_LCD_TEST_REQ_IND,
	MSG_ID_MMI_EM_NW_EVENT_NOTIFY_IND,
	MSG_ID_MMI_EM_QUICK_TEST_REPORT_IND,
	MSG_ID_MMI_CPHS_DISPLAY_CFU_IND,
	MSG_ID_MMI_CPHS_MMI_INFO_IND,
	MSG_ID_MMI_CPHS_DISPLAY_ALS_IND,
	MSG_ID_MMI_EQ_IRCOMM_CONNECT_IND,
	MSG_ID_MMI_EQ_IRCOMM_DISCONNECT_IND,
	MSG_ID_MMI_EQ_USBDETECT_IND,
	MSG_ID_WAP_MMC_READ_FOLDER_STATUS_REQ_IND,
	MSG_ID_WAP_MMC_UPLOAD_MSG_REQ_IND,
	MSG_ID_WAP_MMC_DELETE_MSG_REQ_IND,
	MSG_ID_WAP_MMC_READ_MSG_PATH_IND,
	MSG_ID_MMI_EQ_QUERY_GREETING_TEXT_REQ_IND,
	MSG_ID_MMI_EQ_QUERY_LANGUAGE_REQ_IND,
	MSG_ID_MMI_EQ_QUERY_SILENT_MODE_REQ_IND,
	MSG_ID_MMI_EQ_QUERY_VIBRATOR_MODE_REQ_IND,
	MSG_ID_MMI_EQ_QUERY_DATE_TIME_FORMAT_REQ_IND,
	MSG_ID_MMI_EQ_QUERY_MUTE_MODE_REQ_IND,
	MSG_ID_MMI_POWER_RESET_IND,
	MSG_ID_MMI_FACTORY_RESTORE_REQ_IND,
	MSG_ID_MMI_EQ_VCARD_REQ_IND,
	MSG_ID_MMI_EQ_VCALENDAR_REQ_IND,
	MSG_ID_MMI_EQ_STR_ENABLE_REQ_IND,
	MSG_ID_MMI_EQ_STR_REQ_IND,
	MSG_ID_MMI_UCM_AT_REQ_IND,
	MSG_ID_MMI_EQ_RINGTONE_PLAY_REQ_IND,
	MSG_ID_MMI_JAVA_LOCAL_INSTALL_REQ_IND,
	MSG_ID_MMI_L4_BT_FCTY_SET_PARAM_IND,
	MSG_ID_MMI_L4_BT_LOOPBACK_TEST_REQ_IND,
	MSG_ID_MMI_L4_BT_SET_VR_REQ_IND,
	MSG_ID_MMI_HZ_TAG_IND,
	MSG_ID_MMI_VOIP_AT_CALL_CTRL_APPROVE_IND,
	MSG_ID_MMI_EQ_PWNON_DUAL_SIM_IND,
	MSG_ID_MMI_SMU_SIM_STATUS_UPDATE_IND,
	MSG_ID_MMI_NW_RAC_ACTIVATED_IND,
	MSG_ID_MMI_NW_SEARCH_NORMAL_FINISH_IND,
	MSG_ID_MMI_SS_MTLR_BEGIN_IND,
	MSG_ID_MMI_SS_AERQ_BEGIN_IND,
	MSG_ID_MMI_SS_AECL_BEGIN_IND,
	MSG_ID_MMI_AGPS_NEW_KEY_NEEDED_IND,
	MSG_ID_MMI_AGPS_RESET_POSITIONING_IND,
	MSG_ID_MMI_AGPS_CP_START_IND,
	MSG_ID_MMI_AGPS_CP_END_IND,
	MSG_ID_MMI_EQ_RAM_USAGE_REQ_IND,
	MSG_ID_MMI_EQ_LAUNCH_APP_REQ_IND,
	MSG_ID_MMI_EQ_APP_INFO_OUTPUT_REQ_IND,
	MSG_ID_MMI_EQ_SCREEN_TOUCH_REQ_IND,
	MSG_ID_MMI_EQ_SCRNORIENT_REQ_IND,
	MSG_ID_MMI_EQ_SCRNSIZE_QUERY_REQ_IND,
	MSG_ID_MMI_EQ_SCRNTCH_EVENT_ACT_IND,
	MSG_ID_MMI_EQ_SCREEN_SHOT_REQ_IND,
	MSG_ID_MMI_EQ_AT_QUICK_INPUT_IND,
	MSG_ID_MMI_EQ_UART_TRANSFER_IND,
	MSG_ID_MMI_EQ_EXE_DEL_RTC_TIMER_REQ_IND,
	MSG_ID_MMI_VM_PLAY_FINISH_IND,
	MSG_ID_MMI_VM_RECORD_FINISH_IND,





	MSG_ID_WAP_AUTO_DTMF_COMPLETE_IND,
	MSG_ID_L4A_CODE_END,


 
	  
 




     
    
    
     
    
    
     

     
    






 
     

	 
    

 

     
    MSG_ID_SRV_DTCNT_WLAN_ATCMD_REQ,

      
    MSG_ID_BT_ADV_TEST_MODE_REQ,
    MSG_ID_BT_ADV_TEST_MODE_CNF,
      


	MSG_ID_MMI_AT_COMMAND_SET_REQ,

   
        
    


#line 1938 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_MMI_CODE_CHECK_POINT,




 

 
#line 1 "interface\\ps\\sap\\abm_sap.h"

































 
 







 

 








































































































































































 

	 
#line 225 "interface\\ps\\sap\\abm_sap.h"

    
    
   MSG_ID_SUPC_ABM_WIFI_INIT_CNF = MSG_ID_ABM_CODE_BEGIN,
   MSG_ID_SUPC_ABM_WIFI_DEINIT_CNF,
   MSG_ID_SUPC_ABM_WIFI_CONNECT_CNF,
   MSG_ID_SUPC_ABM_WIFI_CONNECT_IND,
   MSG_ID_SUPC_ABM_WIFI_DISCONNECT_CNF,
   MSG_ID_SUPC_ABM_WIFI_DISCONNECT_IND,
   MSG_ID_SUPC_ABM_WIFI_AP_LIST_CNF,

    
   MSG_ID_SOC_ABM_ACTIVATE_REQ,
   MSG_ID_SOC_ABM_DEACTIVATE_REQ,
   MSG_ID_SOC_ABM_IPADDR_CONFLICT_IND,
   MSG_ID_SOC_ABM_RESUME_QOS_CTX_REQ,

    
   MSG_ID_L4C_PS_ABM_SETUP_RSP,
   MSG_ID_L4C_PS_ABM_DISC_RSP,
   MSG_ID_L4C_PS_ABM_DISC_IND,
   MSG_ID_L4C_PS_ABM_NW_ATTACH_IND,
   
   MSG_ID_L4C_PS_ABM_REACTIVATE_RSP,
   MSG_ID_L4C_PS_ABM_PDP_MODIFY_IND, 

   MSG_ID_L4C_CC_ABM_SETUP_RSP,
   MSG_ID_L4C_CC_ABM_DISC_RSP,
   MSG_ID_L4C_CC_ABM_DISC_IND,

   MSG_ID_L4CABM_START_REQ,
   MSG_ID_L4CABM_GET_GPRS_ACCOUNT_INFO_REQ,
   MSG_ID_L4CABM_SET_GPRS_ACCOUNT_INFO_REQ,

   MSG_ID_L4C_ABM_DISALLOW_GPRS_AND_CSD_RSP,   
   MSG_ID_L4C_ABM_ALLOW_GPRS_AND_CSD_RSP,

   MSG_ID_L4C_ABM_DIALUP_CONNECT_IND,
   MSG_ID_L4C_ABM_DIALUP_CONNECTING_IND,
   MSG_ID_L4C_ABM_DIALUP_DISC_IND,
   MSG_ID_L4C_ABM_DIALUP_DISC_RSP,
   MSG_ID_L4C_PS_ABM_RESET_DIALUP_INFO_RSP,
   MSG_ID_L4C_PS_ABM_GET_DIALUP_INFO_RSP,
   MSG_ID_L4C_PS_ABM_DIALUP_INFO_IND,
   MSG_ID_L4C_ABM_GPRS_STATUS_IND, 

    
   MSG_ID_MMI_ABM_WIFI_INIT_CNF,
   MSG_ID_MMI_ABM_WIFI_DEINIT_CNF,
   MSG_ID_MMI_ABM_WIFI_CONNECT_CNF,
   MSG_ID_MMI_ABM_WIFI_DISCONNECT_CNF,
   MSG_ID_MMI_ABM_WIFI_AP_LIST_CNF,
   MSG_ID_MMI_ABM_WIFI_ACTIVATE_REQ_IND,
   MSG_ID_MMI_ABM_WIFI_DEACTIVATE_REQ_IND,
   MSG_ID_MMI_ABM_WIFI_CONNECT_IND,
   MSG_ID_MMI_ABM_WIFI_DISCONNECT_IND,
   MSG_ID_MMI_ABM_WIFI_SET_PS_MODE_CNF,
   MSG_ID_MMI_ABM_WIFI_WPS_INFO_IND,
   MSG_ID_MMI_ABM_WIFI_PORTAL_LOGIN_START_CNF,
   MSG_ID_MMI_ABM_WIFI_PORTAL_LOGIN_STOP_CNF,
   MSG_ID_MMI_ABM_WIFI_PORTAL_LOGOUT_CNF,
   MSG_ID_MMI_ABM_IPADDR_UPDATE_IND,
   MSG_ID_MMI_ABM_IPADDR_CONFLICT_IND,
   MSG_ID_MMI_ABM_IPADDR_CHANGE_CNF,
   MSG_ID_MMI_ABM_BEARER_INIT_IND,
   MSG_ID_MMI_ABM_BEARER_DEINIT_IND,
   MSG_ID_MMI_ABM_PROFILE_QUERY_IND,

   MSG_ID_MMI_ABM_NET_STATUS_IND,
   MSG_ID_MMI_ABM_SET_TX_PWR_CNF,

    
   MSG_ID_MMI_ABM_WIFI_INIT_REQ,
   MSG_ID_MMI_ABM_WIFI_DEINIT_REQ,
   MSG_ID_MMI_ABM_WIFI_CONNECT_REQ,
   MSG_ID_MMI_ABM_WIFI_DISCONNECT_REQ,
   MSG_ID_MMI_ABM_WIFI_AP_LIST_REQ,
   MSG_ID_MMI_ABM_WIFI_ACTIVATE_REQ_REJ,
   MSG_ID_MMI_ABM_WIFI_DEACTIVATE_REQ_REJ,
   MSG_ID_MMI_ABM_WIFI_SET_PS_MODE_REQ,
   MSG_ID_MMI_ABM_WIFI_PORTAL_LOGIN_START_REQ,
   MSG_ID_MMI_ABM_WIFI_PORTAL_LOGIN_STOP_REQ,
   MSG_ID_MMI_ABM_WIFI_PORTAL_LOGOUT_REQ,
   MSG_ID_MMI_ABM_IPADDR_CHANGE_REQ,
   MSG_ID_MMI_ABM_BEARER_INIT_RSP,
   MSG_ID_MMI_ABM_BEARER_DEINIT_RSP,
   MSG_ID_MMI_ABM_PROFILE_QUERY_RSP,
   MSG_ID_MMI_ABM_UPDATE_ACCOUNT_INFO_REQ,
   MSG_ID_MMI_ABM_UPDATE_APP_INFO_REQ,

   MSG_ID_MMI_ABM_DISCONNECT_REQ,
   MSG_ID_MMI_ABM_GET_BEARER_INFO_REQ,
   MSG_ID_MMI_ABM_RESET_BEARER_INFO_REQ,
   MSG_ID_MMI_ABM_NWK_SRV_REQ,
   MSG_ID_MMI_ABM_BEARER_EVENT_CONNECT_REQ,

   MSG_ID_MMI_ABM_SHARE_BEARER_QUERY_REQ,
   MSG_ID_MMI_ABM_SHARE_BEARER_ACTIVATE_REQ,
   MSG_ID_MMI_ABM_SHARE_BEARER_DEACTIVATE_REQ,

   MSG_ID_MMI_ABM_SET_TX_PWR_REQ,

    
   
   MSG_ID_MMI_ABM_DISCONNECT_CNF,
   
   MSG_ID_MMI_ABM_GET_BEARER_INFO_CNF,
   MSG_ID_MMI_ABM_RESET_BEARER_INFO_CNF,
   MSG_ID_MMI_ABM_BEARER_INFO_IND,
   
   
   
   MSG_ID_MMI_ABM_NWK_SRV_CNF,
   MSG_ID_MMI_ABM_BEARER_EVENT_CONNECT_CNF,

   MSG_ID_MMI_ABM_SHARE_BEARER_QUERY_CNF,
   MSG_ID_MMI_ABM_SHARE_BEARER_ACTIVATE_CNF,
   MSG_ID_MMI_ABM_SHARE_BEARER_DEACTIVATE_CNF,

   MSG_ID_MMI_ABM_BEARER_CONNECT_RESULT_IND,

    

   MSG_ID_APP_CBM_BEARER_EVENT_NOTIFY_IND, 















 
   MSG_ID_APP_CBM_BEARER_EVENT_NOTIFY_RSP, 








 
   MSG_ID_APP_CBM_BEARER_INFO_IND, 























 
   MSG_ID_APP_CBM_NVRAM_OPERATION_IND, 







 
    

   
   
   MSG_ID_MMI_ABM_BEARER_DISCONNECT_REQ,
   MSG_ID_MMI_ABM_BEARER_DISCONNECT_CNF,
   MSG_ID_MMI_ABM_BEARER_STATUS_IND,
   MSG_ID_ABM_CODE_END = MSG_ID_MMI_ABM_BEARER_STATUS_IND,
	 
    
   





#line 1950 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_ABM_CODE_CHECK_POINT,



 

 
#line 1 "interface\\ps\\sap\\soc_sap.h"

































 

 
#line 45 "interface\\ps\\sap\\soc_sap.h"
     
     
    MSG_ID_SOC_TCPIP_ACCEPT_IND = MSG_ID_SOC_CODE_BEGIN,
    MSG_ID_SOC_TCPIP_RECEIVE_IND,
    MSG_ID_SOC_TCPIP_ATTACH_CNF,
    MSG_ID_SOC_TCPIP_DETACH_CNF,
    MSG_ID_SOC_TCPIP_LISTEN_CNF,
    MSG_ID_SOC_TCPIP_BIND_CNF,
    MSG_ID_SOC_TCPIP_CONNECT_CNF,
    MSG_ID_SOC_TCPIP_DISCONNECT_CNF,
    MSG_ID_SOC_TCPIP_ERRMSG_IND, 
    MSG_ID_SOC_TCPIP_MTU_UPDATE_IND,
    MSG_ID_SOC_TCPIP_CLOSE_IND,
    MSG_ID_SOC_TCPIP_OPTION_CNF,
    MSG_ID_SOC_TCPIP_SHUTDOWN_CNF,
     
   
    MSG_ID_APP_SOC_NOTIFY_IND, 















 
    MSG_ID_APP_SOC_GET_HOST_BY_NAME_IND, 











 
    MSG_ID_APP_SOC_GET_HOST_BY_ADDR_IND, 











 
    MSG_ID_APP_SOC_GET_HOST_BY_SRV_IND, 











 
    MSG_ID_APP_SOC_GET_HOST_BY_NAPTR_IND, 











 
     
     
    MSG_ID_APP_SOC_DEACTIVATE_REQ,  
    MSG_ID_APP_SOC_ACTIVATE_REQ,

     
    MSG_ID_SMSAL_SOC_REG_PORT_CNF, 
    MSG_ID_SMSAL_SOC_DATA_IND,

     
    MSG_ID_FLC_SOC_UL_SSPDU_RESUME,

        
    MSG_ID_SOC_ABM_ACTIVATE_CNF,
    MSG_ID_SOC_ABM_DEACTIVATE_CNF,
    MSG_ID_SOC_ABM_DEACTIVATE_IND,
    MSG_ID_SOC_ABM_IPADDR_UPDATE_IND, 
    MSG_ID_SOC_ABM_RESUME_QOS_CTX_CNF,
    
    
 
    MSG_ID_APP_SSL_DATA_INPUT_MSG,
    MSG_ID_APP_SSL_DATA_OUTPUT_MSG,
    
     
    MSG_ID_INET_APP_UT_FUNC_REQ,
    MSG_ID_INET_APP_UT_FUNC_CNF,
    MSG_ID_INET_APP_UT_NOTIFY_IND,
    MSG_ID_INET_APP_UT_TXDATA_REQ,
    
    MSG_ID_SOC_CODE_END = MSG_ID_INET_APP_UT_TXDATA_REQ,
     




 

#line 1961 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_SOC_CODE_CHECK_POINT,



     

 
#line 1 "interface\\ps\\sap\\tcpip_sap.h"

































 
 







 

 























 

#line 79 "interface\\ps\\sap\\tcpip_sap.h"
    
 
    MSG_ID_SOC_TCPIP_BEARER_REQ = MSG_ID_TCPIP_CODE_BEGIN,
    MSG_ID_SOC_TCPIP_ATTACH_REQ, 




 
    MSG_ID_SOC_TCPIP_BIND_REQ,   




 
    MSG_ID_SOC_TCPIP_CONNECT_REQ, 





 
    MSG_ID_SOC_TCPIP_DISCONNECT_REQ, 




 
    MSG_ID_SOC_TCPIP_LISTEN_REQ,  





 
    MSG_ID_SOC_TCPIP_ACCEPT_RES,  





 
    MSG_ID_SOC_TCPIP_SEND_REQ,  





 
    MSG_ID_SOC_TCPIP_DETACH_REQ, 




 
    MSG_ID_SOC_TCPIP_SHUTDOWN_REQ, 




 
    MSG_ID_SOC_TCPIP_SRPDU_RELEASE_RES, 





 
    MSG_ID_SOC_TCPIP_OPTION_REQ,   




 
    MSG_ID_TCPIP_TCM_DATA_IND, 






 
    MSG_ID_TCPIP_PPP_DATA_IND, 





 
    MSG_ID_SOC_TCPIP_SET_ACCT_REQ, 




 
    MSG_ID_SOC_TCPIP_BEARER_CTX_REQ, 






 
    
    MSG_ID_DHCP_TCPIP_ARP_PROBE_REQ, 




 
    MSG_ID_DHCP_TCPIP_ARP_PROBE_CNF, 




 
    MSG_ID_DHCP_TCPIP_ARP_QUERY_REQ, 




 
    MSG_ID_DHCP_TCPIP_ARP_QUERY_CNF, 




 
    MSG_ID_DHCP_TCPIP_GW_ARP_PROBE_REQ, 




 
    MSG_ID_DHCP_TCPIP_GW_ARP_PROBE_CNF, 




 


    MSG_ID_ABM_TCPIP_GET_BEARER_INFO_REQ, 




 
    MSG_ID_ABM_TCPIP_GET_BEARER_INFO_CNF, 




 
    MSG_ID_ABM_TCPIP_BEARER_REQ, 




 
    
    MSG_ID_TCPIP_WNDRV_DATA_IND, 




 
    
    MSG_ID_TCPIP_LOOPBK_DATA_IND, 




 
    
    MSG_ID_FLC_TCPIP_UL_TPDU_RESUME, 




 
    MSG_ID_SOC_TCPIP_DL_SRPDU_RESUME, 




 
    MSG_ID_SOC_DL_SRPDU_HIGH_THRESHOLD_HIT, 




 
		
    MSG_ID_ABM_TCPIP_BEARER_INFO_IND, 




 

		
    MSG_ID_ABM_TCPIP_RESET_BEARER_INFO_REQ, 




 

    MSG_ID_ABM_TCPIP_RESET_BEARER_INFO_CNF, 





 
                                             
    MSG_ID_TCPIP_CODE_END = MSG_ID_ABM_TCPIP_RESET_BEARER_INFO_CNF, 
 

#line 1972 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_TCPIP_CODE_CHECK_POINT,



 

 
#line 1 "ps\\interfaces\\sap\\em_sap.h"

































 
 







 

 
















































































 








 

 
 	 
 	  	
	MSG_ID_L4CPS_EM_UPDATE_REQ = MSG_ID_EM_CODE_BEGIN,
	
	 
	MSG_ID_L4CPS_EM_CELL_RESEL_SUSPEND_REQ,   
	MSG_ID_L4CPS_EM_CELL_RESEL_SUSPEND_CNF,   

	MSG_ID_L4CPS_EM_CELL_RESEL_RESUME_REQ,     
	MSG_ID_L4CPS_EM_CELL_RESEL_RESUME_CNF,     
	
        
	MSG_ID_L4CPS_EM_SET_CELL_LOCK_REQ,
       MSG_ID_L4CPS_EM_SET_CELL_LOCK_CNF,
       
	MSG_ID_L4CPS_EM_GET_CELL_LOCK_REQ,
       MSG_ID_L4CPS_EM_GET_CELL_LOCK_CNF,

	 
	MSG_ID_L4CPS_EM_FEATURE_COMMAND_REQ,
	MSG_ID_L4CPS_EM_FEATURE_COMMAND_CNF,

     

     	
   MSG_ID_L4CPS_EM_SET_CELL_ID_LOCK_REQ,
     	
   MSG_ID_L4CPS_EM_SET_CELL_ID_LOCK_CNF,

     

	 
	MSG_ID_TSTL4C_EM_UPDATE_REQ,

	 
	MSG_ID_L4CPS_EM_NW_EVENT_NOTIFY_REQ,
	MSG_ID_L4CPS_EM_NW_EVENT_NOTIFY_CNF,
	MSG_ID_L4CPS_EM_NW_EVENT_NOTIFY_IND,		
	
	  	
        MSG_ID_L4CPS_EM_UPDATE_CNF,
	MSG_ID_L4CPS_EM_STATUS_IND,
#line 186 "ps\\interfaces\\sap\\em_sap.h"
	
     
    MSG_ID_L4C_VT_EM_GET_CONFIG_REQ,
    MSG_ID_L4C_VT_EM_GET_CONFIG_CNF,
    MSG_ID_L4C_VT_EM_SET_CONFIG_REQ,

     
    MSG_ID_L4CL1_EM_RF_TEST_GSM_STOP_REQ,
    MSG_ID_L4CL1_EM_RF_TEST_GSM_TX_TEST_REQ,
    MSG_ID_L4CL1_EM_RF_TEST_GSM_RX_TEST_REQ,
    MSG_ID_L4CL1_EM_RF_TEST_GSM_POWER_SCAN_REQ,
    MSG_ID_L4CL1_EM_RF_TEST_GSM_POWER_SCAN_CNF,

    MSG_ID_EM_CODE_END = MSG_ID_L4CL1_EM_RF_TEST_GSM_POWER_SCAN_REQ,
	 

#line 1983 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_EM_CODE_CHECK_POINT,



  

 
#line 1 "interface\\inet_ps\\email_sap.h"

































 
#line 43 "interface\\inet_ps\\email_sap.h"

    MSG_ID_EMAIL_PS_SAP_DEFINE_BEGIN = MSG_ID_EMAIL_CODE_BEGIN,  

    MSG_ID_EMAIL_PS_CREATE_INSTANCE_REQ, 



 
    MSG_ID_EMAIL_PS_CREATE_INSTANCE_RSP, 



 

    MSG_ID_EMAIL_PS_DESTROY_INSTANCE_REQ,



 
    MSG_ID_EMAIL_PS_DESTROY_INSTANCE_RSP, 



   

    MSG_ID_EMAIL_PS_CONN_REQ,             



 
    MSG_ID_EMAIL_PS_CONN_RSP,             



 
    MSG_ID_EMAIL_PS_CONN_IND,             



 

    MSG_ID_EMAIL_PS_DISCONN_REQ,          



 
    MSG_ID_EMAIL_PS_DISCONN_RSP,         



 
    MSG_ID_EMAIL_PS_DISCONN_IND,         



 

    MSG_ID_EMAIL_PS_AUTH_REQ,            



 
    MSG_ID_EMAIL_PS_AUTH_RSP,            



 

    MSG_ID_EMAIL_PS_ABORT_REQ,          



 
    MSG_ID_EMAIL_PS_ABORT_RSP,          



 

    MSG_ID_EMAIL_PS_MSG_SEND_REQ,       



 
    MSG_ID_EMAIL_PS_MSG_SEND_RSP,       



 
    MSG_ID_EMAIL_PS_MSG_SEND_IND,       



 
    MSG_ID_EMAIL_PS_MSG_SEND_CNF,       



 

    MSG_ID_EMAIL_PS_FLD_STATE_REQ,      



 
    MSG_ID_EMAIL_PS_FLD_STATE_RSP,     




 

    MSG_ID_EMAIL_PS_FLD_OPEN_REQ,      



 
    MSG_ID_EMAIL_PS_FLD_OPEN_RSP,      



 

    MSG_ID_EMAIL_PS_FLD_CLOSE_REQ,     




 
    MSG_ID_EMAIL_PS_FLD_CLOSE_RSP,     



 

    MSG_ID_EMAIL_PS_FLD_LIST_REQ,     




 
    MSG_ID_EMAIL_PS_FLD_LIST_RSP,     



 

    MSG_ID_EMAIL_PS_FLD_SUBSCRIBE_REQ,




 
    MSG_ID_EMAIL_PS_FLD_SUBSCRIBE_RSP,



 

    MSG_ID_EMAIL_PS_FLD_UNSUBSCRIBE_REQ,




 
    MSG_ID_EMAIL_PS_FLD_UNSUBSCRIBE_RSP,



 

    MSG_ID_EMAIL_PS_FLD_CREATE_REQ,




 
    MSG_ID_EMAIL_PS_FLD_CREATE_RSP,



 

    MSG_ID_EMAIL_PS_FLD_DELETE_REQ,




 
    MSG_ID_EMAIL_PS_FLD_DELETE_RSP,



 

    MSG_ID_EMAIL_PS_FLD_RENAME_REQ,




 
    MSG_ID_EMAIL_PS_FLD_RENAME_RSP,



 

    MSG_ID_EMAIL_PS_MSG_SIZE_LIST_REQ,



 
    MSG_ID_EMAIL_PS_MSG_SIZE_LIST_RSP,



 

    MSG_ID_EMAIL_PS_MSG_UID_LIST_REQ,



 
    MSG_ID_EMAIL_PS_MSG_UID_LIST_RSP,



 

    MSG_ID_EMAIL_PS_MSG_FETCH_REQ,



 
    MSG_ID_EMAIL_PS_MSG_FETCH_RSP,



 
    MSG_ID_EMAIL_PS_MSG_FETCH_IND,




 
    MSG_ID_EMAIL_PS_MSG_FETCH_CNF,



 

    MSG_ID_EMAIL_PS_MSG_DELETE_REQ,




 
    MSG_ID_EMAIL_PS_MSG_DELETE_RSP,



 

    MSG_ID_EMAIL_PS_MSG_FLAGS_GET_REQ,




 
    MSG_ID_EMAIL_PS_MSG_FLAGS_GET_RSP,



 

    MSG_ID_EMAIL_PS_MSG_FLAGS_SET_REQ,




 
    MSG_ID_EMAIL_PS_MSG_FLAGS_SET_RSP,



 

    MSG_ID_EMAIL_PS_MSG_APPEND_REQ,




 
    MSG_ID_EMAIL_PS_MSG_APPEND_RSP,



 
    MSG_ID_EMAIL_PS_MSG_APPEND_IND,



 
    MSG_ID_EMAIL_PS_MSG_APPEND_CNF,



 

    MSG_ID_EMAIL_PS_MSG_COPY_REQ,




 
    MSG_ID_EMAIL_PS_MSG_COPY_RSP,



 

    MSG_ID_EMAIL_PS_MSG_SEARCH_REQ,




 
    MSG_ID_EMAIL_PS_MSG_SEARCH_RSP,



 

    MSG_ID_EMAIL_PS_MSG_EXPUNGE_REQ,




 
    MSG_ID_EMAIL_PS_MSG_EXPUNGE_RSP,



 

    MSG_ID_EMAIL_PS_IMAP_PUSH_IND,



 
    MSG_ID_EMAIL_PS_IMAP_PUSH_CNF,



 

    MSG_ID_EMAIL_PS_SAP_DEFINE_END, 

#line 1994 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_EMAIL_CODE_CHECK_POINT,



 

 
#line 1 "interface\\inet_ps\\imps_sap.h"

































 
 







 

 























 

 
    MSG_ID_MMI_IMPS_LOGIN_REQ = MSG_ID_IMPS_CODE_BEGIN,
    MSG_ID_MMI_IMPS_LOGIN_AUTH_IND,
    MSG_ID_MMI_IMPS_LOGIN_RSP,

    MSG_ID_MMI_IMPS_LOGIN_PROGRESS_IND,

    MSG_ID_MMI_IMPS_LOGOUT_REQ,
    MSG_ID_MMI_IMPS_LOGOUT_RSP,

    MSG_ID_MMI_IMPS_DISCONNECT_IND,

     
    MSG_ID_MMI_IMPS_BEARER_DISCONNECT_IND,
    MSG_ID_MMI_IMPS_BEARER_RECONNECT_REQ,
    MSG_ID_MMI_IMPS_BEARER_RECONNECT_RSP,
    
    MSG_ID_MMI_IMPS_ABORT_LOGIN_REQ,
    MSG_ID_MMI_IMPS_ABORT_LOGIN_RSP,
    MSG_ID_MMI_IMPS_ABORT_SEARCH_REQ,
    MSG_ID_MMI_IMPS_ABORT_SEARCH_RSP,

    MSG_ID_MMI_IMPS_SEARCH_REQ,
    MSG_ID_MMI_IMPS_SEARCH_RSP,

    MSG_ID_MMI_IMPS_INVITE_REQ,
    MSG_ID_MMI_IMPS_INVITE_RSP,
    MSG_ID_MMI_IMPS_INVITE_IND,
    MSG_ID_MMI_IMPS_INVITE_REPLY_REQ,
    MSG_ID_MMI_IMPS_INVITE_REPLY_RSP,
    MSG_ID_MMI_IMPS_INVITE_RESPONSE_IND,

    MSG_ID_MMI_IMPS_DELIVERY_METHOD_REQ,
    MSG_ID_MMI_IMPS_DELIVERY_METHOD_RSP,
    MSG_ID_MMI_IMPS_SEND_MESSAGE_REQ,
    MSG_ID_MMI_IMPS_SEND_MESSAGE_RSP,
    MSG_ID_MMI_IMPS_SEND_MESSAGE_RESULT_IND,
    MSG_ID_MMI_IMPS_NEWMESSAGE_IND,
    MSG_ID_MMI_IMPS_MESSAGENOTIFY_IND,
    MSG_ID_MMI_IMPS_OFFLINE_MESSAGE_IND,
    MSG_ID_MMI_IMPS_GET_MESSAGE_REQ,
    MSG_ID_MMI_IMPS_GET_MESSAGE_RSP,
    MSG_ID_MMI_IMPS_REJECT_MESSAGE_REQ,
    MSG_ID_MMI_IMPS_REJECT_MESSAGE_RSP,
    MSG_ID_MMI_IMPS_FORWARD_MESSAGE_REQ,
    MSG_ID_MMI_IMPS_FORWARD_MESSAGE_RSP,
    MSG_ID_MMI_IMPS_LIST_MESSAGE_REQ,
    MSG_ID_MMI_IMPS_LIST_MESSAGE_RSP,
    MSG_ID_MMI_IMPS_GET_BLOCK_LIST_REQ,
    MSG_ID_MMI_IMPS_GET_BLOCK_LIST_RSP,
    MSG_ID_MMI_IMPS_BLOCK_ENTITY_REQ,
    MSG_ID_MMI_IMPS_BLOCK_ENTITY_RSP,

    MSG_ID_MMI_IMPS_CREATE_GROUP_REQ,
    MSG_ID_MMI_IMPS_CREATE_GROUP_RSP,
    MSG_ID_MMI_IMPS_DELETE_GROUP_REQ,
    MSG_ID_MMI_IMPS_DELETE_GROUP_RSP,
    MSG_ID_MMI_IMPS_JOIN_GROUP_REQ,
    MSG_ID_MMI_IMPS_JOIN_GROUP_RSP,
    MSG_ID_MMI_IMPS_LEAVE_GROUP_REQ,
    MSG_ID_MMI_IMPS_LEAVE_GROUP_RSP,
    MSG_ID_MMI_IMPS_LEAVE_GROUP_IND,
    MSG_ID_MMI_IMPS_GROUP_CHANGE_NOTIFY_IND,

    MSG_ID_MMI_IMPS_ADD_CONTACT_LIST_REQ,
    MSG_ID_MMI_IMPS_ADD_CONTACT_LIST_RSP,
    MSG_ID_MMI_IMPS_GET_CONTACT_LIST_REQ,
    MSG_ID_MMI_IMPS_GET_CONTACT_LIST_RSP,
    MSG_ID_MMI_IMPS_ABORT_GET_CONTACT_LIST_REQ,
    MSG_ID_MMI_IMPS_ABORT_GET_CONTACT_LIST_RSP,
    MSG_ID_MMI_IMPS_VIEW_CONTACT_LIST_REQ,
    MSG_ID_MMI_IMPS_VIEW_CONTACT_LIST_RSP,
    MSG_ID_MMI_IMPS_ABORT_VIEW_CONTACT_LIST_REQ,
    MSG_ID_MMI_IMPS_ABORT_VIEW_CONTACT_LIST_RSP,
    MSG_ID_MMI_IMPS_EDIT_CONTACT_LIST_REQ,
    MSG_ID_MMI_IMPS_EDIT_CONTACT_LIST_RSP,
    MSG_ID_MMI_IMPS_DEL_CONTACT_LIST_REQ,
    MSG_ID_MMI_IMPS_DEL_CONTACT_LIST_RSP,
    MSG_ID_MMI_IMPS_SUBS_PA_REQ,
    MSG_ID_MMI_IMPS_SUBS_PA_RSP,
    MSG_ID_MMI_IMPS_ABORT_SUBS_PA_REQ,
    MSG_ID_MMI_IMPS_ABORT_SUBS_PA_RSP,
    MSG_ID_MMI_IMPS_UNSUBS_PA_REQ,
    MSG_ID_MMI_IMPS_UNSUBS_PA_RSP,
    MSG_ID_MMI_IMPS_GET_PA_REQ,
    MSG_ID_MMI_IMPS_GET_PA_RSP,
    MSG_ID_MMI_IMPS_ABORT_GET_PA_REQ,
    MSG_ID_MMI_IMPS_ABORT_GET_PA_RSP,
    MSG_ID_MMI_IMPS_PA_NOTIFY_IND,
    MSG_ID_MMI_IMPS_UPDATE_PA_REQ,
    MSG_ID_MMI_IMPS_UPDATE_PA_RSP,
    MSG_ID_MMI_IMPS_PA_AUTH_IND,
    MSG_ID_MMI_IMPS_PA_AUTH_USER_REQ,
    MSG_ID_MMI_IMPS_PA_AUTH_USER_RSP,
    MSG_ID_MMI_IMPS_PA_CANCEL_AUTH_REQ,
    MSG_ID_MMI_IMPS_PA_CANCEL_AUTH_RSP,
    MSG_ID_MMI_IMPS_GET_WATCHER_LIST_REQ,
    MSG_ID_MMI_IMPS_GET_WATCHER_LIST_RSP,
    MSG_ID_MMI_IMPS_ABORT_GET_WATCHER_LIST_REQ,
    MSG_ID_MMI_IMPS_ABORT_GET_WATCHER_LIST_RSP,
    MSG_ID_MMI_IMPS_PUSH_IND,
    MSG_ID_MMI_IMPS_READY_IND,

    MSG_ID_MMI_IMPS_GET_GROUP_MEMBER_REQ,
    MSG_ID_MMI_IMPS_GET_GROUP_MEMBER_RSP,
    MSG_ID_MMI_IMPS_GET_JOINED_USER_REQ,
    MSG_ID_MMI_IMPS_GET_JOINED_USER_RSP,
    MSG_ID_MMI_IMPS_ADD_GROUP_MEMBER_REQ,
    MSG_ID_MMI_IMPS_ADD_GROUP_MEMBER_RSP,
    MSG_ID_MMI_IMPS_REMOVE_GROUP_MEMBER_REQ,
    MSG_ID_MMI_IMPS_REMOVE_GROUP_MEMBER_RSP,
    MSG_ID_MMI_IMPS_MEMBER_ACCESS_REQ,
    MSG_ID_MMI_IMPS_MEMBER_ACCESS_RSP,
    MSG_ID_MMI_IMPS_REJECT_GROUP_USER_REQ,
    MSG_ID_MMI_IMPS_REJECT_GROUP_USER_RSP,
    MSG_ID_MMI_IMPS_ABORT_GET_GROUP_MEMBER_REQ,
    MSG_ID_MMI_IMPS_ABORT_GET_GROUP_MEMBER_RSP,
    MSG_ID_MMI_IMPS_ABORT_GET_JOINED_USER_REQ,
    MSG_ID_MMI_IMPS_ABORT_GET_JOINED_USER_RSP,
    MSG_ID_MMI_IMPS_ABORT_GET_REJECTED_USER_REQ,
    MSG_ID_MMI_IMPS_ABORT_GET_REJECTED_USER_RSP,

    MSG_ID_MMI_IMPS_SYSTEM_MSG_IND,
    MSG_ID_MMI_IMPS_SYSTEM_MSG_USER_REQ,
    MSG_ID_MMI_IMPS_SYSTEM_MSG_USER_RSP,
    MSG_ID_MMI_IMPS_SUBS_NOTIFY_REQ,
    MSG_ID_MMI_IMPS_SUBS_NOTIFY_RSP,
    MSG_ID_MMI_IMPS_UNSUBS_NOTIFY_REQ,
    MSG_ID_MMI_IMPS_UNSUBS_NOTIFY_RSP,  
    MSG_ID_MMI_IMPS_NOTIFY_REQUEST_IND,
    MSG_ID_MMI_IMPS_GET_PP_REQ,
    MSG_ID_MMI_IMPS_GET_PP_RSP,
    MSG_ID_MMI_IMPS_ABORT_GET_PP_REQ,
    MSG_ID_MMI_IMPS_ABORT_GET_PP_RSP,
    MSG_ID_MMI_IMPS_UPDATE_PP_REQ,
    MSG_ID_MMI_IMPS_UPDATE_PP_RSP,
    MSG_ID_MMI_IMPS_DL_FILE_REQ,
    MSG_ID_MMI_IMPS_DL_FILE_RSP,
    MSG_ID_MMI_IMPS_CREATE_ATTRIBUTE_LIST_REQ,
    MSG_ID_MMI_IMPS_CREATE_ATTRIBUTE_LIST_RSP,
    MSG_ID_MMI_IMPS_HTTP_AUTH_IND,   
    MSG_ID_MMI_IMPS_HTTP_AUTH_RES,
    MSG_ID_MMI_IMPS_EXT_CONV_REQ,
    MSG_ID_MMI_IMPS_EXT_CONV_RSP,
    MSG_ID_MMI_IMPS_EXT_CONV_IND,
    MSG_ID_IMPS_CODE_END = MSG_ID_MMI_IMPS_EXT_CONV_IND,
 
#line 2004 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_IMPS_CODE_CHECK_POINT,



 

 
#line 1 "interface\\inet_ps\\sip_sap.h"

































 

 

        
    MSG_ID_SIP_CREATE_UA_REQ = SIP_MSG_CODE_BEGIN,
    MSG_ID_SIP_DELETE_UA_REQ,
    MSG_ID_SIP_ACTIVATE_UA_REQ,
    MSG_ID_SIP_DEACTIVATE_UA_REQ,
    MSG_ID_SIP_ABORT_UA_REQ,
    MSG_ID_SIP_UPDATE_UA_REQ,
    MSG_ID_SIP_MSG_REQ,
    MSG_ID_SIP_ABORT_MSG_REQ,
    
        
    MSG_ID_SIP_CREATE_UA_RSP,
    MSG_ID_SIP_DELETE_UA_RSP,
    MSG_ID_SIP_ACTIVATE_UA_RSP,
    MSG_ID_SIP_DEACTIVATE_UA_RSP,
    MSG_ID_SIP_ABORT_UA_RSP,
    MSG_ID_SIP_UPDATE_UA_RSP,
    MSG_ID_SIP_MSG_IND,
    MSG_ID_SIP_ABORT_MSG_RSP,
    MSG_ID_SIP_UA_STATUS_IND,
    MSG_ID_SIP_CODE_END = MSG_ID_SIP_UA_STATUS_IND,
   
 
#line 2013 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_SIP_CODE_CHECK_POINT,
#line 2020 "config\\include\\hal\\user_msgid_hal.h"
 

 
#line 1 "interface\\bt\\bluetooth_sap.h"

































 



























































































































































































































































































































































































 
   MSG_ID_BT_NOTIFY_EVM_IND = BT_MSG_CODE_BEGIN,
   MSG_ID_BT_POWERON_REQ,
   MSG_ID_BT_POWERON_CNF,
   MSG_ID_BT_ENGINEER_MODE_POWERON_REQ,
   MSG_ID_BT_ENGINEER_MODE_POWERON_CNF,
   MSG_ID_BT_POWEROFF_REQ,
   MSG_ID_BT_POWEROFF_CNF,
   MSG_ID_BT_ENGINEER_MODE_POWEROFF_REQ,
   MSG_ID_BT_ENGINEER_MODE_POWEROFF_CNF,   
   MSG_ID_BT_RESET_REQ_IND,
   MSG_ID_BT_MMI_RESET_REQ,
   MSG_ID_BT_MMI_RESET_CNF,
   MSG_ID_BT_L4C_RESET_REQ,
   MSG_ID_BT_L4C_RESET_CNF,   
   MSG_ID_BT_RESTART_REQ,
   MSG_ID_BT_LOCK_REQ,	 
   MSG_ID_BT_READY_IND,
   MSG_ID_BT_DATA_TO_READ_IND,
   MSG_ID_BT_HOST_WAKE_UP_IND,
   MSG_ID_BT_WIFI_SET_CHNL_REQ,         
   MSG_ID_BT_SET_UART_RX_SPEED_LOW_REQ,
   MSG_ID_BT_SET_UART_RX_SPEED_HIGH_REQ,
   MSG_ID_BT_DETECT_CHIP_REQ,
   MSG_ID_BT_DETECT_CHIP_CNF,
   MSG_ID_BT_ACTIVE_UART_CHANGE_REQ,
   MSG_ID_BT_JSR_TEST_INIF_REQ,   
   MSG_ID_BT_JSR_TEST_CMD1_REQ,   
   MSG_ID_BT_JSR_TEST_CMD2_REQ,      
   MSG_ID_BT_JSR_TEST_CMD3_REQ,   
   MSG_ID_BT_JSR_TEST_CMD4_REQ,      
   MSG_ID_BT_JSR_TEST_CMD5_REQ,      
   MSG_ID_BT_JSR_TEST_CMD6_REQ,  
   MSG_ID_BT_JSR_TEST_CMD7_REQ,  
   MSG_ID_BT_JSR_TEST_CMD8_REQ,
   MSG_ID_BT_JSR_TEST_CMD9_REQ,
   MSG_ID_BT_JSR_TEST_CMD10_REQ,
   MSG_ID_BT_JSR_TEST_CMD11_REQ,
   MSG_ID_BT_JSR_TEST_CMD12_REQ,
   MSG_ID_BT_JSR_TEST_CMD13_REQ,
   MSG_ID_BT_JSR_TEST_CMD14_REQ,
   MSG_ID_BT_JSR_TEST_CMD15_REQ,
    
   MSG_ID_BT_TEST_MODE_REQ,      
   MSG_ID_BT_TEST_CMD_REQ,
   MSG_ID_BT_L4C_TEST_CMD_CNF,
   MSG_ID_BT_PCM_LB_REQ,
   MSG_ID_BT_PCM_LB_CNF,
   MSG_ID_BT_SET_BD_ADDR_REQ,
   MSG_ID_BT_SET_BD_ADDR_CNF,
   MSG_ID_BT_SET_POWER_TABLE_REQ,
   MSG_ID_BT_SET_ANA_TRIM_REQ,
   MSG_ID_BT_L4C_AT_GENERAL_CNF,
   MSG_ID_BT_GET_BD_ADDR_REQ,
   MSG_ID_BT_GET_BD_ADDR_CNF,
   MSG_ID_BT_GET_BT_VERSION_REQ,
   MSG_ID_BT_GET_BT_VERSION_CNF,   
   MSG_ID_BT_ENGINEER_MODE_CNF,   
   MSG_ID_BT_ENGINEER_MODE_TXRX_TEST_REQ,
   MSG_ID_BT_ENGINEER_MODE_TXRX_TEST_CNF,
   MSG_ID_BT_ENGINEER_MODE_POWER_TEST_REQ,
   MSG_ID_BT_ENGINEER_MODE_POWER_TEST_CNF,
   MSG_ID_BT_ENGINEER_MODE_DEVICE_TEST_REQ,
   MSG_ID_BT_READ_RSSI_REQ,
   MSG_ID_BT_READ_RSSI_CNF,
   MSG_ID_BT_SSP_DEBUG_MODE_REQ,
   MSG_ID_BT_SSP_DEBUG_MODE_CNF,
    MSG_TAG_BT_SAP_START_MSG,
    
   MSG_TAG_BT_SPP_FIRST_REQ_MSG,
   MSG_ID_BT_SPP_ACTIVATE_REQ = MSG_TAG_BT_SPP_FIRST_REQ_MSG,
   MSG_ID_BT_SPP_CONNECT_REQ,  
   MSG_ID_BT_SPP_SCO_CONNECT_REQ, 
   MSG_ID_BT_SPP_SEND_DATA_REQ,
   MSG_ID_BT_SPP_GET_DATA_REQ,   
   MSG_ID_BT_SPP_DEACTIVATE_REQ,
   MSG_ID_BT_SPP_DISCONNECT_REQ,
   MSG_ID_BT_SPP_AUDIO_CONNECT_REQ,
   MSG_ID_BT_SPP_AUDIO_DISCONNECT_REQ, 
   MSG_ID_BT_SPP_CONNECT_IND_RES,
   MSG_ID_BT_SPP_AUTH_RSP, 
    
   MSG_ID_BT_SPP_UART_OWNER_CNF,
    
   MSG_ID_BT_SPP_UART_PLUGOUT_CNF,
   MSG_ID_BT_DUN_CONNECT_REQ,    
   MSG_ID_BT_DUN_ACTIVATE_REQ,
   MSG_ID_BT_DUN_DEACTIVATE_REQ,
   MSG_ID_BT_DUN_DISCONNECT_REQ,
   MSG_ID_BT_DUN_CONNECT_IND_RES,
   MSG_ID_BT_DUN_AUTH_RSP,
   
    
   MSG_ID_BT_FAX_ACTIVATE_REQ,
   MSG_ID_BT_FAX_DEACTIVATE_REQ,
   MSG_ID_BT_FAX_DISCONNECT_REQ,
   MSG_ID_BT_FAX_CONNECT_IND_RES,
   MSG_ID_BT_FAX_AUTH_RSP,
   MSG_TAG_BT_SPP_LAST_REQ_MSG = MSG_ID_BT_FAX_AUTH_RSP,  

    
   MSG_ID_BT_SPP_CONNECT_IND,
   MSG_ID_BT_SPP_CONNECT_IND_REQ,
   MSG_ID_BT_SPP_SCO_CONNECT_IND,   
   MSG_ID_BT_SPP_DISCONNECT_IND,
   MSG_ID_BT_SPP_ACTIVATE_CNF,
   MSG_ID_BT_SPP_DEACTIVATE_CNF,
   MSG_ID_BT_SPP_DISCONNECT_CNF,
   MSG_ID_BT_SPP_AUTH_REQ, 
   MSG_ID_BT_SPP_AUDIO_CONNECT_CNF,
   MSG_ID_BT_SPP_AUDIO_CONNECT_IND,
   MSG_ID_BT_SPP_AUDIO_DISCONNECT_CNF,
   MSG_ID_BT_SPP_AUDIO_DISCONNECT_IND, 
   MSG_ID_BT_SPP_SCO_RSSI_IND, 
   MSG_ID_BT_SPP_CONNECT_CNF,   

   MSG_ID_BT_SPP_UART_OWNER_IND,  

    
   MSG_ID_BT_DUN_CONNECT_IND,
   MSG_ID_BT_DUN_CONNECT_IND_REQ,
   MSG_ID_BT_DUN_DISCONNECT_IND,
   MSG_ID_BT_DUN_ACTIVATE_CNF,
   MSG_ID_BT_DUN_DEACTIVATE_CNF,
   MSG_ID_BT_DUN_DISCONNECT_CNF,
   MSG_ID_BT_DUN_AUTH_REQ,
   MSG_ID_BT_DUN_CONNECT_CNF,     

    
   MSG_ID_BT_FAX_CONNECT_IND,
   MSG_ID_BT_FAX_CONNECT_IND_REQ,
   MSG_ID_BT_FAX_DISCONNECT_IND,
   MSG_ID_BT_FAX_ACTIVATE_CNF,
   MSG_ID_BT_FAX_DEACTIVATE_CNF,
   MSG_ID_BT_FAX_DISCONNECT_CNF,
   MSG_ID_BT_FAX_AUTH_REQ,

     
    MSG_TAG_BT_BM_FIRST_REQ_MSG,
    MSG_ID_BT_BM_DISCOVERY_REQ = MSG_TAG_BT_BM_FIRST_REQ_MSG,
    MSG_ID_BT_BM_DISCOVERY_CANCEL_REQ,
    MSG_ID_BT_BM_WRITE_LOCAL_NAME_REQ,
    MSG_ID_BT_BM_READ_LOCAL_NAME_REQ,
    MSG_ID_BT_BM_READ_REMOTE_NAME_REQ,
    MSG_ID_BT_BM_WRITE_SCANENABLE_MODE_REQ,
    MSG_ID_BT_BM_READ_SCANENABLE_MODE_REQ,
    MSG_ID_BT_BM_READ_LOCAL_ADDR_REQ,
    MSG_ID_BT_BM_READ_LOCAL_COD_REQ,
    MSG_ID_BT_BM_WRITE_LOCAL_COD_REQ,
    MSG_ID_BT_BM_READ_PROPERTY_REQ,
    MSG_ID_BT_BM_WRITE_AUTHENTICATION_MODE_REQ,
    MSG_ID_BT_BM_PIN_CODE_RSP,
    MSG_ID_BT_BM_SECURITY_USER_CONFIRM_RSP,
    MSG_ID_BT_BM_SECURITY_KEYPRESS_NOTIFY_RSP,
    MSG_ID_BT_BM_SECURITY_KEYPRESS_NOTIFY_CANCEL_REQ,   
    MSG_ID_BT_BM_BLOCK_ACTIVE_LINK_REQ,    
    MSG_ID_BT_BM_BLOCK_LIST_UPDATE_REQ,
    MSG_ID_BT_BM_BONDING_REQ,
    MSG_ID_BT_BM_DELETE_TRUST_REQ,
    MSG_ID_BT_BM_DELETE_TRUST_ALL_REQ,
    MSG_ID_BT_BM_BONDING_CANCEL_REQ,
    MSG_ID_BT_BM_PAIRING_CANCEL_REQ,
    MSG_ID_BT_BM_SAVE_SETTING_REQ,
    MSG_ID_BT_BM_RESTORE_SETTING_REQ,
    MSG_ID_BT_BM_SERVICE_SEARCH_REQ,
    MSG_ID_BT_BM_SEARCH_ATTRIBUTE_REQ,
    MSG_ID_BT_BM_SEARCH_RAW_REQ,
    MSG_ID_BT_BM_LINK_ALLOW_REQ,
    MSG_ID_BT_BM_LINK_DISALLOW_REQ,
    MSG_ID_BT_BM_LINK_CONNECT_ACCEPT_NOT_AUTO_REQ,
    MSG_ID_BT_BM_LINK_CONNECT_ACCEPT_RSP,    
    MSG_ID_BT_BM_GET_LINK_STATE_REQ,
    MSG_ID_BT_BM_SET_LINK_STATE_REQ,   
    MSG_TAG_BT_BM_LAST_REQ_MSG = MSG_ID_BT_BM_SET_LINK_STATE_REQ,

     
    MSG_TAG_BT_BMAPP_FIRST_REQ_MSG,
    MSG_ID_BT_BM_DISCOVERY_RESULT_IND = MSG_TAG_BT_BMAPP_FIRST_REQ_MSG,
    MSG_ID_BT_BM_DISCOVERY_CNF,
    MSG_ID_BT_BM_DISCOVERY_CANCEL_CNF,
    MSG_ID_BT_BM_WRITE_LOCAL_NAME_CNF,
    MSG_ID_BT_BM_READ_LOCAL_NAME_CNF,
    MSG_ID_BT_BM_READ_REMOTE_NAME_CNF,
    MSG_ID_BT_BM_WRITE_SCANENABLE_MODE_CNF,
    MSG_ID_BT_BM_READ_SCANENABLE_MODE_CNF,
    MSG_ID_BT_BM_READ_LOCAL_ADDR_CNF,
    MSG_ID_BT_BM_READ_LOCAL_COD_CNF,
    MSG_ID_BT_BM_WRITE_LOCAL_COD_CNF,
    MSG_ID_BT_BM_READ_PROPERTY_CNF,
    MSG_ID_BT_BM_WRITE_AUTHENTICATION_MODE_CNF,
    MSG_ID_BT_BM_PIN_CODE_IND,
    MSG_ID_BT_BM_SECURITY_USER_CONFIRM_IND,
    MSG_ID_BT_BM_SECURITY_PASSKEY_NOTIFY_IND,
    MSG_ID_BT_BM_SECURITY_KEYPRESS_NOTIFY_IND,
    MSG_ID_BT_BM_BLOCK_ACTIVE_LINK_CNF,
    MSG_ID_BT_BM_BLOCK_LIST_UPDATE_CNF,
    MSG_ID_BT_BM_BONDING_CNF,
    MSG_ID_BT_BM_BONDING_RESULT_IND,
    MSG_ID_BT_BM_DELETE_TRUST_CNF,
    MSG_ID_BT_BM_DELETE_TRUST_ALL_CNF,
    MSG_ID_BT_BM_BONDING_CANCEL_CNF,
    MSG_ID_BT_BM_PAIRING_CANCEL_CNF,
    MSG_ID_BT_BM_SAVE_SETTING_CNF,
    MSG_ID_BT_BM_RESTORE_SETTING_CNF,
    MSG_ID_BT_BM_SERVICE_SEARCH_RESULT_IND,
    MSG_ID_BT_BM_SERVICE_SEARCH_CNF,
    MSG_ID_BT_BM_SEARCH_ATTRIBUTE_RESULT_IND,
    MSG_ID_BT_BM_SEARCH_ATTRIBUTE_CNF,
    MSG_ID_BT_BM_SEARCH_RAW_RESULT,    
    MSG_ID_BT_BM_SEARCH_RAW_CNF,
    MSG_ID_BT_BM_LINK_STATE_IND,
    MSG_ID_BT_BM_LINK_ALLOW_CNF,
    MSG_ID_BT_BM_LINK_DISALLOW_CNF,    
    MSG_ID_BT_BM_LINK_CONNECT_ACCEPT_IND,    
    MSG_ID_BT_BM_GET_LINK_STATE_CNF,   
    MSG_ID_BT_BM_SET_LINK_STATE_CNF,   
    MSG_TAG_BT_BMAPP_LAST_REQ_MSG = MSG_ID_BT_BM_SET_LINK_STATE_CNF,


     
    MSG_TAG_BT_HSG_FIRST_REQ_MSG,
    MSG_ID_BT_HSG_ACTIVATE_REQ = MSG_TAG_BT_HSG_FIRST_REQ_MSG,
    MSG_ID_BT_HSG_DEACTIVATE_REQ,
    MSG_ID_BT_HSG_CONNECT_REQ,
	MSG_ID_BT_HSG_CONNECT_IND_RES,
    MSG_ID_BT_HSG_DISCONNECT_REQ,    
    MSG_ID_BT_HSG_BUTTONPRESS_REQ,
    MSG_ID_BT_HSG_MVOLUMEDOWN_REQ,
    MSG_ID_BT_HSG_MVOLUMEUP_REQ,
    MSG_ID_BT_HSG_SVOLUMEDOWN_REQ,
    MSG_ID_BT_HSG_SVOLUMEUP_REQ,  
    MSG_ID_BT_HSG_SPEAKER_GAIN_REQ,
    MSG_ID_BT_HSG_MIC_GAIN_REQ,
    MSG_TAG_BT_HSG_LAST_REQ_MSG = MSG_ID_BT_HSG_MIC_GAIN_REQ,
	
     
    MSG_ID_BT_HSG_ACTIVATE_CNF,
    MSG_ID_BT_HSG_DEACTIVATE_CNF,    
    MSG_ID_BT_HSG_CONNECT_CNF,
    MSG_ID_BT_HSG_CONNECT_IND,
	MSG_ID_BT_HSG_CONNECT_IND_REQ,
    MSG_ID_BT_HSG_DISCONNECT_CNF,
    MSG_ID_BT_HSG_DISCONNECT_IND,
    MSG_ID_BT_HSG_SPEAKER_GAIN_CNF,
    MSG_ID_BT_HSG_SPEAKER_GAIN_IND,
    MSG_ID_BT_HSG_MIC_GAIN_IND,
    MSG_ID_BT_HSG_MIC_GAIN_CNF,

    
   MSG_TAG_BT_HFG_FIRST_REQ_MSG,
   MSG_ID_BT_HFG_ACTIVATE_REQ = MSG_TAG_BT_HFG_FIRST_REQ_MSG,   
   MSG_ID_BT_HFG_DEACTIVATE_REQ,
   MSG_ID_BT_HFG_DISCONNECT_REQ,
   MSG_ID_BT_HFG_CONNECT_REQ,
   MSG_ID_BT_HFG_CONNECT_IND_RES,
   MSG_ID_BT_HFG_SCO_CONNECT_REQ,
   MSG_ID_BT_HFG_SCO_DISCONNECT_REQ,
   MSG_ID_BT_HFG_SPEAKER_GAIN_REQ,
   MSG_ID_BT_HFG_MIC_GAIN_REQ,
   MSG_ID_BT_HFG_SEND_DATA_REQ,
   MSG_TAG_BT_HFG_LAST_REQ_MSG = MSG_ID_BT_HFG_SEND_DATA_REQ,

    
   MSG_ID_BT_HFG_ACTIVATE_CNF,
   MSG_ID_BT_HFG_DEACTIVATE_CNF,   
   MSG_ID_BT_HFG_CONNECT_CNF,   
   MSG_ID_BT_HFG_CONNECT_IND,
   MSG_ID_BT_HFG_SLC_FINISH_IND,
   MSG_ID_BT_HFG_CONNECT_IND_REQ,
   MSG_ID_BT_HFG_DISCONNECT_CNF,   
   MSG_ID_BT_HFG_DISCONNECT_IND,
   MSG_ID_BT_HFG_SCO_CONNECT_CNF,
   MSG_ID_BT_HFG_SCO_CONNECT_IND,
   MSG_ID_BT_HFG_SCO_DISCONNECT_CNF,
   MSG_ID_BT_HFG_SCO_DISCONNECT_IND,
   MSG_ID_BT_HFG_SPEAKER_GAIN_CNF,
   MSG_ID_BT_HFG_SPEAKER_GAIN_IND,
   MSG_ID_BT_HFG_MIC_GAIN_IND,
   MSG_ID_BT_HFG_MIC_GAIN_CNF,
   MSG_ID_BT_HF_CONNECT_IND,

    
   MSG_TAG_BT_HF_FIRST_REQ_MSG,
   MSG_ID_BT_HF_ACTIVATE_REQ = MSG_TAG_BT_HF_FIRST_REQ_MSG,
   MSG_ID_BT_HF_DEACTIVATE_REQ,
   MSG_ID_BT_HF_CONNECT_REQ,
   MSG_ID_BT_HF_CONNECT_IND_RES,
   MSG_ID_BT_HF_DISCONNECT_REQ,
   MSG_ID_BT_HF_SCO_CONNECT_REQ,
   MSG_ID_BT_HF_SCO_DISCONNECT_REQ,
   MSG_ID_BT_HF_AT_COMMAND_REQ,
   MSG_ID_BT_HF_RESULT_CODE_CNF,
   MSG_ID_BT_HF_ATA_REQ,
   MSG_ID_BT_HF_ATD_NUM_REQ,
   MSG_ID_BT_HF_ATD_MEM_REQ,
   MSG_ID_BT_HF_BLDN_REQ,
   MSG_ID_BT_HF_CHUP_REQ,
   MSG_ID_BT_HF_CMEE_REQ,
   MSG_ID_BT_HF_NREC_REQ,
   MSG_ID_BT_HF_VTS_REQ,
   MSG_ID_BT_HF_VGS_REQ,
   MSG_ID_BT_HF_VGM_REQ,
   MSG_ID_BT_HF_CHLD_REQ,
   MSG_ID_BT_HF_CLIP_REQ,
   MSG_ID_BT_HF_CCWA_REQ,
   MSG_ID_BT_HF_COPS_SET_REQ,
   MSG_ID_BT_HF_COPS_REQ,
   MSG_ID_BT_HF_CNUM_REQ,
   MSG_ID_BT_HF_BVRA_REQ,
   MSG_ID_BT_HF_BINP_REQ,
   MSG_ID_BT_HF_BTRH_READ_REQ,
   MSG_ID_BT_HF_BTRH_SET_REQ,
   MSG_ID_BT_HF_CLCC_REQ,
   MSG_TAG_BT_HF_LAST_REQ_MSG = MSG_ID_BT_HF_CLCC_REQ,
   
    
   MSG_ID_BT_HF_ACTIVATE_CNF,
   MSG_ID_BT_HF_DEACTIVATE_CNF,
   MSG_ID_BT_HF_CONNECT_CNF,
   MSG_ID_BT_HF_CONNECT_IND_REQ,
   MSG_ID_BT_HF_DISCONNECT_CNF,
   MSG_ID_BT_HF_DISCONNECT_IND,
   MSG_ID_BT_HF_SCO_CONNECT_CNF,
   MSG_ID_BT_HF_SCO_CONNECT_IND,
   MSG_ID_BT_HF_SCO_DISCONNECT_CNF,
   MSG_ID_BT_HF_SCO_DISCONNECT_IND,
   MSG_ID_BT_HF_AT_COMMAND_CNF,
   MSG_ID_BT_HF_RESULT_CODE_IND,
   MSG_ID_BT_HF_ATA_CNF,
   MSG_ID_BT_HF_ATD_NUM_CNF,
   MSG_ID_BT_HF_ATD_MEM_CNF,
   MSG_ID_BT_HF_BLDN_CNF,
   MSG_ID_BT_HF_CHUP_CNF,
   MSG_ID_BT_HF_CMEE_CNF,
   MSG_ID_BT_HF_NREC_CNF,
   MSG_ID_BT_HF_VTS_CNF,
   MSG_ID_BT_HF_VGS_CNF,
   MSG_ID_BT_HF_VGM_CNF,
   MSG_ID_BT_HF_CHLD_CNF,
   MSG_ID_BT_HF_CLIP_CNF,
   MSG_ID_BT_HF_CCWA_CNF,
   MSG_ID_BT_HF_COPS_SET_CNF,
   MSG_ID_BT_HF_COPS_CNF,
   MSG_ID_BT_HF_CNUM_CNF,
   MSG_ID_BT_HF_BVRA_CNF,
   MSG_ID_BT_HF_BINP_CNF,
   MSG_ID_BT_HF_BTRH_READ_CNF,
   MSG_ID_BT_HF_BTRH_SET_CNF,
   MSG_ID_BT_HF_CLCC_CNF,
   MSG_ID_BT_HF_VGS_IND,
   MSG_ID_BT_HF_VGM_IND,
   MSG_ID_BT_HF_BSIR_IND,
   MSG_ID_BT_HF_CIEV_SERVICE_IND,
   MSG_ID_BT_HF_CIEV_CALL_IND,
   MSG_ID_BT_HF_CIEV_CALLSETUP_IND,
   MSG_ID_BT_HF_CIEV_CALLHELD_IND,
   MSG_ID_BT_HF_CIEV_SIGNAL_IND,
   MSG_ID_BT_HF_CIEV_ROAM_IND,
   MSG_ID_BT_HF_CIEV_BATTCHG_IND,
   MSG_ID_BT_HF_RING_IND,
   MSG_ID_BT_HF_CLIP_IND,
   MSG_ID_BT_HF_CCWA_IND,
   MSG_ID_BT_HF_BVRA_IND,
   MSG_ID_BT_HF_BTRH_IND,
   
    
   MSG_TAG_BT_HIDD_FIRST_REQ_MSG,
   MSG_ID_BT_HIDD_ACTIVATE_REQ = MSG_TAG_BT_HIDD_FIRST_REQ_MSG,   
   MSG_ID_BT_HIDD_DEACTIVATE_REQ,
   MSG_ID_BT_HIDD_CONNECT_REQ,
   MSG_ID_BT_HIDD_CONNECTION_AUTHORIZE_RSP,
   MSG_ID_BT_HIDD_CONTROL_REQ,
   MSG_ID_BT_HIDD_DISCONNECT_REQ,
   MSG_ID_BT_HIDD_INTERRUPT_DATA_REQ,
   MSG_ID_BT_HIDD_GET_REPORT_RSP,
   MSG_ID_BT_HIDD_SET_REPORT_RSP,
   MSG_ID_BT_HIDD_GET_PROTOCOL_RSP,
   MSG_ID_BT_HIDD_SET_PROTOCOL_RSP,
   MSG_ID_BT_HIDD_GET_IDLE_RATE_RSP,
   MSG_ID_BT_HIDD_SET_IDLE_RATE_RSP,
   MSG_TAG_BT_HIDD_LAST_REQ_MSG = MSG_ID_BT_HIDD_SET_IDLE_RATE_RSP,

    
   MSG_ID_BT_HIDD_ACTIVATE_CNF,
   MSG_ID_BT_HIDD_DEACTIVATE_CNF,   
   MSG_ID_BT_HIDD_CONNECT_CNF,   
   MSG_ID_BT_HIDD_CONNECT_IND,
   MSG_ID_BT_HIDD_CONNECTION_AUTHORIZE_IND,
   MSG_ID_BT_HIDD_DISCONNECT_CNF,   
   MSG_ID_BT_HIDD_DISCONNECT_IND,
   MSG_ID_BT_HIDD_CONTROL_CNF,
   MSG_ID_BT_HIDD_CONTROL_IND,
   MSG_ID_BT_HIDD_INTERRUPT_DATA_CNF,
   MSG_ID_BT_HIDD_INTERRUPT_DATA_IND,
   MSG_ID_BT_HIDD_GET_REPORT_IND,
   MSG_ID_BT_HIDD_SET_REPORT_IND,
   MSG_ID_BT_HIDD_GET_PROTOCOL_IND,
   MSG_ID_BT_HIDD_SET_PROTOCOL_IND,
   MSG_ID_BT_HIDD_GET_IDLE_RATE_IND,
   MSG_ID_BT_HIDD_SET_IDLE_RATE_IND,
   MSG_ID_BT_HIDD_UNPLUG_IND,

    
   MSG_TAG_BT_AVCTP_FIRST_REQ_MSG,
   MSG_ID_BT_AVCTP_ACTIVATE_REQ = MSG_TAG_BT_AVCTP_FIRST_REQ_MSG,   
   MSG_ID_BT_AVCTP_INIT_REQ,
   MSG_ID_BT_AVCTP_CONNECT_REQ,
   MSG_ID_BT_AVCTP_CONNECT_RSP,            
   MSG_ID_BT_AVCTP_DISCONNECT_REQ,     
   MSG_ID_BT_AVCTP_DATA_REQ,    
   MSG_TAG_BT_AVCTP_LAST_REQ_MSG = MSG_ID_BT_AVCTP_DATA_REQ,

   
    
   
   MSG_ID_BT_A2DP_ACTIVATE_REQ,
   MSG_ID_BT_A2DP_ACTIVATE_CNF,
   MSG_ID_BT_A2DP_DEACTIVATE_REQ,
   MSG_ID_BT_A2DP_DEACTIVATE_CNF,
   MSG_ID_BT_A2DP_SIGNAL_CONNECT_REQ,
   MSG_ID_BT_A2DP_SIGNAL_CONNECT_CNF,
   MSG_ID_BT_A2DP_SIGNAL_CONNECT_IND,
   MSG_ID_BT_A2DP_SIGNAL_DISCONNECT_REQ,
   MSG_ID_BT_A2DP_SIGNAL_DISCONNECT_CNF,
   MSG_ID_BT_A2DP_SIGNAL_DISCONNECT_IND,
   
   MSG_ID_BT_A2DP_SEP_DISCOVER_REQ,
   MSG_ID_BT_A2DP_SEP_DISCOVER_CNF,
   MSG_ID_BT_A2DP_SEP_DISCOVER_IND,
   MSG_ID_BT_A2DP_SEP_DISCOVER_RES,
   MSG_ID_BT_A2DP_CAPABILITIES_GET_REQ,
   MSG_ID_BT_A2DP_CAPABILITIES_GET_CNF,
   MSG_ID_BT_A2DP_CAPABILITIES_GET_IND,
   MSG_ID_BT_A2DP_CAPABILITIES_GET_RES,
   MSG_ID_BT_A2DP_STREAM_CONFIG_REQ,
   MSG_ID_BT_A2DP_STREAM_CONFIG_CNF,
   MSG_ID_BT_A2DP_STREAM_CONFIG_IND,
   MSG_ID_BT_A2DP_STREAM_CONFIG_RES,
   MSG_ID_BT_A2DP_STREAM_RECONFIG_REQ,
   MSG_ID_BT_A2DP_STREAM_RECONFIG_CNF,
   MSG_ID_BT_A2DP_STREAM_RECONFIG_IND,
   MSG_ID_BT_A2DP_STREAM_RECONFIG_RES,
   MSG_ID_BT_A2DP_STREAM_OPEN_REQ,
   MSG_ID_BT_A2DP_STREAM_OPEN_CNF,
   MSG_ID_BT_A2DP_STREAM_OPEN_IND,
   MSG_ID_BT_A2DP_STREAM_OPEN_RES,
   MSG_ID_BT_A2DP_STREAM_START_REQ,
   MSG_ID_BT_A2DP_STREAM_START_CNF,
   MSG_ID_BT_A2DP_STREAM_START_IND,
   MSG_ID_BT_A2DP_STREAM_START_RES,
   MSG_ID_BT_A2DP_STREAM_PAUSE_REQ,
   MSG_ID_BT_A2DP_STREAM_PAUSE_CNF,
   MSG_ID_BT_A2DP_STREAM_PAUSE_IND,
   MSG_ID_BT_A2DP_STREAM_PAUSE_RES,
   MSG_ID_BT_A2DP_STREAM_QOS_IND,
   MSG_ID_BT_A2DP_STREAM_DATA_SEND_REQ,
   MSG_ID_BT_A2DP_STREAM_CLOSE_REQ,
   MSG_ID_BT_A2DP_STREAM_CLOSE_CNF,
   MSG_ID_BT_A2DP_STREAM_CLOSE_IND,
   MSG_ID_BT_A2DP_STREAM_CLOSE_RES,
   MSG_ID_BT_A2DP_STREAM_ABORT_REQ,
   MSG_ID_BT_A2DP_STREAM_ABORT_CNF,
   MSG_ID_BT_A2DP_STREAM_ABORT_IND,
   MSG_ID_BT_A2DP_STREAM_ABORT_RES,

       
   MSG_ID_BT_AVRCP_ACTIVATE_REQ,
   MSG_ID_BT_AVRCP_ACTIVATE_CNF,
   MSG_ID_BT_AVRCP_DEACTIVATE_REQ,
   MSG_ID_BT_AVRCP_DEACTIVATE_CNF,
   MSG_ID_BT_AVRCP_CONNECT_REQ,
   MSG_ID_BT_AVRCP_CONNECT_CNF,
   MSG_ID_BT_AVRCP_CONNECT_IND,
   MSG_ID_BT_AVRCP_CONNECT_IND_RES,
   MSG_ID_BT_AVRCP_DISCONNECT_REQ,
   MSG_ID_BT_AVRCP_DISCONNECT_CNF, 
   MSG_ID_BT_AVRCP_DISCONNECT_IND,
   
   MSG_ID_BT_AVRCP_CMD_FRAME_REQ,
   MSG_ID_BT_AVRCP_CMD_FRAME_CNF,
   MSG_ID_BT_AVRCP_CMD_FRAME_IND,
   MSG_ID_BT_AVRCP_CMD_FRAME_IND_RES,


   MSG_TAG_BT_TEST_FIRST_REQ_MSG,

   MSG_ID_BT_SDP_TEST_ACTIVATE_REQ = MSG_TAG_BT_TEST_FIRST_REQ_MSG,
   MSG_ID_BT_SDP_TEST_CLOSE_REQ,
   MSG_ID_BT_RFCOMM_TEST_ACTIVATE_REQ,
   MSG_ID_BT_L2CAP_TEST_CMD_REQ,
   MSG_ID_BT_GAP_TEST_CMD_REQ,
   MSG_ID_BT_AVDTP_TEST_CMD_REQ,
   MSG_ID_BT_JBT_TEST_CMD_REQ,
   MSG_ID_BT_SIMAP_TEST_ACTIVATE_REQ,
   MSG_TAG_BT_TEST_LAST_REQ_MSG = MSG_ID_BT_SIMAP_TEST_ACTIVATE_REQ,
   
   MSG_TAG_BT_SDPDB_FIRST_REQ_MSG,
   MSG_ID_BT_SDPDB_REGISTER_REQ = MSG_TAG_BT_SDPDB_FIRST_REQ_MSG,
   MSG_ID_BT_SDPDB_DEREGISTER_REQ,
   MSG_TAG_BT_SDPDB_LAST_REQ_MSG = MSG_ID_BT_SDPDB_DEREGISTER_REQ,
   MSG_ID_BT_SDPDB_REGISTER_CNF,
   MSG_ID_BT_SDPDB_DEREGISTER_CNF,
   
    
   MSG_TAG_BT_APP_SDPDB_FIRST_MSG,
   MSG_ID_BT_APP_SDPDB_GET_HANDLE_REQ = MSG_TAG_BT_APP_SDPDB_FIRST_MSG,
   MSG_ID_BT_APP_SDPDB_REGISTER_REQ,
   MSG_ID_BT_APP_SDPDB_RETRIEVE_RECOED_REQ,
   MSG_ID_BT_APP_SDPDB_DEREGISTER_REQ,
   MSG_ID_BT_APP_SDPDB_GET_HANDLE_CNF,
   MSG_ID_BT_APP_SDPDB_REGISTER_CNF,
   MSG_ID_BT_APP_SDPDB_RETRIEVE_RECOED_CNF,
   MSG_ID_BT_APP_SDPDB_DEREGISTER_CNF,
   MSG_TAG_BT_APP_SDPDB_LAST_MSG = MSG_ID_BT_APP_SDPDB_DEREGISTER_CNF,

    
   MSG_ID_GOEP_REGISTER_SERVER_REQ,
   MSG_ID_GOEP_REGISTER_SERVER_RSP,
   MSG_ID_GOEP_DEREGISTER_SERVER_REQ,
   MSG_ID_GOEP_DEREGISTER_SERVER_RSP,
   MSG_ID_GOEP_CONNECT_IND,
   MSG_ID_GOEP_CONNECT_RES,
   MSG_ID_GOEP_PUSH_IND,
   MSG_ID_GOEP_PUSH_RES,
   MSG_ID_GOEP_PULL_IND,
   MSG_ID_GOEP_PULL_RES,
   MSG_ID_GOEP_SET_FOLDER_IND,
   MSG_ID_GOEP_SET_FOLDER_RES,
   MSG_ID_GOEP_ABORT_IND,
   MSG_ID_GOEP_ABORT_RES,
   MSG_ID_GOEP_AUTH_REQ,
   MSG_ID_GOEP_AUTH_RSP,
   MSG_ID_GOEP_REGISTER_CLIENT_REQ,
   MSG_ID_GOEP_REGISTER_CLIENT_RSP,
   MSG_ID_GOEP_DEREGISTER_CLIENT_REQ,
   MSG_ID_GOEP_DEREGISTER_CLIENT_RSP,
   MSG_ID_GOEP_CONNECT_REQ,
   MSG_ID_GOEP_CONNECT_RSP,
   MSG_ID_GOEP_PUSH_REQ,
   MSG_ID_GOEP_PUSH_RSP,
   MSG_ID_GOEP_PULL_REQ,
   MSG_ID_GOEP_PULL_RSP,
   MSG_ID_GOEP_SET_FOLDER_REQ,
   MSG_ID_GOEP_SET_FOLDER_RSP,
   MSG_ID_GOEP_ABORT_REQ,
   MSG_ID_GOEP_ABORT_RSP,
   MSG_ID_GOEP_DISCONNECT_REQ,
   MSG_ID_GOEP_DISCONNECT_RSP,
   MSG_ID_GOEP_DISCONNECT_IND,
   MSG_ID_GOEP_DISCONNECT_RES,
   MSG_ID_GOEP_TPDISCONNECT_REQ,
   MSG_ID_GOEP_AUTH_IND,
   MSG_ID_GOEP_AUTH_RES,
   MSG_ID_GOEP_OPP_SUPPORTED_FORMATS_IND,
   MSG_ID_GOEP_AUTHORIZE_IND,
   MSG_ID_GOEP_AUTHORIZE_RES,
      
   MSG_TAG_BT_APP_REG_SERVICE_FIRST_REQ_MSG,
   MSG_ID_BT_RECORD_REG_REQ = MSG_TAG_BT_APP_REG_SERVICE_FIRST_REQ_MSG,
   MSG_ID_BT_RECORD_UNREQ_REQ,
   MSG_ID_BT_RECORD_REQ_CNF,
   MSG_ID_BT_RECORD_UNREQ_CNF,
   MSG_TAG_BT_APP_REG_SERVICE_LAST_REQ_MSG = MSG_ID_BT_RECORD_UNREQ_CNF,

      
    

    
   MSG_TAG_BT_SIMAP_FIRST_REQ_MSG,
   MSG_ID_BT_SIMAP_ACTIVATE_REQ = MSG_TAG_BT_SIMAP_FIRST_REQ_MSG,
   MSG_ID_BT_SIMAP_DEACTIVATE_REQ,
   MSG_ID_BT_SIMAP_AUTH_RSP,
   MSG_ID_BT_SIMAP_SEND_STATUS_IND_WITH_UNAVAILABLE_REQ,
    
   MSG_ID_BT_SIMAP_DISCONNECT_REQ,
   MSG_TAG_BT_SIMAP_LAST_REQ_MSG = MSG_ID_BT_SIMAP_DISCONNECT_REQ,
   
    
   
    
   MSG_ID_BT_SIMAP_ACTIVATE_CNF,
   MSG_ID_BT_SIMAP_DEACTIVATE_CNF, 
   MSG_ID_BT_SIMAP_AUTH_REQ,
   MSG_ID_BT_SIMAP_CONNECT_CNF,
   MSG_ID_BT_SIMAP_CONNECT_IND,
   MSG_ID_BT_SIMAP_DISCONNECT_CNF,
      
   MSG_ID_BT_SIMAP_DISCONNECT_IND,
   
   

 
	  

  
   MSG_TAG_BT_JSR82_FIRST_MSG,
   MSG_ID_BT_JSR_ACTIVE_REQ = MSG_TAG_BT_JSR82_FIRST_MSG,
   MSG_ID_BT_JSR_ACTIVE_CNF,      
   MSG_ID_BT_JSR_DEACTIVE_REQ,   
   MSG_ID_BT_JSR_DEACTIVE_CNF,  
   MSG_ID_BT_JSR_POWER_OFF_IND,  
   MSG_ID_BT_JSR_POWER_OFF_REQ,   
   MSG_ID_BT_JSR_KICK_NEW_COMMAND,   
   MSG_ID_BT_JSR_PANIC,  
   MSG_ID_BT_JSR82_AUTHENTICATION_REQ,
   MSG_ID_BT_JSR82_AUTHORIZATION_REQ,
   MSG_ID_BT_JSR82_ENCRYPTION_REQ,
   MSG_ID_BT_JSR82_AUTHENTICATION_CNF,
   MSG_ID_BT_JSR82_AUTHORIZATION_CNF,
   MSG_ID_BT_JSR82_ENCRYPTION_CNF,
   MSG_ID_BT_JSR82_RESTROE_ACL_REQ,
   MSG_ID_BT_JSR82_RESTROE_ACL_CNF,   
   MSG_ID_BT_JSR82_CONNECT_REQ,
   MSG_ID_BT_JSR82_CONNECT_CNF,
   MSG_ID_BT_JSR82_ENABLE_SERVICE_REQ,
   MSG_ID_BT_JSR82_ENABLE_SERVICE_CNF,
   MSG_ID_BT_JSR82_TURNON_SERVICE_REQ,
   MSG_ID_BT_JSR82_TURNON_SERVICE_CNF,
   MSG_ID_BT_JSR82_TURNOFF_SERVICE_REQ,
   MSG_ID_BT_JSR82_TURNOFF_SERVICE_CNF,   
   MSG_ID_BT_JSR82_DISABLE_SERVICE_REQ,
   MSG_ID_BT_JSR82_DISABLE_SERVICE_CNF,   
   MSG_ID_BT_JSR82_CONNECT_IND,
   MSG_ID_BT_JSR82_CONNECT_RSP,
   MSG_ID_BT_JSR82_DISCONNECT_REQ,
   MSG_ID_BT_JSR82_DISCONNECT_IND,
   MSG_ID_BT_JSR82_TX_DATA_REQ,
   MSG_ID_BT_JSR82_TX_DATA_CFN,   
   MSG_ID_BT_JSR82_RX_DATA_IND,
   MSG_ID_BT_JSR82_RX_DATA_RSP,   
        
   MSG_ID_BT_JSR82_RX_READY_IND,
   MSG_ID_BT_JSR82_TX_READY_IND,
   MSG_ID_BT_JSR82_ALLOCATE_TXRX_BUF_REQ,
   MSG_ID_BT_JSR82_ALLOCATE_TXRX_BUF_CNF,
    
   MSG_ID_BT_JSR82_SET_ACL_SECURITY_REQ,
   MSG_ID_BT_JSR82_SET_ACL_SECURITY_CNF,
   MSG_ID_BT_JSR82_SPP_GET_DATA_REQ,
   MSG_TAG_BT_JSR82_LAST_MSG = MSG_ID_BT_JSR82_SPP_GET_DATA_REQ,   

    	
   MSG_ID_BT_JSR_TEST_BCC_CMD1_REQ,   
   MSG_ID_BT_JSR_TEST_BCC_CMD2_REQ,      
   MSG_ID_BT_JSR_TEST_BCC_CMD3_REQ,   
   MSG_ID_BT_JSR_TEST_BCC_CMD4_REQ,      
   MSG_ID_BT_JSR_TEST_BCC_CMD5_REQ,      
   MSG_ID_BT_JSR_TEST_BCC_CMD6_REQ,   
   MSG_ID_BT_JSR_TEST_BCC_CMD7_REQ,      
   MSG_ID_BT_JSR_TEST_BCC_CMD8_REQ,   
   MSG_ID_BT_JSR_TEST_BCC_CMD9_REQ,      
   MSG_ID_BT_JSR_TEST_BCC_CMD10_REQ,      
   MSG_ID_BT_JSR_TEST_BCC_CMD11_REQ,   
   MSG_ID_BT_JSR_TEST_BCC_CMD12_REQ,      
   MSG_ID_BT_JSR_TEST_BCC_CMD13_REQ,      
   
    
   MSG_ID_BT_BPP_CONNECT_REQ,
   MSG_ID_BT_BPP_CONNECT_CNF,
   MSG_ID_BT_BPP_AUTHENTICATION_IND,
   MSG_ID_BT_BPP_AUTHENTICATION_RSP,
   MSG_ID_BT_BPP_DISCONNECT_REQ,
   MSG_ID_BT_BPP_DISCONNECT_IND,
   MSG_ID_BT_BPP_GET_PRINTER_ATTR_REQ,
   MSG_ID_BT_BPP_GET_PRINTER_ATTR_CNF,
   MSG_ID_BT_BPP_CREATE_JOB_REQ,
   MSG_ID_BT_BPP_CREATE_JOB_CNF,
   MSG_ID_BT_BPP_EVENT_IND,
   MSG_ID_BT_BPP_SEND_DOC_REQ,
   MSG_ID_BT_BPP_SEND_DOC_CNF,
   MSG_ID_BT_BPP_PROG_UPDATE_IND,
   MSG_ID_BT_BPP_PROG_UPDATE_RSP,

   MSG_ID_BT_BPP_OPEN_REQ,
   MSG_ID_BT_BPP_OPEN_CNF,
   MSG_ID_BT_BPP_GET_ATTR_REQ,
   MSG_ID_BT_BPP_GET_ATTR_CNF,
   MSG_ID_BT_BPP_PRINT_DOC_REQ,
   MSG_ID_BT_BPP_PRINT_DOC_CNF,
   MSG_ID_BT_BPP_CLOSE_REQ,
   MSG_ID_BT_BPP_CLOSE_CNF,
   MSG_ID_BT_BPP_DISC_IND,
   MSG_ID_BT_BPP_OPEN_STATUS_REQ,
   MSG_ID_BT_BPP_OPEN_STATUS_CNF,
   MSG_ID_BT_BPP_JOB_STATE_IND,
   MSG_ID_BT_BPP_PROGRESS_IND,
   MSG_ID_BT_BPP_PROGRESS_RSP,
   MSG_ID_BT_BPP_AUTH_IND,
   MSG_ID_BT_BPP_AUTH_RSP,
   MSG_ID_BT_BPP_DESTORY_REQ,
   MSG_ID_BT_BPP_CHECK_STATUS,
   MSG_ID_BT_BPP_COMPOSE_CONTINUE,

    
   MSG_ID_BT_BIP_CONNECT_REQ,
   MSG_ID_BT_BIP_CONNECT_CNF,
   MSG_ID_BT_BIP_DISCONNECT_REQ,
   MSG_ID_BT_BIP_GET_CAPABILITIES_REQ,
   MSG_ID_BT_BIP_GET_CAPABILITIES_CNF,
   MSG_ID_BT_BIP_PUT_IMG_REQ,
   MSG_ID_BT_BIP_PUT_IMG_CNF,
   MSG_ID_BT_BIP_PUT_LINKED_THUMBNAIL_REQ,
   MSG_ID_BT_BIP_PUT_LINKED_THUMBNAIL_CNF,
   MSG_ID_BT_BIP_GET_IMG_LIST_REQ,
   MSG_ID_BT_BIP_GET_IMG_LIST_PARSING_IND,
   MSG_ID_BT_BIP_GET_IMG_LIST_CNF,
   MSG_ID_BT_BIP_GET_IMG_PROP_REQ,
   MSG_ID_BT_BIP_GET_IMG_PROP_CNF,
   MSG_ID_BT_BIP_GET_IMG_REQ,
   MSG_ID_BT_BIP_GET_IMG_CNF,
   MSG_ID_BT_BIP_GET_LINKED_THUMBNAIL_REQ,
   MSG_ID_BT_BIP_GET_LINKED_THUMBNAIL_CNF,
   MSG_ID_BT_BIP_GET_MONITORING_IMG_REQ,
   MSG_ID_BT_BIP_GET_MONITORING_IMG_CNF,
   MSG_ID_BT_BIP_ABORT_REQ,
   MSG_ID_BT_BIP_ABORT_CNF,
   MSG_ID_BT_BIP_ACTIVATE_REQ,
   MSG_ID_BT_BIP_ACTIVATE_CNF,
   MSG_ID_BT_BIP_DEACTIVATE_REQ,
   MSG_ID_BT_BIP_DEACTIVATE_CNF,
   MSG_ID_BT_BIP_ENTER_USB_MODE_REQ,
   MSG_ID_BT_BIP_ENTER_USB_MODE_CNF,
   MSG_ID_BT_BIP_AUTHORIZE_IND,
   MSG_ID_BT_BIP_AUTHORIZE_RSP,
   MSG_ID_BT_BIP_CONNECT_IND,
   MSG_ID_BT_BIP_CONNECT_RSP,
   MSG_ID_BT_BIP_GET_CAPABILITIES_IND,
   MSG_ID_BT_BIP_GET_CAPABILITIES_RSP,
   MSG_ID_BT_BIP_PUT_IMG_IND,
   MSG_ID_BT_BIP_PUT_IMG_RSP,
   MSG_ID_BT_BIP_PUT_LINKED_THUMBNAIL_IND,
   MSG_ID_BT_BIP_PUT_LINKED_THUMBNAIL_RSP,
   MSG_ID_BT_BIP_GET_IMG_LIST_IND,
   MSG_ID_BT_BIP_GET_IMG_LIST_RSP,
   MSG_ID_BT_BIP_GET_IMG_PROP_IND,
   MSG_ID_BT_BIP_GET_IMG_PROP_RSP,
   MSG_ID_BT_BIP_GET_IMG_IND,
   MSG_ID_BT_BIP_GET_IMG_RSP,
   MSG_ID_BT_BIP_GET_LINKED_THUMBNAIL_IND,
   MSG_ID_BT_BIP_GET_LINKED_THUMBNAIL_RSP,
   MSG_ID_BT_BIP_GET_MONITORING_IMG_IND,
   MSG_ID_BT_BIP_GET_MONITORING_IMG_RSP,
   MSG_ID_BT_BIP_CONTINUE_IND,
   MSG_ID_BT_BIP_CONTINUE_RSP,
   MSG_ID_BT_BIP_ABORT_IND,
   MSG_ID_BT_BIP_COMPLETE_IND,
   MSG_ID_BT_BIP_RESUME_XMLPARSE_IND,
   MSG_ID_BT_BIP_DISCONNECT_IND,

    
   MSG_ID_BT_PBAP_FIRST_MSG_ID,
   MSG_ID_BT_PBAP_REGISTER_REQ,
   MSG_ID_BT_PBAP_REGISTER_RSP,

   MSG_ID_BT_PBAP_DEREGISTER_REQ,
   MSG_ID_BT_PBAP_DEREGISTER_RSP,

   MSG_ID_BT_PBAP_DISCONNECT_REQ,
   MSG_ID_BT_PBAP_DISCONNECT_RSP,

   MSG_ID_BT_PBAP_AUTHORIZE_IND,
   MSG_ID_BT_PBAP_AUTHORIZE_RSP,

   MSG_ID_BT_PBAP_CLIENT_CONNECT_IND,
   MSG_ID_BT_PBAP_CLIENT_CONNECT_RSP,

   MSG_ID_BT_PBAP_CLIENT_AUTH_CHALLENGE_IND,
   MSG_ID_BT_PBAP_CLIENT_AUTH_CHALLENGE_CNF,


   
   MSG_ID_BT_PBAP_CLIENT_DISCONNECT_IND,
   MSG_ID_BT_PBAP_CLIENT_DISCONNECT_RSP,

   MSG_ID_BT_PBAP_ABORT_REQ,


   MSG_ID_BT_PBAP_ENTER_USB_MODE_REQ,
   MSG_ID_BT_PBAP_ENTER_USB_MODE_RSP,


   MSG_ID_BT_PBAP_SET_PATH_IND,
   MSG_ID_BT_PBAP_SET_PATH_RSP,

   MSG_ID_BT_PBAP_SETPATH_IND,
   MSG_ID_BT_PBAP_SETPATH_RSP,

   MSG_ID_BT_PBAP_READ_ENTRY_IND,
   MSG_ID_BT_PBAP_READ_ENTRY_RSP,

   MSG_ID_BT_PBAP_READ_FOLDER_IND,
   MSG_ID_BT_PBAP_READ_FOLDER_RSP,

   MSG_ID_BT_PBAP_READ_LIST_IND,
   MSG_ID_BT_PBAP_READ_LIST_RSP,

    
   MSG_ID_BT_PBAPC_ENABLE_REQ,
   MSG_ID_BT_PBAPC_ENABLE_CNF,
   
   MSG_ID_BT_PBAPC_DISABLE_REQ,
   MSG_ID_BT_PBAPC_DISABLE_CNF,
   
   MSG_ID_BT_PBAPC_CONNECT_REQ,
   MSG_ID_BT_PBAPC_CONNECT_CNF,
   
   MSG_ID_BT_PBAPC_DISCONNECT_REQ,
   MSG_ID_BT_PBAPC_DISCONNECT_CNF,
   MSG_ID_BT_PBAPC_DISCONNECT_IND,
   
   MSG_ID_BT_PBAPC_AUTH_CHALLENGE_IND,
   MSG_ID_BT_PBAPC_AUTH_CHALLENGE_RSP,
   
   MSG_ID_BT_PBAPC_SET_PATH_REQ,
   MSG_ID_BT_PBAPC_SET_PATH_CNF,
   
   MSG_ID_BT_PBAPC_READ_ENTRY_REQ,
   MSG_ID_BT_PBAPC_READ_ENTRY_CNF,
   
   MSG_ID_BT_PBAPC_READ_FOLDER_REQ,
   MSG_ID_BT_PBAPC_READ_FOLDER_CNF,
   
   MSG_ID_BT_PBAPC_READ_LIST_REQ,
   MSG_ID_BT_PBAPC_READ_LIST_CNF,
   
   MSG_ID_BT_PBAPC_ABORT_REQ,
   MSG_ID_BT_PBAPC_ABORT_CNF,
   MSG_ID_BT_PBAPC_ABORT_IND,   
    

   MSG_ID_BT_PBAP_LAST_MSG_ID,

    
   MSG_ID_BT_MAP_FIRST_MSG_ID,
   
   MSG_ID_BT_MAPC_ACTIVATE_REQ = MSG_ID_BT_MAP_FIRST_MSG_ID,
   MSG_ID_BT_MAPC_ACTIVATE_CNF,
   
   MSG_ID_BT_MAPC_DEACTIVATE_REQ,
   MSG_ID_BT_MAPC_DEACTIVATE_CNF,
   
   MSG_ID_BT_MAPC_CONNECT_REQ,
   MSG_ID_BT_MAPC_CONNECT_CNF,
   
   MSG_ID_BT_MAPC_DISCONNECT_REQ,
   MSG_ID_BT_MAPC_DISCONNECT_CNF,
   MSG_ID_BT_MAPC_DISCONNECT_IND,
   
   MSG_ID_BT_MAPC_SET_FOLDER_REQ,
   MSG_ID_BT_MAPC_SET_FOLDER_CNF,
   
   MSG_ID_BT_MAPC_GET_FOLDER_LISTING_SIZE_REQ,
   MSG_ID_BT_MAPC_GET_FOLDER_LISTING_SIZE_CNF,
   
   MSG_ID_BT_MAPC_GET_FOLDER_LISTING_REQ,
   MSG_ID_BT_MAPC_GET_FOLDER_LISTING_CNF,
   
   MSG_ID_BT_MAPC_GET_MESSAGE_LISTING_SIZE_REQ,
   MSG_ID_BT_MAPC_GET_MESSAGE_LISTING_SIZE_CNF,
   
   MSG_ID_BT_MAPC_GET_MESSAGE_LISTING_REQ,
   MSG_ID_BT_MAPC_GET_MESSAGE_LISTING_CNF,
   
   MSG_ID_BT_MAPC_GET_MESSAGE_REQ,
   MSG_ID_BT_MAPC_GET_MESSAGE_CNF,
   
   MSG_ID_BT_MAPC_SET_NOTIFY_REGISTRATION_REQ,
   MSG_ID_BT_MAPC_SET_NOTIFY_REGISTRATION_CNF,
   
   MSG_ID_BT_MAPC_SET_MESSAGE_STATUS_REQ,
   MSG_ID_BT_MAPC_SET_MESSAGE_STATUS_CNF,
   
   MSG_ID_BT_MAPC_PUSH_MESSAGE_REQ,
   MSG_ID_BT_MAPC_PUSH_MESSAGE_CNF,
   
   MSG_ID_BT_MAPC_UPDATE_INBOX_REQ,
   MSG_ID_BT_MAPC_UPDATE_INBOX_CNF,
   
   MSG_ID_BT_MAPC_ABORT_REQ,
   MSG_ID_BT_MAPC_ABORT_CNF,
   
   MSG_ID_BT_MAPC_MNS_AUTHORIZE_IND,
   MSG_ID_BT_MAPC_MNS_AUTHORIZE_RSP,
   
   MSG_ID_BT_MAPC_MNS_DISCONNECT_REQ,
   MSG_ID_BT_MAPC_MNS_DISCONNECT_CNF,
   
   MSG_ID_BT_MAPC_MNS_SEND_EVENT_IND,
   MSG_ID_BT_MAPC_MNS_SEND_EVENT_RSP,
   
   MSG_ID_BT_MAP_LAST_MSG_ID = MSG_ID_BT_MAPC_MNS_SEND_EVENT_RSP,

   MSG_TAG_BT_SAP_END_MSG,
   MSG_ID_BT_SET_SCO_ACCEPT_REQ,
   MSG_ID_BT_SET_SCO_ACCEPT_CNF,
   MSG_ID_BT_SET_DUAL_PCM_SETTING_REQ,
   MSG_ID_BT_SET_DUAL_PCM_SETTING_CNF,
   MSG_ID_BT_SET_DUAL_PCM_SWITCH_REQ,
   MSG_ID_BT_SET_DUAL_PCM_SWITCH_CNF,
   MSG_ID_BT_WAKEUP_BT_CONTROLLER,

   
   MSG_ID_BT_FORCE_RESET_START,
   MSG_ID_BT_FORCE_RESET_END,

     
   MSG_ID_BT_ENGINEER_MODE_NSR_TEST_ENTER_REQ,
   MSG_ID_BT_ENGINEER_MODE_NSR_TEST_ENTER_CNF,   
   MSG_ID_BT_ENGINEER_MODE_NSR_TEST_EXIT_REQ,   
   MSG_ID_BT_ATA_POWER_ON_REQ,
   MSG_ID_BT_ATA_POWER_ON_CNF,   
   MSG_ID_BT_ATA_POWER_OFF_REQ,
   MSG_ID_BT_ATA_POWER_OFF_CNF,   
   MSG_ID_BT_ENGINEER_MODE_NSR_TEST_EXIT_CNF,
   MSG_ID_BT_ENGINEER_MODE_TXRX_TEST_EXIT_REQ,
   MSG_ID_BT_ENGINEER_MODE_TXRX_TEST_EXIT_CNF,

#line 2025 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_BT_CODE_CHECK_POINT,
#line 2033 "config\\include\\hal\\user_msgid_hal.h"
 

 
#line 1 "interface\\ps\\sap\\dhcp_sap.h"

































 
 







 

 























 

 
#line 80 "interface\\ps\\sap\\dhcp_sap.h"
    




















 
    MSG_ID_ABM_DHCP_GET_IP_REQ = MSG_ID_DHCP_CODE_BEGIN,


    










 
    MSG_ID_ABM_DHCP_GET_IP_CNF,


    













 
    MSG_ID_ABM_DHCP_RELEASE_REQ,
       

    










 
    MSG_ID_ABM_DHCP_RELEASE_CNF,


    









 
    MSG_ID_ABM_DHCP_NOTIFY_IND,


    









 
    MSG_ID_SIP_DHCP_NOTIFY_IND,
    MSG_ID_ABM_DHCP_WIFI_AP_STATE_IND,
    
    MSG_ID_DHCP_CODE_END = MSG_ID_SIP_DHCP_NOTIFY_IND,




 

#line 2038 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_DHCP_CODE_CHECK_POINT,




 

 
#line 1 "interface\\inet_ps\\iperf_sap.h"

































 
 







 

 























 

 
	MSG_ID_MMI_IPERF_RUN_REQ = MSG_ID_IPERF_CODE_BEGIN,
	MSG_ID_MMI_IPERF_RUN_CNF,
	MSG_ID_MMI_IPERF_REPORT_IND,

	MSG_ID_IPERF_CODE_END = MSG_ID_MMI_IPERF_REPORT_IND,
 

#line 2048 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_IPERF_CODE_CHECK_POINT,




 

 
#line 1 "interface\\inet_ps\\syncml_sap.h"

































 























































 

 
    MSG_ID_MMI_SYNCML_SET_RECORD_REQ_IND = MSG_ID_SYNCML_CODE_BEGIN,
    MSG_ID_MMI_SYNCML_SET_RECORD_RES_REQ,
    MSG_ID_MMI_SYNCML_GET_RECORD_REQ_IND,
    MSG_ID_MMI_SYNCML_GET_RECORD_RES_REQ,
    MSG_ID_MMI_SYNCML_QUERY_LUID_LIST_REQ_IND,
    MSG_ID_MMI_SYNCML_QUERY_LUID_LIST_RES_REQ,
    MSG_ID_MMI_SYNCML_CLEAN_LUID_LIST_REQ_IND,
    MSG_ID_MMI_SYNCML_CLEAN_LUID_LIST_RES_REQ,
    MSG_ID_MMI_SYNCML_START_SYNC_REQ,
    MSG_ID_MMI_SYNCML_ABORT_SYNC_REQ,
    MSG_ID_MMI_SYNCML_FINISH_SYNC_IND,
    MSG_ID_MMI_SYNCML_PROGRESS_INFO_IND,
    MSG_ID_MMI_SYNCML_WAP_PUSH_REQ,
    MSG_ID_MMI_SYNCML_SAS_GET_CRED_IND,
    MSG_ID_MMI_SYNCML_SAS_GET_CRED_RES,
    MSG_ID_MMI_SYNCML_SAS_NOTIFY_INFO_IND,
    MSG_ID_MMI_SYNCML_SAS_NOTIFY_INFO_RES,
    MSG_ID_MMI_SYNCML_DEVICE_START_SYNC_REQ,
    MSG_ID_MMI_SYNCML_BT_ASK_ACCEPT_CONN_IND,
    MSG_ID_MMI_SYNCML_BT_ASK_ACCEPT_CONN_RES,
    MSG_ID_MMI_SYNCML_BT_CONNECTED_IND,
    MSG_ID_MMI_SYNCML_BT_DISCONNECTED_IND,
    MSG_ID_MMI_SYNCML_BT_POWER_ON_NOTIFY_REQ,
    MSG_ID_MMI_SYNCML_BT_POWER_OFF_NOTIFY_REQ,    
    MSG_ID_MMI_SYNCML_DEVICE_REMOTEINFO_IND,
    MSG_ID_MMI_SYNCML_DEVICE_REMOTEINFO_RES,
    MSG_ID_MMI_SYNCML_DEVICE_DELETE_REQ,
    MSG_ID_MMI_SYNCML_DEVICE_DELETE_RSP,
    MSG_ID_MMI_SYNCML_DEVICE_DELETE_ALL_REQ,
    MSG_ID_MMI_SYNCML_DEVICE_DELETE_ALL_RSP,
    MSG_ID_MMI_SYNCML_DEVICE_SYNC_DB_IND,
    MSG_ID_MMI_SYNCML_PS_BUSY_IND,
    MSG_ID_MMI_SYNCML_SESSION_ABORTED_IND,
    MSG_ID_SYNCML_NOTIFY_EVM_IND,
 
#line 2058 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_SYNCML_CODE_CHECK_POINT,




 

 
#line 1 "interface\\inet_ps\\rtsp_sap.h"

































 
 







 

 















































 

 
#line 104 "interface\\inet_ps\\rtsp_sap.h"
    MSG_ID_RTSP_SET_CHANNEL_REQ = RTSP_MSG_CODE_BEGIN,  




 

    MSG_ID_RTSP_SET_CHANNEL_RSP,                        




 

    MSG_ID_RTSP_REMOVE_CHANNEL_REQ,                     




 

    MSG_ID_RTSP_REMOVE_CHANNEL_RSP,                     




 

    MSG_ID_RTSP_REQUEST_REQ,                            




 

    MSG_ID_RTSP_REQUEST_RSP,                            




 

    MSG_ID_RTSP_DISCONNECT_IND,                         




 

    MSG_ID_RTSP_CHANNEL_INFO_IND,                       




 

    MSG_ID_RTSP_NOTIFY_INTERLEAVED_DATA_IND,            



 

    MSG_ID_RTSP_RECV_INTERLEAVED_DATA_IND,              



 

    MSG_ID_RTSP_SEND_INTERLEAVED_DATA_REQ,              



 

    MSG_ID_RTSP_SEND_INTERLEAVED_DATA_RSP,              



 

    MSG_ID_RTSP_CODE_END = MSG_ID_RTSP_SEND_INTERLEAVED_DATA_RSP,   



 
#line 2068 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_RTSP_CODE_CHECK_POINT,
#line 2075 "config\\include\\hal\\user_msgid_hal.h"
 

 
#line 1 "interface\\inet_ps\\dm_sap.h"

































 



















































































































 

 

#line 162 "interface\\inet_ps\\dm_sap.h"

MSG_ID_DM_GET_ACC_REQ = MSG_ID_DM_CODE_BEGIN,




  
MSG_ID_DM_GET_ACC_CNF,




  

MSG_ID_DM_PS_INIT_FINISH_IND,




  

MSG_ID_DM_SRV_INIT_FINISH_IND,




  

MSG_ID_DM_NOTIFICATION_INIT_SESSION_REQ_IND, 




  
MSG_ID_DM_NOTIFICATION_INIT_SESSION_RES,  




  
MSG_ID_DM_GET_BOOTSTRAP_USERPIN_REQ_IND,  




  
MSG_ID_DM_GET_BOOTSTRAP_USERPIN_RES,  




  
MSG_ID_DM_UPDATE_REQ_IND,  




  
MSG_ID_DM_UPDATE_RES,  




  
MSG_ID_DM_ALERT_REQ_IND,  




  
MSG_ID_DM_ALERT_RES,  




  
MSG_ID_DM_RESET_IND,    




  
MSG_ID_DM_DL_PROGRESS_IND,  




  
MSG_ID_DM_SESSION_START_IND,    




  
MSG_ID_DM_SESSION_FINISH_IND,   




  
MSG_ID_DM_INTERNAL,  




  
MSG_ID_DM_NETWORK_SERVICE_AVAILABLE_IND,    




  
MSG_ID_DM_NETWORK_SERVICE_NOT_AVAILABLE_IND,   




  
MSG_ID_DM_PUSH_IND,  




  
MSG_ID_DM_CANCEL_REQ,  




  
MSG_ID_DM_START_DL_REQ_IND,  




  
MSG_ID_DM_DL_REPORT,  




  
MSG_ID_DM_PS_STATUS_IND,    




  
MSG_ID_MMI_DMUI_LAWMO_CMD_IND,  




  

MSG_ID_MMI_DMUI_LAWMO_CMD_RSP,  




  

MSG_ID_DM_LAWMO_REQ,    




  

MSG_ID_DM_LAWMO_RSP,    




  

MSG_ID_DM_SCOMO_INSTALL_BY_SERVER_IND,    




  

MSG_ID_DM_SCOMO_INSTALL_BY_SERVER_CNF,    




                                                        

MSG_ID_DM_SCOMO_REMOVE_BY_SERVER_IND,    




  

MSG_ID_DM_SCOMO_REMOVE_BY_SERVER_CNF,    




  

MSG_ID_DM_SCOMO_REMOVE_BY_USER_REQ,    




  

MSG_ID_DM_SCOMO_REMOVE_BY_USER_RSP,    




  

MSG_ID_DM_SCOMO_INSTALL_BY_USER_REQ,    




  

MSG_ID_DM_SCOMO_INSTALL_BY_USER_RSP,    




  
  

    MSG_ID_DM_NODE_OP_READ_REQ,    




  
                                                      
    MSG_ID_DM_NODE_OP_UPDATE_REQ,    




  
                                                      
    MSG_ID_DM_NODE_OP_READ_RSP,




  
                                                      
    MSG_ID_DM_NODE_OP_UPDATE_RSP,    




  
    MSG_ID_DM_USER_INIT_FOTA_REQ,
    MSG_ID_DM_USER_INIT_FOTA_RSP,




 
#line 2080 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_DM_CODE_CHECK_POINT,




 

 
#line 1 "interface\\mmi\\drmt_sap.h"

































 
 























 

	 
   MSG_ID_DRMT_STARTUP_REQ = MSG_ID_DRMT_MSG_CODE_BEGIN,
   MSG_ID_DRMT_PROCESS_DATABASE_REQ,
   MSG_ID_DRMT_PROCESS_DATABASE_CNF,
   MSG_ID_DRMT_PROCESS_OBJECT_REQ,
   MSG_ID_DRMT_PROCESS_OBJECT_CNF,
   MSG_ID_DRMT_RO_EXPIRY_IND,
   MSG_ID_DRMT_ABORT_REQ,
   MSG_ID_DRMT_ABORT_CNF,
   MSG_ID_DRMT_GET_AUTH_REQ,
   MSG_ID_DRMT_GET_AUTH_CNF,
   MSG_ID_DRMT_DL_PROGRESS_IND,
   MSG_ID_DRMT_DL_PROGRESS_RSP,
   MSG_ID_DRMT_GET_USER_CONFIRM_REQ,
   MSG_ID_DRMT_GET_USER_CONFIRM_CNF,
   MSG_ID_DRMT_ALERT_USER_IND,
   MSG_ID_DRMT_ALERT_USER_RSP,
   MSG_ID_DRMT_NOTIFY_INFO_IND,
   MSG_ID_DRMT_NOTIFY_INFO_RSP,
   MSG_ID_DRMT_NOTIFY_STIME_EXP_IND,
   MSG_ID_DRMT_RESERVE_1,
   MSG_ID_DRMT_RESERVE_2,
   MSG_ID_DRMT_RESERVE_3,
   MSG_ID_DRMT_RESERVE_4,
   MSG_ID_DRMT_OPEN_URL_REQ,
   MSG_ID_DRMT_OPEN_URL_CNF,
   MSG_ID_DRMT_CLEAN_SCREEN_IND,
   MSG_ID_DRMT_CLEAN_SCREEN_RSP,
   MSG_ID_DRMT_GET_IMSI_REQ,
   MSG_ID_DRMT_GET_IMSI_CNF,
   MSG_ID_DRMT_ACTIVATE_REQ,
   MSG_ID_DRMT_ACTIVATE_CNF,
   MSG_ID_DRMT_INSTALL_OBJECT_REQ,
   MSG_ID_DRMT_INSTALL_OBJECT_CNF,
   MSG_ID_DRMT_PARSE_DM_REQ,
   MSG_ID_DRMT_PARSE_DM_CNF,
   MSG_ID_DRMT_GET_RO_NUM_REQ,
   MSG_ID_DRMT_GET_RO_NUM_CNF,
   MSG_ID_DRMT_ENCODE_DRM_MESSAGE_REQ,
   MSG_ID_DRMT_ENCODE_DRM_MESSAGE_CNF,
   MSG_ID_DRMT_SCAN_DISK_REQ,
   MSG_ID_DRMT_SCAN_DISK_CNF,
   MSG_ID_DRMT_REGISTER_SD_CALLBACK_REQ,
   MSG_ID_DRMT_REGISTER_SD_CALLBACK_CNF,
   MSG_ID_DRMT_SD_EXPIRY_IND,
   MSG_ID_DRMT_RESERVE_7,
   MSG_ID_DRMT_RESERVE_8,
   MSG_ID_DRMT_RESERVE_9,
   MSG_ID_DRMT_RESERVE_10,
   MSG_ID_DRMT_MAX,
   MSG_ID_DRMT_MSG_CODE_END = MSG_ID_DRMT_MAX,
    



#line 2090 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_DRMT_CODE_CHECK_POINT,




 

 
#line 1 "interface\\inet_ps\\emlst_sap.h"

































 
#line 43 "interface\\inet_ps\\emlst_sap.h"


    MSG_ID_EMLST_SAP_DEFINE_BEGIN = MSG_ID_EMLST_CODE_BEGIN,

    
    MSG_ID_EMAIL_ASYNC_FS_OPEN_REQ,
    MSG_ID_EMAIL_ASYNC_FS_OPEN_RSP,
    
    MSG_ID_EMAIL_ASYNC_FS_CLOSE_REQ,
    MSG_ID_EMAIL_ASYNC_FS_CLOSE_RSP,
    
    MSG_ID_EMAIL_ASYNC_FS_READ_REQ,
    MSG_ID_EMAIL_ASYNC_FS_READ_RSP,

    MSG_ID_EMAIL_ASYNC_FS_WRITE_REQ,
    MSG_ID_EMAIL_ASYNC_FS_WRITE_RSP,
    
    MSG_ID_EMAIL_ASYNC_FS_SEEK_REQ,
    MSG_ID_EMAIL_ASYNC_FS_SEEK_RSP,
    
    MSG_ID_EMAIL_ASYNC_FS_COMMIT_REQ,
    MSG_ID_EMAIL_ASYNC_FS_COMMIT_RSP,
    
    MSG_ID_EMAIL_ASYNC_FS_DELETE_REQ,
    MSG_ID_EMAIL_ASYNC_FS_DELETE_RSP,
    
    MSG_ID_EMAIL_ASYNC_FS_XDELETE_REQ,
    MSG_ID_EMAIL_ASYNC_FS_XDELETE_RSP,
    
    MSG_ID_EMAIL_ASYNC_FS_RENAME_REQ,
    MSG_ID_EMAIL_ASYNC_FS_RENAME_RSP,
    
    MSG_ID_EMAIL_ASYNC_FS_MOVE_REQ,
    MSG_ID_EMAIL_ASYNC_FS_MOVE_RSP,
    
    MSG_ID_EMAIL_ASYNC_FS_FIND_FIRST_REQ,
    MSG_ID_EMAIL_ASYNC_FS_FIND_FIRST_RSP,

    MSG_ID_EMAIL_ASYNC_FS_FIND_NEXT_REQ,
    MSG_ID_EMAIL_ASYNC_FS_FIND_NEXT_RSP,
    
    MSG_ID_EMAIL_ASYNC_FS_FIND_CLOSE_REQ,
    MSG_ID_EMAIL_ASYNC_FS_FIND_CLOSE_RSP,

    MSG_ID_EMAIL_MIME_PARSER_REQ,
    MSG_ID_EMAIL_MIME_PARSER_RSP,

    MSG_ID_EMAIL_ASYNC_FS_XDELETE_ACCT_REQ,
    MSG_ID_EMAIL_ASYNC_FS_XDELETE_ACCT_RSP,



#line 2101 "config\\include\\hal\\user_msgid_hal.h"

    MSG_ID_EMLST_CODE_CHECK_POINT,



 

 
#line 1 "interface\\inet_ps\\dhcpd_sap.h"

































 
 







 

 























 

 
#line 80 "interface\\inet_ps\\dhcpd_sap.h"
    




















 
    MSG_ID_ABM_DHCPD_ACTIVE_IND = MSG_ID_DHCPD_CODE_BEGIN,


    










 
    MSG_ID_ABM_DHCPD_ACTIVE_RES,


    




 
    MSG_ID_DHCPD_RECV_DATA_IND,


    













 
    MSG_ID_ABM_DHCPD_DEACTIVE_IND,
       

    










 
    MSG_ID_ABM_DHCPD_DEACTIVE_RES,

   
    MSG_ID_DHCPD_CODE_END = MSG_ID_ABM_DHCPD_DEACTIVE_RES,




 

#line 2111 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_DHCPD_CODE_CHECK_POINT,



 

 




    MSG_ID_HOSTAP_MSG_CODE_CHECK_POINT,



 

 
#line 1 "interface\\fs\\fs_sap.h"

































 

































 

    MSG_ID_FS_STARTUP_REQ = MSG_ID_FS_CODE_BEGIN,

    
    MSG_ID_FS_SERVICE_REQ_BEGIN = MSG_ID_FS_STARTUP_REQ,

    MSG_ID_FS_ABORT_REQ,
    MSG_ID_FS_OPEN_REQ,
    MSG_ID_FS_GET_FOLDER_SIZE_REQ,
    MSG_ID_FS_WRITE_REQ,
    MSG_ID_FS_DELETE_REQ,
    MSG_ID_FS_READ_REQ,
    MSG_ID_FS_SEEK_REQ,
    MSG_ID_FS_FIND_FIRST_REQ,
    MSG_ID_FS_FIND_FIRST_N_REQ,

    MSG_ID_FS_SERVICE_REQ_END   = MSG_ID_FS_FIND_FIRST_N_REQ,

    
    MSG_ID_FS_SERVICE_RSP_BEGIN = MSG_ID_FS_SERVICE_REQ_END + 1,

    MSG_ID_FS_OPEN_RSP,
    MSG_ID_FS_GET_FOLDER_SIZE_RSP,
    MSG_ID_FS_WRITE_RSP,
    MSG_ID_FS_DELETE_RSP,
    MSG_ID_FS_READ_RSP,
    MSG_ID_FS_SEEK_RSP,
    MSG_ID_FS_FIND_FIRST_RSP,
    MSG_ID_FS_FIND_FIRST_N_RSP,

    MSG_ID_FS_SERVICE_RSP_END   = MSG_ID_FS_FIND_FIRST_N_RSP,

    MSG_ID_FS_CODE_END,


#line 2131 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_FS_CODE_CHECK_POINT,



 


 




    MSG_ID_MTP_CODE_CHECK_POINT,





 
 
#line 1 "interface\\media\\hal\\med_hal_sap.h"

































 
 







 

 















































 
    
    MSG_ID_MED_STARTUP_REQ = MSG_ID_MED_HAL_CODE_BEGIN,
    MSG_ID_MED_STARTUP_CNF,
    MSG_ID_MEDIA_IN_PROC_CALL_REQ,
    MSG_ID_MEDIA_IN_PROC_CALL_CNF,

    MSG_ID_MEDIA_AUD_SET_AUDIO_MODE_REQ,
    MSG_ID_MED_AUD_HAL_CODE_BEGIN = MSG_ID_MEDIA_AUD_SET_AUDIO_MODE_REQ,
    MSG_ID_MEDIA_AUD_SET_AUDIO_MODE_CNF,
    MSG_ID_MEDIA_AUD_GET_AUDIO_PROFILE_REQ,
    MSG_ID_MEDIA_AUD_GET_AUDIO_PROFILE_CNF,
    MSG_ID_MEDIA_AUD_SET_AUDIO_PROFILE_REQ,
    MSG_ID_MEDIA_AUD_SET_AUDIO_PROFILE_CNF,
    MSG_ID_MEDIA_AUD_GET_AUDIO_PARAM_REQ,
    MSG_ID_MEDIA_AUD_GET_AUDIO_PARAM_CNF,
    MSG_ID_MEDIA_AUD_SET_AUDIO_PARAM_REQ,
    MSG_ID_MEDIA_AUD_SET_AUDIO_PARAM_CNF,

    MSG_ID_MEDIA_AUD_GET_VOLUME_REQ,
    MSG_ID_MEDIA_AUD_GET_VOLUME_CNF,
    MSG_ID_MEDIA_AUD_SET_VOLUME_REQ,
    MSG_ID_MEDIA_AUD_SET_VOLUME_CNF,
    MSG_ID_MEDIA_AUD_SET_DEVICE_REQ,
    MSG_ID_MEDIA_AUD_SET_DEVICE_CNF,
    MSG_ID_MEDIA_AUD_MUTE_REQ,
    MSG_ID_MEDIA_AUD_MUTE_CNF,
    MSG_ID_MEDIA_AUD_SET_HEADSET_MODE_MIC_REQ,

    MSG_ID_MEDIA_AUD_PLAY_BY_ID_REQ,
    MSG_ID_MEDIA_AUD_PLAY_BY_ID_CNF,
    MSG_ID_MEDIA_AUD_STOP_BY_ID_REQ,
    MSG_ID_MEDIA_AUD_STOP_BY_ID_CNF,
    MSG_ID_MEDIA_AUD_PLAY_BY_STRING_REQ,
    MSG_ID_MEDIA_AUD_PLAY_BY_STRING_CNF,
    MSG_ID_MEDIA_AUD_STOP_BY_STRING_REQ,
    MSG_ID_MEDIA_AUD_STOP_BY_STRING_CNF,
    MSG_ID_MEDIA_AUD_PLAY_BY_FILE_REQ,
    MSG_ID_MEDIA_AUD_PLAY_BY_FILE_CNF,
    MSG_ID_MEDIA_AUD_STOP_REQ,
    MSG_ID_MEDIA_AUD_STOP_CNF,
    MSG_ID_MEDIA_AUD_PLAY_FINISH_IND,

    MSG_ID_MEDIA_AUD_EMSD_MONITOR_REQ,
    MSG_ID_MEDIA_AUD_EMSD_CODE_BEGIN = MSG_ID_MEDIA_AUD_EMSD_MONITOR_REQ,
    MSG_ID_MEDIA_AUD_EMSD_MONITOR_CNF,
    MSG_ID_MEDIA_AUD_EMSD_SET_REQ,
    MSG_ID_MEDIA_AUD_EMSD_SET_CNF,
    MSG_ID_MEDIA_AUD_EMSD_PUSH_REQ,
    MSG_ID_MEDIA_AUD_EMSD_PUSH_CNF,
    MSG_ID_MEDIA_AUD_EMSD_PULL_IND,
    MSG_ID_MEDIA_AUD_EMSD_HACK_IND,
    MSG_ID_MEDIA_AUD_EMSD_LACK_IND,
    MSG_ID_MEDIA_AUD_EMSD_SYNC_IND,
    MSG_ID_MEDIA_AUD_EMSD_PSAP_MONITOR_REQ,
    MSG_ID_MEDIA_AUD_EMSD_PSAP_MONITOR_CNF,
    MSG_ID_MEDIA_AUD_EMSD_PSAP_PULL_REQ,
    MSG_ID_MEDIA_AUD_EMSD_PSAP_PULL_CNF,
    MSG_ID_MEDIA_AUD_EMSD_PSAP_DATA_IND,
    MSG_ID_MEDIA_AUD_EMSD_CODE_END = MSG_ID_MEDIA_AUD_EMSD_PSAP_DATA_IND,


    MSG_ID_MEDIA_AUD_SP_SET_MODE_REQ,
    MSG_ID_MEDIA_AUD_SP_SET_MODE_CNF,
    MSG_ID_MEDIA_AUD_SP_SET_FIR_COEFF_REQ,
    MSG_ID_MEDIA_AUD_GET_AUDIO_WB_INPUT_FIR_PARAM_REQ,
    MSG_ID_MEDIA_AUD_GET_AUDIO_WB_INPUT_FIR_PARAM_CNF,
    MSG_ID_MEDIA_AUD_GET_AUDIO_WB_OUTPUT_FIR_PARAM_REQ,
    MSG_ID_MEDIA_AUD_GET_AUDIO_WB_OUTPUT_FIR_PARAM_CNF,
    MSG_ID_MEDIA_AUD_GET_AUDIO_WB_MODE_PARAM_REQ,
    MSG_ID_MEDIA_AUD_GET_AUDIO_WB_MODE_PARAM_CNF,
    MSG_ID_MEDIA_AUD_SET_AUDIO_WB_INPUT_FIR_PARAM_REQ,
    MSG_ID_MEDIA_AUD_SET_AUDIO_WB_INPUT_FIR_PARAM_CNF,
    MSG_ID_MEDIA_AUD_SET_AUDIO_WB_OUTPUT_FIR_PARAM_REQ,
    MSG_ID_MEDIA_AUD_SET_AUDIO_WB_OUTPUT_FIR_PARAM_CNF,
    MSG_ID_MEDIA_AUD_SET_AUDIO_WB_MODE_PARAM_REQ,
    MSG_ID_MEDIA_AUD_SET_AUDIO_WB_MODE_PARAM_CNF,
    MSG_ID_MEDIA_AUD_SP_SET_ENHANCE_MODE_REQ,

    MSG_ID_MED_HAL_AUD_CODE_END = MSG_ID_MEDIA_AUD_SP_SET_ENHANCE_MODE_REQ,

    MSG_ID_MED_HAL_CODE_END = MSG_ID_MED_HAL_AUD_CODE_END,

 

#line 2153 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_MED_HAL_CODE_CHECK_POINT,




 

    

 
#line 1 "interface\\l1interface\\sap\\l1_ext_sap.h"

































 
 

























 




 
MSG_ID_L4CL1_QUERY_CAL_DATA_DL_STATUS_REQ = MSG_ID_L1_EXT_CODE_BEGIN,
MSG_ID_L4CL1_QUERY_CAL_DATA_DL_STATUS_CNF,




#line 2165 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_L1_EXT_CODE_CHECK_POINT,





 

 
#line 1 "interface\\inet_ps\\cardav_sap.h"

































 
 







 

 























 

 
#line 80 "interface\\inet_ps\\cardav_sap.h"
    MSG_ID_VCRD_SET_CHANNEL_REQ = MSG_ID_CARDAV_CODE_BEGIN, 
                                         



 

    MSG_ID_VCRD_SET_CHANNEL_RSP,        



 
    MSG_ID_VCRD_REMOVE_CHANNEL_REQ,     



 

    MSG_ID_VCRD_REMOVE_CHANNEL_RSP,     



 

    MSG_ID_VCRD_METHOD_REQ,             




 

    MSG_ID_VCRD_METHOD_RSP,             



 

    MSG_ID_VCRD_ABORT_REQ,              



 

    MSG_ID_VCRD_ABORT_RSP,              



 

    MSG_ID_VCRD_PROGRESS_IND,           



 

   
    MSG_ID_CARDAV_CODE_END = MSG_ID_VCRD_PROGRESS_IND,




 

#line 2176 "config\\include\\hal\\user_msgid_hal.h"
    MSG_ID_CARDAV_CODE_CHECK_POINT,



 

#line 1105 "config\\include\\hal\\stack_msgs.h"
#line 1 "config\\include\\app\\user_msgid_app.h"

































 




































































































































































































































































































































































































































































































































































































































































































































































































































































































 







 






















 

 


#line 1 "interface\\mmi\\mmiapi_sap.h"

































 




































































































































































































































































































































































































































































































































 
 	MSG_ID_MMIAPI_ACTION_REGISTER_IND = MSG_ID_MMIAPI_CODE_BEGIN,
	MSG_ID_MMIAPI_ACTION_NOTIFY_IND,

	MSG_ID_MMIAPI_MMS_IND,
	MSG_ID_MMIAPI_DEVICE_GET_CTRL_REQ,
	MSG_ID_MMIAPI_DEVICE_GET_CTRL_RSP,
	MSG_ID_MMIAPI_DEVICE_PLAY_REQ,
	MSG_ID_MMIAPI_DEVICE_PLAY_RSP,

	
	MSG_ID_MMIAPI_REMOTE_PROC_CALL_REQ,

	
	MSG_ID_MMIAPI_SMS_SEND_REQ,
	MSG_ID_MMIAPI_SMS_SEND_RSP,

	MSG_ID_MMIAPI_SMS_IND,
	
	MSG_ID_MMIAPI_SMS_REGISTER_PORT_REQ,
	MSG_ID_MMIAPI_SMS_REGISTER_PORT_RSP,

	MSG_ID_MMIAPI_SMS_CHECK_INCOMING_MSG_REQ,
	MSG_ID_MMIAPI_SMS_CHECK_INCOMING_MSG_RSP,

	MSG_ID_MMIAPI_SMS_GET_INCOMING_MSG_TIMESTAMP_REQ,
	MSG_ID_MMIAPI_SMS_GET_INCOMING_MSG_TIMESTAMP_RSP,

	MSG_ID_MMIAPI_SMS_GET_INCOMING_MSG_ADDRESS_REQ,
	MSG_ID_MMIAPI_SMS_GET_INCOMING_MSG_ADDRESS_RSP,

	MSG_ID_MMIAPI_SMS_GET_INCOMING_MSG_REQ,
	MSG_ID_MMIAPI_SMS_GET_INCOMING_MSG_RSP,
	
	MSG_ID_MMIAPI_SMS_GET_HOST_ADDRESS_REQ,
	MSG_ID_MMIAPI_SMS_GET_HOST_ADDRESS_RSP,

	MSG_ID_MMIAPI_SMS_GET_SMSC_ADDR_REQ,
	MSG_ID_MMIAPI_SMS_GET_SMSC_ADDR_RSP,

	MSG_ID_MMIAPI_SMS_SEND_ABORT_REQ,
	MSG_ID_MMIAPI_SMS_SEND_ABORT_RSP,

    

 
    MSG_ID_MMI_JAVA_UI_TEXTFIELD_SHOW_REQ,
    MSG_ID_MMI_JAVA_UI_TEXTFIELD_SHOW_RSP,
    MSG_ID_MMI_JAVA_UI_TEXTFIELD_HIDE_REQ,
    MSG_ID_MMI_JAVA_UI_TEXTFIELD_HIDE_RSP,
            
    MSG_ID_MMI_JAVA_UI_TEXTBOX_SHOW_REQ,
    MSG_ID_MMI_JAVA_UI_TEXTBOX_SHOW_RSP,
    MSG_ID_MMI_JAVA_UI_TEXTBOX_HIDE_REQ,
    MSG_ID_MMI_JAVA_UI_TEXTBOX_HIDE_RSP,
    MSG_ID_MMI_JAVA_UI_TEXTBOX_UPDATE_TICKER_REQ,
    MSG_ID_MMI_JAVA_UI_TEXTBOX_UPDATE_TICKER_RSP,
    MSG_ID_MMI_JAVA_UI_TEXTBOX_UPDATE_TITLE_REQ,
    MSG_ID_MMI_JAVA_UI_TEXTBOX_UPDATE_TITLE_RSP,
    MSG_ID_MMI_JAVA_UI_TEXTBOX_UPDATE_COMMAND_REQ,
    MSG_ID_MMI_JAVA_UI_TEXTBOX_UPDATE_COMMAND_RSP,
    MSG_ID_MMI_JAVA_UI_TEXTBOX_UPDATE_TEXT_REQ,
    MSG_ID_MMI_JAVA_UI_TEXTBOX_UPDATE_TEXT_RSP,
            
    MSG_ID_MMI_JAVA_UI_OPTION_MENU_SHOW_REQ,
    MSG_ID_MMI_JAVA_UI_OPTION_MENU_SHOW_RSP,
    MSG_ID_MMI_JAVA_UI_OPTION_MENU_HIDE_REQ,
    MSG_ID_MMI_JAVA_UI_OPTION_MENU_HIDE_RSP,  
            
    MSG_ID_MMI_JAVA_UI_POPUP_SHOW_REQ,
    MSG_ID_MMI_JAVA_UI_POPUP_SHOW_RSP,
    MSG_ID_MMI_JAVA_UI_POPUP_HIDE_REQ,
    MSG_ID_MMI_JAVA_UI_POPUP_HIDE_RSP,  
        
    MSG_ID_MMI_JAVA_UI_DATEFIELD_DATE_SHOW_REQ,
    MSG_ID_MMI_JAVA_UI_DATEFIELD_DATE_SHOW_RSP,
    MSG_ID_MMI_JAVA_UI_DATEFIELD_DATE_HIDE_REQ,
    MSG_ID_MMI_JAVA_UI_DATEFIELD_DATE_HIDE_RSP,
    MSG_ID_MMI_JAVA_UI_DATEFIELD_TIME_SHOW_REQ,
    MSG_ID_MMI_JAVA_UI_DATEFIELD_TIME_SHOW_RSP,
    MSG_ID_MMI_JAVA_UI_DATEFIELD_TIME_HIDE_REQ,
    MSG_ID_MMI_JAVA_UI_DATEFIELD_TIME_HIDE_RSP,
        
    MSG_ID_MMI_JAVA_UI_TOUCH_FEEDBACK_PLAY_REQ,
    MSG_ID_MMI_JAVA_UI_TOUCH_FEEDBACK_PLAY_RSP,
        
    MSG_ID_MMI_JAVA_UI_MMI_STATUS_ICON_UPDATE_REQ,
    MSG_ID_MMI_JAVA_UI_MMI_STATUS_ICON_UPDATE_RSP,

    MSG_ID_MMI_JAVA_UI_JAVA_STATUS_ICON_UPDATE_REQ,
    MSG_ID_MMI_JAVA_UI_JAVA_STATUS_ICON_UPDATE_RSP,
    
    MSG_ID_MMI_JAVA_UI_LAUNCH_FINISH_IND,
    
    

 

        
	MSG_ID_MMIAPI_UI_ENTER_FULLSCREEN_EDITOR_REQ,
	MSG_ID_MMIAPI_UI_ENTER_FULLSCREEN_EDITOR_RSP,
	MSG_ID_MMIAPI_UI_ENTER_IDLE_SCREEN_REQ,
	MSG_ID_MMIAPI_UI_ENTER_IDLE_SCREEN_RSP,
	
        
	MSG_ID_MMIAPI_UI_ENTRY_TEXTBOX_EDITOR_REQ,
	MSG_ID_MMIAPI_UI_ENTRY_TEXTBOX_EDITOR_RSP,
	MSG_ID_MMIAPI_UI_EXIT_TEXTBOX_EDITOR_REQ,
	MSG_ID_MMIAPI_UI_EXIT_TEXTBOX_EDITOR_RSP,
	MSG_ID_MMIAPI_UI_TERMINATE_TEXTBOX_EDITOR_REQ,
	MSG_ID_MMIAPI_UI_TERMINATE_TEXTBOX_EDITOR_RSP,
	MSG_ID_MMIAPI_UI_UPDATE_TITLE_TEXTBOX_EDITOR_REQ,
	MSG_ID_MMIAPI_UI_UPDATE_TITLE_TEXTBOX_EDITOR_RSP,
	MSG_ID_MMIAPI_UI_UPDATE_TICKER_TEXTBOX_EDITOR_REQ,
	MSG_ID_MMIAPI_UI_UPDATE_TICKER_TEXTBOX_EDITOR_RSP,
	MSG_ID_MMIAPI_UI_UPDATE_TEXT_TEXTBOX_EDITOR_REQ,
	MSG_ID_MMIAPI_UI_UPDATE_TEXT_TEXTBOX_EDITOR_RSP,
	MSG_ID_MMIAPI_UI_UPDATE_COMMANDS_TEXTBOX_EDITOR_RSP,
	MSG_ID_MMIAPI_UI_UPDATE_COMMANDS_TEXTBOX_EDITOR_REQ,
        
	
	MSG_ID_MMIAPI_UI_ENTRY_MENU_REQ,
	MSG_ID_MMIAPI_UI_ENTRY_MENU_RSP,
	MSG_ID_MMIAPI_UI_EXIT_MENU_REQ,
	MSG_ID_MMIAPI_UI_EXIT_MENU_RSP,
	MSG_ID_MMIAPI_UI_TERMINATE_MENU_REQ,
	MSG_ID_MMIAPI_UI_TERMINATE_MENU_RSP,
	

	MSG_ID_MMIAPI_UI_SHOW_STATUS_BAR_REQ,
	MSG_ID_MMIAPI_UI_SHOW_STATUS_BAR_RSP,
	MSG_ID_MMIAPI_UI_RESET_STATUS_BAR_REQ,
	MSG_ID_MMIAPI_UI_RESET_STATUS_BAR_RSP,
	MSG_ID_MMIAPI_UI_REGISTER_STATUS_BAR_REQ,
	MSG_ID_MMIAPI_UI_REGISTER_STATUS_BAR_RSP,
	MSG_ID_MMIAPI_UI_HIDE_STATUS_BAR_REQ,
	MSG_ID_MMIAPI_UI_HIDE_STATUS_BAR_RSP,
	MSG_ID_MMIAPI_UI_RESET_STATUS_BAR_DISPLAY_REQ,
	MSG_ID_MMIAPI_UI_RESET_STATUS_BAR_DISPLAY_RSP,

	MSG_ID_MMIAPI_UI_SHOW_DATEFIELD_DATE_REQ,
	MSG_ID_MMIAPI_UI_SHOW_DATEFIELD_DATE_RSP,
	MSG_ID_MMIAPI_UI_EXIT_DATEFIELD_DATE_REQ,
	MSG_ID_MMIAPI_UI_EXIT_DATEFIELD_DATE_RSP,
	MSG_ID_MMIAPI_UI_TERMINATE_DATEFIELD_DATE_REQ,
	MSG_ID_MMIAPI_UI_TERMINATE_DATEFIELD_DATE_RSP,
	
	MSG_ID_MMI_READY_TO_IDLE_SCREEN_IND,

	MSG_ID_MMIAPI_BACKLIGHT_CONTROL_REQ,
	MSG_ID_MMIAPI_BACKLIGHT_CONTROL_RSP,

	MSG_ID_MMIAPI_LED_CONTROL_REQ,
	MSG_ID_MMIAPI_LED_CONTROL_RSP,

	MSG_ID_MMI_SHOW_ASM_DIALOG_REQ,
	MSG_ID_MDI_MOTION_DATA_STATE_RSP,
        MSG_ID_MDI_MOTION_UPDATE_RSP,
	MSG_ID_MMI_VDOPLY_RTSP_URL_REQ,
	MSG_ID_MMI_MEDPLY_RTSP_URL_REQ,
	MSG_ID_SRV_SENSOR_MOTION_CALI_RSP,

#line 1 "interface\\mmi\\mmi_um_sap.h"

































 















































 

#line 613 "interface\\mmi\\mmi_um_sap.h"




	MSG_ID_MMI_UM_READY_IND,
	MSG_ID_MMI_UM_GET_MSG_NUM_REQ,
	MSG_ID_MMI_UM_GET_MSG_NUM_RSP,
	MSG_ID_MMI_UM_GET_MSG_LIST_REQ,
	MSG_ID_MMI_UM_GET_MSG_LIST_RSP,
	MSG_ID_MMI_UM_GET_MSG_INFO_REQ,
	MSG_ID_MMI_UM_GET_MSG_INFO_RSP,
	MSG_ID_MMI_UM_DELETE_FOLDER_REQ,
	MSG_ID_MMI_UM_DELETE_FOLDER_RSP,
	MSG_ID_MMI_UM_NEW_MSG_IND,
	MSG_ID_MMI_UM_DELETE_ALL_IND,
	MSG_ID_MMI_UM_DELETE_ALL_RES,
	MSG_ID_MMI_UM_HIGHLIGHT_MSG_IND,
	MSG_ID_MMI_UM_HIGHLIGHT_DECIDED_BY_UM_IND,
	MSG_ID_MMI_UM_REFRESH_IND,
	MSG_ID_MMI_UM_CANCEL_NEW_MSG_IND,
	MSG_ID_MMI_UM_ENTRY_MARK_SEVERAL_REQ,
	MSG_ID_MMI_UM_ENTRY_MARK_SEVERAL_RSP,
	MSG_ID_MMI_UM_MARK_SEVERAL_OP_REQ,
    MSG_ID_MMI_UM_MARK_SEVERAL_OP_RSP,
    MSG_ID_MMI_UM_TRAVERSE_MSG_REQ,
    MSG_ID_MMI_UM_TRAVERSE_MSG_RSP,
    MSG_ID_MMI_UM_GET_THREAD_ID_REQ,
    MSG_ID_MMI_UM_LOOKUP_NUMBER_REQ,
    MSG_ID_MMI_UM_RESERVED_2_REQ,
    MSG_ID_MMI_UM_RESERVED_2_RSP,





#line 714 "interface\\mmi\\mmiapi_sap.h"

	MSG_ID_MMI_DA_GET_FILE_IND,
	MSG_ID_MMI_DA_GET_FILE_RSP,
    MSG_ID_MMI_DA_DISPATCH_FILE_REQ,
    MSG_ID_MMI_DA_DISPATCH_FILE_RSP,
    MSG_ID_MMI_DA_DOWNLOAD_INFO_IND,
    MSG_ID_MMI_DA_WAP_NOTIFY_IND,
    MSG_ID_MMI_DA_TRIGGER_PROC_IND,
    
	MSG_ID_MDI_SWFLASH_DL_SOCKET_IND,
	MSG_ID_MDI_SWFLASH_PL_AUDIO_IND,

    MSG_ID_MMI_GDD_IMG_CODEC_EVENT_IND,
    MSG_ID_MMI_GDC_IMG_CODEC_CALLBACK_IND,
    MSG_ID_MMI_GDI_ANIM_START_TIMER_IND,
    MSG_ID_MMI_GDI_ANIM_STOP_TIMER_IND,
    MSG_ID_MMI_GDI_ANIM_CALLBACK_IND,

     
    MSG_ID_GDI_LT_RELEASE_G2D_HANDLE_IND,
    MSG_ID_GDI_GOVL_FLATTEN_CALLBACK_IND,
    MSG_ID_GDI_G2D_FILL_RECT_CALLBACK_IND,

	MSG_ID_MMI_MAKE_CALL_REQ_IND,

     
    MSG_ID_MMI_CCA_APP_CONFIGURE_IND,
    MSG_ID_MMI_CCA_APP_CONFIGURE_RSP,
    MSG_ID_MMI_CCA_SOURCE_NEW_DOC_IND,
    MSG_ID_MMI_CCA_SOURCE_NEW_DOC_RSP,
    MSG_ID_MMI_CCA_SOURCE_UI_INVALID_SETTING_IND,
    MSG_ID_MMI_CCA_SOURCE_UI_NEW_SETTING_IND,
    MSG_ID_MMI_CCA_SOURCE_UI_NEW_SETTING_RSP,
    MSG_ID_MMI_CCA_SOURCE_UI_AUTH_IND,
    MSG_ID_MMI_CCA_SOURCE_UI_AUTH_RSP,
    MSG_ID_MMI_CCA_NEW_DOC_CONTINUE_IND,
    MSG_ID_MMI_CCA_GET_PROF_IND,
    MSG_ID_MMI_CCA_GET_PROF_RSP,
    MSG_ID_MMI_CCA_APP_GET_PROF_IND,
    MSG_ID_MMI_CCA_APP_GET_PROF_RSP,
    MSG_ID_MMI_CCA_UPDATE_PROF_IND,
    MSG_ID_MMI_CCA_UPDATE_PROF_RSP,
    MSG_ID_MMI_CCA_APP_UPDATE_PROF_IND,
    MSG_ID_MMI_CCA_APP_UPDATE_PROF_RSP,
    MSG_ID_MMI_CCA_SOURCE_SIM_PROFILE_STATUS_IND,
    MSG_ID_MMI_CCA_APP_SIM_PROFILE_STATUS_IND,
    MSG_ID_MMI_CCA_SOURCE_CCA_READY_IND,
    MSG_ID_MMI_CCA_SESSION_BEGIN_IND,
    MSG_ID_MMI_CCA_SESSION_BEGIN_RSP,
    MSG_ID_MMI_CCA_SESSION_END_IND,
    MSG_ID_MMI_CCA_SESSION_END_RSP,
    MSG_ID_MMI_CCA_PROCESS_PROV_MSG_REQ,
    MSG_ID_MMI_CCA_PROCESS_PROV_MSG_CNF,
    MSG_ID_MMI_CCA_SOURCE_INSTALL_PROV_MSG_REQ, 
    MSG_ID_MMI_CCA_SOURCE_INSTALL_PROV_MSG_CNF, 

     

     
    MSG_ID_MMI_SPA_SIM_STATUS_INFO_IND,

     
    MSG_ID_MMI_SIM_STATUS_INFO_IND,
    
     
    MSG_ID_MMI_PROVBOX_CONTINUE_PROCESS_JOB_IND,

     
    MSG_ID_MMI_PROVBOX_SAVE_MSG_AVAILABLE_IND,
    MSG_ID_MMI_PROVBOX_SAVE_MSG_REQ,
    MSG_ID_MMI_PROVBOX_SAVE_MSG_CNF,
    MSG_ID_MMI_PROVBOX_GET_MSG_DATA_REQ,
    MSG_ID_MMI_PROVBOX_GET_MSG_DATA_CNF,

     
    MSG_ID_MMI_PROVBOX_NEW_MSG_IND,
    MSG_ID_MMI_PROVBOX_LIST_INFO_CHANGED_IND,
    MSG_ID_MMI_PROVBOX_UPDATE_MSG_NUM_IND,

    MSG_ID_MMI_PROVBOX_GET_MSG_NUM_REQ,
    MSG_ID_MMI_PROVBOX_GET_MSG_NUM_CNF,
    MSG_ID_MMI_PROVBOX_GET_SORT_INFO_REQ,
    MSG_ID_MMI_PROVBOX_GET_SORT_INFO_CNF,
    MSG_ID_MMI_PROVBOX_GET_LIST_INFO_BY_ID_REQ,
    MSG_ID_MMI_PROVBOX_GET_LIST_INFO_BY_ID_CNF,
    MSG_ID_MMI_PROVBOX_GET_LIST_INFO_BY_INDEX_REQ,
    MSG_ID_MMI_PROVBOX_GET_LIST_INFO_BY_INDEX_CNF,

    MSG_ID_MMI_PROVBOX_MULTI_OP_REQ,
    MSG_ID_MMI_PROVBOX_MULTI_OP_CNF,

    MSG_ID_MMI_PROVBOX_DELETE_MSG_REQ,
    MSG_ID_MMI_PROVBOX_DELETE_MSG_CNF,
    MSG_ID_MMI_PROVBOX_DELETE_ALL_MSG_REQ,
    MSG_ID_MMI_PROVBOX_DELETE_ALL_MSG_CNF,

     
    MSG_ID_MMI_PROVBOX_SET_MSG_FLAG_REQ,
    MSG_ID_MMI_PROVBOX_SET_MSG_FLAG_CNF,
    MSG_ID_MMI_PROVBOX_GET_MSG_INFO_REQ,
    MSG_ID_MMI_PROVBOX_GET_MSG_INFO_CNF,
    MSG_ID_MMI_PROVBOX_UPDATE_MSG_INFO_REQ,
    MSG_ID_MMI_PROVBOX_UPDATE_MSG_INFO_CNF,
    
     
    MSG_ID_MMI_PROVBOXUI_READY_IND,
    MSG_ID_MMI_PROVBOXUI_POPUP_NOTIFY_IND,

     
    MSG_ID_MMI_PICT_BRIDGE_PENDING_EVENT,
    MSG_ID_MMI_PICT_BRIDGE_MULTIPLE_FILE,

     
    MSG_ID_MMIAPI_GET_BATTERY_LEVEL_REQ,
    MSG_ID_MMIAPI_GET_BATTERY_LEVEL_RSP,

    MSG_ID_MMIAPI_BATTERY_LEVEL_NOTIFY_START_REQ,
    MSG_ID_MMIAPI_BATTERY_LEVEL_NOTIFY_START_RSP,

    MSG_ID_MMIAPI_BATTERY_LEVEL_NOTIFY_IND,

    MSG_ID_MMIAPI_BATTERY_LEVEL_NOTIFY_STOP_REQ,
    MSG_ID_MMIAPI_BATTERY_LEVEL_NOTIFY_STOP_RSP,
    
    MSG_ID_MMI_PS_DTCNT_LIST_IND,
    MSG_ID_MMI_PS_DTCNT_LIST_RSP,

     
    MSG_ID_MMIAPI_GPIO_POST_VIB_REQ,
    
     
    MSG_ID_MDI_VT_LOOPBACK_ACTIVATE_REQ,
	MSG_ID_MDI_VT_LOOPBACK_DEACTIVATE_REQ,

     
    MSG_ID_MMI_FM_ATE_TEST_REQ,

     
    MSG_ID_MMI_BT_BCC_POWER_ON_REQ,   
    MSG_ID_MMI_BT_BCC_POWER_ON_CNF,   
    MSG_ID_MMI_BT_BCC_RESTORE_REQ,   
    MSG_ID_MMI_BT_BCC_RESTORE_CNF,   
    MSG_ID_MMI_BT_BCC_SET_HOST_DEVICE_NAME_REQ,   
    MSG_ID_MMI_BT_BCC_SET_HOST_DEVICE_NAME_CNF,   
    MSG_ID_MMI_BT_BCC_GET_HOST_DEVICE_NAME_REQ,   
    MSG_ID_MMI_BT_BCC_GET_HOST_DEVICE_NAME_CNF,   
    MSG_ID_MMI_BT_BCC_SET_DISCOVERABLE_MODE_REQ,   
    MSG_ID_MMI_BT_BCC_SET_DISCOVERABLE_MODE_CNF,   
    MSG_ID_MMI_BT_BCC_GET_DISCOVERABLE_MODE_REQ,   
    MSG_ID_MMI_BT_BCC_GET_DISCOVERABLE_MODE_CNF,   

    MSG_ID_MMI_BT_BCC_AUTHORIZE_REQ,   
    MSG_ID_MMI_BT_BCC_AUTHORIZE_CNF,   
    MSG_ID_MMI_BT_BCC_IS_AUTHORIZED_REQ,   
    MSG_ID_MMI_BT_BCC_IS_AUTHORIZED_CNF,   
    MSG_ID_MMI_BT_BCC_IS_TRUSTED_REQ,   
    MSG_ID_MMI_BT_BCC_IS_TRUSTED_CNF,   
    MSG_ID_MMI_BT_BCC_GET_HOST_SECURITY_MODE_REQ,   
    MSG_ID_MMI_BT_BCC_GET_HOST_SECURITY_MODE_CNF,   
    MSG_ID_MMI_BT_BCC_GET_PREKNOWN_DEVICE_COUNT_REQ,   
    MSG_ID_MMI_BT_BCC_GET_PREKNOWN_DEVICE_COUNT_CNF,   
    MSG_ID_MMI_BT_BCC_GET_PREKNOWN_DEVICES_REQ,   
    MSG_ID_MMI_BT_BCC_GET_PREKNOWN_DEVICES_CNF,   
    MSG_ID_MMI_BT_BCC_GET_NATIVE_PWR_STATUS_REQ,   
    MSG_ID_MMI_BT_BCC_GET_NATIVE_PWR_STATUS_CNF,   

     
    MSG_ID_SRV_URIAGENT_INVOKE_URI_REQUEST_HDLR_CB_IND,

	MSG_ID_MMI_WAP_PROF_PROFILE_LIST_DISPLAY_IND,
    MSG_ID_MMI_WAP_PROF_GET_PROFILE_CONTENT_REQ,
    MSG_ID_MMI_WAP_PROF_GET_PROFILE_CONTENT_CNF,
	MSG_ID_MMI_WAP_PROF_ACTIVE_PROFILE_CHANGED_IND,
	MSG_ID_MMI_WAP_PROF_ACTIVE_PROFILE_CHANGED_RSP,
	MSG_ID_MMI_WAP_PROF_ADD_BOOKMARK_IND,
	MSG_ID_MMI_WAP_PROF_ADD_BOOKMARK_RSP,
    MSG_ID_MMI_WAP_PROF_SET_URL_AS_HOMEPAGE_IND,
    MSG_ID_MMI_WAP_PROF_SET_URL_AS_HOMEPAGE_RSP,
    MSG_ID_MMI_WAP_PROF_RESTORE_PROFILE_IND,
    MSG_ID_MMI_WAP_PROF_RESTORE_PROFILE_RSP,
    MSG_ID_MMI_WAP_PROF_PROCESS_JOB_QUEUE_IND,
    MSG_ID_MMI_WAP_PROF_SAVE_MMS_SETTING_IND,
    MSG_ID_MMI_WAP_PROF_SAVE_MMS_SETTING_RSP,
    MSG_ID_MMI_WAP_PROF_PROCESS_NEXT_PROV_PROFILE_IND,
    MSG_ID_MMI_UMMS_GET_VCARD_VERSION_REQ,
    MSG_ID_MMI_UMMS_GET_VCARD_VERSION_RSP,
    MSG_ID_MMI_EC_CALI_STATE_IND,
    MSG_ID_MMI_EC_DATA_VALUE_IND,
    MSG_ID_MMI_WAP_PROF_CFG_VALIDATE_DTCNT_REQ,
    MSG_ID_MMI_WAP_PROF_CFG_VALIDATE_DTCNT_RSP,
    MSG_ID_MMI_WAP_PROF_CFG_DTCNT_IND,
    MSG_ID_MMI_WAP_PROF_CFG_DTCNT_CNF,
    MSG_ID_MMI_WAP_PROF_CFG_DTCNT_SEND_RESPONSE_IND,

    MSG_ID_MMI_BT_SEND_OBJ_REQ,
    MSG_ID_MMI_BT_FTPC_PARSE_CONTINUE,
    MSG_ID_MMI_BT_FTPS_GEN_FOLDER_CONTINUE,
    MSG_ID_MMI_BT_POST_EVENT,

	MSG_ID_MMI_RESTORE_JAVA_SETTING_CNF,
      
    MSG_ID_MMS_MAKE_CALL_REQ,
    MSG_ID_MMS_ENTER_SMS_EDITOR_REQ,
    MSG_ID_MMI_WAP_PROF_SET_AS_HOMEPAGE_IND,

    MSG_ID_SRV_SMS_READ_MULTI_ME_SMS_IND,
    MSG_ID_SRV_SMS_READ_ME_SMS_IND,
    MSG_ID_SRV_SMS_WRITE_ME_SMS_IND,
    MSG_ID_SRV_SMS_READ_QUEUE_IND,
    MSG_ID_SRV_SMS_CALLBACK_IND,

    MSG_ID_SRV_CBS_MULTI_OP_IND,

    MSG_ID_MMI_PHB_ASYNC_EVENT_IND,


     

    MSG_ID_SRV_CLOG_JOB_CONTINUE_IND,

     
    MSG_ID_SRV_CLOG_INJECT_IND,

     
    
     
    MSG_ID_SRV_DTCNT_PROF_PROXY_INFO_REQ,
    MSG_ID_SRV_DTCNT_PROF_PROXY_INFO_CNF,

     
    MSG_ID_MMI_DTCNT_RESUME_PARSE_IND,

     
    MSG_ID_MMI_EBOOK_CALLBACK_ERROR_IND,
    MSG_ID_MMI_EBOOK_RESET_AUTO_SCROLL_IND,
    MSG_ID_MMI_EBOOK_MOVE_BOOK_INTO_FOLDER,
    MSG_ID_MMI_EBOOK_CONVERSION_COMPLETE_IND,
    MSG_ID_MMI_EBOOK_RESTORE_DEFAULT_SETTING_IND,
     

     
    MSG_ID_MMI_CBM_ALWAYS_ASK_SELECT_ACCOUNT_RESULT_IND,
    MSG_ID_MMI_CBM_ALWAYS_ASK_SELECT_ACCOUNT_RESULT_CNF,
    MSG_ID_MMI_CBM_RESTORE_BEARER_DISALLOWED_IND,
     

     
    MSG_ID_MMI_MDI_SUSPEND_BACKGROUND_PLAY_REQ,
    MSG_ID_MMI_MDI_BT_OPEN_STREAM_REQ,

     
    MSG_ID_IVD_DB_START_REQ,
    MSG_ID_IVD_DB_START_RSP,
    MSG_ID_IVD_DB_STOP_REQ,
    MSG_ID_IVD_DB_STOP_RSP,
    MSG_ID_IVD_DB_GET_IMG_REQ,
    MSG_ID_IVD_DB_GET_IMG_RSP,
    MSG_ID_IVD_DB_PUT_IMG_REQ,
    MSG_ID_IVD_DB_PUT_IMG_RSP,
    MSG_ID_IVD_DB_REMOVE_IMG_REQ,
    MSG_ID_IVD_DB_REMOVE_IMG_RSP,
    MSG_ID_IVD_DB_GET_META_REQ,
    MSG_ID_IVD_DB_GET_META_RSP,
    MSG_ID_IVD_DB_PUT_META_REQ,
    MSG_ID_IVD_DB_PUT_META_RSP,
    MSG_ID_IVD_DB_VDO_REQ,
    MSG_ID_IVD_DB_VDO_RSP,
     


     
    MSG_ID_PLS_DB_INIT_REQ,
    MSG_ID_PLS_DB_DEINIT_REQ,
    MSG_ID_PLS_LIBRARY_OPEN_REQ,
    MSG_ID_PLS_LIBRARY_OPEN_RSP,    
    MSG_ID_PLS_LIBRARY_CLOSE_REQ,
    MSG_ID_PLS_CREATE_TABLE_REQ,
    MSG_ID_PLS_READ_VERSION_REQ,
    MSG_ID_PLS_LIBRARY_UPDATE_REQ,
    MSG_ID_PLS_LIBRARY_UPDATE_RSP,
    MSG_ID_PLS_LIBRARY_STOP_UPDATE_REQ,
    MSG_ID_PLS_LIST_GET_DATA_REQ,
    MSG_ID_PLS_LIST_GET_DATA_RSP,
    MSG_ID_PLS_LIST_ITEM_DELETE_REQ,
    MSG_ID_PLS_LIST_ITEM_DELETE_RSP,
    MSG_ID_PLS_LIST_ITEM_REMOVE_REQ,
    MSG_ID_PLS_LIST_ITEM_ADD_REQ,
    MSG_ID_PLS_LIST_ITEM_ADD_RSP,
    MSG_ID_PLS_LIST_ITEM_GET_PLAY_REQ,
    MSG_ID_PLS_LIST_PREFIX_SEARCH_REQ,
    MSG_ID_PLS_LIST_PREFIX_SEARCH_ITEM_DISPLAY_REQ,
    MSG_ID_PLS_LIST_GET_ID_REQ,
    MSG_ID_PLS_LIST_GET_DETAILS_REQ,
    MSG_ID_PLS_LIST_UPDATE_DETAILS_REQ,
    MSG_ID_PLS_LIST_ORIGANIZATION_REQ,
    MSG_ID_PLS_LIBRARY_UPDATE_RESUME_REQ,
    MSG_ID_PLS_PLST_CREATE_REQ,
    MSG_ID_PLS_PLST_RENAME_REQ,
    MSG_ID_PLS_PLST_DELETE_REQ,
    MSG_ID_PLS_CREATE_MARK_TBL_REQ,
    MSG_ID_PLS_LIST_MARK_REQ,
    MSG_ID_PLS_LIST_GET_MARK_REQ,
    MSG_ID_PLS_LIST_SET_ACTIVE_REQ,
    MSG_ID_PLS_LIST_ITEM_REMOVE_RSP,
    MSG_ID_PLS_LIST_BG_LOADING_REQ,
    MSG_ID_PLS_LIST_LOAD_ACTIVE_REQ,
    MSG_ID_PLS_ENTRY_LIST_REQ,
    MSG_ID_PLS_EXIT_LIST_REQ,
    MSG_ID_PLS_PLAY_CONFIG_RESET_REQ,
    MSG_ID_PLS_LIST_ORIGANIZATION_RESULT_REQ,
    MSG_ID_PLS_LIST_ITEM_ADD_STOP_REQ,
    MSG_ID_PLS_LIST_ITEM_DELETE_STOP_REQ,
    MSG_ID_PLS_LIBRARY_OPEN_STOP_REQ,
    MSG_ID_PLS_LIST_ITEM_REMOVE_STOP_REQ,
    MSG_ID_PLS_LIST_GET_DATA_STOP_REQ,
    MSG_ID_PLS_PLST_DELETE_STOP_REQ,
    MSG_ID_PLS_LIST_ITEM_DELETE_ACTIVE_RSP,
    MSG_ID_PLS_LIBRARY_UPDATE_CONTINUE_RSP,
    MSG_ID_PLS_LIST_UPDATE_ARTWORK_RSP,
    MSG_ID_PLS_LIST_STOP_UPDATE_ARTWORK_REQ,
    MSG_ID_PLS_LIST_GET_CNTX_REQ,
    MSG_ID_PLS_LIST_UPADTE_PLAYING_INFO_REQ,
    MSG_ID_PLS_LIST_UPDATE_ACTIVE_INDEX_REQ,
    MSG_ID_PLS_LIST_CHECK_PLST_EXIST,
    MSG_ID_PLS_LIST_CHECK_ACTIVE_IN_DEFPLST,
    MSG_ID_PLS_LIST_ACT_MEDIA_ADD_TO_DEFPLST,
    MSG_ID_PLS_LIST_ACT_MEDIA_REMOVE_FROM_DEFPLST,
    MSG_ID_PLS_LIST_DELETE_ITEM_IND,
    MSG_ID_PLS_LIST_ADD_ITEM_IND,
    MSG_ID_PLS_LIST_LIST_JUMP_REQ,
    MSG_ID_PLS_LIST_GROUP_LIST_COUNT_REQ,
    MSG_ID_PLS_LIST_SEARCH_REQ,
    MSG_ID_PLS_LIST_SEARCH_RSP,
    MSG_ID_PLS_PLST_GET_PLST_INDEX_REQ,
    MSG_ID_PLS_LIST_STORE_ACTIVE_INFO_REQ,
    MSG_ID_PLS_LIST_STORE_ACTIVE_INFO_RSP,
     

     
    MSG_ID_MOT_UPDATE_REQ,
    MSG_ID_MOT_CODE_BEGIN = MSG_ID_MOT_UPDATE_REQ,
    MSG_ID_MOT_STOP_UPDATING_REQ,
    MSG_ID_MOT_EVENT_IND,
    MSG_ID_MOT_CODE_END = MSG_ID_MOT_EVENT_IND,
     

	 
	MSG_ID_MMI_INJECT_STRING_RSP,
	MSG_ID_MODIS_TP_EVENT_IND,
	MSG_ID_MMI_INVALID_IND,
     


 
    MSG_ID_MMI_IME_INPUT_MODE_CHANGE_IND,
    MSG_ID_MMI_IME_INPUT_MODE_VALUE_IND,
    MSG_ID_MMI_IME_STRING_INSERTED_IND,
     

     
    MSG_ID_MMI_IMGVIEW_PLAY_FILE_REQ,
     

     
    MSG_ID_MMI_GALLERY_IMAGE_VIEWER_FILE_REQ,
     

     
    MSG_ID_MMI_LIST_SEARCH_CUI_SEARCH_INT_REQ,
     

     
    MSG_ID_OTFRES_UPDATE_IND,
    MSG_ID_MMI_PLUG_IN_IND,

     
    MSG_ID_VRT_REQ, 
    MSG_ID_VRT_IND,
     
      
    MSG_ID_MMI_3D_MM_LAUNCH_APP_REQ,
    MSG_ID_MMI_3D_MM_LAUNCH_APP_RSP,

     
    MSG_ID_MTE_MMI_RPC_REQ,

     
    MSG_ID_MMI_GDC_IMGDEC_CALLBACK_IND,
     

       
    MSG_ID_MMI_DM_SELF_REGISTER_RESULT_IND,
        

     
    MSG_ID_MMI_MMI_TDL_DEL_NOTIFY,
       
    MSG_ID_MMI_AUTO_ROTATE_CHANGE_IND,
  
     
    MSG_ID_IES_JOB_REQ,
    MSG_ID_IES_JOB_RSP,
     
  
     
    MSG_ID_MMI_EM_SCR_LEVEL_NOTIFY_IND, 
     
    
     
    MSG_ID_MMI_FM_SCR_LEVEL_NOTIFY_IND,
      
  
 
    MSG_ID_SRV_BRW_BOOKMARK_EXPORT_IND,
 

     
    MSG_ID_SNS_DS_INIT_REQ,
    MSG_ID_SNS_DS_INIT_RSP,
    MSG_ID_SNS_DS_DEINIT_REQ,
    MSG_ID_SNS_DS_DEINIT_RSP,
    MSG_ID_SNS_DS_OPEN_REQ,
    MSG_ID_SNS_DS_OPEN_RSP,    
    MSG_ID_SNS_DS_CLOSE_REQ,
    MSG_ID_SNS_DS_CLOSE_RSP,
    MSG_ID_SNS_DS_QUERY_REQ,
    MSG_ID_SNS_DS_QUERY_RSP,
    MSG_ID_SNS_DS_INSERT_REQ,
    MSG_ID_SNS_DS_INSERT_RSP,
    MSG_ID_SNS_DS_UPDATE_REQ,
    MSG_ID_SNS_DS_UPDATE_RSP,
    MSG_ID_SNS_DS_DELETE_REQ,
    MSG_ID_SNS_DS_DELETE_RSP,
    MSG_ID_SNS_DS_LOGOUT_REQ,
    MSG_ID_SNS_DS_LOGOUT_RSP,
    MSG_ID_SNS_ENCODE_JPEG_REQ,
    MSG_ID_SNS_ENCODE_JPEG_RSP,
     
     
    MSG_ID_MSG_TO_NMS_FROM_MMI,
    MSG_ID_MSG_TO_MMI_FROM_NMS,
     
    MSG_ID_GB_WG2_MSG,
     
    
        

    MSG_ID_MATV_ESD_TIME_OUT_IND,

       
	MSG_ID_MMIAPI_CODE_END,

#line 941 "config\\include\\app\\user_msgid_app.h"

    MSG_ID_MMIAPI_CODE_CHECK_POINT,



 

 
#line 1 "interface\\wap\\wap_sap.h"

































 
 







 

 



























































































































































































































































































 



    MSG_ID_WAP_STATUS_UPDATE_IND = MSG_ID_WAP_CODE_BEGIN,
    
#line 1 "interface\\wap\\wap_adp_sap.h"
#line 7 "interface\\wap\\wap_adp_sap.h"

    
    MSG_ID_WAP_BROWSER_POWEROFF_REQ, 




 
    
    MSG_ID_WAP_BROWSER_POWEROFF_RSP, 




 

    
    MSG_ID_WAP_RESTORE_FACTORY_SETTING_REQ, 




 

    
    MSG_ID_WAP_RESTORE_FACTORY_SETTING_CNF,	




 

    
    MSG_ID_WAP_READY_IND, 




 

     
     
    MSG_ID_WAP_INTERNAL_ERROR_IND,
     

    
    MSG_ID_WAP_MMI_BROWSER_TERMINATION_IND, 




 

     
     
    MSG_ID_WAP_MMI_NMGR_PUSH_INFO_REQ, 

     
    MSG_ID_WAP_MMI_NMGR_PUSH_INFO_RSP,      

     
    MSG_ID_WAP_BROWSER_SHUTDOWN_REQ,

     
    MSG_ID_WAP_MMI_KEY_INDICATION,

     
    MSG_ID_WAP_BEARER_STATUS_IND,

     
    MSG_ID_WAP_SIM_INFO_NOTIFY_IND,

     
    MSG_ID_WAP_MEM_CARD_PLUG_OUT,
       
       
     

    MSG_ID_WAP_CONTINUE_PROCESS_IND,
	




 
    
#line 336 "interface\\wap\\wap_sap.h"
#line 1 "interface\\wap\\browser_sap.h"



    MSG_ID_WAP_MMI_LAUNCH_BROWSER_REQ,
    MSG_ID_WAP_MMI_LAUNCH_BROWSER_RSP,
    MSG_ID_WAP_SELECT_BOOKMARK_REQ,
    MSG_ID_WAP_SELECT_BOOKMARK_RSP,
    MSG_ID_WAP_BROWSER_STARTUP_REQ,   
    MSG_ID_WAP_SCHEME_HANDLE_REQ,     
    MSG_ID_WAP_SCHEME_HANDLE_RSP,     
    MSG_ID_WAP_DESTROY_UI_REQ,        
    MSG_ID_WAP_DESTROY_UI_RSP,        
    MSG_ID_MMI_FULL_HTML_BROWSER_POWEROFF_REQ,  
    MSG_ID_MMI_FULL_HTML_BROWSER_POWEROFF_RSP,  
    MSG_ID_MMI_FULL_HTML_BROWSER_RESTORE_FACTORY_SETTING_REQ,  
    MSG_ID_MMI_FULL_HTML_BROWSER_RESTORE_FACTORY_SETTING_CNF,  
#line 337 "interface\\wap\\wap_sap.h"
#line 1 "interface\\wap\\profile_sap.h"



    MSG_ID_WAP_GET_PROF_LIST_REQ,
    MSG_ID_WAP_GET_PROF_LIST_RSP,
    MSG_ID_WAP_GET_PROF_CONTENT_REQ,
    MSG_ID_WAP_GET_PROF_CONTENT_RSP,	
    MSG_ID_WAP_GET_BRA_PROF_ID_REQ,	
    MSG_ID_WAP_GET_BRA_PROF_ID_RSP,	
    MSG_ID_WAP_PROF_ACCESS_REQ,  
    
#line 338 "interface\\wap\\wap_sap.h"
#line 1 "interface\\wap\\ua_sap.h"



    MSG_ID_WAP_GET_USER_AGENT_REQ,
    MSG_ID_WAP_GET_USER_AGENT_RSP,
    
#line 339 "interface\\wap\\wap_sap.h"
#line 1 "interface\\wap\\wps_sap.h"



#line 12 "interface\\wap\\wps_sap.h"

    





















 
    MSG_ID_WPS_SET_CHANNEL_REQ,	

    






 
    MSG_ID_WPS_SET_CHANNEL_RSP,

    





 
    MSG_ID_WPS_UNSET_CHANNEL_REQ,

    







 
    MSG_ID_WPS_UNSET_CHANNEL_RSP,

    MSG_ID_WPS_RECONFIG_CHANNEL_REQ,	
    MSG_ID_WPS_RECONFIG_CHANNEL_RSP,
    MSG_ID_WPS_TERMINATION_IND,
    MSG_ID_WPS_RELEASE_ALL_REQ,
    MSG_ID_WPS_RELEASE_ALL_RSP,

    

































 
    MSG_ID_WPS_HTTP_REQ,

    
















 
    MSG_ID_WPS_HTTP_RSP,

    










 
    MSG_ID_WPS_READ_CONTENT_REQ,

    














 
    MSG_ID_WPS_READ_CONTENT_RSP,

    












 
    MSG_ID_WPS_POST_CONTENT_IND,

    












 
    MSG_ID_WPS_POST_CONTENT_RES,

    












 
    MSG_ID_WPS_DL_PROGRESS_IND,

    





 
    MSG_ID_WPS_DL_PROGRESS_RES,

    








 
    MSG_ID_WPS_CANCEL_REQ,

    





 
    MSG_ID_WPS_CANCEL_RSP,

    







 
    MSG_ID_WPS_PUSH_IND,

    









 
    MSG_ID_WPS_CLEAR_REQ,

    







 
    MSG_ID_WPS_CLEAR_RSP,
    
    MSG_ID_WPS_CREATE_STREAM_CONNECTION_REQ,
    MSG_ID_WPS_CREATE_STREAM_CONNECTION_RSP,
    MSG_ID_WPS_STREAM_CONNECTION_CLOSED_IND,
    MSG_ID_WPS_CLOSE_STREAM_CONNECTION_REQ,
    MSG_ID_WPS_CLOSE_STREAM_CONNECTION_RSP,
    MSG_ID_WPS_STREAM_DATA_SEND_REQ,
    MSG_ID_WPS_STREAM_DATA_SEND_RSP,
    MSG_ID_WPS_STREAM_DATA_READ_REQ,
    MSG_ID_WPS_STREAM_DATA_READ_RSP,
    MSG_ID_WPS_EXT_MSG_IND,

    






 
    MSG_ID_WPS_READY_IND,

    







 
    MSG_ID_WPS_HTTP_AUTH_IND,

    





 
    MSG_ID_WPS_HTTP_AUTH_RES,

    





 
    MSG_ID_WPS_STATUS_QUERY_REQ,

    







 
    MSG_ID_WPS_STATUS_QUERY_RSP,
    MSG_ID_WPS_HTTP_AUTH_INFO,
    MSG_ID_WPS_SET_COOKIE_REQ,
    




#line 351 "interface\\wap\\wps_sap.h"

     

    




 
    MSG_ID_WPS_SEC_GET_SESSION_INFO_REQ,

    




     
    MSG_ID_WPS_SEC_GET_SESSION_INFO_RSP,
    
    




     
    MSG_ID_WPS_SEC_GET_CURRENT_CERT_REQ,

    




     
    MSG_ID_WPS_SEC_GET_CURRENT_CERT_RSP,
    
    




     
    MSG_ID_WPS_SEC_VERIFY_CERT_CHAIN_REQ,
    
    




     
    MSG_ID_WPS_SEC_VERIFY_CERT_CHAIN_RSP,   

    




     
    MSG_ID_WPS_SEC_DELETE_CA_CERT_REQ,

    




     
    MSG_ID_WPS_SEC_DELETE_CA_CERT_RSP,   

    




     
    MSG_ID_WPS_SEC_SHOW_CONFIRM_DIALOG_IND,

    




     
    MSG_ID_WPS_SEC_SHOW_CONFIRM_DIALOG_RES,
    
    




     
    MSG_ID_WPS_SEC_GET_X509_CA_CERT_REQ,

    







     
    MSG_ID_WPS_SEC_GET_X509_CA_CERT_IND,

    




     
    MSG_ID_WPS_SEC_GET_X509_CA_CERT_RSP,   

    




     
    MSG_ID_WPS_SEC_GET_CERT_IDS_REQ,

    




     
    MSG_ID_WPS_SEC_GET_CERT_IDS_RSP,   

    




     
    MSG_ID_WPS_SEC_GET_CERT_REQ,   

    




     
    MSG_ID_WPS_SEC_GET_CERT_RSP,




    
#line 340 "interface\\wap\\wap_sap.h"
#line 1 "interface\\wap\\das_sap.h"








    MSG_ID_WAP_MMI_FILE_DL_IND, 








 
    MSG_ID_WAP_MMI_FILE_DL_RES, 




 
    MSG_ID_WAP_MMI_FILE_DL_PROGRESS_IND, 




 
    MSG_ID_WAP_MMI_FILE_DL_PROGRESS_RES, 







 
    MSG_ID_WAP_MMI_FILE_DL_STOP_REQ, 





 
    MSG_ID_WAP_MMI_FILE_DL_STOP_RSP, 





 
    MSG_ID_WAP_MMI_FILE_DL_CANCEL_PREFETCH_REQ, 





 
    MSG_ID_WAP_MMI_FILE_DL_CANCEL_PREFETCH_RSP, 




 
    MSG_ID_WAP_MMI_FILE_DL_PREFETCH_ABORTED_IND,





 
    MSG_ID_WAP_MMI_FILE_DL_NW_SWITCH_IND, 








 




#line 341 "interface\\wap\\wap_sap.h"
#line 1 "interface\\wap\\mmc_sap.h"
    MSG_ID_WAP_MMC_SEND_APPMMS_REQ,
    MSG_ID_WAP_MMC_SEND_APPMMS_RSP,
    MSG_ID_WAP_MMC_POST_APPMMS_MSG_PART_IND,
    MSG_ID_WAP_MMC_POST_APPMMS_MSG_PART_RES,
    MSG_ID_WAP_MMC_RECV_APPMMS_REQ,
    MSG_ID_WAP_MMC_RECV_APPMMS_RSP,
    MSG_ID_WAP_MMC_READ_APPMMS_MSG_PART_REQ,
    MSG_ID_WAP_MMC_READ_APPMMS_MSG_PART_RSP,
    MSG_ID_WAP_MMC_CFG_APPMMS_APPID_REQ,
    MSG_ID_WAP_MMC_CFG_APPMMS_APPID_RSP,
    MSG_ID_WAP_MMC_ABORT_APPMMS_REQ,
    MSG_ID_WAP_MMC_ABORT_APPMMS_RSP,
    MSG_ID_WAP_MMC_CHECK_APPMMS_COMING_REQ,
    MSG_ID_WAP_MMC_CHECK_APPMMS_COMING_RSP,	
    MSG_ID_WAP_MMC_GET_MMS_PROF_REQ,
    MSG_ID_WAP_MMC_GET_MMS_PROF_RSP,
    MSG_ID_WAP_MMC_APPMMS_NEW_MMS_IND,
    MSG_ID_MMS_GET_ACTIVE_MMS_ATTACHMENT_REQ,
    MSG_ID_MMS_GET_ACTIVE_MMS_ATTACHMENT_RSP,    
#line 342 "interface\\wap\\wap_sap.h"
#line 1 "interface\\wap\\mma_sap.h"










    MSG_ID_WAP_MMA_TERMINATE_IND, 




 
    MSG_ID_WAP_MMA_UM_ENTRY_REQ,  
    MSG_ID_WAP_MMA_GET_SETTING_REQ,




     
    MSG_ID_WAP_MMA_GET_SETTING_RSP, 




 
    MSG_ID_WAP_MMA_SET_SETTING_REQ, 




 
    MSG_ID_WAP_MMA_SET_SETTING_RSP,  
    MSG_ID_WAP_MMA_GET_PROFILE_REQ,  
    MSG_ID_WAP_MMA_GET_PROFILE_RSP,  
    MSG_ID_WAP_MMA_GET_MEM_STATUS_REQ, 




 
    MSG_ID_WAP_MMA_GET_MEM_STATUS_RSP, 




 
    MSG_ID_WAP_MMA_SET_PROFILE_REQ, 




 
    MSG_ID_WAP_MMA_SET_PROFILE_RSP, 




  
    MSG_ID_WAP_MMA_GET_CONTENT_REQ, 






 
    MSG_ID_WAP_MMA_GET_CONTENT_RSP, 





 
    MSG_ID_WAP_MMA_CREATE_REQ, 








 
    MSG_ID_WAP_MMA_CREATE_RSP, 




 
    MSG_ID_WAP_MMA_FREE_MMS_CONTENT,	
 

    MSG_ID_WAP_MMA_DELETE_REQ, 




 
    MSG_ID_WAP_MMA_DELETE_RSP, 




 
    MSG_ID_WAP_MMA_SAVE_REQ, 




 
    MSG_ID_WAP_MMA_SAVE_RSP, 




 
    MSG_ID_WAP_MMA_PREVIEW_REQ,  
    MSG_ID_WAP_MMA_PREVIEW_RSP,  
    MSG_ID_WAP_MMA_SEND_REQ, 




 
    MSG_ID_WAP_MMA_SEND_IND, 




 
    MSG_ID_WAP_MMA_SEND_RES, 




 
    MSG_ID_WAP_MMA_SEND_RSP, 




 
    MSG_ID_WAP_MMA_CANCEL_SEND_REQ, 








 
    MSG_ID_WAP_MMA_CANCEL_SEND_RSP, 




 
    MSG_ID_WAP_MMA_DOWNLOAD_REQ, 




 
    MSG_ID_WAP_MMA_DOWNLOAD_RSP, 




 
    MSG_ID_WAP_MMA_DOWNLOAD_IND, 




 
    MSG_ID_WAP_MMA_DOWNLOAD_RES, 




 
    MSG_ID_WAP_MMA_CANCEL_DOWNLOAD_REQ, 






 
    MSG_ID_WAP_MMA_CANCEL_DOWNLOAD_RSP, 




 
    MSG_ID_WAP_MMA_GET_MSG_INFO_REQ, 




 
    MSG_ID_WAP_MMA_GET_MSG_INFO_RSP, 




 
    MSG_ID_WAP_MMA_SET_READMARK_REQ, 




 
    MSG_ID_WAP_MMA_SET_READMARK_RSP, 




 
    MSG_ID_WAP_MMA_START_IMMED_RETRIEVAL_IND, 




 
    MSG_ID_WAP_MMA_STOP_IMMED_RETRIEVAL_IND, 




 
    MSG_ID_WAP_MMA_SET_APP_DATA_REQ, 







 
    MSG_ID_WAP_MMA_SET_APP_DATA_RSP, 




 
    MSG_ID_WAP_MMA_GET_MSG_LIST_REQ, 




 
    MSG_ID_WAP_MMA_GET_MSG_LIST_RSP, 




 
    MSG_ID_WAP_MMA_STORAGE_FULL_IND, 




 
    MSG_ID_WAP_MMA_VIEW_MSG_IND, 




     
    MSG_ID_WAP_MMA_MSG_IS_VALID_REQ, 



 
    MSG_ID_WAP_MMA_MSG_IS_VALID_RSP, 



 
    MSG_ID_WAP_MMA_NOTIFY_EVENT_IND, 




 
    MSG_ID_WAP_MMA_GET_UNREAD_MSG_LIST_REQ, 





 
    MSG_ID_WAP_MMA_GET_UNREAD_MSG_LIST_RSP, 







 
    MSG_ID_WAP_MMA_GET_RECENT_EVT_LIST_REQ, 





 
    MSG_ID_WAP_MMA_GET_RECENT_EVT_LIST_RSP, 







 
    MSG_ID_WAP_MMA_DELETE_RECENT_EVT_REQ, 




 
    MSG_ID_WAP_MMA_DELETE_RECENT_EVT_RSP, 




 
    MSG_ID_WAP_MMA_SUSPEND_MMS_SERVICE_REQ, 





 
    MSG_ID_WAP_MMA_SUSPEND_MMS_SERVICE_RSP, 




 
    MSG_ID_WAP_MMA_RESUME_MMS_SERVICE_REQ, 




     
    MSG_ID_WAP_MMA_RESUME_MMS_SERVICE_RSP, 




 
    MSG_ID_WAP_MMA_READY_IND, 




 
    MSG_ID_WAP_MMA_MMS_OBJ_IND, 





 
    MSG_ID_WAP_MMA_MMS_OBJ_RES, 



 
    MSG_ID_WAP_MMA_DRM_ENCODE_DONE_IND,  
    MSG_ID_WAP_MMA_GET_MSG_PROPERTY_REQ, 




 
    MSG_ID_WAP_MMA_GET_MSG_PROPERTY_RSP, 




     
	MSG_ID_WAP_MMA_GET_MSG_ATTR_AND_THUMBNAIL_REQ,	 
	MSG_ID_WAP_MMA_GET_MSG_ATTR_AND_THUMBNAIL_RSP,	 

    MSG_ID_WAP_MMA_GET_MSG_NUM_REQ, 




 
    MSG_ID_WAP_MMA_GET_MSG_NUM_RSP, 




 
    MSG_ID_WAP_MMA_SET_SIM_ID_REQ, 




 
    MSG_ID_WAP_MMA_SET_SIM_ID_RSP, 




 
    MSG_ID_WAP_MMA_RR_MARK_REQ, 




 
    MSG_ID_WAP_MMA_RR_MARK_RSP, 




  
   MSG_ID_WAP_MMA_CHG_MSG_STORAGE_REQ,
   MSG_ID_WAP_MMA_CHG_MSG_STORAGE_RSP,
   MSG_ID_WAP_MMA_CHECK_TEMPLATE_REQ,   



 
   MSG_ID_WAP_MMA_CHECK_TEMPLATE_RSP,    



 
   MSG_ID_WAP_MMA_DEF_TMPLT_GEN_DONE_IND,	 
   MSG_ID_WAP_MMA_INSUFFICIENT_MEMORY_IND,



      
#line 343 "interface\\wap\\wap_sap.h"
#line 1 "interface\\wap\\mms_adp_sap.h"








    MSG_ID_MMS_ENTER_USB_MODE_REQ,




 
    MSG_ID_MMS_ENTER_USB_MODE_RSP,




 
    MSG_ID_MMS_EXIT_USB_MODE_REQ,




 
    MSG_ID_MMS_EXIT_USB_MODE_RSP,




 
    MSG_ID_MMS_POWEROFF_REQ,




 
    MSG_ID_MMS_POWEROFF_RSP,




                                                              
    MSG_ID_MMS_TARGET_DATA_IND,










 
    MSG_ID_MMI_MMS_CARD_PLUG_IN_IND,
    MSG_ID_MMI_MMS_CARD_PLUG_IN_RES,

    MSG_ID_MMI_MMS_CARD_PLUG_OUT_IND,
    MSG_ID_MMI_MMS_CARD_PLUG_OUT_RES,

    MSG_ID_MMS_FMT_FILE_MOVE_PROCESSING_IND,    
     
     
    MSG_ID_MMS_MULTI_OBJECT_INSERT_REQ,
    MSG_ID_MMS_MULTI_OBJECT_INSERT_RSP,
    MSG_ID_MMS_MULTI_OBJECT_INSERT_CONTINUE_IND,
    MSG_ID_MMS_MULTI_OBJECT_INSERT_CONTINUE_RES,
    MSG_ID_MMS_SIM_INFO_NOTIFY_IND,
     
    MSG_ID_MMI_MMS_SYNC_DELETE_IND, 




 
    MSG_ID_MMI_MMS_CPY_TO_ARCHIVE_REQ, 



 
    MSG_ID_MMI_MMS_CPY_TO_ARCHIVE_RSP, 



 
     




#line 344 "interface\\wap\\wap_sap.h"
#line 1 "interface\\wap\\bam_sap.h"




#line 11 "interface\\wap\\bam_sap.h"
    MSG_ID_WAP_BAM_READY_IND,                         




 
    MSG_ID_WAP_BAM_CREATE_INSTANCE_REQ,               



 
    MSG_ID_WAP_BAM_CREATE_INSTANCE_CNF,               



 
    MSG_ID_WAP_BAM_DELETE_INSTANCE_REQ,               



 
    MSG_ID_WAP_BAM_DELETE_INSTANCE_CNF,               



 
    MSG_ID_WAP_BAM_RESIZE_WINDOW_REQ,                 




 
    MSG_ID_WAP_BAM_LOAD_URL_REQ,                      



 
    MSG_ID_WAP_BAM_LOAD_DATA_REQ,                     



 
    MSG_ID_WAP_BAM_ACTIVATE_DO_ELEMENT_REQ,           




 
    MSG_ID_WAP_BAM_MOVE_REQ,                          



 
    MSG_ID_WAP_BAM_RELOAD_REQ,                        



 
    MSG_ID_WAP_BAM_STOP_REQ,                          



 
    MSG_ID_WAP_BAM_NAVIGATION_CHANGE_REQ,             





 
    MSG_ID_WAP_BAM_SAVE_PAGE_REQ,                     








 
    MSG_ID_WAP_BAM_SAVE_PAGE_CNF,                     





 
    MSG_ID_WAP_BAM_GET_SAVED_PAGE_REQ,                









 
    MSG_ID_WAP_BAM_LOAD_SAVED_PAGE_REQ,               









 
    MSG_ID_WAP_BAM_DELETE_SAVED_PAGE_REQ,             









 
    MSG_ID_WAP_BAM_DELETE_ALL_SAVED_PAGES_REQ,        





 
    MSG_ID_WAP_BAM_RENAME_SAVED_PAGE_REQ,             









 
    MSG_ID_WAP_BAM_GET_SAVED_PAGES_LIST_START_REQ,    








 
    MSG_ID_WAP_BAM_GET_SAVED_PAGES_LIST_START_CNF,    



 
    MSG_ID_WAP_BAM_GET_SAVED_PAGES_LIST_CONTINUE_REQ, 






 
    MSG_ID_WAP_BAM_GET_SAVED_PAGES_LIST_CONTINUE_CNF, 







 
    MSG_ID_WAP_BAM_GET_SAVED_PAGES_LIST_END_REQ,      




 
    MSG_ID_WAP_BAM_GET_RESOURCES_LIST_START_REQ,      






 
    MSG_ID_WAP_BAM_GET_RESOURCES_LIST_START_CNF,      


 
    MSG_ID_WAP_BAM_GET_RESOURCES_LIST_CONTINUE_REQ,   






 
    MSG_ID_WAP_BAM_GET_RESOURCES_LIST_CONTINUE_CNF,   







 
    MSG_ID_WAP_BAM_GET_RESOURCES_LIST_END_REQ,        




 
    MSG_ID_WAP_BAM_GET_RESOURCE_REQ,                  









 
    MSG_ID_WAP_BAM_GET_RESOURCE_CNF,                  





 
    MSG_ID_WAP_BAM_ACTIVATE_RESOURCE_REQ,             








 
    MSG_ID_WAP_BAM_NAVIGATE_TO_HOTSPOT_REQ,           




 
    MSG_ID_WAP_BAM_STATUS_IND,                        






 
    MSG_ID_WAP_BAM_ERROR_IND,                         



 
    MSG_ID_WAP_BAM_DOCUMENT_INFO_IND,                 



 
    MSG_ID_WAP_BAM_DO_ELEMENTS_IND,                   








 
    MSG_ID_WAP_BAM_ELEMENT_FOCUSED_IND,               







 
    MSG_ID_WAP_BAM_SET_SEC_CLASS_IND,                 




 
    MSG_ID_WAP_BAM_CHANGE_SETTING_VALUE_REQ,          



 
    MSG_ID_WAP_BAM_CHANGE_SETTING_VALUE_IND,          



 
    MSG_ID_WAP_BAM_SET_PROFILE_REQ,                   



 
    MSG_ID_WAP_BAM_SET_PROFILE_CNF,                   



 
    MSG_ID_WAP_BAM_GET_RECENT_PAGES_LIST_START_REQ,   











 
    MSG_ID_WAP_BAM_GET_RECENT_PAGES_LIST_START_CNF,   





 
    MSG_ID_WAP_BAM_GET_RECENT_PAGES_LIST_CONTINUE_REQ,








 
    MSG_ID_WAP_BAM_GET_RECENT_PAGES_LIST_CONTINUE_CNF,





 
    MSG_ID_WAP_BAM_GET_RECENT_PAGES_LIST_END_REQ,     




 
    MSG_ID_WAP_BAM_GET_RECENT_PAGE_REQ,               









 
    MSG_ID_WAP_BAM_LOAD_RECENT_PAGE_REQ,              









 
    MSG_ID_WAP_BAM_DELETE_RECENT_PAGE_REQ,            









 
    MSG_ID_WAP_BAM_DELETE_ALL_RECENT_PAGES_REQ,       





 
    MSG_ID_WAP_BAM_RECENT_PAGE_CNF,                   




 
    MSG_ID_WAP_BAM_WTAI_TEL_IND,                      



 
    MSG_ID_WAP_BAM_WTAI_TEL_RSP,                      



 
    MSG_ID_WAP_BAM_WTAI_PB_IND,                       



 
    MSG_ID_WAP_BAM_WTAI_PB_RSP,                       



 
    MSG_ID_WAP_BAM_URI_REQUEST_IND,                   






 
    MSG_ID_WAP_BAM_URI_REQUEST_RSP,                   



 
    MSG_ID_WAP_BAM_BEARER_INFO_IND,                   



 
    MSG_ID_WAP_BAM_REGISTER_KEYPAD_HANDLER_REQ,       




 
    MSG_ID_WAP_BAM_HANDLE_PEN_EVENT_REQ,              




 
    MSG_ID_WAP_BAM_SUSPEND_OWL_RENDERING_REQ,         




 
    MSG_ID_WAP_BAM_RESUME_OWL_RENDERING_REQ,          




 
    MSG_ID_WAP_BAM_NOTIFY_SCREEN_INFO_REQ,            




 
    MSG_ID_WAP_BAM_WAIT_USER_ACTION_IND,              





 
    MSG_ID_WAP_BAM_WAIT_USER_ACTION_RSP,              




 
    MSG_ID_WAP_BAM_OBJECT_ACTION_REQ,                 



 
    MSG_ID_WAP_BAM_SHOW_AUTH_DIALOG_IND,              



 
    MSG_ID_WAP_BAM_SHOW_AUTH_DIALOG_RSP,              



 
    MSG_ID_WAP_BAM_SELECT_FILE_IND,                   



 
    MSG_ID_WAP_BAM_SELECT_FILE_RSP,                   



 
    MSG_ID_WAP_BAM_NOTIFY_APP_IND,                    



 
    MSG_ID_WAP_BAM_DELETE_N_SAVED_PAGE_REQ,             









 
    MSG_ID_WAP_BAM_DELETE_N_RECENT_PAGE_REQ,            









 

    MSG_ID_WAP_BAM_WMLS_CREATE_DIALOGUE_REQ,             



 

    MSG_ID_WAP_BAM_WMLS_CREATE_DIALOGUE_RSP,             



 


   MSG_ID_WAP_BAM_CONN_CLOSED_BY_NET_ACC_ID_REQ,          



 

   MSG_ID_WAP_BAM_CONN_CLOSED_BY_NET_ACC_ID_RSP,          



 

   MSG_ID_WAP_BAM_BEARER_OPEN_IND,                        



 
   
   MSG_ID_WAP_BAM_BEARER_OPEN_RSP,                        



 






#line 345 "interface\\wap\\wap_sap.h"
#line 1 "interface\\wap\\pmg_sap.h"




    MSG_ID_WPS_PMG_READY_IND,    
    MSG_ID_WPS_PMG_CONFIG_REQ,  



 
    MSG_ID_WPS_PMG_CONFIG_CNF,  


 
    MSG_ID_WPS_PMG_TRUST_ADDR_LIST_REQ,  












 
    MSG_ID_WPS_PMG_TRUST_ADDR_LIST_CNF,  


 
    MSG_ID_WPS_PMG_BLACK_ADDR_LIST_REQ,  










 
    MSG_ID_WPS_PMG_BLACK_ADDR_LIST_CNF,  



 
    MSG_ID_WPS_PMG_NEW_MSG_IND,  















 
    MSG_ID_WPS_PMG_NEW_MSG_RSP,  


 
    MSG_ID_WPS_PMG_DELETE_IND,  




 
    MSG_ID_WPS_PMG_REPLACE_IND,  











 
    MSG_ID_WPS_PMG_MSG_COUNT_REQ,  










 
    MSG_ID_WPS_PMG_MSG_COUNT_CNF,  



 
    MSG_ID_WPS_PMG_MSG_LIST_REQ,  













 
    MSG_ID_WPS_PMG_MSG_LIST_CNF,  












 
    MSG_ID_WPS_PMG_GET_MSG_REQ,  


 
    MSG_ID_WPS_PMG_GET_MSG_CNF,  












 
    MSG_ID_WPS_PMG_GET_MSG_INFOTAG_REQ,  








 
    MSG_ID_WPS_PMG_GET_MSG_INFOTAG_CNF,  









 
    MSG_ID_WPS_PMG_DELETE_MSG_REQ,  


 
    MSG_ID_WPS_PMG_DELETE_MSG_CNF,   
    MSG_ID_WPS_PMG_DELETE_ALL_REQ,  






 
    MSG_ID_WPS_PMG_DELETE_ALL_CNF,   
    MSG_ID_WPS_PMG_UPDATE_MSG_REQ,  


 
   MSG_ID_WPS_PMG_TURN_ON_OFF_PUSH_REQ, 

    MSG_ID_WPS_PMG_UPDATE_MSG_CNF,  




 
    MSG_ID_WPS_PMG_UPDATE_ALL_MSG_REQ,  


 
    MSG_ID_WPS_PMG_UPDATE_ALL_MSG_CNF,
						

 

    MSG_ID_WPS_PMG_DLG_SIA_CONFIRM_REQ,  






 
    MSG_ID_WPS_PMG_DLG_SIA_CONFIRM_CNF,  




 
    MSG_ID_WPS_PMG_DLG_UNKNOWN_ADDR_REQ,  









 
    MSG_ID_WPS_PMG_DLG_UNKNOWN_ADDR_CNF,  




 
    MSG_ID_WPS_PMG_DLG_PUSH_STORAGE_FULL_IND,  


 
    MSG_ID_WPS_PMG_DELETE_FOLDER_IND,  


 
    MSG_ID_WPS_PMG_DLG_QUERY_REQ,  


 
    MSG_ID_WPS_PMG_DLG_QUERY_CNF,  




 
    MSG_ID_WPS_PMG_ERROR_DLG_IND,
     
    MSG_ID_WPS_PMG_MSG_READ_STATUS_REQ,


#line 346 "interface\\wap\\wap_sap.h"
#line 1 "interface\\wap\\mms_sap.h"



	MSG_ID_MMI_MMS_VENDOR_CREATE_REQ,
	MSG_ID_MMI_MMS_VENDOR_CREATE_RSP,
	MSG_ID_MMI_MMS_VENDOR_SEND_REQ,
	MSG_ID_MMI_MMS_VENDOR_SEND_RSP,
    MSG_ID_MMI_MMS_VENDOR_CANCEL_SEND_REQ,
	MSG_ID_MMI_MMS_VENDOR_DELETE_REQ,
	MSG_ID_MMI_MMS_VENDOR_DELETE_RSP,    
    MSG_ID_MMI_MMS_GET_ASM_MEM_PTR_REQ,
	MSG_ID_MMI_MMS_GET_ASM_MEM_PTR_RSP,
	MSG_ID_MMI_MMS_FREE_ASM_MEM_PTR_REQ,
	MSG_ID_MMI_MMS_FREE_ASM_MEM_PTR_RSP,
	MSG_ID_MMI_MMS_GET_DEINIT_SERVICE_ASM_REQ,
	MSG_ID_MMI_MMS_GET_DEINIT_SERVICE_ASM_RSP,

#line 347 "interface\\wap\\wap_sap.h"
#line 1 "interface\\wap\\q03c_mms_v01_adp_sap.h"

 
    MSG_ID_WAP_MMA_UC_START_REQ,
    MSG_ID_WAP_MMA_UC_START_RSP,

    MSG_ID_MMS_BGSR_SEND_REQ,
    MSG_ID_MMS_BGSR_SEND_RSP,

    MSG_ID_MMS_BGSR_DOWNLOAD_REQ,
    MSG_ID_MMS_BGSR_DOWNLOAD_RSP,

    MSG_ID_MMS_BGSR_NO_PROGRESSING_DOWNLOAD_REQ,

    MSG_ID_MMS_BGSR_CANCEL_SEND_REQ,
    MSG_ID_MMS_BGSR_CANCEL_SEND_RSP,

    MSG_ID_MMS_BGSR_CANCEL_DOWNLOAD_REQ,
    MSG_ID_MMS_BGSR_CANCEL_DOWNLOAD_RSP,
    
    MSG_ID_MMS_BGSR_NAV_ACTIVATE_BGSR_REQ,
    MSG_ID_MMS_BGSR_NAV_ACTIVATE_BGSR_RSP,

    MSG_ID_MMS_BGSR_CHANGE_MSG_REQ,

    MSG_ID_MMS_BGSR_DELETE_MSG_RSP,

    MSG_ID_MMS_BGSR_DELETE_ALL_INBOX_RSP,

    MSG_ID_MMS_BGSR_CANCEL_ALL_INBOX_RSP,

    MSG_ID_MMS_BGSR_DELETE_ALL_OUTBOX_RSP,
    
    MSG_ID_MMS_BGSR_MOVE_TO_FOLDER_RSP,

    MSG_ID_MMS_BGSR_CHANGE_MSG_BGSR_NOTIFY_IND,

    MSG_ID_MMS_BGSR_GET_MSG_INFO_REQ,

    MSG_ID_MMS_BGSR_UPDATE_FOLDER_IND,
    MSG_ID_MMS_BGSR_UPDATE_MENU_IND,
    MSG_ID_MEA_STARTUP_REQ,
    MSG_ID_MEA_SHUTDOWN_REQ,
    MSG_ID_MMS_LAUNCH_BROWSER_REQ,

    MSG_ID_MEA_STARTUP_NEW_MMS_REQ,
    MSG_ID_MEA_UM_ENTRY_REQ,
    MSG_ID_MEA_PHB_ADDR_INPUT_IND,
    MSG_ID_MEA_INSERT_TEXT_REQ,
    MSG_ID_MMS_NMGR_INFO_REQ,
    MSG_ID_MMS_NMGR_INFO_RSP,
	MSG_ID_MMS_OBJ_IND,
	MSG_ID_MMS_OBJ_RES,
    MSG_ID_MEA_TERMINATE_IND,
    MSG_ID_MEA_SET_PROFILE_REQ,
    MSG_ID_MEA_SET_PROFILE_RSP,
    MSG_ID_MEA_ADD_BOOKMARK_REQ,
    MSG_ID_MEA_ADD_BOOKMARK_RSP,
    MSG_ID_MMS_READY_IND,
    MSG_ID_MMS_TERMINATE_IND,

    MSG_ID_MEA_SET_SETTING_REQ,
    MSG_ID_MEA_SET_SETTING_RSP,
    MSG_ID_MEA_GET_SETTING_REQ,
    MSG_ID_MEA_GET_SETTING_RSP,
#line 348 "interface\\wap\\wap_sap.h"
       
    
    MSG_ID_WAP_CODE_END,

    
#line 952 "config\\include\\app\\user_msgid_app.h"

    MSG_ID_WAP_CODE_CHECK_POINT,



 

 
#line 1 "j2me\\interface\\j2me_sap.h"

































 




























































































































































































































































































 
    

  
     
    MSG_ID_MMI_JAVA_MIDS_GETLIST_REQ = MSG_ID_J2ME_CODE_BEGIN, 
    MSG_ID_MMI_JAVA_MIDS_GETLIST_CNF,
     
    MSG_ID_MMI_JAVA_MID_GETLIST_REQ, 
    MSG_ID_MMI_JAVA_MID_GETLIST_CNF,
     
    MSG_ID_MMI_JAVA_MIDS_GETINFO_REQ,
    MSG_ID_MMI_JAVA_MIDS_GETINFO_CNF,
     
    MSG_ID_MMI_JAVA_MIDS_GET_SETTING_REQ,
    MSG_ID_MMI_JAVA_MIDS_GET_SETTING_CNF, 
     
    MSG_ID_MMI_JAVA_PUSH_GET_SETTING_REQ, 
    MSG_ID_MMI_JAVA_PUSH_GET_SETTING_CNF, 
     
    MSG_ID_MMI_JAVA_MIDS_SET_SETTING_REQ,
    MSG_ID_MMI_JAVA_MIDS_SET_SETTING_CNF,
     
    MSG_ID_MMI_JAVA_MIDS_UPDATE_REQ,
    MSG_ID_MMI_JAVA_MIDS_UPDATE_CNF,
     
    MSG_ID_MMI_JAVA_MIDS_REMOVE_REQ, 
    MSG_ID_MMI_JAVA_MIDS_REMOVE_CONFIRM_IND, 
    MSG_ID_MMI_JAVA_MIDS_REMOVE_CONFIRM_RES,
    MSG_ID_MMI_JAVA_MIDS_REMOVE_CNF,
     
    MSG_ID_MMI_JAVA_MIDS_PACKAGE_REQ,
    MSG_ID_MMI_JAVA_MIDS_PACKAGE_CNF,
     
    MSG_ID_MMI_JAVA_RESTORE_FACTORY_MODE_REQ,
    MSG_ID_MMI_JAVA_RESTORE_FACTORY_MODE_CNF,
     
    MSG_ID_MMI_JAVA_RESET_DOMAIN_SETTING_REQ,
    MSG_ID_MMI_JAVA_RESET_DOMAIN_SETTING_CNF,   
    MSG_ID_MMI_JAVA_SET_DOMAIN_STATUS_REQ,
    MSG_ID_MMI_JAVA_SET_DOMAIN_STATUS_CNF,    
    MSG_ID_MMI_JAVA_GET_DOMAIN_STATUS_REQ,
    MSG_ID_MMI_JAVA_GET_DOMAIN_STATUS_CNF,
     
    MSG_ID_MMI_JAVA_GET_DOMAIN_LIST_REQ,
    MSG_ID_MMI_JAVA_GET_DOMAIN_LIST_CNF,
    MSG_ID_MMI_JAVA_GET_DEFAULT_DOMAIN_REQ, 
    MSG_ID_MMI_JAVA_GET_DEFAULT_DOMAIN_CNF,
    MSG_ID_MMI_JAVA_SET_DEFAULT_DOMAIN_REQ,
    MSG_ID_MMI_JAVA_SET_DEFAULT_DOMAIN_CNF,
    MSG_ID_MMI_JAVA_RESET_DEFAULT_DOMAIN_REQ,
    MSG_ID_MMI_JAVA_RESET_DEFAULT_DOMAIN_CNF,
     
    MSG_ID_MMI_JAVA_SET_MODE_REQ, 
    MSG_ID_MMI_JAVA_SET_MODE_CNF,
    MSG_ID_MMI_JAVA_TCK_RESULT_IND,
     
    MSG_ID_MMI_JAVA_MIDS_GET_HOME_SCREEN_ITEM_REQ,    
    MSG_ID_MMI_JAVA_NOTIFY_POST_START_REQ,
    MSG_ID_MMI_JAVA_NOTIFY_POST_END_REQ,    
    MSG_ID_MMI_JAVA_MIDS_GET_MIDS_ID_BY_STORAGE_REQ,  
    MSG_ID_MMI_JAVA_MIDS_GET_MIDS_ID_BY_STORAGE_CNF,
     
    MSG_ID_TST_MMI_JAVA_CMD_REQ,
    MSG_ID_MMI_L4C_JAVA_CMD_RSP,
    MSG_ID_MMI_JAVA_CMD_QUERY_REQ,
    MSG_ID_JAVA_MMI_CMD_QUERY_RSP,
    MSG_ID_MMI_L4C_OTA_STATUS_IND,
     
    MSG_ID_MMI_JAVA_MID_START_REQ, 
    MSG_ID_MMI_JAVA_MID_START_CNF, 
    MSG_ID_MMI_JAVA_MID_STOP_IND,
    MSG_ID_MMI_JAVA_MID_STOP_RES,
     
    MSG_ID_MMI_JAVA_GET_PERMISSION_IND, 
   	MSG_ID_MMI_JAVA_GET_PERMISSION_CNF,
   	 
	MSG_ID_MMI_JAVA_PLUG_IN_OUT_TCARD_IND,
     
    MSG_ID_MMI_JAVA_PAUSE_IND,
    MSG_ID_MMI_JAVA_RESUME_IND,
    MSG_ID_MMI_JAVA_TERMINATE_IND,
    MSG_ID_MMI_JAVA_TERMINATING_IND,
    MSG_ID_MMI_JAVA_TERMINATE_NOTIFY_IND,
    MSG_ID_MMI_JAVA_SHUTDOWN_ALL_IND,
     
    MSG_ID_JAM_JVM_MID_START_REQ,
    MSG_ID_JAM_JVM_MID_START_CNF,
    MSG_ID_JAM_JVM_MID_STOP_REQ,
    MSG_ID_JAM_JVM_MID_STOP_CNF,
    MSG_ID_JAM_JVM_SHUTDOWN_ALL_IND,
    MSG_ID_JAM_JVM_TCK_START_REQ,
    MSG_ID_JAM_JVM_TCK_START_CNF,
    MSG_ID_JAM_JVM_TCK_STOP_REQ,
    MSG_ID_JAM_JVM_TCK_STOP_CNF,
    MSG_ID_JAM_JVM_GENERAL_ASSIST_REQ,
    MSG_ID_JAM_JVM_GENERAL_ASSIST_CNF,
    

 
     
    MSG_ID_MMI_JAVA_MIDS_PRE_INSTALL_IND,
    MSG_ID_MMI_JAVA_MIDS_PRE_INSTALL_RES,
    MSG_ID_MMI_JAVA_MIDS_REMOVE_IND,
    MSG_ID_MMI_JAVA_MIDS_REMOVE_RES,
     
    MSG_ID_MMI_JAVA_PUSH_INSTALL_IND,
     
    MSG_ID_MMI_JAVA_INSTALL_MIDS_REQ,  
     
    MSG_ID_MMI_JAVA_INSTALL_PROGRESS_IND,
     
    MSG_ID_MMI_JAVA_INSTALL_CONFIRM_IND,
    MSG_ID_MMI_JAVA_INSTALL_CONFIRM_RES,  
      
    MSG_ID_MMI_JAVA_GET_INSTALL_DRV_IND,
    MSG_ID_MMI_JAVA_GET_INSTALL_DRV_RES,
     
    MSG_ID_MMI_JAVA_GET_INSTALL_CATEGORY_IND,
    MSG_ID_MMI_JAVA_GET_INSTALL_CATEGORY_RES,
     
    MSG_ID_MMI_JAVA_GET_FILE_AND_SAVE_IND,
    MSG_ID_MMI_JAVA_GET_FILE_AND_SAVE_RES,
     
    MSG_ID_MMI_JAVA_GET_AUTH_IND,
    MSG_ID_MMI_JAVA_GET_AUTH_RES,
     
    MSG_ID_MMI_JAVA_SHOW_PERCENTAGE_IND,
     
    MSG_ID_MMI_JAVA_INSTALL_RESET_RMS_IND,
    MSG_ID_MMI_JAVA_INSTALL_RESET_RMS_RES, 
     
    MSG_ID_MMI_JAVA_WAITING_RIGHT_START_REQ,
    MSG_ID_MMI_JAVA_WAITING_RIGHT_END_REQ,
     
    MSG_ID_MMI_JAVA_INSTALL_MIDS_CNF,
     
    MSG_ID_MMI_JAVA_DELETE_MENU_ABORT_REQ,
    MSG_ID_MMI_JAVA_DELETE_MENU_ABORT_CNF,
     
    MSG_ID_JAVA_WAP_GET_FILE_AND_SAVE_REQ,
    MSG_ID_JAVA_WAP_GET_FILE_AND_SAVE_CNF, 
   

 
     
    MSG_ID_JAVA_WAP_POST_DATA_REQ, 
    MSG_ID_JAVA_WAP_POST_DATA_CNF,
    MSG_ID_JAVA_WAP_DATA_ACCOUNT_IND, 
     
    MSG_ID_MMI_JAVA_ABORT_REQ, 
    MSG_ID_MMI_JAVA_ABORT_CNF, 
    MSG_ID_JAVA_WAP_ABORT_CNF, 
    MSG_ID_MMI_WAP_ABORT_REQ,
    MSG_ID_MMI_JAVA_ASM_ABORT_REQ,    
     
    MSG_ID_MMI_JAVA_GET_CONFIRM_IND,
    MSG_ID_MMI_JAVA_GET_CONFIRM_RES,
     
    MSG_ID_MMI_JAVA_GET_IMSI_IND,    
    MSG_ID_MMI_JAVA_GET_IMSI_RES,    
    MSG_ID_MMI_JAVA_GET_LAI_RES,
     
    MSG_ID_MMI_JAVA_TIMEALARM_PUSH_IND, 
    MSG_ID_JAVA_JAVA_MID_START_REQ,
    MSG_ID_RESEND_TIMEALARM_PUSH_REQ,
    MSG_ID_MMI_JAVA_TIMEALARM_PUSH_RES,
     
    MSG_ID_JAVA_MMA_EVENT_CALLBACK, 
     
    MSG_ID_JAVA_KEYPAD_NOTIFY_IND,
     
    MSG_ID_MMI_PHB_JAVA_SET_ENTRY_REQ,
    MSG_ID_MMI_PHB_JAVA_SET_ENTRY_RSP,
    MSG_ID_MMI_PHB_JAVA_GET_ENTRY_REQ,
    MSG_ID_MMI_PHB_JAVA_GET_ENTRY_RSP, 
    MSG_ID_MMI_PHB_JAVA_SEARCH_ENTRY_REQ, 
    MSG_ID_MMI_PHB_JAVA_SEARCH_ENTRY_RSP,
    MSG_ID_MMI_PHB_JAVA_GET_GROUP_INFO_REQ,
    MSG_ID_MMI_PHB_JAVA_GET_GROUP_INFO_RSP,
    MSG_ID_MMI_PHB_JAVA_SET_GROUP_INFO_REQ,
    MSG_ID_MMI_PHB_JAVA_SET_GROUP_INFO_RSP,
    MSG_ID_MMI_EVTDB_JAVA_SET_ENTRY_REQ,
    MSG_ID_MMI_EVTDB_JAVA_SET_ENTRY_RSP,
    MSG_ID_MMI_EVTDB_JAVA_GET_ENTRY_REQ,
    MSG_ID_MMI_EVTDB_JAVA_GET_ENTRY_RSP,
     
    MSG_ID_JAVA_JAVA_ENQUEUE_SMS_REQ,
     
    MSG_ID_MMI_JAVA_MIDS_GET_NETWORK_PROFILE_REQ,   
    MSG_ID_MMI_JAVA_MIDS_PUT_NETWORK_PROFILE_REQ,
    MSG_ID_MMI_JAVA_MIDS_GET_NETWORK_PROFILE_CNF,   
    MSG_ID_MMI_JAVA_MIDS_PUT_NETWORK_PROFILE_CNF,
    MSG_ID_MMI_JAVA_MIDS_HS_NP_DELETE_NOTIFY_CNF,    
    MSG_ID_MMI_JAVA_CONNECT_BT_VIA_SCO_REQ,  
	 
    MSG_ID_MMI_JAVA_SET_AGPS_REQ,
    MSG_ID_MMI_JAVA_SET_AGPS_RSP,
    

 
    MSG_ID_MMI_JAVA_NW_GET_GLOBAL_SETTING_REQ,
    MSG_ID_MMI_JAVA_NW_GET_GLOBAL_SETTING_RSP,
    MSG_ID_MMI_JAVA_NW_SET_GLOBAL_SETTING_REQ,
    MSG_ID_MMI_JAVA_NW_SET_GLOBAL_SETTING_RSP,
        
    MSG_ID_MMI_JAVA_NW_GET_LOCAL_SETTING_REQ,
    MSG_ID_MMI_JAVA_NW_GET_LOCAL_SETTING_RSP,    
    MSG_ID_MMI_JAVA_NW_SET_LOCAL_SETTING_REQ,
    MSG_ID_MMI_JAVA_NW_SET_LOCAL_SETTING_RSP,                    
    
    MSG_ID_MMI_JAVA_NW_GET_PROFILE_REQ,    
    MSG_ID_MMI_JAVA_NW_GET_PROFILE_RSP,    
    MSG_ID_MMI_JAVA_NW_SET_PROFILE_REQ,    
    MSG_ID_MMI_JAVA_NW_SET_PROFILE_RSP,          
    
    MSG_ID_MMI_JAVA_NW_ALWAYS_ASK_IND,
    MSG_ID_MMI_JAVA_NW_ALWAYS_ASK_CNF,        
    MSG_ID_MMI_JAVA_NW_BEARER_FALLBACK_IND,
    MSG_ID_MMI_JAVA_NW_BEARER_FALLBACK_CNF,
    
    MSG_ID_MMI_JAVA_NW_UPDATE_DTCNT_IND,
    MSG_ID_MMI_JAVA_NW_UPDATE_DTCNT_CNF,
    MSG_ID_MMI_JAVA_NW_DELETE_DTCNT_IND,
    MSG_ID_MMI_JAVA_NW_DELETE_DTCNT_CNF,
    MSG_ID_MMI_JAVA_NW_UPDATE_SETTING_REQ,    
    MSG_ID_MMI_JAVA_NW_UPDATE_SETTING_RSP,       
    MSG_ID_MMI_JAVA_NW_UPDATE_PROFILE_RSP,
    MSG_ID_MMI_JAVA_NW_UPDATE_CONN_TYPE_REQ,    
    MSG_ID_MMI_JAVA_NW_UPDATE_CONN_TYPE_RSP,       
    
    MSG_ID_MMI_JAVA_PR_MAKE_CALL_REQ,  
    
    MSG_ID_MMI_JAVA_MIDS_GETLIST_DETECT_REQ,
    MSG_ID_MMI_JAVA_MIDS_GETLIST_DETECT_RSP,

    MSG_ID_MMI_JAVA_GET_RUNNING_MIDS_LIST_REQ,
    MSG_ID_MMI_JAVA_GET_RUNNING_MIDS_LIST_CNF,

    MSG_ID_MMI_JAVA_CHECK_PUSH_MIDS_RUNNING_REQ,
    MSG_ID_MMI_JAVA_CHECK_PUSH_MIDS_RUNNING_RSP,

    MSG_ID_MMI_JAVA_NW_INSTALL_IND,
    MSG_ID_MMI_JAVA_NW_INSTALL_CNF,

    MSG_ID_MMI_JAVA_NW_USABLE_REQ,

    MSG_ID_MMI_JAVA_SET_AUDIO_VOLUME_REQ,
    
    MSG_ID_MMI_JAVA_GET_APPMGR_INFO_REQ,
 
    MSG_ID_MMI_EM_JAVA_PERFORMANCE_TEST_REQ,
    MSG_ID_MMI_EM_JAVA_PERFORMANCE_TEST_IND,
    MSG_ID_MMI_EM_JAVA_PERFORMANCE_TEST_FAILED,
 
#line 963 "config\\include\\app\\user_msgid_app.h"

    MSG_ID_J2ME_CODE_CHECK_POINT,



 

 
#line 1 "interface\\misc_ps\\udx_sap.h"

































 
















































 

 
    MSG_ID_MMI_UDX_BUILD_HEADER_REQ = MSG_ID_UDX_CODE_BEGIN,
    MSG_ID_MMI_UDX_BUILD_HEADER_RSP,
    MSG_ID_MMI_UDX_BUILD_DATA_REQ,
    MSG_ID_MMI_UDX_BUILD_DATA_RSP,
    MSG_ID_MMI_UDX_BUILD_END_REQ,
    MSG_ID_MMI_UDX_BUILD_END_RSP,
    MSG_ID_MMI_UDX_BUILD_ABORT_REQ,
    MSG_ID_MMI_UDX_BUILD_ABORT_RSP,
    MSG_ID_MMI_UDX_PARSE_HEADER_REQ,
    MSG_ID_MMI_UDX_PARSE_HEADER_RSP,
    MSG_ID_MMI_UDX_PARSE_BODY_REQ,
    MSG_ID_MMI_UDX_PARSE_BODY_RSP,
    MSG_ID_MMI_UDX_PARSE_DATA_REQ,
    MSG_ID_MMI_UDX_PARSE_DATA_RSP,
    MSG_ID_MMI_UDX_PARSE_FINISH_IND,
    MSG_ID_MMI_UDX_PARSE_ABORT_REQ,
    MSG_ID_MMI_UDX_PARSE_ABORT_RSP,
    MSG_ID_MMI_UDX_BUILD_VCARD_REQ,
    MSG_ID_MMI_UDX_BUILD_VCARD_RSP,
    MSG_ID_MMI_UDX_PARSE_VCARD_REQ,
    MSG_ID_MMI_UDX_PARSE_VCARD_RSP,
    MSG_ID_MMI_UDX_READ_VCARD_REQ,
    MSG_ID_MMI_UDX_READ_VCARD_RSP,
 
#line 973 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_UDX_CODE_CHECK_POINT,




 

 




    MSG_ID_CERTMAN_CODE_CHECK_POINT,






 

  




    MSG_ID_MMI_CERTMAN_CODE_CHECK_POINT,






 

 




    MSG_ID_TLS_CODE_CHECK_POINT,




 

 





    MSG_ID_WISE_MSG_CODE_CHECK_POINT,




 

 





    MSG_ID_WISE_IPT_MSG_CODE_CHECK_POINT,




 

 




    MSG_ID_KMP_CODE_CHECK_POINT,




 

 




    MSG_ID_WIDGET_MSG_CODE_CHECK_POINT,



 

 





    MSG_ID_OPERA_BROWSER_MSG_CODE_CHECK_POINT,



 

 




    MSG_ID_NMC_CODE_CHECK_POINT,



 

 


#line 1 "interface\\media\\med_sap.h"

































 
 







 

 















































































































































































































































































































































































































































































































































































































































































































































































































































 

    
    MSG_ID_MEDIA_GET_BUFFER_REQ = MSG_ID_MED_CODE_BEGIN,
    MSG_ID_MEDIA_FREE_BUFFER_REQ,
    MSG_ID_MEDIA_TEMP_1,
    MSG_ID_MEDIA_TEMP_2,
    MSG_ID_L4AUD_GET_AUDIO_MODE_REQ,
    MSG_ID_MED_AUD_CODE_BEGIN = MSG_ID_L4AUD_GET_AUDIO_MODE_REQ,
    MSG_ID_L4AUD_GET_AUDIO_MODE_CNF,
    MSG_ID_L4AUD_AUDIO_STATE_CHANGE_IND,
    MSG_ID_L4AUD_BATTERY_VOLTAGE_IND,
    MSG_ID_L4AUD_BATTERY_STATE_IND,
	MSG_ID_L4AUD_CLASSK_STATE_IND,
	MSG_ID_L4AUD_VIB_SPK_CALIBRATION_IND,
    MSG_ID_L4AUD_AUDIO_GET_MAX_VOLUME_LEVEL_IN_SYNC_REQ,
    MSG_ID_L4AUD_AUDIO_GET_MAX_VOLUME_LEVEL_REQ,
    MSG_ID_L4AUD_AUDIO_GET_MAX_VOLUME_LEVEL_CNF,
    MSG_ID_L4AUD_AUDIO_GET_VOLUME_IN_SYNC_REQ,
    MSG_ID_L4AUD_AUDIO_GET_INTENSITY_REQ,
    MSG_ID_L4AUD_AUDIO_GET_INTENSITY_LIMIT_REQ,
    MSG_ID_L4AUD_AUDIO_GET_GAIN_REQ,
    MSG_ID_L4AUD_AUDIO_GET_GAIN_CNF,
    MSG_ID_L4AUD_AUDIO_SET_MAX_VOLUME_LEVEL_REQ,
    MSG_ID_L4AUD_AUDIO_SET_MAX_VOLUME_LEVEL_CNF,
    MSG_ID_L4AUD_AUDIO_UPDATE_VOLUME_REQ,
    MSG_ID_L4AUD_AUDIO_SET_GAIN_REQ,
    MSG_ID_L4AUD_AUDIO_SET_GAIN_CNF,
    MSG_ID_L4AUD_AUDIO_PLAY_TONE_SEQ_REQ,
    MSG_ID_L4AUD_AUDIO_PLAY_TONE_SEQ_CNF,
    MSG_ID_L4AUD_AUDIO_STOP_TONE_SEQ_REQ,
    MSG_ID_L4AUD_AUDIO_STOP_TONE_SEQ_CNF,
    MSG_ID_L4AUD_AUDIO_SET_FIR_REQ,
    MSG_ID_L4AUD_AUDIO_SET_FIR_CNF,
    MSG_ID_L4AUD_TRIM_EVENT_CALLBACK_IND,
    MSG_ID_L4AUD_TRIM_RESULT_IND,
    MSG_ID_L4AUD_TRIM_OPEN_REQ,
    MSG_ID_L4AUD_TRIM_CLOSE_REQ,
    MSG_ID_L4AUD_TRIM_START_REQ,
    MSG_ID_L4AUD_TRIM_STOP_REQ,
    MSG_ID_L4AUD_TRIM_SET_PARAM_REQ,
    MSG_ID_L4AUD_TRIM_GET_PARAM_REQ,
    MSG_ID_L4AUD_SP_SET_INPUT_MODE_REQ,
    MSG_ID_L4AUD_SP_SET_INPUT_MODE_CNF,
    MSG_ID_L4AUD_MIC_SET_DUAL_NR_REQ,
    MSG_ID_L4AUD_MEDIA_RECORD_REQ,
    MSG_ID_L4AUD_MEDIA_RECORD_CNF,
    MSG_ID_L4AUD_MEDIA_PAUSE_REQ,
    MSG_ID_L4AUD_MEDIA_PAUSE_CNF,
    MSG_ID_L4AUD_MEDIA_RESUME_REQ,
    MSG_ID_L4AUD_MEDIA_RESUME_CNF,
    MSG_ID_AUD_MEDIA_READ_DATA_IND,
    MSG_ID_AUD_MEDIA_WRITE_DATA_IND,
    MSG_ID_L4AUD_MEDIA_RECORD_FINISH_IND,
    MSG_ID_L4AUD_MEDIA_UPDATE_DUR_IND,
    MSG_ID_AUD_MEDIA_PLAY_EVENT_IND,
    MSG_ID_AUD_MEDIA_PLAY_STREAM_EVENT_IND,
    MSG_ID_L4AUD_MEDIA_STORE_REQ,
    MSG_ID_L4AUD_MEDIA_RESTORE_REQ,
    MSG_ID_MEDIA_AUD_SET_MUTE_REQ,
    MSG_ID_MEDIA_AUD_MPLAY_REQ,
    MSG_ID_MEDIA_AUD_MSTOP_REQ,
    MSG_ID_MEDIA_AUD_START_CALC_SPECTRUM_REQ,
    MSG_ID_MEDIA_AUD_STOP_CALC_SPECTRUM_REQ,
    MSG_ID_MEDIA_AUD_GET_SPECTRUM_REQ,
    MSG_ID_MEDIA_AUD_VIB_SPK_CALIBRATION_REQ,
    MSG_ID_MEDIA_AUD_SET_VIBRATOR_ENABLED_REQ,
    MSG_ID_MEDIA_AUD_GET_DURATION_REQ,
    MSG_ID_MEDIA_AUD_GET_PROGRESS_TIME_REQ,
    MSG_ID_MEDIA_AUD_SET_PROGRESS_TIME_REQ,
    MSG_ID_MEDIA_AUD_CHECK_IS_FILE_SEEKABLE_REQ,
    MSG_ID_MEDIA_AUD_CHECK_IS_FILE_PAUSABLE_REQ,
    MSG_ID_MEDIA_AUD_CHECK_IS_PURE_AUDIO_REQ,
    MSG_ID_MEDIA_AUD_CHECK_IS_RESOURCE_AVAILABLE_REQ,
    MSG_ID_MED_AUD_CODE_END = MSG_ID_MEDIA_AUD_CHECK_IS_RESOURCE_AVAILABLE_REQ,
    MSG_ID_MEDIA_CAM_POWER_UP_REQ,
    MSG_ID_MED_CAM_CODE_BEGIN = MSG_ID_MEDIA_CAM_POWER_UP_REQ,
    MSG_ID_MEDIA_CAM_POWER_DOWN_REQ,
    MSG_ID_MEDIA_CAM_NVRAM_END_CNF,
    MSG_ID_MEDIA_CAM_READY_IND,
    MSG_ID_MEDIA_CAM_PREVIEW_REQ,
    MSG_ID_MEDIA_CAM_STOP_PREVIEW_REQ,
    MSG_ID_MEDIA_CAM_PREVIEW_FAIL_IND,
    MSG_ID_MEDIA_CAM_STOP_REQ,
    MSG_ID_MEDIA_CAM_CAPTURE_REQ,
    MSG_ID_MEDIA_CAM_ENCODE_IMG_REQ,
    MSG_ID_MEDIA_CAM_SET_PARAM_REQ,
    MSG_ID_MEDIA_CAM_SET_FLASH_REQ,
    MSG_ID_MEDIA_CAM_SET_CAP_RESOLUTION_REQ,
    MSG_ID_MEDIA_CAM_START_FAST_ZOOM_REQ,
    MSG_ID_MEDIA_CAM_STOP_FAST_ZOOM_REQ,
    MSG_ID_MEDIA_CAM_GET_ZOOM_STEP_FACTOR_REQ,
    MSG_ID_MEDIA_CAM_GET_FOCUS_STEPS_REQ,
    MSG_ID_MEDIA_CAM_GET_FOCUS_ZONE_REQ,
    MSG_ID_MEDIA_CAM_GET_FD_RESULT_REQ,
    MSG_ID_MEDIA_CAM_CAPTURE_EVENT_IND,
    MSG_ID_MEDIA_CAM_AF_PROCESS_DONE_IND,
    MSG_ID_MEDIA_CAM_EVENT_IND,
    MSG_ID_MEDIA_CAM_SAVE_REQ,
    MSG_ID_MEDIA_CAM_XENON_FLASH_STATUS_IND,
    MSG_ID_MEDIA_CAM_RESUME_PREVIEW_PP_REQ,   
    MSG_ID_MEDIA_CAM_PAUSE_PREVIEW_PP_REQ,
    MSG_ID_MEDIA_CAM_SET_FD_ID_REQ,
    MSG_ID_MEDIA_CAM_UNSET_FD_ID_REQ,
    MSG_ID_MEDIA_CAM_FD_RESULT_IND,
    MSG_ID_MEDIA_CAM_START_STITCH_REQ,
    MSG_ID_MEDIA_CAM_STOP_STITCH_REQ,
    MSG_ID_MEDIA_CAM_PAUSE_STITCH_REQ,
    MSG_ID_MEDIA_CAM_RESUME_STITCH_REQ,
    MSG_ID_MEDIA_CAM_STITCH_RESULT_IND,
    MSG_ID_MEDIA_CAM_STITCH_QUICK_VIEW_IND,
    MSG_ID_MEDIA_CAM_PANORAMA_RESET_3A_REQ,
    MSG_ID_MEDIA_CAM_SET_PANORAMA_STITCH_MEM_REQ,
    MSG_ID_MEDIA_CAM_PANORAMA_ENCODE_REQ,
    MSG_ID_MEDIA_CAM_GET_AUTOCAP_RESULT_REQ,
    MSG_ID_MEDIA_CAM_SET_CAMERA_ID_REQ,
    MSG_ID_MEDIA_CAM_SENSOR_QUERY_CAPBILITY_REQ,
    MSG_ID_MEDIA_CAM_SENSOR_QUERY_ZOOM_REQ,
    MSG_ID_MEDIA_CAM_GET_BUFFER_CONTENT_REQ,
    MSG_ID_MEDIA_CAM_GET_PREDICTED_IMAGE_SIZE_REQ,
    MSG_ID_MEDIA_CAM_SD_EVENT_IND,
    MSG_ID_MEDIA_CAM_STOP_HDR_REQ,
    MSG_ID_MEDIA_CAM_SAVE_HDR_IMG_REQ,    
    MSG_ID_MEDIA_CAM_HDR_EVENT_IND,
    MSG_ID_MEDIA_CAM_PROFILING_SET_ACTIVE_REQ,    
    MSG_ID_MEDIA_CAM_PROFILING_SET_BUFFER_REQ,
    MSG_ID_MEDIA_CAM_PROFILING_LOG_REQ,
    MSG_ID_MEDIA_CAM_PROFILING_GET_APPEND_REQ,
    MSG_ID_MEDIA_CAM_MAV_RESULT_IND,
    MSG_ID_MEDIA_CAM_MAV_CAPTURE_IMAGE_IND,
    MSG_ID_MEDIA_CAM_START_MAV_STITCH_REQ,
    MSG_ID_MEDIA_CAM_CAMERA_GYRO_RESULT_IND,
    MSG_ID_MED_CAM_CODE_END = MSG_ID_MEDIA_CAM_CAMERA_GYRO_RESULT_IND,
    MSG_ID_MEDIA_IMG_DECODE_REQ,
    MSG_ID_MED_IMG_CODE_BEGIN = MSG_ID_MEDIA_IMG_DECODE_REQ,
    MSG_ID_MEDIA_IMG_DECODE_FINISH_IND,
    MSG_ID_MEDIA_IMG_DECODE_EVENT_IND,
    MSG_ID_MEDIA_IMG_ENCODE_REQ,
    MSG_ID_MEDIA_IMG_ENCODE_FINISH_IND,
    MSG_ID_MEDIA_IMG_ENCODE_EVENT_IND,
    MSG_ID_MEDIA_IMG_STOP_REQ,
    MSG_ID_MEDIA_IMG_RESIZE_REQ,
    MSG_ID_MEDIA_IMG_RESIZE_DONE_IND,
    MSG_ID_MEDIA_IMG_EXIF_DECODE_REQ,
    MSG_ID_MEDIA_IMG_TEMP_1,
    MSG_ID_MEDIA_IMG_TEMP_2,
    MSG_ID_MED_IMG_CODE_END = MSG_ID_MEDIA_IMG_TEMP_2,
    MSG_ID_MEDIA_VID_PREVIEW_REQ,
    MSG_ID_MED_VID_CODE_BEGIN = MSG_ID_MEDIA_VID_PREVIEW_REQ,
    MSG_ID_MEDIA_VID_POWER_UP_REQ,
    MSG_ID_MEDIA_VID_POWER_DOWN_REQ,
    MSG_ID_MEDIA_VID_EVENT_IND,
    MSG_ID_MEDIA_VID_GET_FOCUS_ZONE_REQ,
    MSG_ID_MEDIA_VID_AF_PROCESS_DONE_IND,    
    MSG_ID_MEDIA_VID_RECORD_REQ,
    MSG_ID_MEDIA_VID_STOP_REQ,
    MSG_ID_MEDIA_VID_REC_STOP_REQ,
    MSG_ID_MEDIA_VID_CHECK_MED_READY_REQ,    
    MSG_ID_MEDIA_VID_RECORD_FINISH_IND,
    MSG_ID_MEDIA_VID_ENCODE_EVENT_IND,
    MSG_ID_MEDIA_VID_ENCODE_AUDIO_DATA_IND,
    MSG_ID_MEDIA_VID_CLEAN_FILE_REQ,
    MSG_ID_MEDIA_VID_GET_RECORD_TIME_REQ,
    MSG_ID_MEDIA_VID_GET_RECORD_FRAME_NUM_REQ,
    MSG_ID_MEDIA_VID_GET_RECORD_SIZE_REQ,
    MSG_ID_MEDIA_VID_FILE_MERGE_REQ,
    MSG_ID_MEDIA_VID_FILE_MERGE_DONE_IND,
    MSG_ID_MEDIA_VID_RECORD_YUV_REQ,
    MSG_ID_MEDIA_VID_OPEN_REQ,
    MSG_ID_MEDIA_VID_CLOSE_REQ,
    MSG_ID_MEDIA_VID_FILE_READY_IND,
    MSG_ID_MEDIA_VID_PLAY_REQ,
    MSG_ID_MEDIA_VID_PLAY_FINISH_IND,
    MSG_ID_MEDIA_VID_DECODE_EVENT_IND,
    MSG_ID_MEDIA_VID_EDT_ENCODE_EVENT_IND,
    MSG_ID_MEDIA_VID_DECODE_AUDIO_DATA_IND,
    MSG_ID_MEDIA_VID_PAUSE_REQ,
    MSG_ID_MEDIA_VID_RESUME_REQ,
    MSG_ID_MEDIA_VID_SET_STOP_TIME_REQ,
    MSG_ID_MEDIA_VID_SET_SLEEP_TIME_REQ,
    MSG_ID_MEDIA_VID_GET_PLAY_TIME_REQ,
    MSG_ID_MEDIA_VID_TIME_TO_FRAME_REQ,
    MSG_ID_MEDIA_VID_FRAME_TO_TIME_REQ,
    MSG_ID_MEDIA_VID_SEEK_REQ,
    MSG_ID_MEDIA_VID_GET_FRAME_REQ,
    MSG_ID_MEDIA_VID_SEEK_DONE_IND,
    MSG_ID_MEDIA_VID_START_FAST_ZOOM_REQ,
    MSG_ID_MEDIA_VID_STOP_FAST_ZOOM_REQ,
    MSG_ID_MEDIA_VID_GET_FAST_ZOOM_FACTOR_REQ,
    MSG_ID_MEDIA_VID_GET_RESERVED_DISC_SIZE_REQ,
    MSG_ID_MEDIA_VID_REC_SET_PARAM_REQ,
    MSG_ID_MEDIA_VID_SENSOR_QUERY_ZOOM_REQ,
    MSG_ID_MEDIA_VID_CLIP_OPEN_REQ,
    MSG_ID_MEDIA_VID_CLIP_PREPARE_REQ,
    MSG_ID_MEDIA_VID_CLIP_START_REQ,
    MSG_ID_MEDIA_VID_CLIP_STOP_REQ,
    MSG_ID_MEDIA_VID_CLIP_CLOSE_REQ,
    MSG_ID_MEDIA_VID_CLIP_GET_PARAM_REQ,
    MSG_ID_MEDIA_VID_CLIP_PREPARE_CNF,
    MSG_ID_MEDIA_VID_CLIP_FINISH_IND,
    MSG_ID_MEDIA_VID_CLIP_EVENT_IND,
    MSG_ID_MEDIA_VID_GET_PDL_PRECENT_REQ,
    MSG_ID_MEDIA_VID_GET_PDL_MAX_TIME_REQ,  
    MSG_ID_MEDIA_VID_CHECK_IS_PDL_REQ,      
    MSG_ID_MEDIA_VID_GET_CONTENT_DESC_REQ,
    MSG_ID_MEDIA_VID_ERROR_RECOVER_IND,
    MSG_ID_MEDIA_VID_PLAY_RESTART_IND,
    MSG_ID_MEDIA_VID_AUDIO_PLAY_FINISH_IND,
    MSG_ID_MEDIA_VID_MJPEG_ENCODE_IND,    
    MSG_ID_MEDIA_VID_UPDATE_BLT_PAUSE_REQ,
    MSG_ID_MEDIA_VID_UPDATE_BLT_RESUME_REQ,
    MSG_ID_MEDIA_VID_PAUSE_VISUAL_UPDATE_REQ,
    MSG_ID_MEDIA_VID_RESUME_VISUAL_UPDATE_REQ,
    MSG_ID_MEDIA_VID_ALLOC_LIMTED_AVI_RES_REQ,
    MSG_ID_MEDIA_VID_FREE_LIMTED_AVI_RES_REQ,   
    MSG_ID_MEDIA_VID_MODIS_EVENT_IND,
    MSG_ID_MEDIA_VID_SET_PARAM_REQ,    
    MSG_ID_MEDIA_VID_GET_PARAM_REQ,  

    MSG_ID_MEDIA_VID_READ_DATA_IND,

#line 1 "interface\\hal\\video\\mpl_sap.h"

































 



































 

MSG_ID_MEDIA_MP4_RECORDER_ASYNC_CALLBACK_REQ,
MSG_ID_MEDIA_MP4_RECORDER_BEGIN = MSG_ID_MEDIA_MP4_RECORDER_ASYNC_CALLBACK_REQ,
MSG_ID_MEDIA_MP4_RECORDER_ENG,

MSG_ID_MEDIA_AVI_RECORDER_ASYNC_CALLBACK_REQ,
MSG_ID_MEDIA_AVI_RECORDER_BEGIN = MSG_ID_MEDIA_AVI_RECORDER_ASYNC_CALLBACK_REQ,
MSG_ID_MEDIA_AVI_RECORDER_ENG,

MSG_ID_MEDIA_MPL_ASYNC_CALLBACK_REQ,

MSG_ID_MEDIA_VIDEO_CLIPPER_ASYNC_CALLBACK_REQ,
MSG_ID_MEDIA_VIDEO_CLIPPER_RECORDER_BEGIN = MSG_ID_MEDIA_VIDEO_CLIPPER_ASYNC_CALLBACK_REQ,
MSG_ID_MEDIA_VIDEO_CLIPPER_RECORDER_ENG,
#line 1083 "interface\\media\\med_sap.h"
    
    MSG_ID_MEDIA_VID_MEDIA_PLAYER_AUD_EVENT_IND,
    MSG_ID_MEDIA_VID_MEDIA_PLAYER_BEGIN = MSG_ID_MEDIA_VID_MEDIA_PLAYER_AUD_EVENT_IND,
    MSG_ID_MEDIA_VID_MPLY_VID_BUF_REQ,
    MSG_ID_MEDIA_VID_MEDIA_PLAYER_VID_EVENT_IND,
    MSG_ID_MEDIA_VID_MEDIA_PLAYER_END = MSG_ID_MEDIA_VID_MEDIA_PLAYER_VID_EVENT_IND,

    MSG_ID_MEDIA_VID_MP4_AUD_WRITE_DATA_IND,
    MSG_ID_MEDIA_VID_MTK_MP4_BEGIN = MSG_ID_MEDIA_VID_MP4_AUD_WRITE_DATA_IND,
    MSG_ID_MEDIA_VID_MP4_DECODE_EVENT_IND,
    MSG_ID_MEDIA_VID_MTK_MP4_END =  MSG_ID_MEDIA_VID_MP4_DECODE_EVENT_IND,

    MSG_ID_MEDIA_MJPG_AUD_WRITE_DATA_IND,
    MSG_ID_MEDIA_MJPG_BEGIN = MSG_ID_MEDIA_MJPG_AUD_WRITE_DATA_IND,
    MSG_ID_MEDIA_MJPG_DECODE_EVENT_IND,
    MSG_ID_MEDIA_MJPG_PLAY_FINISH_IND,
    MSG_ID_MEDIA_MJPG_END = MSG_ID_MEDIA_MJPG_PLAY_FINISH_IND,
    
    MSG_ID_MED_VID_CODE_END = MSG_ID_MEDIA_MJPG_END,
    MSG_ID_MEDIA_TVO_START_REQ,
    MSG_ID_MED_TVO_CODE_BEGIN = MSG_ID_MEDIA_TVO_START_REQ,
    MSG_ID_MEDIA_TVO_STOP_REQ,
    MSG_ID_MEDIA_TVO_SET_MODE_REQ,
    MSG_ID_MEDIA_TVO_TV_CONNECT_IND,
    MSG_ID_MEDIA_TVO_AV_CABLE_DETECT_IND,
    MSG_ID_MEDIA_TVO_SET_PARAM_REQ,
    MSG_ID_MEDIA_TVO_TEMP_2,
    MSG_ID_MED_TVO_CODE_END = MSG_ID_MEDIA_TVO_TEMP_2,
    MSG_ID_MEDIA_WEBCAM_SET_CAMERA_ID_REQ,
    MSG_ID_MED_WEBCAM_CODE_BEGIN = MSG_ID_MEDIA_WEBCAM_SET_CAMERA_ID_REQ,
    MSG_ID_MEDIA_WEBCAM_START_REQ,
    MSG_ID_MEDIA_WEBCAM_START_CNF,
    MSG_ID_MEDIA_WEBCAM_STOP_REQ,
    MSG_ID_MEDIA_WEBCAM_PAUSE_REQ,
    MSG_ID_MEDIA_WEBCAM_RESUME_REQ,
    MSG_ID_MEDIA_WEBCAM_PAUSE_CONNECT_REQ,
    MSG_ID_MEDIA_WEBCAM_RESUME_CONNECT_REQ,
    MSG_ID_MEDIA_WEBCAM_CAPTURE_REQ,
    MSG_ID_MEDIA_WEBCAM_ROTATE_REQ,
    MSG_ID_MEDIA_WEBCAM_ABORT_IND,
    MSG_ID_MEDIA_WEBCAM_ENCODE_REQ,
    MSG_ID_MEDIA_WEBCAM_TEMP_2,
    MSG_ID_MED_WEBCAM_CODE_END = MSG_ID_MEDIA_WEBCAM_TEMP_2,
    MSG_ID_MEDIA_MMA_OPEN_REQ,
    MSG_ID_MED_MMA_CODE_BEGIN = MSG_ID_MEDIA_MMA_OPEN_REQ,
    MSG_ID_MEDIA_MMA_AYNC_OPEN_REQ,
    MSG_ID_MEDIA_MMA_AYNC_OPEN_CNF,
    MSG_ID_MEDIA_MMA_CLOSE_REQ,
    MSG_ID_MEDIA_MMA_SET_PARAM_REQ,
    MSG_ID_MEDIA_MMA_BUILD_BLISRC_TABLE,
    MSG_ID_MEDIA_MMA_PLAY_REQ,
    MSG_ID_MEDIA_MMA_STOP_REQ,
    MSG_ID_MEDIA_MMA_PAUSE_REQ,
    MSG_ID_MEDIA_MMA_RESUME_REQ,
    MSG_ID_MEDIA_MMA_GET_AUDIO_INFO_REQ,
    MSG_ID_MEDIA_MMA_GET_DURATION_REQ,
    MSG_ID_MEDIA_MMA_GET_CURRENT_TIME_REQ,
    MSG_ID_MEDIA_MMA_SET_START_TIME_REQ,
    MSG_ID_MEDIA_MMA_SET_STOP_TIME_REQ,
    MSG_ID_MEDIA_MMA_GET_VOLUME_REQ,
    MSG_ID_MEDIA_MMA_SET_VOLUME_REQ,
    MSG_ID_MEDIA_MMA_SET_RATE_REQ,
    MSG_ID_MEDIA_MMA_SET_TEMPO_REQ,
    MSG_ID_MEDIA_MMA_SET_PITCH_REQ,
    MSG_ID_MEDIA_MMA_SEND_LONG_MSG_REQ,
    MSG_ID_MEDIA_MMA_SEND_SHORT_MSG_REQ,
    MSG_ID_MEDIA_MMA_OPEN_DEVICE_REQ,
    MSG_ID_MEDIA_MMA_CLOSE_DEVICE_REQ,
    MSG_ID_MEDIA_MMA_SET_CHANNEL_VOLUME_REQ,
    MSG_ID_MEDIA_MMA_SET_PROGRAM_REQ,
    MSG_ID_MEDIA_MMA_SET_DATA_REQ,
    MSG_ID_MEDIA_MMA_GET_CHANNEL_VOLUME_REQ,
    MSG_ID_MEDIA_MMA_GET_PITCH_REQ,
    MSG_ID_MEDIA_MMA_GET_PROGRAM_REQ,
    MSG_ID_MEDIA_MMA_GET_RATE_RANGE_REQ,
    MSG_ID_MEDIA_MMA_GET_RATE_REQ,
    MSG_ID_MEDIA_MMA_GET_TEMPO_REQ,
    MSG_ID_MEDIA_MMA_GET_BANK_LIST_REQ,
    MSG_ID_MEDIA_MMA_GET_PROGRAM_LIST_REQ,
    MSG_ID_MEDIA_MMA_GET_PROGRAM_NAME_REQ,
    MSG_ID_MEDIA_MMA_GET_KEY_NAME_REQ,
    MSG_ID_MEDIA_MMA_GET_IS_BANK_SUPPORT_REQ,
    MSG_ID_MEDIA_MMA_GET_IS_SP_MIDI_REQ,
    MSG_ID_MEDIA_MMA_PDL_WRITE_DATA_IND_REQ,
    MSG_ID_MEDIA_MMA_PDL_GET_BUF_PERCENT_REQ,
    MSG_ID_MEDIA_MMA_CALLBACK_IND,    
    MSG_ID_MEDIA_MMA_SET_CACHE_TABLE_REQ,
    MSG_ID_MEDIA_MMA_TEMP_1,
    MSG_ID_MEDIA_MMA_TEMP_2,
    MSG_ID_MEDIA_MMA_TEMP_3,
    MSG_ID_MED_MMA_CODE_END = MSG_ID_MEDIA_MMA_TEMP_3,
    MSG_ID_MEDIA_FMR_POWER_ON_REQ,
    MSG_ID_MEDIA_FMR_POWER_OFF_REQ,
    MSG_ID_MEDIA_FMR_SET_OUTPUT_PATH_REQ,
    MSG_ID_MEDIA_FMR_SET_FREQ_REQ,
    MSG_ID_MEDIA_FMR_SET_ANTENNA_REQ,
    MSG_ID_MEDIA_FMR_MUTE_REQ,
    MSG_ID_MEDIA_FMR_CHECK_IS_VALID_STOP_REQ,
    MSG_ID_MEDIA_FMR_CHECK_IS_VALID_STOP_CNF,
    MSG_ID_MEDIA_FMR_GET_SIGNAL_LEVEL_REQ,
    MSG_ID_MEDIA_FMR_GET_SIGNAL_LEVEL_CNF,
    MSG_ID_MEDIA_FMR_EVALUATE_THRESHOLD_REQ,
    MSG_ID_MEDIA_FMR_SET_CHANNEL_REQ,
    MSG_ID_MEDIA_FMR_SEEK_START_REQ,
    MSG_ID_MEDIA_FMR_SEEK_ABORT_REQ,
    MSG_ID_MEDIA_FMR_SEEK_RESULT_IND,
    MSG_ID_MEDIA_FMR_SEEK_CALLBACK_IND,
    MSG_ID_MEDIA_FMR_HW_SCAN_REQ,
    MSG_ID_MEDIA_FMR_HW_SCAN_FINISH_IND,
    MSG_ID_MEDIA_FMR_HW_SCAN_CALLBACK_IND,
    MSG_ID_MEDIA_FMR_HW_SCAN_ABORT_REQ,
    MSG_ID_MEDIA_FMR_RDS_ENABLE_REQ,
    MSG_ID_MEDIA_FMR_RDS_DISABLE_REQ,
    MSG_ID_MEDIA_FMR_RDS_EVENT_IND,
    MSG_ID_MEDIA_FMR_RDS_CALLBACK_IND,
    MSG_ID_MEDIA_FMR_POLL_RDS_EVENT_RDS,
    MSG_ID_MEDIA_AUD_SET_HEADSET_MODE_OUTPUT_PATH,
    MSG_ID_MEDIA_SND_CHECK_BYTE_STREAM_FORMAT_REQ,
    MSG_ID_MEDIA_SND_CHECK_FILE_FORMAT_REQ,
    MSG_ID_MEDIA_SND_PLAY_BYTE_STREAM_REQ,
    MSG_ID_MEDIA_SND_PLAY_FILE_REQ,
    MSG_ID_MEDIA_SND_PROCESS_EVENT_IND,
    MSG_ID_MEDIA_SND_PLAY_FINISH_IND,
    MSG_ID_MEDIA_SND_STOP_PLAY_REQ,
    MSG_ID_MEDIA_SND_SET_VOLUME_REQ,
    MSG_ID_MEDIA_AUD_STRETCH_CHECK_STREAM_FORMAT_REQ,
    MSG_ID_MEDIA_AUD_STRETCH_CHECK_FILE_FORMAT_REQ,
    MSG_ID_MEDIA_AUD_STRETCH_SET_SPEED_REQ,
    MSG_ID_MEDIA_AUD_STRETCH_CLOSE_REQ,
    MSG_ID_MEDIA___BES_LIVE_SUPPORT___SET_MODE_REQ,
    MSG_ID_MEDIA___BES_LIVE_SUPPORT___TURN_ON_REQ,
    MSG_ID_MEDIA___BES_LIVE_SUPPORT___TURN_OFF_REQ,
    MSG_ID_MEDIA_AUD_SURROUND_TURN_ON_REQ,
    MSG_ID_MEDIA_AUD_SURROUND_TURN_OFF_REQ,
    MSG_ID_MEDIA_AUD_EQ_SET_MAGNITUDE_REQ,
    MSG_ID_MEDIA_AUD_EQ_TURN_ON_REQ,
    MSG_ID_MEDIA_AUD_EQ_TURN_OFF_REQ,
    MSG_ID_MEDIA_AUD_BASS_ENHANCE_TURN_ON_REQ,
    MSG_ID_MEDIA_AUD_BASS_ENHANCE_TURN_OFF_REQ,
    MSG_ID_MEDIA_AUD_LOUDNESS_TURN_ON_REQ,
    MSG_ID_MEDIA_AUD_LOUDNESS_TURN_OFF_REQ,
    MSG_ID_MEDIA_AUD_TTS_SET_ATTR_REQ,
    MSG_ID_MEDIA_AUD_TTS_PLAY_EVENT_IND,
    MSG_ID_MEDIA_AUD_TTS_PLAY_REQ,
    MSG_ID_MEDIA_AUD_TTS_STOP_REQ,
    MSG_ID_MEDIA_AUD_TTS_PAUSE_REQ,
    MSG_ID_MEDIA_AUD_TTS_RESUME_REQ,
    MSG_ID_MEDIA_AUD_TTS_UPDATE_INFO_IND,
    MSG_ID_MEDIA_AUD_KT_PROCESS_CALLBACK,
    MSG_ID_MEDIA_AUD_KT_START_DETECT,
    MSG_ID_MEDIA_AUD_KT_STOP_DETECT,
    MSG_ID_MEDIA_AUD_KT_DETECT_IND,
    MSG_ID_MEDIA_VR_GET_VERSION_REQ,
    MSG_ID_MEDIA_VR_GET_PARAM_REQ,
    MSG_ID_MEDIA_VR_SET_PARAM_REQ,
    MSG_ID_MEDIA_VR_INIT_RCG_REQ,
    MSG_ID_MEDIA_VR_RCG_PROCESS_REQ,
    MSG_ID_MEDIA_VR_RCG_RESULT_IND,
    MSG_ID_MEDIA_VR_INIT_TRN_REQ,
    MSG_ID_MEDIA_VR_TRN_PROCESS_REQ,
    MSG_ID_MEDIA_VR_TRN_RESULT_IND,
    MSG_ID_MEDIA_VR_VOICE_IN_REQ,
    MSG_ID_MEDIA_VR_DEL_TAG_REQ,
    MSG_ID_MEDIA_VR_CHECK_TAG_REQ,
    MSG_ID_MEDIA_VR_SYNC_DB_REQ,
    MSG_ID_MEDIA_VR_PLAY_TAG_REQ,
    MSG_ID_MEDIA_VR_GET_DIR_REQ,
    MSG_ID_MEDIA_VR_ADD_TAG_REQ,
    MSG_ID_MEDIA_VR_ABORT_REQ,
    MSG_ID_MEDIA_VR_ABORT_IND,
    MSG_ID_MED_VR_CODE_END = MSG_ID_MEDIA_VR_ABORT_IND,
    MSG_ID_MEDIA_VRSI_INIT_REQ,
    MSG_ID_MEDIA_VRSI_ADD_TAGS_REQ,
    MSG_ID_MEDIA_VRSI_START_TRN_REQ,
    MSG_ID_MEDIA_VRSI_START_RCG_REQ,
    MSG_ID_MEDIA_VRSI_PLAY_TAG_REQ,
    MSG_ID_MEDIA_VRSI_PLAY_TTS_REQ,
    MSG_ID_MEDIA_VRSI_GET_TAGNUM_REQ,
    MSG_ID_MEDIA_VRSI_GET_TAGINFO_REQ,
    MSG_ID_MEDIA_VRSI_DEL_TAGS_REQ,
    MSG_ID_MEDIA_VRSI_RESET_TAGS_REQ,
    MSG_ID_MEDIA_VRSI_SYNC_DB_REQ,
    MSG_ID_MEDIA_VRSI_ABORT_REQ,
    MSG_ID_MEDIA_VRSI_CLOSE_REQ,
    MSG_ID_MEDIA_VRSI_PROCESS_IND,
    MSG_ID_MEDIA_VRSI_TRN_PROMPT_REQ,
    MSG_ID_MEDIA_VRSI_TRN_RESULT_IND,
    MSG_ID_MEDIA_VRSI_RCG_PROMPT_REQ,
    MSG_ID_MEDIA_VRSI_RCG_RESULT_IND,
    MSG_ID_MEDIA_VRSI_ERR_IND,
    MSG_ID_MEDIA_VRSI_PLAY_TAG_FINISH_IND,
    MSG_ID_MEDIA_VRSI_PLAY_TTS_FINISH_IND,
    MSG_ID_MED_VRSI_CODE_END = MSG_ID_MEDIA_VRSI_PLAY_TTS_FINISH_IND,
    MSG_ID_MEDIA_CTM_OPEN_REQ,
    MSG_ID_MED_CTM_CODE_BEGIN = MSG_ID_MEDIA_CTM_OPEN_REQ,
    MSG_ID_MEDIA_CTM_OPEN_CNF,
    MSG_ID_MEDIA_CTM_CLOSE_REQ,
    MSG_ID_MEDIA_CTM_CLOSE_CNF,
    MSG_ID_MEDIA_CTM_CONNECT_REQ,
    MSG_ID_MEDIA_CTM_CONNECT_CNF,
    MSG_ID_MEDIA_CTM_CONNECTED_IND,
    MSG_ID_MEDIA_CTM_SEND_TEXT_REQ,
    MSG_ID_MEDIA_CTM_SEND_TEXT_CNF,
    MSG_ID_MEDIA_CTM_RECV_TEXT_IND,
    MSG_ID_MEDIA_CTM_EVENT_IND,
    MSG_ID_MED_CTM_CODE_END = MSG_ID_MEDIA_CTM_EVENT_IND,
    MSG_ID_MEDIA_BT_AUDIO_OPEN_REQ,
    MSG_ID_MED_BT_AUDIO_CODE_START = MSG_ID_MEDIA_BT_AUDIO_OPEN_REQ,
    MSG_ID_MEDIA_BT_AUDIO_OPEN_CNF,
    MSG_ID_MEDIA_BT_AUDIO_OPEN_IND,
    MSG_ID_MEDIA_BT_AUDIO_CLOSE_REQ,
    MSG_ID_MEDIA_BT_AUDIO_CLOSE_CNF,
    MSG_ID_MEDIA_BT_AUDIO_CLOSE_IND,
    MSG_ID_MEDIA_BT_AUDIO_TURN_ON_REQ,
    MSG_ID_MEDIA_BT_AUDIO_TURN_OFF_REQ,
    MSG_ID_MEDIA_BT_AUDIO_SET_SCO_MODE_REQ,
    MSG_ID_MED_BT_AUDIO_CODE_END = MSG_ID_MEDIA_BT_AUDIO_SET_SCO_MODE_REQ,
    MSG_ID_MEDIA_IN_PROC_CALL_EXT_REQ,
    MSG_ID_MEDIA_BT_OPEN_CODEC_REQ,
    MSG_ID_MEDIA_BT_CLOSE_CODEC_REQ,
    MSG_ID_MEDIA_BT_CLOSE_CODEC_IND,
    MSG_ID_MED_RTP_CREATE_REQ,
    MSG_ID_MED_RTP_CODE_BEGIN = MSG_ID_MED_RTP_CREATE_REQ,   
    MSG_ID_MED_RTP_CLOSE_REQ,
    MSG_ID_MED_RTP_SET_REMOTE_ADDR_REQ,
    MSG_ID_MED_RTP_SET_NOTIFY_REQ,
    MSG_ID_MED_RTP_CLEAR_NOTIFY_REQ,
    MSG_ID_MED_RTP_SEND_REQ,
    MSG_ID_MED_RTP_RECV_REQ,
    MSG_ID_MED_RTP_SEND_RTCP_REQ,
    MSG_ID_MED_RTP_RECV_RTCP_REQ,
    MSG_ID_MED_RTP_SET_VALUE_REQ,
    MSG_ID_MED_RTP_GET_VALUE_REQ,
    MSG_ID_MED_RTP_SEND_DTMF_START_REQ,
    MSG_ID_MED_RTP_SEND_DTMF_STOP_REQ,
    MSG_ID_MED_RTP_CHECK_SRTP_PARAM_REQ,
    MSG_ID_MED_RTP_GET_SRTP_PARAM_REQ,
    MSG_ID_MED_RTP_SET_SRTP_PARAM_REQ,
    MSG_ID_MED_RTP_NOTIFY_IND,
    MSG_ID_MED_VOIP_INIT_REQ,
    MSG_ID_MED_VOIP_ENCODING_START_REQ,
    MSG_ID_MED_VOIP_ENCODING_STOP_REQ,
    MSG_ID_MED_VOIP_DECODING_START_REQ,
    MSG_ID_MED_VOIP_DECODING_STOP_REQ,
    MSG_ID_MED_VOIP_L1_ENCODING_CALLBACK_IND,
    MSG_ID_MED_VOIP_GET_VALUE_REQ,
    MSG_ID_MED_VOIP_SET_VALUE_REQ,
    MSG_ID_MED_VOIP_GET_CODEC_CAP_REQ,
    MSG_ID_MED_VOIP_MIXER_ADD_REQ,
    MSG_ID_MED_VOIP_MIXER_REMOVE_REQ,   
    MSG_ID_MED_VOIP_RTP_DISCONNECT_IND,
    MSG_ID_MED_RTP_CODE_END = MSG_ID_MED_VOIP_RTP_DISCONNECT_IND,
    MSG_ID_MEDIA_STREAM_INIT_REQ,
    MSG_ID_MED_STREAM_CODE_BEGIN = MSG_ID_MEDIA_STREAM_INIT_REQ,
    MSG_ID_MEDIA_STREAM_CONNECT_REQ,
    MSG_ID_MEDIA_STREAM_ABORT_REQ,
    MSG_ID_MEDIA_STREAM_FORCE_ABORT_REQ,
    MSG_ID_MEDIA_STREAM_SET_STOP_TIME_REQ,
    MSG_ID_MEDIA_STREAM_SET_SLEEP_TIME_REQ,
    MSG_ID_MEDIA_STREAM_SEEK_REQ,
    MSG_ID_MEDIA_STREAM_GET_DL_PERCENTAGE_REQ,
    MSG_ID_MEDIA_STREAM_PLAY_REQ,
    MSG_ID_MEDIA_STREAM_STOP_REQ,
    MSG_ID_MEDIA_STREAM_DISCONNECT_REQ,
    MSG_ID_MEDIA_STREAM_DEINIT_REQ,
    MSG_ID_MEDIA_STREAM_GET_PARAM_REQ,
    MSG_ID_MEDIA_STREAM_SET_INFO_REQ,
    MSG_ID_MEDIA_STREAM_SET_AUDIO_LEVEL_REQ,
    MSG_ID_MEDIA_STREAM_SWITCH_SCREEN_VIDEOSTOP_REQ,
    MSG_ID_MEDIA_STREAM_SWITCH_SCREEN_VIDEOSTART_REQ,
    MSG_ID_MEDIA_STREAM_SET_PARAM_REQ,
    MSG_ID_MEDIA_STREAM_GET_PLAYING_TIME_REQ,
    MSG_ID_MEDIA_STREAM_L1_CALLBACK_IND,
    MSG_ID_MEDIA_STREAM_CONNECTED_IND,
    MSG_ID_MEDIA_STREAM_SEEK_IND,
    MSG_ID_MEDIA_STREAM_PLAY_IND,
    MSG_ID_MEDIA_STREAM_BGPLAY_VIDEOSTOP_REQ,
    MSG_ID_MEDIA_STREAM_SET_TRACK_REQ,
    MSG_ID_MEDIA_STREAM_REC_OPEN_REQ,
    MSG_ID_MEDIA_STREAM_REC_CLOSE_REQ,
    MSG_ID_MEDIA_STREAM_REC_SAVE_REQ,
    MSG_ID_MEDIA_STREAM_REC_SAVE_IND,
    MSG_ID_MEDIA_STREAM_REC_SAVE_ABORT_REQ,
    MSG_ID_MEDIA_STREAM_L1_PUTFRAME_CALLBACK_IND,
    MSG_ID_MED_STREAM_CODE_END = MSG_ID_MEDIA_STREAM_L1_PUTFRAME_CALLBACK_IND,


    MSG_ID_MEDIA_VCALL_VIDEO_CODEC_OPEN_REQ,
    MSG_ID_MED_VCALL_CODE_BEGIN = MSG_ID_MEDIA_VCALL_VIDEO_CODEC_OPEN_REQ,
    MSG_ID_MEDIA_VCALL_VIDEO_CODEC_RESUME_REQ,
    MSG_ID_MEDIA_VCALL_VIDEO_CODEC_PAUSE_REQ,    
    MSG_ID_MEDIA_VCALL_VIDEO_CODEC_CLOSE_REQ,
    MSG_ID_MEDIA_VCALL_VIDEO_SET_MEMORY_PARAM_REQ,       
    MSG_ID_MEDIA_VCALL_VIDEO_SET_PARAM_REQ,    
    MSG_ID_MEDIA_VCALL_VIDEO_GET_BUFFER_CONTENT_REQ,      
    MSG_ID_MEDIA_VCALL_VIDEO_CODEC_REPORT_IND,
    MSG_ID_MEDIA_VCALL_CHANNEL_REPORT_IND,
 
    MSG_ID_MEDIA_VCALL_VIDEO_ENCODE_DATA_READY_IND,
    MSG_ID_MEDIA_VCALL_VIDEO_DECODE_DATA_READY_IND,
    MSG_ID_MED_VCALL_CODE_END = MSG_ID_MEDIA_VCALL_VIDEO_DECODE_DATA_READY_IND,

    


 

    




 
    MSG_ID_MEDIA_MTV_OPEN_REQ, MSG_ID_MEDIA_MTV_CODE_BEGIN = MSG_ID_MEDIA_MTV_OPEN_REQ,

    




 
    MSG_ID_MEDIA_MTV_CONFIG_REQ,

    




 
    MSG_ID_MEDIA_MTV_FIND_UNSAVED_RECORDING_REQ,

    




 
    MSG_ID_MEDIA_MTV_RECOVER_RECORDING_REQ,

    




 
    MSG_ID_MEDIA_MTV_ABORT_RECOVERING_REQ,

    




 
    MSG_ID_MEDIA_MTV_DISCARD_UNSAVED_RECORDING_REQ,

    




 
    MSG_ID_MEDIA_MTV_COMPLETE_RECOVERING_IND,

    




 
    MSG_ID_MEDIA_MTV_SEARCH_SERVICES_REQ,

    




 
    MSG_ID_MEDIA_MTV_SEARCH_PROGRESS_IND,

    




 
    MSG_ID_MEDIA_MTV_ABORT_SEARCHING_REQ,

    






 
    MSG_ID_MEDIA_MTV_SERVICE_FOUND_IND,

    




 
    MSG_ID_MEDIA_MTV_SYSTEM_EVENT_IND,

    




 
    MSG_ID_MEDIA_MTV_START_SERVICE_REQ,

    




 
    MSG_ID_MEDIA_MTV_SERVICE_EVENT_IND,

    




 
    MSG_ID_MEDIA_MTV_ACCOUNT_INQUIRY_IND,

    




 
    MSG_ID_MEDIA_MTV_CITY_FOUND_IND,

    




 
    MSG_ID_MEDIA_MTV_START_TIMESHIFT_REQ,

    




 
    MSG_ID_MEDIA_MTV_PLAYER_PLAY_REQ,

    




 
    MSG_ID_MEDIA_MTV_PLAYER_PAUSE_REQ,

    




 
    MSG_ID_MEDIA_MTV_PLAYER_PAUSE_VISUAL_UPDATE_REQ,

    




 
    MSG_ID_MEDIA_MTV_PLAYER_RESUME_VISUAL_UPDATE_REQ,

    




 
    MSG_ID_MEDIA_MTV_PLAYER_STOP_REQ,

    




 
    MSG_ID_MEDIA_MTV_PLAYER_SEEK_REQ,

    




 
    MSG_ID_MEDIA_MTV_PLAYER_SET_RATE_REQ,

    




 
    MSG_ID_MEDIA_MTV_PLAYER_SNAPSHOT_REQ,

    




 
    MSG_ID_MEDIA_MTV_PLAYER_GET_STATUS_REQ,

    




 
    MSG_ID_MEDIA_MTV_PLAYER_EVENT_IND,


    




 
    MSG_ID_MEDIA_MTV_RESTART_REQ,


    




 
    MSG_ID_MEDIA_MTV_RECORDER_START_REQ,

    




 
    MSG_ID_MEDIA_MTV_RECORDER_STOP_REQ,

    




 
    MSG_ID_MEDIA_MTV_RECORDER_PAUSE_REQ,

    




 
    MSG_ID_MEDIA_MTV_RECORDER_RESUME_REQ,

    




 
    MSG_ID_MEDIA_MTV_RECORDER_SAVE_REQ,

    




 
    MSG_ID_MEDIA_MTV_RECORDER_ABORT_SAVING_REQ,

    




 
    MSG_ID_MEDIA_MTV_RECORDER_DISCARD_RECORDING_REQ,

    




 
    MSG_ID_MEDIA_MTV_RECORDER_GET_STATUS_REQ,

    




 
    MSG_ID_MEDIA_MTV_RECORDER_EVENT_IND,

    




 
    MSG_ID_MEDIA_MTV_SET_PARAM_REQ,

    




 
    MSG_ID_MEDIA_MTV_GET_PARAM_REQ,

    




 
    MSG_ID_MEDIA_MTV_SERVICE_GET_STATUS_REQ,

    




 
    MSG_ID_MEDIA_MTV_SERVICE_GET_INFO_REQ,

    




 
    MSG_ID_MEDIA_MTV_STOP_SERVICE_REQ,

    




 
    MSG_ID_MEDIA_MTV_CLOSE_REQ,

    




 
    MSG_ID_MEDIA_MTV_MEDIA_MTV_ESG_DOWNLOAD_REQ,

    




 
    MSG_ID_MEDIA_MTV_MEDIA_MTV_ESG_ABORT_DOWNLOADING_REQ,

    




 
    MSG_ID_MEDIA_MTV_ESG_OPEN_REQ,

     




 
    MSG_ID_MEDIA_MTV_ESG_CLOSE_REQ,

    




 
    MSG_ID_MEDIA_MTV_ESG_QUERY_REQ,

    




 
    MSG_ID_MEDIA_MTV_ESG_GET_RESULTS_REQ,

    




 
    MSG_ID_MEDIA_MTV_ESG_ADD_FAVORITE_REQ,

    




 
    MSG_ID_MEDIA_MTV_ESG_DEL_FAVORITE_REQ,

    




 
    MSG_ID_MEDIA_MTV_ESG_QUERY_FINISH_REQ,

    




 
    MSG_ID_MEDIA_MTV_CAS_GET_CARD_INFO_REQ,
    
    




 
    MSG_ID_MEDIA_MTV_CAS_TASK_START_REQ,
    
    




 
    MSG_ID_MEDIA_MTV_ASYNC_WRITE_REQ,

    




 
    MSG_ID_MEDIA_ESG_ADD_PARSE_COMMAND,

    




 
    MSG_ID_MEDIA_MTV_ASYNC_CALLBACK_REQ, MSG_ID_MEDIA_MTV_CODE_END = MSG_ID_MEDIA_MTV_ASYNC_CALLBACK_REQ,

     
    MSG_ID_MEDIA_ATV_SCAN_PROGRESS_IND, MSG_ID_ATV_CODE_BEGIN = MSG_ID_MEDIA_ATV_SCAN_PROGRESS_IND,
    MSG_ID_MEDIA_ATV_EVENT_IND,
    MSG_ID_MEDIA_CAMERA_SCAN_PROGRESS_IND,
    MSG_ID_MEDIA_CAMERA_EVENT_IND,
    MSG_ID_MEDIA_ATV_REC_AUDIO_DATA_IND,
    MSG_ID_MEDIA_ATV_REC_VIDEO_DATA_IND,
    MSG_ID_MEDIA_ATV_REC_VIDEO_FINISH_IND,
    MSG_ID_MEDIA_ATV_REC_START_REQ,
    MSG_ID_MEDIA_ATV_REC_START_CNF,
    MSG_ID_MEDIA_ATV_REC_STOP_REQ,
    MSG_ID_MEDIA_ATV_REC_STOP_CNF,
    MSG_ID_ATV_CODE_END = MSG_ID_MEDIA_ATV_REC_STOP_CNF,

     





    MSG_ID_MEDIA_BITSTREAM_AUDIO_OPEN_REQ,
    MSG_ID_MED_BITSTREAM_CODE_BEGIN = MSG_ID_MEDIA_BITSTREAM_AUDIO_OPEN_REQ,   
    MSG_ID_MEDIA_BITSTREAM_AUDIO_CLOSE_REQ,
    MSG_ID_MEDIA_BITSTREAM_AUDIO_GET_BUFFER_STATUS_REQ,
    MSG_ID_MEDIA_BITSTREAM_AUDIO_PUT_DATA_REQ,
    MSG_ID_MEDIA_BITSTREAM_AUDIO_PUT_FRAME_REQ,    
    MSG_ID_MEDIA_BITSTREAM_AUDIO_START_REQ,
    MSG_ID_MEDIA_BITSTREAM_AUDIO_STOP_REQ,
    MSG_ID_MEDIA_BITSTREAM_AUDIO_FINISHED_REQ,
    MSG_ID_MEDIA_BITSTREAM_AUDIO_GET_PLAY_TIME_REQ,
    MSG_ID_MEDIA_BITSTREAM_AUDIO_CALLBACK_IND,
    MSG_ID_MEDIA_BITSTREAM_AUDIO_DRIVER_EVENT_IND,
    MSG_ID_MEDIA_BITSTREAM_RECORD_OPEN_REQ,
    MSG_ID_MEDIA_BITSTREAM_RECORD_CLOSE_REQ,
    MSG_ID_MEDIA_BITSTREAM_RECORD_START_REQ,
    MSG_ID_MEDIA_BITSTREAM_RECORD_STOP_REQ,
    MSG_ID_MEDIA_BITSTREAM_RECORD_SET_REQ,
    MSG_ID_MEDIA_BITSTREAM_RECORD_GET_REQ,
    MSG_ID_MEDIA_BITSTREAM_RECORD_CALLBACK_IND,
    MSG_ID_MEDIA_BITSTREAM_RECORD_DRIVER_EVENT_IND,
    MSG_ID_MED_BITSTREAM_CODE_END = MSG_ID_MEDIA_BITSTREAM_RECORD_DRIVER_EVENT_IND,

    MSG_ID_MED_CODE_END = MSG_ID_MED_BITSTREAM_CODE_END,

    MSG_ID_L4AUD_AUDIO_PLAY_BY_IVTTS_REQ,
    MSG_ID_L4AUD_AUDIO_STOP_BY_IVTTS_REQ,


 

#line 1097 "config\\include\\app\\user_msgid_app.h"

    MSG_ID_MED_CODE_CHECK_POINT,



 

 
#line 1 "interface\\media\\med_v_sap.h"

































 
 







 

 

















































































































 

    
     
    MSG_ID_MEDIA_VISUAL_RECORD_REQ = MSG_ID_MED_V_CODE_BEGIN,
    MSG_ID_MEDIA_VISUAL_RECORD_CNF,
    MSG_ID_MEDIA_ENCODE_VISUAL_DATA_IND,
    MSG_ID_MEDIA_ENCODE_META_DATA_IND,
    MSG_ID_MEDIA_VISUAL_RECORD_FINISH_IND,
    MSG_ID_MEDIA_VISUAL_STOP_REQ,
    MSG_ID_MEDIA_VISUAL_STOP_CNF,
    MSG_ID_MEDIA_VISUAL_PLAY_REQ,
    MSG_ID_MEDIA_VISUAL_PLAY_CNF,
    MSG_ID_MEDIA_DECODE_VISUAL_DATA_IND,
    MSG_ID_MEDIA_VISUAL_PLAY_FINISH_IND,
    MSG_ID_MEDIA_VISUAL_SEEK_REQ,
    MSG_ID_MEDIA_VISUAL_SEEK_CNF,
    MSG_ID_MEDIA_VISUAL_FILE_MERGE_REQ,
    MSG_ID_MEDIA_VISUAL_FILE_MERGE_CNF,

    MSG_ID_MEDIA_VISUAL_MP4_DECODE_VISUAL_DATA_IND,
    MSG_ID_MEDIA_VISUAL_MTK_MP4_BEGIN = MSG_ID_MEDIA_VISUAL_MP4_DECODE_VISUAL_DATA_IND,

    MSG_ID_MEDIA_VISUAL_MP4_PLAY_REQ,
    MSG_ID_MEDIA_VISUAL_MP4_PLAY_CNF,
    MSG_ID_MEDIA_VISUAL_MP4_STOP_REQ,
    MSG_ID_MEDIA_VISUAL_MP4_STOP_CNF,
    MSG_ID_MEDIA_VISUAL_MP4_CLOSE_REQ,
    MSG_ID_MEDIA_VISUAL_MP4_CLOSE_CNF,
    MSG_ID_MEDIA_VISUAL_MP4_SEEK_CNF,
    MSG_ID_MEDIA_VISUAL_MP4_ERROR_RECOVER_IND,
    
    MSG_ID_MEDIA_VISUAL_MP4_PLAY_FINISH_IND,
    MSG_ID_MEDIA_VISUAL_MTK_MP4_END = MSG_ID_MEDIA_VISUAL_MP4_PLAY_FINISH_IND,

    MSG_ID_MEDIA_VISUAL_MJPG_PLAY_REQ,
    MSG_ID_MEDIA_VISUAL_MJPG_BEGIN = MSG_ID_MEDIA_VISUAL_MJPG_PLAY_REQ,
    MSG_ID_MEDIA_VISUAL_MJPG_PLAY_CNF,
    MSG_ID_MEDIA_VISUAL_MJPG_STOP_REQ,
    MSG_ID_MEDIA_VISUAL_MJPG_STOP_CNF,
    MSG_ID_MEDIA_VISUAL_MJPG_PLAY_FINISH_IND,
    MSG_ID_MEDIA_VISUAL_MJPG_END = MSG_ID_MEDIA_VISUAL_MJPG_PLAY_FINISH_IND,

    MSG_ID_MEDIA_VISUAL_TEMP_1,
    MSG_ID_MEDIA_VISUAL_TEMP_2, 
    MSG_ID_MEDIA_VISUAL_END = MSG_ID_MEDIA_VISUAL_TEMP_2,
    MSG_ID_MEDIA_V_AUDIO_BEGIN,
    MSG_ID_MEDIA_AUDIO_START_SEEK_REQ,
    MSG_ID_MEDIA_AUDIO_STOP_SEEK_REQ,
    MSG_ID_MEDIA_AUDIO_SEEK_DONE_IND,
    MSG_ID_MEDIA_AUDIO_START_BUILD_CACHE_ASYNC_REQ,
    MSG_ID_MEDIA_AUDIO_CLOSE_BUILD_CACHE_ASYNC_REQ,
    MSG_ID_MEDIA_AUDIO_START_BUILD_CACHE_REQ,
    MSG_ID_MEDIA_AUDIO_STOP_BUILD_CACHE_REQ,
    MSG_ID_MEDIA_AUDIO_CLOSE_BUILD_CACHE_REQ,
    MSG_ID_MEDIA_AUDIO_RESET_BUILD_CACHE_VARS_REQ,
    MSG_ID_MEDIA_AUDIO_BUILD_CACHE_FAIL_IND,
    MSG_ID_MEDIA_V_RUN_LOW_PRIORITY_REQ,
    MSG_ID_MEDIA_V_RUN_LOW_PRIORITY_CNF,
    MSG_ID_MEDIA_V_AUDIO_START_RECORD_REQ,
    MSG_ID_MEDIA_V_AUDIO_STOP_RECORD_REQ,
    MSG_ID_MEDIA_V_AUDIO_STOP_RECORD_CNF,
    MSG_ID_MEDIA_V_AUDIO_PAUSE_RECORD_REQ,
    MSG_ID_MEDIA_V_AUDIO_PAUSE_RECORD_CNF,
    MSG_ID_MEDIA_V_AUDIO_RESUME_RECORD_REQ,
    MSG_ID_MEDIA_V_AUDIO_RESUME_RECORD_CNF,    
    MSG_ID_MEDIA_V_AUDIO_READ_DATA_IND,
    MSG_ID_MEDIA_V_AUDIO_RECORD_ERROR_IND,
    MSG_ID_MEDIA_V_AUDIO_BGSND_PLAY_REQ,
    MSG_ID_MEDIA_V_AUDIO_BGSND_STOP_REQ,
    MSG_ID_MEDIA_V_AUDIO_BGSND_STOP_PLAY_CNF,
    MSG_ID_MEDIA_V_AUDIO_BGSND_PROCESS_EVENT_IND,
    MSG_ID_MEDIA_V_AUDIO_BGSND_FINISH_IND,
    MSG_ID_MED_V_CODE_END = MSG_ID_MEDIA_V_AUDIO_BGSND_FINISH_IND,
    MSG_ID_MEDIA_V_STREAM_REC_BEGIN,
    MSG_ID_MEDIA_V_STREAM_REC_PUT_BUFFER_REQ,
    MSG_ID_MEDIA_V_STREAM_REC_PUT_BUFFER_RSP,
    MSG_ID_MEDIA_V_STREAM_REC_FLUSH_REQ,
    MSG_ID_MEDIA_V_STREAM_REC_SAVE_REQ,
    MSG_ID_MEDIA_V_STREAM_REC_SAVE_IND,
    MSG_ID_MEDIA_V_STREAM_REC_INIT_REQ,
    MSG_ID_MEDIA_V_STREAM_REC_END = MSG_ID_MEDIA_V_STREAM_REC_INIT_REQ,
    MSG_ID_MEDIA_META_PARSE_REQ,
    MSG_ID_MEDIA_META_PARSE_CNF,   
    

#line 1108 "config\\include\\app\\user_msgid_app.h"

    MSG_ID_MED_V_CODE_CHECK_POINT,



 

 
#line 1 "interface\\misc_ps\\obex_sap.h"

































 
 







 

 













































 
 
  
	MSG_ID_OBEX_CONNECT_REQ = MSG_ID_OBEX_CODE_BEGIN,
      
   MSG_ID_OBEX_CONNECT_CNF,
   MSG_ID_OBEX_CONNECT_IND,
   MSG_ID_OBEX_CONNECT_RSP,
   MSG_ID_OBEX_DISCONNECT_REQ,
   MSG_ID_OBEX_DISCONNECT_IND,
   MSG_ID_OBEX_PUT_OBJECT_REQ,
   MSG_ID_OBEX_PUT_OBJECT_CNF,
   MSG_ID_OBEX_PUT_OBJECT_IND,
   MSG_ID_OBEX_PUT_OBJECT_RSP,
   MSG_ID_OBEX_GET_OBJECT_REQ,
   MSG_ID_OBEX_GET_OBJECT_CNF,
   MSG_ID_OBEX_GET_OBJECT_IND,
   MSG_ID_OBEX_GET_OBJECT_RSP,

   MSG_ID_OBEX_CLOSE_REQ,
   MSG_ID_OBEX_LINK_REQ,
   MSG_ID_OBEX_UNLINK_REQ,
   MSG_ID_OBEX_BIND_REQ,
   MSG_ID_OBEX_CONN_REQ,
   MSG_ID_OBEX_DISC_REQ,
   MSG_ID_OBEX_GET_REQ,
   MSG_ID_OBEX_PUT_REQ,
   MSG_ID_OBEX_DELETE_REQ,
   MSG_ID_OBEX_SETPATH_REQ,
   MSG_ID_OBEX_ACCEPT_REQ,
   MSG_ID_OBEX_ABORT_REQ,
   MSG_ID_OBEX_CONTINUE_REQ,
   MSG_ID_OBEX_EVENT_IND,
   
   MSG_ID_OBEX_CODE_END = MSG_ID_OBEX_EVENT_IND,

#line 1119 "config\\include\\app\\user_msgid_app.h"

    MSG_ID_OBEX_CODE_CHECK_POINT,



 

 
#line 1 "interface\\hal\\video\\vcodec_sap.h"

































 
 







 

 










































 





 

 
MSG_ID_VSD_DATA_IND_BEGIN = MSG_ID_VCODEC_CODE_BEGIN,
MSG_ID_VSD_DATA_IND,
MSG_ID_VCODEC_CODE_END = MSG_ID_VSD_DATA_IND,
 

#line 1129 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_VCODEC_CODE_CHECK_POINT,



 

 
#line 1 "interface\\hal\\peripheral\\drv_sap.h"

































 








































































































































































































































































































 

 
MSG_ID_UART_READY_TO_READ_IND = DRIVER_MSG_CODE_BEGIN,
MSG_ID_UART_READY_TO_WRITE_IND,
MSG_ID_UART_DSR_CHANGE_IND,
MSG_ID_UART_ESCAPE_DETECTED_IND,
MSG_ID_UART_PLUGIN_IND,
MSG_ID_UART_PLUGOUT_IND,
 
MSG_ID_BMT_CHARGER_IND,
MSG_ID_BMT_ADC_DATA_REQ,
MSG_ID_BMT_ADC_DATA_CONF,
MSG_ID_BMT_LEAVE_PRECHARGE_IND,

MSG_ID_BMT_ADC_MEASURE_DONE_CONF,
MSG_ID_BMT_ADC_ADD_ITEM_REQ,
MSG_ID_BMT_ADC_REMOVE_ITEM_REQ,
MSG_ID_BMT_ADC_MODIFY_PARAMETERS_REQ,

 
MSG_ID_AUX_PLUGIN,
MSG_ID_AUX_PLUGOUT,
MSG_ID_AUX_DETECT,    
MSG_ID_AUX_CALL_SETUP_REQ_IND, 
MSG_ID_AUX_CALL_CONNECT_REQ_IND,
MSG_ID_AUX_CALL_DISCONNECT_REQ_IND,
MSG_ID_AUX_ID,
MSG_ID_READ_ALL_ADC_CHANNEL_REQ,
MSG_ID_ADC_ALL_CHANNEL_CONF,
MSG_ID_AUX_AUDIO_OPEN,
MSG_ID_AUX_AUDIO_CLOSED,


 
MSG_ID_USB_A_PLUGIN_IND,
MSG_ID_USB_A_PLUGOUT_IND,
MSG_ID_USB_B_PLUGIN_IND,
MSG_ID_USB_B_PLUGOUT_IND,
MSG_ID_DRVUEM_USBCFG_REQ,
MSG_ID_DRVUEM_USBCFG_CNF,
MSG_ID_USBD_START_HNP,
MSG_ID_SRP_INIT,
MSG_ID_OTG_DISPLAY_IND,
MSG_ID_DRVMMI_MS_INIT_DONE,

MSG_ID_USB_MSDRV_RESET_IND,				 
MSG_ID_USB_MSDRV_REC_DONE_CONF,
MSG_ID_USB_MSDRV_TRX_DONE_CONF,
MSG_ID_USB_MSDRV_CLEAR_STALL_REQ,
MSG_ID_USB_MSDRV_REMOUNT_REQ,
MSG_ID_USB_MSHOST_START_IND,
MSG_ID_USB_MSHOST_QUERY_IND,
MSG_ID_USB_MSHOST_CLEAR_STALL_IND,
MSG_ID_USB_HOST_ATTACH_IND,
MSG_ID_OTG_MS_INSERT_IND,
MSG_ID_OTG_MS_REMOVE_IND,
MSG_ID_OTG_CARD_DETECT_IND,
MSG_ID_OTG_HDLR_IND,
MSG_ID_USB_FT_IND,					 
MSG_ID_USB_FT_START_REQ,
MSG_ID_USB_FT_TX_DONE_IND,
MSG_ID_USB_FT_RX_DATA_IND,


MSG_ID_RNDIS_USB_CONFIG_REQ,   
MSG_ID_RNDIS_USB_CONFIG_CNF,
MSG_ID_RNDIS_USB_DETACH_REQ,
MSG_ID_RNDIS_USB_DETACH_CNF,
MSG_ID_RNDIS_USB_ENUM_IND,
MSG_ID_CTRL_UART_READY_TO_READ_IND,
MSG_ID_CTRL_UART_READY_TO_WRITE_IND,


MSG_ID_USB_LOGGING_START_IND,				 
MSG_ID_USB_LOGGING_RESET_IND,
MSG_ID_USB_LOGGING_CONNECT_IND,
MSG_ID_USB_LOGGING_DISCONNECT_IND,


MSG_ID_USB_TEST_START_IND,  

 
MSG_ID_USB_MED_SET_CAMERA_ATTR_REQ,
MSG_ID_USB_MED_SET_CAMERA_ATTR_CNF,
MSG_ID_MED_USB_START_VIDEO_REQ, 
MSG_ID_USB_MED_START_VIDEO_CNF,
MSG_ID_USB_MED_CHANGE_VIDEO_IND,
MSG_ID_USB_MED_START_STILL_IND,
MSG_ID_USB_MED_START_VIDEO_IND,
MSG_ID_MED_USB_DEVICE_STILL_REQ,
MSG_ID_USB_MED_DEVICE_STILL_CNF,
MSG_ID_MED_USB_PAUSE_REQ,
MSG_ID_USB_MED_PAUSE_CNF,
MSG_ID_MED_USB_RESUME_VIDEO_REQ,
MSG_ID_USB_MED_RESUME_VIDEO_CNF,
MSG_ID_USB_MED_STOP_IND,
MSG_ID_USB_MED_ABORT_IND,
MSG_ID_MED_USB_STOP_REQ,
MSG_ID_USB_MED_STOP_CNF,
MSG_ID_MED_USB_DISCONNECT_REQ,
MSG_ID_MED_USB_CONNECT_REQ,



 
MSG_ID_USB_ENUM_DONE,
MSG_ID_USB_VIDEO_COMPLETE,
MSG_ID_USB_VIDEO_DMA_DONE,
MSG_ID_USB_VIDEO_CHANGE_SIZE,
MSG_ID_USB_STILL_CAPTURE,
MSG_ID_USB_STILL_COMPLETE,
MSG_ID_USB_VIDEO_STILL_DMA_DONE,
MSG_ID_USB_VIDEO_STILL_DMA_PARTIAL,
MSG_ID_USB_VIDEO_INCALL_DMA_DONE,
MSG_ID_USB_VIDEO_INCALL_TIMEOUT,
MSG_ID_USB_VIDEO_INCALL_CHANGE_SIZE,
MSG_ID_USB_VIDEO_ABORT,

 
MSG_ID_USB_MMI_DPS_DISCOVERY_IND,
MSG_ID_USB_MMI_DPS_HREQUEST_IND,
MSG_ID_MMI_USB_DPS_HREQUEST_CONF,
MSG_ID_USB_MMI_DPS_HRESPONSE_IND,
MSG_ID_MMI_USB_DPS_HRESPONSE_CONF,
MSG_ID_MMI_USB_DPS_DREQUEST_REQ,
MSG_ID_USB_MMI_DPS_DREQUEST_CONF,
MSG_ID_MMI_USB_DPS_DRESPONSE_REQ,
MSG_ID_USB_MMI_DPS_DRESPONSE_CONF,
MSG_ID_USB_MMI_PTP_CONNECT_TO_PC_IND,
MSG_ID_USB_MMI_PTP_OPEN_FILE_FAIL_IND,
MSG_ID_USB_MMI_PTP_HOST_RESET_IND,
MSG_ID_MMI_USB_PTP_HOST_RESET_CNF,
MSG_ID_MMI_USB_START_JOB_REQ,
MSG_ID_MMI_USB_CLOSE_JOB_REQ,

 
MSG_ID_USB_PTPIMAGE_DATA_RX_DONE_CONF,
MSG_ID_USB_PTPIMAGE_DATA_TX_DONE_CONF,
MSG_ID_USB_PTPIMAGE_RESET_IND,

 
MSG_ID_USB_MTP_ENABLE_REQ,
MSG_ID_USB_MTP_ENABLE_RSP,
MSG_ID_USB_MTP_DISABLE_REQ,
MSG_ID_USB_MTP_DISABLE_RSP,
MSG_ID_USB_MTP_OPERATION_REQ,
MSG_ID_USB_MTP_OPERATION_RSP,
MSG_ID_USB_MTP_EVENT_IND,

 
MSG_ID_USB_MTPIMAGE_DATA_RX_DONE_CONF,
MSG_ID_USB_MTPIMAGE_DATA_TX_DONE_CONF,
MSG_ID_USB_MTPIMAGE_RESET_IND,
MSG_ID_USB_MTPIMAGE_CANCEL_IND,

 
MSG_ID_MSDC_CARD_DETECT_IND,
MSG_ID_SIM_PLUS_DETECT_IND,
MSG_ID_MSDC2_CARD_DETECT_IND,
MSG_ID_MSDC_CARD_DISPLAY_IND,

 
MSG_ID_BMT_USB_IND,
MSG_ID_BMT_USB_READ_CALI_DONE_IND,

 
MSG_ID_TP_EVENT_IND,
MSG_ID_TP_CALI_DONE,
MSG_ID_TP_PEN_DOWN_IND,

 
MSG_ID_TDMB_TURN_ON_REQUEST, MSG_ID_TDMB_CODE_BEGIN = MSG_ID_TDMB_TURN_ON_REQUEST,
MSG_ID_TDMB_TURN_ON_CONFIRM,
MSG_ID_TDMB_TURN_OFF_REQUEST,
MSG_ID_TDMB_TURN_OFF_CONFIRM,
MSG_ID_TDMB_SET_BAND_REQUEST,
MSG_ID_TDMB_SET_BAND_CONFIRM,
MSG_ID_TDMB_AUTO_SCAN_REQUEST,
MSG_ID_TDMB_AUTO_SCAN_CONFIRM,
MSG_ID_TDMB_STOP_AUTO_SCAN_REQUEST,
MSG_ID_TDMB_STOP_AUTO_SCAN_CONFIRM,
MSG_ID_TDMB_SET_FREQUENCY_REQUEST,
MSG_ID_TDMB_SET_FREQUENCY_CONFIRM,
MSG_ID_TDMB_SELECT_SERVICE_REQUEST,
MSG_ID_TDMB_SELECT_SERVICE_CONFIRM,
MSG_ID_TDMB_GET_SIGNAL_REQUEST,
MSG_ID_TDMB_GET_SIGNAL_CONFIRM,
MSG_ID_TDMB_START_ANNOUNCEMENT_REQUEST,
MSG_ID_TDMB_START_ANNOUNCEMENT_CONFIRM,
MSG_ID_TDMB_END_ANNOUNCEMENT_REQUEST,
MSG_ID_TDMB_END_ANNOUNCEMENT_CONFIRM,
MSG_ID_TDMB_SET_IDLE_REQUEST,
MSG_ID_TDMB_SET_IDLE_CONFIRM,
MSG_ID_TDMB_MCI_RECONFIG_INDICATION,
MSG_ID_TDMB_GET_ENSEMBLE_INFO_REQUEST,
MSG_ID_TDMB_GET_ENSEMBLE_INFO_CONFIRM,
MSG_ID_TDMB_DEMOD_MCI_RECONFIG_INDICATION,
MSG_ID_TDMB_DEMOD_ANNOUNCEMENT_INDICATION,
MSG_ID_TDMB_ANNOUNCEMENT_INDICATION,
MSG_ID_TDMB_SET_ANNOUNCEMENT_REQUEST,
MSG_ID_TDMB_SET_ANNOUNCEMENT_CONFIRM,
MSG_ID_TDMB_DATA_INDICATION,
MSG_ID_TDMB_SERVICE_END_INDICATION,
MSG_ID_TDMB_FIC_IND_INDICATION,
MSG_ID_TDMB_MSC_IND_INDICATION,
MSG_ID_TDMB_INT_ARRIVE,
MSG_ID_TDMB_SIGNAL_STATUS,
MSG_ID_TDMB_GET_TS_DATA_ERROR,
MSG_ID_TDMB_SET_ENSEMBLE,
MSG_ID_TDMB_CODE_END = MSG_ID_TDMB_SET_ENSEMBLE,

 
MSG_ID_CMMB_TURN_ON_REQUEST, MSG_ID_CMMB_CODE_BEGIN = MSG_ID_CMMB_TURN_ON_REQUEST,
MSG_ID_CMMB_TURN_ON_CONFIRM,
MSG_ID_CMMB_TURN_OFF_REQUEST,
MSG_ID_CMMB_TURN_OFF_CONFIRM,
MSG_ID_CMMB_SET_BAND_REQUEST,
MSG_ID_CMMB_SET_BAND_CONFIRM,
MSG_ID_CMMB_AUTO_SCAN_REQUEST,
MSG_ID_CMMB_AUTO_SCAN_CONFIRM,
MSG_ID_CMMB_STOP_AUTO_SCAN_REQUEST,
MSG_ID_CMMB_STOP_AUTO_SCAN_CONFIRM,
MSG_ID_CMMB_SET_FREQUENCY_REQUEST,
MSG_ID_CMMB_SET_FREQUENCY_CONFIRM,
MSG_ID_CMMB_SELECT_SERVICE_REQUEST,
MSG_ID_CMMB_SELECT_SERVICE_CONFIRM,
MSG_ID_CMMB_PAUSE_SERVICE_REQUEST,
MSG_ID_CMMB_PAUSE_SERVICE_CONFIRM,
MSG_ID_CMMB_GET_SIGNAL_REQUEST,
MSG_ID_CMMB_GET_SIGNAL_CONFIRM,
MSG_ID_CMMB_GET_TABLE_REQUEST,
MSG_ID_CMMB_GET_TABLE_CONFIRM,
MSG_ID_CMMB_STREAM_INFO_TABLE_UPDATE_INDICATION,
MSG_ID_CMMB_CONTROL_INFO_TABLE_UPDATE_INDICATION,
MSG_ID_CMMB_SAVE_STREAM_TO_FILE_REQUEST,
MSG_ID_CMMB_SAVE_STREAM_TO_FILE_CONFIRM,
MSG_ID_CMMB_STOP_SAVE_STREAM_TO_FILE_REQUEST,
MSG_ID_CMMB_STOP_SAVE_STREAM_TO_FILE_CONFIRM,
MSG_ID_CMMB_GET_STREAM_FROM_FILE_REQUEST,
MSG_ID_CMMB_GET_STREAM_FROM_FILE_CONFIRM,
MSG_ID_CMMB_STOP_GET_STREAM_FROM_FILE_REQUEST,
MSG_ID_CMMB_STOP_GET_STREAM_FROM_FILE_CONFIRM,
MSG_ID_CMMB_INT_ARRIVE,
MSG_ID_CMMB_SET_EMM_REQUEST,     
MSG_ID_CMMB_SET_EMM_CONFIRM,     

MSG_ID_CMMB_DATA_INDICATION,
MSG_ID_CMMB_UAM_CHECK_SUPPORT_REQUEST,
MSG_ID_CMMB_UAM_CHECK_SUPPORT_CONFIRM,
MSG_ID_CMMB_UAM_SET_SIMTYPE_REQUEST,
MSG_ID_CMMB_UAM_SET_SIMTYPE_CONFIRM,
MSG_ID_CMMB_UAM_GET_CMMBSN_REQUEST,
MSG_ID_CMMB_UAM_GET_CMMBSN_CONFIRM,
MSG_ID_CMMB_UAM_CHECK_GBAISNEED_REQUEST,
MSG_ID_CMMB_UAM_CHECK_GBAISNEED_CONFIRM,
MSG_ID_CMMB_UAM_GET_KEY_REQUEST,
MSG_ID_CMMB_UAM_GET_KEY_CONFIRM,
MSG_ID_CMMB_UAM_SET_KEY_REQUEST,
MSG_ID_CMMB_UAM_SET_KEY_CONFIRM,
MSG_ID_CMMB_UAM_CHECK_MSKISVALID_REQUEST,
MSG_ID_CMMB_UAM_CHECK_MSKISVALID_CONFIRM,
MSG_ID_CMMB_UAM_MSK_CHANGE_INDICATION,
MSG_ID_CMMB_UAM_ERROR_INDICATION,
MSG_ID_CMMB_CODE_END,

 
MSG_ID_MBBMS_DRV_INIT,
MSG_ID_MBBMS_DRV_DEINIT,

 
MSG_ID_BTIF_READY_TO_READ_IND,
MSG_ID_BTIF_READY_TO_WRITE_IND,

 
MSG_ID_SRV_SENSOR_PXS_DETECT_OBJECT_IND,

 
MSG_ID_SLT20_CMD,
MSG_ID_SLT10_CMD,
#line 1138 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_DRIVER_CODE_CHECK_POINT,
#line 1145 "config\\include\\app\\user_msgid_app.h"
 

 
 

    



    MSG_ID_DPS_CODE_CHECK_POINT,
#line 1163 "config\\include\\app\\user_msgid_app.h"
 

 





    MSG_ID_UDPS_CODE_CHECK_POINT,
#line 1178 "config\\include\\app\\user_msgid_app.h"
 

 


#line 1 "interface\\hal\\video\\vcodec_v2_sap.h"

































 
 







 

 














































 





 

    
    MSG_ID_DECODER_DATA_IND = MSG_ID_VCODEC_V2_CODE_BEGIN,
    MSG_ID_ENCODER_DATA_IND,
    MSG_ID_MPLVC_DATA_IND,
    MSG_ID_VCODEC_V2_CODE_END = MSG_ID_MPLVC_DATA_IND,
    

#line 1184 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_VCODEC_V2_CODE_CHECK_POINT,




 

 


#line 1 "interface\\hal\\video\\vfile_sap.h"

































 
 







 

 


















































 




 

    
    MSG_ID_VFILE_TEST = MSG_ID_VFILE_CODE_BEGIN,
    MSG_ID_SOURCE_PROVIDER_DATA_IND,
    MSG_ID_AVI_FILE_WRITER_DATA_IND,
    MSG_ID_MP4_FILE_WRITER_DATA_IND,
    MSG_ID_VFILE_CODE_END = MSG_ID_MP4_FILE_WRITER_DATA_IND,
    

#line 1195 "config\\include\\app\\user_msgid_app.h"
    MSG_ID_VFILE_CODE_CHECK_POINT,




 

 




    MSG_ID_MEUT_MSG_CODE_CHECK_POINT,



 

 
#line 1 "interface\\mmi\\fmt_sap.h"

































 








 

 























 

	 
   MSG_ID_FMT_STARTUP_REQ = MSG_ID_FMT_MSG_CODE_BEGIN,
   MSG_ID_FMT_MMI_CARD_PLUG_IN_IND,
   MSG_ID_FMT_MMI_CARD_PLUG_OUT_IND,
   MSG_ID_FMT_MMI_OTG_DISPLAY_IND,
   MSG_ID_MMI_FMT_GET_MSDC_STATUS_REQ,
   MSG_ID_MMI_FMT_GET_MSDC_STATUS_RSP,

   MSG_ID_FMT_ADV_LOAD_FOLDER_REQ,
   MSG_ID_FMT_ADV_LOAD_FOLDER_RSP,
   MSG_ID_FMT_ADV_LOAD_FOLDER_PROGRESS_IND,
   MSG_ID_FMT_ADV_DELETE_REQ,
   MSG_ID_FMT_ADV_DELETE_RSP,
   MSG_ID_FMT_ADV_COPY_REQ,
   MSG_ID_FMT_ADV_COPY_RSP,
   MSG_ID_FMT_ADV_CREATE_FOLDER_REQ,
   MSG_ID_FMT_ADV_CREATE_FOLDER_RSP,
   MSG_ID_FMT_ADV_GET_FOLDER_SIZE_REQ,
   MSG_ID_FMT_ADV_GET_FOLDER_SIZE_IND,
   MSG_ID_FMT_ADV_GET_FOLDER_SIZE_RSP,

    
   MSG_ID_MMI_FMT_LOAD_DIR_REQ,
   MSG_ID_MMI_FMT_LOAD_DIR_RSP,
   MSG_ID_MMI_FMT_LOAD_DIR_PROGRESS_IND,
   
   MSG_ID_MMI_FMT_COPY_REQ,
   MSG_ID_MMI_FMT_COPY_RSP,
   MSG_ID_MMI_FMT_DELETE_REQ,
   MSG_ID_MMI_FMT_DELETE_RSP,
   MSG_ID_MMI_FMT_DELETE_RO_REQ,
   MSG_ID_MMI_FMT_DELETE_RO_RSP,   
   MSG_ID_FMT_PROCESS_DRM_REQ,
   MSG_ID_MMI_FMT_FORMAT_REQ,
   MSG_ID_MMI_FMT_FORMAT_RSP,
   MSG_ID_MMI_FMT_CHECK_DRIVE_REQ,
   MSG_ID_MMI_FMT_CHECK_DRIVE_RSP,
   MSG_ID_MMI_FMT_UNMOUNT_REQ,
   MSG_ID_MMI_FMT_UNMOUNT_RSP,
   MSG_ID_FMT_MMI_SIM_PLUS_DETECT_IND,
   MSG_ID_MMI_FMT_FOTA_INIT_REQ,
   MSG_ID_MMI_FMT_FOTA_INIT_RSP,   
   MSG_ID_MMI_FMT_FOTA_WRITE_DATA_REQ,
   MSG_ID_MMI_FMT_FOTA_WRITE_DATA_RSP,   
   MSG_ID_MMI_FMT_FOTA_FINALIZE_REQ,
   MSG_ID_MMI_FMT_FOTA_FINALIZE_RSP,
   MSG_ID_MMI_FMT_MSDC_CARD_DETECT_IND,
   MSG_ID_MMI_FMT_CALCULATE_DONE,

    
   MSG_ID_MMI_FMT_TEST_START_REQ,
   MSG_ID_MMI_FMT_TEST_START_CNF,
   MSG_ID_MMI_FMT_TEST_FINISH_IND,
   MSG_ID_MMI_FMT_TEST_FINISH_CNF,
   MSG_ID_MMI_FMT_TEST_SAVE_REQ,
   MSG_ID_MMI_FMT_TEST_SAVE_CNF,
   
   MSG_ID_MMI_FMT_OP_ABORT_PROCESSING_IND,

   MSG_ID_MMI_FMT_CARD_READY_IND,

   MSG_ID_FMT_MSG_CODE_END = MSG_ID_MMI_FMT_OP_ABORT_PROCESSING_IND,
   
    
   

#line 1217 "config\\include\\app\\user_msgid_app.h"

    MSG_ID_FMT_CODE_CHECK_POINT,




 

 
#line 1233 "config\\include\\app\\user_msgid_app.h"
 
 
#line 1 "mre\\commoninc\\mre_sap.h"

































 






























 


  
    
    MSG_ID_MMI_MRE_CMD_REQ = MSG_ID_MRE_CODE_BEGIN, 
    MSG_ID_MMI_MRE_CMD_RSP,
    
#line 1238 "config\\include\\app\\user_msgid_app.h"

    MSG_ID_MRE_CODE_CHECK_POINT,



 


 
#line 1 "interface\\media\\med_gps.h"
MSG_ID_FUN_TURN_ON_GPS_REQ = MSG_ID_FUN_GPS_CODE_BEGIN,
MSG_ID_FUN_TURN_OFF_GPS_REQ,
#line 1251 "config\\include\\app\\user_msgid_app.h"

    MSG_ID_FUN_GPS_CODE_CHECK_POINT,




#line 1267 "config\\include\\app\\user_msgid_app.h"

#line 1278 "config\\include\\app\\user_msgid_app.h"

#line 1 "interface\\media\\med_rfid.h"
MSG_ID_FUN_TURN_ON_RFID_REQ = MSG_ID_RFID_CODE_BEGIN,
MSG_ID_FUN_TURN_OFF_RFID_REQ,
#line 1283 "config\\include\\app\\user_msgid_app.h"

    MSG_ID_RFID_CODE_CHECK_POINT,




#line 1 "interface\\media\\med_rfid_eint.h"
MSG_ID_FUN_TURN_ON_RFID_EINT_REQ = MSG_ID_RFID_EINT_CODE_BEGIN,
MSG_ID_FUN_TURN_OFF_RFID_EINT_REQ,
#line 1292 "config\\include\\app\\user_msgid_app.h"

    MSG_ID_RFID_EINT_CODE_CHECK_POINT,








 


#line 1106 "config\\include\\hal\\stack_msgs.h"

   MSG_ID_CUSTOM2_CUSTOM1,
   MSG_ID_CUSTOM1_CUSTOM2,

MSG_ID_TTSPLAYER_SERVICEOPEN,
MSG_ID_TTSPLAYER_SERVICECLOSE,
MSG_ID_TTSPLAYER_PLAYTEXT,
MSG_ID_TTSPLAYER_STARTSYN,
MSG_ID_TTSPLAYER_SYNEND,
MSG_ID_TTSPLAYER_MMI_START_TTS,
MSG_ID_TTSPLAYER_MMI_STOP_TTS,
#line 1123 "config\\include\\hal\\stack_msgs.h"
   MSG_ID_END,



} msg_type;

   
typedef unsigned int check_msg_type[65535 - MSG_ID_END];




 
typedef unsigned int tst_ctrl_buf_limiation[13153 - 8 * LAST_SAP_CODE - 17 * END_OF_MOD_ID];



































 
#line 1 "config\\include\\hal\\user_msgid_hal.h"

































 








































































































































































































































































































































































































































































































































































































































































































































































































































































































 







 






















 
 
#line 947 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_GPUBOUND[MSG_ID_GPU_CODE_BEGIN + 100 - MSG_ID_GPU_CODE_CHECK_POINT];

 

 
#line 959 "config\\include\\hal\\user_msgid_hal.h"
    
    typedef unsigned int CHECK_DTBOUND[MSG_ID_DT_CODE_BEGIN + 100 - MSG_ID_DT_CODE_CHECK_POINT];

 

 
#line 971 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_MMBOUND[MSG_ID_MM_CODE_BEGIN + 100 - MSG_ID_MM_CODE_CHECK_POINT];


 

 
#line 984 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_CCBOUND[MSG_ID_CC_CODE_BEGIN + 100 - MSG_ID_CC_CODE_CHECK_POINT];

 


 
#line 997 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_CISSBOUND[MSG_ID_CISS_CODE_BEGIN + 100 - MSG_ID_CISS_CODE_CHECK_POINT];

 

 
#line 1009 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_SMSBOUND[MSG_ID_SMS_CODE_BEGIN + 100 - MSG_ID_SMS_CODE_CHECK_POINT];

 

 
#line 1021 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_SIM_PUBLICBOUND[MSG_ID_SIM_PUBLIC_CODE_BEGIN + 50 - MSG_ID_SIM_PUBLIC_CODE_CHECK_POINT];


#line 1031 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_SIM_PSBOUND[MSG_ID_SIM_PS_CODE_BEGIN + 170 - MSG_ID_SIM_PS_CODE_CHECK_POINT];


 

 
#line 1044 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_L4_PUBLICBOUND[MSG_ID_L4_PUBLIC_CODE_BEGIN + 50 - MSG_ID_L4_PUBLIC_CODE_CHECK_POINT];

 

 
 
#line 1057 "config\\include\\hal\\user_msgid_hal.h"

 
 
          
                                
   
   
   
   
   
   
   
   
   
   
   

    






 

     
   typedef unsigned int CHECK_L4BOUND[MSG_ID_L4C_CODE_BEGIN + 400 + 100 + 100 + 100 + 800 - MSG_ID_L4_CODE_CHECK_POINT]; 




 
#line 1097 "config\\include\\hal\\user_msgid_hal.h"
    
    
    
    
    
    
    
    
    
    
    

    typedef unsigned int CHECK_RRBOUND[MSG_ID_RLC_CODE_BEGIN + 1300 - MSG_ID_RR_CODE_CHECK_POINT];

 

 
#line 1121 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_LLCBOUND[MSG_ID_LLC_CODE_BEGIN + 100 - MSG_ID_LLC_CODE_CHECK_POINT];

 

 
#line 1133 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_P2PBOUND[MSG_ID_P2P_CODE_BEGIN + 100 - MSG_ID_P2P_CODE_CHECK_POINT];

 

 
#line 1145 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_SNDBOUND[MSG_ID_SND_CODE_BEGIN + 100 - MSG_ID_SND_CODE_CHECK_POINT];

 

 
#line 1157 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_SMBOUND[MSG_ID_SM_CODE_BEGIN + 100 - MSG_ID_SM_CODE_CHECK_POINT];

 

 
#line 1169 "config\\include\\hal\\user_msgid_hal.h"
    

     
     
    
    
     
    
    
    

    typedef unsigned int CHECK_DATABOUND[MSG_ID_TDT_CODE_BEGIN + 300 - MSG_ID_DATA_CODE_CHECK_POINT];

 


 
#line 1192 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_PS_PUBLIC_VT_MSGBOUND[MSG_ID_PS_PUBLIC_VT_MSG_CODE_BEGIN + 30 - MSG_ID_PS_PUBLIC_VT_MSG_CODE_CHECK_POINT];

 

 
#line 1204 "config\\include\\hal\\user_msgid_hal.h"
    
    
    
    typedef unsigned int CHECK_VTBOUND[MSG_ID_VT_CODE_BEGIN + 70 - MSG_ID_VT_CODE_CHECK_POINT];

 






 
 
#line 1224 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_IRDABOUND[MSG_ID_IRDA_CODE_BEGIN + 100 - MSG_ID_IRDA_CODE_CHECK_POINT];

 

 
#line 1235 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_IRCOMMBOUND[MSG_ID_IRCOMM_CODE_BEGIN + 100 - MSG_ID_IRCOMM_CODE_CHECK_POINT];

 

 




    typedef unsigned int CHECK_NVRAMBOUND[MSG_ID_NVRAM_CODE_BEGIN + 100 - MSG_ID_NVRAM_CODE_CHECK_POINT];

 

 




    
    
    
    typedef unsigned int CHECK_L1BOUND[MSG_ID_L1_CODE_BEGIN + 200 - MSG_ID_L1_CODE_CHECK_POINT];

 

 




    

    typedef unsigned int CHECK_HAL_L1BOUND[MSG_ID_HAL_L1_CODE_BEGIN + 20 - MSG_ID_HAL_L1_CODE_CHECK_POINT];

 

 




    
    
    
    typedef unsigned int CHECK_L1HISRBOUND[MSG_ID_L1HISR_CODE_BEGIN + 700 - MSG_ID_L1HISR_CODE_CHECK_POINT];

 

 




    
    
    
    typedef unsigned int CHECK_FTBOUND[MSG_ID_FT_CODE_BEGIN + 100 - MSG_ID_FT_CODE_CHECK_POINT];

 

 




    

    
    
    typedef unsigned int CHECK_TSTBOUND[MSG_ID_TST_CODE_BEGIN + 1200 - MSG_ID_TST_CODE_CHECK_POINT];

 


 




    
    
    
    typedef unsigned int CHECK_SYSDEBUGBOUND[MSG_ID_SYSDEBUG_CODE_BEGIN + 100 - MSG_ID_SYSDEBUG_CODE_CHECK_POINT];

 


    


 


 


 





    typedef unsigned int CHECK_VSRCBOUND[MSG_ID_VSRC_CODE_BEGIN + 100 - MSG_ID_VSRC_CODE_CHECK_POINT];


 


 




    typedef unsigned int CHECK_MEXEBOUND[MSG_ID_MEXE_CODE_BEGIN + 10 - MSG_ID_MEXE_CODE_CHECK_POINT];


 

    
 
 
#line 1363 "config\\include\\hal\\user_msgid_hal.h"
    

    typedef unsigned int CHECK_AUDIOBOUND[MSG_ID_AUDIO_MSG_CODE_BEGIN + 50 - MSG_ID_AUDIO_CODE_CHECK_POINT];


 



 




    typedef unsigned int CHECK_L1AUDIO_SPH_SRVBOUND[MSG_ID_L1AUDIO_SPH_SRV_CODE_BEGIN + 50 - MSG_ID_L1AUDIO_SPH_SRV_CODE_CHECK_POINT];

 


 
#line 1390 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_LCSP_MSGBOUND[MSG_ID_LCSP_MSG_CODE_BEGIN + 50 - MSG_ID_LCSP_MSG_CODE_CHECK_POINT];


 


 




    typedef unsigned int CHECK_FM_MSGBOUND[MSG_ID_FM_MSG_CODE_BEGIN + 20 - MSG_ID_FM_MSG_CODE_CHECK_POINT];


 

 




    typedef unsigned int CHECK_RATCMBOUND[MSG_ID_RATCM_CODE_BEGIN + 200 - MSG_ID_RATCM_CODE_CHECK_POINT];


 

 




    typedef unsigned int CHECK_RATDMBOUND[MSG_ID_RATDM_CODE_BEGIN + 100 - MSG_ID_RATDM_CODE_CHECK_POINT];


 


 
 
#line 1435 "config\\include\\hal\\user_msgid_hal.h"

 
 
          
                                
   
   
   
   
   
   
   
   
   
   
    






 

     
   typedef unsigned int CHECK_URRBOUND[MSG_ID_ADR_CODE_BEGIN + 970 - MSG_ID_URR_CODE_CHECK_POINT]; 


 
 
#line 1472 "config\\include\\hal\\user_msgid_hal.h"

 
 
          
                                
   
   
   

    






 

     
   typedef unsigned int CHECK_UL2BOUND[MSG_ID_UMAC_CODE_BEGIN + 400 - MSG_ID_UL2_CODE_CHECK_POINT]; 


 

 
 
#line 1504 "config\\include\\hal\\user_msgid_hal.h"

 
 
          
                                
   
   
   
   
   
    






 

     
   typedef unsigned int CHECK_UL2DBOUND[MSG_ID_BMC_CODE_BEGIN + 600 - MSG_ID_UL2D_CODE_CHECK_POINT]; 


 

 
#line 1537 "config\\include\\hal\\user_msgid_hal.h"
    
    
    
    

    typedef unsigned int CHECK_URR_GRRBOUND[MSG_ID_DM_CSCE_CODE_BEGIN + 500 - MSG_ID_URR_GRR_CODE_CHECK_POINT];

 

 
#line 1554 "config\\include\\hal\\user_msgid_hal.h"
    
    

    typedef unsigned int CHECK_GEMINI_URR_GRRBOUND[MSG_ID_GEMINI_UAS_CODE_BEGIN + 200 - MSG_ID_GEMINI_URR_GRR_CODE_CHECK_POINT];

 


 
#line 1569 "config\\include\\hal\\user_msgid_hal.h"
    

    typedef unsigned int CHECK_UL1BOUND[MSG_ID_UL1_MSG_CODE_BEGIN + 200 - MSG_ID_UL1_CODE_CHECK_POINT];

 

 
#line 1583 "config\\include\\hal\\user_msgid_hal.h"
    

    typedef unsigned int CHECK_UL1DATABOUND[MSG_ID_UL1DATA_MSG_CODE_BEGIN + 20 - MSG_ID_UL1DATA_CODE_CHECK_POINT];

 

 
#line 1597 "config\\include\\hal\\user_msgid_hal.h"
    

    typedef unsigned int CHECK_UL1HISRBOUND[MSG_ID_UL1HISR_MSG_CODE_BEGIN + 5 - MSG_ID_UL1HISR_CODE_CHECK_POINT];

 

 
#line 1611 "config\\include\\hal\\user_msgid_hal.h"
    
    
    typedef unsigned int CHECK_UL1CBOUND[MSG_ID_UL1C_MSG_CODE_BEGIN + 10 - MSG_ID_UL1C_CODE_CHECK_POINT];

 

 
#line 1625 "config\\include\\hal\\user_msgid_hal.h"
    

    typedef unsigned int CHECK_LL1BOUND[MSG_ID_LL1_MSG_CODE_BEGIN + 100 - MSG_ID_LL1_CODE_CHECK_POINT];

 

 
#line 1639 "config\\include\\hal\\user_msgid_hal.h"
    
    
    typedef unsigned int CHECK_UL1TSTBOUND[MSG_ID_UL1TST_MSG_CODE_BEGIN + 50 - MSG_ID_UL1TST_CODE_CHECK_POINT];

 

 

#line 1653 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_UAGPS_CPBOUND[MSG_ID_UAGPS_CP_CODE_BEGIN + 50 - MSG_ID_UAGPS_CP_CODE_CHECK_POINT];

 

 

#line 1666 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_TL1_MSGBOUND[MSG_ID_TL1_MSG_CODE_BEGIN + 200 - MSG_ID_TL1_MSG_CODE_CHECK_POINT];


#line 1675 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_TL1DATA_AST_MSGBOUND[MSG_ID_TL1DATA_AST_MSG_CODE_BEGIN + 200 - MSG_ID_TL1DATA_AST_MSG_CODE_CHECK_POINT];


#line 1684 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_TL1HISR_AST_MSGBOUND[MSG_ID_TL1HISR_AST_MSG_CODE_BEGIN + 50 - MSG_ID_TL1HISR_AST_MSG_CODE_CHECK_POINT];


#line 1693 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_TL1FTA_AST_MSGBOUND[MSG_ID_TL1FTA_AST_MSG_CODE_BEGIN + 50 - MSG_ID_TL1FTA_AST_MSG_CODE_CHECK_POINT];


 

 
#line 1705 "config\\include\\hal\\user_msgid_hal.h"
    
    
    
    

    typedef unsigned int CHECK_RSVABOUND[MSG_ID_RSVAS_CODE_BEGIN + 250 - MSG_ID_RSVA_CODE_CHECK_POINT];

 


 




    typedef unsigned int CHECK_NDIS_MSGBOUND[MSG_ID_NDIS_MSG_CODE_BEGIN + 20 - MSG_ID_NDIS_MSG_CODE_CHECK_POINT];

 

 
#line 1731 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_UPS_PUBLICBOUND[MSG_ID_UPS_PUBLIC_CODE_BEGIN + 20 - MSG_ID_UPS_PUBLIC_CODE_CHECK_POINT];

 

  
#line 1743 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_UPS_MSGBOUND[MSG_ID_UPS_MSG_CODE_BEGIN + 100 - MSG_ID_UPS_MSG_CODE_CHECK_POINT];

 

 
#line 1754 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_PS_PUBLIC_SUPL_MSGBOUND[MSG_ID_PS_PUBLIC_SUPL_MSG_CODE_BEGIN + 20 - MSG_ID_PS_PUBLIC_SUPL_MSG_CODE_CHECK_POINT];


 

 
#line 1767 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_SUPL_MSGBOUND[MSG_ID_SUPL_MSG_CODE_BEGIN + 20 - MSG_ID_SUPL_MSG_CODE_CHECK_POINT];


 

 




    
    
    
    typedef unsigned int CHECK_CMUXBOUND[MSG_ID_CMUX_CODE_BEGIN + 1100 - MSG_ID_CMUX_CODE_CHECK_POINT];

 

 
#line 1792 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_PPPBOUND[MSG_ID_PPP_CODE_BEGIN + 100 - MSG_ID_PPP_CODE_CHECK_POINT];

 

 




    
    typedef unsigned int CHECK_GPSBOUND[MSG_ID_GPS_MSG_CODE_BEGIN + 50 - MSG_ID_GPS_CODE_CHECK_POINT];


 

 




    

    typedef unsigned int CHECK_MNLBOUND[MSG_ID_MNL_MSG_CODE_BEGIN + 50 - MSG_ID_MNL_CODE_CHECK_POINT];


 

 




    

    typedef unsigned int CHECK_NFCBOUND[MSG_ID_NFC_MSG_CODE_BEGIN + 100 - MSG_ID_NFC_CODE_CHECK_POINT];


 

 




    

    typedef unsigned int CHECK_NFC_READERBOUND[MSG_ID_NFC_READER_MSG_CODE_BEGIN + 50 - MSG_ID_NFC_READER_CODE_CHECK_POINT];


 

 




    

    typedef unsigned int CHECK_NFC_APPBOUND[MSG_ID_NFC_APP_MSG_CODE_BEGIN + 50 - MSG_ID_NFC_APP_CODE_CHECK_POINT];


 

 




    typedef unsigned int CHECK_CALBOUND[MSG_ID_CAL_CODE_BEGIN + 100 - MSG_ID_CAL_CODE_CHECK_POINT];

 

 




    typedef unsigned int CHECK_EXT_MODEMBOUND[MSG_ID_EXT_MODEM_CODE_BEGIN + 50 - MSG_ID_EXT_MODEM_CODE_CHECK_POINT];


 

 





    
    
    
    typedef unsigned int CHECK_WNDRVBOUND[MSG_ID_WNDRV_CODE_BEGIN + 100 - MSG_ID_WNDRV_CODE_CHECK_POINT];

 

 




    typedef unsigned int CHECK_WMT_MSGBOUND[MSG_ID_WMT_MSG_CODE_BEGIN + 100 - MSG_ID_WMT_MSG_CODE_CHECK_POINT];

 
 




    

    
    
    typedef unsigned int CHECK_XDMBOUND[MSG_ID_XDM_CODE_BEGIN + 50 - MSG_ID_XDM_CODE_CHECK_POINT];


 

 




    
    
    
    typedef unsigned int CHECK_SUPCBOUND[MSG_ID_SUPC_CODE_BEGIN + 100 - MSG_ID_SUPC_CODE_CHECK_POINT];

 

 




    
    
    
    typedef unsigned int CHECK_SAFBOUND[MSG_ID_SAF_CODE_BEGIN + 50 - MSG_ID_SAF_CODE_CHECK_POINT];

 

 
#line 1941 "config\\include\\hal\\user_msgid_hal.h"
    
    typedef unsigned int CHECK_MMIBOUND[MSG_ID_L4A_CODE_BEGIN + 1300 - MSG_ID_MMI_CODE_CHECK_POINT];

 

 
#line 1953 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_ABMBOUND[MSG_ID_ABM_CODE_BEGIN + 100 - MSG_ID_ABM_CODE_CHECK_POINT];

 

 
#line 1964 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_SOCBOUND[MSG_ID_SOC_CODE_BEGIN + 100 - MSG_ID_SOC_CODE_CHECK_POINT];

     

 
#line 1975 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_TCPIPBOUND[MSG_ID_TCPIP_CODE_BEGIN + 100 - MSG_ID_TCPIP_CODE_CHECK_POINT];

 

 
#line 1986 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_EMBOUND[MSG_ID_EM_CODE_BEGIN + 100 - MSG_ID_EM_CODE_CHECK_POINT];

  

 
#line 1997 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_EMAILBOUND[MSG_ID_EMAIL_CODE_BEGIN + 180 - MSG_ID_EMAIL_CODE_CHECK_POINT];

 

 




    typedef unsigned int CHECK_IMPSBOUND[MSG_ID_IMPS_CODE_BEGIN + 150 - MSG_ID_IMPS_CODE_CHECK_POINT];

 

 




    
    
    
    typedef unsigned int CHECK_SIPBOUND[MSG_ID_SIP_CODE_BEGIN + 50 - MSG_ID_SIP_CODE_CHECK_POINT];

 

 




    
    
    

    typedef unsigned int CHECK_BTBOUND[MSG_ID_BT_CODE_BEGIN + 900 - MSG_ID_BT_CODE_CHECK_POINT];

 

 




    typedef unsigned int CHECK_DHCPBOUND[MSG_ID_DHCP_CODE_BEGIN + 50 - MSG_ID_DHCP_CODE_CHECK_POINT];


 

 




    typedef unsigned int CHECK_IPERFBOUND[MSG_ID_IPERF_CODE_BEGIN + 50 - MSG_ID_IPERF_CODE_CHECK_POINT];


 

 




    typedef unsigned int CHECK_SYNCMLBOUND[MSG_ID_SYNCML_CODE_BEGIN + 100 - MSG_ID_SYNCML_CODE_CHECK_POINT];


 

 




    
    
    
    typedef unsigned int CHECK_RTSPBOUND[MSG_ID_RTSP_CODE_BEGIN + 20 - MSG_ID_RTSP_CODE_CHECK_POINT];

 

 




    typedef unsigned int CHECK_DMBOUND[MSG_ID_DM_CODE_BEGIN + 80 - MSG_ID_DM_CODE_CHECK_POINT];


 

 




    
    typedef unsigned int CHECK_DRMTBOUND[MSG_ID_DRMT_MSG_CODE_BEGIN + 100 - MSG_ID_DRMT_CODE_CHECK_POINT];

 

 
#line 2104 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_EMLSTBOUND[MSG_ID_EMLST_CODE_BEGIN + 100 - MSG_ID_EMLST_CODE_CHECK_POINT];

 

 




    typedef unsigned int CHECK_DHCPDBOUND[MSG_ID_DHCPD_CODE_BEGIN + 30 - MSG_ID_DHCPD_CODE_CHECK_POINT];

 

 
#line 2124 "config\\include\\hal\\user_msgid_hal.h"
    typedef unsigned int CHECK_HOSTAP_MSGBOUND[MSG_ID_HOSTAP_MSG_CODE_BEGIN + 100 - MSG_ID_HOSTAP_MSG_CODE_CHECK_POINT];

 

 




    typedef unsigned int CHECK_FSBOUND[MSG_ID_FS_CODE_BEGIN + 60 - MSG_ID_FS_CODE_CHECK_POINT];    

 


 
#line 2145 "config\\include\\hal\\user_msgid_hal.h"
    

    typedef unsigned int CHECK_MTPBOUND[MSG_ID_MTP_MSG_CODE_BEGIN + 120 - MSG_ID_MTP_CODE_CHECK_POINT];

 
 




    typedef unsigned int CHECK_MED_HALBOUND[MSG_ID_MED_HAL_CODE_BEGIN + 80 - MSG_ID_MED_HAL_CODE_CHECK_POINT];


 

    

 




    

    typedef unsigned int CHECK_L1_EXTBOUND[MSG_ID_L1_EXT_CODE_BEGIN + 20 - MSG_ID_L1_EXT_CODE_CHECK_POINT];

 

 




    typedef unsigned int CHECK_CARDAVBOUND[MSG_ID_CARDAV_CODE_BEGIN + 30 - MSG_ID_CARDAV_CODE_CHECK_POINT];

 

#line 1174 "config\\include\\hal\\stack_msgs.h"
#line 1 "config\\include\\app\\user_msgid_app.h"

































 




































































































































































































































































































































































































































































































































































































































































































































































































































































































 







 






















 

 
#line 944 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_MMIAPIBOUND[MSG_ID_MMIAPI_CODE_BEGIN + 500 - MSG_ID_MMIAPI_CODE_CHECK_POINT];

 

 
#line 955 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_WAPBOUND[MSG_ID_WAP_CODE_BEGIN + 600 - MSG_ID_WAP_CODE_CHECK_POINT];

 

 
#line 966 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_J2MEBOUND[MSG_ID_J2ME_CODE_BEGIN + 220 - MSG_ID_J2ME_CODE_CHECK_POINT];

 

 




    typedef unsigned int CHECK_UDXBOUND[MSG_ID_UDX_CODE_BEGIN + 50 - MSG_ID_UDX_CODE_CHECK_POINT];


 

 
#line 987 "config\\include\\app\\user_msgid_app.h"
    

    typedef unsigned int CHECK_CERTMANBOUND[MSG_ID_CERTMAN_MSG_CODE_BEGIN + 50 - MSG_ID_CERTMAN_CODE_CHECK_POINT];


 

  
#line 1001 "config\\include\\app\\user_msgid_app.h"
   

   typedef unsigned int CHECK_MMI_CERTMANBOUND[MSG_ID_MMI_CERTMAN_MSG_CODE_BEGIN + 20 - MSG_ID_MMI_CERTMAN_CODE_CHECK_POINT];


 

 
#line 1015 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_TLSBOUND[MSG_ID_TLS_CODE_BEGIN + 20 - MSG_ID_TLS_CODE_CHECK_POINT];


 

 
#line 1028 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_WISE_MSGBOUND[MSG_ID_WISE_MSG_CODE_BEGIN + 600 - MSG_ID_WISE_MSG_CODE_CHECK_POINT];


 

 
#line 1041 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_WISE_IPT_MSGBOUND[MSG_ID_WISE_IPT_MSG_CODE_BEGIN + 250 - MSG_ID_WISE_IPT_MSG_CODE_CHECK_POINT];


 

 
#line 1053 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_KMPBOUND[MSG_ID_KMP_CODE_BEGIN + 50 - MSG_ID_KMP_CODE_CHECK_POINT];


 

 
#line 1065 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_WIDGET_MSGBOUND[MSG_ID_WIDGET_MSG_CODE_BEGIN + 100 - MSG_ID_WIDGET_MSG_CODE_CHECK_POINT];

 

 
#line 1077 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_OPERA_BROWSER_MSGBOUND[MSG_ID_OPERA_BROWSER_MSG_CODE_BEGIN + 100 - MSG_ID_OPERA_BROWSER_MSG_CODE_CHECK_POINT];

 

 
#line 1088 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_NMCBOUND[MSG_ID_NMC_CODE_BEGIN + 5 - MSG_ID_NMC_CODE_CHECK_POINT];

 

 
#line 1100 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_MEDBOUND[MSG_ID_MED_CODE_BEGIN + 920 - MSG_ID_MED_CODE_CHECK_POINT];

 

 
#line 1111 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_MED_VBOUND[MSG_ID_MED_V_CODE_BEGIN + 100 - MSG_ID_MED_V_CODE_CHECK_POINT];

 

 
#line 1122 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_OBEXBOUND[MSG_ID_OBEX_CODE_BEGIN + 100 - MSG_ID_OBEX_CODE_CHECK_POINT];

 

 




    typedef unsigned int CHECK_VCODECBOUND[MSG_ID_VCODEC_CODE_BEGIN + 100 - MSG_ID_VCODEC_CODE_CHECK_POINT];

 

 




    
    
    
    typedef unsigned int CHECK_DRIVERBOUND[MSG_ID_DRIVER_CODE_BEGIN + 300 - MSG_ID_DRIVER_CODE_CHECK_POINT];

 

 
 
#line 1156 "config\\include\\app\\user_msgid_app.h"

    
    
    

    typedef unsigned int CHECK_DPSBOUND[MSG_ID_DPS_CODE_BEGIN + 1000 - MSG_ID_DPS_CODE_CHECK_POINT];

 

 
#line 1173 "config\\include\\app\\user_msgid_app.h"
    
    
     
    typedef unsigned int CHECK_UDPSBOUND[MSG_ID_UDPS_CODE_BEGIN + 1000 - MSG_ID_UDPS_CODE_CHECK_POINT];

 

 





    typedef unsigned int CHECK_VCODEC_V2BOUND[MSG_ID_VCODEC_V2_CODE_BEGIN + 100 - MSG_ID_VCODEC_V2_CODE_CHECK_POINT];


 

 





    typedef unsigned int CHECK_VFILEBOUND[MSG_ID_VFILE_CODE_BEGIN + 100 - MSG_ID_VFILE_CODE_CHECK_POINT];


 

 
#line 1209 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_MEUT_MSGBOUND[MSG_ID_MEUT_MSG_CODE_BEGIN + 500 - MSG_ID_MEUT_MSG_CODE_CHECK_POINT];

 

 
#line 1220 "config\\include\\app\\user_msgid_app.h"
    
    typedef unsigned int CHECK_FMTBOUND[MSG_ID_FMT_MSG_CODE_BEGIN + 120 - MSG_ID_FMT_CODE_CHECK_POINT];

 

 
#line 1233 "config\\include\\app\\user_msgid_app.h"
 
 
#line 1241 "config\\include\\app\\user_msgid_app.h"
    

 


 
#line 1254 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_FUN_GPSBOUND[MSG_ID_FUN_GPS_CODE_BEGIN + 100 - MSG_ID_FUN_GPS_CODE_CHECK_POINT];


#line 1267 "config\\include\\app\\user_msgid_app.h"

#line 1278 "config\\include\\app\\user_msgid_app.h"

#line 1286 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_RFIDBOUND[MSG_ID_RFID_CODE_BEGIN + 100 - MSG_ID_RFID_CODE_CHECK_POINT];


#line 1295 "config\\include\\app\\user_msgid_app.h"
    typedef unsigned int CHECK_RFID_EINTBOUND[MSG_ID_RFID_EINT_CODE_BEGIN + 100 - MSG_ID_RFID_EINT_CODE_CHECK_POINT];






 


#line 1175 "config\\include\\hal\\stack_msgs.h"

 








 







#line 126 "kal\\include\\kal_public_defs.h"
   


 

 
typedef struct
{
    kal_uint8 unused;
} *kal_taskid;

 
typedef struct
{
    kal_uint8 unused;
} *kal_hisrid;

 
typedef struct
{
    kal_uint8 unused;
} *kal_semid;

 
typedef struct 
{
    kal_uint8 unused;
} *kal_msgqid;

 
typedef struct
{
     
    kal_uint32 pending_msgs;
     
    kal_uint32 max_msgs;
} kal_msgq_info;

 
typedef struct
{
    kal_uint8 unused;
} *kal_mutexid;

 
typedef struct 
{
    kal_uint8 unused;
} *kal_eventgrpid;

 
typedef struct
{
    kal_uint8 unused;
} *kal_poolid;

 
typedef struct
{
    kal_uint8 unused;
} *KAL_ADM_ID;

 
typedef struct
{
    kal_uint8 unused;
} *KAL_AFM_ID;

 
typedef struct
{
   kal_uint8 unused;
} *KAL_FLMM_ID;

 
typedef struct
{
   kal_uint8 unused;
} *KAL_SLMM_ID;

 
typedef struct 
{
    kal_uint8 unused;
} *kal_enhmutexid;

 
typedef struct
{
    kal_uint8 unused;
} *kal_timerid;

 
typedef struct event_scheduler
{
    kal_uint8 unused;
} event_scheduler;

 
typedef void* eventid;

 
typedef struct task_entry_struct
{
     
    task_indx_type task_indx;
} task_entry_struct;

 
typedef void (*kal_func_ptr)(void);
 
typedef void (*kal_task_func_ptr)(task_entry_struct *task_entry_ptr);
 
typedef void (*kal_hisr_func_ptr)(void);
 
typedef void (*kal_timer_func_ptr)(void *param_ptr);



 
 
 
typedef enum {
   TD_UL = 0x01 << 0,    
   TD_DL = 0x01 << 1,    
   TD_CTRL = 0x01 << 2,  
   TD_RESET = 0x01 << 3  
} transfer_direction;





 
typedef struct local_para_struct {
    


 
    kal_uint8 ref_count; kal_uint8 lp_reserved; kal_uint16 msg_len;



} local_para_struct;

#line 277 "kal\\include\\kal_public_defs.h"
 
typedef struct peer_buff_struct {
   kal_uint16 pdu_len; kal_uint8 ref_count; kal_uint8 pb_resvered; kal_uint16 free_header_space; kal_uint16 free_tail_space; 



} peer_buff_struct;

 
typedef struct ilm_struct {
   module_type       src_mod_id;       
   module_type       dest_mod_id;      
   sap_type          sap_id;           
   msg_type          msg_id;           
   local_para_struct *local_para_ptr;  
   peer_buff_struct  *peer_buff_ptr;   
} ilm_struct;

 




 
 
typedef enum {
	STACK_TIMER_INITIALIZED,
	STACK_TIMER_NOT_RUNNING = STACK_TIMER_INITIALIZED,
	STACK_TIMER_RUNNING,
	STACK_TIMER_NOT_TIMED_OUT = STACK_TIMER_RUNNING,		 
	STACK_TIMER_EXPIRED,
	STACK_TIMER_TIMED_OUT = STACK_TIMER_EXPIRED,				 
	STACK_TIMER_STOPPED
} stack_timer_status_type;

typedef enum {
	STACK_TIMER_USER_VIEW_STOPPED,
	STACK_TIMER_USER_VIEW_RUNNING
}stack_timer_user_view_status_type;

 
typedef struct stack_timer_struct_t {
	stack_timer_user_view_status_type timer_user_view_status;
	stack_timer_status_type timer_status;
	kal_uint8               invalid_time_out_count;
    kal_timerid             kal_timer_id;
	kal_uint16              timer_indx;
	module_type             dest_mod_id;



} stack_timer_struct;

 


 


#line 343 "kal\\include\\kal_public_defs.h"

#line 365 "kal\\include\\kal_public_defs.h"

#line 377 "kal\\include\\kal_public_defs.h"
 



 

 
typedef enum
{
     
    FACTORY_BOOT = 0,
     
    NORMAL_BOOT = 1,
     
    USBMS_BOOT =  2,
     
    FUE_BOOT =  3,
     
    NUM_OF_BOOT_MODE,
     
    UNKNOWN_BOOT_MODE = 0xff
} boot_mode_type;

 
 


 





 

 

 
 
#line 422 "kal\\include\\kal_public_defs.h"
 
 


 
 

 

 


 


#line 483 "kal\\include\\kal_public_defs.h"

 


 
typedef struct ASSERT_DUMP_PARAM
{
    kal_uint32 addr[10];  
    kal_uint32 len[10];   
} ASSERT_DUMP_PARAM_T;

 
typedef enum
{
    ASSERT_SPECIFIC_CALLBACK,
    ASSERT_SPECIFIC_WITH_LR,
    ASSERT_SPECIFIC_DUMP
} assert_specific_key;

 
typedef void (*Assert_Specific_Callback)(void* para_ptr);


 
typedef enum {
    KAL_NO_WAIT,        
    KAL_INFINITE_WAIT   
} kal_wait_mode;

 
typedef enum {
    KAL_SUCCESS,             
    KAL_ERROR,               
    KAL_Q_FULL,              
    KAL_Q_EMPTY,             
    KAL_SEM_NOT_AVAILABLE,   
    KAL_WOULD_BLOCK,         
    KAL_MESSAGE_TOO_BIG,     
    KAL_INVALID_ID,          
    KAL_NOT_INITIALIZED,     
    KAL_INVALID_LENGHT,      
    KAL_NULL_ADDRESS,        
    KAL_NOT_RECEIVE,         
    KAL_NOT_SEND,            
    KAL_MEMORY_NOT_VALID,    
    KAL_NOT_PRESENT,         
    KAL_MEMORY_NOT_RELEASE,  
    KAL_TIMEOUT              
} kal_status;








 


 
 
#line 551 "kal\\include\\kal_public_defs.h"
 
#line 559 "kal\\include\\kal_public_defs.h"
 



#line 586 "kal\\include\\kal_public_defs.h"


#line 89 "kal\\include\\kal_release.h"
#line 1 "kal\\include\\kal_public_api.h"

































 



























































































































































 






 
#line 200 "kal\\include\\kal_public_api.h"
#line 1 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\string.h"
 
 
 
 




 








 











#line 37 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\string.h"


  
  typedef unsigned int size_t;








extern __declspec(__nothrow) void *memcpy(void * __restrict  ,
                    const void * __restrict  , size_t  );
   




 
extern __declspec(__nothrow) void *memmove(void *  ,
                    const void *  , size_t  );
   







 
extern __declspec(__nothrow) char *strcpy(char * __restrict  , const char * __restrict  );
   




 
extern __declspec(__nothrow) char *strncpy(char * __restrict  , const char * __restrict  , size_t  );
   





 

extern __declspec(__nothrow) char *strcat(char * __restrict  , const char * __restrict  );
   




 
extern __declspec(__nothrow) char *strncat(char * __restrict  , const char * __restrict  , size_t  );
   






 






 

extern __declspec(__nothrow) int memcmp(const void *  , const void *  , size_t  );
   





 
extern __declspec(__nothrow) int strcmp(const char *  , const char *  );
   




 
extern __declspec(__nothrow) int strncmp(const char *  , const char *  , size_t  );
   






 
extern __declspec(__nothrow) int strcoll(const char *  , const char *  );
   







 

extern __declspec(__nothrow) size_t strxfrm(char * __restrict  , const char * __restrict  , size_t  );
   













 







extern __declspec(__nothrow) void *memchr(const void *  , int  , size_t  );

   





 






extern __declspec(__nothrow) char *strchr(const char *  , int  );

   




 

extern __declspec(__nothrow) size_t strcspn(const char *  , const char *  );
   




 






extern __declspec(__nothrow) char *strpbrk(const char *  , const char *  );

   




 






extern __declspec(__nothrow) char *strrchr(const char *  , int  );

   





 

extern __declspec(__nothrow) size_t strspn(const char *  , const char *  );
   



 






extern __declspec(__nothrow) char *strstr(const char *  , const char *  );

   





 

extern __declspec(__nothrow) char *strtok(char * __restrict  , const char * __restrict  );

extern __declspec(__nothrow) char *strtok_r(char *  , const char *  , char **  );

   

































 

extern __declspec(__nothrow) void *memset(void *  , int  , size_t  );
   



 
extern __declspec(__nothrow) char *strerror(int  );
   





 
extern __declspec(__nothrow) size_t strlen(const char *  );
   



 

extern __declspec(__nothrow) size_t strlcpy(char *  , const char *  , size_t  );
   
















 

extern __declspec(__nothrow) size_t strlcat(char *  , const char *  , size_t  );
   






















 







#line 392 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\string.h"



 
#line 201 "kal\\include\\kal_public_api.h"


#line 204 "kal\\include\\kal_public_api.h"
#line 205 "kal\\include\\kal_public_api.h"





 


 
static __inline void * kal_mem_cpy(void* dest, const void* src, kal_uint32 size)
{
    return memcpy ( dest, src, size );
}

static __inline void * kal_mem_set(void* dest, kal_int32 value, kal_uint32 size)
{
    return memset ( dest, value, size );
}

static __inline kal_int32 kal_mem_cmp(const void* src1, const void* src2, kal_uint32 size)
{
    return memcmp ( src1, src2, size );
}

static __inline void * kal_mem_bwcpy(void* dest, const void* src, kal_uint32 size)
{    
    char *destaddr = (char*)dest+(size-1); 
    char const *srcaddr = (char*)src+(size-1); 	
    while (size-- > 0) *destaddr-- = *srcaddr--; 	
    return destaddr;   
}









extern kal_char *kal_strtok_r(kal_char *string, const kal_char *seperators, kal_char **ppLast);





 
extern int kal_wstrlen(const WCHAR *wstr);
extern WCHAR *kal_wstrcpy(WCHAR *to, const WCHAR *from);
extern WCHAR *kal_wstrncpy(WCHAR *to, const WCHAR *from, int n);
extern int kal_wstrcmp(const WCHAR *s1, const WCHAR *s2);
extern int kal_wstrncmp(const WCHAR *s1, const WCHAR *s2, int n);
extern WCHAR *kal_wstrcat(WCHAR *s1, const WCHAR *s2);
extern WCHAR *kal_wstrncat(WCHAR *s1, const WCHAR *s2, int n);
extern WCHAR *kal_wstrchr(const WCHAR *s, int c);
extern WCHAR *kal_wstrrchr(const WCHAR *str, int ch);



 
extern int kal_dchar_strlen(const char *wstr);
extern char *kal_dchar_strcpy(char *to, const char *from);
extern char *kal_dchar_strncpy(char *to, const char *from, int n);
extern int kal_dchar_strcmp(const char *s1, const char *s2);
extern int kal_dchar_strncmp(const char *s1, const char *s2, int n);
extern char *kal_dchar_strcat(char *s1, const char *s2);
extern char *kal_dchar_strncat(char *s1, const char *s2, int n);
extern char *kal_dchar_strchr(const char *s, int c);
extern char *kal_dchar_strrchr(const char *str, int ch);
extern void kal_dchar2char(WCHAR *outstr, char* tostr);
extern void kal_wsprintf(WCHAR *outstr, char *fmt,...);




 
void kal_initialize(void);
void kal_initialize_mem(void);

 











 
kal_bool kal_query_systemInit(void);


static __inline boot_mode_type stack_query_boot_mode(void)
{
    extern boot_mode_type system_boot_mode;
    return system_boot_mode;
} 
#line 311 "kal\\include\\kal_public_api.h"

 













 
static __inline boot_mode_type kal_query_boot_mode(void)
{
    return stack_query_boot_mode();
}

 



 

 












 
void *kal_get_current_thread_ID(void);
 















 
void kal_sleep_task(kal_uint32 time_in_ticks);
 















 
kal_taskid kal_get_current_task(void);
 















 
task_indx_type kal_get_current_task_index(void);
 













 
kal_uint32 kal_get_current_task_priority(void);

static __inline kal_uint32 kal_get_mytask_priority(void)
{
    return kal_get_current_task_priority();
}

 

















 
extern void kal_set_active_module_id(module_type module_id);
 
















 
extern module_type kal_get_active_module_id(void);
 












 
extern kal_taskid kal_get_task_by_index(task_indx_type index);
 












 
extern task_indx_type kal_get_task_index(kal_taskid taskid);
 











 
extern kal_uint32 kal_get_task_total_number(void);
 
  










 
 extern kal_uint32 kal_get_send_msg_module_id_total_number(void);
 
 










 
extern task_indx_type kal_map_module_to_task_index(module_type mod);
 












 
extern kal_uint32 kal_get_task_priority(kal_taskid taskid);
 












 
extern kal_uint32 kal_get_task_priority_by_index(task_indx_type index);

 
 










 
extern kal_uint32 kal_get_task_default_priority_by_index(task_indx_type index);
 











 
extern kal_uint32 kal_change_priority(kal_taskid taskid, kal_uint32 new_priority);
 











 
extern kal_uint32 kal_change_priority_by_index(task_indx_type index, kal_uint32 new_priority);
 











 
extern kal_uint32 kal_change_default_priority_by_index(task_indx_type index, kal_uint32 new_priority);
 














 
extern kal_uint32 kal_get_current_hisr_index(void);

static __inline kal_taskid kal_get_task_self_id(void)
{
    return kal_get_current_task();
}

static __inline void kal_get_my_task_index(kal_uint32 *index)
{
    *index = (kal_uint32)kal_get_current_task_index();
}

static __inline void kal_get_my_hisr_index(kal_uint32 *index)
{
    *index = kal_get_current_hisr_index();
}

kal_uint32 stack_change_priority_by_module_ID(module_type mod_ID, kal_uint32 new_priority);
kal_uint32 stack_change_default_priority_by_module_ID(module_type mod_ID, kal_uint32 new_priority);
void *kal_get_task_stack_ptr(kal_taskid taskid);
kal_uint32 kal_get_task_remain_stack_size(kal_taskid task);

extern module_type stack_get_active_module_id(void);
extern void stack_set_active_module_id(kal_uint32 task_index, module_type module_id);

extern kal_uint32 kal_lock_current_stack(void);
extern kal_uint32 kal_unlock_current_stack(void);
















 
void kal_check_stack(void);

 










 
void kal_activate_hisr(kal_hisrid ext_hisr_id);
 












 
kal_bool kal_if_hisr(void);
 












 
kal_bool kal_if_lisr(void);

 



 
 
kal_msgqid kal_create_msg_q(kal_char* queue_name_ptr, kal_uint16 msg_size, kal_uint16 max_msgs);
kal_status kal_enque_msg(kal_msgqid ext_msg_q_id, void *buffer_ptr, kal_uint16 msg_size, 
                         kal_wait_mode wait_mode, kal_bool message_to_head);
kal_status kal_deque_msg(kal_msgqid ext_msg_q_id, void* buffer_ptr, kal_uint16 *msg_size,
                         kal_wait_mode wait_mode);
kal_status kal_deque_msg_for_stack(kal_msgqid ext_msg_q_id, void* buffer_ptr, kal_uint16 *msg_size,
                         kal_wait_mode wait_mode);
kal_bool kal_get_queue_info(kal_msgqid task_ext_qid, kal_msgq_info *msgq_info);

extern void* construct_int_local_para(kal_uint16 local_para_size, kal_uint32 auto_reset,
                                      kal_char* file_ptr, kal_uint32 line);
extern void free_int_local_para(local_para_struct *local_para_ptr, kal_char* file, kal_uint32 line);
extern void free_int_local_para_r(local_para_struct *local_para_ptr, kal_char* file, kal_uint32 line);
extern void* construct_int_peer_buff(kal_uint16 pdu_len, kal_uint16 header_len, kal_uint16 tail_len, 
                                     kal_char* file_name_ptr, kal_uint32 line);
extern void free_int_peer_buff(peer_buff_struct *pdu_ptr, kal_char* file, kal_uint32 line);
extern void free_int_peer_buff_r(peer_buff_struct *pdu_ptr, kal_char* file, kal_uint32 line);
extern void destroy_int_ilm(ilm_struct *ilm_ptr, kal_char* file_name, kal_uint32 line);

#line 777 "kal\\include\\kal_public_api.h"
 
 
 

































 



















 





















 

 






















 



















 




















 


















 
extern kal_bool hold_local_para( local_para_struct *local_para_ptr );


















 
extern kal_bool hold_local_para_r(local_para_struct *local_para_ptr);

















 
void* get_local_para_ptr(local_para_struct *local_para_ptr, kal_uint16 *local_para_len_ptr);
















 
extern kal_bool hold_peer_buff( peer_buff_struct *peer_buff_ptr);

















 
extern kal_bool hold_peer_buff_r(peer_buff_struct *peer_buff_ptr);


















 
void* get_peer_buff_pdu(peer_buff_struct *peer_buff_ptr, kal_uint16 *length_ptr);



















 
extern void prepend_to_peer_buff( peer_buff_struct *peer_buff_ptr,
                                  void *header_data_ptr,
                                  kal_uint16 header_len);



















 
extern void append_to_peer_buff( peer_buff_struct *peer_buff_ptr,
                                 void *tail_data_ptr,
                                 kal_uint16 tail_len);




















 
extern void remove_head_of_peer_buff(peer_buff_struct *peer_buff_ptr, kal_uint16 head_len);


















 
extern void remove_tail_of_peer_buff( peer_buff_struct *peer_buff_ptr,
                                      kal_uint16 tail_len);





















 
extern void update_peer_buff_header(peer_buff_struct *peer_buff_ptr, kal_uint16 new_head_len,
                                    kal_uint16 new_pdu_len, kal_uint16 new_tail_len);


























 
kal_bool msg_send(ilm_struct *ilm_ptr);
























 
kal_bool msg_send_to_head(ilm_struct *ilm_ptr);






























 
kal_bool msg_send6(module_type _src_mod_id, module_type _dest_mod_id, sap_type _sap_id, msg_type _msg_id, 
                   local_para_struct *_local_para_ptr, peer_buff_struct *_peer_buff_ptr);










 
kal_bool msg_send5(module_type _src_mod_id, module_type _dest_mod_id, sap_type _sap_id, msg_type _msg_id, 
                   local_para_struct *_local_para_ptr);









 
kal_bool msg_send4(module_type _src_mod_id, module_type _dest_mod_id, sap_type _sap_id, msg_type _msg_id);





























 
kal_bool msg_send_to_head6(module_type _src_mod_id, module_type _dest_mod_id, sap_type _sap_id, msg_type _msg_id, 
                           local_para_struct *_local_para_ptr, peer_buff_struct *_peer_buff_ptr);










 
kal_bool msg_send_to_head5(module_type _src_mod_id, module_type _dest_mod_id, sap_type _sap_id, msg_type _msg_id, 
                           local_para_struct *_local_para_ptr);










 
kal_bool msg_send_to_head4(module_type _src_mod_id, module_type _dest_mod_id, sap_type _sap_id, msg_type _msg_id);





























 
kal_bool msg_send_inline5(module_type src_mod, module_type dest_mod, msg_type msg_id, void *data, kal_uint32 datalen);




























 
kal_bool msg_send_inline_to_head5(module_type src_mod, module_type dest_mod, msg_type msg_id, void *data, kal_uint32 datalen);




















 




















 
void *msg_get_inline_data(ilm_struct *ilm_ptr);

#line 1431 "kal\\include\\kal_public_api.h"


















 




















 
kal_bool msg_receive_extq(ilm_struct *ilm_ptr);


















 
kal_bool msg_receive_extq_for_stack(ilm_struct *ilm_ptr);

















 
kal_bool msg_receive_intq(ilm_struct *ilm_ptr);
















 
kal_int32 msg_get_task_extq_messages(task_indx_type tindex);













 
kal_int32 msg_get_extq_messages(void);
















 
kal_int32 msg_get_task_extq_capacity(task_indx_type tindex);













 
kal_int32 msg_get_extq_capacity(void);                                            
 



 
 
 



















 
kal_mutexid kal_create_mutex(kal_char* mutex_name);






















 
void kal_take_mutex(kal_mutexid mutex_ptr);

















 
void kal_give_mutex(kal_mutexid mutex_ptr);




















 
kal_enhmutexid kal_create_enh_mutex(kal_char *mutex_name);
























 
void kal_take_enh_mutex(kal_enhmutexid mutex_ptr);

















 
void kal_give_enh_mutex(kal_enhmutexid mutex_ptr);





















 
kal_semid kal_create_sem(kal_char *sem_name, kal_uint32 initial_count);





















 
kal_status kal_take_sem(kal_semid sem_ptr, kal_wait_mode wait_mode);
















 
void kal_give_sem(kal_semid sem_ptr);





















 
kal_eventgrpid kal_create_event_group(kal_char *eventgrp_name);
void kal_delete_eventgrp(kal_eventgrpid eg_id);






















 
kal_status kal_set_eg_events(kal_eventgrpid eg_ptr, kal_uint32 events, kal_uint8 operation);






























 
kal_status kal_retrieve_eg_events(kal_eventgrpid eg_ptr, kal_uint32 requested_events, kal_uint8 operation, 
                                  kal_uint32 *retrieved_events, kal_uint32 suspend);
































 
kal_status kal_retrieve_eg_events_timeout(kal_eventgrpid eg_ptr, kal_uint32 requested_events, kal_uint8 operation, 
                                          kal_uint32 *retrieved_events, kal_uint32 timeout);





 
 

extern KAL_ADM_ID (kal_adm_create)(void *mem_addr, kal_uint32 size, kal_uint32 *subpool_size, kal_bool islogging);





































 
extern KAL_ADM_ID kal_adm_create2(void *mem_addr, kal_uint32 size, kal_uint32 *subpool_size, kal_uint32 flags, kal_int8 extheader_size_in_word);

















 
extern kal_status kal_adm_delete(KAL_ADM_ID adm_id);

extern void *__kal_adm_alloc(KAL_ADM_ID adm_id, kal_uint32 size, kal_uint32 *actual_size, kal_uint32 opt, char *filename, kal_uint32 line);
extern void *__kal_adm_alloc_nc(KAL_ADM_ID adm_id, kal_uint32 size, kal_uint32 *actual_size, kal_uint32 option, char *filename, kal_uint32 line);
extern void *__kal_adm_alloc_c(KAL_ADM_ID adm_id, kal_uint32 size, kal_uint32 *actual_size, kal_uint32 option, char *filename, kal_uint32 line);

extern void *__kal_adm_realloc(KAL_ADM_ID adm_id, void *ptr, kal_uint32 size, kal_uint32 *actual_size, kal_uint32 opt, char *filename, kal_uint32 line);
extern void *__kal_adm_realloc_nc(KAL_ADM_ID adm_id, void *ptr, kal_uint32 size, kal_uint32 *actual_size, kal_uint32 opt, char *filename, kal_uint32 line);
extern void *__kal_adm_realloc_c(KAL_ADM_ID adm_id, void *ptr, kal_uint32 size, kal_uint32 *actual_size, kal_uint32 opt, char *filename, kal_uint32 line);



















 




















 



















 




#line 2044 "kal\\include\\kal_public_api.h"




















 






















 



#line 2100 "kal\\include\\kal_public_api.h"


















 




















 



















 
#line 2169 "kal\\include\\kal_public_api.h"


















 
extern void kal_adm_free(KAL_ADM_ID adm_id, void *ptr);

















 
extern void *kal_adm_get_extheader(KAL_ADM_ID adm_id, void *ptr);

















 
extern kal_uint32 kal_adm_get_max_alloc_size(KAL_ADM_ID adm_id);















 
extern kal_uint32 kal_adm_get_total_left_size(KAL_ADM_ID adm_id);












 
extern void *kal_adm_check_integrity(KAL_ADM_ID adm_id);

 
extern void kal_adm_print_log(KAL_ADM_ID adm_id);
extern kal_uint32 kal_adm_calc_worst_alloc_size(KAL_ADM_ID adm_id, kal_uint32 size, kal_uint32 option);
extern void *kal_adm_get_prev_block_ptr(KAL_ADM_ID adm_id,void *mem_addr);
extern void *kal_adm_get_next_block_ptr(KAL_ADM_ID adm_id,void *mem_addr);
extern void *kal_adm_get_trans_ptr(KAL_ADM_ID adm_id,void *mem_addr);





 









 





 
#line 2294 "kal\\include\\kal_public_api.h"








 








 
#line 2319 "kal\\include\\kal_public_api.h"







 
#line 2334 "kal\\include\\kal_public_api.h"
 






 

























 
extern KAL_AFM_ID kal_afm_create(void *mem_addr, kal_uint32 size, kal_uint32 *subpool_size,kal_uint32 *subpool_nr, kal_uint32 flags, kal_uint32 *left_mem);














 
extern kal_status kal_afm_delete(KAL_AFM_ID afm_id);

extern void *kal_afm_internal_alloc(KAL_AFM_ID afm_id, kal_uint32 size, kal_uint32 *actual_size, char *filename, kal_uint32 line);

















 
















 
extern void kal_afm_free(KAL_AFM_ID afm_id, void *ptr);












 
extern kal_int32 kal_afm_check_integrity(KAL_AFM_ID afm_id);

extern void *kal_afm_internal_alloc_cacheable(KAL_AFM_ID adm_id, kal_uint32 size, kal_uint32 *actual_size, char *filename, kal_uint32 line);
#line 2446 "kal\\include\\kal_public_api.h"





















 



extern void *kal_afm_internal_alloc_noncacheable(KAL_AFM_ID afm_id, kal_uint32 size, kal_uint32 *actual_size, char *filename, kal_uint32 line);
#line 2479 "kal\\include\\kal_public_api.h"



















 



 
extern kal_int32 kal_afm_print_log(KAL_AFM_ID afm_id);
extern kal_int32 kal_afm_get_subpool_num(KAL_AFM_ID afm_id);
extern kal_int32 kal_afm_info_get(KAL_AFM_ID afm_id, kal_uint32 *option, kal_uint32 *buff_size, kal_uint32 *buff_nr, kal_uint32 *left_buf_nr, kal_uint32 *total_left_mem_sz);
extern kal_int32 kal_afm_custom_performance_info_get(KAL_AFM_ID afm_id, kal_uint32 *option, kal_uint32 *buff_size, kal_uint32 *buff_nr, kal_uint32 *alloc_cnt, kal_uint32 *min_left_buf_nr);
extern kal_int32 kal_afm_set_cuslogging(KAL_AFM_ID afm_id, kal_uint32 cus_log_opt);
extern kal_int32 kal_afm_get_cuslogging(KAL_AFM_ID afm_id, kal_uint32 *cus_log_opt);
extern kal_int32 kal_afm_get_left_subpool_num(KAL_AFM_ID afm_id, kal_uint32 size);
 

 
KAL_SLMM_ID kal_create_slmm(KAL_FLMM_ID flmm_id, kal_uint32 size, kal_uint32 flags);
void *__kal_slmm_alloc(KAL_SLMM_ID slmm_id, kal_uint32 size, kal_uint32 option, kal_int32 *errcode, kal_char *filename, kal_int32 lineno);


void kal_slmm_free(KAL_SLMM_ID slmm_id, void *ptr);
kal_status kal_slmm_delete(KAL_SLMM_ID slmm_id);
kal_uint32 kal_slmm_vm_start(KAL_SLMM_ID slmm_id);
kal_uint32 kal_slmm_vm_end(KAL_SLMM_ID slmm_id);
 

 


 
extern void *get_ctrl_buffer_ext(kal_uint32 size, kal_char *file_name, kal_uint32 line);
extern void free_ctrl_buffer_ext(void *buff_ptr, kal_char *file_name, kal_uint32 line);

#line 2537 "kal\\include\\kal_public_api.h"

















 
















 


 


 


















 
kal_uint32 kal_get_systicks(void);
















 
kal_uint32 kal_secs_to_ticks(kal_uint32 secs);
















 
kal_uint32 kal_milli_secs_to_ticks(kal_uint32 milli_secs);
















 
kal_uint32 kal_ticks_to_secs(kal_uint32 ticks);
















 
kal_uint32 kal_ticks_to_milli_secs(kal_uint32 ticks);

static __inline void kal_get_time(kal_uint32* ticks_ptr)
{
    *ticks_ptr = kal_get_systicks();
}



 


 
 
 
 



















 
kal_timerid kal_create_timer(kal_char* timer_name);























 
void kal_set_timer(kal_timerid timer_ptr, 
                   kal_timer_func_ptr handler_func_ptr, void* handler_param_ptr,
                   kal_uint32 delay, kal_uint32 reschedule_time);
















 
void kal_cancel_timer(kal_timerid timer_ptr);
















 
kal_uint32 kal_get_remaining_time(kal_timerid timer_ptr);

static __inline kal_uint32 kal_get_time_remaining(kal_timerid timer_ptr)
{
    return kal_get_remaining_time(timer_ptr);
}

 

 


 
 





















 
extern void stack_init_timer(stack_timer_struct *stack_timer, 
                            kal_char *timer_name, 
                            module_type module_id);
























 
extern stack_timer_struct *stack_create_timer(kal_char *timer_name, module_type module_id);























 
extern void stack_start_timer(stack_timer_struct *stack_timer, 
                              kal_uint16 timer_indx, 
                              kal_uint32 init_time);
















 
extern stack_timer_status_type stack_stop_timer(stack_timer_struct *stack_timer);















 
extern stack_timer_status_type stack_timer_status(stack_timer_struct *stack_timer, 
                                                    kal_uint32 *time_remaining);
 












 
static __inline kal_uint32 stack_timer_get_remaining_time(stack_timer_struct *stack_timer)
{
    kal_uint32 remaining = 0;
    
    stack_timer_status(stack_timer, &remaining);
    
    return remaining;
}


















 
extern kal_bool stack_is_time_out_valid(stack_timer_struct *stack_timer);
















 
extern void stack_process_time_out(stack_timer_struct *stack_timer);

extern kal_uint8 stack_time_out_messages_in_queue(stack_timer_struct *stack_timer);

extern stack_timer_user_view_status_type 
stack_timer_user_view_status(stack_timer_struct *stack_timer, 
                              kal_uint32 *time_remaining);
 



 
 












 
typedef void * (*malloc_fp_t)(unsigned int size);













 
typedef void * (*realloc_fp_t)(void *ptr, unsigned int new_size);











 
typedef void (*free_fp_t)(void *ptr);








                                   


















































 
extern event_scheduler *evshed_create(kal_char *evshed_name, module_type module_id,
                                      kal_uint32 allowed_time_shift, kal_uint16 allowed_time_shift_sleep_mode);


 












 
extern void evshed_set_index(event_scheduler *es_usr, kal_uint16 timer_index);














 
extern kal_uint16 evshed_get_index(ilm_struct *expired_ilm);
























 
extern eventid evshed_set_event(event_scheduler *es,
                                kal_timer_func_ptr event_hf,
                                void *event_hf_param,
                                kal_uint32 elapse_time);
























 
extern eventid evshed_set_event_userid(event_scheduler *es,
                                kal_timer_func_ptr event_hf,
                                void *event_hf_param,
                                kal_uint32 elapse_time,
                                kal_uint32 event_user_id);
















 
extern kal_uint32 evshed_get_event_userid(eventid user_eventid);



















 
extern kal_int32 evshed_cancel_event(event_scheduler *es, eventid *eid);












 
extern kal_uint32 evshed_get_remaining_time(event_scheduler *es, eventid eid);

static __inline kal_uint32 evshed_get_rem_time(event_scheduler *es, eventid eid)
{
    return evshed_get_remaining_time(es, eid);
}














 
extern void evshed_delete_all_events(event_scheduler *es);





















 
extern void evshed_timer_handler(event_scheduler *es);














 
extern kal_bool evshed_has_pending_events(event_scheduler *es);

static __inline kal_bool evshed_events_pending(event_scheduler *es)
{
    return evshed_has_pending_events(es);
}














 
extern void evshed_suspend_all_events(event_scheduler *es);













 
extern void evshed_resume_all_events(event_scheduler *es);


 


 
 







 
















extern void kal_assert_fail(char* expr, char* file, kal_uint32 line, kal_bool isext, kal_uint32 ex1, kal_uint32 ex2, kal_uint32 ex3, ASSERT_DUMP_PARAM_T *dump_param);
extern void kal_assert_fail_internal(kal_char* expr, kal_char *file, kal_uint32 line, kal_uint32 caller_addr, kal_bool isext, kal_uint32 ex1, kal_uint32 ex2, kal_uint32 ex3, ASSERT_DUMP_PARAM_T *dump_param);


extern void kal_assert_fail_line(kal_uint32 line);
extern void kal_assert_fail_ext(kal_uint32 line, kal_uint32 ex1, kal_uint32 ex2, kal_uint32 ex3);
extern void kal_assert_fail_dump(kal_uint32 line, kal_uint32 ex1, kal_uint32 ex2, kal_uint32 ex3, ASSERT_DUMP_PARAM_T *dump_param);
extern void kal_assert_fail_specific(kal_uint32 line, assert_specific_key key, ...);
extern void kal_assert_fail_specific_ext(kal_uint32 line, kal_uint32 ex1, kal_uint32 ex2, kal_uint32 ex3, assert_specific_key key, ...);
#line 3360 "kal\\include\\kal_public_api.h"



#line 3369 "kal\\include\\kal_public_api.h"





 


#line 3433 "kal\\include\\kal_public_api.h"

#line 3449 "kal\\include\\kal_public_api.h"

 

#line 3492 "kal\\include\\kal_public_api.h"

 

 

extern kal_uint32 stack_rand(void);



 














 
void kal_profile_enable(void);













 
float kal_profile_get_cpu_usage(void); 



 

 





#line 90 "kal\\include\\kal_release.h"

#line 83 "interface\\hal\\peripheral\\dcl_gpt.h"






 




 




 





 
#line 131 "interface\\hal\\peripheral\\dcl_gpt.h"

 
typedef struct
{
   DCL_UINT16   u2Tick;
   void     (*pfCallback)(void *); 
   void     *vPara; 
} SGPT_CTRL_START_T;

 
typedef DCL_UINT16 FGPT_CTRL_RETURN_COUNT_T;
 
typedef DCL_UINT16 GPT_BUSYWAIT_COUNT;

#line 159 "interface\\hal\\peripheral\\dcl_gpt.h"
 







typedef struct 
{
	void (*gpt1_func)(void);
	void (*gpt2_func)(void); 
}gpt_func;

typedef struct 
{
	kal_uint16   tick;
	void     	 (*gptimer_func)(void *parameter);
	void    	 *parameter;
}gptimer_item;


typedef struct
{
   kal_uint32     status;   
   kal_bool       GPTSTOP;
   kal_uint32     Hgpt_handle;
   kal_uint16     GPT_TICK;
   kal_uint8      MAX_GPTIMER_ITEMS;  
   kal_uint8      GPTUsed[32];   
                                 
   gptimer_item   GPTItems[32];   
   gpt_func       GPT_FUNC;
   kal_hisrid     hisr;
} GPTStruct; 

#line 515 "interface\\hal\\peripheral\\dcl_gpt.h"


#line 196 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_gpio.h"








 






























































































 




























#line 261 "interface\\hal\\peripheral\\dcl_gpio.h"

typedef enum {
   mode_default = 0,
   mode_f32k_ck = 0x82,
   mode_max_num 
 } gpio_clk_mode;  

#line 298 "interface\\hal\\peripheral\\dcl_gpio.h"



typedef enum {
   div_max_num=16
} gpio_clk_div;	
typedef struct
{
   kal_uint8      pin_num;   
   kal_uint8      dir; 
} GPIOCheckStruct;  



 




 



 




 
#line 415 "interface\\hal\\peripheral\\dcl_gpio.h"







 
typedef struct
{


   DCL_UINT8   u1IOData; 
} GPIO_CTRL_READ_T;

 
typedef struct
{
#line 442 "interface\\hal\\peripheral\\dcl_gpio.h"
   DCL_UINT8   u1RetMode;
} GPIO_CTRL_RETURN_MODE_T;

 
typedef struct
{




   DCL_UINT8   u1RetMode;
} GPO_CTRL_RETURN_MODE_T;

 
typedef struct
{


   DCL_UINT8   u1RetDirData;
} GPIO_CTRL_RETURN_DIR_T;

 
typedef struct
{
   DCL_UINT8   u1RetOutData;
} GPIO_CTRL_RETURN_OUT_T;

 
typedef struct
{


   DCL_UINT8   u1RetOutData;
} GPO_CTRL_RETURN_OUT_T;

 
typedef struct
{
   DCL_BOOL    fgSetDinv; 
} GPIO_CTRL_SET_DINV_T;

 
typedef struct
{
   DCL_BOOL    fgSetPupd; 
   DCL_BOOL    fgSetR0; 
   DCL_BOOL    fgSetR1; 
} GPIO_CTRL_SET_PUPD_R0_R1_T;

 
typedef struct
{
   DCL_BOOL    fgSetDebug;
} GPIO_CTRL_SET_DEBUG_T;

 
typedef struct
{
   DCL_UINT16  u2ClkNum; 
   gpio_clk_mode u2Mode;
  
} GPIO_CTRL_SET_CLK_OUT_T;


 
typedef struct
{
    DCL_UINT16  u2ClkNum; 
    gpio_clk_div   u2Div;
    
}GPIO_CTRL_SET_CLK_DIV_T;

 
typedef struct
{
   DCL_UINT8   data;
   DCL_UINT16  no;
   DCL_UINT16  remainder_shift;
} GPIO_CTRL_WRITE_FOR_SPI_T;
#line 555 "interface\\hal\\peripheral\\dcl_gpio.h"

#line 772 "interface\\hal\\peripheral\\dcl_gpio.h"


#line 197 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_uart.h"








 


































































































































































































 














#line 1 "custom\\common\\hal_public\\bt_common_config.h"
#line 4 "custom\\common\\hal_public\\bt_common_config.h"
 


 

 
#line 18 "custom\\common\\hal_public\\bt_common_config.h"

 


 






 






 


 




#line 52 "custom\\common\\hal_public\\bt_common_config.h"
 

 




#line 68 "custom\\common\\hal_public\\bt_common_config.h"




 
extern kal_uint16 BTGet_Report_RSSI_Timer_Period(void);
extern kal_uint8 BTGet_Decide_Report_RSSI_Sniff_Mode(void);
extern kal_uint8 BTGet_Decide_SPP_SCO_Enter_Sniff_Mode(void);
 

 

 








 


 
 
 
#line 168 "custom\\common\\hal_public\\bt_common_config.h"

 
 
 


 
 
 
#line 215 "custom\\common\\hal_public\\bt_common_config.h"
 
 
 

extern kal_bool bt_custom_read_address_from_nvram(void);


kal_uint8 BtRadio_Get_Deafult_Flowcontrol_Setting(void);





 

kal_uint32 BTGet_Custom_Page_Timeout(void);







 



void BtRadio_PCM_GPIOSetup(kal_uint8 enable);
kal_bool BtRadio_Get_PCM_ShortSync(void);
kal_bool BtRadio_Get_PCM_LSBFirst(void);
kal_bool BtRadio_Get_PCM_SignExtension(void);




#line 224 "interface\\hal\\peripheral\\dcl_uart.h"




#line 255 "interface\\hal\\peripheral\\dcl_uart.h"




 
#line 335 "interface\\hal\\peripheral\\dcl_uart.h"



typedef enum
{
	DCL_UART_TYPE = 0x00,
	DCL_UART_USB_TYPE,
	DCL_UART_BLUETOOTH_TYPE,
	DCL_UART_CMUX_TYPE,
	DCL_UART_SPPA_TYPE,
	DCL_UART_CCCI_TYPE,
	DCL_UART_DCC_TYPE,
	DCL_UART_LOGACC_TYPE,
	DCL_UART_LMU_TYPE,
	DCL_UART_SP_USB_TYPE,
	DCL_UART_DEV_TYPE_MAX
}SIO_TYPE_T;



typedef DCL_UINT32 UART_BAUDRATE_T;
typedef UART_BAUDRATE_T UART_baudrate;
typedef DCL_UINT16   UART_PORT;

#line 380 "interface\\hal\\peripheral\\dcl_uart.h"


typedef enum {
      LEN_5=5,
      LEN_6,
      LEN_7,
      LEN_8
} UART_BITS_PER_CHAR_T;

typedef enum {
      SB_1=1,
      SB_2,
      SB_1_5
} UART_STOP_BITS_T;

typedef enum {
      PA_NONE=0,
      PA_ODD,
      PA_EVEN,
      PA_MARK,
      PA_SPACE
} UART_PARITY_T;





 

typedef enum {
      FC_NONE=1,
      FC_HW,
      FC_SW
} UART_FLOW_CTRL_MODE_T;

typedef enum {
      DCL_NONE_VFIFO,
      DCL_RX_VFIFO,
      DCL_TX_VFIFO,
      DCL_TXRX_VFIFO
} UART_VFIFO_T;

typedef enum {
      uart_sleep_on_tx_allow = 0,
      uart_sleep_on_tx_forbid
} UART_SLEEP_ON_TX;



typedef struct
{
   UART_BAUDRATE_T      u4Baud; 
   DCL_UINT8            u1DataBits; 
   DCL_UINT8            u1StopBits; 
   DCL_UINT8            u1Parity; 
   DCL_UINT8            u1FlowControl; 
   DCL_UCHAR            ucXonChar;
   DCL_UCHAR            ucXoffChar;
   DCL_BOOLEAN             fgDSRCheck;
} UART_CONFIG_T;

typedef enum 
{
	DCL_IO_Low=0,
	DCL_IO_High
} IO_LEVEL_T;


typedef enum {
      DCL_RX_BUF,
      DCL_TX_BUF
} UART_BUFFER_T;

typedef enum {
      DCL_UART_SLEEP_ON_TX_ALLOW = 0,
      DCL_UART_SLEEP_ON_TX_FORBID,
} UART_SLEEP_ON_TX_T;

typedef enum {
      DCL_UART_BY_VFIFO,
      DCL_UART_BY_DMA,
      DCL_UART_BY_MCU,
      DCL_UART_BY_UNKNOWN
} UART_WORK_MODE;


typedef struct
{
	DCL_UINT32 u4Flag;
}UART_CTRL_INIT_T;


typedef struct
{
  DCL_UINT32 u4OwenrId;
}UART_CTRL_OPEN_T;


typedef struct
{
  DCL_UINT32 u4OwenrId;
}UART_CTRL_CLOSE_T;


typedef struct
{
	DCL_UINT16 u2Length;
	DCL_UINT32 u4OwenrId;
	DCL_UINT16	u2RetSize;
	DCL_UINT8* puBuffaddr;
	DCL_UINT8*  pustatus;
	
}UART_CTRL_GET_BYTES_T;



typedef struct
{
	DCL_UINT16 u2Length;
	DCL_UINT32 u4OwenrId;
	DCL_UINT16	u2RetSize;
	DCL_UINT8* puBuffaddr;
}UART_CTRL_PUT_BYTES_T;


typedef struct
{
	DCL_UINT16 u2RetSize;
}UART_CTRL_RX_AVAIL_T;



typedef struct
{
	DCL_UINT16 u2RetSize;
}UART_CTRL_TX_AVAIL_T;


typedef struct
{
	DCL_UINT32 u4OwenrId;
	UART_BUFFER_T dir;
}UART_CTRL_PURGE_T;



typedef struct
{
	DCL_UINT32 u4OwenrId;
}UART_CTRL_OWNER_T;


typedef struct
{
	DCL_UINT32 u4OwenrId;
	DCL_BOOL 	bXON;
}UART_CTRL_FLOW_CTRL_T;


typedef struct
{
   DCL_UINT32 u4OwenrId;
   DCL_UINT8  uEscChar;
   DCL_UINT16 u2ESCGuardtime;
} UART_CTRL_CONFIG_ESP_T;




typedef struct
{
	DCL_UINT32 u4OwenrId;
	UART_CONFIG_T  rUARTConfig;
} UART_CTRL_DCB_T;



typedef struct
{
	DCL_UINT32 u4OwenrId;
	IO_LEVEL_T rIOLevelDCD;
} UART_CTRL_DCD_T;


typedef struct
{
	DCL_UINT32 u4OwenrId;
	UART_FLOW_CTRL_MODE_T FlowCtrlMode;
}UART_CTRL_GET_FC_T;



typedef struct
{
  DCL_UINT32 u4OwenrId;
   IO_LEVEL_T rIOLevelBRK;
} UART_CTRL_BREAK_T;



typedef struct
{
   DCL_UINT32 u4OwenrId;
} UART_CTRL_CLR_BUFFER_T;


typedef struct
{
   DCL_UINT32 u4OwenrId;
   UART_BAUDRATE_T baudrate;
} UART_CTRL_BAUDRATE_T;



typedef struct
{
	DCL_UINT32 u4OwenrId;
	DCL_UINT8* puBuffaddr;
	DCL_UINT16 u2Length;
	DCL_UINT8 umode;
	DCL_UINT8 uescape_char;
	DCL_UINT16 u2RetSize;
}UART_CTRL_SEND_DATA_T;


typedef struct
{
   DCL_UINT32 u4OwenrId;
} UART_CTRL_AUTO_BAUDDIV_T;

typedef void (*DCL_UART_TX_FUNC)(DCL_UINT32 u4Port); 
typedef void (*DCL_UART_RX_FUNC)(DCL_UINT32 u4Port) ; 



typedef struct
{
   DCL_UINT32 u4OwenrId;
   DCL_UART_TX_FUNC func;
} UART_CTRL_REG_TX_CB_T;

	

typedef struct
{
	  DCL_UINT32 u4OwenrId;

   DCL_UART_RX_FUNC func;
} UART_CTRL_REG_RX_CB_T;

typedef enum
{
	UART_TX = 0,
	UART_RX,
	DSP_TX,
	DSP_RX
}UART_IO_DIR;


typedef struct
{
	UART_IO_DIR dir;
}UART_CTRL_REG_DEF_CB_T;


typedef struct
{
	DCL_UINT8 uByte;
}UART_CTRL_GET_UART_BYTE_T;



typedef struct
{
	DCL_UINT8  uData;
}UART_CTRL_PUT_UART_BYTE_T;


typedef struct
{
	DCL_UINT8* puBuffaddr;
	DCL_UINT16 u2Length;
	
}UART_CTRL_PUT_UART_BYTES_T;


typedef struct
{
	 DCL_UINT32 u4OwenrId;
	IO_LEVEL_T rIOLevelSRI;

}UART_CTRL_RI_T;


typedef struct
{
	 DCL_UINT32 u4OwenrId;
	IO_LEVEL_T rIOLevelDTR;
}UART_CTRL_DTR_T;


typedef struct
{
	IO_LEVEL_T rIOLevelDSR;
	IO_LEVEL_T rIOLevelCTS;
}UART_CTRL_RHS_T;


typedef struct
{
	DCL_UINT16 tx_level;
	DCL_UINT16 rx_level;
}UART_CTRL_SFT_T;


typedef struct
{
	DCL_BOOL bFlag_Poweron;
}UART_CTRL_POWERON_T;


typedef struct
{
	DCL_BOOL bFlag;
}UART_CTRL_CHECK_TBE_T;


typedef struct
{
	DCL_BOOL bFlag;
}UART_CTRL_CHECK_TSO_T;


typedef struct
{
	DCL_UINT32* ptotal_size;
	DCL_UINT32* preturn_size;
}UART_CTRL_GET_TBS_T;



typedef struct
{
	UART_SLEEP_ON_TX_T bFlag;
}UART_CTRL_SLEEP_ON_TX_ENABLE_T;


typedef struct
{
	DCL_BOOL bFlag;
}UART_CTRL_SLEEP_ENABLE_T;



typedef struct
{
	DCL_UINT8* puBuffaddr;
	DCL_UINT16 u2Length;
}UART_CTRL_BOOT_PUTBYTES_T;



typedef struct
{
	DCL_BOOL	bUseVFifo;
}UART_CTRL_USE_VFIFO_T;	


typedef struct
{
	kal_uint32 max_baudrate;
}UART_CTRL_GET_MAXBAUDRATE_T;

typedef enum {
      NONE_VFIFO,
      RX_VFIFO,
      TX_VFIFO,
      TXRX_VFIFO
} UART_TxRx_VFIFO_support;

typedef enum {
      RX_BUF,
      TX_BUF
} UART_buffer;

typedef enum {
   Compensate_None = 0,
   Compensate_Wait,
   Compensate_AT,
   Compensate_at
}UART_Compensate_enum;


typedef enum {
      len_5=5,
      len_6,
      len_7,
      len_8
} UART_bitsPerCharacter;

typedef enum {
      sb_1=1,
      sb_2,
      sb_1_5
} UART_stopBits;

typedef enum {
      pa_none=0,
      pa_odd,
      pa_even,
      pa_mark,
      pa_space
} UART_parity;

typedef enum {
      fc_none=1,
      fc_hw,
      fc_sw
} UART_flowCtrlMode;

typedef struct
{
      UART_baudrate                 baud; 
      UART_bitsPerCharacter         dataBits;
      UART_stopBits                 stopBits;
      UART_parity                   parity;
      UART_flowCtrlMode             flowControl;
      kal_uint8                     xonChar;
      kal_uint8                     xoffChar;
      kal_bool                      DSRCheck;
} UARTDCBStruct;

typedef struct
{
      kal_uint8                      EscChar;
      kal_uint16                     GuardTime;
} UART_ESCDetectStruct;

typedef struct
{
      kal_uint8                      *rx_buffer;    
      kal_uint8                      *tx_buffer;    
      kal_uint8                      *txISR_buffer;   
} UART_RingBufferStruct;


   typedef enum {
      uart_null_buffer=0,
      uart_isr_buffer,
      uart_normal_buffer
   } UART_RingBuffer_Type;

   typedef struct
   {
         UART_RingBuffer_Type            type;
         kal_uint16                      index;
   } UART_RingBuffer_SaveIndex;


typedef struct
{
	kal_uint16	       tst_port_ps;
	kal_uint16         ps_port;	
	UART_baudrate      tst_baudrate_ps;
	UART_baudrate      ps_baudrate;
	kal_bool           High_Speed_SIM_Enabled;
	kal_uint8          swdbg;	
   kal_uint8          uart_power_setting;  
   kal_uint8          cti_uart_port;
   UART_baudrate      cti_baudrate;
   kal_uint8           tst_port_l1;
   UART_baudrate       tst_baudrate_l1;
    kal_uint8          tst_output_mode;
    kal_uint8	      usb_logging_mode;
    kal_uint16 tst_port_dsp;
    UART_baudrate       tst_baud_rate_dsp;
    kal_uint8   usb_cdrom_config;
} port_setting_struct;

 

typedef struct  
{       
	kal_uint8 	ref_count;
	kal_uint16 	msg_len;			 	
	DCL_UINT16 	port;
}uart_ready_to_read_ind_struct; 

typedef struct  
{       
	kal_uint8 	ref_count;
	kal_uint16 	msg_len;			 	
	DCL_UINT16 	port;
}uart_ready_to_write_ind_struct;
 
 typedef struct  
{       
	kal_uint8 	ref_count;
	kal_uint16 	msg_len;			 	
	DCL_UINT16 	port;
}uart_dsr_change_ind_struct;
 
 typedef struct  
{       
	kal_uint8 	ref_count;
	kal_uint16 	msg_len;			 	
	DCL_UINT16 	port;
}uart_escape_detected_ind_struct;

 typedef struct  
{       
	kal_uint8 	ref_count;
	kal_uint16 	msg_len;			 	
	DCL_UINT16 	port;
}uart_plugin_ind_struct;

 typedef struct  
{       
	kal_uint8 	ref_count;
	kal_uint16 	msg_len;			 	
	DCL_UINT16 	port;
}uart_plugout_ind_struct;  




#line 945 "interface\\hal\\peripheral\\dcl_uart.h"


      




#line 1081 "interface\\hal\\peripheral\\dcl_uart.h"


#line 198 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_wdt.h"








 






























































 










 


 

 





 
#line 106 "interface\\hal\\peripheral\\dcl_wdt.h"


 
#line 137 "interface\\hal\\peripheral\\dcl_wdt.h"


 
 typedef struct
 {
 	DCL_UINT16 rstInterval;	
 }WDT_CTRL_GET_RSTINTERVAL_T;
 
 
typedef struct
{
   DCL_BOOL fgEnable;		
} WDT_CTRL_ENABLE_T;
 
typedef struct
{
   DCL_BOOL fgIOHigh;		
} WDT_CTRL_SET_EXT_POL_T;
 
typedef struct
{
   DCL_BOOL fgEnable;		
} WDT_CTRL_SET_EXT_RESET_T;
 
typedef struct
{
   DCL_UINT16 u2Value;		
} WDT_CTRL_SET_VALUE_T;
 

 

 

 
typedef struct
{
   DCL_BOOL fgEnable;		
} WDT_CTRL_IRQ_T;
 
typedef struct
{
   DCL_BOOL fgEnable;	
}WDT_CTRL_DEBUG_T;

#line 203 "interface\\hal\\peripheral\\dcl_wdt.h"





#line 364 "interface\\hal\\peripheral\\dcl_wdt.h"






#line 199 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_adc.h"








 














































































































 







 


 

 





 




 
#line 163 "interface\\hal\\peripheral\\dcl_adc.h"

#line 174 "interface\\hal\\peripheral\\dcl_adc.h"



 
 
typedef struct
{
   DCL_UINT32 u4Period;				
   DCL_UINT32 u4Sapid;
   module_type u1OwnerId;				
   DCL_UINT8 u1AdcChannel;			
   DCL_UINT8 u1EvaluateCount;		
   DCL_BOOL fgSendPrimitive;		
} ADC_CTRL_CREATE_OBJECT_T;

 
typedef struct
{
   DCL_UINT32 u4Period;				
   DCL_UINT8 u1EvaluateCount;		
} ADC_CTRL_MODIFY_PARAM_T;
 

 

 
typedef struct
{
   DCL_UINT16 u2Channel;				
   DCL_UINT16 u2ADCValue;			
} ADC_CTRL_IMM_MEASURE_T;
 
typedef struct
{
   DCL_UINT16 u2Channel;				
   DCL_UINT16 u2ADCValue;			
} ADC_CTRL_SYNC_MEASURE_T;
 
typedef struct
{
   DCL_UINT16 u2Event0;				
   DCL_UINT16 u2Event1;				
} ADC_CTRL_TDMA_SYNC_SETUP_T;
 
typedef struct
{
   DCL_BOOL fgEnable;		
} ADC_CTRL_POWER_T;

 
typedef struct
{
   DCL_UINT8 u1Channel;  
   DCL_UINT16 u2MeaCount; 
   DCL_UINT32 u4ADCData;  
} ADC_CTRL_GET_DATA_2_META_T;

 
typedef struct
{
   DCL_UINT8 u1Channel;  
   DCL_UINT32 u4ADCData;  
} ADC_CTRL_GET_DATA_T;

 
typedef struct
{
   DCL_UINT8 u1Channel;  
   DCL_UINT16 u2MeaCount; 
   DCL_UINT32 u4ADCData;  
} ADC_CTRL_GET_META_DATA_T;

 
typedef struct
{
   DCL_UINT32 u4Channel; 
   DCL_UINT32 u4MeaCount; 
   DCL_UINT16 *u2ADCData; 
} ADC_CTRL_GET_IMM_DATA_ON_BOOTING_T;


typedef struct
{
   DCL_BOOL fgPageAlign;  
} ADC_CTRL_TIMER_ALIGN_T;


typedef enum {
   DCL_VBAT_ADC_CHANNEL = 0,
   DCL_VISENSE_ADC_CHANNEL,
   DCL_VBATTMP_ADC_CHANNEL,
   DCL_BATTYPE_ADC_CHANNEL,
   DCL_VCHARGER_ADC_CHANNEL,
   DCL_PCBTMP_ADC_CHANNEL,
   DCL_AUX_ADC_CHANNEL,
   DCL_CHR_USB_ADC_CHANNEL,
   DCL_OTG_VBUS_ADC_CHANNEL,
   DCL_RFTMP_ADC_CHANNEL,
   DCL_MAX_ADC_CHANNEL
} DCL_ADC_CHANNEL_TYPE_ENUM;

typedef struct
{
   DCL_UINT8    u1AdcPhyCh;
   DCL_UINT16   u2AdcName;
} ADC_CTRL_GET_PHYSICAL_CHANNEL_T;


typedef struct
{
   DCL_DOUBLE   d8AdcValue;
   DCL_UINT32   u4Volt;
   DCL_UINT8    u1AdcPhyCh;
} ADC_CTRL_TRANSFORM_INTO_VOLT_T;


typedef struct
{
   DCL_UINT32   u4Volt;
   DCL_UINT32   u4Temp;
} ADC_CTRL_TRANSFORM_INTO_TEMP_T;


typedef struct
{
   DCL_UINT32   u4Volt;
   DCL_UINT32   u4Curr;
} ADC_CTRL_TRANSFORM_INTO_CURR_T;



typedef struct
{
   kal_timer_func_ptr pfMeasure_cb;
} ADC_CTRL_REGISTER_MEASURE_CB_T;

typedef void (*PFN_DCLSADC_COMPLETE_CALLBACK)(DCL_INT32 handle, DCL_INT32 volt_result, DCL_DOUBLE adc_result);
typedef void (*PFN_DCLSADC_COMPLETE_MULTI_CALLBACK)(DCL_INT32 handle, DCL_INT32 *volt_array_result, DCL_DOUBLE *adc_array_result);

typedef struct
{
   PFN_DCLSADC_COMPLETE_CALLBACK pfComplete_cb;
} ADC_CTRL_REGISTER_COMPLETE_CB_T;

typedef struct
{
   PFN_DCLSADC_COMPLETE_MULTI_CALLBACK pfComplete_cb;
} ADC_CTRL_REGISTER_COMPLETE_MULTI_CB_T;



typedef struct{
  DCL_UINT32     u4Ownerid;
  DCL_UINT32     u4Sapid;
	DCL_UINT32     u4Period;
	DCL_UINT8      u1Adc_phy_id;
	DCL_UINT8      u1Adc_logic_id;
	DCL_UINT8		   u1Evaluate_count;	 
	DCL_BOOL       bSend_primitive;
	DCL_BOOL       bConti_measure;
	DCL_UINT32     u4Adc_sche_event_id;
	void (*complete)(DCL_INT32 adc_handle, DCL_INT32 volt_result, DCL_DOUBLE adc_result); 
}DCL_ADC_SCHEDULER_PARA_T;
typedef struct
{
   DCL_UINT32 u4Handle;
   DCL_ADC_SCHEDULER_PARA_T pPara;
} ADC_CTRL_GET_SCHEDULER_PARAMETER_T;


typedef struct
{
	DCL_UINT32     u4Adc_max_ch;
} ADC_CTRL_GET_MAX_PHYSICAL_CH_T;


typedef struct
{
	void  *ilm_ptr;
}ADC_CTRL_SET_CALIBRATION_DATA_T;


typedef struct
{
   DCL_INT32 i4ADCSlope[16]; 
   DCL_INT32 i4ADCOffset[16]; 
}ADC_CTRL_READ_CALIBRATION_DATA_T;


typedef struct{
  DCL_UINT32     u4Handle;
   DCL_UINT32     u4Adc_sche_id;
}DCL_CTRL_SCHE_ID_GET_HANDLE_T;

typedef struct{
	DCL_UINT8      bEnable;
	DCL_UINT8     *u4ADC_ch_number;	
	DCL_UINT8     u4Adc_max_ch_number;
	PFN_DCLSADC_COMPLETE_MULTI_CALLBACK complete_multi_cb;
}DCL_MULTI_CHANNEL_PARA_T;

#line 401 "interface\\hal\\peripheral\\dcl_adc.h"

#line 200 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_bmt.h"

































 








































































 







 




 




 




 
#line 170 "interface\\hal\\peripheral\\dcl_bmt.h"



 

 
typedef struct
{
    DCL_UINT8 call_state;  
}BMT_CTRL_CALLSTATE_T;

 
typedef struct
{
    DCL_BOOLEAN bEnable;  
}BMT_CTRL_CHARGE_T;

 
typedef enum
{
    DCL_GET_BATTERY_TYPE,  
	DCL_GET_CHECK_BATTERY,  
	DCL_GET_CHECK_CHARGER_VOLTAGE,  
	DCL_GET_CHECK_BATT_TEMP,   
	DCL_GET_MAX_VBAT_LI  
}DCL_GET_CUSTOM_CHR_PARA;

 
typedef struct
{
    DCL_UINT32 u4ChargingParameter;  
    DCL_GET_CUSTOM_CHR_PARA eGetParaCmd;  
}BMT_CTRL_GET_CUSTOMIZED_PARA_T;

 
typedef enum
{
    DCL_BMT_EXT_CHR_DRV_INIT = 0,  
    DCL_BMT_EXT_CHR_ENABLE_INTR,  
    DCL_BMT_EXT_CHR_CHARGE_ENABLE,  
    DCL_BMT_EXT_CHR_SET_CHARGE_CURRENT,  
    DCL_BMT_EXT_CHR_GET_CHR_FAC_MEASURE_SUPPORT,  
    DCL_BMT_EXT_CHR_GET_CHR_FAC_CHECK_SUPPORT,  
    DCL_BMT_EXT_CHR_CHECK_CHR_STATUS,  
    DCL_BMT_EXT_CHR_GET_CHR_STATUS,  
    DCL_BMT_EXT_CHR_GET_VBAT,  
    DCL_BMT_EXT_CHR_GET_ISENSE,  
    DCL_BMT_EXT_CHR_GET_VCHARGER,  
    DCL_BMT_EXT_CHR_GET_BAT_TEMP,  
    DCL_BMT_EXT_CHR_GET_CHARGE_FULL,  
    DCL_BMT_EXT_CHR_GET_CHARGE_UNDER_EXTREMETMP,  
    DCL_BMT_EXT_CHR_GET_CHARGE_EXTREMETMP_FULL,  
    DCL_BMT_EXT_CHR_GET_CHARGE_EXTREMETMP_RECHARGE,  
    DCL_BMT_EXT_CHR_GET_CHARGE_HOLD,  
    DCL_BMT_EXT_CHR_GET_CHR_BATT_STATE_TRANSIT_SUPPORT,  
    DCL_BMT_EXT_CHR_CHR_BATT_STATE_TRANSIT,  
    DCL_BMT_EXT_CHR_GET_CURR_CHR_BATT_STATE,  
    DCL_BMT_EXT_CHR_GET_SPECIFIC_CHR_CURRENT,     
    DCL_BMT_EXT_CHR_GET_VBAT_SPECIFIC_FULL_VOLTAGE_STATE  
}DCL_BMT_EXT_CHR_CMD;

 
typedef struct
{
    DCL_BMT_EXT_CHR_CMD eExtChargerCtrl;  
}BMT_CTRL_SET_EXT_CHARGER_T;

 
typedef struct
{
    DCL_BOOLEAN fgBatIsOn;  
}BMT_CTRL_IS_BAT_ON_T;

 
typedef enum 
{
    DCL_BMT_CHARGER_IN = 0,  
    DCL_BMT_CHARGER_OUT,  
    DCL_BMT_OVERVOLPROTECT,  
    DCL_BMT_OVERBATTEMP,  
    DCL_BMT_LOWBATTEMP,  
    DCL_BMT_OVERCHARGECURRENT,  
    DCL_BMT_CHARGE_COMPLETE,  
    DCL_BMT_INVALID_BAT,  
    DCL_BMT_INVALID_CHARGER,  
    DCL_BMT_CHARGE_TIMEOUT,  
    DCL_BMT_LOWCHARGECURRENT,  
    DCL_BMT_CHARGE_BAD_CONTACT,  
    DCL_BMT_BATTERY_BAD_CONTACT,  
    DCL_BMT_USB_CHARGER_IN,  
    DCL_BMT_USB_CHARGER_OUT,  
    DCL_BMT_USB_NO_CHARGING_IN,  
    DCL_BMT_USB_NO_CHARGING_OUT,  
    DCL_BMT_BATT_IN,  
    DCL_BMT_BATT_OUT  
}DCL_BMT_CHR_MSG;

 
typedef struct
{
    DCL_BMT_CHR_MSG ChargerMsg;  
}BMT_CTRL_SENDMES2UEM_T;

 
typedef enum {
	DCL_BMT_CHR_IN = 0,  
	DCL_BMT_CHR_OUT,  
	DCL_BMT_CHR_UNINIT = 0xff  
}DCL_BMT_CHR_STAT;

 
typedef struct
{
    DCL_BMT_CHR_STAT ChargerStat;  
}BMT_CTRL_SET_CHR_STATUS_T;

typedef struct
{
	void*      id;
	DCL_UINT32 timer_index;
}BMT_CTRL_GET_EVENT_SCHEDULER_TIMER_INDEX;

typedef struct
{
	DCL_INT32 VBat;
	DCL_INT32 VSense;
}BMT_CTRL_GET_CHARGING_CURRENT;

typedef struct
{
	DCL_INT32 VBatTmp;
}BMT_CTRL_GET_BAT_TEMP;

typedef struct
{
	DCL_UINT32 AdcEnableBits;
}BMT_CTRL_SET_ADC_ENABLE;

typedef struct
{
	DCL_BOOL    CV_Trim_Enable;
	DCL_BOOL    OV_Trim_Enable;
	DCL_UINT8   CV_Trim_Data;
	DCL_UINT8   OV_Trim_Data;
}BMT_CTRL_SET_CHR_TRIMMING_DATA;

typedef struct
{
	DCL_UINT32   HVBat_CV_Voltage;
	DCL_UINT32   HVBat_OV_Voltage;
}BMT_CTRL_SET_HIGH_BATTERY_DATA;

 


#line 358 "interface\\hal\\peripheral\\dcl_bmt.h"
    






#line 530 "interface\\hal\\peripheral\\dcl_bmt.h"

#line 201 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_pfc.h"

































 


















































 







 




 




 




 
#line 123 "interface\\hal\\peripheral\\dcl_pfc.h"



 
 
 
typedef struct 
{
    DCL_UINT32 ContextID;   
} PFC_CTRL_RESET_T;

 
typedef enum 
{
    PFC_NULL_BUF,  
    PFC_CTRL_BUF,  
    PFC_FLC_BUF,  
    PFC_TEMP_DECODE_DST_BUFF,      
    PFC_INVALID_TYPE = 0x0fffffff      
} pfc_buff_type_enum;

 
typedef struct 
{
    DCL_UINT32 raccm;  
    DCL_UINT32 xaccm;  

    DCL_UINT16 rfcs;  
    DCL_UINT16 xfcs;  

    DCL_UINT16 mru;  
    DCL_UINT16 mtu;  

    DCL_BOOLEAN  is_acfc_tx;  
    DCL_BOOLEAN  is_pfc_tx;  
    DCL_BOOLEAN  is_acfc_rx;  
    DCL_BOOLEAN  is_pfc_rx;  
   
    DCL_UINT8  rflags;  
    DCL_UINT8  xflags;  
    DCL_UINT8  context_id;  
    DCL_UINT16 __align_00;  
} pfc_ahdlc_state_struct;

 
typedef enum
{
    PFC_PPPE_NONE,  
    PFC_PPPE_LCP_FAIL,  
    PFC_PPPE_AUTH_FAIL,  
    PFC_PPPE_IPCP_FAIL,  
    PFC_PPPE_ESC_DETECT,  
    PFC_PPPE_PLUGOUT_DETECT,  
    PFC_PPPE_PPP_GPRS_DIALUP_ALREADY_ACTIVATED,  
    PFC_PPPE_PPP_NOT_ACTIVATED_BY_EXT_MODEM_YET,   
    PFC_PPPE_PPP_ALREADY_ACTIVATED_BY_EXT_MODEM,  
    PFC_PPPE_PPP_NOT_ACTIVATED_BY_WAP_OVER_CSD_YET,   
    PFC_PPPE_PPP_ALREADY_ACTIVATED_BY_WAP_OVER_CSD,   
    PFC_PPPE_PPP_WRONG_CSD_MOD_ID,  
    PFC_PPPE_PPP_DETECT_AT_CMD_DURING_DIALUP,  
    PFC_PPPE_PPP_DETECT_ESCAPE_DURING_DIALUP,  
    PFC_PPPE_PPP_IN_GEMINI_DIALUP_ACTIVATED_BY_ANOTHER_L4C,  
    PFC_PPPE_PPP_DIALUP_ABORTED_BY_L4C_AT_CGACT_0,  
    PFC_PPPE_PPP_DIALUP_WITH_UNSUPPORTED_PDP_TYPE,  
    PFC_PPPE_PPP_PDP_CONTEXT_INCORRECT,  
    PFC_PPPE_PPP_ERROR_CAUSE_ENUM_SIZE  
} pfc_error_cause_enum;

 
typedef struct 
{    
    DCL_BOOLEAN ip_pkt_four_byte_align_required;  
    DCL_BOOLEAN ip_pkt_four_byte_align_already_done;  
    DCL_UINT16 protocol;  
    
    DCL_UINT16 size;  
    DCL_UINT16 used;  
    
    DCL_UINT8 *data_ptr;  
    DCL_UINT8 *cur_ptr;  
    DCL_UINT8 *end_ptr;  

    pfc_buff_type_enum pkt_type;  
    
} pfc_buff_head_struct;

 
typedef struct
{
    pfc_buff_head_struct * dest;  
    pfc_buff_head_struct * src;  
    pfc_ahdlc_state_struct * state;  
    DCL_BOOLEAN fgEncodeResult;  
}PFC_CTRL_ENCODE_T;

 
typedef struct
{
    pfc_buff_head_struct * dest;  
    pfc_buff_head_struct * src;  
    pfc_ahdlc_state_struct * state;  
    pfc_error_cause_enum * rcv_AT_CMD_OR_ESCAPE;  
    DCL_BOOLEAN fgDecodeResult;     
}PFC_CTRL_DECODE_T;

#line 242 "interface\\hal\\peripheral\\dcl_pfc.h"





#line 202 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_rtc.h"








 


































































































 







 


 

 




 






 
#line 231 "interface\\hal\\peripheral\\dcl_rtc.h"



 
 
 

 

 

 

 

 

 

 

 

 


 

 

 

 

 

 

 

 

 




 

 

 

 

 

 

 

 

 

 


 
#line 310 "interface\\hal\\peripheral\\dcl_rtc.h"

 

 




 

 
typedef struct 
{
	DCL_UINT8		rtc_sec;     
	DCL_UINT8		rtc_min;     
	DCL_UINT8		rtc_hour;    
	DCL_UINT8		rtc_day;     
	DCL_UINT8		rtc_mon;     
	DCL_UINT8		rtc_wday;    
	DCL_UINT8		rtc_year;    
}DCL_RTC_DATA_T;

 
typedef struct
{
   	DCL_BOOLEAN fgBootloaderPowerOn;  
}RTC_CTRL_BOOTLOADER_POWERON_T;

 
typedef enum
{
    DCL_RTC_PDN1 = 0,  
    DCL_RTC_PDN2,  
	DCL_RTC_MAX_INDEX  
}DCL_RTC_PDN_INDEX_T;

 
typedef struct
{
	DCL_RTC_PDN_INDEX_T PDNIndex;  
	DCL_UINT16 fgConfigBit;  
	DCL_UINT16 PDNValue;  
}RTC_CTRL_CONFIG_PDN_BIT_T;

 
typedef struct
{
    DCL_UINT8 u1ALEn;  
    DCL_UINT8 u1TCEn;  
}RTC_CTRL_CONFIG_AL_TC_T;

 


 
typedef struct
{
	DCL_BOOLEAN fgMetaReset;  
}RTC_CTRL_FT_POWEROFF_T;

 
typedef struct
{
    DCL_UINT8 u1Sec;		 
    DCL_UINT8 u1Min;		 
    DCL_UINT8 u1Hour;	     
    DCL_UINT8 u1Day;		 
    DCL_UINT8 u1Mon;		 
    DCL_UINT8 u1WDay;	     
    DCL_UINT8 u1Year;	     
    DCL_BOOLEAN ALEnBit;     
}RTC_CTRL_GET_ALARM_TIME_T;

 
typedef struct
{
    DCL_UINT8 u1Sec;		 
    DCL_UINT8 u1Min;		 
    DCL_UINT8 u1Hour;		 
    DCL_UINT8 u1Day;		 
    DCL_UINT8 u1Mon;		 
    DCL_UINT8 u1WDay;		 
    DCL_UINT8 u1Year;		 
}RTC_CTRL_GET_TIME_T;

 
typedef enum {
    DCL_RTC_GPIO_NO_PULL = 0,    
    DCL_RTC_GPIO_PULL_DOWN,      
    DCL_RTC_GPIO_PULL_UP         
}DCL_RTC_GPIO_PULL_TYPE_T;

 
typedef enum {
    DCL_RTC_GPIO_DS_4mA = 0,     
    DCL_RTC_GPIO_DS_8mA,         
    DCL_RTC_GPIO_DS_12mA,        
    DCL_RTC_GPIO_DS_16mA         
}DCL_RTC_GPIO_DRIVING_STRENGTH_T;

 
typedef struct
{
    DCL_RTC_GPIO_PULL_TYPE_T rPullType;  
    DCL_RTC_GPIO_DRIVING_STRENGTH_T rPullStrength;  
    DCL_BOOLEAN InputValue;  
    DCL_BOOLEAN OutputValue;   
    DCL_BOOLEAN is_SmithTrigger;   
    DCL_BOOLEAN is_SlewRateControl;   
}RTC_CTRL_GPIO_TIME_T;

 


 
typedef struct
{
    void (*RTC_TCCallback)(void);  
    void (*RTC_ALCallback)(void);  
}RTC_CTRL_INIT_T;

 


 
typedef struct
{	
	DCL_BOOLEAN fgIsValid;  
}RTC_CTRL_IS_CONFIG_VALID_T;

 
typedef struct
{
   	DCL_BOOLEAN fgFirstOn;  
}RTC_CTRL_IS_FIRST_ON_T;

 
typedef struct
{	
	DCL_BOOLEAN fgMSFirstPowerOn;  
}RTC_CTRL_IS_MS_FIRSTPOWERON_T;

 
typedef struct
{
    DCL_UINT8 u1Sec;		 
    DCL_UINT8 u1Min;		 
    DCL_UINT8 u1Hour;		 
    DCL_UINT8 u1Day;		 
    DCL_UINT8 u1Mon;		 
    DCL_UINT8 u1WDay;		 
    DCL_UINT8 u1Year;		 
    DCL_BOOLEAN isTimeValid;     
}RTC_CTRL_IS_TIME_VALID_T;

 
typedef struct
{	
	DCL_BOOLEAN fgIsPowerOn;  
}RTC_CTRL_PWIC_CHECK_POWERON_T;

 
typedef struct
{
    DCL_UINT8 u1Sec;		 
    DCL_UINT8 u1Min;		 
    DCL_UINT8 u1Hour;		 
    DCL_UINT8 u1Day;		 
    DCL_UINT8 u1Mon;		 
    DCL_UINT8 u1WDay;		 
    DCL_UINT8 u1Year;		 
}RTC_CTRL_PWIC_FIRST_POWERON_INIT_RTCTIME_T;

 


 


 


 
typedef enum
{
    DCL_RTC_SPAR0 = 0,  
    DCL_RTC_SPAR1,  
	DCL_RTC_SPAR_MAX_INDEX  
}DCL_RTC_SPAR_INDEX_T;

 
typedef struct
{
	DCL_RTC_SPAR_INDEX_T SPARIndex;  
	DCL_UINT16 WriteValue;  
	DCL_UINT16 ReadValue;  
}RTC_CTRL_CONFIG_SPAR_T;

 
typedef struct
{	
	DCL_UINT8 XOSCValue;   
}RTC_CTRL_READ_XOSC_REG_T;

 


 
typedef struct
{
    DCL_UINT8 u1Sec;		 
    DCL_UINT8 u1Min;		 
    DCL_UINT8 u1Hour;		 
    DCL_UINT8 u1Day;		 
    DCL_UINT8 u1Mon;		 
    DCL_UINT8 u1WDay;		 
    DCL_UINT8 u1Year;		 
}RTC_CTRL_SET_ALARM_TIME_T;

 
typedef struct
{	
	DCL_BOOLEAN fgPowerOn;  
}RTC_CTRL_SET_FIRST_POWERON_T;

 


 
typedef struct
{
    DCL_UINT8 u1Sec;		 
    DCL_UINT8 u1Min;		 
    DCL_UINT8 u1Hour;	     
    DCL_UINT8 u1Day;		 
    DCL_UINT8 u1Mon;		 
    DCL_UINT8 u1WDay;	     
    DCL_UINT8 u1Year;	     
}RTC_CTRL_SET_TIME_T;

 
typedef struct
{	
	DCL_UINT16 BBPUReg;  
}RTC_CTRL_SETBBPU_T;

 


 


 


 


 


 
typedef struct
{	
	DCL_UINT8 XOSC_Reg;  
}RTC_CTRL_WRITE_XOSC_REG_T;

typedef struct
{
    DCL_UINT32  dest_mod_id;
    DCL_UINT32  sap_id;
    DCL_UINT32  msg_id;
    DCL_BOOLEAN fgRegisterILM;
}RTC_CTRL_REGISTER_MODULE_ILM_INFO_T;

 
typedef struct
{	
	DCL_UINT16 OSC32CON_Reg;  
}RTC_CTRL_WRITE_OSC32CON_REG_T;

#line 620 "interface\\hal\\peripheral\\dcl_rtc.h"

#line 645 "interface\\hal\\peripheral\\dcl_rtc.h"







#line 893 "interface\\hal\\peripheral\\dcl_rtc.h"

#line 203 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_i2c.h"








 


































































 






 


#line 1 "interface\\hal\\peripheral\\dcl_i2c_owner.h"

































 


























































































 





typedef enum
{
   DCL_I2C_OWNER_CAMERA=0,
   DCL_I2C_OWNER_FM,
   DCL_I2C_OWNER_TP,
   DCL_I2C_OWNER_MS,
   DCL_I2C_OWNER_AF,
   DCL_I2C_OWNER_CAMERA_EEPROM,
   DCL_I2C_OWNER_MUIC,
   DCL_I2C_OWNER_MATV,
   DCL_I2C_OWNER_PS,   
   DCL_I2C_OWNER_EP,  
   DCL_I2C_OWNER_AMS,  
   DCL_I2C_OWNER_GS,  
   DCL_I2C_OWNER_MT6306,   
   DCL_I2C_NUM_OF_OWNER
}DCL_I2C_OWNER;


#line 87 "interface\\hal\\peripheral\\dcl_i2c.h"

  
typedef enum
{
   DCL_I2C_TRANSACTION_FAST_MODE,  
   DCL_I2C_TRANSACTION_HIGH_SPEED_MODE  
}DCL_I2C_TRANSACTION_MODE;

 
typedef enum
{
	DCL_I2C_TRANSACTION_WRITE,  
	DCL_I2C_TRANSACTION_READ,  
	DCL_I2C_TRANSACTION_CONT_WRITE,  
	DCL_I2C_TRANSACTION_CONT_READ,  
	DCL_I2C_TRANSACTION_WRITE_AND_READ  
}DCL_I2C_TRANSACTION_TYPE;

 
typedef enum
{
   DCL_I2C_BATCH_TRANSACTION_SUCCESS,  
   DCL_I2C_BATCH_TRANSACTION_FAIL,  
   DCL_I2C_BATCH_TRANSACTION_IS_BUSY  
}DCL_I2C_BATCH_TRANSACTION_RESULT;

 
typedef enum
{
   DCL_I2C_DMA_NOT_SUPPORT,  
   DCL_I2C_DMA_DUAL_CHANNEL,  
   DCL_I2C_DMA_SINGLE_CHANNEL  
}DCL_I2C_DMA_PROPERTY;

 
typedef struct
{
   DCL_I2C_OWNER eOwner;  
   DCL_BOOL fgGetHandleWait;  
   DCL_UINT8 u1SlaveAddress;  
   DCL_UINT8 u1DelayLen;  
   DCL_I2C_TRANSACTION_MODE eTransactionMode;  
   DCL_UINT32 u4FastModeSpeed;  
   DCL_UINT32 u4HSModeSpeed;  
   DCL_BOOL fgEnableDMA;  
} I2C_CONFIG_T;

 



 


#line 173 "interface\\hal\\peripheral\\dcl_i2c.h"

 
typedef struct
{
   DCL_I2C_TRANSACTION_MODE eTransactionMode;  
}I2C_CTRL_GET_TRANSACTION_MODE_T;
 
typedef struct
{
   DCL_I2C_TRANSACTION_MODE eTransactionMode;  
   DCL_UINT32 u4FastModeSpeed;  
   DCL_UINT32 u4HSModeSpeed;  
}I2C_CTRL_SET_TRANSACTION_SPEED_T;
 
typedef struct
{
   DCL_UINT8 *pu1Data;  
   DCL_UINT32 u4DataLen;  
}I2C_CTRL_SINGLE_WRITE_T, I2C_CTRL_SINGLE_READ_T;
 
typedef struct
{
   DCL_UINT8 *pu1Data;  
   DCL_UINT32 u4DataLen;  
   DCL_UINT32 u4TransferNum;  
}I2C_CTRL_CONT_WRITE_T, I2C_CTRL_CONT_READ_T;
 
typedef struct
{
   DCL_UINT8 *pu1InData;  
   DCL_UINT32 u4InDataLen;  
   DCL_UINT8 *pu1OutData;  
   DCL_UINT32 u4OutDataLen;  
}I2C_CTRL_WRITE_AND_READE_T;
 
typedef union
{
	I2C_CTRL_SINGLE_WRITE_T rSingleWrite;  
  I2C_CTRL_SINGLE_READ_T rSingleRead;  
  I2C_CTRL_CONT_WRITE_T rContWrite;  
  I2C_CTRL_CONT_READ_T rContRead;  
  I2C_CTRL_WRITE_AND_READE_T rWriteAndRead;  
}I2C_CTRL_TRANSACTION_DATA_T;
 
typedef struct
{
   DCL_I2C_TRANSACTION_TYPE eTransactionType;  
   I2C_CTRL_TRANSACTION_DATA_T rTansactionData;  
}I2C_CTRL_BATCH_DATA_T;
 
typedef struct
{
   DCL_UINT32 u4BatchNum;  
   I2C_CTRL_BATCH_DATA_T *prBatchData;  
}I2C_CTRL_BATCH_TRANSACTION_T;
 
typedef struct
{
   DCL_I2C_BATCH_TRANSACTION_RESULT eBatchTransactionResult;  
   DCL_UINT32 u4BatchNum;   
}I2C_CTRL_GET_BATCH_TRANSACTION_RESULT_T;
 
typedef struct
{
   DCL_I2C_DMA_PROPERTY eDMAProperty;  
}I2C_CTRL_GET_DMA_PROPERTY_T;
 
typedef struct
{
   DCL_BOOL fgEnableDMA;  
}I2C_CTRL_ENABLE_DMA_T;
 
typedef struct
{
   DCL_UINT8 u1SlaveAddress;  
}I2C_CTRL_SET_SLAVE_ADDRESS_T;

#line 282 "interface\\hal\\peripheral\\dcl_i2c.h"




#line 508 "interface\\hal\\peripheral\\dcl_i2c.h"



#line 204 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_aux.h"








 




















































 





 


 


 

 
#line 91 "interface\\hal\\peripheral\\dcl_aux.h"

 
typedef struct 
{
   DCL_UINT32 u4HookDebounce;  
   DCL_UINT32 u4MicDebounce;    
   DCL_UINT32 u4PlugoutDebounce;  
   DCL_UINT32 u4PwmDelay;  
   DCL_UINT32 u4CmpWidth;  
   DCL_UINT32 u4CmpThreshold;  
   DCL_UINT32 u4VthWidth;  
   DCL_UINT32 u4VthThreshold;  
   DCL_UINT32 u4MbiasWidth;  
   DCL_UINT32 u4MbiasThreshold;  
} AUX_ACCDET_CONFIG_DATA_DEFINE_T;

 
typedef struct 
{
   AUX_ACCDET_CONFIG_DATA_DEFINE_T *rAccdetConfigData;  
} AUX_CTRL_GET_ACCDET_CONFIG_DATA_T, AUX_CTRL_SET_ACCDET_CONFIG_DATA_T;

 
typedef enum
{
   DCL_AUX_AUDIO_STATUS_CLOSED,  
   DCL_AUX_AUDIO_STATUS_OPEN  
}DCL_AUX_AUDIO_STATUS;

 
typedef struct
{
   DCL_AUX_AUDIO_STATUS eAudioStatus;  
}AUX_CTRL_SET_AUDIO_STATUS_T;


#line 141 "interface\\hal\\peripheral\\dcl_aux.h"





#line 205 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_pwm.h"








 






































































































 
#line 1 "kal\\include\\kal_non_specific_general_types.h"
#line 117 "interface\\hal\\peripheral\\dcl_pwm.h"










 
typedef struct
{
   DCL_UINT8  pwm_level; 
   DCL_UINT32 pwm_freq; 
   DCL_UINT8  pwm_duty; 
}PWM_DATA_T;

typedef struct
{
   DCL_UINT8  pwm_level; 

}PWM_LEVEL_T;

typedef struct
{
   DCL_UINT8 pwm_channel; 

}PWM_CHANNEL_T;

typedef struct
{
   kal_uint32 freq; 
   kal_uint8 duty;  
}PWM_CMD_CONFIG_OLD_T;

typedef struct
{
 kal_uint8  channel; 
 kal_uint32 (*pwm_array)[2];
  
}PWM_ARRAY_T;




typedef struct
{
   DCL_UINT8  pitch;   
   DCL_UINT8  volume;  
   DCL_UINT16 on_duration;   
   DCL_UINT16 off_duration;   
}BuzNoteStruct;

typedef struct
{
   DCL_UINT8 volume;
   DCL_UINT8 stop;
   DCL_UINT32 handle;   
   BuzNoteStruct NotesData;
   kal_bool (*GetNotesCallbac)(BuzNoteStruct *Buz);
   void (*EndofAlterPlay)(void);
}ALterNoteStruct;

 
typedef enum
{
   PWM_FIFO_MODE=0,
   PWM_MEMO_MODE,
   PWM_OLD_MODE,
   PWM_RANDOM_MODE,
   PWM_MODE_COUNT
}pwm_mode_e;

 
typedef struct 
{
   kal_uint32 data0;
   kal_uint32 data1;
   kal_uint16 repeat_count;  
   kal_uint8  stop_bitpos;  
   kal_uint16 high_dur;  
   kal_uint16 low_dur;  
   kal_uint16 guard_dur;  
   kal_uint8  idle_output;  
   kal_uint8  guard_output;  
   void       (*pwm_callback)(kal_uint32 pwm_num);
}pwm_fifo_para_s;

 
typedef struct 
{
   kal_uint32 *buf_addr;
   kal_uint16 buf_size;
   kal_uint16 repeat_count;  
   kal_uint8  stop_bitpos;  
   kal_uint16 high_dur;  
   kal_uint16 low_dur;  
   kal_uint16 guard_dur;  
   kal_uint8  idle_output;  
   kal_uint8  guard_output;  
   void       (*pwm_callback)(kal_uint32 pwm_num);
}pwm_memo_para_s;

 
typedef struct 
{
   kal_uint16 data_width;
   kal_uint16 threshold;
   kal_uint16 repeat_count;  
   kal_uint16 guard_dur;  
   kal_uint8  idle_output;  
   kal_uint8  guard_output;  
   void       (*pwm_callback)(kal_uint32 pwm_num);
}pwm_old_para_s;

 
typedef struct 
{
   kal_uint32 *buf0_addr;
   kal_uint32 *buf1_addr;
   kal_uint16 buf0_size;  
   kal_uint16 buf1_size;  
   kal_uint16 high_dur;  
   kal_uint16 low_dur;  
   kal_uint8  idle_output;  
   void       (*pwm_invalid_cb)(kal_uint32 pwm_num, kal_uint8 buf_num);
   void       (*pwm_underflow_cb)(kal_uint32 pwm_num);
}pwm_random_para_s;

typedef struct
{
   DCL_UINT32 clksrc; 
   DCL_UINT32 clkdiv; 
}PWM_CONFIG_T;




#line 328 "interface\\hal\\peripheral\\dcl_pwm.h"
   
#line 339 "interface\\hal\\peripheral\\dcl_pwm.h"
   


  
typedef struct
{
   DCL_UINT8 uEnCount; 
}PWM_CTRL_SS_T;

  
typedef struct
{
   DCL_UINT32 u4ClkSel; 
   DCL_UINT32 u4ClkDiv; 
}PWM_CTRL_CI_T;

  
typedef struct
{
   DCL_UINT32 *pu4BufAddr; 
   DCL_UINT16  u2BufSize;  
   DCL_BOOL   fgIsBuf0;    
}PWM_CTRL_SBV_T;

  
typedef struct
{
   DCL_UINT32 u4ClkSel; 
   DCL_UINT16 u2DelayCnt; 
}PWM_CTRL_SD_T;

  
typedef struct
{
   DCL_BOOLEAN bTestSel; 
}PWM_CTRL_TS_T;

  
typedef struct
{
   DCL_UINT32 mode; 
   void *para; 
}PWM_CTRL_CONFIG_T;

  




 
typedef struct
{
   DCL_UINT16 duty; 
}PWM_DUTY_T;

 
typedef struct
{
   kal_uint32 freq;  
   kal_uint16 steps; 
}PWM_CONFIG_FREQ_STEPS_T;


typedef struct
{
   DCL_UINT32 freq;
   DCL_UINT8  duty;
}ALERTER_CONFIGURE_T;

typedef struct
{
   DCL_BOOL poweron;
}ALERTER_PWROPEN_T;

typedef struct
{
   kal_bool (*GetNotecallbac)(BuzNoteStruct *Buz);
   void (*endofAlter)(void);
}ALERTER_PLAYNOTE_T;

typedef struct
{
   DCL_UINT8 volumn;
}ALERTER_SETVOLUMN_T;

typedef struct
{
   DCL_UINT8   mode;
   DCL_UINT8   clock;
}ALERTER_CONFIG_T;

typedef struct
{
   kal_uint8 output;
}ALERTER_OUTPUT_T;

typedef struct
{
   kal_uint8 level;
}ALERTER_LEVEL_T;

#line 448 "interface\\hal\\peripheral\\dcl_pwm.h"


#line 464 "interface\\hal\\peripheral\\dcl_pwm.h"





#line 635 "interface\\hal\\peripheral\\dcl_pwm.h"


#line 206 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dclH_kbd.h"








 





































 









#line 72 "interface\\hal\\peripheral\\dclH_kbd.h"




#line 93 "interface\\hal\\peripheral\\dclH_kbd.h"


#line 112 "interface\\hal\\peripheral\\dclH_kbd.h"



 
typedef struct
{
   DCL_UINT16   u2KeyNum; 
} HKBD_CTRL_KNUM_T;


 
typedef struct
{
   DCL_UINT32 kbdmap_reg; 
   DCL_UINT32 kbdmap_reg1; 
   DCL_UINT32 kbdmap_reg2; 
} HKBD_CTRL_STA_MAP_T;

 
typedef struct
{
	DCL_BOOL sta; 
	DCL_UINT8 key; 
}HKBD_CTRL_KEY_STA_T;

 
typedef struct
{
   DCL_BOOL     fgPKP; 
} HKBD_CTRL_POWKEY_T;





#line 285 "interface\\hal\\peripheral\\dclH_kbd.h"

#line 207 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dclS_kbd.h"








 









































 





#line 87 "interface\\hal\\peripheral\\dclS_kbd.h"



 
typedef enum {
      DCL_kbd_onekey_press=0, 
      DCL_kbd_onekey_release, 




      DCL_kbd_onekey_longpress, 
      DCL_kbd_onekey_repeated, 
      DCL_kbd_onekey_fullpress, 
      DCL_kbd_twokey_detection_enable, 
      DCL_kbd_threekey_detection_enable, 
      DCL_kbd_multikey_detection_disable 
} DCL_KBD_EVENT;

 
typedef enum {
   DCL_kbd_1_key_det_mode = 0,  
   DCL_kbd_2_keys_det_mode, 
   DCL_kbd_3_keys_det_mode  
}DCL_kbd_key_det_mode;

 
typedef struct
{
   DCL_BOOL     bFlag; 
   DCL_UINT8    Det_Mode; 
} SKBD_CTRL_MODE_T;

 
typedef struct
{
	DCL_UINT8 keycnt; 
}SKBD_CTRL_KEY_CNT_T;

 
typedef struct
{
   DCL_KBD_EVENT   Keyevent; 



   DCL_UINT8   Keydata[1]; 





} SKBD_CTRL_KEYDATA_T;

 
typedef struct
{
 SKBD_CTRL_KEYDATA_T* keydata; 
 DCL_BOOL specify_read; 
 
 DCL_UINT32 read_pointer; 
 DCL_UINT32* current_read_pointer; 

}SKBD_CTRL_PEEKDATA_T;


 
typedef struct
{
   DCL_BOOL     fgIMK; 
   DCL_UINT8    uKey;  
} SKBD_CTRL_MULTIKEY_T;


 
typedef struct
{
   DCL_UINT8    uKey; 
   DCL_BOOL fgIKBS; 
} SKBD_CTRL_KEYSUPPORT_T;

 
typedef struct
{
   DCL_UINT32   u4Tick; 
} SKBD_CTRL_TIME_T;

 
typedef struct
{
	DCL_UINT8 keydata; 
}SKBD_CTRL_PUTKEY_T;

typedef struct
{
  DCL_UINT32 *number;
  DCL_UINT8 *two_step;
}SKBD_CTRL_FIND_TWO_STEP_T;


#line 215 "interface\\hal\\peripheral\\dclS_kbd.h"




#line 327 "interface\\hal\\peripheral\\dclS_kbd.h"

#line 208 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_sts.h"








 






























































































 








 






 






 








 
#line 162 "interface\\hal\\peripheral\\dcl_sts.h"
  


 
 



typedef enum
{
    RTP_Type = 0,
    CTP_Type
    
}DCL_TP_TYPE_Enum;

typedef struct
{
    DCL_TP_TYPE_Enum TouchPanelType;
}DCL_TP_TYPE_T;



typedef enum
{
    TP_PARAM_GET = 0,
    TP_PARAM_SET,
    TP_PARAM_RESET
}TP_CTRL_PARAM_TYPE;

typedef struct {
   kal_uint32 ts_debounce_time;
   kal_uint32 touch_panel_cali_check_offset;
   kal_uint32 min_pen_move_offset;
   kal_uint32 hand_writing_max_offset;
   kal_uint32 nonhand_writing_max_offset;
   kal_uint32 max_stroke_move_offset;
   kal_uint32 multiple_point_selection;
   kal_uint32 touch_pressure_threshold_high;
   kal_uint32 touch_pressure_threshold_low;
   kal_uint32 pressure_check_boundary;
   kal_uint32 pressure_shifting_boundary;
   kal_uint32 border_pass_criterion;
   kal_uint32 non_border_pass_criterion;
   kal_uint32 border_range;
   kal_uint32 jitter_circuit_interval;
   kal_uint32 Dump_Screen;
   kal_uint32 reserve_parameter1; 
   kal_uint32 reserve_parameter2;
   kal_uint32 reserve_parameter3;
   kal_uint32  height; 
   kal_uint32  width;  
} TouchPanel_EM_custom_data_struct; 

typedef struct
{
    TP_CTRL_PARAM_TYPE type;
    TouchPanel_EM_custom_data_struct* pEmData;
}DCL_CTRL_CUSTOM_PARAM_T;



typedef struct
{
 kal_int32 ts_debounce_time_min;                             
 kal_int32 ts_debounce_time_max;
kal_int32 touch_panel_cali_check_offset_min;         
kal_int32 touch_panel_cali_check_offset_max;
kal_int32 min_pen_move_offset_min;                       
kal_int32 min_pen_move_offset_max;
kal_int32 hand_writing_max_offset_min;                  
kal_int32 hand_writing_max_offset_max;
kal_int32 nonhand_writing_max_offset_min;            
kal_int32 nonhand_writing_max_offset_max;
kal_int32 max_stroke_move_offset_min;                  
kal_int32 max_stroke_move_offset_max;
kal_int32 multiple_point_selection_min;                    
kal_int32 multiple_point_selection_max;
kal_int32 touch_pressure_threshold_high_min;        
kal_int32 touch_pressure_threshold_high_max;
kal_int32 pressure_check_boundary_min;                
kal_int32 pressure_check_boundary_max;
kal_int32 pressure_shifting_boundary_min;              
kal_int32 pressure_shifting_boundary_max;
kal_int32 border_pass_criterion_min;                        
kal_int32 border_pass_criterion_max;
kal_int32 nonborder_pass_criterion_min;                  
kal_int32 nonborder_pass_criterion_max;
kal_int32 border_range_min;                                     
kal_int32 border_range_max;
kal_uint32 jitter_circuit_interval_min;
kal_uint32 jitter_circuit_interval_max;
kal_uint32 Dump_Screen_min;
kal_uint32 Dump_Screen_max;
kal_int32 reserve_parameter1_min;                           
kal_int32 reserve_parameter1_max;
kal_int32 reserve_parameter2_min;                           
kal_int32 reserve_parameter2_max;
kal_int32 reserve_parameter3_min;                           
kal_int32 reserve_parameter3_max;
}TP_PARAM_RANGE;


typedef struct
{
    TP_CTRL_PARAM_TYPE type;
    TP_PARAM_RANGE* pEmDataRange;
}DCL_CTRL_CUSTOM_PARAM_RANGE_T;


typedef struct
{
    kal_uint32 x_micronmeter;
    kal_uint32 y_micronmeter;
    kal_uint32 x_coord;
    kal_uint32 y_coord;
}DCL_CTRL_MICRONMETER_COORD_T;





typedef enum {
      DCL_PEN_DOWN,       
      DCL_PEN_UP,       
      DCL_PEN_MOVE,     
      DCL_PEN_LONGTAP,       
      DCL_PEN_REPEAT,    
      DCL_PEN_ABORT,     
      DCL_TP_UNKNOWN_EVENT, 
      DCL_STROKE_MOVE,      
      DCL_STROKE_STATICAL,  
      DCL_STROKE_HOLD,  
      DCL_PEN_LONGTAP_HOLD,  
      DCL_PEN_REPEAT_HOLD,    
      DCL_STROKE_DOWN=0xc0,           
      DCL_STROKE_LONGTAP=0x7e,    
      DCL_STROKE_UP=0x7f 
} DCL_TP_Event_enum;









 

typedef struct
{
   
   DCL_UINT16 u2Event; 
    
   DCL_UINT16 u2x;
   DCL_UINT16 u2y;
   DCL_UINT16 u2z; 
} DCL_TP_SINGLE_EVENT_T;

typedef struct
{
   DCL_UINT16   uModel; 
   DCL_UINT16   uPadding; 
   DCL_UINT32  u2Time_stamp;
   DCL_TP_SINGLE_EVENT_T rPoints[5];
} STS_CTRL_GET_T;


typedef struct
{
   DCL_BOOL fgEnable;
} STS_CTRL_EN_T;


typedef enum {
   DCL_TP_CALI_SINGLE_POINT,
   DCL_TP_CALI_LEFT_TOP_RIGHT_DOWN_MAX,
   DCL_TP_CALI_LEFT_TOP_RIGHT_DOWN_MIN,
   DCL_TP_CALI_RIGHT_TOP_LEFT_DOWN_MAX,
   DCL_TP_CALI_RIGHT_TOP_LEFT_DOWN_MIN,
   DCL_TP_CALI_LEFT_TOP_DOWN_MAX,
   DCL_TP_CALI_LEFT_TOP_DOWN_MIN,
   DCL_TP_CALI_RIGHT_TOP_DOWN_MAX,
   DCL_TP_CALI_RIGHT_TOP_DOWN_MIN, 
   DCL_TP_CALI_TOP_RIGHT_LEFT_MAX,
   DCL_TP_CALI_TOP_RIGHT_LEFT_MIN, 
   DCL_TP_CALI_DOWN_RIGHT_LEFT_MAX,
   DCL_TP_CALI_DOWN_RIGHT_LEFT_MIN,
   DCL_TP_CALI_FINISH
} DCL_TP_CALIBRATION_MODE_Enum;
#line 353 "interface\\hal\\peripheral\\dcl_sts.h"
typedef struct  
{       
kal_uint8 ref_count; kal_uint8 lp_reserved; kal_uint16 msg_len;
	kal_bool 	result;
	DCL_TP_CALIBRATION_MODE_Enum mode;
}tp_cali_done_struct; 


typedef struct
{   
   DCL_INT16 i2x;   
   DCL_INT16 i2y;    
} TS_COORD_T;
typedef struct
{
   TS_COORD_T *rpPoint;
   DCL_UINT16 u2Num;
} STS_CTRL_SC_T;


typedef struct
{  
     
   double x_slope;
   double x_offset; 
       
   double y_slope;
   double y_offset; 
} TS_CALI_T; 
typedef struct
{
   TS_CALI_T rCali;
} STS_CTRL_RC_T;


typedef struct
{
   TS_CALI_T rCali;
} STS_CTRL_SETC_T;


typedef struct
{
   DCL_BOOL fgSkipUnreleaseEnable;
} STS_CTRL_RESET_T;


typedef struct
{
   DCL_UINT32 u4Low;
   DCL_UINT32 u4High;
} STS_CTRL_CSP_T;


typedef struct
{
   DCL_UINT16 u2Pen_offset;
   DCL_UINT16 u2Stroke_offset;
   DCL_UINT16 u2Longtap_pen_offset;
   DCL_UINT16 u2Longtap_stroke_offset;
} STS_CTRL_CMO_T;


typedef struct
{  
   TS_COORD_T rMin;
   TS_COORD_T rMax;
} TS_HandArea_T;
typedef struct
{
   TS_HandArea_T *rArea;
   DCL_UINT16 u2n;
   TS_HandArea_T *rExtArea;
} STS_CTRL_CHW_T;


typedef struct
{
   DCL_UINT32 u4Longtap;
   DCL_UINT32 u4Repeat;
   DCL_UINT32 u4Handwriting_longtap;
} STS_CTRL_CTP_T;


typedef struct
{
   DCL_BOOL fgPowerOn;
} STS_CTRL_POWER_ON_T;


typedef enum 
{
   DCL_CTP_ACTIVE_MODE,
   DCL_CTP_IDLE_MODE,
   DCL_CTP_SLEEP_MODE,
   DCL_CTP_GESTURE_DETECTION_MODE,
   DCL_CTP_MULTIPLE_POINT_MODE,
   DCL_CTP_FIRMWARE_UPDATE,
   DCL_CTP_FM_ENABLE,
   DCL_CTP_FM_DISABLE
}DCL_CTP_DEVICE_MODE_enum;

typedef struct
{
   DCL_CTP_DEVICE_MODE_enum mode;
} STS_CTRL_SET_DEVICE_T;


typedef enum 
{
   DCL_CTP_COMMAND_GET_VERSION,
   DCL_CTP_COMMAND_GET_CONFIG,
   DCL_CTP_COMMAND_LOAD_INT_CONFIG,
   DCL_CTP_COMMAND_LOAD_EXT_CONFIG,
   DCL_CTP_COMMAND_GET_DIFF_DATA,
   DCL_CTP_COMMAND_GET_FW_BUFFER,
   DCL_CTP_COMMAND_DO_FW_UPDATE
}DCL_CTP_CTRL_COMMAND_enum;

typedef struct
{
   DCL_UINT32 u4Command;
   void *pVoid1;
   void *pVoid2;
} STS_CTRL_COMMAND_T;

#line 497 "interface\\hal\\peripheral\\dcl_sts.h"






#line 209 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_msdc.h"

































 









































































































 






#line 1 "interface\\hal\\peripheral\\dcl.h"








 






















































































































































 

#line 697 "interface\\hal\\peripheral\\dcl.h"

#line 148 "interface\\hal\\peripheral\\dcl_msdc.h"
#line 149 "interface\\hal\\peripheral\\dcl_msdc.h"



 







 
typedef DCL_UINT32				DCL_SDC_CMD_STATUS;


 
typedef enum{
	DCL_SDIO_FIX,	
	DCL_SDIO_INC	
}DCL_SDIO_cmd53_op_enum;

 
typedef enum{
	DCL_SDIO_FUCN_0=0,
	DCL_SDIO_FUCN_1,
	DCL_SDIO_MAX_FUCN_ID, 
	DCL_SDIO_FUCN_MEM=0x1000
}DCL_SDIO_function_id_enum;

 
typedef enum{
	DCL_BIT_1W = 0x0000,
	DCL_BIT_4W = 0x0002
}DCL_SD_BITWIDTH;

typedef void ( *MSDC_CALLBACK) (void);




 
 
typedef DCL_SDC_CMD_STATUS (*DCL_SINGLE_BLK_RD) (DCL_UINT32 data_adrs, DCL_UINT32 *rxbuffer);
typedef DCL_SDC_CMD_STATUS (*DCL_MUL_BLK_RD) (DCL_UINT32 data_adrs, DCL_UINT32 *rxbuffer, DCL_UINT32 num);
typedef DCL_SDC_CMD_STATUS (*DCL_SINGLE_BLK_WR) (DCL_UINT32 address, DCL_UINT32 *txbuffer);
typedef DCL_SDC_CMD_STATUS (*DCL_MUL_BLK_WR) (DCL_UINT32 address, DCL_UINT32 *txbuffer, DCL_UINT32 num);
typedef DCL_SDC_CMD_STATUS (*DCL_SD_INITITALIZE) (void);
typedef DCL_SDC_CMD_STATUS (*DCL_SET_PRE_ERASE_CNT) (DCL_UINT32 num);
typedef DCL_SDC_CMD_STATUS (*DCL_SD_SET_CALLBACK)(MSDC_CALLBACK callback1, MSDC_CALLBACK callback2, MSDC_CALLBACK callback3,MSDC_CALLBACK callback4,MSDC_CALLBACK callback5,MSDC_CALLBACK callback6);
typedef DCL_SDC_CMD_STATUS (*DCL_SET_READ_TEST_FLAG)(kal_uint32 readTestFlag);
typedef	DCL_SDC_CMD_STATUS(*DCL_SD_READ_TEST)(void);
typedef	DCL_SDC_CMD_STATUS(*DCL_SD_SET_UPLL_CLOCK_TEST)(void);
typedef	DCL_SDC_CMD_STATUS(*DCL_SD_ERASE_BLK)(DCL_UINT32 startSector, DCL_UINT32 sectorNum);

typedef struct
{
	DCL_SINGLE_BLK_RD singleBlkRd;
	DCL_MUL_BLK_RD mulBlkRd;
	DCL_SINGLE_BLK_WR singleBlkWr;
	DCL_MUL_BLK_WR mulBlkWr;
	DCL_SD_INITITALIZE sdInititalize;
	DCL_SET_PRE_ERASE_CNT setPreEraseCnt;
	DCL_SD_SET_CALLBACK sdSetCallBack;
	DCL_SET_READ_TEST_FLAG sdSetReadTestFlag;
	DCL_SD_READ_TEST sdSetReadTest;	
	DCL_SD_SET_UPLL_CLOCK_TEST sdSetUpllClock;
	DCL_SD_ERASE_BLK eraseBlk;
}SDDriver_t;


typedef DCL_BOOL (*DCL_SDIO_REG_WR) (DCL_SDIO_function_id_enum function, DCL_UINT32 addr, DCL_UINT32 data, DCL_SDIO_cmd53_op_enum op);
typedef DCL_BOOL (*DCL_SDIO_REG_WR_ISR) (DCL_SDIO_function_id_enum function, DCL_UINT32 addr, DCL_UINT32 data, DCL_SDIO_cmd53_op_enum op);
typedef DCL_BOOL (*DCL_SDIO_DATA_WR) (DCL_SDIO_function_id_enum function, DCL_UINT32 addr, DCL_UINT8  *data, DCL_SDIO_cmd53_op_enum op, DCL_UINT32 count, DCL_BOOL block);
typedef DCL_BOOL (*DCL_SDIO_REG_RD) (DCL_SDIO_function_id_enum function, DCL_UINT32 addr, DCL_UINT32 *data, DCL_SDIO_cmd53_op_enum op);
typedef DCL_BOOL (*DCL_SDIO_DATA_RD) (DCL_SDIO_function_id_enum function, DCL_UINT32 addr, DCL_UINT8  *data, DCL_SDIO_cmd53_op_enum op, DCL_UINT32 count, DCL_BOOL block);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_CHECK_INTR) (DCL_SDIO_function_id_enum function, DCL_BOOL *pending);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_ENABLE_INTR) (DCL_SDIO_function_id_enum function, DCL_BOOL enable);
typedef DCL_UINT32 (*DCL_SDIO_INIT) (void);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_ABORT) (DCL_SDIO_function_id_enum function);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_SW_RST) (void);
typedef DCL_UINT32 (*DCL_SDIO_QRY_BLOCK_SIZE) (DCL_SDIO_function_id_enum function);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_SET_BLOCK_SIZE) (DCL_SDIO_function_id_enum function, DCL_UINT32 size);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_GET_BLOCK_SIZE) (DCL_SDIO_function_id_enum function, DCL_UINT32 *size);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_ENABLE_IO) (DCL_SDIO_function_id_enum function, DCL_BOOL enable);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_SET_BUS_WIDTH) (DCL_SD_BITWIDTH bus);
typedef void (*DCL_SDIO_GET_CCCR) (DCL_UINT8 *buf, DCL_UINT32 bufLen);
typedef void (*DCL_SDIO_GET_FBR) (DCL_UINT8 *buf, DCL_UINT32 bufLen);

typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_CMD52_READ)(DCL_SDIO_function_id_enum function, DCL_UINT32 addr, DCL_UINT8 *rdata, DCL_UINT8 *r5resp);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_CMD52_WRITE)(DCL_SDIO_function_id_enum function, DCL_UINT32 addr, DCL_UINT8 wdata, DCL_UINT8 *r5resp);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_CMD52_WRITE_READ)(DCL_SDIO_function_id_enum function, DCL_UINT32 addr, DCL_UINT8 wdata, DCL_UINT8 *rdata, DCL_UINT8 *r5resp);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_CMD53_READ)(DCL_SDIO_function_id_enum function, DCL_UINT32 addr, DCL_UINT32 data, DCL_SDIO_cmd53_op_enum op, DCL_UINT32 count, DCL_BOOL block, DCL_UINT8 *r5resp);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_CMD53_WRITE)(DCL_SDIO_function_id_enum function, DCL_UINT32 addr, DCL_UINT32 data, DCL_SDIO_cmd53_op_enum op, DCL_UINT32 count, DCL_BOOL block, DCL_UINT8 *r5resp);
typedef void (*DCL_SDIO_int_registration)(DCL_SDIO_function_id_enum function, void (func)(void));
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_MCUDMA_READ)(DCL_UINT32 *rdata);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_MCUDMA_WRITE)(DCL_UINT32 wdata);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_CLKPADRED_READ)(DCL_UINT32 *rdata);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_CLKPADRED_WRITE)(DCL_UINT32 wdata);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_FORCEMCU_READ)(DCL_UINT32 *rdata);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_FORCEMCU_WRITE)(DCL_UINT32 wdata);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_GETCLK)(DCL_UINT32 *rdata);
typedef DCL_SDC_CMD_STATUS (*DCL_SDIO_SETCLK)(DCL_UINT32 wdata);



typedef struct
{
	DCL_SDIO_REG_WR regWr;
	DCL_SDIO_REG_WR_ISR regWrInIsr;
	DCL_SDIO_DATA_WR dataWr;
	DCL_SDIO_REG_RD regRd;
	DCL_SDIO_DATA_RD dataRd;
	DCL_SDIO_CHECK_INTR checkIntr;
	DCL_SDIO_ENABLE_INTR enableIntr;
	DCL_SDIO_INIT sdioInititalize;
	DCL_SDIO_ABORT abort;
	DCL_SDIO_SW_RST swRst;
	DCL_SDIO_QRY_BLOCK_SIZE qryBlkSize;
	DCL_SDIO_SET_BLOCK_SIZE setBlkSize;
	DCL_SDIO_GET_BLOCK_SIZE getBlkSize;
	DCL_SDIO_ENABLE_IO enableIO;
	DCL_SDIO_SET_BUS_WIDTH setBusWidth;
	DCL_SDIO_GET_CCCR getCCCR;
	DCL_SDIO_GET_FBR getFBR;

    DCL_SDIO_CMD52_READ cmd52_read;
    DCL_SDIO_CMD52_WRITE cmd52_write;
    DCL_SDIO_CMD52_WRITE_READ cmd52_write_read;
    DCL_SDIO_CMD53_READ cmd53_read;
    DCL_SDIO_CMD53_WRITE cmd53_write;
    DCL_SDIO_int_registration hisr_callback;
    DCL_SDIO_MCUDMA_READ mcudma_read;
    DCL_SDIO_MCUDMA_WRITE mcudma_write;
    DCL_SDIO_CLKPADRED_READ clkpadred_read;
    DCL_SDIO_CLKPADRED_WRITE clkpadred_write;
    DCL_SDIO_FORCEMCU_READ forcemcu_read;
    DCL_SDIO_FORCEMCU_WRITE forcemcu_write;
    DCL_SDIO_GETCLK getclk;
    DCL_SDIO_SETCLK setclk;
    
}SDIODriver_t;

typedef void (* DCL_MSDC_PDN)(DCL_BOOLEAN pwDown);

typedef struct
{
	
	DCL_MSDC_PDN modulePDN;
}MSDCDriver_t;




 
#line 311 "interface\\hal\\peripheral\\dcl_msdc.h"





 
#line 346 "interface\\hal\\peripheral\\dcl_msdc.h"




 
 
typedef struct
{
	DCL_UINT32	u4Sector; 
	DCL_UINT32	u4Sectors; 
	void		*bufferAddr; 
} SD_CTRL_READ_T;

 
typedef struct
{
	DCL_UINT32	u4Sector; 
	DCL_UINT32	u4Sectors; 
	void		*bufferAddr; 
} SD_CTRL_WRITE_T;

 
typedef struct
{
	DCL_UINT32	u4Sector; 
	DCL_UINT32	u4Size; 
	void		*bufferAddr; 
} SD_CTRL_READ_ODD_T;

 
typedef struct
{
	DCL_UINT32	u4Sector; 
	DCL_UINT32	u4Size; 
	void		*bufferAddr; 
} SD_CTRL_WRITE_ODD_T;

 
typedef struct
{
	DCL_UINT32	u4TargetInterface;
} SD_CTRL_ANALOG_SWITCH_T;

 
typedef struct
{
	DCL_BOOL	gHighCapacityCard;
	DCL_UINT64	pu8Capacity;
} SD_CTRL_GET_CAPACITY_T;

 
typedef struct
{
	DCL_BOOL fgInited;
} SD_CTRL_INITED_T;

 
typedef struct
{
	DCL_BOOL fgPresent;
} SD_CTRL_EXISTENCE_T;

 
typedef struct
{
	DCL_BOOL fgReadOnly;
} SD_CTRL_WRITE_PROTECTION_T;

 
typedef struct
{
	DCL_BOOL fgEverPLugOut;
} SD_CTRL_QUERY_EVER_PLUGOUT_T;

 
typedef struct
{
	DCL_BOOL fgIsItTrue;
} SD_CTRL_FORCE_SINGLE_LINE_T;

 
typedef struct
{
	DCL_BOOL fgIsCACHEABLE;
} SD_CTRL_CACHEABLE_BUFFER_T;

typedef struct 
{
	MSDC_CALLBACK callback1;
	MSDC_CALLBACK callback2;
	MSDC_CALLBACK callback3;
	MSDC_CALLBACK callback4;
	MSDC_CALLBACK callback5;
	MSDC_CALLBACK callback6;
}SD_CTRL_CALLBACK_T;

typedef struct 
{
	DCL_UINT32 readTestFlag;
}SD_CTRL_SET_READ_TEST_FLAG_T;

typedef struct 
{
	DCL_UINT32 startSector;
	DCL_UINT32 sectorNum;
}SD_CTRL_FLUSH_T;

typedef struct 
{
	DCL_BOOL enable;
}SD_CTRL_FAST_FORMAT_T;

typedef struct 
{
	DCL_BOOL changed;
}SD_CTRL_MEDIA_CHANGED_T;

#line 483 "interface\\hal\\peripheral\\dcl_msdc.h"




 



 











 
#line 535 "interface\\hal\\peripheral\\dcl_msdc.h"



 

 
typedef struct
{
	DCL_SDIO_function_id_enum function;
	DCL_UINT32 addr;	
	DCL_UINT32 data;		
	DCL_SDIO_cmd53_op_enum op;	
} SDIO_CTRL_REG_RW_T;

 
typedef struct{
	DCL_SDIO_function_id_enum function;		
	DCL_BOOL block;		
	DCL_SDIO_cmd53_op_enum op;	
	DCL_UINT16 count;		
	DCL_UINT32 addr;		
	DCL_UINT32 buffer;		
}SDIO_CTRL_DAT_RW_T;

 
typedef struct{
	DCL_SDIO_function_id_enum function;
	DCL_UINT32 size;
}SDIO_CTRL_SET_BLK_SIZE_T;

 
typedef struct{
	DCL_SDIO_function_id_enum function;
	DCL_BOOL *pending;
}SDIO_CTRL_CHECK_INTR_T;

 
typedef struct{
	DCL_SDIO_function_id_enum function;
	DCL_BOOL enable;
}SDIO_CTRL_ENABLE_T;

 
typedef struct{
	DCL_UINT8 *buffer;
	DCL_UINT32 bufferLength;
}SDIO_CTRL_GET_INFO_T;

typedef struct{

	kal_uint8 rw;	
	kal_uint8 func;	
	kal_uint8 rdata;	
	kal_uint8 wdata;	
	kal_bool raw;		
	kal_bool stop;		
	kal_uint32 addr;	
    kal_uint8 r5_resp;  
}SDIO_CTRL_CMD52_T;

typedef struct{

	kal_uint8 rw;	
	kal_uint8 func;	
    kal_uint8 r5_resp;  

    kal_uint8 op;       
    kal_bool block;     
    kal_uint16 count;       
    kal_uint32 addr;        
    kal_uint32 buffer;  
}SDIO_CTRL_CMD53_T;

typedef struct{
    kal_uint32 data;
}SDIO_CTRL_CMD_REG_T;

#line 624 "interface\\hal\\peripheral\\dcl_msdc.h"




#line 647 "interface\\hal\\peripheral\\dcl_msdc.h"


#line 210 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_drv.h"

































 






















































































































 






#line 161 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_drv.h"

























#line 222 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_drv.h"

#line 230 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_drv.h"



 










  







 
#line 260 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_drv.h"




#line 297 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_drv.h"





 
typedef enum
{
	USB_PHY_OWNER_USB = 0,
	USB_PHY_OWNER_BMT,
	USB_PHY_OWNER_MAX = 31
}USB_PHY_OWNER;


typedef enum
{
	USB_DMA0_TYPE = 0,
	USB_DMA1_TYPE,
	USB_DMA2_TYPE
} USB_DMA_TYPE;


typedef enum
{
	USB_TEST_MODE_TYPE_NONE = 0,
	USB_TEST_MODE_TYPE_J,
	USB_TEST_MODE_TYPE_K,
	USB_TEST_MODE_TYPE_SE0_NAK,
	USB_TEST_MODE_TYPE_PACKET
}USB_TEST_MODE_TYPE;


 
typedef enum
{
	USB_EP_TX_DIR = 0,
	USB_EP_RX_DIR
}USB_EP_DIRECTION;


 
typedef enum
{
	USB_ENDPT_CTRL = 0,
	USB_ENDPT_BULK,
	USB_ENDPT_INTR,
	USB_ENDPT_ISO
}USB_ENDPT_TXFER_TYPE;


 
typedef enum
{
	USB_EP_USE_NO_DMA = 0,
	USB_EP_USE_ONLY_DMA,
	USB_EP_USE_DMA_ON_DEMAND
}USB_ENDPT_DMA_USAGE;


 
typedef enum
{
	USB_EP_STATE_DISABLE = 0,
	USB_EP_STATE_FIFO,
	USB_EP_STATE_DMA
}USB_EP_STATE;



 
typedef enum
{
	USB_EP0_DRV_STATE_READ_END,
	USB_EP0_DRV_STATE_WRITE_RDY,
	USB_EP0_DRV_STATE_TRANSACTION_END,
	USB_EP0_DRV_STATE_CLEAR_SENT_STALL
}USB_EP0_DRV_STATE;


 
typedef enum
{
	USB_DRV_HDLR_RESET,
	USB_DRV_HDLR_SUSPEND,
	USB_DRV_HDLR_RESUME,
	USB_DRV_HDLR_EP0,
	USB_DRV_HDLR_EP_TX,
	USB_DRV_HDLR_EP_RX
}USB_DRV_HDLR_TYPE;



 
typedef enum
{
	USB_SET_ADDR_DATA,
	USB_SET_ADDR_STATUS
}USB_SET_ADDR_STATE;


 
typedef void (*usb_drv_intr_handler_ptr)(void);
 
typedef void (*usb_dma_callback)(void);





 
typedef enum
{
	DCL_USB_PHY_OWNER_USB = 0,
	DCL_USB_PHY_OWNER_BMT,
	DCL_USB_PHY_OWNER_MAX = 31
}DCL_USB_PHY_OWNER;


typedef enum 
{
	DCL_USB_DMA0_TYPE = 0,
	DCL_USB_DMA1_TYPE,
	DCL_USB_DMA2_TYPE
}DCL_USB_DMA_TYPE;


typedef enum 
{
	DCL_USB_TEST_MODE_TYPE_NONE = 0,
	DCL_USB_TEST_MODE_TYPE_J,
	DCL_USB_TEST_MODE_TYPE_K,
	DCL_USB_TEST_MODE_TYPE_SE0_NAK,
	DCL_USB_TEST_MODE_TYPE_PACKET
}DCL_USB_TEST_MODE_TYPE;


 
typedef enum
{
	DCL_USB_PDN_OWNER_USB = 0,
	DCL_USB_PDN_OWNER_IRDA,

}DCL_USB_PDN_OWNER;


typedef enum 
{
	DCL_USB_EP_TX_DIR = 0,
	DCL_USB_EP_RX_DIR
}DCL_USB_EP_DIRECTION;


 
typedef enum
{
	DCL_USB_ENDPT_CTRL = 0,
	DCL_USB_ENDPT_BULK,
	DCL_USB_ENDPT_INTR,
	DCL_USB_ENDPT_ISO
}DCL_USB_ENDPT_TXFER_TYPE;



 
typedef enum
{
	DCL_USB_EP_USE_NO_DMA = 0,
	DCL_USB_EP_USE_ONLY_DMA,
	DCL_USB_EP_USE_DMA_ON_DEMAND
}DCL_USB_ENDPT_DMA_USAGE;


 
typedef enum
{
	DCL_USB_EP_STATE_DISABLE = 0,
	DCL_USB_EP_STATE_FIFO,
	DCL_USB_EP_STATE_DMA
}DCL_USB_EP_STATE;


 
typedef enum
{
	DCL_USB_EP0_DRV_STATE_READ_END,
	DCL_USB_EP0_DRV_STATE_WRITE_RDY,
	DCL_USB_EP0_DRV_STATE_TRANSACTION_END,
	DCL_USB_EP0_DRV_STATE_CLEAR_SENT_STALL
}DCL_USB_EP0_DRV_STATE;


 
typedef enum
{
	DCL_USB_DRV_HDLR_RESET,
	DCL_USB_DRV_HDLR_SUSPEND,
	DCL_USB_DRV_HDLR_RESUME,
	DCL_USB_DRV_HDLR_EP0,
	DCL_USB_DRV_HDLR_EP_TX,
	DCL_USB_DRV_HDLR_EP_RX
}DCL_USB_DRV_HDLR_TYPE;



 
typedef enum
{
	DCL_USB_SET_ADDR_DATA,
	DCL_USB_SET_ADDR_STATUS
}DCL_USB_SET_ADDR_STATE;


typedef enum
{
	DCL_USB_TOTAL_FIFO_SIZE_4096 = 0,
	DCL_USB_TOTAL_FIFO_SIZE_2304,
	DCL_USB_TOTAL_FIFO_SIZE_NONE
}DCL_USB_TOTAL_FIFO_SIZE;


typedef enum
{
	DCL_USB_IP_V3 = 0,
	DCL_USB_IP_V1,
	DCL_USB_IP_V1_PLUS
}DCL_USB_IP_VERSION;


typedef void (*DCL_USB_FUNC_TYPE_0)(void);





 



 

 





 





 


  








#line 660 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_drv.h"











 

typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32			u4ep_num;
	DCL_USB_ENDPT_TXFER_TYPE type;
	DCL_USB_EP_DIRECTION		direction;
}USB_DRV_CTRL_EP_COMMON_FUNC_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32 	u4ep_num;
	DCL_USB_DRV_HDLR_TYPE type;
	DCL_USB_FUNC_TYPE_0 hdlr;
}USB_DRV_CTRL_REGISTER_DRV_INFO_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32			u4ep_num;
	DCL_USB_EP_DIRECTION		direction;
	DCL_BOOL 			fg_result;
}USB_DRV_CTRL_EP_CTRL_FUNC_1_T;



typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT8 	u1addr;
	DCL_USB_SET_ADDR_STATE state;
}USB_DRV_CTRL_USB_SET_ADDR_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32  u4ep_num;
	DCL_UINT16 u2data_size;
	DCL_USB_ENDPT_TXFER_TYPE type;
	DCL_BOOL fgdouble_fifo;
}USB_DRV_CTRL_USB_EP_INIT_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32  u4ep_num;
	DCL_USB_ENDPT_TXFER_TYPE ep_type;
	DCL_USB_ENDPT_DMA_USAGE dma_usage_type;
	DCL_BOOL fgis_flush;
	DCL_BOOL fgis_ft_mode;
}USB_DRV_CTRL_EP_ENABLE_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32 u4ep_num;
	DCL_USB_ENDPT_DMA_USAGE dma_usage_type;
}USB_DRV_CTRL_EP_DISABLE_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32			u4ep_num;
	DCL_USB_ENDPT_TXFER_TYPE ep_type;
	DCL_BOOL			fg_is_switch_to_dma;
}USB_DRV_CTRL_EP_CONFIG_TYPE_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32			u4ep_num;
	DCL_USB_EP_STATE 	result;
}USB_DRV_CTRL_EP_STATE_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_USB_TOTAL_FIFO_SIZE fifo_size;
}USB_DRV_CTRL_GET_FIFO_SIZE_T;


typedef struct
{
	DCL_UINT32	u4ip_port;
	DCL_USB_IP_VERSION  ip_version;
}USB_DRV_CTRL_GET_IP_VERSION_T;


typedef struct
{
	DCL_UINT32	u4ip_port;
	DCL_UINT32			u4ep_num;
	DCL_USB_ENDPT_TXFER_TYPE ep_type;
	DCL_BOOL			fg_reset_toggle;
}USB_DRV_CTRL_EP_CTRL_FUNC_2_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32			u4ep_num;
	DCL_UINT32			u4result;
}USB_DRV_CTRL_EP_CTRL_FUNC_3_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32			u4ep_num;
	DCL_USB_ENDPT_TXFER_TYPE ep_type;
	DCL_BOOL			fgresult;
}USB_DRV_CTRL_EP_CTRL_FUNC_4_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32			u4ep_num;
	DCL_USB_EP_DIRECTION 	direction;
	DCL_UINT32			u4count;
}USB_DRV_CTRL_EP_CTRL_FUNC_6_T;


typedef struct
{
	DCL_UINT8			u1_ip_port;
	DCL_BOOL			fg_is_ft_mode;
}USB_DRV_CTRL_EP_CTRL_FUNC_7_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32 			u4ep_num;
	DCL_UINT16 			u2nBytes;
	void 				*paddr;
	DCL_BOOL			fg_force_one_byte_access;
}USB_DRV_CTRL_EP_FIFO_RW_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32  u4ep_num;
	DCL_USB_EP_DIRECTION direction;
	DCL_BOOL fgen;
}USB_DRV_CTRL_EP_STALL_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_BOOL fg_transaction_end;
	DCL_BOOL fg_sent_stall;
}USB_DRV_CTRL_GET_EP_STATUS_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_USB_EP0_DRV_STATE state;
	DCL_BOOL fgstall;
	DCL_BOOL fgend;
}USB_DRV_CTRL_UPDATE_EPSTATE_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32 	u4ep_tx_num;
	DCL_UINT32 	u4ep_rx_num;
	DCL_USB_EP_DIRECTION direction;
	DCL_BOOL 	fgsame_chan;
}USB_DRV_CTRL_DMA_FUNC_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT8 u1dma_chan;
	DCL_BOOL fgenable;
	DCL_UINT8 u1timer_ticks;
}USB_DRV_CTRL_DMA_TIMER_FUNC_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT8 u1dma_chan;
	DCL_BOOL  fgresult;
}USB_DRV_CTRL_DMA_CTRL_FUNC_1_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32  u4ep_num;
	DCL_USB_EP_DIRECTION direction;
	DCL_UINT8 u1chan_num; 
	DCL_BOOL fgsame_chan;
}USB_DRV_CTRL_DMA_CTRL_FUNC_2_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32  u4ep_num;
	DCL_USB_EP_DIRECTION direction;
	DCL_USB_ENDPT_TXFER_TYPE ep_type;
	DCL_UINT32 u4addr;
	DCL_UINT32 u4length;
	DCL_USB_FUNC_TYPE_0 callback;
	DCL_BOOL fgcallback_upd_run;
	DCL_BOOL fgknown_size;
	DCL_USB_DMA_TYPE dma_type;
}USB_DRV_CTRL_DMA_SETUP_FUNC_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_UINT32  u4ep_num;
	DCL_USB_EP_DIRECTION direction;
	DCL_BOOL fgstatus;
}USB_DRV_CTRL_DMA_STATUS_FUNC_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_USB_TEST_MODE_TYPE test_selector;
}USB_DRV_CTRL_USB_TEST_MODE_FUNC_T;



typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_USB_PHY_OWNER owner;
}USB_DRV_CTRL_PHY_FUNC_T;

typedef struct
{
  DCL_BOOL is_cdcacm; 
} USB_DRV_CTRL_COM_TYPE_QUERY_T;


typedef struct
{
  DCL_BOOL 		enable;
  DCL_UINT32 	u4OwenrId;
  DCL_BOOL		u2Retresult;
  DCL_UINT8		ptransfer_type;	
} USB_DRV_CTRL_COM_HIGH_SPEED_IF; 


typedef struct
{
	DCL_UINT16 	u2Length;
	DCL_UINT32 	u4OwenrId;
	DCL_UINT16	u2RetSize;
	DCL_UINT8* 	puBuffaddr;
	DCL_UINT8	ptransfer_type;	
} USB_DRV_CTRL_COM_SEND_DATA;



typedef struct
{
	DCL_UINT16	u2Length;
	DCL_UINT32	u4OwenrId;
	DCL_UINT16	u2RetSize;
	DCL_UINT8*	puBuffaddr;
	DCL_UINT8	umode;
	DCL_UINT8	uescape_char;
	DCL_UINT8	ptransfer_type; 
} USB_DRV_CTRL_COM_SEND_ISR_DATA;


typedef struct
{
	DCL_UINT16 		u2Length;
	DCL_UINT32 		u4OwenrId;
	DCL_UINT16		u2RetSize;
	DCL_UINT8** 	puBuffaddr;
	DCL_UINT8*  	pustatus;
	DCL_UINT8 		ptype; 
	DCL_UINT8		ptransfer_type;  
} USB_DRV_CTRL_COM_GET_DATA;


typedef struct
{
	DCL_BOOL	  u2Retresult;
} USB_DRV_CTRL_COM_RESPONSE;

typedef struct
{    
	DCL_BOOL	  u2set;
	DCL_BOOL	  u2Retresult;
} USB_DRV_CTRL_SET;

typedef struct
{    
	DCL_BOOL fgbset;		
	DCL_UINT32 		u4OwenrId;
} USB_DRV_CTRL_COM_RB_THRESHOLD_EN;

typedef struct
{
  DCL_UINT8 u1ftPort; 
} USB_DRV_CTRL_COM_FT_PORT;

typedef struct
{
	DCL_UINT8	  uindex;
	DCL_UINT32	  u4max_size;
} USB_VIDEO_CTRL_FUNC1_T;

typedef struct
{
	DCL_UINT8*	  uaddr;
	DCL_UINT32	  u4size;
	DCL_UINT32	  u4time;
	DCL_UINT32	  u4size_type;			
} USB_VIDEO_CTRL_FUNC2_T;

typedef struct
{
	DCL_UINT8*	  u2Retresult;
} USB_VIDEO_CTRL_FUNC3_T;

typedef struct
{
	DCL_UINT16*	  u2String;
} USB_IMAGE_CTRL_FUNC1_T;

#line 1058 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_drv.h"






#line 1211 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_drv.h"

#line 211 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_hcd.h"

































 


















































































 





#line 124 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_hcd.h"

    















    

typedef enum
{
	USB_HCD_OK,
	USB_HCD_NO_RESPONSE,	
	USB_HCD_TIMEOUT,	
	USB_HCD_STALL, 
	USB_HCD_PID_ERROR, 	
	USB_HCD_DETATCH,
	USB_HCD_DMA_TIMEOUT
}USB_HCD_STATUS;

typedef enum
{
	USB_HCD_BUS_SUSPEND_SOF,
	USB_HCD_BUS_RESUME_SOF, 
	USB_HCD_BUS_ASSERT_RESUME
}USB_HCD_BUS_TYPE;


typedef struct
{
	kal_uint16				ep_max_pkt_size;
	kal_uint8				ep_num;			
	kal_uint8				ep_real_num;			
	USB_ENDPT_TXFER_TYPE	ep_type;	
	USB_EP_DIRECTION 		direction;
}USBH_EP_Struct;



typedef struct
{
	kal_uint32				if_num;
	kal_uint8				usb_ip_port;	
}USBH_Common_Struct;


typedef enum
{
	USB_HCD_HDLR_ATTACH,
	USB_HCD_HDLR_DETACH,
	USB_HCD_HDLR_RESUME,
	USB_HCD_HDLR_EP0,
	USB_HCD_HDLR_EP_TX,
	USB_HCD_HDLR_EP_RX,
	USB_HCD_HDLR_MAX
}USB_HCD_HDLR_TYPE;


 


 





typedef enum
{
	DCL_USB_HCD_HDLR_ATTACH,
	DCL_USB_HCD_HDLR_DETACH,
	DCL_USB_HCD_HDLR_RESUME,
	DCL_USB_HCD_HDLR_EP0,
	DCL_USB_HCD_HDLR_EP_TX,
	DCL_USB_HCD_HDLR_EP_RX,
	DCL_USB_HCD_HDLR_MAX
}DCL_USB_HCD_HDLR_TYPE;


typedef enum
{
	DCL_USB_HCD_ENDPT_CTRL,
	DCL_USB_HCD_ENDPT_BULK,
	DCL_USB_HCD_ENDPT_INTR,
	DCL_USB_HCD_ENDPT_ISO
}DCL_USB_HCD_ENDPT_TYPE;


typedef enum
{
	DCL_USB_HCD_PIPE_DIR_RX,
	DCL_USB_HCD_PIPE_DIR_TX
}DCL_USB_HCD_PIPE_DIRECTION;


typedef enum
{
	DCL_USB_HCD_OK,
	DCL_USB_HCD_NO_RESPONSE,	
	DCL_USB_HCD_TIMEOUT,	
	DCL_USB_HCD_STALL, 
	DCL_USB_HCD_PID_ERROR, 	
	DCL_USB_HCD_DETATCH,
	DCL_USB_HCD_DMA_TIMEOUT	
}DCL_USB_HCD_STATUS;


typedef enum
{
	DCL_USB_HCD_BUS_SUSPEND_SOF,
	DCL_USB_HCD_BUS_RESUME_SOF, 
	DCL_USB_HCD_BUS_ASSERT_RESUME
}DCL_USB_HCD_BUS_TYPE;



typedef struct
{
	DCL_UINT16					ep_max_pkt_size;
	DCL_UINT8					ep_num;			
	DCL_UINT8					ep_real_num;			
	DCL_USB_ENDPT_TXFER_TYPE	ep_type;	
	DCL_USB_EP_DIRECTION 		direction;
}DCL_USBH_EP_Struct;



typedef struct
{
	DCL_UINT32				if_num;
	DCL_UINT8				usb_ip_port;	
}DCL_USBH_Common_Struct;



typedef void (*usb_hcd_intr_handler_ptr)(kal_uint8 usb_ip_port,USB_HCD_STATUS result, kal_uint32 param);
 
typedef void (*DCL_USB_HCD_DMA_CALLBACK)(void);
typedef void (*DCL_USB_HCD_INTR_HDLR)(DCL_UINT8 usb_ip_port,DCL_USB_HCD_STATUS result, DCL_UINT32 param);
typedef void (*DCL_USB_HCD_REGISTRE_CALLBACK)(DCL_USB_HCD_HDLR_TYPE type, DCL_UINT32 ep_num, DCL_USB_HCD_INTR_HDLR hdlr);
typedef void (*DCL_USB_HCD_SET_ADDR)(DCL_UINT8 addr);
typedef DCL_BOOL (*DCL_USB_HCD_EP_DATA_TXFER)(DCL_UINT8 ep_num, DCL_UINT16 nBytes, void *pData);
typedef DCL_BOOL (*DCL_USB_HCD_EP_CTRL_FUNC_1)(DCL_UINT8 ep_num, DCL_USB_EP_DIRECTION direction, DCL_UINT16 max_pkt_size);
typedef void (*DCL_USB_HCD_EP_CTRL_FUNC_2)(DCL_UINT8 ep_num, DCL_USB_EP_DIRECTION direction);
typedef DCL_BOOL (*DCL_USB_HCD_EP_ENABLE)(DCL_UINT8 ep_num, DCL_USB_HCD_ENDPT_TYPE ep_type, DCL_UINT8 interval, DCL_BOOL bDMA);
typedef void (*DCL_USB_HCD_EP_DISABLE)(DCL_UINT8 ep_num, DCL_BOOL bDMA);
typedef void (*DCL_USB_HCD_EP_INIT)(DCL_UINT8 ep_num, DCL_UINT16 data_size, DCL_USB_ENDPT_TXFER_TYPE type);
typedef void (*DCL_USB_HCD_EP0_SETUP_REQ_FUNC)(DCL_UINT16 nBytes, void *pSrc);
typedef void (*DCL_USB_HCD_EP0_DATA_REQ_FUNC)(DCL_USB_HCD_PIPE_DIRECTION direction, DCL_UINT16 nBytes, void *pData);
typedef void (*DCL_USB_HCD_EP0_STATUS_REQ_FUNC)(DCL_USB_HCD_PIPE_DIRECTION direction);
typedef void (*DCL_USB_HCD_DMA_SETUP_FUNC)(DCL_UINT8 ep_num, DCL_USB_EP_DIRECTION direction, DCL_USB_ENDPT_TXFER_TYPE ep_type, 
						DCL_UINT32 addr, DCL_UINT32 length, DCL_BOOL callback_upd_run, 
						DCL_BOOL known_size, DCL_USB_DMA_TYPE dma_type);




 



 

 





 





 
#line 375 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_hcd.h"





 

typedef struct
{
	DCL_UINT8	ip;
	DCL_USB_HCD_HDLR_TYPE type;
	DCL_UINT32 u4ep_num;
	DCL_USB_HCD_INTR_HDLR hdlr;
}USB_HCD_CTRL_REGISTER_DRV_INFO_T;



typedef struct
{
	DCL_UINT8	ip;
	DCL_UINT8 addr;
}USB_HCD_CTRL_SET_ADDRESS_T;


typedef struct
{
	DCL_UINT8	ip;
	DCL_UINT8	return_value;
	DCL_USB_EP_DIRECTION direction;
}USB_HCD_CTRL_EP_MAPPING_T;


typedef struct
{
	DCL_UINT8	ip;
	DCL_USB_HCD_STATUS reset_reason;
}USB_HCD_CTRL_RESET_T;


typedef struct
{
	DCL_UINT8	ip;
	DCL_BOOL 	set;
}USB_HCD_CTRL_SYSTEM_T;



typedef struct
{
	DCL_UINT8	ip;
	DCL_BOOL	return_value;	
}USB_HCD_CTRL_IP_NUM_T;


typedef struct
{
	DCL_BOOL 	set;
}USB_HCD_CTRL_SET_T;

typedef struct
{
	DCL_UINT8	ip;
	DCL_USB_HCD_STATUS result;
	DCL_UINT32 u4param;
}USB_HCD_CTRL_DELAY_RESET_DEVICE_T;


typedef struct
{
	DCL_USBH_Common_Struct common_str;
	DCL_USBH_EP_Struct usb_ep_str;
}USB_HCD_CTRL_EP_CTRL_FUNC_1_T;


typedef struct
{
	DCL_USBH_Common_Struct common_str;
	DCL_USBH_EP_Struct usb_ep_str;
	DCL_UINT8		interval;
}USB_HCD_CTRL_EP_CTRL_FUNC_2_T;


typedef struct
{
	DCL_USBH_Common_Struct common_str;
	DCL_UINT16	return_value;
}USB_HCD_CTRL_EP_CTRL_FUNC_3_T;


typedef struct
{
	DCL_USBH_Common_Struct common_str;
	DCL_USBH_EP_Struct usb_ep_str;
	DCL_UINT32	return_value;	
}USB_HCD_CTRL_EP_CTRL_FUNC_4_T;


typedef struct
{
	DCL_USBH_Common_Struct common_str;
	DCL_USBH_EP_Struct usb_ep_str;
	DCL_BOOL set;
}USB_HCD_CTRL_EP_CTRL_FUNC_5_T;


typedef struct
{
	DCL_USBH_Common_Struct common_str;
	DCL_USBH_EP_Struct usb_ep_str;
	DCL_UINT8 u1interval;
	DCL_BOOL fgbDMA;
}USB_HCD_CTRL_EP_ENABLE_T;


typedef struct
{
	DCL_USBH_Common_Struct common_str;
	DCL_USBH_EP_Struct usb_ep_str;
	DCL_BOOL fgbDMA;
}USB_HCD_CTRL_EP_DISABLE_T;


typedef struct
{
	DCL_USBH_Common_Struct common_str;
	DCL_USBH_EP_Struct usb_ep_str;
	DCL_UINT16 u2nBytes;
	DCL_BOOL return_value;	
	void *pData;
}USB_HCD_CTRL_EP_DATA_TXFER_T;


typedef struct
{
	DCL_USBH_Common_Struct common_str;
	DCL_USBH_EP_Struct usb_ep_str;
	DCL_UINT16 u2nBytes;
	void *pSrc;
}USB_HCD_CTRL_EP0_SETUP_REQ_T;


typedef struct
{
	DCL_USBH_Common_Struct common_str;
	DCL_USBH_EP_Struct usb_ep_str;
	DCL_UINT16 u2nBytes;
	void *pData;
}USB_HCD_CTRL_EP0_DATA_REQ_T;


typedef struct
{
	DCL_USBH_Common_Struct common_str;
	DCL_USBH_EP_Struct usb_ep_str;
}USB_HCD_CTRL_EP0_STATUS_REQ_T;


typedef struct
{
	DCL_UINT8  ip;
	DCL_UINT8 u1ep_num;
	DCL_USB_EP_DIRECTION direction;
	DCL_UINT8 u1chan_num; 
	DCL_BOOL fgsame_chan;
}USB_HCD_CTRL_DMA_CTRL_FUNC_1_T;


typedef struct
{
	DCL_UINT8  ip;
	DCL_UINT8 u1ep_num;
	DCL_UINT32 return_value;
	DCL_USB_EP_DIRECTION direction;
}USB_HCD_CTRL_DMA_CTRL_FUNC_2_T;


typedef struct
{
	DCL_USBH_Common_Struct common_str;
	DCL_USBH_EP_Struct usb_tx_str;
	DCL_USBH_EP_Struct usb_rx_str;
	DCL_USB_EP_DIRECTION direction;
	DCL_BOOL same_chan;
}USB_HCD_CTRL_DMA_CHANNEL_FUNC_T;


typedef struct
{
	DCL_USBH_Common_Struct common_str;
	DCL_USBH_EP_Struct usb_ep_str;
	DCL_UINT32 u4addr;
	DCL_UINT32 u4length;
	DCL_USB_HCD_DMA_CALLBACK callback;
	DCL_BOOL fgcallback_upd_run;
	DCL_BOOL fgknown_size;
	DCL_USB_DMA_TYPE dma_type;
}USB_HCD_CTRL_DMA_SETUP_FUNC_T;





#line 602 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_hcd.h"







#line 751 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_hcd.h"



#line 212 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\connectivity\\usb_driver\\dcl_otg_drv.h"

































 






























































 






#line 105 "interface\\hal\\connectivity\\usb_driver\\dcl_otg_drv.h"



typedef enum
{
	OTG_PLUG_B,
	OTG_PLUG_A
}OTG_PLUG_TYPE;


 
typedef enum
{
	OTG_DRV_HDLR_HOST_UP,
	OTG_DRV_HDLR_HOST_DOWN,
	OTG_DRV_HDLR_DEVICE_UP,
	OTG_DRV_HDLR_DEVICE_DOWN,
	OTG_DRV_HDLR_A_VRISE_FAIL,
	OTG_DRV_HDLR_A_HNP_FAIL,
	OTG_DRV_HDLR_A_HNP_STOP,
	OTG_DRV_HDLR_A_NO_RESPONSE,
	OTG_DRV_HDLR_B_HNP_FAIL,
	OTG_DRV_HDLR_B_SRP_FAIL,
	OTG_DRV_HDLR_B_SRP_STOP,
	OTG_DRV_HDLR_B_SRP_EXCEPTION_STOP,
	OTG_DRV_HDLR_A_HOST_STOP
}OTG_DRV_HDLR_TYPE;


typedef enum
{
	OTG_STATUS_A_BUS_REQUEST = 0,
	OTG_STATUS_A_DETECT_B_CONN,
	OTG_STATUS_A_DETECT_B_SUSPEND,
	OTG_STATUS_A_DETECT_B_RESUME,
	OTG_STATUS_A_DETECT_B_DATA_PLS,
	OTG_STATUS_A_SUSPEND_REQUEST,
	OTG_STATUS_A_RESUME_REQUEST,
	OTG_STATUS_A_SET_B_HNP_ENABLE,
	OTG_STATUS_B_SESSION_VALID,
	OTG_STATUS_B_SUSPEND_REQUEST,
	OTG_STATUS_B_DETECT_A_CONN,
	OTG_STATUS_B_DETECT_A_SUSPEND,
	OTG_STATUS_B_DETECT_A_RESUME,
	OTG_STATUS_B_DETECT_A_RESET,
	OTG_STATUS_B_SRP_REQUEST,
	OTG_STATUS_B_HNP_ENABLE
}OTG_STATUS_TYPE;


typedef enum
{
	 OTG_STATE_START,
	 OTG_STATE_A_IDLE,
	 OTG_STATE_A_WAIT_VRISE,
	 OTG_STATE_A_WAIT_BCON,
	 OTG_STATE_A_HOST,
	 OTG_STATE_A_SUSPEND,
	 OTG_STATE_A_PERIPHERAL,
	 OTG_STATE_A_WAIT_VFALL,

	 OTG_STATE_B_IDLE,
	 OTG_STATE_B_SRP_INIT,
	 OTG_STATE_B_PERIPHERAL,
	 OTG_STATE_B_WAIT_ACON,
	 OTG_STATE_B_HOST
}OTG_STATE;

 
typedef void (*otg_intr_handler_ptr)(void);



typedef enum
{
	DCL_OTG_PLUG_B,
	DCL_OTG_PLUG_A
}DCL_OTG_PLUG_TYPE;


 
typedef enum
{
	DCL_OTG_DRV_HDLR_HOST_UP,
	DCL_OTG_DRV_HDLR_HOST_DOWN,
	DCL_OTG_DRV_HDLR_DEVICE_UP,
	DCL_OTG_DRV_HDLR_DEVICE_DOWN,
	DCL_OTG_DRV_HDLR_A_VRISE_FAIL,
	DCL_OTG_DRV_HDLR_A_HNP_FAIL,
	DCL_OTG_DRV_HDLR_A_HNP_STOP,
	DCL_OTG_DRV_HDLR_A_NO_RESPONSE,
	DCL_OTG_DRV_HDLR_B_HNP_FAIL,	
	DCL_OTG_DRV_HDLR_B_SRP_FAIL,
	DCL_OTG_DRV_HDLR_B_SRP_STOP,
	DCL_OTG_DRV_HDLR_B_SRP_EXCEPTION_STOP,
	DCL_OTG_DRV_HDLR_A_HOST_STOP
}DCL_OTG_DRV_HDLR_TYPE;

typedef enum
{
	DCL_OTG_STATUS_A_BUS_REQUEST = 0,
	DCL_OTG_STATUS_A_DETECT_B_CONN,
	DCL_OTG_STATUS_A_DETECT_B_SUSPEND,
	DCL_OTG_STATUS_A_DETECT_B_RESUME,
	DCL_OTG_STATUS_A_DETECT_B_DATA_PLS,
	DCL_OTG_STATUS_A_SUSPEND_REQUEST,
	DCL_OTG_STATUS_A_RESUME_REQUEST,
	DCL_OTG_STATUS_A_SET_B_HNP_ENABLE,
	DCL_OTG_STATUS_B_SESSION_VALID,
	DCL_OTG_STATUS_B_SUSPEND_REQUEST,
	DCL_OTG_STATUS_B_DETECT_A_CONN,
	DCL_OTG_STATUS_B_DETECT_A_SUSPEND,
	DCL_OTG_STATUS_B_DETECT_A_RESUME,
	DCL_OTG_STATUS_B_DETECT_A_RESET,
	DCL_OTG_STATUS_B_SRP_REQUEST,
	DCL_OTG_STATUS_B_HNP_ENABLE
}DCL_OTG_STATUS_TYPE;

typedef enum
{
	DCL_OTG_STATE_START,
	DCL_OTG_STATE_A_IDLE,
	DCL_OTG_STATE_A_WAIT_VRISE,
	DCL_OTG_STATE_A_WAIT_BCON,
	DCL_OTG_STATE_A_HOST,
	DCL_OTG_STATE_A_SUSPEND,
	DCL_OTG_STATE_A_PERIPHERAL,
	DCL_OTG_STATE_A_WAIT_VFALL,

	DCL_OTG_STATE_B_IDLE,
	DCL_OTG_STATE_B_SRP_INIT,
	DCL_OTG_STATE_B_PERIPHERAL,
	DCL_OTG_STATE_B_WAIT_ACON,
	DCL_OTG_STATE_B_HOST
}DCL_OTG_STATE;


typedef void (*DCL_OTG_FUNC_TYPE_0)(void);
typedef void (*DCL_OTG_DRV_REGISTER_CALLBACK)(DCL_OTG_DRV_HDLR_TYPE type, DCL_OTG_FUNC_TYPE_0 hdlr);
typedef DCL_OTG_PLUG_TYPE (*DCL_OTG_DRV_PLUG_TYPE)(void);
typedef void (*DCL_OTG_SET_OTG_STATUS)(DCL_OTG_STATUS_TYPE type, DCL_BOOL set);
typedef DCL_OTG_STATE (*DCL_OTG_GET_OTG_STATE)(void);





 



 

 





 





 
#line 299 "interface\\hal\\connectivity\\usb_driver\\dcl_otg_drv.h"





 

typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_OTG_DRV_HDLR_TYPE type;
	DCL_OTG_FUNC_TYPE_0 hdlr;
}OTG_DRV_CTRL_REGISTER_DRV_INFO_T;


typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_OTG_PLUG_TYPE  type;
}OTG_DRV_CTRL_GET_PLUG_TYPE_T;








 

typedef struct
{
	DCL_UINT32			u4ip_port;
	DCL_OTG_STATE state;
}OTG_DRV_CTRL_GET_STATE_T;


typedef struct
{
	DCL_BOOL	return_value;	
}OTG_DRV_CTRL_GET_Reg_T;



#line 349 "interface\\hal\\connectivity\\usb_driver\\dcl_otg_drv.h"








#line 499 "interface\\hal\\connectivity\\usb_driver\\dcl_otg_drv.h"

#line 213 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_irda.h"








 






























































 






 




 
typedef struct
{
   DCL_BOOL     fgModulation1p63;
   DCL_BOOL     fgBOFType0xff;
   DCL_UINT8    uMirDoubleStaNum;


} IRDA_CONFIG_T;







 




 




 





#line 264 "interface\\hal\\peripheral\\dcl_irda.h"


#line 214 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_sim.h"

































 




























 





 
#line 1 "kal\\include\\kal_non_specific_general_types.h"
#line 71 "interface\\hal\\peripheral\\dcl_sim.h"
#line 72 "interface\\hal\\peripheral\\dcl_sim.h"
 





 
typedef DCL_UINT16 DCL_SIM_STATUS_WORD;

typedef enum
{
	DCL_ME_UNKNOW =0,
	DCL_ME_18V_30V,
	DCL_ME_30V_ONLY,
	DCL_ME_18V_ONLY
} DCL_SIM_ENV;

typedef enum{
	DCL_USIM_NO_ERROR = 0,

	 
	DCL_USIM_WAITING_EVENT = 1,	 
	DCL_USIM_BLOCK_REC = 2,		 
	DCL_USIM_POWER_OFF = 3,		 
	DCL_USIM_ATR_REC = 4,			 
	DCL_USIM_S_BLOCK_REC = 5,		 

	 
	DCL_USIM_NO_INSERT = -1,
	DCL_USIM_VOLT_NOT_SUPPORT = -2,
	DCL_USIM_NO_ATR = -3,
	DCL_USIM_TS_INVALID = -4,
	DCL_USIM_ATR_ERR = -5,
	DCL_USIM_INVALID_ATR = -6,
	DCL_USIM_PTS_FAIL = -7,
	DCL_USIM_RX_INVALID = -8,	 
	DCL_USIM_BWT_TIMEOUT = -9,
	DCL_USIM_DATA_ABORT = -10,
	DCL_USIM_DEACTIVATED = -11,
	DCL_USIM_S_BLOCK_FAIL = -12,
	DCL_USIM_INVALID_WRST = -13,
	DCL_USIM_GPT_TIMEOUT = -14
}DCL_SIM_STATUS;

typedef enum{
	DCL_UNKNOWN_POWER_CLASS = 0,
	DCL_CLASS_A_50V = 1,
	DCL_CLASS_B_30V = 2,
	DCL_CLASS_AB 	= 3,
	DCL_CLASS_C_18V = 4,
	DCL_ClASS_BC		= 6,
	DCL_CLASS_ABC	= 7
}DCL_SIM_POWER;

typedef DCL_UINT32 DCL_SIM_HW_CB;

typedef enum
{
	DCL_SIM_PROTOCOL,
	DCL_USIM_PROTOCOL
}DCL_SIM_APP_PROTOCOL;



typedef enum
{
	DCL_T0_PROTOCOL,
	DCL_T1_PROTOCOL,
	DCL_UNKNOWN_PROTOCOL
}DCL_SIM_PHY_PROTOCOL;

typedef enum{
	DCL_CLOCK_STOP_NOT_SUPPORT 	= 0x0,
	DCL_CLOCK_STOP_LOW 			= 0x40,
	DCL_CLOCK_STOP_HIGH 			= 0x80,
	DCL_CLOCK_STOP_ANY				= 0xc0,
	DCL_CLOCK_STOP_MSK				= 0xc0,
	DCL_CLOCK_STOP_UNKONW			= 0x0f
}DCL_SIM_CLK_STOP;

typedef enum{
	DCL_SPEED_372,
	DCL_SPEED_64,
	DCL_SPEED_32,
	DCL_SPEED_16
}DCL_SIM_CARD_SPEED;

typedef struct{
	DCL_SIM_POWER power;
	DCL_SIM_CARD_SPEED speed;
	DCL_SIM_CLK_STOP clock_stop;
	DCL_SIM_APP_PROTOCOL app_proto;
	DCL_SIM_PHY_PROTOCOL phy_proto;
	kal_bool T0_support;	
	kal_bool T1_support;	
	kal_uint8 hist_index; 
	kal_uint8 *ATR;
       kal_bool TAiExist; 
    kal_uint8 ATR_length;			
    kal_bool isSW6263; 
}DCL_SIM_INFO;



 
 
 
typedef DCL_SIM_STATUS (* DCL_SIM_RST)(DCL_SIM_POWER ExpectVolt, DCL_SIM_POWER *ResultVolt, kal_bool warm, DCL_SIM_HW_CB handle);
typedef DCL_SIM_STATUS_WORD (* DCL_SIM_CMD)(kal_uint8  *txData,kal_uint32  *txSize,kal_uint8  *rxData, kal_uint32  *rxSize, DCL_SIM_HW_CB handle);
typedef void (* DCL_SIM_PWOFF)(DCL_SIM_HW_CB handle);
typedef void (* DCL_SIM_GET_CARD_INFO)(DCL_SIM_INFO *info, DCL_SIM_HW_CB handle);
typedef void (* DCL_SIM_SET_MAX_SPEED)(DCL_SIM_CARD_SPEED speed, DCL_SIM_HW_CB handle);
typedef void (* DCL_SIM_SET_PREFER_PROTOCOL)(DCL_SIM_PHY_PROTOCOL T, DCL_SIM_HW_CB handle);
typedef kal_bool (* DCL_SIM_SET_CLK_STOP_MODE)(DCL_SIM_CLK_STOP mode, DCL_SIM_HW_CB handle);
typedef void (* DCL_SIM_TOUT_TEST)(kal_uint32 toutValue, DCL_SIM_HW_CB handle);
typedef kal_uint32 (* DCL_SIM_ASSIGN_LOGICAL)(kal_uint32 logicalNumber);
typedef DCL_SIM_CARD_SPEED (*DCL_SIM_GAT_CARD_SPEED)(DCL_SIM_HW_CB handle);
typedef DCL_BOOL (*DCL_SIM_QUERY_GET_9000_WHEN_SELECT)(DCL_SIM_HW_CB handle);
 
typedef void (*DCL_SIM_PLUG_OUT_CALLBACK)(kal_uint32 simIf);
typedef void (*DCL_SIM_PLUG_IN_CALLBACK)(kal_uint32 simIf);
 
typedef struct
{
	DCL_SIM_RST rst;
	DCL_SIM_CMD cmd;
	DCL_SIM_PWOFF pwOff;
	DCL_SIM_GET_CARD_INFO getCardInfo;
	DCL_SIM_SET_MAX_SPEED setSpeed;
	DCL_SIM_SET_PREFER_PROTOCOL setPreferT;
	DCL_SIM_SET_CLK_STOP_MODE setClockStopMode;
	DCL_SIM_TOUT_TEST toutTest;
	DCL_SIM_ASSIGN_LOGICAL assignLogical;
	DCL_SIM_GAT_CARD_SPEED getCardSpeed;
	DCL_SIM_QUERY_GET_9000_WHEN_SELECT query9000WhenSelect;
}DCL_SIMDriver_t;

typedef enum
{
	SIM_CONFIG_AP_TYPE_PHONE1,
	SIM_CONFIG_AP_TYPE_PHONE2,
	SIM_CONFIG_AP_TYPE_CMMB_SMD,
	SIM_CONFIG_AP_TYPE_PHONE3,
	SIM_CONFIG_AP_TYPE_PHONE4
} DCL_SIM_CONFIG_AP_TYPE;

typedef struct
{
	DCL_SIM_CONFIG_AP_TYPE	apType;
    DCL_SIM_PLUG_IN_CALLBACK hotPlugInCb;
	DCL_SIM_PLUG_OUT_CALLBACK hotPlugOutCb;
} SIM_CONFIG_T;






 
  
#line 247 "interface\\hal\\peripheral\\dcl_sim.h"





 
 
typedef struct
{
	DCL_SIM_POWER ExpectVolt;
	DCL_SIM_POWER *ResultVolt;
	kal_bool warm;
	DCL_SIM_STATUS rstResult;
} SIM_CTRL_RST_T;

 
typedef struct
{
	kal_uint8  *txData;
	kal_uint32  *txSize;
	kal_uint8  *rxData;
	kal_uint32  *rxSize;
	kal_uint16 *statusWord;
} SIM_CTRL_CMD_T;

 

 
typedef struct
{
	DCL_SIM_INFO *info;
} SIM_CTRL_GET_CARD_INFO_T;

 
typedef struct
{
	DCL_SIM_CARD_SPEED speed;
} SIM_CTRL_SET_MAX_SPEED_T;

 
typedef struct
{
	DCL_SIM_PHY_PROTOCOL T;
} SIM_CTRL_SET_PREFER_PROTOCOL_T;

 
typedef struct
{
	DCL_SIM_CLK_STOP mode;
} SIM_CTRL_SET_CLK_STOP_MODE_T;

 
typedef struct
{
	DCL_UINT32 toutValue;
} SIM_CTRL_TOUT_TEST_T;

 
typedef struct
{
	DCL_SIM_CARD_SPEED *speed; 
} SIM_CTRL_GET_SPEED_T;

 
typedef struct
{
	DCL_BOOL *got9000; 
} SIM_CTRL_QUERY_9000_T;

 
typedef struct
{
	DCL_BOOL rlt; 
} SIM_CTRL_SET_SLT_RLT_T;

 
#line 335 "interface\\hal\\peripheral\\dcl_sim.h"



#line 348 "interface\\hal\\peripheral\\dcl_sim.h"

#line 215 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_pmu.h"








 










































































































































































































































 








 


 

 





 


 
typedef enum
{
	VA12,
	VRTC,
	VMIC,
	VAUDN,
	VAUDP,
	VRF28,
	VRF=VRF28,
	VTCXO,
	VA25,
	VCAMA,
	VCAMD,
	VCAM_IO,
	VCAM_AF,
	VIO28,
	VUSB,
	VBT,
	VSIM,
	VSIM1 = VSIM,
	VSIM2,
	VIBR,
	VMC,
	VMC1,
	VCAMA2,
	VCAMD2,
	VFM,
	VM12,
	VM12_1,
	VM12_2,
    VM12_INT,
	VCORE,
	VCORE2,
	VIO18,
	VPA_SW,
	VPROC,
	VRF18,
	VA,
	VA28 = VA,
	VM,
	VSF,
	VWIFI2V8,
	VWIFI3V3,
	V3GTX,
	V3GRX,
	VGP,
	VGP2,
	VSDIO,
	VDIG,	
	VBUS,
	VA1,
	VA2,
	VBACKUP,
	PMU_LDO_BUCK_MAX
}PMU_LDO_BUCK_LIST_ENUM;

 
typedef enum
{
	VPA,
	VPA1=VPA,
	PMU_VPA_MAX
}PMU_VPA_LIST_ENUM;

 
typedef enum
{
	KPLED,
	PMU_KPLED_MAX
}PMU_KPLED_LIST_ENUM;

 
typedef enum
{
	CHR,
	PMU_CHR_MAX
}PMU_CHR_LIST_ENUM;

 
typedef enum
{
	STRUP,
	PMU_STRUP_MAX
}PMU_STRUP_LIST_ENUM;

 
typedef enum
{
	ISINK0,
	ISINK1,
	ISINK2,
	ISINK3,
	ISINK4,
    ISINK5,
	PMU_ISINK_MAX
}PMU_ISINK_LIST_ENUM;

 
typedef enum
{
	BOOST,
	BOOST1=BOOST,
	BOOST2,
	PMU_BOOST_MAX
}PMU_BOOST_LIST_ENUM;

 
typedef enum
{
	SPK,
	PMU_SPK_MAX
}PMU_SPK_LIST_ENUM;

 
typedef enum
{
	LPOSC,
	PMU_LPOSC_MAX
}PMU_LPOSC_LIST_ENUM;

 
typedef enum
{
	PMU_VOLT_00_000000_V =        0,
	PMU_VOLT_00_100000_V =   100000,
	PMU_VOLT_00_200000_V =   200000,
	PMU_VOLT_00_300000_V =   300000,
	PMU_VOLT_00_400000_V =   400000,
	PMU_VOLT_00_500000_V =   500000,
	PMU_VOLT_00_600000_V =   600000,
	PMU_VOLT_00_700000_V =   700000,
	PMU_VOLT_00_725000_V =   725000,
	PMU_VOLT_00_750000_V =   750000,
	PMU_VOLT_00_775000_V =   775000,
	PMU_VOLT_00_800000_V =   800000,
	PMU_VOLT_00_825000_V =   825000,
	PMU_VOLT_00_850000_V =   850000,
	PMU_VOLT_00_875000_V =   875000,
	PMU_VOLT_00_900000_V =   900000,
	PMU_VOLT_00_925000_V =   925000,
	PMU_VOLT_00_950000_V =   950000,
	PMU_VOLT_00_975000_V =   975000,
	PMU_VOLT_01_000000_V =  1000000,
	PMU_VOLT_01_025000_V =  1025000,
	PMU_VOLT_01_050000_V =  1050000,
	PMU_VOLT_01_075000_V =  1075000,
	PMU_VOLT_01_100000_V =  1100000,
	PMU_VOLT_01_125000_V =  1125000,
	PMU_VOLT_01_150000_V =  1150000,
	PMU_VOLT_01_175000_V =  1175000,
	PMU_VOLT_01_200000_V =  1200000,
	PMU_VOLT_01_225000_V =  1225000,
	PMU_VOLT_01_250000_V =  1250000,
	PMU_VOLT_01_275000_V =  1275000,
	PMU_VOLT_01_300000_V =  1300000,
	PMU_VOLT_01_325000_V =  1325000,
	PMU_VOLT_01_350000_V =  1350000,
	PMU_VOLT_01_375000_V =  1375000,
	PMU_VOLT_01_400000_V =  1400000,
	PMU_VOLT_01_425000_V =  1425000,
	PMU_VOLT_01_450000_V =  1450000,
	PMU_VOLT_01_475000_V =  1475000,
	PMU_VOLT_01_500000_V =  1500000,
	PMU_VOLT_01_520000_V =  1520000,
	PMU_VOLT_01_525000_V =  1525000,
	PMU_VOLT_01_540000_V =  1540000,
	PMU_VOLT_01_550000_V =  1550000,
	PMU_VOLT_01_560000_V =  1560000,
	PMU_VOLT_01_575000_V =  1575000,
	PMU_VOLT_01_580000_V =  1580000,
	PMU_VOLT_01_600000_V =  1600000,
	PMU_VOLT_01_620000_V =  1620000,
	PMU_VOLT_01_625000_V =  1625000,
	PMU_VOLT_01_640000_V =  1640000,
	PMU_VOLT_01_650000_V =  1650000,
	PMU_VOLT_01_660000_V =  1660000,
	PMU_VOLT_01_675000_V =  1675000,
	PMU_VOLT_01_680000_V =  1680000,
	PMU_VOLT_01_700000_V =  1700000,
	PMU_VOLT_01_720000_V =  1720000,
	PMU_VOLT_01_725000_V =  1725000,
	PMU_VOLT_01_740000_V =  1740000,
	PMU_VOLT_01_750000_V =  1750000,
	PMU_VOLT_01_760000_V =  1760000,
	PMU_VOLT_01_775000_V =  1775000,
	PMU_VOLT_01_780000_V =  1780000,
	PMU_VOLT_01_800000_V =  1800000,
	PMU_VOLT_01_820000_V =  1820000,
	PMU_VOLT_01_825000_V =  1825000,
	PMU_VOLT_01_840000_V =  1840000,
	PMU_VOLT_01_850000_V =  1850000,
	PMU_VOLT_01_860000_V =  1860000,
	PMU_VOLT_01_875000_V =  1875000,
	PMU_VOLT_01_880000_V =  1880000,
	PMU_VOLT_01_900000_V =  1900000,
	PMU_VOLT_01_920000_V =  1920000,
	PMU_VOLT_01_925000_V =  1925000,
	PMU_VOLT_01_940000_V =  1940000,
	PMU_VOLT_01_950000_V =  1950000,
	PMU_VOLT_01_960000_V =  1960000,
	PMU_VOLT_01_975000_V =  1975000,
	PMU_VOLT_01_980000_V =  1980000,
	PMU_VOLT_02_000000_V =  2000000,
	PMU_VOLT_02_020000_V =  2020000,
	PMU_VOLT_02_040000_V =  2040000,
	PMU_VOLT_02_050000_V =  2050000,
	PMU_VOLT_02_060000_V =  2060000,
	PMU_VOLT_02_080000_V =  2080000,
	PMU_VOLT_02_100000_V =  2100000,
	PMU_VOLT_02_120000_V =  2120000,
	PMU_VOLT_02_125000_V =  2125000,
	PMU_VOLT_02_140000_V =  2140000,	
	PMU_VOLT_02_200000_V =  2200000,
	PMU_VOLT_02_275000_V =  2275000,
	PMU_VOLT_02_300000_V =  2300000,
	PMU_VOLT_02_350000_V =  2350000,
	PMU_VOLT_02_425000_V =  2425000,
	PMU_VOLT_02_400000_V =  2400000,	
	PMU_VOLT_02_500000_V =  2500000,
	PMU_VOLT_02_575000_V =  2575000,
	PMU_VOLT_02_600000_V =  2600000,
	PMU_VOLT_02_650000_V =  2650000,
	PMU_VOLT_02_700000_V =  2700000,
	PMU_VOLT_02_725000_V =  2725000,
	PMU_VOLT_02_750000_V =  2750000,
	PMU_VOLT_02_800000_V =  2800000,
	PMU_VOLT_02_850000_V =  2850000,
	PMU_VOLT_02_875000_V =  2875000,
	PMU_VOLT_02_900000_V =  2900000,
	PMU_VOLT_02_950000_V =  2950000,
	PMU_VOLT_03_000000_V =  3000000,
	PMU_VOLT_03_025000_V =  3025000,
	PMU_VOLT_03_100000_V =  3100000,
	PMU_VOLT_03_175000_V =  3175000,
	PMU_VOLT_03_200000_V =  3200000,	
	PMU_VOLT_03_250000_V =  3250000,
	PMU_VOLT_03_275000_V =  3275000,
	PMU_VOLT_03_300000_V =  3300000,
	PMU_VOLT_03_325000_V =  3325000,
	PMU_VOLT_03_350000_V =  3350000,
	PMU_VOLT_03_400000_V =  3400000,
	PMU_VOLT_03_500000_V =  3500000,
	PMU_VOLT_03_650000_V =  3650000,
	PMU_VOLT_03_775000_V =  3775000,
	PMU_VOLT_03_800000_V =  3800000,
	PMU_VOLT_03_825000_V =  3825000,
	PMU_VOLT_03_850000_V =  3850000,
	PMU_VOLT_03_900000_V =  3900000,
	PMU_VOLT_03_950000_V =  3950000,
	PMU_VOLT_03_975000_V =  3975000,
	PMU_VOLT_04_000000_V =  4000000,
	PMU_VOLT_04_012500_V =  4012500,
	PMU_VOLT_04_025000_V =  4025000,
	PMU_VOLT_04_037500_V =  4037500,
	PMU_VOLT_04_050000_V =  4050000,
	PMU_VOLT_04_062500_V =  4062500,
	PMU_VOLT_04_067500_V =  4067500,
	PMU_VOLT_04_075000_V =  4075000,
	PMU_VOLT_04_087500_V =  4087500,
	PMU_VOLT_04_100000_V =  4100000,
	PMU_VOLT_04_112500_V =  4112500,
	PMU_VOLT_04_115000_V =  4115000,
	PMU_VOLT_04_116000_V =  4116000,
	PMU_VOLT_04_125000_V =  4125000,
	PMU_VOLT_04_137500_V =  4137500,
	PMU_VOLT_04_150000_V =  4150000,
	PMU_VOLT_04_162500_V =  4162500,
	PMU_VOLT_04_175000_V =  4175000,
	PMU_VOLT_04_187500_V =  4187500,
	PMU_VOLT_04_200000_V =  4200000,
	PMU_VOLT_04_212500_V =  4212500,
	PMU_VOLT_04_225000_V =  4225000,
	PMU_VOLT_04_237500_V =  4237500,
	PMU_VOLT_04_250000_V =  4250000,
	PMU_VOLT_04_262500_V =  4262500,
	PMU_VOLT_04_275000_V =  4275000,
	PMU_VOLT_04_287500_V =  4287500,
	PMU_VOLT_04_300000_V =  4300000,
	PMU_VOLT_04_325000_V =  4325000,
	PMU_VOLT_04_350000_V =  4350000,
	PMU_VOLT_04_362500_V =  4362500,
	PMU_VOLT_04_375000_V =  4375000,
	PMU_VOLT_04_400000_V =  4400000,
	PMU_VOLT_04_411500_V =  4411500,
	PMU_VOLT_04_425000_V =  4425000,
	PMU_VOLT_04_450000_V =  4450000,
	PMU_VOLT_04_500000_V =  4500000,
	PMU_VOLT_04_550000_V =  4550000,
	PMU_VOLT_04_600000_V =  4600000,
	PMU_VOLT_04_700000_V =  4700000,
	PMU_VOLT_04_800000_V =  4800000,
	PMU_VOLT_04_850000_V =  4850000,	
	PMU_VOLT_04_950000_V =  4950000,
	PMU_VOLT_05_000000_V =  5000000,	
	PMU_VOLT_05_150000_V =  5150000,
	PMU_VOLT_05_250000_V =  5250000,
	PMU_VOLT_05_300000_V =  5300000,
	PMU_VOLT_05_450000_V =  5450000,
	PMU_VOLT_06_000000_V =  6000000,
	PMU_VOLT_06_500000_V =  6500000,
	PMU_VOLT_06_750000_V =  6750000,
	PMU_VOLT_07_000000_V =  7000000,
	PMU_VOLT_07_250000_V =  7250000,
	PMU_VOLT_07_500000_V =  7500000,
	PMU_VOLT_08_000000_V =  8000000,
	PMU_VOLT_08_500000_V =  8500000,
	PMU_VOLT_09_500000_V =  9500000,
	PMU_VOLT_10_000000_V = 10000000,
	PMU_VOLT_10_500000_V = 10500000,	
	PMU_VOLT_MAX,
	PMU_VOLT_INVALID

}PMU_VOLTAGE_ENUM;

typedef enum
{             
    PMU_VOLT_CAL_MINUS_00_140000_V  =   -1400000,
    PMU_VOLT_CAL_MINUS_00_120000_V  =   -1200000,
    PMU_VOLT_CAL_MINUS_00_100000_V  =   -1000000,
    PMU_VOLT_CAL_MINUS_00_080000_V  =   -800000,
    PMU_VOLT_CAL_MINUS_00_060000_V  =   -600000,
    PMU_VOLT_CAL_MINUS_00_040000_V  =   -400000,    
    PMU_VOLT_CAL_MINUS_00_020000_V  =   -200000,
	PMU_VOLT_CAL_00_000000_V        =   0,
	PMU_VOLT_CAL_00_200000_V        =   200000,    
    PMU_VOLT_CAL_00_400000_V        =   400000,
    PMU_VOLT_CAL_00_600000_V        =   600000,
    PMU_VOLT_CAL_00_800000_V        =   800000,
    PMU_VOLT_CAL_01_000000_V        =   1000000,    
    PMU_VOLT_CAL_01_200000_V        =   1200000,    
    PMU_VOLT_CAL_01_400000_V        =   1400000,        
    PMU_VOLT_CAL_01_600000_V        =   1600000,      
	PMU_VOLT_CAL_MAX,
	PMU_VOLT_CAL_INVALID
} PMU_VOLTAGE_CALIBRATION_ENUM;

 
typedef enum
{
	PMIC_SPK_VOL_00_00_dB    =    0,
	PMIC_SPK_VOL_00_50_dB    =   50,
	PMIC_SPK_VOL_01_00_dB    =  100,
	PMIC_SPK_VOL_01_50_dB    =  150,
	PMIC_SPK_VOL_02_00_dB    =  200,
	PMIC_SPK_VOL_02_50_dB    =  250,
	PMIC_SPK_VOL_03_00_dB    =  300,
	PMIC_SPK_VOL_03_50_dB    =  350,
	PMIC_SPK_VOL_04_00_dB    =  400,
	PMIC_SPK_VOL_04_50_dB    =  450,
	PMIC_SPK_VOL_05_00_dB    =  500,
	PMIC_SPK_VOL_05_50_dB    =  550,
	PMIC_SPK_VOL_06_00_dB    =  600,
	PMIC_SPK_VOL_06_50_dB    =  650,
	PMIC_SPK_VOL_07_00_dB    =  700,
	PMIC_SPK_VOL_07_50_dB    =  750,
	PMIC_SPK_VOL_08_00_dB    =  800,
	PMIC_SPK_VOL_08_50_dB    =  850,
	PMIC_SPK_VOL_09_00_dB    =  900,
	PMIC_SPK_VOL_09_50_dB    =  950,
	PMIC_SPK_VOL_10_00_dB    = 1000,
	PMIC_SPK_VOL_10_50_dB    = 1050,
	PMIC_SPK_VOL_11_00_dB    = 1100,
	PMIC_SPK_VOL_11_50_dB    = 1150,
	PMIC_SPK_VOL_12_00_dB    = 1200,
	PMIC_SPK_VOL_12_50_dB    = 1250,
	PMIC_SPK_VOL_13_00_dB    = 1300,
	PMIC_SPK_VOL_13_50_dB    = 1350,
	PMIC_SPK_VOL_14_00_dB    = 1400,
	PMIC_SPK_VOL_14_50_dB    = 1450,
	PMIC_SPK_VOL_15_00_dB    = 1500,
	PMIC_SPK_VOL_15_50_dB    = 1550,
	PMIC_SPK_VOL_16_00_dB    = 1600,
	PMIC_SPK_VOL_16_50_dB    = 1650,
	PMIC_SPK_VOL_17_00_dB    = 1700,
	PMIC_SPK_VOL_17_50_dB    = 1750,
	PMIC_SPK_VOL_18_00_dB    = 1800,
	PMIC_SPK_VOL_18_50_dB    = 1850,
	PMIC_SPK_VOL_19_00_dB    = 1900,
	PMIC_SPK_VOL_19_50_dB    = 1950,
	PMIC_SPK_VOL_20_00_dB    = 2000,
	PMIC_SPK_VOL_20_50_dB    = 2050,
	PMIC_SPK_VOL_21_00_dB    = 2100,
	PMIC_SPK_VOL_21_50_dB    = 2150,
	PMIC_SPK_VOL_22_00_dB    = 2200,
	PMIC_SPK_VOL_22_50_dB    = 2250,
	PMIC_SPK_VOL_23_00_dB    = 2300,
	PMIC_SPK_VOL_23_50_dB    = 2350,
	PMIC_SPK_VOL_24_00_dB    = 2400,
	PMIC_SPK_VOL_24_50_dB    = 2450,
	PMIC_SPK_VOL_MAX     = 9900,
	
    PMU_SPK_VOL_MINUS_06_00_dB    =  -600,
    PMU_SPK_VOL_MINUS_03_00_dB    =  -300,
	PMU_SPK_VOL_00_00_dB    =    0,
	PMU_SPK_VOL_00_50_dB    =   50,
	PMU_SPK_VOL_01_00_dB    =  100,
	PMU_SPK_VOL_01_50_dB    =  150,
	PMU_SPK_VOL_02_00_dB    =  200,
	PMU_SPK_VOL_02_50_dB    =  250,
	PMU_SPK_VOL_03_00_dB    =  300,
	PMU_SPK_VOL_03_50_dB    =  350,
	PMU_SPK_VOL_04_00_dB    =  400,
	PMU_SPK_VOL_04_50_dB    =  450,
	PMU_SPK_VOL_05_00_dB    =  500,
	PMU_SPK_VOL_05_50_dB    =  550,
	PMU_SPK_VOL_06_00_dB    =  600,
	PMU_SPK_VOL_06_50_dB    =  650,
	PMU_SPK_VOL_07_00_dB    =  700,
	PMU_SPK_VOL_07_50_dB    =  750,
	PMU_SPK_VOL_08_00_dB    =  800,
	PMU_SPK_VOL_08_50_dB    =  850,
	PMU_SPK_VOL_09_00_dB    =  900,
	PMU_SPK_VOL_09_50_dB    =  950,
	PMU_SPK_VOL_10_00_dB    = 1000,
	PMU_SPK_VOL_10_50_dB    = 1050,
	PMU_SPK_VOL_11_00_dB    = 1100,
	PMU_SPK_VOL_11_50_dB    = 1150,
	PMU_SPK_VOL_12_00_dB    = 1200,
	PMU_SPK_VOL_12_50_dB    = 1250,
	PMU_SPK_VOL_13_00_dB    = 1300,
	PMU_SPK_VOL_13_50_dB    = 1350,
	PMU_SPK_VOL_14_00_dB    = 1400,
	PMU_SPK_VOL_14_50_dB    = 1450,
	PMU_SPK_VOL_15_00_dB    = 1500,
	PMU_SPK_VOL_15_50_dB    = 1550,
	PMU_SPK_VOL_16_00_dB    = 1600,
	PMU_SPK_VOL_16_50_dB    = 1650,
	PMU_SPK_VOL_17_00_dB    = 1700,
	PMU_SPK_VOL_17_50_dB    = 1750,
	PMU_SPK_VOL_18_00_dB    = 1800,
	PMU_SPK_VOL_18_50_dB    = 1850,
	PMU_SPK_VOL_19_00_dB    = 1900,
	PMU_SPK_VOL_19_50_dB    = 1950,
	PMU_SPK_VOL_20_00_dB    = 2000,
	PMU_SPK_VOL_20_50_dB    = 2050,
	PMU_SPK_VOL_21_00_dB    = 2100,
	PMU_SPK_VOL_21_50_dB    = 2150,
	PMU_SPK_VOL_22_00_dB    = 2200,
	PMU_SPK_VOL_22_50_dB    = 2250,
	PMU_SPK_VOL_23_00_dB    = 2300,
	PMU_SPK_VOL_23_50_dB    = 2350,
	PMU_SPK_VOL_24_00_dB    = 2400,
	PMU_SPK_VOL_24_50_dB    = 2450,
	PMU_SPK_VOL_MAX     = 9900
}PMU_SPK_VOL_ENUM;

 
typedef enum
{
	PMU_CHARGE_CURRENT_0_00_MA = 0,
	PMU_CHARGE_CURRENT_50_00_MA = 5000,
	PMU_CHARGE_CURRENT_62_50_MA = 6250,
	PMU_CHARGE_CURRENT_70_00_MA = 7000,
	PMU_CHARGE_CURRENT_75_00_MA = 7500,
	PMU_CHARGE_CURRENT_87_50_MA = 8750,	
	PMU_CHARGE_CURRENT_99_00_MA = 9900,
	PMU_CHARGE_CURRENT_100_00_MA = 10000,
	PMU_CHARGE_CURRENT_150_00_MA = 15000,
	PMU_CHARGE_CURRENT_200_00_MA = 20000,
	PMU_CHARGE_CURRENT_225_00_MA = 22500,	
	PMU_CHARGE_CURRENT_250_00_MA = 25000,
	PMU_CHARGE_CURRENT_300_00_MA = 30000,
	PMU_CHARGE_CURRENT_350_00_MA = 35000,
	PMU_CHARGE_CURRENT_400_00_MA = 40000,
	PMU_CHARGE_CURRENT_425_00_MA = 42500,	
	PMU_CHARGE_CURRENT_450_00_MA = 45000,
	PMU_CHARGE_CURRENT_500_00_MA = 50000,
	PMU_CHARGE_CURRENT_550_00_MA = 55000,
	PMU_CHARGE_CURRENT_600_00_MA = 60000,
	PMU_CHARGE_CURRENT_650_00_MA = 65000,
	PMU_CHARGE_CURRENT_700_00_MA = 70000,
	PMU_CHARGE_CURRENT_750_00_MA = 75000,
	PMU_CHARGE_CURRENT_800_00_MA = 80000,
	PMU_CHARGE_CURRENT_850_00_MA = 85000,
	PMU_CHARGE_CURRENT_900_00_MA = 90000,
	PMU_CHARGE_CURRENT_950_00_MA = 95000,
	PMU_CHARGE_CURRENT_1000_00_MA = 100000,
	PMU_CHARGE_CURRENT_1200_00_MA = 120000,
	PMU_CHARGE_CURRENT_1500_00_MA = 150000,
	PMU_CHARGE_CURRENT_1800_00_MA = 180000,
	PMU_CHARGE_CURRENT_2000_00_MA = 200000,
	PMU_CHARGE_CURRENT_MAX
}PMU_CHR_CURRENT_ENUM;


 
typedef enum
{
	PMU_VPA0,
	PMU_VPA1,
	PMU_VPA2,
	PMU_VPA3,
	PMU_VPA4,
	PMU_VPA5,
	PMU_VPA6,
	PMU_VPA7	
}PMU_VPA_ENUM;

 
typedef enum
{
	ENABLE_WITH_SRCLKEN = 0,
	ENABLE_LDO_BUCK_EN_REGISTER = 1
}PMU_ON_SEL_ENUM;

 
typedef enum
{
	DEFAULT_LOCAL_SENSE= 0,
	REMOTE_SENSE = 1
}PMU_RS_ENUM;

 
typedef enum
{
	KPLED_PWM_MODE = 0,
	KPLED_REGISTER_CTRL_MODE = 1
}PMU_CTRL_KPLED_MODE_ENUM;

 
typedef enum
{
	LDO_EN_SEL_BY_CONTROLLER = 0, 
	LDO_EN_SEL_BY_LDO_CON,

	LDO_EN_SEL_MAX = 0xFF
}PMU_CTRL_LDO_CTRL_MODE_ENUM;

 
typedef enum
{
	KPLED_SEL_1_SWITCH = 0,
	KPLED_SEL_2_SWITCH = 1,
	KPLED_SEL_3_SWITCH = 2,
	KPLED_SEL_4_SWITCH = 3,
	KPLED_SEL_5_SWITCH = 4,
	KPLED_SEL_6_SWITCH = 5,
	KPLED_SEL_7_SWITCH = 6,
	KPLED_SEL_8_SWITCH = 7
}PMU_CTRL_KPLED_SEL_ENUM;

 
typedef enum
{
	FLASHLED_PWM_MODE = 0,
	FLASHLED_REGISTER_CTRL_MODE = 1
}PMU_CTRL_FLASHLED_MODE_ENUM;

 
typedef enum
{
	FLASHLED_SEL_1_SWITCH = 0,
	FLASHLED_SEL_2_SWITCH = 1,
	FLASHLED_SEL_3_SWITCH = 2,
	FLASHLED_SEL_4_SWITCH = 3,
	FLASHLED_SEL_5_SWITCH = 4,
	FLASHLED_SEL_6_SWITCH = 5,
	FLASHLED_SEL_7_SWITCH = 6,
	FLASHLED_SEL_8_SWITCH = 7
}PMU_CTRL_FLASHLED_SEL_ENUM;

 
typedef enum
{
	PMU_CHR_WDT_TD_4SEC = 40,
	PMU_CHR_WDT_TD_8SEC = 80,
	PMU_CHR_WDT_TD_16SEC = 160,
	PMU_CHR_WDT_TD_32SEC = 320,
	PMU_CHR_WDT_TD_128SEC = 1280,
	PMU_CHR_WDT_TD_256SEC = 2560,
	PMU_CHR_WDT_TD_512SEC = 5120,
	PMU_CHR_WDT_TD_1024SEC = 10240,
	PMU_CHR_WDT_TD_3000SEC = 30000
}PMU_CHR_WDT_TD_ENUM;

 
typedef enum
{
	ISINK_PWM_MODE = 0,
	ISINK_REGISTER_CTRL_MODE = 1
}PMU_CTRL_ISINK_MODE_ENUM;

 
typedef enum
{
	ISINK_STEP_04_MA = 4,
	ISINK_STEP_05_MA = 5,
	ISINK_STEP_08_MA = 8,	
	ISINK_STEP_10_MA = 10,
	ISINK_STEP_12_MA = 12,
	ISINK_STEP_15_MA = 15,
	ISINK_STEP_16_MA = 16,
	ISINK_STEP_20_MA = 20,
	ISINK_STEP_24_MA = 24,	
	ISINK_STEP_32_MA = 32,
	ISINK_STEP_40_MA = 40,
	ISINK_STEP_48_MA = 48,			
}PMU_CTRL_ISINK_STEP_ENUM;

 
typedef enum
{
    ISINK_STEP_GROUP_A = 0,
    ISINK_STEP_GROUP_B,
    ISINK_STEP_GROUP_MAX,
}PMU_CTRL_ISINK_STEP_GROUP_ENUM;

 
typedef enum
{
    ISINK_STEP_INDEX_0 = 0,
    ISINK_STEP_INDEX_1,
    ISINK_STEP_INDEX_2,
    ISINK_STEP_INDEX_3,
    ISINK_STEP_INDEX_4,
    ISINK_STEP_INDEX_5,
    ISINK_STEP_INDEX_MAX,
}PMU_CTRL_ISINK_STEP_INDEX_ENUM;

 
typedef enum{
	SPK_CLASS_D_MODE = 0,
	SPK_CLASS_AB_MODE
}PMU_CTRL_SPK_MODE_ENUM;

 
typedef enum{
	SPK_SLEW_RATE_2_OVER_4 = 0,
	SPK_SLEW_RATE_1_OVER_4,
	SPK_SLEW_RATE_4_OVER_4,
	SPK_SLEW_RATE_3_OVER_4
}PMU_CTRL_SPK_SLEW_RATE_ENUM;

 
typedef enum{
	SPK_N = 0,
	SPK_P,        
}PMU_CTRL_SPK_CALI_PATH_ENUM;

 
typedef enum{
	PMU_CTRL_STEP1,
	PMU_CTRL_STEP2,
	PMU_CTRL_STEP3,
	PMU_CTRL_STEP4	
}PMU_CTRL_STEP_ENUM;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	DCL_BOOL	enable;
}PMU_CTRL_LDO_BUCK_SET_EN;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	DCL_BOOL	enable;
}PMU_CTRL_LDO_BUCK_SET_EN_FORCE;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	PMU_VOLTAGE_ENUM	voltage;
}PMU_CTRL_LDO_BUCK_SET_VOLTAGE;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	PMU_VOLTAGE_ENUM	sleepVoltage;
}PMU_CTRL_LDO_BUCK_SET_SLEEP_VOLTAGE;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	PMU_VOLTAGE_ENUM	voltage;
}PMU_CTRL_LDO_BUCK_SET_VOLTAGE_EN;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	PMU_RS_ENUM	rs;
}PMU_CTRL_LDO_BUCK_SET_RS;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	DCL_UINT16					thresholdIdx;
}PMU_CTRL_LDO_BUCK_SET_BURST_THRESHOLD;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	DCL_UINT16					currentLimitIdx;
}PMU_CTRL_LDO_BUCK_SET_CURRENT_LIMIT;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	DCL_UINT16					biasCurrentCalibrationCode;
}PMU_CTRL_LDO_BUCK_SET_BIAS_CURRENT_CALIBRATION_CODE;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	DCL_UINT16					voltageCalibrationCode;
}PMU_CTRL_LDO_BUCK_SET_VOLTAGE_CALIBRATION_CODE;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	DCL_UINT16		delayTimeIdx;
}PMU_CTRL_LDO_BUCK_SET_STB_TD;
	
 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	DCL_UINT16		deglitchTimeIdx;
}PMU_CTRL_LDO_BUCK_SET_OC_TD;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	DCL_BOOL	enable;
}PMU_CTRL_LDO_BUCK_SET_OCFB_EN;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	DCL_BOOL	enable;
}PMU_CTRL_LDO_BUCK_SET_OC_AUTO_OFF;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	PMU_ON_SEL_ENUM	onSel;
}PMU_CTRL_LDO_BUCK_SET_ON_SEL;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	DCL_BOOL	enable;
}PMU_CTRL_LDO_BUCK_SET_STB_EN;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	DCL_BOOL	enable;
}PMU_CTRL_LDO_BUCK_SET_NDIS_EN;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	DCL_BOOL	enable;
}PMU_CTRL_LDO_BUCK_SET_VSIM_GPLDO_EN;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	DCL_BOOL	enable;
}PMU_CTRL_LDO_BUCK_SET_VSIM2_GPLDO_EN;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	DCL_BOOL	enable;
}PMU_CTRL_LDO_BUCK_SET_SIM2_GPIO_EN;

 
typedef struct
{
    PMU_LDO_BUCK_LIST_ENUM          mod;
    PMU_VOLTAGE_ENUM                voltage;
}PMU_CTRL_LDO_BUCK_SET_CCI_C2A_SIM_VOSEL;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	DCL_BOOL	enable;
}PMU_CTRL_LDO_BUCK_SET_CCI_SRCLKEN;

 
typedef struct
{
    PMU_LDO_BUCK_LIST_ENUM		mod;
    DCL_BOOL oc_int_en;
}PMU_CTRL_LDO_BUCK_SET_OC_INT_EN;

 
typedef struct
{
    PMU_LDO_BUCK_LIST_ENUM		mod;
}PMU_CTRL_LDO_BUCK_CLEAR_OC_FLAG;

 
typedef struct
{
    PMU_LDO_BUCK_LIST_ENUM		mod;
    const DCL_UINT32            *pVals;
    DCL_UINT8                   size;
}PMU_CTRL_LDO_BUCK_GET_VOLTAGE_LIST;


 
typedef struct
{
    PMU_LDO_BUCK_LIST_ENUM		mod;
    DCL_BOOL oc_flag;
}PMU_CTRL_LDO_BUCK_GET_OC_FLAG;

 
typedef struct
{
    PMU_LDO_BUCK_LIST_ENUM		mod;
    DCL_BOOL oc_status;
}PMU_CTRL_LDO_BUCK_GET_OC_STATUS;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
	PMU_VOLTAGE_CALIBRATION_ENUM voltage;
}PMU_CTRL_LDO_SET_CAL;

 
typedef struct
{
	PMU_VPA_LIST_ENUM vpa;
	DCL_BOOL	enable;
}PMU_CTRL_VPA_SET_EN;

 
typedef struct
{
	PMU_VOLTAGE_ENUM	voltage;
	PMU_VPA_ENUM	vpaIdx;	
	PMU_VPA_LIST_ENUM vpa;
}PMU_CTRL_VPA_SET_VOLTAGE;

 
typedef struct
{
	DCL_BOOL	byPASEL;
}PMU_CTRL_VPA_CTRL_SEL;

 
typedef struct
{
	const DCL_UINT32 *pVoltageList;
	DCL_UINT32 number;
}PMU_CTRL_VPA_GET_VOLTAGE_LIST;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_VPA_SET_BAT_LOW;

 
typedef struct
{
	PMU_VPA_LIST_ENUM vpa;
	DCL_BOOL	enable;
}PMU_CTRL_VPA_SET_FPWM;

 
typedef struct
{
	DCL_UINT16	duty;
}PMU_CTRL_VIBR_SET_DIMMING_ON_DUTY;

 
typedef struct
{
	PMU_SPK_LIST_ENUM spk;
	DCL_BOOL	enable;
	PMU_CTRL_STEP_ENUM step;
}PMU_CTRL_SPK_SET_EN;

 
typedef struct
{
	PMU_SPK_LIST_ENUM spk;
	PMU_CTRL_SPK_MODE_ENUM	mode;
}PMU_CTRL_SPK_SET_MODE;

 
typedef struct
{
	PMU_SPK_LIST_ENUM spk;
	DCL_UINT16	mode;
}PMU_CTRL_SPK_GET_MODE;

 
typedef struct
{
	PMU_SPK_LIST_ENUM spk;
	PMU_CTRL_SPK_MODE_ENUM	mode;
}PMU_CTRL_SPK_SET_SLEW_RATE;

 
typedef struct
{
	PMU_SPK_LIST_ENUM spk;
	DCL_BOOL	enable;
}PMU_CTRL_SPK_SET_OC_AUTO_OFF;

 
typedef struct
{
	PMU_SPK_LIST_ENUM spk;
	DCL_UINT16	volValue;
}PMU_CTRL_SPK_SET_VOL_VALUE;

 
typedef struct
{
	PMU_SPK_LIST_ENUM spk;
	DCL_UINT16	volValue;
}PMU_CTRL_SPK_GET_VOL_VALUE;	

 
typedef struct
{
	PMU_SPK_LIST_ENUM spk;
	PMU_SPK_VOL_ENUM	dbm;
}PMU_CTRL_SPK_GET_VOL;	

 
typedef struct
{
	PMU_SPK_LIST_ENUM spk;
	PMU_SPK_VOL_ENUM	dbm;
}PMU_CTRL_SPK_SET_VOL;	

 
typedef struct
{
	PMU_SPK_LIST_ENUM spk;
	DCL_BOOL	enable;
}PMU_CTRL_SPK_SET_CALIBR_EN;	

 
typedef struct
{
	PMU_SPK_LIST_ENUM spk;
	PMU_CTRL_SPK_CALI_PATH_ENUM	path;
}PMU_CTRL_SPK_SET_CALIBR_SEL;	

 
typedef struct
{
    PMU_SPK_LIST_ENUM spk;
    DCL_BOOL oc_int_en;
}PMU_CTRL_SPK_SET_OC_INT_EN;

 
typedef struct
{
    PMU_SPK_LIST_ENUM spk;
}PMU_CTRL_SPK_CLEAR_OC_FLAG;

 
typedef struct
{
    PMU_SPK_LIST_ENUM spk;
    DCL_BOOL oc_flag;
}PMU_CTRL_SPK_GET_OC_FLAG;

 
typedef struct
{
    PMU_SPK_LIST_ENUM spk;
    DCL_BOOL oc_status;
}PMU_CTRL_SPK_GET_OC_STATUS;

 
typedef enum
{
	BL_VBOOST_VOLTAGE_CONTROLLER_MODE=0,
	BL_VBOOST_CURRENT_CONVERTER_MODE=1,
	BL_ISINK_MODE=2,	
	BL_MODE_1=0,
	BL_MODE_2=1,
	BL_MODE_3=2,
	BL_MODE0=0,
	BL_MODE1=1,
	BL_MODE2=2,
	BL_MODE3=3,
	BL_MODE_NUM
}PMU_CTRL_BL_MODE_ENUM;

 
typedef struct
{
	PMU_CTRL_BL_MODE_ENUM blMode;
}PMU_CTRL_BL_SET_INIT;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_BL_SET_EN;

 
typedef struct
{
    DCL_UINT32 blLevel;
}PMU_CTRL_BL_SET_LEVEL;


 
typedef struct
{
    DCL_UINT32 blSupportLevel;
}PMU_CTRL_BL_GET_SUPPORT_LEVEL;

 
typedef struct
{
    DCL_UINT32 blUsePwmQuery;
}PMU_CTRL_BL_GET_USE_PWM_QUERY;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_FLASHLED_SET_EN;

 
typedef struct
{
	PMU_CTRL_FLASHLED_MODE_ENUM mode;
}PMU_CTRL_FLASHLED_SET_MODE;

 
typedef struct
{
	PMU_CTRL_FLASHLED_SEL_ENUM sel;
}PMU_CTRL_FLASHLED_SET_SEL;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_KPLED_SET_EN;

 
typedef struct
{
	PMU_CTRL_KPLED_MODE_ENUM mode;
}PMU_CTRL_KPLED_SET_MODE;

 
typedef struct
{
	PMU_CTRL_KPLED_SEL_ENUM sel;
}PMU_CTRL_KPLED_SET_SEL;

 
typedef struct
{
	DCL_UINT16 div;
}PMU_CTRL_KPLED_SET_FREQUENCY_DIVISION;

 
typedef struct
{
	DCL_UINT16 duty;
}PMU_CTRL_KPLED_SET_DIMMING_ON_DUTY;	

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_SET_ADC_MEASURE_EN;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_SET_CSDAC_EN;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_SET_CHR_EN;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_SET_CHR_FORCE_EN;

 
typedef struct
{
	PMU_CHR_CURRENT_ENUM	current;
}PMU_CTRL_CHR_GET_CHR_CURRENT;

 
typedef struct
{
	const DCL_UINT32 *pCurrentList;
	DCL_UINT32 number;
}PMU_CTRL_CHR_GET_CHR_CURRENT_LIST;

 
typedef struct
{
	PMU_CHR_CURRENT_ENUM	current;
}PMU_CTRL_CHR_SET_CHR_CURRENT;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_GET_CHR_DET_STATUS;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_GET_CV_DETECTION_STATUS;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_SET_CV_DETECTION_EN;

 
typedef struct
{
	PMU_VOLTAGE_ENUM	voltage;
}PMU_CTRL_CHR_SET_CV_DETECTION_VOLTAGE;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_GET_IS_BATTERY_ON;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_GET_IS_CHR_VALID;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_SET_WDT_INT_EN;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_SET_WDT_EN;

 
typedef struct
{
	PMU_CHR_WDT_TD_ENUM	secs;
}PMU_CTRL_CHR_SET_WDT_TIMER;

 
typedef struct
{
	PMU_VOLTAGE_ENUM	voltage;
}PMU_CTRL_CHR_SET_HV_DETECTION_VOLTAGE;

 
typedef struct
{
	const DCL_UINT32 *pVoltageList;
	DCL_UINT32 number;
}PMU_CTRL_CHR_GET_HV_DETECTION_VOLTAGE_LIST;

 
typedef struct
{
	DCL_BOOL	HV_deteted;
}PMU_CTRL_CHR_GET_VCDT_HV_DET;


 
typedef struct
{
	PMU_VOLTAGE_ENUM	voltage;
}PMU_CTRL_CHR_SET_VBAT_OV_DETECTION_VOLTAGE;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_SET_BAT_HT_EN;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_SET_OTG_BVALID_EN;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_SET_BC11_PULLUP_EN;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_SET_CV_MODE;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_SET_CSDAC_MODE;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_SET_TRACKING_EN;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_SET_HWCV_EN;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_CHR_SET_ULC_DET_EN;

 
typedef struct
{
	DCL_UINT16	debounceTime;
}PMU_CTRL_CHR_SET_LOW_ICH_DB;

 
typedef struct
{
	DCL_INT32	vbat;
}PMU_CTRL_CHR_SET_VBAT_CV_CALIBRATION;

 
typedef struct
{
	DCL_BOOL vbat_cc_det;
}PMU_CTRL_CHR_GET_CC_DET;

 
typedef struct
{
	PMU_BOOST_LIST_ENUM boost;
	DCL_BOOL	enable;
}PMU_CTRL_BOOST_SET_EN;

 
typedef struct
{
	PMU_BOOST_LIST_ENUM boost;
	DCL_BOOL	currentLimit;
}PMU_CTRL_BOOST_SET_CURRENT_LIMIT;

 
typedef struct
{
	PMU_BOOST_LIST_ENUM boost;
	DCL_BOOL	clkCal;
}PMU_CTRL_BOOST_SET_CLK_CAL;

 
typedef struct
{
	PMU_BOOST_LIST_ENUM boost;
	DCL_BOOL	enable;
}PMU_CTRL_BOOST_SET_SYNC_EN;

 
typedef struct
{
	PMU_BOOST_LIST_ENUM boost;
	PMU_VOLTAGE_ENUM	voltage;
}PMU_CTRL_BOOST_SET_VOLTAGE;	

 
typedef struct
{
	PMU_BOOST_LIST_ENUM boost;
	DCL_UINT16	level;
}PMU_CTRL_BOOST_SET_LEVEL;

 
typedef struct
{
	PMU_ISINK_LIST_ENUM		isink;
	DCL_BOOL	enable;
}PMU_CTRL_ISINK_SET_EN;

 
typedef struct
{
	PMU_ISINK_LIST_ENUM		isink;
	PMU_CTRL_ISINK_MODE_ENUM	mode;
}PMU_CTRL_ISINK_SET_MODE;

 
typedef struct
{
	PMU_ISINK_LIST_ENUM		isink;
	PMU_CTRL_ISINK_STEP_ENUM	step;
}PMU_CTRL_ISINK_SET_STEP;

 
typedef struct
{
    PMU_CTRL_ISINK_STEP_GROUP_ENUM   group;
}PMU_CTRL_ISINK_SET_STEP_GROUP;

 
typedef struct
{
    PMU_ISINK_LIST_ENUM         isink;
    PMU_CTRL_ISINK_STEP_INDEX_ENUM   index;
}PMU_CTRL_ISINK_SET_STEP_INDEX;

 
typedef struct
{
	PMU_ISINK_LIST_ENUM		isink;
	DCL_BOOL    forceOff;
}PMU_CTRL_ISINK_SET_FORCE_OFF;

 
typedef struct
{
	PMU_ISINK_LIST_ENUM		isink;
	DCL_UINT16	duty;
}PMU_CTRL_ISINK_SET_DIMMING_ON_DUTY;

 
typedef struct
{
	PMU_ISINK_LIST_ENUM		isink;
	DCL_UINT16	div;
}PMU_CTRL_ISINK_SET_FREQUENCY_DIVISION;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_ISINK_SET_STP_EN;

 
typedef struct
{
	PMU_ISINK_LIST_ENUM		isink;
	DCL_BOOL	enable;
}PMU_CTRL_ISINK_SET_STEP_DOUBLE;

 
typedef struct
{
	PMU_ISINK_LIST_ENUM		isink;
	DCL_BOOL	enable;
}PMU_CTRL_ISINK_SET_STEP_MODE;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_MISC_SET_BLED_EN;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_MISC_SET_RLED_EN;

 
typedef struct
{
	DCL_BOOL	enable;
}PMU_CTRL_MISC_SET_GLED_EN;

typedef struct
{
    DCL_UINT8 lmon_sel;
    DCL_UINT8 hmon_sel;
}PMU_CTRL_MISC_SET_ABIST_MON_SEL;

typedef struct
{
    DCL_UINT8 lmon_data:4;
    DCL_UINT8 hmon_data:4;
}PMU_CTRL_MISC_GET_ABIST_MON_DATA;

 
typedef struct
{
	DCL_UINT32 offset;
	DCL_UINT16 value;
}PMU_CTRL_MISC_SET_REGISTER_VALUE;

 
typedef struct
{
	DCL_UINT32 offset;
	DCL_UINT16 value;
}PMU_CTRL_MISC_GET_REGISTER_VALUE;

 
typedef struct
{
	PMU_LDO_BUCK_LIST_ENUM		mod;
}PMU_CTRL_LDO_BUCK_CTRL;




 
#line 1966 "interface\\hal\\peripheral\\dcl_pmu.h"



 
#line 2229 "interface\\hal\\peripheral\\dcl_pmu.h"




#line 216 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_pw.h"

































 







































































 








 


 

 





 





 

typedef enum{
	PWRKEYPWRON = 0,  
	CHRPWRON	= 1,       
	RTCPWRON = 2,	     
	CHRPWROFF = 3,      
	WDTRESET = 4, 	    
	ABNRESET = 5,        
	USBPWRON = 6,      
	USBPWRON_WDT = 7,  
	PRECHRPWRON = 8,    
	UNKNOWN_PWRON = 0xF9	 
}PW_CTRL_POWER_ON_REASON;

typedef enum{
 	PWR_FACTOR_POWER_KEY = 0,
	PWR_FACTOR_CHARGER_IN,
 	PWR_FACTOR_USB_IN,
 	PWR_FACTOR_RTC_EXPIRE,
 	PWR_FACTOR_WDT_RESET,
 	PWR_FACTOR_NORMAL_RESET_FLG,
 	PWR_FACTOR_CHRPWRON_FLG,
 	PWR_FACTOR_USBMS_PWRON_FLG,
 	PWR_FACTOR_RTCPWRON_FLG,
 	PWR_FACTOR_PRECHRPWRON_FLG,
 	PWR_FACTOR_SWITCH2IDLE_FLG,
 	PWR_FACTOR_SWITCH2CHR_FLG,
 	PWR_FACTOR_SWITCH2USB_FLG,
 	PWR_FACTOR_MAX
}pwr_factor_enum;

typedef enum{
    PWR_FACTOR_BL_POWER_KEY = 0x1,
    PWR_FACTOR_BL_CABLE_IN = 0x2,
    PWR_FACTOR_BL_RTC_EXPIRE = 0x4,
    PWR_FACTOR_BL_NORMAL_RESET_FLG = 0x8,
    PWR_FACTOR_BL_CHRPWRON_FLG = 0x10,
    PWR_FACTOR_BL_USBMS_PWRON_FLG = 0x20,
    PWR_FACTOR_BL_RTCPWRON_FLG = 0x40,
    PWR_FACTOR_BL_FACTORY_FLG = 0x80,
    PWR_FACTOR_BL_MAX
}pw_factor_bl_enum;

typedef enum{
    PWR_NONE = 0x0,
    PWR_AC_CHR = 0x1,
    PWR_USB_CHR = 0x2,
}PWR_CTRL_CABLE_TYPE;

typedef struct
{
	DCL_BOOL	val;  
} PW_CTRL_IS_USB_BOOT;

typedef struct
{
	PW_CTRL_POWER_ON_REASON	powerOnReason;  
} PW_CTRL_SET_POWERON_REASON;
   
typedef struct
{
	PW_CTRL_POWER_ON_REASON	powerOnReason;  
} PW_CTRL_GET_POWERON_REASON;

typedef struct
{
    PWR_CTRL_CABLE_TYPE pw_chr_type;    
} PW_CTRL_GET_CHARGER_TYPE;



 
#line 221 "interface\\hal\\peripheral\\dcl_pw.h"




 
#line 255 "interface\\hal\\peripheral\\dcl_pw.h"

#line 271 "interface\\hal\\peripheral\\dcl_pw.h"






#line 442 "interface\\hal\\peripheral\\dcl_pw.h"



#line 217 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_chr_det.h"

































 
 
































































 










 


 

 





 


 
typedef enum
{
   PW_AC_CHR=0,			 
   PW_USB_CHR,			 
   PW_AC_NON_STD_CHR,  
   PW_USB_CHARGING_HOST_CHR,   
   PW_NO_CHR    
}CHR_DET_TYPE_ENUM;

typedef enum {
   CHARGER_PLUG_IN = 0,
   CHARGER_PLUG_OUT = 1,
   CHARGER_UNINIT = 0xff
}CHARGER_IN_OUT_STATUS;

 
typedef struct
{
	CHR_DET_TYPE_ENUM	Chr_det_type;	 
}CHR_DET_CTRL_QUERY_IS_CHR_IN_BY_PW;

 
typedef struct
{
	CHR_DET_TYPE_ENUM	Chr_det_type;	 
}CHR_DET_CTRL_QUERY_CHR_TYPE;

typedef struct
{
	void (*usb_det_hisr)(void); 
}CHR_DET_CTRL_REGISTER_USB_HISR;

typedef struct
{
	CHARGER_IN_OUT_STATUS charger_plug_status; 
}CHR_DET_CTRL_GET_CHR_STATUS;



 
#line 181 "interface\\hal\\peripheral\\dcl_chr_det.h"




 
#line 208 "interface\\hal\\peripheral\\dcl_chr_det.h"




typedef enum
{
	CHR_DET_EINT_OWNER_USB = 0x01,	
	CHR_DET_EINT_OWNER_BMT = 0x02,	
	USB_DET_EINT_OWNER_FORCE_UNMASK = 0x80	
}CHR_DET_EINT_OWNER;


typedef struct
{
	CHR_DET_TYPE_ENUM (*pw_is_charger_usb_det)(void);
	void (*pw_is_charger_usb_det_eint)(void);
	void (*usb_det_hisr)(void); 
}CHR_USB_DET_MGR_T;







#line 398 "interface\\hal\\peripheral\\dcl_chr_det.h"


































#line 218 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_pxs.h"








 


















































 







 




 
typedef void (*PFN_DCL_PXS_NOTIFY_CALLBACK)(DCL_BOOL fgObjectDetected);

typedef enum
{
	PXS_COMPARE_WINDOW,  
	PXS_HILO_THRESHOLD,  
	PXS_ADV_ALGO_MAX
} PXS_ADV_ALGO_ENUM;

typedef struct
{
   DCL_BOOL fgNotify;
   PFN_DCL_PXS_NOTIFY_CALLBACK NotifyCallback;
} PXS_CONFIG_T, PXS_CTRL_CONFIG_T;






 




 
#line 113 "interface\\hal\\peripheral\\dcl_pxs.h"




 


typedef enum
{
	PXS_HW_CMD_POWER_ENABLE,
	PXS_HW_CMD_GET_SENSITIVITY_LEVEL_NUM,
	PXS_HW_CMD_GET_SENSITIVITY_TABLE,
}PXS_HW_CMD_ENUM;

 
typedef struct
{
   DCL_BOOL fgEnable;
}PXS_CTRL_ENABLE_T;

 
typedef struct
{
   DCL_UINT16 u2Data;
}PXS_CTRL_RAW_DATA_T;

 





 






 
typedef struct
{
   DCL_UINT32 u4P1;
   DCL_UINT32 u4P2;
   DCL_UINT32 u4P3;
   DCL_UINT32 u4P4;
   DCL_UINT32 u4P5;
   DCL_UINT32 u4P6;
   DCL_UINT32 u4P7;
   DCL_UINT32 u4P8;
   DCL_UINT32 u4PollingPeriod;   
}PXS_CTRL_EM_PARAM_T;

 
typedef struct
{
   DCL_UINT16 u2Count;
}PXS_CTRL_GET_ADV_ALGO_WINDOWING_T;

 
typedef struct
{
   DCL_UINT16 u2HiThreshold;
   DCL_UINT16 u2LoThreshold;
}PXS_CTRL_GET_ADV_ALGO_THRESHOLD_T;

 
typedef struct
{
   DCL_UINT16 u2LevelNum;
}PXS_CTRL_GET_SENSITIVITY_LEVEL_NUM_T;

 
typedef struct
{
   DCL_UINT16 u2Level;
}PXS_CTRL_SET_SENSITIVITY_LEVEL_T;

 
typedef struct
{
   DCL_BOOL fgDetected;
}PXS_CTRL_GET_DETECT_STATUS_T;


 
typedef struct
{
	DCL_UINT32 u4TopAreaDebounce; 
	DCL_UINT32 u4LargerAreaDebounce; 
}PXS_CTRL_SET_DEBOUNCE_T;

#line 216 "interface\\hal\\peripheral\\dcl_pxs.h"







#line 389 "interface\\hal\\peripheral\\dcl_pxs.h"


#line 219 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_f32k_clk.h"

































 














































 





#line 88 "interface\\hal\\peripheral\\dcl_f32k_clk.h"



 


 

 




 




 

typedef struct
{
    DCL_BOOLEAN f32k_is_xosc32;
}F32K_CLK_CTRL_F32K_IS_XOSC32_T;

typedef struct
{
    DCL_UINT16  eosc32_cali_val;
}F32K_CLK_CTRL_EOSC32_CALI_VAL_T;

#line 130 "interface\\hal\\peripheral\\dcl_f32k_clk.h"



 
#line 145 "interface\\hal\\peripheral\\dcl_f32k_clk.h"





#line 237 "interface\\hal\\peripheral\\dcl_f32k_clk.h"
 
#line 220 "interface\\hal\\peripheral\\dcl.h"



 








typedef DCL_INT32 DCL_STATUS;
typedef enum
{
   STATUS_OK = 0,
   STATUS_FAIL = -1,
   STATUS_INVALID_CMD = -2,
   STATUS_UNSUPPORTED = -3,
   STATUS_NOT_OPENED = -4,
   STATUS_INVALID_EVENT = -5,
   STATUS_INVALID_DCL_HANDLE = -6,
   STATUS_INVALID_CTRL_DATA = -7,
   STATUS_INVALID_CONFIGURATION = -8,
   STATUS_INVALID_ARGUMENT = -9,
   STATUS_ERROR_TIMEOUT = -10,
   STATUS_ERROR_CRCERROR = -11,
   STATUS_ERROR_READONLY = -12,
   STATUS_ERROR_WRONG_STATE = -13,
   STATUS_INVALID_DEVICE = -14,
   STATUS_ALREADY_OPENED = -15,
   STATUS_SET_VFIFO_FAIL = -16,
   STATUS_INVALID_OPERATION = -17,
   STATUS_DEVICE_NOT_EXIST = -18,

   
   STATUS_DEVICE_NOT_SUPPORT_DMA = -19,
   STATUS_DEVICE_IS_BUSY = -20,
   STATUS_ACKERR = -21, 
   STATUS_HS_NACKERR = -22,

   STATUS_BUFFER_EMPTY = 1
} DCL_STATUS_T;



 
typedef DCL_UINT16 DCL_DEV;
typedef enum
{
   DCL_UART_GROUP_START = 0,
   uart_port1=0x00, uart_port2, uart_port3, uart_port_irda, uart_port_usb, uart_port_usb2 = (1+uart_port_usb) , uart_port_usb3, uart_port_bluetooth, uart_port_swdbg, uart_port_tst_ccci, uart_port_at_ccci, uart_port_ccmni1_ccci, uart_port_ccmni2_ccci, uart_port_ccmni3_ccci, uart_port_gps_ccci, start_of_virtual_port, end_of_virtual_port = ((3-1) + start_of_virtual_port), uart_port_dcc, uart_port_lga1, uart_port_lga2, uart_port_lmu, uart_port_sp_usb, uart_port_sp_usb_dsp, uart_port_dual_talk, uart_max_port, uart_port_null = 99, 
   DCL_GPIO_GROUP_START = 0x100,
   DCL_GPIO,
   DCL_GPO,
   DCL_GPIO_CLK,
   DCL_GPT_GROUP_START = 0x200,
   DCL_GPT_CB,
   DCL_GPT_BusyWait,
   DCL_GPT_FreeRUN3,
   DCL_GPT_FreeRUN4,
   DCL_XGPT,
   DCL_PWM_GROUP_START = 0x300,
   DCL_PWM1,
   DCL_PWM2,
   DCL_PWM3,
   DCL_PWM4,
   DCL_PWM5,
   DCL_PWM6,
   DCL_PWM_GROUP_END = 0x400,
   DCL_REST_GROUP_START = DCL_PWM_GROUP_END,
   DCL_BMT,
   DCL_PFC,
   DCL_RTC,
   DCL_ADC,
   DCL_PMU,
   DCL_PW,
   DCL_CHR_USB_DET,
   DCL_ALERTER,
   DCL_KBD,
   DCL_TS,
   DCL_I2C,
   DCL_AUX,
   DCL_WDT,
   DCL_IRDA,
   DCL_USB,
   DCL_SIM,
   DCL_SD,
   DCL_MS,
   DCL_SDIO,
   DCL_ONEW, 
   DCL_HDQ,
   DCL_PXS,
   DCL_F32K_CLK
} DCL_DEV_T;



 
typedef DCL_UINT32 DCL_FLAGS;
typedef enum
{
   FLAGS_NONE = 0,
   FLAGS_END
} DCL_FLAGS_T;




 
typedef DCL_UINT32 DCL_OPTIONS;
typedef enum
{
   OPTIONS_NONE = 0,
   GPT_OPTIONS_START = OPTIONS_NONE,
    
   GPIO_OPTIONS_START = 0x100,
    
   ADC_OPTIONS_START = 0x200,
    
   WDT_OPTIONS_START = 0x300,
    
   BMT_OPTIONS_START = 0x400,
    
   PFC_OPTIONS_START = 0x500,
    
   RTC_OPTIONS_START = 0x600,
    
   I2C_OPTIONS_START = 0x700,
    
   AUX_OPTIONS_START = 0x800,
    
   TS_OPTIONS_START = 0x900,
   
   USB_DRV_OPTIONS_START = 0xA00,
   
   USB_HCD_OPTIONS_START = 0xB00,
   
   OTG_DRV_OPTIONS_START = 0xC00,
   
   IRDA_OPTIONS_START = 0xD00,
   
   PMU_OPTIONS_START = 0xE00,
    
   PW_OPTIONS_START = 0xF00,
    
   CHR_DET_OPTIONS_START = 0x1000,
    
   PXS_OPTIONS_START = 0x2000,
    
   F32K_CLK_OPTIONS_START = 0x4000,
    
   OPTIONS_MAX
} DCL_OPTIONS_T;



 
typedef DCL_INT32 DCL_HANDLE;






 
typedef DCL_UINT8  DCL_BUFF;
typedef DCL_UINT32  DCL_BUFF_LEN;



 
typedef union
{
   PWM_CONFIG_T rPWMConfig;
   
   
   
      
   
      
   
   
   
   
   
   I2C_CONFIG_T rI2CCofig;
   
   
   
   
   
   
   
   
   
   IRDA_CONFIG_T rIRDACofig;
   
   
   
      
   
   
   
   SIM_CONFIG_T rSimConfig;
   
   
   
   PXS_CONFIG_T rPXSConfig;
   
   
} DCL_CONFIGURE_T;




 
typedef DCL_UINT32  DCL_EVENT;
typedef enum
{
   EVENT_NULL = 0,
   
   GPT_EVENTS_START = EVENT_NULL,
   EVENT_HGPT_TIMEOUT = 0x1,
   
   GPIO_EVENTS_START = 0x100,
   
   
   BMT_EVENTS_START = 0x200,
   
   
   PFC_EVENTS_START = 0x300,
   
   
   RTC_EVENTS_START = 0x400,
   EVENT_RTC_ALARM = 0x00000001, EVENT_RTC_TC = 0x00000002,
   
   WDT_EVENTS_START = 0x500,
   EVENT_WDT_TIMEOUT = 0x00000001,
   
   ADC_EVENTS_START = 0x600,
   
   
   I2C_EVENTS_START = 0x700,
   
   
   AUX_EVENTS_START = 0x800,
   
   
   KBDH_EVENTS_START = 0x900,
   DCL_EVENT_HKBD_STATUS_CHANGE = 0x01, DCL_EVENT_HKBD_EX_STATUS_CHANGE = 0X02, DCL_EVENT_HKBD_MAX = 0XFF,
   
   TS_EVENTS_START = 0xA00,
   DCL_EVENT_STS_PUSH_BUFF = 1, DCL_EVENT_STS_UP, DCL_EVNET_STS_DOWN, DCL_EVENT_STS_MAX,
   
   USB_DRV_EVENTS_START = 0xB00,
   
   
   USB_HCD_EVENTS_START = 0xC00,
   
   
   OTG_DRV_EVENTS_START = 0xD00,
   
   
   IRDA_EVENTS_START = 0xE00,
   
   
   PMU_EVENTS_START = 0xF00,
   
   
   PW_EVENTS_START = 0x1000,
   
   
   CHR_DET_EVENTS_START = 0x1100,
   
   
   PXS_EVENTS_START = 0x1200,
   
   
   F32K_CLK_EVENTS_START = 0x1300,
      
   EVENT_END
} DCL_EVENT_T;



 
typedef void (*PFN_DCL_CALLBACK)(DCL_EVENT event);



 



typedef DCL_UINT32  DCL_CTRL_CMD;
typedef enum
{
   CMDS_START = 0,
    
   
   GPIO_CMDS_START = CMDS_START, 
   GPIO_CMD_READ, GPIO_CMD_WRITE_LOW, GPIO_CMD_WRITE_HIGH, GPIO_CMD_SET_MODE_0, GPIO_CMD_SET_MODE_1, GPIO_CMD_SET_MODE_2, GPIO_CMD_SET_MODE_3, GPIO_CMD_SET_MODE_4, GPIO_CMD_SET_MODE_5, GPIO_CMD_SET_MODE_6, GPIO_CMD_SET_MODE_7, GPIO_CMD_SET_MODE_8, GPIO_CMD_SET_DIR_OUT, GPIO_CMD_SET_DIR_IN, GPIO_CMD_RETURN_MODE, GPIO_CMD_RETURN_DIR, GPIO_CMD_RETURN_OUT, GPIO_CMD_ENABLE_PULL, GPIO_CMD_DISABLE_PULL, GPIO_CMD_SET_PULL_HIGH, GPIO_CMD_SET_PULL_LOW, GPIO_CMD_SET_DINV, GPIO_CMD_SET_DEBUG, GPIO_CMD_SET_CLK_OUT, GPIO_CMD_SET_CLK_DIV, GPO_CMD_RETURN_MODE, GPO_CMD_RETURN_OUT, GPO_CMD_WRITE_HIGH, GPO_CMD_WRITE_LOW, GPO_CMD_MODE_SET_0, GPO_CMD_MODE_SET_1, GPO_CMD_MODE_SET_2, GPO_CMD_MODE_SET_3, GPIO_CMD_SET_DIR_OUT_NO_IRQ_MASK, GPIO_CMD_SET_DIR_IN_NO_IRQ_MASK, GPIO_CMD_WRITE_HIGH_NO_IRQ_MASK, GPIO_CMD_WRITE_LOW_NO_IRQ_MASK, GPIO_CMD_READ_NO_IRQ_MASK, GPIO_CMD_WRITE_FOR_SPI, GPIO_CMD_SET_PUPD_R0_R1, 
    
   UART_CMDS_START = 0x100,
   SIO_CMD_INIT = 0x00, SIO_CMD_OPEN, SIO_CMD_CLOSE, SIO_CMD_GET_BYTES, SIO_CMD_PUT_BYTES, SIO_CMD_GET_RX_AVAIL, SIO_CMD_GET_TX_AVAIL, SIO_CMD_PUT_ISR_BYTES, SIO_CMD_GET_ISR_TX_AVAIL, SIO_CMD_PURGE, SIO_CMD_SET_OWNER, SIO_CMD_SET_FLOW_CTRL, SIO_CMD_CONFIG_ESCAPE, SIO_CMD_SET_DCB_CONFIG, SIO_CMD_CTRL_DCD, SIO_CMD_CTRL_BREAK, SIO_CMD_CLR_RX_BUF, SIO_CMD_CLR_TX_BUF, SIO_CMD_SET_BAUDRATE, SIO_CMD_SEND_ISR_DATA, SIO_CMD_SEND_DATA, SIO_CMD_GET_OWNER_ID, SIO_CMD_SET_AUTOBAUD_DIV, SIO_CMD_REG_TX_CB, SIO_CMD_REG_RX_CB, SIO_CMD_GET_UART_BYTE, SIO_CMD_PUT_UART_BYTE, SIO_CMD_PUT_UART_BYTES, SIO_CMD_READ_DCB_CONFIG, SIO_CMD_CTRL_RI, SIO_CMD_GET_ESCAPE_INFO, SIO_CMD_CTRL_DTR, SIO_CMD_READ_HW_STATUS, UART_CMD_UART_START = 0x100, UART_CMD_SET_FIFO_TRIGGER, UART_CMD_POWER_ON, UART_CMD_CHECK_TX_BUF_EMPTY, UART_CMD_CHECK_TX_SEND_OUT, UART_CMD_GET_TX_BUF_SIZE, UART_CMD_SLEEP_TX_ENABLE, UART_CMD_CTRL_SLEEP_MODE, UART_CMD_SWITCH_PORT, UART_CMD_BOOTUP_INIT, UART_CMD_BOOT_PUTBYTES, UART_CMD_LOOPBACK, UART_CMD_ASSERT_WAIT_SEND_OUT, UART_CMD_CTRL_USE_VFIFO, UART_CMD_GET_FLOW_CONTROL, UART_CMD_REG_DEF_CB, UART_CMD_BMT_PUT_BYTES, UART_CMD_RECHANDLER_VFIFO, UART_CMD_TRXHANDLER_VFIFO, UART_CMD_RECTIMEOUTHANDLE, UART_CMD_THRE_HDR_VFIFO, UART_CMD_CTRL_TX_DMA, UART_CMD_GET_MAX_BAUDRATE, UART_CMD_UART_END, USB_CMD_UART_START = 0x200, USB_CMD_IS_CDCACM, USB_CMD_HIGH_SPEED_IF_ENABLE, USB_CMD_REG_TX_CB, USB_CMD_TX_DATA_STATUS, USB_CMD_SEND_DATA, USB_CMD_GET_DATA, USB_CMD_SEND_ISR_DATA, USB_CMD_CTRL_SEND_DATA, USB_CMD_CTRL_GET_DATA, USB_CMD_HALT, USB_CMD_FT_PORT, USB_CMD_ACM_RING_BUFF_THRESHOLD_EN, USB_CMD_USB2UART_TX_DMA_CBK, USB_CMD_BOOT_PUTBYTES, USB_CMD_IS_CDCACM_ACTIVE, USB_CMD_UART_END, 
    
   GPT_CMDS_START = 0x200,
   SGPT_CMD_START, SGPT_CMD_MINI_SECOND_START, SGPT_CMD_STOP, SGPT_CMD_BUSYWAIT, FGPT_CMD_START, FGPT_CMD_STOP, FGPT_CMD_RETURN_COUNT, 
    
      
   ADC_CMDS_START = 0x300,
   ADC_CMD_CREATE_OBJECT, ADC_CMD_MODIFY_PARAM, ADC_CMD_START_MEASURE, ADC_CMD_STOP_MEASURE, ADC_CMD_SET_TIMER_PAGE_ALIGN, ADC_CMD_REGISTER_MEASURE_CB, ADC_CMD_REGISTER_COMPLETE_CB, ADC_CMD_GET_CHANNEL, ADC_CMD_SCHE_ID_GET_HANDLE, ADC_CMD_TRANSFORM_INTO_VOLT, ADC_CMD_TRANSFORM_INTO_TEMP, ADC_CMD_TRANSFORM_INTO_CURR, ADC_CMD_GET_SCHEDULER_PARAMETER, ADC_CMD_SET_CALIBRATION_DATA, ADC_CMD_READ_CALIBRATION_DATA, ADC_CMD_READ_CALIBRATION_INFORM_IN_USBBOOT, ADC_CMD_SET_MULTI_CHANNEL_READ,
      
   HADC_CMDS_START = 0x400,
   ADC_CMD_IMM_MEASURE, ADC_CMD_SYNC_MEASURE, ADC_CMD_TDMA_SYNC_SETUP, ADC_CMD_POWER, ADC_CMD_GET_DATA_2_META, ADC_CMD_GET_DATA, ADC_CMD_GET_META_DATA, ADC_CMD_GET_MAX_PHYSICAL_CH, ADC_CMD_GET_IMM_DATA_ON_BOOTING,
    
   WDT_CMDS_START = 0x500,
   WDT_CMD_ENABLE , WDT_CMD_SET_EXT_POL, WDT_CMD_SET_EXT_RESET, WDT_CMD_SET_VALUE, WDT_CMD_RESTART, WDT_CMD_DRV_RESET, WDT_CMD_ABN_RESET, WDT_CMD_IRQ, WDT_CMD_GET_RSTINTERVAL, WDT_CMD_ENABLE_DEBUG,
    
   BMT_CMDS_START = 0x600,
   BMT_CMD_CALLSTATE, BMT_CMD_CHARGE, BMT_CMD_GET_CUSTOMIZED_PARA, BMT_CMD_SET_EXT_CHARGER, BMT_CMD_INITIALIZE, BMT_CMD_IS_BAT_ON, BMT_CMD_SENDMES2UEM, BMT_CMD_SET_CHR_STATUS, BMT_CMD_VBATINHISR, BMT_CMD_WDT_INIT, BMT_CMD_GET_EVENT_SCHEDULE_TIMER_INDEX, BMT_CMD_GET_CHARGING_CURRENT, BMT_CMD_GET_VBATTMP, BMT_CMD_SET_ADC_MEASURE_ENABLE, BMT_CMD_SET_CHR_EFUSE_TRIMMING_DATA, BMT_CMD_SET_BATTERY_HV_DATA, 
    
   PFC_CMDS_START = 0x700,
   PFC_CMD_RESET, PFC_CMD_ENCODE, PFC_CMD_DECODE, 
    
   RTC_CMDS_START = 0x800,
   RTC_CMD_BOOTLOADER_POWERON, RTC_CMD_CLEAR_PDN_BITS, RTC_CMD_CONFIG_AL_TC, RTC_CMD_DELAY, RTC_CMD_FT_POWEROFF, RTC_CMD_GET_ALARM_TIME, RTC_CMD_GET_TIME, RTC_CMD_GPIO_GET_INPUT, RTC_CMD_GPIO_SET_EXPORT_32K, RTC_CMD_GPIO_SET_EXPORT_COREDETB, RTC_CMD_GPIO_SET_INPUT_MODE, RTC_CMD_GPIO_SET_OUTPUT_MODE, RTC_CMD_HW_INIT, RTC_CMD_INIT, RTC_CMD_INIT_TC_AL_INTR, RTC_CMD_IS_CONFIG_VALID, RTC_CMD_IS_FIRST_ON, RTC_CMD_IS_MS_FIRSTPOWERON, RTC_CMD_IS_TIME_VALID, RTC_CMD_PWIC_CHECK_POWERON, RTC_CMD_PWIC_FIRST_POWERON_INIT_RTCTIME, RTC_CMD_PWIC_MASK_AL, RTC_CMD_PWIC_POWEROFF_RTC_INIT, RTC_CMD_PWIC_POWERON_RTC_INIT, RTC_CMD_READ_PDN_BITS, RTC_CMD_READ_SPAR, RTC_CMD_READ_XOSC_REG, RTC_CMD_RELOAD, RTC_CMD_SET_ALARM_TIME, RTC_CMD_SET_FIRST_POWERON, RTC_CMD_SET_PDN_BITS, RTC_CMD_SET_PWR_KEY, RTC_CMD_SET_TIME, RTC_CMD_SETBBPU, RTC_CMD_SETXOSC, RTC_CMD_START_CALI, RTC_CMD_WAIT_DEBOUNCE, RTC_CMD_WRITE_PDN_BITS, RTC_CMD_WRITE_SPAR, RTC_CMD_WRITE_TRIGGER, RTC_CMD_WRITE_TRIGGER_WAIT, RTC_CMD_WRITE_XOSC_REG, RTC_CMD_PROT_UNLOCK, RTC_CMD_REGISTER_MODULE_TO_SEND_RTCTIME, RTC_CMD_WRITE_OSC32CON_REG, 
    
   I2C_CMDS_START = 0x900,
   I2C_CMD_GET_TRANSACTION_MODE, I2C_CMD_SET_TRANSACTION_SPEED, I2C_CMD_SINGLE_WRITE, I2C_CMD_SINGLE_READ, I2C_CMD_CONT_WRITE, I2C_CMD_CONT_READ, I2C_CMD_WRITE_AND_READ, I2C_CMD_BATCH_TRANSACTION, I2C_CMD_GET_BATCH_TRANSACTION_RESULT, I2C_CMD_GET_DMA_PROPERTY, I2C_CMD_ENABLE_DMA, I2C_CMD_SET_SLAVE_ADDRESS,
    
   AUX_CMDS_START = 0xA00,
   AUX_CMD_GET_ACCDET_CONFIG_DATA_DEFINE, AUX_CMD_SET_ACCDET_CONFIG_DATA_DEFINE, AUX_CMD_SET_AUDIO_STATUS,
    
   KBDH_CMDS_START = 0xB00,
   HKBD_CMD_GET_KEY_NUMBER, HKBD_CMD_GET_KEY_STA_MAP, HKBD_CMD_GET_KEY_STATUS, HKBD_CMD_GET_POWER_KEY_STATUS,
   KBD_CMDS_START = 0xC00,
   KBD_CMD_SET_LONG_PRESS_TIME, KBD_CMD_SET_REPEAT_PRESS_TIME, KBD_CMD_SET_DETECTION_MODE, KBD_CMD_GET_KEY_DATA, KBD_CMD_PEEK_KEY_DATA, KBD_CMD_GET_DETECTION_MODE, KBD_CMD_CTRL_KEY_SUPPORT, KBD_CMD_CTRL_KEY_MULTIPLE, KBD_CMD_GET_KEY_EVENT_CNT, KBD_CMD_PUT_KEY_DATA, KBD_CMD_FIND_TWO_STEP,
    
   PWM_CMDS_START = 0xD00,
   PWM_CMD_SEQ_OPEN, PWM_CMD_SEQ_START, PWM_CMD_SEQ_STOP, PWM_CMD_SEQ_CLOSE, PWM_CONFIG_FREQ_STEPS, PWM_CMD_START, PWM_CMD_STOP, PWM_CMD_GET_DUTY_BY_LEVEL, PWM_CMD_GET_FREQ_BY_LEVEL, PWM_CMD_GET_CURRENT_LEVEL, PWM_CMD_GET_MAX_LEVEL, PWM_CMD_SET_LEVEL, PWM_CMD_SET_DUTY_BY_LEVEL, PWM_CMD_SET_FREQ_BY_LEVEL, PWM_CMD_GET_PWM_CHANNEL, PWM_CMD_SET_PWM_ARRAY, PWM_CMD_GET_CURRENT_DUTY, PWM_CMD_GET_CURRENT_FREQ, PWM_CMD_CONFIG, PWM_CMD_CONFIG_OLD, PWM_CMD_SET_BUF_VALID, PWM_CMD_SET_DELAY, PWM_CMD_SET_DUTY, PWM_CMD_TEST_SEL, PWM_CMD_OPEN, PWM_CMD_CLOSE,
   ALERTER_CMDS_START = 0xE00,
   ALERTER_CMD_CONFIGURE, ALERTER_CMD_START, ALERTER_CMD_STOP, ALERTER_CMD_PWROPEN, ALERTER_CMD_OUTPUT, ALERTER_CMD_PLAYNOTES, ALERTER_CMD_STOPNOTES, ALERTER_CMD_SETBUZVOLUME, ALERTER_CMD_GETLEVEL, 
    
   TS_CMDS_START = 0xF00,
   STS_CMD_GET_EVENT, STS_CMD_PEEK_EVENT, STS_CMD_ENABLE, STS_CMD_FLUSH, STS_CMD_START_CALI, STS_CMD_STOP_CALI, STS_CMD_READ_CALI, STS_CMD_SET_CALI, STS_CMD_RESET, STS_CMD_RESET_HANDWRITING, STS_CMD_CONF_SAMPLE_PERIOD, STS_CMD_CONF_MOVE_OFFSET, STS_CMD_CONF_HANDWRITING, STS_CMD_POWER_ON, STS_CMD_CONF_TIMEOUT_PERIOD, STS_CMD_CTRL_CUSTOM_PARAM, STS_CMD_CTRL_CUSTOM_PARAM_RANGE, STS_CMD_CTRL_MICRONMETER_TO_COORD, STS_CMD_CTRL_COORD_TO_MICRONMETER, STS_CMD_QUERY_TP_TYPE, STS_CMD_SET_DEVICE, STS_CMD_START_DUAL_CALI, STS_CMD_STOP_DUAL_CALI, STS_CMD_COMMAND,
    
   SD_CMDS_START = 0x1000,
   SD_CTRL_CMD_BASE, SD_CTRL_CMD_READ = SD_CTRL_CMD_BASE, SD_CTRL_CMD_WRITE, SD_CTRL_CMD_READ_ODD_SIZE, SD_CTRL_CMD_WRITE_ODD_SIZE, SD_CTRL_CMD_INIT, SD_CTRL_CMD_IS_INITED, SD_CTRL_CMD_ANALOG_SWITCH, SD_CTRL_CMD_FAST_FORMAT_START, SD_CTRL_CMD_FAST_FORMAT_STOP, SD_CTRL_CMD_IS_FAST_FORMAT_RUNNING, SD_CTRL_CMD_GET_CAPACITY, SD_CTRL_CMD_IS_EXISTENCE, SD_CTRL_CMD_POLL_EXISTENCE, SD_CTRL_CMD_SET_CLEAR_EXISTENCE, SD_CTRL_CMD_WRITE_PROTECTION, SD_CTRL_CMD_QUERY_EVER_PLUGOUT, SD_CTRL_CMD_RESET_EVER_PLUGOUT, SD_CTRL_CMD_FORCE_SINGLE_LINE, SD_CTRL_CMD_GO_IDLE, SD_CTRL_CMD_CACHEABLE_BUFFER, SD_CTRL_CMD_ADD_CALLBACK, SD_CTRL_CMD_SET_FLAG, SD_CTRL_CMD_READ_TEST, SD_CTRL_CMD_SET_CLOCK_TEST, SD_CTRL_CMD_FLUSH, SD_CTRL_CMD_GET_AND_CLEAR_MEDIA_CHANGED, SD_CTRL_CMD_DUMMY_END,
    
   SDIO_CMDS_START = 0x1100,
   SDIO_CTRL_CMD_REG_WR, SDIO_CTRL_CMD_REG_WR_ISR, SDIO_CTRL_CMD_DATA_WR, SDIO_CTRL_CMD_REG_RD, SDIO_CTRL_CMD_DATA_RD, SDIO_CTRL_CMD_CHECK_INTR, SDIO_CTRL_CMD_ENABLE_INTR, SDIO_CTRL_CMD_INIT, SDIO_CTRL_CMD_ABORT, SDIO_CTRL_CMD_SW_RST, SDIO_CTRL_CMD_QUERY_BLK_SIZE, SDIO_CTRL_CMD_SET_BLK_SIZE, SDIO_CTRL_CMD_GET_BLK_SIZE, SDIO_CTRL_CMD_ENABLE_IO, SDIO_CTRL_CMD_SET_BUS_WIDTH, SDIO_CTRL_CMD_GET_CCCR, SDIO_CTRL_CMD_GET_FBR, SDIO_CTRL_CMD_CMD52_READ, SDIO_CTRL_CMD_CMD52_WRITE, SDIO_CTRL_CMD_CMD52_WRITE_READ, SDIO_CTRL_CMD_CMD53_READ, SDIO_CTRL_CMD_CMD53_WRITE, SDIO_CTRL_CMD_MCUDMA_READ, SDIO_CTRL_CMD_MCUDMA_WRITE, SDIO_CTRL_CMD_CLKPADRED_READ, SDIO_CTRL_CMD_CLKPADRED_WRITE, SDIO_CTRL_CMD_FORCEMCU_READ, SDIO_CTRL_CMD_FORCEMCU_WRITE, SDIO_CTRL_CMD_GETCLK, SDIO_CTRL_CMD_SETCLK,
    
   USB_DRV_CMDS_START = 0x1300,
   USB_DRV_CMD_INIT_DRV_INFO = 0, USB_DRV_CMD_RESET_DRV_INFO, USB_DRV_CMD_REGISTER_DRV_INFO, USB_DRV_CMD_SET_UNMASK_IRQ, USB_DRV_CMD_GET_UNMASK_IRQ, USB_DRV_CMD_GET_EP_STALL_STATUS, USB_DRV_CMD_DRV_CREATE_ISR, USB_DRV_CMD_DRV_ACTIVATE_ISR, USB_DRV_CMD_DMA_DRV_CREATE_ISR, USB_DRV_CMD_DMA_DRV_ACTIVATE_ISR, USB_DRV_CMD_PDN_ENABLE, USB_DRV_CMD_DP_PULL_UP, USB_DRV_CMD_SET_DISCON_STATUS, USB_DRV_CMD_RESET_DRV, USB_DRV_CMD_INITIALIZE_DRV_PHASE_1, USB_DRV_CMD_INITIALIZE_DRV_PHASE_2, USB_DRV_CMD_RELEASE_DRV, USB_DRV_CMD_SET_ADDRESS, USB_DRV_CMD_GET_FRAME_COUNT, USB_DRV_CMD_TXEP_INIT, USB_DRV_CMD_RXEP_INIT, USB_DRV_CMD_TXEP_EN, USB_DRV_CMD_TXEP_DIS, USB_DRV_CMD_RXEP_EN, USB_DRV_CMD_RXEP_DIS, USB_DRV_CMD_CONFIG_TXEP_TYPE, USB_DRV_CMD_CONFIG_RXEP_TYPE, USB_DRV_CMD_TXEP_CLEAR_DATATOG, USB_DRV_CMD_RxEP_CLEAR_DATATOG, USB_DRV_CMD_TXEP_USAGE, USB_DRV_CMD_RXEP_USAGE, USB_DRV_CMD_TXEP_PK_SIZE, USB_DRV_CMD_RXEP_PK_SIZE, USB_DRV_CMD_EPFIFO_READ, USB_DRV_CMD_EPFIFO_WRITE, USB_DRV_CMD_CTRLEPSTALL, USB_DRV_CMD_GET_EP0_STATUS, USB_DRV_CMD_UPDATE_EP0_STATE, USB_DRV_CMD_GET_EP0_PKT_LEN, USB_DRV_CMD_TXEP_READY, USB_DRV_CMD_GET_RXEP_PKT_LEN, USB_DRV_CMD_RXEP_READY, USB_DRV_CMD_IS_TXEP_EMPTY, USB_DRV_CMD_IS_RXEP_EMPTY, USB_DRV_CMD_CLEAR_TXEP_FIFO, USB_DRV_CMD_CLEAR_RXEP_FIFO, USB_DRV_CMD_GET_DMA_CHANNEL, USB_DRV_CMD_STOP_DMA_CHANNEL, USB_DRV_CMD_FREE_DMA_CHANNEL, USB_DRV_CMD_DMA_SETUP, USB_DRV_CMD_GET_DMA_RUN_STATUS, USB_DRV_CMD_SET_DMA_RUN_STATUS, USB_DRV_CMD_ENABLE_DMA_TIMER, USB_DRV_CMD_CHECK_DMA_TIME_OUT, USB_DRV_CMD_GET_DMA_REAL_COUNT, USB_DRV_CMD_SET_DMA_LIMITER, USB_DRV_CMD_SWITCH_DMA_BURST_MODE, USB_DRV_CMD_REGISTER_DMA_CHANNEL, USB_DRV_CMD_SET_DMA_BURST_MODE, USB_DRV_CMD_USB_IS_HIGH_SPEED, USB_DRV_CMD_ENTER_TESTMODE, USB_DRV_CMD_RESET_FIFO, USB_DRV_CMD_IS_FIFO_Not_Empty, USB_DRV_CMD_IS_SUSPEND_POWER_STATUS, USB_DRV_CMD_POLLING_TX_DONE, USB_DRV_CMD_POLLING_RX_DATA, USB_DRV_CMD_CLR_RXEP_ISR, USB_DRV_CMD_GET_RXEP_ISR_STATUS, USB_DRV_CMD_GET_TX_ISR_STATUS, USB_DRV_CMD_PHY_ENABLE, USB_DRV_CMD_PHY_DISABLE, USB_DRV_CMD_USB_UART_SHARE, USB_DRV_CMD_USBDL_UPDATE_USB_DL_MODE, USB_DRV_CMD_USBDL_IS_USB_DL_MODE, USB_DRV_CMD_DEBUG_INFO, USB_DRV_CMD_DUMP, USB_DRV_CMD_GET_TOTAL_FIFO_SIZE, USB_DRV_CMD_GET_IP_VERSION, USB_DRV_CMD_CHECK_IC_DMA_LIMIT_CAPABILITY, USB_DRV_CMD_CHECK_IC_UART_SHARE_PAD_CAPABILITY, USB_DRV_CMD_USBDL_IS_USB_FAST_META_MODE, USB_DRV_CMD_SET_MENU_CONFIG, USB_DRV_CMD_GET_MENU_CONFIG, USB_DRV_CMD_USB_SLEEP, USB_DRV_CMD_END, USB_CLASS_CMD_START = 0x1000, USB_VIDEO_CLASS_START = 0x1001, USB_Video_CMD_Set_Default_JPEG_Max_Size, USB_Video_CMD_Complete_Still_Buffer, USB_Video_CMD_Complete_Video_Buffer, USB_Video_CMD_Get_Still_Buffer, USB_Video_CMD_Get_Video_Buffer, USB_VIDEO_CLASS_END = 0x10FF, USB_IMAGE_CLASS_START = 0x1100, USB_IMAGE_MTP_CMD_GET_DESCRIPTION_STRING_1_PTR, USB_IMAGE_MTP_CMD_GET_DESCRIPTION_STRING_2_PTR, USB_IMAGE_CLASS_END = 0x11FF,
    
   USB_HCD_CMDS_START = 0x1400,
   USB_HCD_CMD_USB_HCD_HW_Mapping_EP = 0, USB_HCD_CMD_USB_HCD_Reset_Device, USB_HCD_CMD_USB_HCD_SWRST, USB_HCD_CMD_USB_HCD_EnSysIntr, USB_HCD_CMD_USB_HCD_VBusEnable, USB_HCD_CMD_USB_HCD_Host_Mode_Detect, USB_HCD_CMD_USB_HCD_Is_HNP_SUPPORT, USB_HCD_CMD_USB_HCD_Is_RemoteWakeup_SUPPORT, USB_HCD_CMD_USB_HCD_Is_SRP_SUPPORT, USB_HCD_CMD_USB_HCD_Is_High_Speed, USB_HCD_CMD_USB_HCD_Reset_Resource, USB_HCD_CMD_USB_HCD_Init_Drv_Info, USB_HCD_CMD_USB_HCD_Release_Drv_Info, USB_HCD_CMD_USB_HCD_Register_Drv_Info, USB_HCD_CMD_USB_HCD_Set_UnMask_Irq, USB_HCD_CMD_USB_HCD_Get_UnMask_Irq, USB_HCD_CMD_USB_HCD_Dis_Attach, USB_HCD_CMD_USB_HCD_En_Attach, USB_HCD_CMD_USB_HCD_Initialize_Drv, USB_HCD_CMD_USB_HCD_Release_Drv, USB_HCD_CMD_USB_HCD_SetAddress, USB_HCD_CMD_USB_HCD_Resume, USB_HCD_CMD_USB_HCD_Suspend, USB_HCD_CMD_USB_HCD_Delay_Reset_Device, USB_HCD_CMD_USB_HCD_Set_EP_Max_Pkt, USB_HCD_CMD_USB_HCD_Clear_Data01, USB_HCD_CMD_USB_HCD_EP_Interval, USB_HCD_CMD_USB_HCD_EP0En, USB_HCD_CMD_USB_HCD_EP0_Data_Length, USB_HCD_CMD_USB_HCD_EP_Rx_Pkt_Len, USB_HCD_CMD_USB_HCD_Config_TxEP_Type, USB_HCD_CMD_USB_HCD_TxEPInit, USB_HCD_CMD_USB_HCD_Config_RxEP_Type, USB_HCD_CMD_USB_HCD_RxEPInit, USB_HCD_CMD_USB_HCD_TxEPEn, USB_HCD_CMD_USB_HCD_RxEPEn, USB_HCD_CMD_USB_HCD_TxEPDis, USB_HCD_CMD_USB_HCD_RxEPDis, USB_HCD_CMD_USB_HCD_Send_Resume, USB_HCD_CMD_USB_HCD_Send_Suspend, USB_HCD_CMD_USB_HCD_Send_Req, USB_HCD_CMD_USB_HCD_Recv_Req, USB_HCD_CMD_USB_HCD_EP0_Setup_Req, USB_HCD_CMD_USB_HCD_EP0_Data_Req, USB_HCD_CMD_USB_HCD_EP0_Status_Req, USB_HCD_CMD_USB_HCD_Switch_DMA_Burst_mode, USB_HCD_CMD_USB_HCD_Register_DMA_Channel, USB_HCD_CMD_USB_HCD_Get_DMA_Real_Count, USB_HCD_CMD_USB_HCD_Get_DMA_Channel, USB_HCD_CMD_USB_HCD_Stop_DMA_Channel, USB_HCD_CMD_USB_HCD_Free_DMA_Channel, USB_HCD_CMD_USB_HCD_EPFIFORead, USB_HCD_CMD_USB_HCD_EPFIFOWrite, USB_HCD_CMD_USB_HCD_DMA_Setup, USB_HCD_CMD_USB_HCD_Disconn_Hdlr, USB_HCD_CMD_USB_HCD_Conn_Hdlr, USB_HCD_CMD_USB_HCD_HISR, USB_HCD_CMD_IC_USB_Drv_Create_ISR, USB_HCD_CMD_IC_USB_Drv_Activate_ISR, USB_HCD_CMD_IC_USBDMA_Drv_Create_ISR, USB_HCD_CMD_IC_USBDMA_Drv_Activate_ISR, USB_HCD_CMD_IC_USB_PDNmode, USB_HCD_CMD_USB_HCD_VBUS_OFF,
    
   OTG_DRV_CMDS_START = 0x1500,
   OTG_DRV_CMD_INIT_DRV_INFO = 0, OTG_DRV_CMD_RELEASE_DRV_INFO, OTG_DRV_CMD_REGISTER_DRV_INFO, OTG_DRV_CMD_DRV_CREATE_ISR, OTG_DRV_CMD_DRV_ACTIVATE_ISR, OTG_DRV_CMD_DMA_DRV_CREATE_ISR, OTG_DRV_CMD_DMA_DRV_ACTIVATE_ISR, OTG_DRV_CMD_INIT_DRV, OTG_DRV_CMD_GET_PLUG_TYPE, OTG_DRV_CMD_A_SUSPEND_REQ, OTG_DRV_CMD_A_RESUME_REQ, OTG_DRV_CMD_A_STOP_HOST, OTG_DRV_CMD_A_START_HNP, OTG_DRV_CMD_B_EN_DIS_HNP, OTG_DRV_CMD_B_START_SRP, OTG_DRV_CMD_B_STOP_HOST, OTG_DRV_CMD_B_SET_SESSION_VALID, OTG_DRV_CMD_GET_STATE, OTG_DRV_CMD_ENABLE_DEVICE, OTG_DRV_CMD_INCR_DISCONNECT_COUNT, OTG_DRV_CMD_PROCESS_EXCEPTIONS, OTG_DRV_CMD_INIT_A_PLUG_DETECT, OTG_DRV_CMD_HOST_SET_VBUS_HIGH, OTG_DRV_CMD_IS_HOST_TURN_ON_VBUS, OTG_DRV_CMD_IS_A_CABLE_IN, OTG_DRV_CMD_SRP_INIT,
    
   IRDA_CMDS_START = 0x1600,
   
    
   SIM_CMDS_START = 0x1700,
   SIM_CTRL_CMD_BASE, SIM_CTRL_CMD_RST = 0, SIM_CTRL_CMD_CMD, SIM_CTRL_CMD_PWOFF, SIM_CTRL_CMD_GET_CARD_INFO, SIM_CTRL_CMD_SET_SPEED, SIM_CTRL_CMD_SET_PREFER_PROTOCOL, SIM_CTRL_CMD_SET_CLK_STOP_MODE, SIM_CTRL_CMD_TOUT_TEST, SIM_CTRL_CMD_GET_SPEED, SIM_CTRL_CMD_QUERY_9000_ON_SELECT, SIM_CTRL_CMD_SET_SLT_RLT, SIM_CTRL_CMD_MAX_VALUE, SIM_CTRL_CMD_DUMMY_END = SIM_CTRL_CMD_BASE + SIM_CTRL_CMD_MAX_VALUE,
    
   PMU_CMDS_START = 0x1800,
   LDO_BUCK_SET_CMDS_START = 0, LDO_BUCK_CTRL, LDO_BUCK_SET_EN, LDO_BUCK_SET_EN_FORCE, LDO_BUCK_SET_VOLTAGE, LDO_BUCK_SET_VOLTAGE_EN, LDO_BUCK_SET_SLEEP_VOLTAGE, LDO_BUCK_SET_BURST_THRESHOLD = 500, LDO_BUCK_SET_CURRENT_LIMIT, LDO_BUCK_SET_VOLTAGE_CALIBRATION_CODE, LDO_BUCK_SET_BIAS_CURRENT_CALIBRATION_CODE, LDO_BUCK_SET_STB_EN, LDO_BUCK_SET_OC_AUTO_OFF, LDO_BUCK_SET_RS, LDO_BUCK_SET_ON_SEL, LDO_BUCK_SET_STB_TD, LDO_BUCK_SET_NDIS_EN, LDO_BUCK_SET_OC_TD, LDO_BUCK_SET_OCFB_EN, LDO_BUCK_SET_VSIM_GPLDO_EN, LDO_BUCK_SET_VSIM2_GPLDO_EN, LDO_BUCK_SET_SIM2_GPIO_EN, LDO_BUCK_SET_CCI_C2A_SIM_VOSEL, LDO_BUCK_SET_CCI_SRCLKEN, LDO_BUCK_SET_OC_INT_EN, LDO_BUCK_CLEAR_OC_FLAG, LDO_BUCK_GET_VOLTAGE_LIST, LDO_BUCK_GET_OC_FLAG, LDO_BUCK_GET_OC_STATUS, LDO_SET_CAL, LDO_BUCK_SET_CMDS_END, VIBR_SET_DIMMING_ON_DUTY = 900, VPA_SET_VOLTAGE = 1000, VPA_SET_EN, VPA_CTRL_SEL, VPA_GET_VOLTAGE_LIST, VPA_SET_BAT_LOW, VPA_SET_FPWM, SPK_SET_EN = 2000, SPK_SET_MODE, SPK_GET_MODE, SPK_SET_OC_AUTO_OFF, SPK_SET_VOL_VALUE, SPK_GET_VOL_VALUE, SPK_SET_VOL, SPK_GET_VOL, SPK_SET_SLEW_RATE, SPK_SET_CALIBR_EN, SPK_SET_CALIBR_SEL, SPK_SET_OC_INT_EN, SPK_CLEAR_OC_FLAG, SPK_GET_OC_FLAG, SPK_GET_OC_STATUS, KPLED_SET_EN = 3000, KPLED_SET_MODE, KPLED_SET_SEL, KPLED_SET_FREQUENCY_DIVISION, KPLED_SET_DIMMING_ON_DUTY, FLASHLED_SET_EN = 4000, FLASHLED_SET_MODE, FLASHLED_SET_SEL, BL_SET_INIT = 5000, BL_SET_EN, BL_SET_LEVEL, BL_GET_SUPPORT_LEVEL, BL_GET_USE_PWM_QUERY, BOOST_SET_EN = 6000, BOOST_SET_CURRENT_LIMIT, BOOST_SET_CLK_CAL, BOOST_SET_SYNC_EN, BOOST_SET_VOLTAGE, BOOST_SET_LEVEL, ISINK_SET_EN = 7000, ISINK_SET_MODE, ISINK_SET_STEP, ISINK_SET_STEP_GROUP, ISINK_SET_STEP_INDEX, ISINK_SET_FORCE_OFF, ISINK_SET_CHANNEL, ISINK_SET_DIMMING_ON_DUTY, ISINK_SET_FREQUENCY_DIVISION, ISINK_SET_STP_EN, ISINK_SET_STEP_DOUBLE, ISINK_SET_STEP_MODE, CHR_SET_ADC_MEASURE_EN = 8000, CHR_SET_WDT_CLEAR, CHR_SET_WDT_TIMER, CHR_SET_WDT_INT_EN, CHR_SET_WDT_EN, CHR_SET_CHR_EN, CHR_SET_CHR_FORCE_EN, CHR_GET_CHR_DET_STATUS, CHR_GET_CHR_CURRENT, CHR_GET_CHR_CURRENT_LIST, CHR_SET_CHR_CURRENT, CHR_GET_CV_DETECTION_STATUS, CHR_SET_CV_DETECTION_EN, CHR_SET_CV_DETECTION_VOLTAGE, CHR_SET_CV_DETECTION_VOLTAGE_CALIBRATION, CHR_SET_CSDAC_EN, CHR_GET_IS_BATTERY_ON, CHR_GET_IS_CHR_VALID, CHR_SET_HV_DETECTION_VOLTAGE, CHR_GET_HV_DETECTION_VOLTAGE_LIST, CHR_GET_VCDT_HV_DET, CHR_SET_VBAT_OV_DETECTION_VOLTAGE, CHR_SET_BAT_HT_EN, CHR_SET_OTG_BVALID_EN, CHR_SET_CV_MODE, CHR_SET_CSDAC_MODE, CHR_SET_TRACKING_EN, CHR_SET_HWCV_EN, CHR_SET_ULC_DET_EN, CHR_SET_LOW_ICH_DB, CHR_SET_CHARGE_WITHOUT_BATTERY, CHR_SET_BC11_PULLUP_EN, CHR_SET_VBAT_CV_CALIBRATION, CHR_GET_CC_DET, MISC_SET_RLED_EN = 9000, MISC_SET_GLED_EN, MISC_SET_BLED_EN, MISC_SET_ABIST_MON_SEL, MISC_GET_ABIST_MON_DATA, MISC_SET_REGISTER_VALUE, MISC_GET_REGISTER_VALUE, PMU_MOD_CMD_MAX, 
    
   PW_CMDS_START = 0x1900,
   PW_CMD_POWERON, PW_CMD_POWEROFF, PW_CMD_SET_POWERON_REASON, PW_CMD_GET_POWERON_REASON, PW_CMD_SET_SWITCH_TO_IDLE, PW_CMD_CLEAR_SWITCH_TO_IDLE, PW_CMD_POWER_INIT, PW_CMD_UPDATE_FLAGS, PW_CMD_NFB_POWERON, PW_CMD_IS_USB_BOOT, PW_CMD_GET_CHARGER_BOOT_TYPE, 
    
   CHR_DET_CMDS_START = 0x1A00,
   CHR_DET_CMD_QUERY_IS_CHR_IN_BY_PW=0, CHR_DET_CMD_QUERY_CHR_TYPE, CHR_DET_CMD_REGISTER_CHR_USB, CHR_DET_CMD_UNMASK_EINT, CHR_DET_CMD_REGISTER_CHR_USB_EINT, CHR_DET_CMD_REGISTER_USB_HISR, CHR_DET_CMD_GET_CHR_STATUS, 
    
   PXS_CMDS_START = 0x1B00,
   PXS_CMD_ENABLE, PXS_CMD_GET_RAW_DATA, PXS_CMD_EM_READ, PXS_CMD_EM_WRITE, PXS_CMD_GET_ADV_ALGO_WINDOWING, PXS_CMD_GET_ADV_ALGO_THRESHOLD, PXS_CMD_MODIFY_CONFIG, PXS_CMD_GET_SENSITIVITY_LEVEL_NUM, PXS_CMD_SET_SENSITIVITY_LEVEL, PXS_CMD_GET_DETECT_STATUS, PXS_CMD_SET_DEBOUNCE, 
    
   F32K_CLK_CMDS_START = 0x1D00,
   F32K_CLK_CMD_QUERY_IS_XOSC32K, F32K_CLK_CMD_EOSC32_TRIMMING, 
   CMD_END
} DCL_CTRL_CMD_T;



 
typedef union
{
    
   SGPT_CTRL_START_T rSGPTStart; FGPT_CTRL_RETURN_COUNT_T u2RetCount; GPT_BUSYWAIT_COUNT uBusyWaitcount;
    
   UART_CTRL_INIT_T rUARTCtrlInit; UART_CTRL_OPEN_T rUARTCtrlOPEN; UART_CTRL_CLOSE_T rUARTCtrlCLOSE; UART_CTRL_GET_BYTES_T rUARTCtrlGETBYTES; UART_CTRL_PUT_BYTES_T rUARTCtrlPUTBYTES; UART_CTRL_RX_AVAIL_T rUARTCtrlRXAVAIL; UART_CTRL_TX_AVAIL_T rUARTCtrlTXAVAIL; UART_CTRL_PURGE_T rUARTCtrlPURGE; UART_CTRL_OWNER_T rUARTCtrlOWNER; UART_CTRL_FLOW_CTRL_T rUARTCtrlFLOWCTRL; UART_CTRL_CONFIG_ESP_T rUARTCtrlCONFIGESP; UART_CTRL_DCB_T rUARTCtrlDCB; UART_CTRL_DCD_T rUARTCtrlDCD; UART_CTRL_BREAK_T rUARTCtrlBREAK; UART_CTRL_CLR_BUFFER_T rUARTCtrlCLRBUFFER; UART_CTRL_BAUDRATE_T rUARTCtrlBAUDRATE; UART_CTRL_SEND_DATA_T rUARTCtrlSENDDATA; UART_CTRL_AUTO_BAUDDIV_T rUARTCtrlAUTOBAUDDIV; UART_CTRL_REG_TX_CB_T rUARTCtrlREGTXCB; UART_CTRL_REG_RX_CB_T rUARTCtrlREGRXCB; UART_CTRL_GET_UART_BYTE_T rUARTCtrlGETUARTBYTE; UART_CTRL_PUT_UART_BYTE_T rUARTCtrlPUTUARTBYTE; UART_CTRL_PUT_UART_BYTES_T rUARTCtrlPUTUARTBYTES; UART_CTRL_RI_T rUARTCtrlRI; UART_CTRL_DTR_T rUARTCtrlDTR; UART_CTRL_RHS_T rUARTCtrlRHS; UART_CTRL_SFT_T rUARTCtrlSFT; UART_CTRL_POWERON_T rUARTCtrlPoweron; UART_CTRL_CHECK_TBE_T rUARTCtrlCheckBUFEMP; UART_CTRL_CHECK_TSO_T rUARTCtrlCheckTXSendOut; UART_CTRL_GET_TBS_T rUARTCtrlGetTxBufSize; UART_CTRL_SLEEP_ON_TX_ENABLE_T rUARTCtrlSleepOnTxEnable; UART_CTRL_SLEEP_ENABLE_T rUARTCtrlSleepEnable; UART_CTRL_BOOT_PUTBYTES_T rUARTCtrlBootPutBytes; UART_CTRL_USE_VFIFO_T rUARTCtrlUseVFifo; UART_CTRL_REG_DEF_CB_T rUARTCtrlRegDefCB; UART_CTRL_GET_MAXBAUDRATE_T rUARTCtrlGetMaxBaudrate; UART_CTRL_GET_FC_T rUARTCtrlGetFC;
    
   GPIO_CTRL_READ_T rRead; GPIO_CTRL_RETURN_MODE_T rReturnMode; GPIO_CTRL_RETURN_DIR_T rReturnDir; GPIO_CTRL_RETURN_OUT_T rReturnOut; GPIO_CTRL_SET_DINV_T rSetDinv; GPIO_CTRL_SET_PUPD_R0_R1_T rSetPupdR0R1; GPIO_CTRL_SET_DEBUG_T rSetDebug; GPIO_CTRL_SET_CLK_OUT_T rSetClkOut; GPIO_CTRL_SET_CLK_DIV_T rSetClkDiv; GPIO_CTRL_WRITE_FOR_SPI_T rWriteSpi; GPO_CTRL_RETURN_MODE_T oReturnMode; GPO_CTRL_RETURN_OUT_T oReturnOut;
    
   ADC_CTRL_CREATE_OBJECT_T rADCCreateObj; ADC_CTRL_MODIFY_PARAM_T rADCModifyParam; ADC_CTRL_IMM_MEASURE_T rADCImmMeasure; ADC_CTRL_SYNC_MEASURE_T rADCSyncMeasure; ADC_CTRL_TDMA_SYNC_SETUP_T rADCTDMASyncSetup; ADC_CTRL_POWER_T rADCPower; ADC_CTRL_TIMER_ALIGN_T rADCTimerAlign; ADC_CTRL_REGISTER_MEASURE_CB_T rADCRegisterMeasureCB; ADC_CTRL_REGISTER_COMPLETE_CB_T rADCRegisterCompleteCB; ADC_CTRL_GET_PHYSICAL_CHANNEL_T rADCGetPhyChannel; DCL_CTRL_SCHE_ID_GET_HANDLE_T rADCScheIdGetHandle; ADC_CTRL_TRANSFORM_INTO_VOLT_T rADCTransformVolt; ADC_CTRL_TRANSFORM_INTO_TEMP_T rADCTransformTemp; ADC_CTRL_TRANSFORM_INTO_CURR_T rADCTransformCurr; ADC_CTRL_GET_DATA_2_META_T rADCGetData2Meta; ADC_CTRL_GET_DATA_T rADCGetData; ADC_CTRL_GET_META_DATA_T rADCGetMetaData; ADC_CTRL_GET_SCHEDULER_PARAMETER_T rGetSchedulerPara; ADC_CTRL_GET_MAX_PHYSICAL_CH_T rADCGetMaxPhyCh; ADC_CTRL_SET_CALIBRATION_DATA_T rSetCalibrationData; ADC_CTRL_READ_CALIBRATION_DATA_T rReadCalibrationData; ADC_CTRL_GET_IMM_DATA_ON_BOOTING_T rGetImmDataOnBooting; DCL_MULTI_CHANNEL_PARA_T rMultiChannelPara;
    
   WDT_CTRL_ENABLE_T rWDTEnable; WDT_CTRL_SET_EXT_POL_T rWDTSetExtPol; WDT_CTRL_SET_EXT_RESET_T rWDTSetExtReset; WDT_CTRL_SET_VALUE_T rWDTSetValue; WDT_CTRL_IRQ_T rWDTIRQ; WDT_CTRL_DEBUG_T rWDTDebug; WDT_CTRL_GET_RSTINTERVAL_T rRstValue;
    
   BMT_CTRL_CALLSTATE_T rCallState; BMT_CTRL_CHARGE_T rChargeControl; BMT_CTRL_GET_CUSTOMIZED_PARA_T rGetCustomizedPara; BMT_CTRL_SET_EXT_CHARGER_T rSetExtChr; BMT_CTRL_IS_BAT_ON_T rIsBatOn; BMT_CTRL_SENDMES2UEM_T rSendMes2Uem; BMT_CTRL_SET_CHR_STATUS_T rSetChrStatus; BMT_CTRL_GET_EVENT_SCHEDULER_TIMER_INDEX rEventScheduler; BMT_CTRL_GET_CHARGING_CURRENT rGetChrCurrent; BMT_CTRL_GET_BAT_TEMP rGetBatTemp; BMT_CTRL_SET_ADC_ENABLE rSetAdc; BMT_CTRL_SET_CHR_TRIMMING_DATA rSetTrimmingData; BMT_CTRL_SET_HIGH_BATTERY_DATA rSetHighBatteryData; 
    
   PFC_CTRL_RESET_T rPfcCtrlReset; PFC_CTRL_ENCODE_T rPfcCtrlEncode; PFC_CTRL_DECODE_T rPfcCtrlDecode; 
    
   RTC_CTRL_BOOTLOADER_POWERON_T rBootloaderPowerOn; RTC_CTRL_CONFIG_AL_TC_T rConfigALTC; RTC_CTRL_CONFIG_PDN_BIT_T rConfigPDNBit; RTC_CTRL_FT_POWEROFF_T rFTPowerOff; RTC_CTRL_GET_ALARM_TIME_T rGetAlarmTime; RTC_CTRL_GET_TIME_T rGetTime; RTC_CTRL_GPIO_TIME_T rGPIO; RTC_CTRL_INIT_T rInit; RTC_CTRL_IS_CONFIG_VALID_T rIsConfigValid; RTC_CTRL_IS_FIRST_ON_T rIsFirstOn; RTC_CTRL_IS_MS_FIRSTPOWERON_T rIsMSFirstPowerOn; RTC_CTRL_IS_TIME_VALID_T rIsTimeValid; RTC_CTRL_PWIC_CHECK_POWERON_T rPwicCheckPowerOn; RTC_CTRL_PWIC_FIRST_POWERON_INIT_RTCTIME_T rPwicFirstPowerOnInitRTCTime; RTC_CTRL_CONFIG_SPAR_T rConfigSPARReg; RTC_CTRL_READ_XOSC_REG_T rReadXOSCReg; RTC_CTRL_SET_ALARM_TIME_T rSetAlarmTime; RTC_CTRL_SET_FIRST_POWERON_T rSetFirstPowerOn; RTC_CTRL_SET_TIME_T rSetTime; RTC_CTRL_SETBBPU_T rSetBBPU; RTC_CTRL_WRITE_XOSC_REG_T rWriteXOSCRef; RTC_CTRL_REGISTER_MODULE_ILM_INFO_T rRegisterModILMInfo; RTC_CTRL_WRITE_OSC32CON_REG_T rWriteOSC32CONReg; 
    
   I2C_CTRL_GET_TRANSACTION_MODE_T rGetTransactionMode; I2C_CTRL_SET_TRANSACTION_SPEED_T rSetTransactionSpeed; I2C_CTRL_SINGLE_WRITE_T rSingleWrite; I2C_CTRL_SINGLE_READ_T rSingleRead; I2C_CTRL_CONT_WRITE_T rContWrite; I2C_CTRL_CONT_READ_T rContRead; I2C_CTRL_WRITE_AND_READE_T rWriteAndRead; I2C_CTRL_BATCH_TRANSACTION_T rBatchTransaction; I2C_CTRL_GET_BATCH_TRANSACTION_RESULT_T rGetBatchTransactionResult; I2C_CTRL_GET_DMA_PROPERTY_T rGetDMAProperty; I2C_CTRL_ENABLE_DMA_T rEnableDMA; I2C_CTRL_SET_SLAVE_ADDRESS_T rSetSlaveAddress;
    
   AUX_CTRL_GET_ACCDET_CONFIG_DATA_T rGetAccdetConfigData; AUX_CTRL_SET_ACCDET_CONFIG_DATA_T rSetAccdetConfigData; AUX_CTRL_SET_AUDIO_STATUS_T rSetAudioStatus;
    
    
  SKBD_CTRL_TIME_T rKBDCtrTime; SKBD_CTRL_KEYSUPPORT_T rKBDCtrlKeySupport; SKBD_CTRL_MULTIKEY_T rKBDCtrlMultiple; SKBD_CTRL_PEEKDATA_T rKBDCtrPeekData; SKBD_CTRL_KEYDATA_T rKBDCtrGetData; SKBD_CTRL_MODE_T rKBDCtrMode; SKBD_CTRL_KEY_CNT_T rKBDCtrkeyCnt; SKBD_CTRL_PUTKEY_T rKBDCtrPutKey; SKBD_CTRL_FIND_TWO_STEP_T rKBDCtrlFindTwoStepKey;
   HKBD_CTRL_KNUM_T rKBDCtrlKNUM; HKBD_CTRL_STA_MAP_T rKBDCtrlStaMap; HKBD_CTRL_KEY_STA_T rKBDCtrlKeySta; HKBD_CTRL_POWKEY_T rKBDCtrlPowerKeySta;
    
   PWM_CTRL_SS_T rPWMCtrlSS; PWM_CTRL_CI_T rPWMCtrlCI; PWM_CTRL_SBV_T rPWMCtrlSBV; PWM_CTRL_SD_T rPWMCtrlSD; PWM_CTRL_TS_T rPWMCtrlTS; PWM_DUTY_T rPWMCtrlDuty; PWM_DATA_T rPWMSaveData; PWM_CTRL_CONFIG_T rPWMConfig; PWM_CONFIG_FREQ_STEPS_T rPWMFreqConfig; PWM_CMD_CONFIG_OLD_T rPWMConfigOld; PWM_LEVEL_T rPWMLevel; PWM_CHANNEL_T rPWMChannel; PWM_ARRAY_T rPWMArray;
   ALERTER_CONFIGURE_T ralertConfigure; ALERTER_PWROPEN_T ralertPwrOpen; ALERTER_PLAYNOTE_T ralertPlayNote; ALERTER_SETVOLUMN_T ralertSetVolumn; ALERTER_CONFIG_T ralertConfig; ALERTER_OUTPUT_T ralertOutput; ALERTER_LEVEL_T ralertlevel;
    
   STS_CTRL_GET_T rTSCtrlGE; STS_CTRL_EN_T rTSCtrlEN; STS_CTRL_SC_T rTSCtrlSC; STS_CTRL_RC_T rTSCtrlRC; STS_CTRL_SETC_T rTSCtrlSETC; STS_CTRL_RESET_T rTSCtrlRESET; STS_CTRL_CSP_T rTSCtrlCSP; STS_CTRL_CMO_T rTSCtrlCMO; STS_CTRL_CHW_T rTSCtrlCHW; STS_CTRL_POWER_ON_T rTSCtrlPO; STS_CTRL_CTP_T rTSCtrlCTP; DCL_CTRL_CUSTOM_PARAM_T rTSCtrlCustomParam; DCL_CTRL_CUSTOM_PARAM_RANGE_T rTSCtrlCustomParamRang; DCL_CTRL_MICRONMETER_COORD_T rTSCtrlMicronMeter_Pixel; DCL_TP_TYPE_T rTSCtrlTouchPanelType; STS_CTRL_SET_DEVICE_T rTSCtrlSD; STS_CTRL_COMMAND_T rTSCtrlCmd;
    
   SD_CTRL_READ_T rSDRead; SD_CTRL_WRITE_T rSDWrite; SD_CTRL_READ_ODD_T rSDReadOdd; SD_CTRL_WRITE_ODD_T rSDWriteOdd; SD_CTRL_ANALOG_SWITCH_T rSDSwitch; SD_CTRL_GET_CAPACITY_T rSDGetCapacity; SD_CTRL_INITED_T rSDInited; SD_CTRL_EXISTENCE_T rSDExistence; SD_CTRL_EXISTENCE_T rSDPollExistence; SD_CTRL_WRITE_PROTECTION_T rSDWriteProrect; SD_CTRL_QUERY_EVER_PLUGOUT_T rSDQueryEverPugOut; SD_CTRL_FORCE_SINGLE_LINE_T rSDForceSingleLine; SD_CTRL_CACHEABLE_BUFFER_T rSDCacheableBuf; SD_CTRL_CALLBACK_T rSDCallBackFunc; SD_CTRL_SET_READ_TEST_FLAG_T rSDSetReadTestFlag; SD_CTRL_FLUSH_T rSDFlush; SD_CTRL_FAST_FORMAT_T rSDFastFormat; SD_CTRL_MEDIA_CHANGED_T rSDMediaChanged;
    
   SDIO_CTRL_REG_RW_T rSDIORegRw; SDIO_CTRL_DAT_RW_T rSDIODatRw; DCL_SDIO_function_id_enum rSDIOFunction; SDIO_CTRL_SET_BLK_SIZE_T rSDIOSetBlkSize; SDIO_CTRL_CHECK_INTR_T rSDIOCheckIntr; SDIO_CTRL_ENABLE_T rSDIOEnable; DCL_SD_BITWIDTH rSDIOBusWidth; SDIO_CTRL_GET_INFO_T rSDIOGetInfo; SDIO_CTRL_CMD52_T rSDIOCMD52; SDIO_CTRL_CMD53_T rSDIOCMD53; SDIO_CTRL_CMD_REG_T rSDIOCMDREG;
    
   USB_DRV_CTRL_EP_COMMON_FUNC_T rUSB_Common_Struct; USB_DRV_CTRL_REGISTER_DRV_INFO_T rDrv_Info; USB_DRV_CTRL_EP_CTRL_FUNC_1_T rEP_Ctrl_Func_1; USB_DRV_CTRL_USB_SET_ADDR_T rUSB_Set_Addr; USB_DRV_CTRL_USB_EP_INIT_T rUSB_Ep_Init; USB_DRV_CTRL_EP_ENABLE_T rEP_Enable; USB_DRV_CTRL_EP_DISABLE_T rEP_Disable; USB_DRV_CTRL_EP_CONFIG_TYPE_T rEP_Config_Type; USB_DRV_CTRL_EP_STATE_T rEP_Get_State; USB_DRV_CTRL_EP_CTRL_FUNC_2_T rEP_Ctrl_Func_2; USB_DRV_CTRL_EP_CTRL_FUNC_3_T rEP_Ctrl_Func_3; USB_DRV_CTRL_EP_CTRL_FUNC_4_T rEP_Ctrl_Func_4; USB_DRV_CTRL_EP_CTRL_FUNC_6_T rEP_Ctrl_Func_6; USB_DRV_CTRL_EP_FIFO_RW_T rEP_Fifo_Rw; USB_DRV_CTRL_EP_STALL_T rEP_Stall; USB_DRV_CTRL_GET_EP_STATUS_T rEP_Status; USB_DRV_CTRL_UPDATE_EPSTATE_T rEP_State; USB_DRV_CTRL_DMA_FUNC_T rDMA_Func; USB_DRV_CTRL_DMA_TIMER_FUNC_T rDMA_Timer_Func; USB_DRV_CTRL_DMA_CTRL_FUNC_1_T rDMA_Ctrl_Func_1; USB_DRV_CTRL_DMA_CTRL_FUNC_2_T rDMA_Ctrl_Func_2; USB_DRV_CTRL_DMA_SETUP_FUNC_T rDMA_Setup_Func; USB_DRV_CTRL_DMA_STATUS_FUNC_T rDMA_Status_Func; USB_DRV_CTRL_USB_TEST_MODE_FUNC_T rTest_Mode_Func; USB_DRV_CTRL_PHY_FUNC_T rPhy_Ctrl_Func; USB_DRV_CTRL_COM_TYPE_QUERY_T rComport_Ctrl_Func; USB_DRV_CTRL_COM_HIGH_SPEED_IF rComport_Ctrl_Fun2; USB_DRV_CTRL_COM_SEND_DATA rComport_Ctrl_Fun3; USB_DRV_CTRL_COM_GET_DATA rComport_Ctrl_Fun4; USB_DRV_CTRL_COM_RESPONSE rComport_Ctrl_Fun5; USB_DRV_CTRL_COM_SEND_ISR_DATA rComport_Ctrl_Fun6; USB_DRV_CTRL_COM_RB_THRESHOLD_EN rComport_Ctrl_Fun7; USB_DRV_CTRL_COM_FT_PORT rComport_Ctrl_Fun8; USB_VIDEO_CTRL_FUNC1_T rVideo_Ctrl_Fun1; USB_VIDEO_CTRL_FUNC2_T rVideo_Ctrl_Fun2; USB_VIDEO_CTRL_FUNC3_T rVideo_Ctrl_Fun3; USB_IMAGE_CTRL_FUNC1_T rImage_Ctrl_Fun1; USB_DRV_CTRL_SET rComport_Ctrl_Fun9;
    
   USB_HCD_CTRL_REGISTER_DRV_INFO_T rHCD_Drv_Info; USB_HCD_CTRL_SET_ADDRESS_T rHCD_Set_Addr; USB_HCD_CTRL_DELAY_RESET_DEVICE_T rHCD_Delay_Reset_Device; USB_HCD_CTRL_EP_CTRL_FUNC_1_T rHCD_EP_Ctrl_Func_1; USB_HCD_CTRL_EP_CTRL_FUNC_2_T rHCD_EP_Ctrl_Func_2; USB_HCD_CTRL_EP_ENABLE_T rHCD_EP_Enable; USB_HCD_CTRL_EP_DISABLE_T rHCD_EP_Disable; USB_HCD_CTRL_EP_DATA_TXFER_T rHCD_EP_Data_Txfer; USB_HCD_CTRL_EP0_SETUP_REQ_T rHCD_EP0_Setup_Req; USB_HCD_CTRL_EP0_DATA_REQ_T rHCD_EP0_Data_Req; USB_HCD_CTRL_EP0_STATUS_REQ_T rHCD_EP0_Status_Req; USB_HCD_CTRL_DMA_SETUP_FUNC_T rHCD_DMA_Setup_Func; USB_HCD_CTRL_EP_MAPPING_T rHCD_EP_Set; USB_HCD_CTRL_SET_T rHCD_Set; USB_HCD_CTRL_RESET_T rHCD_RESET; USB_HCD_CTRL_SYSTEM_T rHCD_System_Set; USB_HCD_CTRL_IP_NUM_T rHCD_ip; USB_HCD_CTRL_EP_CTRL_FUNC_3_T rHCD_EP_Ctrl_Func_3; USB_HCD_CTRL_EP_CTRL_FUNC_4_T rHCD_EP_Ctrl_Func_4; USB_HCD_CTRL_EP_CTRL_FUNC_5_T rHCD_EP_Ctrl_Func_5; USB_HCD_CTRL_DMA_CTRL_FUNC_1_T rHCD_DMA_Ctrl_Func_1; USB_HCD_CTRL_DMA_CTRL_FUNC_2_T rHCD_DMA_Ctrl_Func_2; USB_HCD_CTRL_DMA_CHANNEL_FUNC_T rHCD_DMA_Channel_Func;
    
   OTG_DRV_CTRL_REGISTER_DRV_INFO_T rOTG_Drv_Info; OTG_DRV_CTRL_GET_PLUG_TYPE_T rOTG_Plug_Type; OTG_DRV_CTRL_GET_STATE_T rOTG_Get_State; OTG_DRV_CTRL_GET_Reg_T rOTG_Get_State2;
    
   
    
   SIM_CTRL_RST_T rSIMRst; SIM_CTRL_CMD_T rSIMCmd; SIM_CTRL_GET_CARD_INFO_T rSIMGetCardInfo; SIM_CTRL_SET_MAX_SPEED_T rSIMSetMaxSpeed; SIM_CTRL_SET_PREFER_PROTOCOL_T rSIMSetPreferProtocol; SIM_CTRL_SET_CLK_STOP_MODE_T rSIMSetClkStopMode; SIM_CTRL_TOUT_TEST_T rSIMToutTest; SIM_CTRL_GET_SPEED_T rSIMGetSpeed; SIM_CTRL_QUERY_9000_T rSIMQuery9000; SIM_CTRL_SET_SLT_RLT_T rSIMSetSltRlt;
    
   PMU_CTRL_LDO_BUCK_CTRL rPMULdoBuckCtrl; PMU_CTRL_LDO_BUCK_SET_EN rPMULdoBuckSetEn; PMU_CTRL_LDO_BUCK_SET_EN_FORCE rPMULdoBuckSetEnForce; PMU_CTRL_LDO_BUCK_SET_VOLTAGE rPMULdoBuckSetVoltage; PMU_CTRL_LDO_BUCK_SET_VOLTAGE_EN rPMULdoBuckSetVoltageEn; PMU_CTRL_LDO_BUCK_SET_SLEEP_VOLTAGE rPMULdoBuckSetSleepVoltage; PMU_CTRL_LDO_BUCK_SET_BURST_THRESHOLD rPMULdoBuckSetBurstThreshold; PMU_CTRL_LDO_BUCK_SET_CURRENT_LIMIT rPMULdoBuckSetCurrentLimit; PMU_CTRL_LDO_BUCK_SET_VOLTAGE_CALIBRATION_CODE rPMULdoBuckSetVoltageCalibrationCode; PMU_CTRL_LDO_BUCK_SET_BIAS_CURRENT_CALIBRATION_CODE rPMULdoBuckSetBiasCurrentCalibrationCode; PMU_CTRL_LDO_BUCK_SET_STB_EN rPMULdoBuckSetStbEn; PMU_CTRL_LDO_BUCK_SET_OC_AUTO_OFF rPMULdoBuckSetOcAutoOff; PMU_CTRL_LDO_BUCK_SET_RS rPMULdoBuckSetRs; PMU_CTRL_LDO_BUCK_SET_ON_SEL rPMULdoBuckSetOnSel; PMU_CTRL_LDO_BUCK_SET_STB_TD rPMULdoBuckSetStbTd; PMU_CTRL_LDO_BUCK_SET_NDIS_EN rPMULdoBuckSetNdisEn; PMU_CTRL_LDO_BUCK_SET_OC_TD rPMULdoBuckSetOcTd; PMU_CTRL_LDO_BUCK_SET_OCFB_EN rPMULdoBuckSetOcfbEn; PMU_CTRL_LDO_BUCK_SET_VSIM_GPLDO_EN rPMULdoBuckSetVsimGpldoEn; PMU_CTRL_LDO_BUCK_SET_VSIM2_GPLDO_EN rPMULdoBuckSetVsim2GpldoEn; PMU_CTRL_LDO_BUCK_SET_SIM2_GPIO_EN rPMULdoBuckSetSim2GpioEn; PMU_CTRL_LDO_BUCK_SET_CCI_C2A_SIM_VOSEL rPMULdoBuckSetCCIC2ASimVosel; PMU_CTRL_LDO_BUCK_SET_CCI_SRCLKEN rPMULdoBuckSetCciSrclken; PMU_CTRL_LDO_BUCK_SET_OC_INT_EN rPMULdoBuckSetOcIntEn; PMU_CTRL_LDO_BUCK_CLEAR_OC_FLAG rPMULdoBuckClearOcFlag; PMU_CTRL_LDO_BUCK_GET_VOLTAGE_LIST rPMULdoBuckGetVoltageList; PMU_CTRL_LDO_BUCK_GET_OC_FLAG rPMULdoBuckGetOcFlag; PMU_CTRL_LDO_BUCK_GET_OC_STATUS rPMULdoBuckGetOcStatus; PMU_CTRL_LDO_SET_CAL rPMULdoSetCal; PMU_CTRL_VPA_SET_EN rPMUVpaSetEn; PMU_CTRL_VPA_SET_VOLTAGE rPMUVpaSetVoltage; PMU_CTRL_VPA_CTRL_SEL rPMUVpaCtrlSel; PMU_CTRL_VPA_GET_VOLTAGE_LIST rPMUVpaGetVoltageList; PMU_CTRL_VPA_SET_BAT_LOW rPMUVpaSetBatLow; PMU_CTRL_VPA_SET_FPWM rPMUVpaSetFpwm; PMU_CTRL_VIBR_SET_DIMMING_ON_DUTY rPMUVibrSetDimmingOnDuty; PMU_CTRL_SPK_SET_EN rPMUSpkSetEn; PMU_CTRL_SPK_SET_MODE rPMUSpkSetMode; PMU_CTRL_SPK_GET_MODE rPMUSpkGetMode; PMU_CTRL_SPK_SET_OC_AUTO_OFF rPMUSpkSetOcAutoOff; PMU_CTRL_SPK_SET_VOL_VALUE rPMUSpkSetVolValue; PMU_CTRL_SPK_GET_VOL_VALUE rPMUSpkGetVolValue; PMU_CTRL_SPK_SET_VOL rPMUSpkSetVol; PMU_CTRL_SPK_GET_VOL rPMUSpkGetVol; PMU_CTRL_SPK_SET_SLEW_RATE rPMUSpkSetSlewRate; PMU_CTRL_SPK_SET_CALIBR_EN rPMUSpkSetCalibrEn; PMU_CTRL_SPK_SET_CALIBR_SEL rPMUSpkSetCalibrSel; PMU_CTRL_SPK_SET_OC_INT_EN rPMUSpkSetOcIntEn; PMU_CTRL_SPK_CLEAR_OC_FLAG rPMUSpkClearOcFlag; PMU_CTRL_SPK_GET_OC_FLAG rPMUSpkGetOcFlag; PMU_CTRL_SPK_GET_OC_STATUS rPMUSpkGetOcStatus; PMU_CTRL_FLASHLED_SET_EN rPMUFlashledSetEn; PMU_CTRL_FLASHLED_SET_MODE rPMUFlashledSetMode; PMU_CTRL_FLASHLED_SET_SEL rPMUFlashledSetSel; PMU_CTRL_KPLED_SET_EN rPMUKpledSetEn; PMU_CTRL_KPLED_SET_MODE rPMUKpledSetMode; PMU_CTRL_KPLED_SET_SEL rPMUKpledSetSel; PMU_CTRL_KPLED_SET_FREQUENCY_DIVISION rPMUKpledSetFrequencyDivision; PMU_CTRL_KPLED_SET_DIMMING_ON_DUTY rPMUKpledSetDimmingOnDuty; PMU_CTRL_CHR_SET_ADC_MEASURE_EN rPMUChrSetAdcMeasureEn; PMU_CTRL_CHR_SET_WDT_TIMER rPMUChrSetWdtTimer; PMU_CTRL_CHR_SET_WDT_INT_EN rPMUChrSetWdtIntEn; PMU_CTRL_CHR_SET_WDT_EN rPMUChrSetWdtEn; PMU_CTRL_CHR_SET_CHR_EN rPMUChrSetChrEn; PMU_CTRL_CHR_SET_CHR_FORCE_EN rPMUChrSetChrForceEn; PMU_CTRL_CHR_GET_CHR_DET_STATUS rPMUChrGetChrDetStatus; PMU_CTRL_CHR_GET_CHR_CURRENT rPMUChrGetChrCurrent; PMU_CTRL_CHR_GET_CHR_CURRENT_LIST rPMUChrGetChrCurrentList; PMU_CTRL_CHR_SET_CHR_CURRENT rPMUChrSetChrCurrent; PMU_CTRL_CHR_GET_CV_DETECTION_STATUS rPMUChrGetCvDetectionStatus; PMU_CTRL_CHR_SET_CV_DETECTION_EN rPMUChrSetCvDetectionEn; PMU_CTRL_CHR_SET_CV_DETECTION_VOLTAGE rPMUChrSetCvDetectionVoltage; PMU_CTRL_CHR_SET_CSDAC_EN rPMUChrSetCsdacEn; PMU_CTRL_CHR_GET_IS_BATTERY_ON rPMUChrGetIsBatteryOn; PMU_CTRL_CHR_GET_IS_CHR_VALID rPMUChrGetIsChrValid; PMU_CTRL_CHR_SET_HV_DETECTION_VOLTAGE rPMUChrSetHvDetectionVoltage; PMU_CTRL_CHR_GET_HV_DETECTION_VOLTAGE_LIST rPMUChrGetHvDetectionVoltageList; PMU_CTRL_CHR_GET_VCDT_HV_DET rPMUChrGetVcdtHvDet; PMU_CTRL_CHR_SET_VBAT_OV_DETECTION_VOLTAGE rPMUChrSetVbatOvDetectionVoltage; PMU_CTRL_CHR_SET_BAT_HT_EN rPMUChrSetBatHtEn; PMU_CTRL_CHR_SET_OTG_BVALID_EN rPMUChrSetOtgBvalidEn; PMU_CTRL_CHR_SET_CV_MODE rPMUChrSetCvMode; PMU_CTRL_CHR_SET_CSDAC_MODE rPMUChrSetCsdacMode; PMU_CTRL_CHR_SET_TRACKING_EN rPMUChrSetTrackingEn; PMU_CTRL_CHR_SET_HWCV_EN rPMUChrSetHwcvEn; PMU_CTRL_CHR_SET_ULC_DET_EN rPMUChrSetUlcDetEn; PMU_CTRL_CHR_SET_BC11_PULLUP_EN rPMUChrSetBc11PullupEn; PMU_CTRL_CHR_SET_LOW_ICH_DB rPMUChrSetLowIchDb; PMU_CTRL_CHR_SET_VBAT_CV_CALIBRATION rPMUChrSetVbatCvCalibration; PMU_CTRL_CHR_GET_CC_DET rPMUChrGetCcDet; PMU_CTRL_BL_SET_EN rPMUBlSetEn; PMU_CTRL_BL_SET_INIT rPMUBlSetInit; PMU_CTRL_BL_SET_LEVEL rPMUBlSetLevel; PMU_CTRL_BL_GET_SUPPORT_LEVEL rPMUBlGetSupportLevel; PMU_CTRL_BL_GET_USE_PWM_QUERY rPMUBlGetUsePwmQuery; PMU_CTRL_BOOST_SET_EN rPMUBoostSetEn; PMU_CTRL_BOOST_SET_CURRENT_LIMIT rPMUBoostSetCurrentLimit; PMU_CTRL_BOOST_SET_CLK_CAL rPMUBoostSetClkCal; PMU_CTRL_BOOST_SET_SYNC_EN rPMUBoostSetSyncEn; PMU_CTRL_BOOST_SET_VOLTAGE rPMUBoostSetVoltage; PMU_CTRL_BOOST_SET_LEVEL rPMUBoostSetLevel; PMU_CTRL_ISINK_SET_EN rPMUIsinkSetEn; PMU_CTRL_ISINK_SET_MODE rPMUIsinkSetMode; PMU_CTRL_ISINK_SET_STEP rPMUIsinkSetStep; PMU_CTRL_ISINK_SET_STEP_GROUP rPMUIsinkSetStepGroup; PMU_CTRL_ISINK_SET_STEP_INDEX rPMUIsinkSetStepIndex; PMU_CTRL_ISINK_SET_FORCE_OFF rPMUIsinkSetForceOff; PMU_CTRL_ISINK_SET_DIMMING_ON_DUTY rPMUIsinkSetDimmingOnDuty; PMU_CTRL_ISINK_SET_FREQUENCY_DIVISION rPMUIsinkSetFrequencyDivision; PMU_CTRL_ISINK_SET_STP_EN rPMUIsinkSetStpEn; PMU_CTRL_ISINK_SET_STEP_DOUBLE rPMUIsinkSetStepDouble; PMU_CTRL_ISINK_SET_STEP_MODE rPMUIsinkSetStepMode; PMU_CTRL_MISC_SET_RLED_EN rPMUMiscSetRledEn; PMU_CTRL_MISC_SET_GLED_EN rPMUMiscSetGledEn; PMU_CTRL_MISC_SET_BLED_EN rPMUMiscSetBledEn; PMU_CTRL_MISC_SET_ABIST_MON_SEL rPMUMiscSetAbistMonSel; PMU_CTRL_MISC_GET_ABIST_MON_DATA rPMUMiscGetAbistMonData; PMU_CTRL_MISC_SET_REGISTER_VALUE rPMUMiscSetRegisterValue; PMU_CTRL_MISC_GET_REGISTER_VALUE rPMUMiscGetRegisterValue;
    
   PW_CTRL_SET_POWERON_REASON rPWSetPowerOnReason; PW_CTRL_GET_POWERON_REASON rPWGetPowerOnReason; PW_CTRL_IS_USB_BOOT rPWIsUsbBoot; PW_CTRL_GET_CHARGER_TYPE rPWChrType;
    
   CHR_DET_CTRL_QUERY_IS_CHR_IN_BY_PW rChrDetQueryIsChrInByPW; CHR_DET_CTRL_QUERY_CHR_TYPE rChrDetQueryChrType; CHR_DET_CTRL_REGISTER_USB_HISR rChrDetUSBHISR; CHR_DET_CTRL_GET_CHR_STATUS rChrDetGetChrStatus;
    
   PXS_CTRL_ENABLE_T rPXSEnable; PXS_CTRL_RAW_DATA_T rPXSRawData; PXS_CTRL_EM_PARAM_T rPXSEMParam; PXS_CTRL_GET_ADV_ALGO_WINDOWING_T rPXSAdvAlgoWindowing; PXS_CTRL_GET_ADV_ALGO_THRESHOLD_T rPXSAdvAlgoThreshold; PXS_CTRL_CONFIG_T rPXSConfig; PXS_CTRL_GET_SENSITIVITY_LEVEL_NUM_T rPXSSensitivityLevelNum; PXS_CTRL_SET_SENSITIVITY_LEVEL_T rPXSSensitivityLevel; PXS_CTRL_GET_DETECT_STATUS_T rPXSDetectStatus; PXS_CTRL_SET_DEBOUNCE_T rPXSSetDebounce;
    
   F32K_CLK_CTRL_F32K_IS_XOSC32_T rF32kIsXOSC32; F32K_CLK_CTRL_EOSC32_CALI_VAL_T rEosc32CaliVal;
} DCL_CTRL_DATA_T;

 
#line 1 "interface\\hal\\peripheral\\dcl_uart.h"








 


































































































































































































 
#line 951 "interface\\hal\\peripheral\\dcl_uart.h"





typedef DCL_STATUS(*SeriPort_HANLDER_CB)(DCL_DEV dev, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);

typedef struct 
{
	SIO_TYPE_T DevType;
	SeriPort_HANLDER_CB SeriportHandlerCb;
}Seriport_HANDLER_T;



























 
extern DCL_HANDLE DclSerialPort_Open(DCL_DEV dev, DCL_FLAGS flags);



















 
extern DCL_STATUS DclSerialPort_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);























 
extern DCL_STATUS DclSerialPort_RegisterCallback(DCL_HANDLE handle, Seriport_HANDLER_T* uart_handler_cb);




















 
extern DCL_STATUS DclSerialPort_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);















 
extern DCL_STATUS DclSerialPort_Close(DCL_HANDLE handle);






#line 670 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_msdc.h"

































 









































































































 

#line 627 "interface\\hal\\peripheral\\dcl_msdc.h"







 
 
 
extern DCL_STATUS DclSD_Initialize(void);
extern DCL_HANDLE DclSD_Open(DCL_DEV dev, DCL_FLAGS flags);
extern DCL_STATUS DclSD_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);
extern DCL_STATUS DclSD_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);
extern DCL_STATUS DclSD_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);
extern DCL_STATUS DclSD_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);
extern DCL_STATUS DclSD_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);
extern DCL_STATUS DclSD_Close(DCL_HANDLE handle);




#line 671 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_gpio.h"








 






























































































 

#line 555 "interface\\hal\\peripheral\\dcl_gpio.h"





















 
extern DCL_STATUS DclGPIO_Initialize(void);















 
extern DCL_HANDLE DclGPIO_Open(DCL_DEV dev, DCL_FLAGS flags);














 
extern DCL_STATUS DclGPIO_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);














 
extern DCL_STATUS DclGPIO_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);














 
extern DCL_STATUS DclGPIO_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);














 
extern DCL_STATUS DclGPIO_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);


























































































 
extern DCL_STATUS DclGPIO_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);














 
extern DCL_STATUS DclGPIO_Close(DCL_HANDLE handle);







#line 672 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_gpt.h"








 


































































 

#line 216 "interface\\hal\\peripheral\\dcl_gpt.h"















 
extern DCL_STATUS DclSGPT_Initialize(void);

















 
extern DCL_HANDLE DclSGPT_Open(DCL_DEV dev, DCL_FLAGS flags);














 
extern DCL_STATUS DclSGPT_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);














 
extern DCL_STATUS DclSGPT_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);














 
extern DCL_STATUS DclSGPT_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);














 
extern DCL_STATUS DclSGPT_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);
































 
extern DCL_STATUS DclSGPT_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);















 
extern DCL_STATUS DclSGPT_Close(DCL_HANDLE *handle);














 
extern DCL_STATUS DclFGPT_Initialize(void);


















 
extern DCL_HANDLE DclFGPT_Open(DCL_DEV dev, DCL_FLAGS flags);














 
extern DCL_STATUS DclFGPT_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);














 
extern DCL_STATUS DclFGPT_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);














 
extern DCL_STATUS DclFGPT_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);














 
extern DCL_STATUS DclFGPT_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);

























 
extern DCL_STATUS DclFGPT_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);
















 
extern DCL_STATUS DclFGPT_Close(DCL_HANDLE handle);





#line 673 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_adc.h"








 














































































































 
#line 401 "interface\\hal\\peripheral\\dcl_adc.h"


















 
extern DCL_STATUS DclSADC_Initialize(void);















 
extern DCL_HANDLE DclSADC_Open(DCL_DEV dev, DCL_FLAGS flags);













 
extern DCL_STATUS DclSADC_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclSADC_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclSADC_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);













 
extern DCL_STATUS DclSADC_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);

























 
extern DCL_STATUS DclSADC_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);













 
extern DCL_STATUS DclSADC_Close(DCL_HANDLE handle);














 
extern DCL_STATUS DclHADC_Initialize(void);















 
extern DCL_HANDLE DclHADC_Open(DCL_DEV dev, DCL_FLAGS flags);













 
extern DCL_STATUS DclHADC_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclHADC_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclHADC_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);













 
extern DCL_STATUS DclHADC_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);

























 
extern DCL_STATUS DclHADC_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);













 
extern DCL_STATUS DclHADC_Close(DCL_HANDLE handle);

#line 674 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_bmt.h"

































 








































































 

#line 363 "interface\\hal\\peripheral\\dcl_bmt.h"






















 
extern DCL_STATUS DclBMT_Initialize(void);


















 
extern DCL_HANDLE DclBMT_Open(DCL_DEV dev, DCL_FLAGS flags);













 
extern DCL_STATUS DclBMT_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclBMT_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclBMT_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);













 
extern DCL_STATUS DclBMT_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);







































 
extern DCL_STATUS DclBMT_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);
















 
extern DCL_STATUS DclBMT_Close(DCL_HANDLE handle);





#line 675 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_pfc.h"

































 


















































 

#line 245 "interface\\hal\\peripheral\\dcl_pfc.h"























 
extern DCL_STATUS DclPFC_Initialize(void);


















 
extern DCL_HANDLE DclPFC_Open(DCL_DEV dev, DCL_FLAGS flags);













 
extern DCL_STATUS DclPFC_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclPFC_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclPFC_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);


















 
extern DCL_STATUS DclPFC_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);



























 
extern DCL_STATUS DclPFC_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);
















 
extern DCL_STATUS DclPFC_Close(DCL_HANDLE handle);



#line 676 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_rtc.h"








 


































































































 

#line 650 "interface\\hal\\peripheral\\dcl_rtc.h"






















 
extern DCL_STATUS DclRTC_Initialize(void);


















 
extern DCL_HANDLE DclRTC_Open(DCL_DEV dev, DCL_FLAGS flags);













 
extern DCL_STATUS DclRTC_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclRTC_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclRTC_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);























 
extern DCL_STATUS DclRTC_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);









































































































 
extern DCL_STATUS DclRTC_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);
















 
extern DCL_STATUS DclRTC_Close(DCL_HANDLE handle);





#line 677 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_i2c.h"








 


































































 
#line 285 "interface\\hal\\peripheral\\dcl_i2c.h"


















 
extern DCL_STATUS DclSI2C_Initialize(void);

























 
extern DCL_HANDLE DclSI2C_Open(DCL_DEV dev, DCL_FLAGS flags);













 
extern DCL_STATUS DclSI2C_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclSI2C_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);



































 
extern DCL_STATUS DclSI2C_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);















 
extern DCL_STATUS DclSI2C_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);






























































 
extern DCL_STATUS DclSI2C_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);






















 
extern DCL_STATUS DclSI2C_Close(DCL_HANDLE handle);







#line 678 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_aux.h"








 




















































 

#line 144 "interface\\hal\\peripheral\\dcl_aux.h"



















 
extern DCL_STATUS DclAUX_Initialize(void);
















 
extern DCL_HANDLE DclAUX_Open(DCL_DEV dev, DCL_FLAGS flags);













 
extern DCL_STATUS DclAUX_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclAUX_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclAUX_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);













 
extern DCL_STATUS DclAUX_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);






















 
extern DCL_STATUS DclAUX_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);















 
extern DCL_STATUS DclAUX_Close(DCL_HANDLE handle);
#line 679 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_wdt.h"








 






























































 

#line 206 "interface\\hal\\peripheral\\dcl_wdt.h"



















 
extern DCL_STATUS DclWDT_Initialize(void);















 
extern DCL_HANDLE DclWDT_Open(DCL_DEV dev, DCL_FLAGS flags);













 
extern DCL_STATUS DclWDT_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclWDT_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclWDT_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);



















 
extern DCL_STATUS DclWDT_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);

































 
extern DCL_STATUS DclWDT_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);













 
extern DCL_STATUS DclWDT_Close(DCL_HANDLE handle);










#line 680 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_pwm.h"








 






































































































 
#line 467 "interface\\hal\\peripheral\\dcl_pwm.h"

























 
extern DCL_STATUS DclPWM_Close(DCL_HANDLE handle);



















 
extern DCL_STATUS DclPWM_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);



































#line 557 "interface\\hal\\peripheral\\dcl_pwm.h"








 
extern DCL_STATUS DclPWM_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);






















 
extern DCL_STATUS DclPWM_Initialize(void);
























 
extern DCL_HANDLE DclPWM_Open(DCL_DEV dev, DCL_FLAGS flags);













 
extern DCL_STATUS DclPWM_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);





#line 681 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_drv.h"

































 






















































































































 

#line 1061 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_drv.h"








typedef DCL_STATUS (*DCL_USB_CTRL_API)(DCL_CTRL_DATA_T *data);
typedef void(*DCL_USB_CLASS_API)(DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);















 
extern DCL_STATUS DclUSB_DRV_Initialize(void);















 
extern DCL_HANDLE DclUSB_DRV_Open(DCL_DEV dev, DCL_FLAGS flags);













 
extern DCL_STATUS DclUSB_DRV_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclUSB_DRV_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclUSB_DRV_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);













 
extern DCL_STATUS DclUSB_DRV_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, DCL_UINT8 index,void *class_handler);

























 
extern DCL_STATUS DclUSB_DRV_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);













 
extern DCL_STATUS DclUSB_DRV_Close(DCL_HANDLE handle);





#line 682 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_hcd.h"

































 


















































































 

#line 606 "interface\\hal\\connectivity\\usb_driver\\dcl_usb_hcd.h"




















 
extern DCL_STATUS DclUSB_HCD_Initialize(void);















 
extern DCL_HANDLE DclUSB_HCD_Open(DCL_DEV dev, DCL_FLAGS flags);













 
extern DCL_STATUS DclUSB_HCD_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclUSB_HCD_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclUSB_HCD_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);













 
extern DCL_STATUS DclUSB_HCD_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);

























 
extern DCL_STATUS DclUSB_HCD_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);













 
extern DCL_STATUS DclUSB_HCD_Close(DCL_HANDLE handle);







#line 683 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\connectivity\\usb_driver\\dcl_otg_drv.h"

































 






























































 

#line 354 "interface\\hal\\connectivity\\usb_driver\\dcl_otg_drv.h"




















 
extern DCL_STATUS DclOTG_DRV_Initialize(void);















 
extern DCL_HANDLE DclOTG_DRV_Open(DCL_DEV dev, DCL_FLAGS flags);













 
extern DCL_STATUS DclOTG_DRV_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclOTG_DRV_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclOTG_DRV_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);













 
extern DCL_STATUS DclOTG_DRV_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);

























 
extern DCL_STATUS DclOTG_DRV_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);













 
extern DCL_STATUS DclOTG_DRV_Close(DCL_HANDLE handle);





#line 684 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_irda.h"








 






























































 

#line 115 "interface\\hal\\peripheral\\dcl_irda.h"



















 
extern DCL_STATUS DclIRDA_Initialize(void);


















 
extern DCL_HANDLE DclIRDA_Open(DCL_DEV eDev, DCL_FLAGS flags);














 
extern DCL_STATUS DclIRDA_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);














 
extern DCL_STATUS DclIRDA_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);


















 
extern DCL_STATUS DclIRDA_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);














 
extern DCL_STATUS DclIRDA_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);














 
extern DCL_STATUS DclIRDA_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);

















 
extern DCL_STATUS DclIRDA_Close(DCL_HANDLE handle);







#line 685 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_sim.h"

































 




























 
#line 337 "interface\\hal\\peripheral\\dcl_sim.h"




DCL_HANDLE DclSIM_Open(DCL_DEV dev, DCL_FLAGS flags);
DCL_STATUS DclSIM_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);
DCL_STATUS DclSIM_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);
DCL_STATUS DclSIM_Close(DCL_HANDLE handle);
DCL_STATUS DclSIM_Initialize(void);



#line 686 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_pmu.h"








 










































































































































































































































 

#line 2232 "interface\\hal\\peripheral\\dcl_pmu.h"





typedef DCL_STATUS (*PMU_CONTROL_HANDLER)(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);














 
extern DCL_STATUS DclPMU_Initialize(void);















 
extern DCL_HANDLE DclPMU_Open(DCL_DEV dev, DCL_FLAGS flags);













 
extern DCL_STATUS DclPMU_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclPMU_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclPMU_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);













 
extern DCL_STATUS DclPMU_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);
























































































































 
extern DCL_STATUS DclPMU_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);













 
extern DCL_STATUS DclPMU_Close(DCL_HANDLE handle);

#line 687 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dclH_kbd.h"








 





































 
#line 145 "interface\\hal\\peripheral\\dclH_kbd.h"






















 
typedef void (*KBDH_EVENT_FUNC)(DCL_EVENT event, void* param) ; 














 
extern DCL_STATUS DclHKBD_Initialize(void);





















 
extern DCL_HANDLE DclHKBD_Open(DCL_DEV dev, DCL_FLAGS flags);




























 
extern DCL_STATUS DclHKBD_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);















 
extern DCL_STATUS DclHKBD_Close(DCL_HANDLE handle);

























 
extern DCL_STATUS DclHKBD_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, KBDH_EVENT_FUNC callback);




#line 688 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dclS_kbd.h"








 









































 
#line 218 "interface\\hal\\peripheral\\dclS_kbd.h"


















 
extern DCL_STATUS DclSKBD_Initialize(void);





















 
extern DCL_HANDLE DclSKBD_Open(DCL_DEV dev, DCL_FLAGS flags);














 
extern DCL_STATUS DclSKBD_Close(DCL_HANDLE handle);


























 
extern DCL_STATUS DclSKBD_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);


















 
extern DCL_STATUS DclSKBD_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event,PFN_DCL_CALLBACK callback);



#line 689 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_pw.h"

































 







































































 

#line 275 "interface\\hal\\peripheral\\dcl_pw.h"





















 
extern DCL_STATUS DclPW_Initialize(void);















 
extern DCL_HANDLE DclPW_Open(DCL_DEV dev, DCL_FLAGS flags);













 
extern DCL_STATUS DclPW_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclPW_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclPW_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);













 
extern DCL_STATUS DclPW_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);













































 
extern DCL_STATUS DclPW_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);













 
extern DCL_STATUS DclPW_Close(DCL_HANDLE handle);








#line 690 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_chr_det.h"

































 
 
































































 


#line 231 "interface\\hal\\peripheral\\dcl_chr_det.h"






















 
extern DCL_STATUS Dcl_Chr_Det_Initialize(void);















 
extern DCL_HANDLE Dcl_Chr_Det_Open(DCL_DEV dev, DCL_FLAGS flags);













 
extern DCL_STATUS Dcl_Chr_Det_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS Dcl_Chr_Det_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS Dcl_Chr_Det_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);













 
extern DCL_STATUS Dcl_Chr_Det_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);













































 
extern DCL_STATUS Dcl_Chr_Det_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);













 
extern DCL_STATUS Dcl_Chr_Det_Close(DCL_HANDLE handle);






































#line 691 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_sts.h"








 






























































































 

#line 501 "interface\\hal\\peripheral\\dcl_sts.h"




























 
extern DCL_STATUS DclSTS_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);

















































 
extern DCL_STATUS DclSTS_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);


















 
extern DCL_STATUS DclSTS_Initialize(void);




















 
extern DCL_HANDLE DclSTS_Open(DCL_DEV dev, DCL_FLAGS flags);





















 
extern DCL_STATUS DclSTS_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options);
























 
extern DCL_STATUS DclSTS_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);



















 
extern DCL_STATUS DclSTS_Close(DCL_HANDLE handle);


#line 692 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_pxs.h"








 


















































 

#line 221 "interface\\hal\\peripheral\\dcl_pxs.h"



















 
extern DCL_STATUS DclPXS_Initialize(void);















 
extern DCL_HANDLE DclPXS_Open(DCL_DEV dev, DCL_FLAGS flags);













 
extern DCL_STATUS DclPXS_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);













 
extern DCL_STATUS DclPXS_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);

















 
extern DCL_STATUS DclPXS_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);















 
extern DCL_STATUS DclPXS_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);




























 
extern DCL_STATUS DclPXS_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);













 
extern DCL_STATUS DclPXS_Close(DCL_HANDLE handle);




extern DCL_STATUS DclHPXS_Initialize(void);
extern DCL_HANDLE DclHPXS_Open(DCL_DEV dev, DCL_FLAGS flags);
extern DCL_STATUS DclHPXS_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);
extern DCL_STATUS DclHPXS_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options);
extern DCL_STATUS DclHPXS_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure);
extern DCL_STATUS DclHPXS_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback);
extern DCL_STATUS DclHPXS_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);
extern DCL_STATUS DclHPXS_Close(DCL_HANDLE handle);









#line 693 "interface\\hal\\peripheral\\dcl.h"
#line 1 "interface\\hal\\peripheral\\dcl_f32k_clk.h"

































 














































 

#line 149 "interface\\hal\\peripheral\\dcl_f32k_clk.h"




















 
extern DCL_STATUS DclF32K_Initialize(void);


















 
extern DCL_HANDLE DclF32K_Open(DCL_DEV dev, DCL_FLAGS flags);























 
extern DCL_STATUS DclF32K_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);
















 
extern DCL_STATUS DclF32K_Close(DCL_HANDLE handle);



 
#line 694 "interface\\hal\\peripheral\\dcl.h"




#line 164 "custom\\system\\HEXING60A_11B_BB\\custom_FeatureConfig.h"









































































 


























































 































 





















 






































 
















































 






















 























 





















 




















 



















 




#line 103 "custom\\common\\hal\\flash_opt.h"
#line 1 "custom\\system\\HEXING60A_11B_BB\\flash_opt_gen.h"

































 
































 







 
















 








 

 



 


 







 

    





    





 


















#line 104 "custom\\common\\hal\\flash_opt.h"









 







#line 129 "custom\\common\\hal\\flash_opt.h"






 


        


 

        


 






#line 161 "custom\\common\\hal\\flash_opt.h"







 







 






#line 297 "custom\\common\\hal\\flash_opt.h"

#line 352 "custom\\common\\hal\\flash_opt.h"
      
            


 






         
            


 
#line 403 "custom\\common\\hal\\flash_opt.h"



#line 426 "custom\\common\\hal\\flash_opt.h"


#line 445 "custom\\common\\hal\\flash_opt.h"
         
            


 






      
             

      

   
        





 


















#line 494 "custom\\common\\hal\\flash_opt.h"







#line 517 "custom\\common\\hal\\flash_opt.h"






 





















































#line 583 "custom\\common\\hal\\flash_opt.h"

#line 590 "custom\\common\\hal\\flash_opt.h"












#line 608 "custom\\common\\hal\\flash_opt.h"

#line 615 "custom\\common\\hal\\flash_opt.h"

























#line 646 "custom\\common\\hal\\flash_opt.h"

#line 654 "custom\\common\\hal\\flash_opt.h"

#line 662 "custom\\common\\hal\\flash_opt.h"

#line 670 "custom\\common\\hal\\flash_opt.h"






 
#line 686 "custom\\common\\hal\\flash_opt.h"


#line 144 "tools\\NVRAMStatistic\\src\\ckSysDrv_flash_cfg_preproc.c"
#line 1 "custom\\common\\hal\\custom_flash.c"

































 








































































































 









#line 150 "custom\\common\\hal\\custom_flash.c"
#line 1 "interface\\fs\\fs_type.h"

































 









































































































































































































































































































































































































































 



#line 1 "interface\\fs\\fs_gprot.h"

































 

































































































































































































 











 


#line 244 "interface\\fs\\fs_gprot.h"


#line 1 "fs\\common\\include\\fs_internal_def.h"

































 





















































































































 





 















#line 182 "fs\\common\\include\\fs_internal_def.h"










 













    





    



    





    








    
    





#line 246 "fs\\common\\include\\fs_internal_def.h"





















 







 


















 





























 
#line 332 "fs\\common\\include\\fs_internal_def.h"

#line 247 "interface\\fs\\fs_gprot.h"


#line 250 "interface\\fs\\fs_gprot.h"
#line 1 "kal\\adaptation\\include\\app_ltlcom.h"

































 











































































































 







 

#line 1 "kal\\adaptation\\include\\stack_ltlcom.h"

































 


















































































































 







 




#line 163 "kal\\adaptation\\include\\stack_ltlcom.h"
#line 164 "kal\\adaptation\\include\\stack_ltlcom.h"
#line 165 "kal\\adaptation\\include\\stack_ltlcom.h"

extern void free_int_ilm(ilm_struct *ilm_ptr, kal_char* file_name, kal_uint32 line);



 
typedef void (* fsm_func_ptr)(local_para_struct *,
                              peer_buff_struct *);



 





 
#line 194 "kal\\adaptation\\include\\stack_ltlcom.h"

#line 208 "kal\\adaptation\\include\\stack_ltlcom.h"

#line 216 "kal\\adaptation\\include\\stack_ltlcom.h"



 
extern kal_bool msg_send_ext_queue(ilm_struct *ilm_ptr);

extern kal_bool msg_send_ext_queue_to_head(ilm_struct *ilm_ptr);

extern kal_bool msg_send_int_queue(ilm_struct *ilm_ptr);

extern ilm_struct *allocate_ilm(module_type module_id);

extern kal_bool cancel_ilm(module_type module_id);

extern kal_bool msg_get_ext_queue_info(kal_msgqid task_ext_qid,
                                       kal_uint32 *messages);

extern kal_bool msg_get_ext_queue_length(kal_msgqid task_ext_qid, kal_uint32 *length);

extern kal_status receive_msg_ext_q( kal_msgqid task_ext_qid,
                                     ilm_struct *ilm_ptr);
extern kal_status receive_msg_ext_q_for_stack( kal_msgqid task_ext_qid,
                                     ilm_struct *ilm_ptr);
                                     
extern kal_bool receive_msg_int_q(task_indx_type task_indx, ilm_struct *ilm_ptr);

extern void remove_hdr_of_peer_buff( peer_buff_struct *peer_buff_ptr,
                                     kal_uint16 hdr_len);

extern void update_peer_buff_hdr(peer_buff_struct *peer_buff_ptr,
                                 kal_uint16        new_hdr_len,
                                 kal_uint16        new_pdu_len,
                                 kal_uint16        new_tail_len);

extern void* get_pdu_ptr(peer_buff_struct *peer_buff_ptr, kal_uint16 *length_ptr);

#line 332 "kal\\adaptation\\include\\stack_ltlcom.h"







#line 153 "kal\\adaptation\\include\\app_ltlcom.h"


#line 251 "interface\\fs\\fs_gprot.h"



 
typedef enum
{
    FS_NO_ERROR                    =    0,     
    FS_ERROR_RESERVED              =   -1,     
    FS_PARAM_ERROR                 =   -2,     
    FS_INVALID_FILENAME            =   -3,     
    FS_DRIVE_NOT_FOUND             =   -4,     
    FS_TOO_MANY_FILES              =   -5,     
    FS_NO_MORE_FILES               =   -6,     
    FS_WRONG_MEDIA                 =   -7,     
    FS_INVALID_FILE_SYSTEM         =   -8,     
    FS_FILE_NOT_FOUND              =   -9,     
    FS_INVALID_FILE_HANDLE         =  -10,     
    FS_UNSUPPORTED_DEVICE          =  -11,     
    FS_UNSUPPORTED_DRIVER_FUNCTION =  -12,     
    FS_CORRUPTED_PARTITION_TABLE   =  -13,     
    FS_TOO_MANY_DRIVES             =  -14,     
    FS_INVALID_FILE_POS            =  -15,     
    FS_ACCESS_DENIED               =  -16,     
    FS_STRING_BUFFER_TOO_SMALL     =  -17,     
    FS_GENERAL_FAILURE             =  -18,     
    FS_PATH_NOT_FOUND              =  -19,     
    FS_FAT_ALLOC_ERROR             =  -20,     
    FS_ROOT_DIR_FULL               =  -21,     
    FS_DISK_FULL                   =  -22,     
    FS_TIMEOUT                     =  -23,     
    FS_BAD_SECTOR                  =  -24,     
    FS_DATA_ERROR                  =  -25,     
    FS_MEDIA_CHANGED               =  -26,     
    FS_SECTOR_NOT_FOUND            =  -27,     
    FS_ADDRESS_MARK_NOT_FOUND      =  -28,     
    FS_DRIVE_NOT_READY             =  -29,     
    FS_WRITE_PROTECTION            =  -30,     
    FS_DMA_OVERRUN                 =  -31,     
    FS_CRC_ERROR                   =  -32,     
    FS_DEVICE_RESOURCE_ERROR       =  -33,     
    FS_INVALID_SECTOR_SIZE         =  -34,     
    FS_OUT_OF_BUFFERS              =  -35,     
    FS_FILE_EXISTS                 =  -36,     
    FS_LONG_FILE_POS               =  -37,     
    FS_FILE_TOO_LARGE              =  -38,     
    FS_BAD_DIR_ENTRY               =  -39,     
    FS_ATTR_CONFLICT               =  -40,     
    FS_CHECKDISK_RETRY             =  -41,     
    FS_LACK_OF_PROTECTION_SPACE    =  -42,     
    FS_SYSTEM_CRASH                =  -43,     
    FS_FAIL_GET_MEM                =  -44,     
    FS_READ_ONLY_ERROR             =  -45,     
    FS_DEVICE_BUSY                 =  -46,     
    FS_ABORTED_ERROR               =  -47,     
    FS_QUOTA_OVER_DISK_SPACE       =  -48,     
    FS_PATH_OVER_LEN_ERROR         =  -49,     
    FS_APP_QUOTA_FULL              =  -50,     
    FS_VF_MAP_ERROR                =  -51,     
    FS_DEVICE_EXPORTED_ERROR       =  -52,     
    FS_DISK_FRAGMENT               =  -53,     
    FS_DIRCACHE_EXPIRED            =  -54,     
    FS_QUOTA_USAGE_WARNING         =  -55,     
    FS_ERR_DIRDATA_LOCKED          =  -56,     
    FS_INVALID_OPERATION           =  -57,     
    FS_ERR_VF_PARENT_CLOSED        =  -58,     
    FS_ERR_UNSUPPORTED_SERVICE     =  -59,     

    FS_ERR_INVALID_JOB_ID          =  -81,
    FS_ERR_ASYNC_JOB_NOT_FOUND     =  -82,

    FS_MSDC_MOUNT_ERROR            = -100,     
    FS_MSDC_READ_SECTOR_ERROR      = -101,     
    FS_MSDC_WRITE_SECTOR_ERROR     = -102,     
    FS_MSDC_DISCARD_SECTOR_ERROR   = -103,     
    FS_MSDC_PRESNET_NOT_READY      = -104,     
    FS_MSDC_NOT_PRESENT            = -105,     

    FS_EXTERNAL_DEVICE_NOT_PRESENT = -106,     
    FS_HIGH_LEVEL_FORMAT_ERROR     = -107,     

    FS_CARD_BATCHCOUNT_NOT_PRESENT = -110,     

    FS_FLASH_MOUNT_ERROR           = -120,     
    FS_FLASH_ERASE_BUSY            = -121,     
    FS_NAND_DEVICE_NOT_SUPPORTED   = -122,     
    FS_FLASH_OTP_UNKNOWERR         = -123,     
    FS_FLASH_OTP_OVERSCOPE         = -124,     
    FS_FLASH_OTP_WRITEFAIL         = -125,     
    FS_FDM_VERSION_MISMATCH        = -126,     
    FS_FLASH_OTP_LOCK_ALREADY      = -127,     
    FS_FDM_FORMAT_ERROR            = -128,     

    FS_FDM_USER_DRIVE_BROKEN       = -129,     
    FS_FDM_SYS_DRIVE_BROKEN        = -130,     
    FS_FDM_MULTIPLE_BROKEN         = -131,     

    FS_LOCK_MUTEX_FAIL             = -141,     
    FS_NO_NONBLOCKMODE             = -142,     
    FS_NO_PROTECTIONMODE           = -143,     

    



 
    FS_DISK_SIZE_TOO_LARGE         = (FS_MSDC_MOUNT_ERROR),      

    FS_MINIMUM_ERROR_CODE          = -65536  
} fs_error_enum;



 


#line 373 "interface\\fs\\fs_gprot.h"







typedef unsigned short  WORD;
typedef unsigned char   BYTE;


typedef unsigned int    UINT;


typedef void*           HANDLE;
typedef int             FS_HANDLE;

typedef kal_int16       fs_job_id;


 


 


 


 


 


 


 








#line 428 "interface\\fs\\fs_gprot.h"
















 


 









 


 





 










 









 








 





 




 




#line 520 "interface\\fs\\fs_gprot.h"





#line 533 "interface\\fs\\fs_gprot.h"












#line 552 "interface\\fs\\fs_gprot.h"

#line 561 "interface\\fs\\fs_gprot.h"






















 


 




 


 



#line 605 "interface\\fs\\fs_gprot.h"




























 


typedef enum
{
    FS_DIRCTRL_DATA_SET             = 0x00000001L,
    FS_DIRCTRL_DATA_GET             = 0x00000002L,
    FS_DIRCTRL_DATA_EXPIRE          = 0x00000004L,
    FS_DIRCTRL_DATA_LOCK            = 0x00000010L,
    FS_DIRCTRL_DATA_UNLOCK          = 0x00000020L,
    FS_DIRCTRL_DATA_SET_LOCK        = (FS_DIRCTRL_DATA_SET | FS_DIRCTRL_DATA_LOCK),
    FS_DIRCTRL_DATA_GET_LOCK        = (FS_DIRCTRL_DATA_GET | FS_DIRCTRL_DATA_LOCK),
    FS_DIRCTRL_DATA_GET_UNLOCK      = (FS_DIRCTRL_DATA_GET | FS_DIRCTRL_DATA_UNLOCK),
    FS_DIRCTRL_DATA_EXPIRE_UNLOCK   = (FS_DIRCTRL_DATA_EXPIRE | FS_DIRCTRL_DATA_UNLOCK)
} fs_dirctrl_action_enum;

 
typedef enum
{
    


 
    FS_DI_BASIC_INFO     =  0x00000001L,

    


 
    FS_DI_FREE_SPACE     =  0x00000002L,

    


 
    FS_DI_FAT_STATISTICS =  0x00000004L,

    


 
    FS_DI_VOLUME_LABEL   =  0x00000008L,

    

 
    FS_DI_OPT_READ_PERMITTED = 0x00000010L,

    FS_DI_INVALID
}fs_di_enum;

typedef enum
{
    FS_CONFIG_UTILITY_FUNC  = 0x00000001L,

    FS_CONFIG_INVALID
} fs_config_enum;

 
typedef enum
{
     
    FS_FI_BASIC_INFO        = 0x00000001L,

     
     
    FS_FI_ALLOCATED_SPACE   = 0x00000002L,

     
    FS_FI_ALL               = (FS_FI_BASIC_INFO | FS_FI_ALLOCATED_SPACE)
} fs_fi_enum;

typedef enum
{
    FS_TBL_USR_PTR_NONE,

    FS_TBL_USR_PTR_MILESTONE,
    FS_TBL_USR_PTR_LISTCONTEXT,
    FS_TBL_USR_PTR_FINDATTR,

    FS_TBL_USR_PTR_INVALID

}fs_tbl_usr_ptr_type;

typedef enum
{
    FS_FH_INVALID,
    FS_FH_VALID,
    FS_FH_MEDIACHANGED,
    FS_FH_ABORTED,
    FS_FH_EXPORTED
} fs_fh_status;

typedef enum
{
    FS_NO_WAIT,
    FS_INFINITE
} FS_TIMEOUT_ENUM;

 
typedef enum
{
    FS_FILE_BEGIN,
    FS_FILE_CURRENT,
    FS_FILE_END
} FS_SEEK_POS_ENUM;

 
typedef enum
{
    FS_FMT_PGS_DONE = -1,
    FS_FMT_PGS_FAIL,
    FS_FMT_PGS_LOW_FMT,
    FS_FMT_PGS_HIGH_FMT
} fs_format_pgs_enum;

 
typedef enum
{
   

 
    FS_MOVE_PGS_FAIL = -1,

    



 
    FS_MOVE_PGS_PREPARE,

   


 
    FS_MOVE_PGS_START,

   





 
    FS_MOVE_PGS_ING,

   


 
    FS_MOVE_PGS_DONE
} fs_move_pgs_enum;

typedef fs_move_pgs_enum FS_MOVE_PGS_ENUM;


typedef enum
{
    FS_XDELETE_PGS_FAIL = -1,
    FS_XDELETE_PGS_PREPARE,
    FS_XDELETE_PGS_START,
    FS_XDELETE_PGS_ING,
    FS_XDELETE_PGS_DONE
} FS_XDELETE_PGS_ENUM;


typedef enum
{
    FS_DELETE_PGS_FAIL = -1,
    FS_DELETE_PGS_PREPARE,
    FS_DELETE_PGS_START,
    FS_DELETE_PGS_ING,
    FS_DELETE_PGS_DONE
} FS_DELETE_PGS_ENUM;


typedef enum
{
    FS_NOT_MATCH,
    FS_LFN_MATCH,
    FS_SFN_MATCH
} FS_FIND_ENUM;



typedef enum
{
    FS_DEVICE_TYPE_UNKNOWN  = 0,
    FS_DEVICE_TYPE_NOR      = 1,
    FS_DEVICE_TYPE_NAND,
    FS_DEVICE_TYPE_CARD,
    FS_DEVICE_TYPE_EXTERNAL,
    FS_DEVICE_TYPE_SIMPLUS,
    FS_DEVICE_TYPE_EMMC,
    FS_DEVICE_TYPE_MAX_VALUE
} FS_DEVICE_TYPE_ENUM;



typedef enum {
    FS_BTYPE_UNKNOWN  = 0x000000,
    FS_BTYPE_SYS      = 0x010000,
    FS_BTYPE_FAT      = 0x020000,
    FS_BTYPE_DAT      = 0x030000,
    FS_BTYPE_DIR      = 0x040000,
    FS_BTYPE_RAW      = 0x050000,
    FS_BTYPE_DEDICATE = 0x060000,
    FS_BTYPE_MAX      = 0x070000,
    FS_BTYPE_MASK     = 0xFF0000,
} FS_BUFFER_TYPE_ENUM;


typedef enum
{
    FS_FIND_DEFAULT,
    FS_FIND_LFN_TRUNC
} FS_GET_NAME_ENUM;


typedef enum
{
    FS_QP_HIG_ENUM,
    FS_QP_MID_ENUM,
    FS_QP_LOW_ENUM,
    FS_QP_DEL_ENUM
} FS_QP_ENUM;

 
typedef enum
{
    FS_MOUNT_STATE_ENUM,              
    FS_FEATURE_STATE_ENUM,            
    FS_EXPORT_STATE_ENUM,             
    FS_CARD_BATCHCOUNT_STATE_ENUM,    
    FS_DEVICE_PRESENCE_ENUM           
} FS_GET_DEV_STATUS_ENUM;

 
typedef enum
{
    FS_LOCK_USB_ENUM,             
    FS_UNLOCK_USB_ENUM,           
    FS_LOCK_BLOCK_ENUM,           
    FS_LOCK_NONBLOCK_ENUM,        
    FS_EXPORT_ENUM,               
    FS_PURGE_HANDLE_ENUM,         
    FS_REMOUNT_ENUM,              





    FS_CARD_BUSY_NONBLOCK_ENUM,   
    FS_EXPORT_FINISHED_ENUM       
} FS_LOCK_TYPE_ENUM;

typedef enum
{
    FS_NOT_EXPORTED = 0,
    FS_EXPORTING,
    FS_EXPORTED
} FS_LOCK_EXPORT_STATUS_ENUM;


typedef enum
{
    FS_FH_COUNT_CURRENT_TASK = 0,
    FS_FH_COUNT_AVAILABLE,
    FS_FH_COUNT_USED,
    FS_FH_COUNT_CONFIGURED
} FS_COUNT_USED_FH_ENUM;


typedef enum
{
    FS_IOCTRL_DEVICE_UNKNOWN,
    FS_IOCTRL_DEVICE_CAS_CARD 
} FS_IOCTRL_DEVICE_TYPE_ENUM;

 
typedef enum {
     
    FS_IOCTRL_QUERY_DEVICE_TYPE,

    





 
    FS_IOCTRL_QUERY_NAND_INFO,

    

 
    FS_IOCTRL_QUERY_NOR_INFO,

    

 
    FS_IOCTRL_QUERY_CARD_INFO,

     
    FS_IOCTRL_QUERY_PHYSICAL_MAP,

     
    FS_IOCTRL_QUERY_PHYSICAL_MAP_DEV_TYPE_ONLY,

    



 
    FS_IOCTRL_SET_COMMAND_SECTOR,

     
    FS_IOCTRL_CONTROL_DEV_POWER,
} fs_ioctrl_action_enum;


typedef enum
{
    FS_OTP_READ = 1,
    FS_OTP_WRITE,
    FS_OTP_LOCK
} FS_OTPACCESS_TYPE_ENUM;

 
typedef enum
{
    FS_SORT_PGS_FAIL = -1,    
    FS_SORT_PGS_PREPARE,      
    FS_SORT_PGS_START,        
    FS_SORT_PGS_ING,          
    FS_SORT_PGS_DONE,         
    FS_SORT_PGS_ABORT         
} fs_sort_pgs_enum;

typedef fs_sort_pgs_enum FS_SORT_PGS_ENUM;

typedef enum
{
    FS_PGS_FAIL = -1,
    FS_PGS_PREPARE,
    FS_PGS_START,
    FS_PGS_ING,
    FS_PGS_DONE,
    FS_PGS_ABORT,

    FS_PGS_MAX
} fs_pgs_enum;


typedef enum
{
    FS_API_OPEN      = 1,        
    FS_API_OPENHINT,
    FS_API_CLOSE,
    FS_API_CLOSEALL,
    FS_API_READ,                 
    FS_API_WRITE,                
    FS_API_SETSEEKHINT,
    FS_API_SEEK,                 
    FS_API_COMMIT,
    FS_API_RELEASEFH,
    FS_API_ABORT,
    FS_API_PARSEFH,
    FS_API_GETFILEINFO,
    FS_API_GETFILESIZE,
    FS_API_GETFILEPOSITION,
    FS_API_SETFILETIME,
    FS_API_GETATTRIBUTES,
    FS_API_GETFIRSTCLUSTER,
    FS_API_SETATTRIBUTES,
    FS_API_DELETE,
    FS_API_PSEUDOMERGE,
    FS_API_CHECKFILE,
    FS_API_GETCURRENTDIR,
    FS_API_SETCURRENTDIR,
    FS_API_CREATEDIR,
    FS_API_REMOVEDIR,
    FS_API_GETFOLDERSIZE,        
    FS_API_EXTEND,
    FS_API_TRUNCATE,
    FS_API_MAKEFILENAME,
    FS_API_RENAME,
    FS_API_MOVE,
    FS_API_COUNT,
    FS_API_XDELETE,
    FS_API_FINDFIRST,            
    FS_API_FINDNEXT,
    FS_API_FINDFIRSTN,           
    FS_API_FINDNEXTN,
    FS_API_FINDCLOSE,
    FS_API_XFINDRESET,
    FS_API_XFINDSTART,
    FS_API_XFINDCLOSE,
    FS_API_CREATEBOOTSECTOR,
    FS_API_GETPARTITIONINFO,
    FS_API_COMMITALL,
    FS_API_GETDRIVE,
    FS_API_MAPPINGDRIVE,
    FS_API_GENERALFORMAT,
    FS_API_QMGETFREE,
    FS_API_GETCLUSTERSIZE,
    FS_API_CHECKDRIVE,
    FS_API_CREATEMASTERBOOTRECORD,
    FS_API_SPLITPARTITION,
    FS_API_GETDISKINFO,
    FS_API_SHUTDOWN,
    FS_API_UNLOCKALL,
    FS_API_SANITYCHECK,
    FS_API_SETDISKFLAG,
    FS_API_CHECKDISKFLAG,
    FS_API_CLEARDISKFLAG,
    FS_API_GETDEVTYPE,
    FS_API_GETDEVSTATUS,
    FS_API_LOCKFAT,
    FS_API_TESTMSDC,
    FS_API_CLOSEMSDC,
    FS_API_SETTRACE,
    FS_API_DUMPFHTABLE,
    FS_API_GENVIRTUALFILENAME,
    FS_API_CONFIGEXTDEVICE,
    FS_API_GETDIRCACHE,
    FS_API_SETDIRCACHE,
    FS_API_EXPIREDIRCACHE,
    FS_API_OTPREAD,
    FS_API_OTPWRITE,
    FS_API_OTPLOCK,
    FS_API_OTPQUERYLENGTH,
    FS_API_SWEEPDEVICE,
    FS_API_COUNTUSEDFH,
    FS_API_GETDEVPARTITIONS,
    FS_API_RECOVERDEVICE,
    FS_API_SETVOLUMELABEL,
    FS_API_SWITCHDRIVEMODE,
    FS_API_IOCTRL,
    FS_API_COMPACTDIR,
    FS_API_END
} fs_api_enum;


typedef enum
{
    FS_PRIORITY_DEFAULT         = 0,        
    FS_PRIORITY_INHERITED       = 1,        
    FS_PRIORITY_ASSIGN          = 2,        
    FS_PRIORITY_INVALID         = 0xFF
} fs_prioity_enum;


typedef enum
{
    FS_RESPONSE_MESSAGE   = 0,     
    FS_RESPONSE_CALLBACK  = 1,     
    FS_RESPONSE_INVALID   = 0xFF
} fs_response_enum;

typedef enum
{
    FS_JOB_STATE_NOT_STARTED    = 0,
    FS_JOB_STATE_RUNNING,
    FS_JOB_STATE_PAUSE,
    FS_JOB_STATE_FINISHED,
    FS_JOB_STATE_ABORTING,
    FS_JOB_STATE_INVALID        = 0xFF
} fs_job_state_enum;



 















 
typedef void (* FS_FormatCallback)(const char * DeviceName, int Action, kal_uint32 Total, kal_uint32 Completed);
















 
typedef int FS_ProgressCallback(int Action, kal_uint32 Total, kal_uint32 Completed, kal_uint32 Info);
















 
typedef int (*SortingProgressCallback)(FS_SORT_PGS_ENUM Status, int Total, kal_uint32 Completed, void *CallbackParam);

















 
typedef int (*SortingCompareFunc)(WCHAR *FileName1, kal_uint32 *Hint1, WCHAR *FileName2, kal_uint32 *Hint2);















 
typedef kal_int32 (*fs_progress_callback_func)(FS_HANDLE handle, fs_pgs_enum status, kal_int32 total, kal_uint32 completed, void *param);


typedef kal_int32 (*fs_async_callback)(fs_job_id job_id, kal_int64 result, void *data);

typedef kal_int32 (*fs_progress_callback)(kal_int32 action, kal_uint32 total, kal_uint32 completed, kal_uint32 info);

typedef kal_uint16 (*fs_util_ucs_to_wchar_func)(kal_uint16 ucs2);

typedef kal_uint32 (*fs_util_get_default_encoding_length_func)(void);




 


#line 1224 "interface\\fs\\fs_gprot.h"













 
typedef __packed struct
{
    kal_uint32 Second2:5;  
    kal_uint32 Minute:6;
    kal_uint32 Hour:5;
    kal_uint32 Day:5;
    kal_uint32 Month:4;
    kal_uint32 Year1980:7;  
}  FS_DOSDateTime;

typedef __packed struct
{
   char                 FileName[8];
   char                 Extension[3];
   kal_uint8            Attributes;
   kal_uint8            NTReserved;
   kal_uint8            CreateTimeTenthSecond;
   FS_DOSDateTime       CreateDateTime;
   kal_uint16           LastAccessDate;
   kal_uint16           FirstClusterHi;
   FS_DOSDateTime       DateTime ;
   kal_uint16           FirstCluster;
   kal_uint32           FileSize;
   
   kal_uint32           Cluster;
   kal_uint32           Index;
   kal_uint32           Stamp;
   kal_uint32           Drive;
   kal_uint32           SerialNumber;
} FS_DOSDirEntry;

 
typedef __packed struct
{
    kal_uint8   BootIndicator,  
                StartHead,      
                StartSector,    
                StartTrack,     
                OSType,         
                EndHead,        
                EndSector,      
                EndTrack;       

                



 
    kal_uint32  RelativeSector,
                Sectors;        
}  FS_PartitionRecord;

typedef __packed struct
{
    kal_uint8 BootCode[512-4*sizeof(FS_PartitionRecord)-sizeof(kal_uint16)];
    FS_PartitionRecord PTable[4];
    kal_uint16 Signature;
}  FS_MasterBootRecord;

typedef __packed struct
{
    kal_uint8     PhysicalDiskNumber;
    kal_uint8     CurrentHead;
    kal_uint8     Signature;
    kal_uint32     SerialNumber;
    kal_uint8     Label[11];
    char     SystemID[8];
}  FS_ExtendedBIOSParameter;

typedef __packed struct
{
    char     OEMName[8];
    kal_uint16     BytesPerSector;
    kal_uint8     SectorsPerCluster;
    kal_uint16     ReservedSectors;
    kal_uint8     NumberOfFATs;
    kal_uint16     DirEntries;
    kal_uint16     SectorsOnDisk;
    kal_uint8     MediaDescriptor;
    kal_uint16     SectorsPerFAT;
    kal_uint16     SectorsPerTrack;
    kal_uint16     NumberOfHeads;
    kal_uint32     NumberOfHiddenSectors;
    kal_uint32     TotalSectors;
    __packed union
    {
        __packed struct
        {
            FS_ExtendedBIOSParameter BPB;
        }  _16;
        __packed struct
        {
            kal_uint32     SectorsPerFAT;
            kal_uint16     Flags;
            kal_uint16     Version;
            kal_uint32     RootDirCluster;
            kal_uint16     FSInfoSector;
            kal_uint16     BackupBootSector;
            kal_uint8     Reserved[12];
            FS_ExtendedBIOSParameter BPB;
        }  _32;
    }  E;
} FS_BIOSParameter;

typedef __packed struct
{
    kal_uint8 NearJump[3];
    FS_BIOSParameter BP;
    kal_uint8 BootCode[512-3-sizeof(FS_BIOSParameter)-sizeof(kal_uint16)];
    kal_uint16 Signature;
}  FS_BootRecord;






typedef struct
{
    kal_uint32 Cluster;
    kal_uint32 Index;
    kal_uint32 Stamp;
    kal_uint32 Drive;
    kal_uint32 SerialNumber;
} FS_FileOpenHint;

 
typedef struct
{
    kal_uint32 Cluster;
    kal_uint32 Index;
} FS_FileLocationHint;

 
typedef struct
{
    const FS_DOSDirEntry * DirEntry;
    kal_uint32                  FilePos;
    kal_uint32                  AllocatedSize;
    kal_uint32                  ClusterChains;
    kal_uint32                  VolumeSerialNumber;
    const char           * FullName;
} FS_FileInfo;

 
typedef struct
{
     
    char            Label[24];

     
    char            DriveLetter;

     
    kal_uint8            WriteProtect;

     
    char            Reserved[2];

     
    kal_uint32            SerialNumber;

     
    kal_uint32            FirstPhysicalSector;

     
    kal_uint32            FATType;

     
    kal_uint32            FATCount;

     
    kal_uint32            MaxDirEntries;

     
    kal_uint32            BytesPerSector;

     
    kal_uint32            SectorsPerCluster;

     
    kal_uint32            TotalClusters;

     
    kal_uint32            BadClusters;

     
    kal_uint32            FreeClusters;

     
    kal_uint32            Files;

     
    kal_uint32            FileChains;

     
    kal_uint32            FreeChains;

     
    kal_uint32            LargestFreeChain;
} FS_DiskInfo;

typedef struct __fsdriver
{
    int  (* MountDevice)    (void * DriveData, int DeviceNumber, int DeviceType, kal_uint32 Flags);
    int  (* ShutDown)       (void * DriveData);
    int  (* ReadSectors)    (void * DriveData, kal_uint32 Sector, kal_uint32 Sectors, void * Buffer);
    int  (* WriteSectors)   (void * DriveData, kal_uint32 Sector, kal_uint32 Sectors, void * Buffer);
    int  (* MediaChanged)   (void * DriveData);
    int  (* DiscardSectors) (void * DriveData, kal_uint32 Sector, kal_uint32 Sectors);
    int  (* GetDiskGeometry)(void * DriveData, FS_PartitionRecord * DiskGeometry, kal_uint8 * MediaDescriptor);
    int  (* LowLevelFormat) (void * DriveData, const char * DeviceName, FS_FormatCallback Progress, kal_uint32 Flags);
    int  (* NonBlockWriteSectors)   (void * DriveData, kal_uint32 Sector, kal_uint32 Sectors, void * Buffer);
    int  (* RecoverableWriteSectors)(void * DriveData, kal_uint32 Sector, kal_uint32 Sectors, void * Buffer);
    int  (* ResumeSectorStates)     (void  * DriveData);
    int  (* HighLevelFormat)(void * DriveData, kal_uint32 BaseSector);
    int  (* RecoverDisk)    (void * DriveData);
    int  (* MessageAck)     (void * DriveData, int AckType);
    int  (* CopySectors)    (void * DriveData, kal_uint32 SrcSector, kal_uint32 DstSector, kal_uint32 Sectors);
    int  (* OTPAccess)      (void * DriveData, int type, kal_uint32 Offset, void * BufferPtr, kal_uint32 Length);
    int  (* OTPQueryLength) (void * DriveData, kal_uint32 *Length);
    int  (* IOCtrl)         (void * DriveData, kal_uint32 CtrlAction, void * CtrlData); 
} FS_Driver;



typedef struct __fsMutex
{
    kal_semid   mt_sem;
    kal_taskid	mt_sem_owner;
    kal_uint32	mt_sem_owner_lr;
    kal_uint32	mt_lock_count;
    int         DeviceNum_1;
    int         DeviceNum_2;
} FS_Mutex;







struct __fsDrive;
struct __fsBuffer;

typedef struct __fs_cache_profile
{
    kal_int16 line_size[((FS_BTYPE_MAX>>16)&0xFF)];
    kal_int16 consumed_size[((FS_BTYPE_MAX>>16)&0xFF)];
} FS_CacheProfile;

#line 1513 "interface\\fs\\fs_gprot.h"
typedef struct __fsDeviceData
{
    FS_Mutex            * Lock;
    struct __fsDrive    * FirstDrive;
    kal_uint8           MediaPresent;
    kal_uint8           MediaRemovedReported;
    kal_uint8           Reserved;
    kal_uint8           MountState;
    int                 SectorSize;
    FS_PartitionRecord  Geometry;
    kal_uint32          SectorShift;
    kal_uint32          AccessCount;
    struct __fsBuffer   * B;
    struct __fsBuffer   * AltBuffer;
    int                 ErrorCondition;
    int                 PhysicalDiskIndex;
    char                FriendlyName[6];
    kal_uint8           MaxSectorPerBuffer;
    kal_uint8           MediaDescriptor;
} FS_DeviceData;


typedef struct __fsDevice
{
    int                 DeviceType;
    int                 DeviceNumber;
    kal_uint32          DeviceFlags;
    FS_Driver           * Driver;
    void                * DriverData;
    FS_DeviceData       DevData;
} FS_Device;

 
typedef struct {
    kal_uint32          DirCluster;
    FS_FileLocationHint LongPos;
    FS_FileLocationHint ShortPos;
    FS_DOSDirEntry      Dir;
} FS_DirEntry;

typedef struct __fsDrive
{
    struct __fsDevice   * Dev;
    struct __fsDrive    * NextDrive;
    int                 MountState;
    FS_PartitionRecord  Geometry;
    kal_uint32          Clusters;
    kal_uint32          SectorsPerCluster;
    kal_uint32          ClusterSize;
    kal_uint32          ClusterShift;
    kal_uint32          SPerCShift;
    kal_uint32          FATType;
    kal_uint32          FATCount;
    kal_uint32          SectorsPerFAT;
    kal_uint32          DataRangePerFATSector;
    kal_uint32          ClusterWatermark;
    kal_uint32          FreeClusterCount;
    kal_uint32          InfoSector;
    kal_uint32          SerialNumber;
    kal_uint32          FirstSector;
    kal_uint32          FirstFATSector;
    kal_uint32          FirstDirSector;
    kal_uint32          FirstDataSector;
    kal_uint32          RootDirEntries;
    FS_DirEntry         CurrDirEntry;
    char                CurrDir[520];

    kal_uint8           QuotaMgt;
    kal_uint8           Reserved[3];

} FS_Drive;

#line 1599 "interface\\fs\\fs_gprot.h"
typedef struct __fsBuffer
{
    struct __fsBuffer   * Next;
    struct __fsBuffer   * Prev;
    FS_Device           * Dev;
    kal_uint8           * Data;
    kal_uint32          Sector;
    struct __fsDrive    * FATSectorInfo;
    kal_uint32          Flags;
    kal_uint32          FirstDirtyTime,
                        LastDirtyTime;
    int                 Num;
    kal_uint8           recoverable_flag;
    kal_uint8           SectorCount;
    kal_uint8           SectorOffset;
} FS_Buffer;


typedef struct
{
    WCHAR Pattern[8];
} FS_Pattern_Struct;

typedef struct __fsQuotaStruct
{
    kal_uint8           * Path;
    kal_uint32          Priority;
    kal_uint32          Qmin;
    kal_uint32          Qmax;
    kal_uint32          Uint;
} FS_QuotaStruct;

typedef struct __fsInternQStruct
{
    kal_uint32          Qmin;
    kal_uint32          Qmax;
    kal_uint32          Qnow;
} FS_InternQStruct;

typedef struct
{
    unsigned short      StaticHintCount;
    unsigned short      UsedStaticHintCount; 
    kal_uint32          StaticHintRange;
} FS_SeekHintData;

typedef struct __fsFile
{
    FS_Drive                * Drive;
    FS_Device               * Dev;
    kal_uint16              SpecialKind;
    kal_uint16              PrivateFlags;
    kal_uint32              Unique;
    kal_uint32              Flags;
    FS_DirEntry             DirEntry;
    kal_uint32              FilePointer;
    kal_uint32              LastCluster;
    kal_uint32              Cluster;
    kal_uint32              Offset;
    char                    FullName[520 + 2 * sizeof(WCHAR)];
    void                    * Task;
    kal_uint32              HintNum;
    FS_FileLocationHint     * Seek_Hint;
    fs_job_id               Job;
    fs_tbl_usr_ptr_type     usr_ptr_type;
    void                    * usr_ptr;
    kal_uint32              OwnerLR;
    kal_uint8               Lock;
    kal_uint8               Valid;
} FS_File;


#line 1680 "interface\\fs\\fs_gprot.h"


typedef void (*_indirect_init_func)(void);

#line 1692 "interface\\fs\\fs_gprot.h"


typedef struct __fsTables
{
    FS_Drive    * DriveTable;
    FS_File     * FileTable;
    FS_Buffer   * BufferTable;
    kal_uint8   * BufferData;
} FS_Tables;

typedef struct __fsExceptionData
{
    kal_uint32  * Next;
    int         Data[11];
    int         XValue;
    int         State;
    int         IsHandled;
} FS_ExceptionData;

typedef struct __fsTaskIOStatistics
{
    kal_uint32 SectorCount;
    kal_uint32 AccessCount;
    kal_uint32 AccessTime;
} FS_TaskIOStatistics;



 
typedef struct
{
     
    WCHAR *Pattern;

     
    FS_Pattern_Struct *PatternArray;

     
    kal_uint32 PatternNum;

    






 
    kal_uint8 ArrayMask;

     
    kal_uint8 AttrMask;

    












 
    kal_uint32 Flag;

    



 
    kal_uint32 Timeout;

     
    kal_uint32 * Position;

     
    SortingProgressCallback ProgressCallback;

     
    void *ProgressCallbackParam;

     
    SortingCompareFunc CompareFunc;

     
    kal_uint8 *SortingBuffer;

     
    int SortingBufferSize;

     
    kal_uint8 *WorkingBuffer;

     
    int WorkingBufferSize;
} FS_SortingParam;

 
typedef struct
{
    FS_HANDLE handle;                    
    kal_uint8 attr_mask;
    kal_uint8 attr;

    kal_int32 index;                    
    kal_int32 used;                     
    kal_int32 total;                    

    fs_progress_callback_func callback;  
    void *param;                         

    FS_FileLocationHint pos_buf[1];      
} fs_list_cntx_struct;

 
typedef struct
{
    kal_wchar *path;                         
    kal_uint8 attr_mask;                     
    kal_uint8 attr;                          

     
    kal_uint8  attr_pattern;                 

     
    FS_Pattern_Struct *name_pattern;         
    kal_uint32 name_pattern_count;           

    kal_int32 index;                        

    fs_progress_callback_func callback;      
    void *param;                             

    void *buff;                              
    kal_uint32 buff_size;                    
} fs_list_param_struct;



 

typedef struct
{
    kal_uint8   DeviceID[8];
    kal_uint32  BlockSize;
    kal_uint32  PageSize;
    kal_uint32  DeviceSize;
    kal_uint32  Flag;
} FS_NANDDeviceInfo;

typedef struct
{
    kal_uint8   DeviceID[8];
    kal_uint32  DeviceSize;
    kal_uint8   BootLocation;
} FS_NORDeviceInfo;

typedef struct
{
    kal_uint32  Flag;
    kal_uint32  PSN;
    kal_uint8   SerialMode;     
    kal_uint8   DeferredMount;  
} FS_CardDeviceInfo;

typedef struct
{
    union
    {
        FS_NANDDeviceInfo NAND;
        FS_NORDeviceInfo  NOR;
        FS_CardDeviceInfo Card;
    } DeviceInfo;
} FS_DeviceInfo;



 


typedef struct
{
    kal_uint32  SN;         
    kal_uint16  SecCnt;     
    kal_uint16  Reserved;
} FS_CardPMapEntry;

typedef struct
{
    kal_uint32  PPN;        
    kal_uint16  SecOfs;     
    kal_uint16  SecCnt;     
} FS_NANDPMapEntry;


typedef struct
{
    kal_uint8   ChipSel;    
    kal_uint8   Reserved[3];
} FS_NANDPMapHeader;


typedef struct
{
    FS_NANDPMapHeader   Header;
    FS_NANDPMapEntry   *Entry;
} FS_NANDPMap;


typedef struct
{
    FS_HANDLE           FH;             
    kal_uint32          Offset;         
    kal_uint8          *pBuf;           
    kal_uint32          BufSize;        
    kal_uint16          ValidEntryCnt;  
    kal_uint8           DevType;        
    kal_uint8           Reserved;
} FS_PMapInfo;


typedef struct
{
    kal_uint32          LSN;            
    kal_uint16          LSCnt;          
    kal_uint16          ValidEntryCnt;  
    kal_uint16          XferCnt;        
    kal_uint8           ChipSel;        
    kal_uint8           Reserved;
    kal_uint32          BufSize;        
    FS_NANDPMapEntry   *pBuf;           
} FS_NANDPMapQuery;

typedef struct
{
    kal_uint8 initialized;
} fs_sysinfo_struct;

struct __fsJobApiStruct;
struct __fsJobStruct;
struct __fsAsyncCallbackDataStruct;





 
typedef struct
{
    fs_prioity_enum         priority;   
    kal_uint8               priority_value;
    kal_uint8               response_flag;       
    fs_async_callback       callback;   
    void                    *param;     
    void                    *buf;       
    kal_uint32              buf_size;   
} fs_overlapped_struct;   






 
typedef struct __fsAsyncCallbackDataStruct
{
    fs_api_enum             api;        
    fs_job_state_enum       reserved1;  
    kal_uint8               reserved2;  
    kal_uint8               reserved3;  
    fs_job_id               id;         
    module_type             reserved4;  
    kal_int64               result;     
    fs_async_callback       callback;   
    void                    *param;     
} fs_async_callback_data_struct;   

 


#line 1987 "interface\\fs\\fs_gprot.h"

typedef struct __fsJobStruct
{
    fs_api_enum api; fs_job_state_enum state; kal_uint8 priority; kal_uint8 response_flag; fs_job_id id; module_type mod_id; kal_int64 result; fs_async_callback callback; void * param; struct __fsJobStruct * next;
} fs_job_struct;

 

typedef struct
{
    fs_api_enum api; fs_job_state_enum state; kal_uint8 priority; kal_uint8 response_flag; fs_job_id id; module_type mod_id; kal_int64 result; fs_async_callback callback; void * param; struct __fsJobStruct * next;
    fs_job_id   job_id;
    kal_bool    aborted;
} fs_job_abort_struct;

typedef struct
{
    fs_api_enum api; fs_job_state_enum state; kal_uint8 priority; kal_uint8 response_flag; fs_job_id id; module_type mod_id; kal_int64 result; fs_async_callback callback; void * param; struct __fsJobStruct * next;
    kal_wchar*  filename;   
    kal_uint32  flag;
    kal_uint32  caller_address;
} fs_job_open_struct;

typedef struct
{
    fs_api_enum api; fs_job_state_enum state; kal_uint8 priority; kal_uint8 response_flag; fs_job_id id; module_type mod_id; kal_int64 result; fs_async_callback callback; void * param; struct __fsJobStruct * next;
    FS_HANDLE   handle;
    void        * data;
    kal_uint32  length;
    kal_uint32  * read;
    kal_uint32  chunksize;  
} fs_job_read_struct;

typedef struct
{
    fs_api_enum api; fs_job_state_enum state; kal_uint8 priority; kal_uint8 response_flag; fs_job_id id; module_type mod_id; kal_int64 result; fs_async_callback callback; void * param; struct __fsJobStruct * next;
    FS_HANDLE   handle;
    void        * data;
    kal_uint32  length;
    kal_uint32  * written;
} fs_job_write_struct;

typedef struct
{
    fs_api_enum api; fs_job_state_enum state; kal_uint8 priority; kal_uint8 response_flag; fs_job_id id; module_type mod_id; kal_int64 result; fs_async_callback callback; void * param; struct __fsJobStruct * next;
    const kal_wchar * filename;
} fs_job_delete_struct;

typedef struct
{
    fs_api_enum api; fs_job_state_enum state; kal_uint8 priority; kal_uint8 response_flag; fs_job_id id; module_type mod_id; kal_int64 result; fs_async_callback callback; void * param; struct __fsJobStruct * next;
    FS_HANDLE   handle;
    kal_int64   offset;
    kal_int32   whence;
} fs_job_seek_struct;

typedef struct
{
    fs_api_enum api; fs_job_state_enum state; kal_uint8 priority; kal_uint8 response_flag; fs_job_id id; module_type mod_id; kal_int64 result; fs_async_callback callback; void * param; struct __fsJobStruct * next;
    const kal_wchar             * path;
    kal_int32                   flag;
    void                        * recursive_stack;
    kal_uint32                  stack_size;
    fs_progress_callback        progress;
} fs_job_get_folder_size_struct;

typedef struct
{
    fs_api_enum api; fs_job_state_enum state; kal_uint8 priority; kal_uint8 response_flag; fs_job_id id; module_type mod_id; kal_int64 result; fs_async_callback callback; void * param; struct __fsJobStruct * next;
    kal_wchar           * name_pattern;
    kal_uint8           attr;
    kal_uint8           attr_mask;
    FS_DOSDirEntry      * file_info;
    kal_wchar           * file_name;
    kal_uint32          max_length;
} fs_job_find_first_struct;

typedef struct
{
    fs_api_enum api; fs_job_state_enum state; kal_uint8 priority; kal_uint8 response_flag; fs_job_id id; module_type mod_id; kal_int64 result; fs_async_callback callback; void * param; struct __fsJobStruct * next;
    kal_wchar           * name_pattern;
    FS_Pattern_Struct   * pattern_array;
    kal_uint32          pattern_num;
    kal_uint8           array_mask;
    kal_uint8           attr;
    kal_uint8           attr_mask;
    FS_DOSDirEntry      * file_info;
    kal_wchar           * file_name;
    kal_uint32          max_length;
    kal_uint32          entry_index;
    kal_uint32          flag;
} fs_job_find_first_n_struct;

typedef struct __fsJobApiStruct
{
    union
    {
        fs_job_open_struct              open_struct;
        fs_job_read_struct              read_struct;
        fs_job_seek_struct              seek_struct;
        fs_job_write_struct             write_struct;
        fs_job_abort_struct             abort_struct;
        fs_job_delete_struct            delete_struct;
        fs_job_find_first_struct        find_first_struct;
        fs_job_find_first_n_struct      find_first_n_struct;
        fs_job_get_folder_size_struct   get_folder_size_struct;
    } api;
} fs_job_api_struct;

typedef enum
{
    FS_JOB_TYPE_ASYNC_API       = 0,
    FS_JOB_TYPE_INVALID         = 0xFF
} fs_job_type_enum;

typedef struct
{
    kal_uint8           ref_count;
    kal_uint16          msg_len;
    fs_job_type_enum    type;
    fs_job_struct       * job;
} fs_job_req_struct;

typedef struct
{
    kal_uint8           ref_count;
    kal_uint16          msg_len;
    fs_job_struct       * job;
} fs_job_rsp_struct;



 

typedef struct
{
    kal_uint8                               ref_count;
    kal_uint16                              msg_len;
    fs_async_callback_data_struct           * data;
} fs_job_alone_rsp_struct;

typedef struct
{
    fs_util_ucs_to_wchar_func                   ucs_to_wchar_func;
    fs_util_get_default_encoding_length_func    get_default_encoding_length_func;
} fs_config_encoding_api_struct;



 







 







 



























 







































 
extern int FS_Open(const WCHAR * FileName, UINT Flag);
























 
extern int FS_OpenHint(const WCHAR * FileName, UINT Flag, FS_FileOpenHint * DSR_Hint);



















 
extern int FS_Close(FS_HANDLE FileHandle);





























 
extern int FS_Read(FS_HANDLE FileHandle, void * DataPtr, UINT Length, UINT * Read);




























 
extern int FS_Write(FS_HANDLE FileHandle, void * DataPtr, UINT Length, UINT * Written);

























 
extern int FS_SetSeekHint(FS_HANDLE FileHandle, UINT HintNum, FS_FileLocationHint * Hint);







































































 
extern int FS_SetSeekHintEx(FS_HANDLE FileHandle, UINT HintCount, UINT Flag, void *Buffer, UINT BufferSize);














 
extern kal_int64 FS_SeekLargeFile(FS_HANDLE FileHandle, kal_int64 Offset, int Whence);























 
extern int FS_Seek(FS_HANDLE FileHandle, int Offset, int Whence);


















 
extern int FS_Commit(FS_HANDLE FileHandle);
















 
extern int FS_Abort(UINT ActionHandle);












 
extern int FS_ParseFH(FS_HANDLE FileHandle);





































 
extern int FS_GenVirtualFileName(FS_HANDLE FileHandle, WCHAR * VFileNameBuf, UINT BufLength, UINT VFBeginOffset, UINT VFValidLength);














 
extern int FS_GetFileInfo(FS_HANDLE FileHandle, FS_FileInfo * FileInfo);















 
extern int FS_GetFileInfoEx(FS_HANDLE FileHandle, FS_FileInfo *FileInfo, UINT Flags);














 
extern int FS_GetFileSize(FS_HANDLE FileHandle, UINT * Size);






















 
extern int FS_GetFilePosition(FS_HANDLE FileHandle, UINT * Position);















 
extern int FS_SetFileTime(FS_HANDLE FileHandle, const FS_DOSDateTime * Time);



















 
extern int FS_GetAttributes(const WCHAR * FileName);



















 
extern int FS_SetAttributes(const WCHAR * FileName, BYTE Attributes);












 
extern int FS_Delete(const WCHAR * FileName);




































 
extern int FS_PseudoMerge(const WCHAR * FileName1, const WCHAR * FileName2);


































 
extern int FS_CheckFile(const WCHAR * FileName);























 
extern int FS_GetCurrentDir(WCHAR * DirName, UINT MaxLength);

















 
extern int FS_GetCurrentDirByDrive(WCHAR * DirName, UINT MaxLength);




















 
extern int FS_SetCurrentDir(const WCHAR * DirName);














 
extern int FS_CreateDir(const WCHAR * DirName);

















 
extern int FS_RemoveDir(const WCHAR * DirName);



















 
extern int FS_GetFolderSize(const WCHAR *DirName, UINT Flag, BYTE *RecursiveStack, const UINT StackSize);




















 
extern int FS_GetFolderSizeEx(const WCHAR *DirName, UINT Flag, BYTE *RecursiveStack, const UINT StackSize, FS_ProgressCallback Progress);





































































 
extern int FS_Extend(FS_HANDLE FileHandle, UINT Length);















 
extern int FS_Truncate(FS_HANDLE FileHandle);





















 
extern int FS_MakeFileName(FS_HANDLE FileHandle, UINT Flag, WCHAR * FileName, UINT MaxLength);






















 
extern int FS_Rename(const WCHAR * FileName, const WCHAR * NewName);








































































 
extern int FS_Move(const WCHAR * SrcFullPath, const WCHAR * DstFullPath, UINT Flag, FS_ProgressCallback Progress, BYTE *RecursiveStack, const UINT StackSize);








































 
extern int FS_Count(const WCHAR * FullPath, UINT Flag, BYTE *RecursiveStack, const UINT StackSize);









































 
extern int FS_XDelete(const WCHAR * FullPath, UINT Flag, BYTE *RecursiveStack, const UINT StackSize);









































 
extern int FS_XDeleteEx(const WCHAR * FullPath, UINT Flag, FS_ProgressCallback Progress, BYTE *RecursiveStack, const UINT StackSize);













 
extern int FS_CompactDir(const WCHAR* DirName, UINT Flags);













 
extern int FS_CheckVolumeLabel(WCHAR *Label);














 
extern int FS_CheckFileName(WCHAR *Path);














































 
extern int FS_FindFirst(const WCHAR * NamePattern, BYTE Attr, BYTE AttrMask, FS_DOSDirEntry * FileInfo, WCHAR * FileName, UINT MaxLength);





















 
extern int FS_FindNext(FS_HANDLE FileHandle, FS_DOSDirEntry * FileInfo, WCHAR * FileName, UINT MaxLength);


























 
extern int FS_FindFirstN(const WCHAR * NamePattern, FS_Pattern_Struct * PatternArray, UINT PatternNum, BYTE ArrayMask, BYTE Attr, BYTE AttrMask, FS_DOSDirEntry * FileInfo, WCHAR * FileName, UINT MaxLength, UINT EntryIndex, UINT Flag);




















 
extern int FS_FindNextN(FS_HANDLE Handle, FS_Pattern_Struct * PatternArray, UINT PatternNum, BYTE ArrayMask, FS_DOSDirEntry * FileInfo, WCHAR * FileName, UINT MaxLength, UINT Flag);













 
extern int FS_FindClose(FS_HANDLE FileHandle);


















































 
extern kal_int32 FS_ListOpen(fs_list_param_struct *param, FS_HANDLE *handle);



















 
extern kal_int32 FS_ListReload(fs_list_param_struct *param, FS_HANDLE *handle);




















 
extern kal_int32 FS_ListNext(FS_HANDLE handle,
                             FS_DOSDirEntry *info, kal_wchar *path, kal_wchar *lfilename, kal_uint32 lfilename_size,
                             kal_int32 index);














 
extern kal_int32 FS_ListClose(FS_HANDLE handle);

extern void FS_Config(fs_config_enum type, void * data);
















 
extern int FS_SortCompareFileName(WCHAR *FileName1, WCHAR *FileName2);















 
extern int FS_SortCompareFileType(WCHAR *FileName1, WCHAR *FileName2);























 
extern int FS_XFindReset(FS_SortingParam *Param);




















 
extern int FS_XFindStart(const WCHAR * Pattern, FS_DOSDirEntry * FileInfo, WCHAR * FileName, UINT MaxLength, UINT Index, UINT * Position, UINT Flag);














 
extern int FS_XFindClose(UINT * Position);

















































































 
extern int FS_GetDrive(UINT Type, UINT Serial, UINT AltMask);






























 
extern int FS_GetDriveByHandle(FS_HANDLE handle);



















































 
extern int FS_GeneralFormat(const WCHAR * DriveName, UINT Level, FS_FormatCallback Progress);













 
extern int FS_GetClusterSize(UINT DriveIdx);






















 
extern int FS_QmGetFree(const BYTE * Path);













 
extern int FS_CommitAll(const WCHAR * DriveName);




















 
extern int FS_SetVolumeLabel(const WCHAR * DriveName, const WCHAR * Label);






















 
extern int FS_SwitchDriveMode(UINT DriveIdx, UINT Mode);













 
extern int FS_CheckDiskFlag(void);

#line 3992 "interface\\fs\\fs_gprot.h"














 
extern int FS_GetDiskInfo(const WCHAR * DriveName, FS_DiskInfo * DiskInfo, int Flags);
















 
extern int FS_GetDevType(const WCHAR * Path);























 
extern int FS_GetDevStatus(UINT DriveIdx, UINT Flag);















 
extern int FS_GetDevPartitions(UINT QueryTarget);

















 
extern int FS_CountUsedFH(int flag);





















































 
extern int FS_SetDirCache(FS_HANDLE FileHandle, UINT NewValue);


















 
extern int FS_GetDirCache(FS_HANDLE FileHandle, UINT *CurrValue);


















 
extern int FS_ExpireDirCache(FS_HANDLE FileHandle);




















 
extern int FS_IOCtrl(const WCHAR* DriveName, UINT CtrlAction, void* CtrlData);













 
extern int FS_RecoverDevice(const int devtype);




















 
extern int FS_OpenFileByHint(WCHAR DriveLetter, UINT DirCluster, UINT DirIndex, UINT Flags);

#line 4355 "interface\\fs\\fs_gprot.h"





















 
extern int FS_GetSysInfo(kal_uint32 options, fs_sysinfo_struct *info);































































 
extern int FS_DirCtrl(FS_HANDLE handle, kal_uint32 action, void *data);

extern void FS_SetFileTable(void *table);


























































































 
extern kal_int32 fs_async_open(const kal_wchar *file_name, kal_int32 flag, fs_overlapped_struct *overlapped);








































 
extern kal_int32 fs_async_write(FS_HANDLE handle, void *data, kal_uint32 length, kal_uint32 *written, fs_overlapped_struct *overlapped);













































 
extern kal_int32 fs_async_read(FS_HANDLE handle, void *data, kal_uint32 length, kal_uint32 *read, fs_overlapped_struct *overlapped);
















































 
extern kal_int32 fs_async_read_interleave(FS_HANDLE handle, void *data, kal_uint32 length, kal_uint32 *read, kal_uint32 chunksize, fs_overlapped_struct *overlapped);



































 
extern kal_int32 fs_async_seek(FS_HANDLE handle, kal_int64 offset, kal_int32 whence, fs_overlapped_struct *overlapped);

































 
kal_int32 fs_async_delete(const kal_wchar* filename, fs_overlapped_struct *overlapped);




































 
extern kal_int32 fs_async_get_folder_size(const kal_wchar* path, kal_int32 flag, void* recursive_stack, kal_uint32 stack_size, FS_ProgressCallback callback, fs_overlapped_struct *overlapped);







































 
extern kal_int32 fs_async_find_first(const kal_wchar *name_pattern,
                              kal_uint8 attr, kal_uint8 attr_mask,
                              FS_DOSDirEntry *file_info, kal_wchar *file_name, kal_uint32 max_length,
                              fs_overlapped_struct *overlapped);











































 
extern kal_int32 fs_async_find_first_n(const kal_wchar *name_pattern,
                              FS_Pattern_Struct * pattern_array, kal_uint32 pattern_num,
                              kal_uint8 array_mask, kal_uint8 attr, kal_uint8 attr_mask,
                              FS_DOSDirEntry *file_info, kal_wchar *file_name, kal_uint32 max_length,
                              kal_uint32 entry_index, kal_uint32 flag,
                              fs_overlapped_struct *overlapped);




































 
extern void fs_async_msg_handler(local_para_struct *local_para);
























 
extern kal_int32 fs_async_abort(fs_job_id job_id);























 
extern kal_int32 fs_async_abort_ex(fs_job_id job_id, void *buf);

 



 






























 
extern int FS_StartIOLog(FS_TaskIOStatistics *Statistics);


































 
extern int FS_EndIOLog(FS_TaskIOStatistics *Statistics);























 
int FS_TestMSDC(void * slot_id, BYTE * drive_list, UINT * drive_num);




















 
extern int FS_CloseMSDC(UINT MSDCIndex, UINT Mode);






















 
extern int FS_ConfigExtDevice(int Action, FS_Driver *DrvFuncs, int Slots, void **SlotIdArray, int *SlotsConfiged);

extern int FS_MountRemovableDevice(void);





















 
extern int FS_SanityCheck(void);

 

#line 5327 "interface\\fs\\fs_gprot.h"


#line 1 "fs\\common\\include\\fs_iprot.h"

































 

































































 

































typedef enum
{
    FS_DEVICE_UNKNOWN,
    FS_DEVICE_FLOPPY,
    FS_DEVICE_FDISK
} FS_DRIVER_DEVICE_ENUM;


typedef enum
{
    FS_DEV_IN_ACK_ENUM = 1,
    FS_DEV_SLOT_ACK_ENUM,
    FS_DEV_OUT_ACK_ENUM
} FS_ACK_TYPE_ENUM;


typedef enum
{
    FS_MEM_TYPE_DEFAULT = 0x00,     
    FS_MEM_TYPE_XDATA   = 0x01,     
    FS_MEM_TYPE_INVALID = 0xFF      
} fs_mem_type_enum;


typedef enum {
    FS_HINT_FREE = 0,
    FS_HINT_ALLOCATED,
    FS_HINT_CREATING,
    FS_HINT_STABLE,
    FS_HINT_STABLE_LOCKED,
    FS_HINT_DELETED_LOCKED
} FS_OpenHintStatusEnum;


typedef enum
{
    FS_DEV_NO_BOOT = 0,
    FS_DEV_DUAL_BOOT,
    FS_DEV_TOP_BOOT,
    FS_DEV_BOTTOM_BOOT
} FS_DEVICE_BOOT_LOCATION_ENUM;


typedef enum {
    rtfiles_c               = 0,
    rtfcore_c,
    rtfbuf_c,
    rtfex_c,
    fs_func_c,
    fs_func_adv_c,
    fs_func_async_c,
    fs_internal_c,
    fs_internal_api_c,
    fs_kal_c,
    fs_task_c,
    fs_utility_c,
    fs_usbms_c,
    fs_unknown_src_file
} fs_src_file_enum;






typedef struct
{
    fs_job_id   current_job;
    kal_bool    aborted;
} fs_tls_struct;



typedef struct {
    kal_uint32     Cluster;                  
    kal_uint32     Index;                    
    kal_uint32     DirCluster;
} FS_OpenHintLocation;


typedef struct {
    FS_OpenHintStatusEnum   Status;
    kal_uint8               FirstLevel;
    kal_uint8               HintNum;
    kal_uint8               FirstHint;
    kal_uint8               HitStamp;
    kal_uint8               Flag;
    kal_uint16              PathLength;
    FS_Drive                * Drive;
    kal_uint32              SerialNumber;
    FS_OpenHintLocation     * Location;   
    WCHAR                   Path[520 / 2];
} FS_OpenHintPath;


typedef struct {
    
    kal_uint32  Cluster;
    kal_uint32  Index;
    
    kal_uint8   Level;
    kal_uint8   PathIndex;
    kal_uint8   MatchType;
    kal_uint8   Flag;
    kal_uint32  DirCluster;
} FS_OpenHintInt;






 




















 
extern int FS_CloseAll(void);














 
extern int FS_ReleaseFH(void * TaskId);















 
extern int FS_GetFirstCluster(FS_HANDLE FileHandle, UINT * Cluster);



















 
extern int FS_CreateBootSector(void * BootSector, const FS_PartitionRecord * Partition, BYTE MediaDescriptor, UINT MinSectorsPerCluster, UINT Flags);






























 
extern int FS_GetPartitionInfo(const WCHAR * DriveName, FS_PartitionRecord * PartitionInfo);



























 
extern int FS_MappingDrive(UINT UpperOldDrv, UINT UpperNewDrv);












 
extern int FS_SetDiskFlag(void);












 
extern int FS_ClearDiskFlag(void);
















 
extern int FS_CreateMasterBootRecord(void * SectorBuffer, const FS_PartitionRecord * DiskGeometry);















 
extern int FS_FormatInitFatSector(kal_uint8 MediaDescriptor, kal_int32 FATType, kal_uint8 *Sector);
















 
extern int FS_FormatGetFatType(void * BootSector, kal_uint32 *RootDirSectors, kal_uint32 *FATSectors, kal_uint32 *Clusters);














 
extern int FS_SplitPartition(void * MasterBootRecord, UINT Sectors);










 
extern void FS_ShutDown(void);













 
extern int FS_UnlockAll(void);















 
extern int FS_LockFAT(UINT Type);


























 
extern int FS_OTPWrite(int devtype, UINT Offset, void * BufferPtr, kal_uint32 Length);
























 
extern int FS_OTPRead(int devtype, UINT Offset, void * BufferPtr, kal_uint32 Length);















 
extern int FS_OTPQueryLength(int devtype, UINT *Length);

















 
extern int FS_OTPLock(int devtype);


















 
extern int FS_SweepDevice(const int devtype);

extern int FS_OpenLR(const WCHAR * FileName, kal_uint32 Flag, kal_uint32 caller_address);
extern int FS_OpenHintLR(const WCHAR * FileName, kal_uint32 Flag, FS_FileOpenHint * DSR_Hint, kal_uint32 caller_address);
extern int FS_MoveLR(const WCHAR * SrcFullPath, const WCHAR * DstFullPath, kal_uint32 Flag, FS_ProgressCallback Progress,
            kal_uint8 *RecursiveStack, const kal_uint32 StackSize, kal_uint32 caller_address);
extern int FS_CloseLR(FS_HANDLE FileHandle, kal_uint32 caller_address);

extern FS_TaskIOStatistics *gFS_TaskIOStatistics;














 
extern int SDCreateMasterBootRecord(void * MasterBootRecord, kal_uint32 Sectors);

















 
extern int SDCreateBootSector(void * BootSector, kal_uint32 Sectors, FS_PartitionRecord *Partition);


















 
typedef enum
{
    FS_SD_FMT_OK             = 0,
    FS_SD_FMT_SIGNATURE_FAIL = 1,
    FS_SD_FMT_MBR_FAIL       = 2,
    FS_SD_FMT_BS_FAIL        = 3
} FS_SD_FMT_ENUM;

extern int SDCheckFormatParameter(void *MBR1, void *BS1, void *MBR2, void *BS2);

 






#line 5330 "interface\\fs\\fs_gprot.h"








#line 465 "interface\\fs\\fs_type.h"



#line 151 "custom\\common\\hal\\custom_flash.c"
#line 152 "custom\\common\\hal\\custom_flash.c"
#line 1 "hal\\storage\\flash\\mtd\\inc\\flash_sf.h"

































 








































































































































 




#line 180 "hal\\storage\\flash\\mtd\\inc\\flash_sf.h"
#line 1 "hal\\storage\\flash\\mtd\\inc\\sfi_hw.h"

































 
















































































 




#line 1 "hal\\system\\regbase\\inc\\reg_base.h"

































 































































































































































































































































































































 











 





























































































































#line 1 "hal\\system\\regbase\\inc\\reg_base_mt6260.h"

































 








































 

#line 113 "hal\\system\\regbase\\inc\\reg_base_mt6260.h"

#line 124 "hal\\system\\regbase\\inc\\reg_base_mt6260.h"







#line 140 "hal\\system\\regbase\\inc\\reg_base_mt6260.h"






#line 156 "hal\\system\\regbase\\inc\\reg_base_mt6260.h"

#line 169 "hal\\system\\regbase\\inc\\reg_base_mt6260.h"

#line 180 "hal\\system\\regbase\\inc\\reg_base_mt6260.h"



#line 217 "hal\\system\\regbase\\inc\\reg_base_mt6260.h"

#line 228 "hal\\system\\regbase\\inc\\reg_base_mt6260.h"







#line 244 "hal\\system\\regbase\\inc\\reg_base_mt6260.h"






#line 260 "hal\\system\\regbase\\inc\\reg_base_mt6260.h"

#line 272 "hal\\system\\regbase\\inc\\reg_base_mt6260.h"

#line 283 "hal\\system\\regbase\\inc\\reg_base_mt6260.h"


#line 494 "hal\\system\\regbase\\inc\\reg_base.h"




 

#line 507 "hal\\system\\regbase\\inc\\reg_base.h"









#line 121 "hal\\storage\\flash\\mtd\\inc\\sfi_hw.h"
















#line 291 "hal\\storage\\flash\\mtd\\inc\\sfi_hw.h"





#line 313 "hal\\storage\\flash\\mtd\\inc\\sfi_hw.h"



#line 329 "hal\\storage\\flash\\mtd\\inc\\sfi_hw.h"


#line 338 "hal\\storage\\flash\\mtd\\inc\\sfi_hw.h"


#line 349 "hal\\storage\\flash\\mtd\\inc\\sfi_hw.h"












#line 368 "hal\\storage\\flash\\mtd\\inc\\sfi_hw.h"






#line 385 "hal\\storage\\flash\\mtd\\inc\\sfi_hw.h"








#line 408 "hal\\storage\\flash\\mtd\\inc\\sfi_hw.h"

#line 423 "hal\\storage\\flash\\mtd\\inc\\sfi_hw.h"









#line 182 "hal\\storage\\flash\\mtd\\inc\\flash_sf.h"



 





typedef enum {
    SF_SR_BUSY  = 0
   ,SF_SR_WEL
   ,SF_SR_WSE
   ,SF_SR_WSP
   ,SF_SR_BP
   ,SF_SR_SRWD
   ,SF_SR_OTPLOCK
   ,SF_SR_FAIL
   ,SF_SR_COUNT     
} SF_Status_Enum;

typedef enum {
    SF_SST_SR_WEL          = 0x02      
   ,SF_SST_SR_WSE          = 0x04      
   ,SF_SST_SR_WSP          = 0x08      
   ,SF_SST_SR_WPLD         = 0x10      
   ,SF_SST_SR_SEC          = 0x20      
   ,SF_SST_SR_BUSY         = 0x80      
   ,SF_SST_SR_ALL          = 0xFF
} SF_SST_Status_Indication_Enum;

typedef enum {
    SF_MXIC_SR_BUSY        = 0x01      
   ,SF_MXIC_SR_WEL         = 0x02      
   ,SF_MXIC_SR_WSE         = 0x08      
   ,SF_MXIC_SR_WSP         = 0x04      
   ,SF_MXIC_SR_BP          = 0x3C      
   ,SF_MXIC_SR_SRWD        = 0x80      
   ,SF_MXIC_SR_ALL         = 0xFF
} SF_MXIC_Status_Indication_Enum;

typedef enum {
    SF_MXIC_SSR_OTP        = 0x01
   ,SF_MXIC_SSR_LDSO       = 0x02
   ,SF_MXIC_SSR_WSP        = 0x04
   ,SF_MXIC_SSR_WSE        = 0x08
   ,SF_MXIC_SSR_PFAIL      = 0x20
   ,SF_MXIC_SSR_EFAIL      = 0x40
   ,SF_MXIC_SSR_WPSEL      = 0x80
} SF_MXIC_Security_Indication_Enum;

typedef enum {
    SF_EON_SSR_WSE         = 0x04
   ,SF_EON_SSR_WSP         = 0x08
} SF_EON_Suspend_Indication_Enum;

typedef enum {
    SF_WINBOND_SSR_SUS     = 0x80
   ,SF_WINBOND_SSR_OTP     = 0x3C       
} SF_WINBOND_Suspend_Indication_Enum;

typedef enum {
    SF_NUMONYX_SSR_WSP     = 0x04
   ,SF_NUMONYX_SSR_WSE     = 0x40
} SF_NUMONYX_Suspend_Indication_Enum;

typedef enum {
    SF_UNDEF = 0
   ,SPI      = 1
   ,SPIQ     = 2
   ,QPI      = 3
} SF_MODE_Enum;






typedef kal_uint8 SF_Status;



 


#line 285 "hal\\storage\\flash\\mtd\\inc\\flash_sf.h"





#line 299 "hal\\storage\\flash\\mtd\\inc\\flash_sf.h"



#line 313 "hal\\storage\\flash\\mtd\\inc\\flash_sf.h"





#line 324 "hal\\storage\\flash\\mtd\\inc\\flash_sf.h"


#line 332 "hal\\storage\\flash\\mtd\\inc\\flash_sf.h"















 
extern void         SFI_BlankCheck(void *MTDData, kal_uint32 BlockIndex);
extern void         SFI_MacEnable(const kal_uint16 CS);
extern void         SFI_MacWaitReady(const kal_uint16 CS);
extern kal_uint32   SFI_ReverseByteOrder(kal_uint32 num);
extern void         SFI_ReadDeviceID(const kal_uint16 CS,kal_uint8 *id, kal_uint8 cmd);
extern void         SFI_ReadDeviceID_SPI(const kal_uint16 CS,kal_uint8 *id);

extern void         SFI_Dev_Command(const kal_uint16 CS, const kal_uint32 cmd);
extern void         SFI_Dev_CommandAddress(const kal_uint16 CS, const kal_uint8 cmd, const kal_uint32 address, const kal_uint32 address_bytes);
extern void         SFI_Dev_Command_List(const kal_uint16 CS, const kal_uint8 *cmdlist);
extern void         SFI_Dev_Command_Ext(const kal_uint16 CS,const kal_uint8 *cmd, kal_uint8 *data, const kal_uint16 outl, const kal_uint16 inl);
extern kal_bool     SFI_Dev_SupportUpHopping(void);
extern kal_bool     SFI_Dev_IsModemTimingRecoveryRequired(void);
extern void         SFI_Dev_SupportDelayResume(kal_bool flag);

extern void         SFI_GPRAM_Write(kal_uint32 gpram_offset, void* buff, kal_int32 length);
extern kal_uint32   SFI_GPRAM_Write_C1A3(const kal_uint32 cmd, const kal_uint32 address);
extern kal_uint32   SFI_GPRAM_Write_C1A4(const kal_uint32 cmd, const kal_uint32 address, kal_uint8 **p_data, kal_uint32 *length);



#line 153 "custom\\common\\hal\\custom_flash.c"
#line 154 "custom\\common\\hal\\custom_flash.c"





#line 1 "custom\\common\\hal\\flash_opt.h"

































 
































































 

#line 102 "custom\\common\\hal\\flash_opt.h"
#line 103 "custom\\common\\hal\\flash_opt.h"
#line 1 "custom\\system\\HEXING60A_11B_BB\\flash_opt_gen.h"

































 
































 







 
















 








 

 



 


 







 

    





    





 


















#line 104 "custom\\common\\hal\\flash_opt.h"









 







#line 129 "custom\\common\\hal\\flash_opt.h"






 


        


 

        


 






#line 161 "custom\\common\\hal\\flash_opt.h"







 







 






#line 297 "custom\\common\\hal\\flash_opt.h"

#line 352 "custom\\common\\hal\\flash_opt.h"
      
            


 






         
            


 
#line 403 "custom\\common\\hal\\flash_opt.h"



#line 426 "custom\\common\\hal\\flash_opt.h"


#line 445 "custom\\common\\hal\\flash_opt.h"
         
            


 






      
             

      

   
        





 


















#line 494 "custom\\common\\hal\\flash_opt.h"







#line 517 "custom\\common\\hal\\flash_opt.h"






 





















































#line 583 "custom\\common\\hal\\flash_opt.h"

#line 590 "custom\\common\\hal\\flash_opt.h"












#line 608 "custom\\common\\hal\\flash_opt.h"

#line 615 "custom\\common\\hal\\flash_opt.h"

























#line 646 "custom\\common\\hal\\flash_opt.h"

#line 654 "custom\\common\\hal\\flash_opt.h"

#line 662 "custom\\common\\hal\\flash_opt.h"

#line 670 "custom\\common\\hal\\flash_opt.h"






 
#line 686 "custom\\common\\hal\\flash_opt.h"


#line 160 "custom\\common\\hal\\custom_flash.c"
#line 1 "hal\\storage\\flash\\fdm\\inc\\DrvFlash.h"

































 
































































































































































































































































 





 

#line 300 "hal\\storage\\flash\\fdm\\inc\\DrvFlash.h"
#line 301 "hal\\storage\\flash\\fdm\\inc\\DrvFlash.h"
#line 302 "hal\\storage\\flash\\fdm\\inc\\DrvFlash.h"
#line 1 "kal\\include\\kal_internal_api.h"

































 





































































































 




#line 1 "kal\\include\\kal_release.h"

































 










































 







 

#line 88 "kal\\include\\kal_release.h"
#line 89 "kal\\include\\kal_release.h"
#line 90 "kal\\include\\kal_release.h"

#line 142 "kal\\include\\kal_internal_api.h"





#line 153 "kal\\include\\kal_internal_api.h"

typedef enum {
    KAL_MUTEX_GIVEN,
    KAL_MUTEX_TAKEN
} kal_mutex_state;

typedef enum 
{
#line 1 "kal\\common\\include\\kal_error_code.h"

































 


































































































































 




 














 

 
KAL_ERROR_KAL_INTERNAL_FAIL = 0,
KAL_ERROR_KAL_SUB_ERROR_CODE1 = 1,
KAL_ERROR_KAL_SUB_ERROR_CODE2 = 2,
KAL_ERROR_KAL_SUB_ERROR_CODE3 = 3,
KAL_ERROR_KAL_SUB_ERROR_CODE4 = 4,
KAL_ERROR_KAL_SUB_ERROR_CODE5 = 5,
KAL_ERROR_KAL_SUB_ERROR_CODE6 = 6,
KAL_ERROR_KAL_SUB_ERROR_CODE7 = 7,
KAL_ERROR_KAL_SUB_ERROR_CODE8 = 8,

 
KAL_ERROR_UNDEF = 1,
KAL_ERROR_SWI = 2,
KAL_ERROR_PABORT = 3,
KAL_ERROR_DABORT = 4,
                                                                              
 
KAL_ERROR_KALINIT_INIT_FAILED = 0x0101,
KAL_ERROR_KALINIT_INIT_CREATE_SEM_FAILED,
KAL_ERROR_KALINIT_INIT_CREATE_QU_MUTEX_FAILED,
KAL_ERROR_KALINIT_INIT_CREATE_POOL_MUTEX_FAILED,
KAL_ERROR_KALINIT_INIT_CREATE_TIMER_MUTEX_FAILED,
KAL_ERROR_KALINIT_INIT_CREATE_MEM_MUTEX_FAILED,
KAL_ERROR_KALINIT_INIT_MEMFAILED,
KAL_ERROR_KALINIT_MEMINIT_FAILED,
KAL_ERROR_KALINIT_CACHEINIT_FAILED,
KAL_ERROR_KALINIT_CRCCHECK_FAILED,
                                                                             
                                                    
KAL_ERROR_TASKMNGT_CREATE_MEMFAILED = 0x0201,
KAL_ERROR_TASKMNGT_CREATE_STACKFAILED,
KAL_ERROR_TASKMNGT_CREATE_FAILED,
KAL_ERROR_TASKMNGT_DELETE_FAILED,
KAL_ERROR_TASKMNGT_SLEEP_FAILED,
KAL_ERROR_TASKMNGT_GETID_FAILED,
KAL_ERROR_TASKMNGT_STACKOVERFLOW,
KAL_ERROR_TASKMNGT_MODULE_ID_OUT_OF_RANGE,
                                                                              
                                                    
KAL_ERROR_HISRMNGT_CREATE_MEMFAILED = 0x0211,
KAL_ERROR_HISRMNGT_CREATE_STACKFAILED,
KAL_ERROR_HISRMNGT_CREATE_FAILED,
KAL_ERROR_HISRMNGT_CREATE_TOO_MANY_HISR,
KAL_ERROR_HISRMNGT_SLEEP_FAILED,
KAL_ERROR_HISRMNGT_ACTIVATE_FAILED,
KAL_ERROR_HISRMNGT_GETID_FAILED,
KAL_ERROR_HISRMNGT_STACKOVERFLOW,
KAL_HISRMNGT_REG_FAILED,
KAL_ERROR_HISRMNGT_DELETE_FAILED,                                                                              
                                                 
KAL_ERROR_ITC_QCREATE_MEMFAILED = 0x0301,
KAL_ERROR_ITC_QCREATE_DATAMEMFAILED,
KAL_ERROR_ITC_QCREATE_FAILED,
KAL_ERROR_ITC_QCREATE_FAILED_INT,
KAL_ERROR_ITC_QENQUE_EXT_FAILED,
KAL_ERROR_ITC_QENQUE_INT_FAILED,
KAL_ERROR_ITC_QENQUE_NIL_FAILED,
KAL_ERROR_ITC_QENQUE_SIG_FAILED,
KAL_ERROR_ITC_QENQUE_SUS_FAILED,
KAL_ERROR_ITC_QDEQUE_NIL_FAILED,
KAL_ERROR_ITC_QDEQUE_SIG_FAILED,
KAL_ERROR_ITC_QDEQUE_SUS_FAILED,
KAL_ERROR_ITC_QDELETE_FAILED,
                                                                            
KAL_ERROR_ITC_MCREATE_MEMFAILED = 0x0401,
KAL_ERROR_ITC_MDELETE_FAILED,
KAL_ERROR_ITC_MCREATE_FAILED,
KAL_ERROR_ITC_MTAKE_FAILED,
KAL_ERROR_ITC_MGIVE_FAILED,
KAL_ERROR_ITC_MTAKE_INTERNAL_FAILED,
KAL_ERROR_ITC_MGIVE_INTERNAL_FAILED,
KAL_ERROR_ITC_MCREATE_OUT_OF_RANGE,
                                                                              
KAL_ERROR_ITC_SCREATE_MEMFAILED = 0x0411,
KAL_ERROR_ITC_SDELETE_FAILED,
KAL_ERROR_ITC_SCREATE_FAILED,
KAL_ERROR_ITC_STAKE_FAILED,
KAL_ERROR_ITC_SGIVE_FAILED,
                                                                              
KAL_ERROR_ITC_EGCREATE_MEMFAILED = 0x0421,
KAL_ERROR_ITC_EGDELETE_FAILED,
KAL_ERROR_ITC_EGCREATE_FAILED,
KAL_ERROR_ITC_EGSET_FAILED,
KAL_ERROR_ITC_EGRETRIEVE_FAILED,
                                                                              
KAL_ERROR_ITC_ILM_MULTIALLOC = 0x0431,
KAL_ERROR_ITC_ILM_NOT_ALLOC,
KAL_ERROR_ITC_ILM_DOUBLE_FREE,
KAL_ERROR_ITC_ILM_WRONG_SAP_ID,  
                                                                              
KAL_ERROR_ITC_MSGID_CODE_EXCEED = 0x0441,
KAL_ERROR_PEERBUFF_EXTEND_FAILED,
                                                                              
                                                         
KAL_ERROR_TIMER_CREATE_MEMFAILED = 0x0601,
KAL_ERROR_TIMER_CREATE_FAILED,
KAL_ERROR_TIMER_DELETE_FAILED,
KAL_ERROR_TIMER_SET_FAILED,
KAL_ERROR_TIMER_CANCEL_FAILED,
KAL_ERROR_TIMER_GETTIME_FAILED,
KAL_ERROR_TIMER_GETTIMEREMAINING_FAILED,
KAL_ERROR_TIMER_SCHED_FAILED,
KAL_ERROR_TIMER_CONTROL_FAILED,
                                                                             
                                                        
KAL_ERROR_MEMMNGT_ALLOC_FAILED = 0x0701,
KAL_ERROR_MEMMNGT_GET_FREE_INDEX,
KAL_ERROR_MEMMNGT_ALLOC_DEBUGMEM_FAILED,
KAL_ERROR_MEMMNGT_DEALLOC_FAILED_INDEX,
KAL_ERROR_MEMMNGT_DEALLOC_FAILED_MISMATCH,
KAL_ERROR_MEMMNGT_DEALLOC_FAILED_DOUBLE_FREE,
KAL_ERROR_MEMMNGT_DEALLOC_FAILED_INVALID_PTR,
KAL_ERROR_MEMMNGT_DEALLOC_DEBUGMEM_FAILED,
KAL_ERROR_MEMMNGT_MEMCPY_FAILED,
KAL_ERROR_MEMMNGT_BUFFER_OVERRUN,
KAL_ERROR_MEMMNGT_MEM_OVERRUN,

KAL_ERROR_APPMEM_INVALID_TYPE,
KAL_ERROR_APPMEM_ALLOC_FAIL,
KAL_ERROR_APPMEM_FREE_NULL,

 
 
KAL_ERROR_BUFFMNGR_CREATE_FAILED = 0x0800,
KAL_ERROR_BUFFMNGR_CREATE_MEMFAILED,
KAL_ERROR_DATAPOOL_CREATE_FAILED,
KAL_ERROR_DATAPOOL_CREATE_MEMFAILED,
 
KAL_ERROR_BUFFMNGR_DELETE_FAILED = 0x0810,
 
KAL_ERROR_BUFFMNGR_GETBUFF_FAILED = 0x0820,
KAL_ERROR_BUFFMNGR_GETBUFF_POOLINDX_OUT_OF_RANGE,
KAL_ERROR_BUFFMNGR_GETBUFF_POOL_NOT_EXIST,
KAL_ERROR_BUFFMNGR_GETBUFF_NOT_AVAILABLE,
KAL_ERROR_BUFFMNGR_GETBUFF_SIZE_FAILED,
KAL_ERROR_BUFFMNGR_GET_DATABUFF_FAILED,
 
KAL_ERROR_BUFFMNGR_RELEASEBUFF_FAILED = 0x0830,
KAL_ERROR_BUFFMNGR_RELEASE_DATABUFF_FAILED = 0x0832,
 
KAL_ERROR_BUFFMNGR_FOOTER_FAILED = 0x0840,
KAL_ERROR_BUFFMNGR_HEADER_FAILED,
KAL_ERROR_BUFFMNGR_FOOTER_FAILED_GET,
KAL_ERROR_BUFFMNGR_HEADER_FAILED_GET,
KAL_ERROR_BUFFMNGR_EXT_FOOTER_FAILED,
 
KAL_ERROR_BUFFMNGR_DELETE_NILPTR = 0x0851,
KAL_ERROR_BUFFMNGR_GETBUFF_NILPTR,
KAL_ERROR_BUFFMNGR_RELEASEBUFF_NILPTR,
 
 
 
KAL_ERROR_BUFFMNGR_ISVALID_FAILED = 0x0880,
KAL_ERROR_BUFFMNGR_POOLID_FAILED_GET,
 
KAL_ERROR_BUFFMNGR_CREATE_INTERNAL_FAILED = 0x0890,
KAL_ERROR_BUFFMNGR_DELETE_INTERNAL_FAILED,
KAL_ERROR_BUFFMNGR_GETBUFF_INTERNAL_FAILED,
KAL_ERROR_BUFFMNGR_RELEASEBUFF_INTERNAL_FAILED,
KAL_ERROR_DATAPOOL_CREATE_INTERNAL_FAILED,
KAL_ERROR_DATAPOOL_GETBUFF_INTERNAL_FAILED,
KAL_ERROR_DATAPOOL_RELEASEBUFF_INTERNAL_FAILED,
                                                                              
 
KAL_ERROR_ERRORMNGR_FATALHANDLER_FAILED = 0x0901,
KAL_ERROR_ERRORMNGR_REGISTERHANDLER_FAILED,
                                                                                 
 
KAL_ERROR_FILESYS_INTERNAL_FAILED = 0x0a01,
KAL_ERROR_FILESYS_NORMAL_FAILED,
KAL_ERROR_FILESYS_CCCI_CONF_MISMATCH_FAILED,
KAL_ERROR_FILESYS_CCCI_PARA_ERROR_FAILED,
KAL_ERROR_FILESYS_CCCI_NOPHY_FAILED,
KAL_ERROR_FILESYS_CCCI_FS_SHUTDOWN_FAILED,
KAL_ERROR_FILESYS_NAND_FDM_INTERNAL_FAILED = 0x0a10,
KAL_ERROR_FILESYS_NOR_FDM_INTERNAL_FAILED = 0x0a20,
                                                                                 
 
KAL_ERROR_SHOULD_NOT_EXECUTE = 0x0b01,
KAL_ERROR_DIV_BY_0_FAILED,
KAL_ERROR_ABNORMAL_RESET_FAILED,
KAL_ERROR_NUCLEUS_INTERNAL_FAILED = 0x0b10,
KAL_ERROR_SYS_CALL_WHEN_LISR,
KAL_ERROR_SYS_CALL_WHEN_TP_TAKEN,
KAL_ERROR_SYS_CALL_WHEN_INTERRUPT_DISABLED,
KAL_ERROR_DEMP_INVALID_LOCK_USER_FAILED = 0x0b20,
KAL_ERROR_DEMP_EXHAUST_LOCK_QUOTA_FAILED,
KAL_ERROR_DEMP_OVER_LOCK_UNLOCK_FAILED,
KAL_ERROR_DEMP_HISR_MISUSE_DEMP_FAILED,
KAL_ERROR_DEMP_LISR_MISUSE_DEMP_FAILED,
KAL_ERROR_DEMP_LOCKOUT_IBIT_MISUSE_DEMP_FAILED,
KAL_ERROR_DEMP_HOLD_PROTECT_MISUSE_DEMP_FAILED,
KAL_ERROR_NON_REGISTERED_LISR = 0x0b30,
KAL_ERROR_OVER_60QBIT_FAILED,
KAL_ERROR_DRV_EINT_INVALID_INDEX,
KAL_ERROR_DCMGR_INVALID_CODE_ID = 0x0b40,
KAL_ERROR_DCMGR_POOL_NOT_EXISTING,
KAL_ERROR_DCMGR_GROUP_NOT_EXISTING,
KAL_ERROR_DCMGR_POOL_OCCUPIED,
KAL_ERROR_DCMGR_REGION_NOT_LOADED,
                                                                                 
 
KAL_ERROR_EVTSCH_CREATE_MEMFAILED = 0x0c01,
KAL_ERROR_EVTSCH_CREATE_FAILED,
KAL_ERROR_EVTSCH_GETBUFF_FAILED,
KAL_ERROR_EVTSCH_RELEASEBUFF_FAILED,
KAL_ERROR_EVTSCH_CANCEL_FAILED,
KAL_ERROR_EVTSCH_CANCEL_FAILED2,
KAL_ERROR_EVTSCH_ILLEGAL_PARAMETERS,

 
KAL_ERROR_IPC_INTERNAL_FAILED = 0x0d01,

 
KAL_ERROR_MODULE_ID_OUT_OF_RANGE = 0x0e01,
KAL_ERROR_INVALID_PARAMETERS,
                                                                              
 
KAL_ERROR_DEBUGBUFFMNGR_GETPOOLSTAT_FAILED = 0x1001,
KAL_ERROR_DEBUGBUFFMNGR_RESETPOOLSTAT_FAILED,
KAL_ERROR_DEBUGBUFFMNGR_GETBUFFSTAT_FAILED,
KAL_ERROR_DEBUGBUFFMNGR_RESETBUFFSTAT_FAILED,
KAL_ERROR_DEBUGBUFFMNGR_POOLID_VALIDATION_FALIED,
KAL_ERROR_DEBUGBUFFMNGR_BUFF_OVERRUN_FAILED,
                                                                              
 
KAL_ERROR_DEBUGERRORMNGR_REGISTERPRINT_FAILED = 0x1101,
KAL_ERROR_DEBUGERRORMNGR_PRINT_FAILED,
                                                                              
 
KAL_ERROR_DEBUGITC_GETQSTAT_FAILED = 0x1201,
KAL_ERROR_DEBUGITC_RESETQSTAT_FAILED,
                                                                              
 
KAL_ERROR_DEBUGTIMER_GETTIMERSTAT_FAILED = 0x1301,
KAL_ERROR_DEBUGTIMER_RESETTIMERSTAT_FAILED,

 
KAL_ERROR_CUSTOMER_TASK_ID_EXCEED_UPPER_BOUND = 0x1501,
KAL_ERROR_CUSTOMER_MOD_ID_EXCEED_UPPER_BOUND,
KAL_ERROR_CUSTOMER_MEESAGE_ID_EXCEED_UPPER_BOUND,
KAL_ERROR_CUSTOMER_SAP_ID_EXCEED_UPPER_BOUND,

 
KAL_ERROR_ESM_ADD_INST_INVALID_SERVICE_ID = 0x1601,
KAL_ERROR_ESM_ADD_INST_NULL_CONTEXT,
KAL_ERROR_ESM_ADD_INST_INVALID_PROCESS_ID,
KAL_ERROR_ESM_ADD_INST_ZERO_DATA_SIZE,
KAL_ERROR_ESM_ADD_INST_INVALID_INST_ID,
KAL_ERROR_ESM_ADD_INST_FAIL,
KAL_ERROR_ESM_ADD_FIRST_INST_NULL_COMP,
KAL_ERROR_ESM_ADD_FIRST_INST_OVER_MAX_PROCESS,
KAL_ERROR_ESM_ADD_FIRST_INST_INSERT_FAIL,
KAL_ERROR_ESM_DEL_INSTENTRY_INVALID_PROCESS_ID,
KAL_ERROR_ESM_DEL_INSTENTRY_NULL_COMP_INFO,
KAL_ERROR_ESM_DEL_INSTENTRY_OVER_MAX_PROCESS,
KAL_ERROR_ESM_DEL_INSTENTRY_OVER_MAX_INST,
KAL_ERROR_ESM_DEL_INSTENTRY_INVALID_INST_ID,
KAL_ERROR_ESM_DEL_INSTENTRY_INACTIVE_INST,
KAL_ERROR_ESM_DEL_INSTENTRY_ROOT_INST,
KAL_ERROR_ESM_EXEC_CONTEXT_NULL_CONTEXT,
KAL_ERROR_ESM_EXEC_CONTEXT_NULL_MSG,
KAL_ERROR_ESM_EXEC_CONTEXT_TRAN_NULL_MSG,
KAL_ERROR_ESM_EXEC_CONTEXT_NON_NULL_LAST_EVENT,
KAL_ERROR_ESM_EXEC_CONTEXT_TRAN_MSG_FAIL,
KAL_ERROR_ESM_GET_INSTPTR_NULL_COMP_INFO,
KAL_ERROR_ESM_GET_INSTPTR_OVER_PROCESS_ID,
KAL_ERROR_ESM_GET_INSTPTR_OVER_INST_ID,
KAL_ERROR_ESM_GET_INSTPTR_NULL_INST_ARRAY,
KAL_ERROR_ESM_GET_INSTPTR_NULL_INST,
KAL_ERROR_ESM_POPULATE_NULL_SM,
KAL_ERROR_ESM_POPULATE_OVER_MAX_SERVICE_NAME,
KAL_ERROR_ESM_POPULATE_NULL_STATE_TBL,
KAL_ERROR_ESM_POPULATE_NULL_EVENT_DESC,
KAL_ERROR_ESM_POPULATE_NO_EVENT,
KAL_ERROR_ESM_INIT_INST_ARRAY_NON_NULL_INST_ARRAY,
KAL_ERROR_ESM_INIT_INST_ARRAY_ZERO_PROCESS,
KAL_ERROR_ESM_INIT_INST_ARRAY_INVALID_MAX_INST,
KAL_ERROR_FSM_ADD_EVENTS_NULL_EVENT,
KAL_ERROR_FSM_ADD_EVENTS_NULL_SERVICE,
KAL_ERROR_FSM_ADD_EVENTS_NULL_INST,
KAL_ERROR_FSM_ADD_EVENTS_NULL_EVENT_LIST,
KAL_ERROR_FSM_ADD_EVENTS_OVER_MAX_PROCESS,
KAL_ERROR_FSM_ADD_INSTENTRY_NULL_COMP_INFO,
KAL_ERROR_FSM_ADD_INSTENTRY_OVER_MAX_PROCESS,
KAL_ERROR_FSM_ADD_INSTENTRY_ZERO_DATA_SIZE,
KAL_ERROR_FSM_ADD_INSTENTRY_INVALID_ID,
KAL_ERROR_FSM_ADD_INSTENTRY_NULL_LINK,
KAL_ERROR_FSM_ADD_INSTENTRY_INSERT_FAIL,
KAL_ERROR_FSM_DEL_INST_INVALID_SERVICE_ID,
KAL_ERROR_FSM_DEL_INST_INVALID_PROCESS_ID,
KAL_ERROR_FSM_EXEC_TRAN_NULL_CONTEXT,
KAL_ERROR_FSM_GET_FREEINST_NULL_COMP_INFO,
KAL_ERROR_FSM_GET_FREEINST_NO_FREE_INST,
KAL_ERROR_FSM_GET_FREEINST_INVALID_SERVICE_ID,
KAL_ERROR_FSM_GET_INSTDATA_NULL_CONTEXT,
KAL_ERROR_FSM_GET_INSTDATA_INVALID_SERVICE_ID,
KAL_ERROR_FSM_GET_INSTDATA_INVALID_INST_ID,
KAL_ERROR_FSM_GET_INSTDATA_INACTIVE_INST,
KAL_ERROR_FSM_HANDLE_SEVENT_NULL_EVENT,
KAL_ERROR_FSM_HANDLE_SEVENT_INVALID_SERVICE_ID,
KAL_ERROR_FSM_HANDLE_SEVENT_INVALID_INST_ID,
KAL_ERROR_FSM_HANDLE_SEVENT_NULL_CONTEXT,
KAL_ERROR_FSM_HANDLE_SEVENT_TRAN_FAIL,
KAL_ERROR_FSM_PROCESS_EVENTS_NULL_EVENT,
KAL_ERROR_FSM_PROCESS_EVENTS_INVALID_PROCESS_ID,
KAL_ERROR_FSM_PROCESS_EVENTS_INVALID_INST_ID,
KAL_ERROR_FSM_PROCESS_EVENTS_OVER_MAX_PROCESS,
KAL_ERROR_FSM_PROCESS_EVENTS_TRAN_FAIL,
KAL_ERROR_LSM_DEL_EVENTLIST_FAILED,
KAL_ERROR_LSM_UNDEL_LISTOBJ_FAILED,
KAL_ERROR_ESM_GET_INST_STATE_NULL_CONTEXT,
KAL_ERROR_ESM_ADD_INST_ALLOC_SYSTEMMEM_FAILED,
KAL_ERROR_ESM_INIT_INST_ARRAY_ALLOC_SYSTEMMEM_FAILED,
KAL_ERROR_ESM_INIT_CONTEXT_ALLOC_SYSTEMMEM_FAILED,

 
KAL_ERROR_ADM_CREATE_FAILED = 0x1700,
KAL_ERROR_ADM_DELETE_FAILED = 0x1710,
KAL_ERROR_ADM_ALLOC_FAILED = 0x1720,
KAL_ERROR_ADM_ALLOC_DYNCACHE_FAILED = 0x1726,
KAL_ERROR_ADM_REALLOC_FAILED = 0x172c,
KAL_ERROR_ADM_FREE_FAILED = 0x1730,
KAL_ERROR_ADM_FREE_DOUBLEFREE = 0x1732,
KAL_ERROR_ADM_FOOTER_FAILED = 0x1740,
KAL_ERROR_ADM_HEADER_FAILED,
KAL_ERROR_ADM_NILPTR = 0x1750,
KAL_ERROR_ADM_DELETE_NILPTR,
KAL_ERROR_ADM_ALLOC_NILPTR,
KAL_ERROR_ADM_FREE_NILPTR,
KAL_ERROR_ADM_REALLOC_NILPTR,
KAL_ERROR_ADM_BADID = 0x1760,
KAL_ERROR_ADM_DELETE_BADID,
KAL_ERROR_ADM_ALLOC_BADID,
KAL_ERROR_ADM_FREE_BADID,
KAL_ERROR_ADM_REALLOC_BADID,
KAL_ERROR_ADM_CONCURRENT_OPERATION = 0x1770,
KAL_ERROR_ADM_BADPTR,
KAL_ERROR_ADM_GETEXTHEADER_FAILED = 0x1781,

 
KAL_ERROR_AFM_CREATE_FAILED = 0x1800,
KAL_ERROR_AFM_DELETE_FAILED = 0x1810,
KAL_ERROR_AFM_ALLOC_FAILED = 0x1820,
KAL_ERROR_AFM_ALLOC_DYNCACHE_FAILED = 0x1826,
KAL_ERROR_AFM_FREE_FAILED = 0x1830,
KAL_ERROR_AFM_FREE_DOUBLEFREE,
KAL_ERROR_AFM_FOOTER_FAILED = 0x1840,
KAL_ERROR_AFM_HEADER_FAILED,
KAL_ERROR_AFM_FOOTER_FAILED_GET,
KAL_ERROR_AFM_HEADER_FAILED_GET,
KAL_ERROR_AFM_NILPTR = 0x1850,
KAL_ERROR_AFM_DELETE_NILPTR,
KAL_ERROR_AFM_ALLOC_NILPTR,
KAL_ERROR_AFM_FREE_NILPTR,
KAL_ERROR_AFM_BADID = 0x1860,
KAL_ERROR_AFM_DELETE_BADID,
KAL_ERROR_AFM_ALLOC_BADID,
KAL_ERROR_AFM_FREE_BADID,
KAL_ERROR_AFM_CONCURRENT_OPERATION = 0x1870,
KAL_ERROR_AFM_BADPTR,





#line 163 "kal\\include\\kal_internal_api.h"
    KAL_ERROR_CODE_END

} kal_error_type;

typedef enum 
{
#line 1 "kal\\common\\include\\kal_error_code.h"

































 


































































































































 




 














 

 
KAL_ERROR_KAL_INTERNAL_FAIL_ = 0,
KAL_ERROR_KAL_SUB_ERROR_CODE1_ = 1,
KAL_ERROR_KAL_SUB_ERROR_CODE2_ = 2,
KAL_ERROR_KAL_SUB_ERROR_CODE3_ = 3,
KAL_ERROR_KAL_SUB_ERROR_CODE4_ = 4,
KAL_ERROR_KAL_SUB_ERROR_CODE5_ = 5,
KAL_ERROR_KAL_SUB_ERROR_CODE6_ = 6,
KAL_ERROR_KAL_SUB_ERROR_CODE7_ = 7,
KAL_ERROR_KAL_SUB_ERROR_CODE8_ = 8,

 
Undefined_exception = 1,
SWI_exception = 2,
Prefetch_abort = 3,
Data_abort = 4,
                                                                              
 
KAL_ERROR_KALINIT_INIT_FAILED_ = 0x0101,
initialize_KAL___fail_to_create_a_semaphore,
initialize_KAL___fail_to_create_a_QUEUE_MUTEX,
initialize_KAL___fail_to_create_a_POOL_MUTEX,
initialize_KAL___fail_to_create_a_TIMER_MUTEX,
initialize_KAL___fail_to_create_a_MEM_MUTEX,
KAL_ERROR_KALINIT_INIT_MEMFAILED_,
KAL_ERROR_KALINIT_MEMINIT_FAILED_,
KAL_ERROR_KALINIT_CACHEINIT_FAILED_,
check_CRC___CRC_error,
                                                                             
                                                    
create_task___fail_to_allocate_memory = 0x0201,
KAL_ERROR_TASKMNGT_CREATE_STACKFAILED_,
create_task___fail,
delete_task___fail,
KAL_ERROR_TASKMNGT_SLEEP_FAILED_,
KAL_ERROR_TASKMNGT_GETID_FAILED_,
thread_stack_is_overflow,
module_id_is_out_of_range,
                                                                              
                                                    
create_HISR___fail_to_allocate_memory = 0x0211,
KAL_ERROR_HISRMNGT_CREATE_STACKFAILED_,
create_HISR___fail,
create_HISR___fail_too_many_hisr,
KAL_ERROR_HISRMNGT_SLEEP_FAILED_,
activate_HISR___fail,
KAL_ERROR_HISRMNGT_GETID_FAILED_,
KAL_ERROR_HISRMNGT_STACKOVERFLOW_,
KAL_HISRMNGT_REG_FAILED_,
delete_HISR___fail,                                                                              
                                                 
create_message_queue___fail_to_allocate_memory = 0x0301,
KAL_ERROR_ITC_QCREATE_DATAMEMFAILED_,
create_message_queue___fail,
send_messages___internal_queue_is_not_created,
enqueue_to_extq___fail,
enqueue_to_intq___fail,
enqueue___pointer_is_NULL,
enqueue___RTOS_fail,
enqueue___suspend_type_is_invalid,
dequeue___pointer_is_NULL,
dequeue___RTOS_fail,
dequeue___suspend_type_is_invalid,
delete_message_queue___fail,
                                                                            
create_MUTEX___fail_to_allocate_memory = 0x0401,
delete_MUTEX___fail,
create_MUTEX___fail,
take_MUTEX___fail,
give_MUTEX___fail,
take_reentrant_MUTEX___fail,
give_reentract_MUTEX___fail,
create_enhance_MUTEX___create_too_many_mutex,
                                                                              
create_semaphore___fail_to_allocate_memory = 0x0411,
delete_semaphore___fail,
create_semaphore___fail,
take_semaphore___fail,
give_semaphore___fail,
                                                                              
create_event_group___fail_to_allocate_memory = 0x0421,
delete_event_group___fail,
create_event_group___fail,
set_event_to_an_event_group___fail,
retrieve_event_from_an_event_group___fail,
                                                                              
allocate_ILM___ILM_is_already_allocated = 0x0431,
send_messages___the_sending_ILM_is_not_allocated,
send_messages___the_sended_ILM_is_double_free_or_corruption,
send_inline_messages___with_wrong_sap_id_in_task_context,  
                                                                              
check_message_ID_range___out_of_range = 0x0441,
extend_peer_buffer___fail,
                                                                              
                                                         
create_timer___fail_to_allocate_memory = 0x0601,
create_timer___fail,
deletel_timer___fail,
set_timer___fail,
cancel_timer___fail,
KAL_ERROR_TIMER_GETTIME_FAILED_,
KAL_ERROR_TIMER_GETTIMEREMAINING_FAILED_,
KAL_ERROR_TIMER_SCHED_FAILED_,
KAL_ERROR_TIMER_CONTROL_FAILED_,
                                                                             
                                                        
allocate_memory___out_of_memory = 0x0701,
get_free_index___no_more_free_index,
KAL_ERROR_MEMMNGT_ALLOC_DEBUGMEM_FAILED_,
free_memory___out_of_range,
free_memory___pointer_is_not_matched,
free_memory___double_free,
free_memory___invalid_pointer,
KAL_ERROR_MEMMNGT_DEALLOC_DEBUGMEM_FAILED_,
KAL_ERROR_MEMMNGT_MEMCPY_FAILED_,
buffer_overrun,
memory_overrun,

allocate_APPMEM___invalid_APPMEM_type,
allocate_APPMEM___out_of_memory,
free_APPMEM___the_given_pointer_is_NULL,

 
 
create_buffer_pool___failed = 0x0800,
create_buffer_pool___fail_to_allocate_memory,
create_data_buffer_pool___failed,
create_data_buffer_pool___fail_to_allocate_memory,
 
delete_buffer_pool___failed = 0x0810,
 
get_buffer___failed = 0x0820,
get_buffer___pool_index_is_out_of_range,
get_buffer___inexistent_pool,
get_buffer___run_out_of_avaiable_buffer,
get_buffer___request_a_buffer_of_unspported_size,
get_data_buffer___incorrect_RLC_direction,
 
release_buffer___failed = 0x0830,
release_data_buffer___failed = 0x0832,
 
validate_the_buffer_footer___footer_is_corrupted = 0x0840,
validate_the_buffer_header___header_is_corrupted,
get_buffer___buffer_footer_is_corrupted,
get_buffer___buffer_header_is_corrupted,
validate_the_buffer_footer___extended_footer_is_corrupted,
 
delete_buffer_pool___pool_is_nil_ptr = 0x0851,
get_buffer___pool_is_nil_ptr,
release_buffer___pool_is_nil_ptr,
 
 
 
validate_the_buffer___invalid_buffer = 0x0880,
validate_the_buffer_poolid___poolid_is_corrupted,
 
NU_create_buffer_pool___failed = 0x0890,
NU_delete_buffer_pool___failed,
NU_get_buffer___failed,
NU_release_buffer___failed,
NU_create_data_buffer___failed,
NU_get_data_buffer___failed,
NU_release_data_buffer___failed,
                                                                              
 
KAL_ERROR_ERRORMNGR_FATALHANDLER_FAILED_ = 0x0901,
KAL_ERROR_ERRORMNGR_REGISTERHANDLER_FAILED_,
                                                                                 
 
file_system_internal_error = 0x0a01,
file_system_normal_error,
file_system_ccci_configuration_mismatch_error,
file_system_ccci_parameter_error,
file_system_ccci_no_phyiscal_channel_error,
file_system_ccci_shutdown_error,
file_system_nand_fdm_internal_error = 0x0a10,
file_system_nor_fdm_internal_error = 0x0a20,
                                                                                 
 
the_dummy_function_should_not_be_invoked = 0x0b01,
divide_by_zero,
abnormal_reset,
Nucleus_internal_error = 0x0b10,
invoke_sys_call_when_in_lisr,
invoke_sys_call_when_thread_protect_taken,
invoke_sys_call_when_interrupt_disabled,
invalid_demp_lock_user = 0x0b20,
exhaust_the_given_demp_lock_quota,
demp_over_lock_or_unlock,
hisr_demp_misuse,
lisr_demp_misuse,
lockout_Ibit_demp_misuse,
hisr_lisr_demp_abuse,
the_LISR_is_not_registered = 0x0b30,
over_60qbit,
invalid_eint_index,
dcmgr_invalid_code_id = 0x0b40,
dcmgr_pool_not_existing,
dcmgr_group_not_existing,
dcmgr_pool_occupied,
dcmgr_region_not_loaded,
                                                                                 
 
create_event_scheduler_pool___fail_to_allocate_memory = 0x0c01,
create_event_schedulers_pool___fail_to_create_partition_memory,
fail_to_allocate_memory_for_event_scheduler,
fail_to_free_memory_to_the_event_schedulers_pool,
cancel_event___the_event_is_owned_by_another_event_scheduler_or_null_field,
cancel_event___the_event_id_is_out_of_event_pool_memory_range,
illegal_parameters_to_event_schedule_api,

 
ipc_internal_fatal_error = 0x0d01,

 
general_error_module_id_out_of_range = 0x0e01,
general_error_invalid_parameter,
                                                                              
 
get_pool_statistics___pool_id_is_invalid = 0x1001,
resset_pool_statistics___pool_id_is_invalid,
KAL_ERROR_DEBUGBUFFMNGR_GETBUFFSTAT_FAILED_,
reset_buffer_statistics___buffer_is_not_valid,
invalid_pool_id,
check_buffer_overrun___the_given_buffer_is_not_allocated,
                                                                              
 
KAL_ERROR_DEBUGERRORMNGR_REGISTERPRINT_FAILED_ = 0x1101,
KAL_ERROR_DEBUGERRORMNGR_PRINT_FAILED_,
                                                                              
 
get_queue_statistics___queue_id_is_invaild = 0x1201,
reset_queue_statistics___queue_id_is_invalid,
                                                                              
 
get_timer_statistics___timer_id_is_invalid = 0x1301,
reset_timer_statistics___timer_id_is_invalid,

 
create_too_many_custom_tasks = 0x1501,
add_too_many_custom_modules,
add_too_many_custom_messages,
add_too_many_custom_SAP,

 
fail_to_add_instance___invalid_service_id = 0x1601,
fail_to_add_instance___null_context,
fail_to_add_instance___invalid_process_id,
fail_to_add_instance___zero_data_size,
fail_to_add_instance___invalid_instance_id,
fail_to_add_instance,
fail_to_add_first_instance___null_component,
fail_to_add_first_instance___over_max_process,
fail_to_add_first_instance___fail_to_insert_instance_at_start,
fail_to_delete_instance_entry___invalid_process_id,
fail_to_delete_instance_entry___null_component_info,
fail_to_delete_instance_entry___over_max_process_number,
fail_to_delete_instance_entry___over_max_instance,
fail_to_delete_instance_entry___invalid_instance_id,
fail_to_delete_instance_entry___inactive_instance,
fail_to_delete_instance_entry___root_instance,
fail_to_execute_context___null_context,
fail_to_execute_context___null_message,
fail_to_execute_context___translate_null_message,
fail_to_execute_context___last_event_is_not_null,
fail_to_execute_context___translate_message_failed,
fail_to_get_instance_pointer___null_component_info,
fail_to_get_instance_pointer___over_process_id,
fail_to_get_instance_pointer___over_instance_id,
fail_to_get_instance_pointer___null_instance_array,
fail_to_get_instance_pointer___null_instance,
fail_to_populate_state_machine___null_state_machine,
fail_to_populate_state_machine___over_max_service_name,
fail_to_populate_state_machine___null_state_table,
fail_to_populate_state_machine___null_event_description,
fail_to_populate_state_machine___no_event,
fail_to_init_instance_array___non_instance_array,
fail_to_init_instance_array___zero_process,
fail_to_init_instance_array___invalid_max_instance,
fail_to_add_events___null_event,
fail_to_add_events___null_service,
fail_to_add_events___null_instance,
fail_to_add_events___null_event_list,
fail_to_add_events___over_max_process,
fail_to_add_instance_entry___null_component_info,
fail_to_add_instance_entry___over_max_process_number,
fail_to_add_instance_entry___zero_data_size,
fail_to_add_instance_entry___invalid_instance_id,
fail_to_add_instance_entry___null_link,
fail_to_add_instance_entry___fail_to_insert_instance_at_start,
fail_to_delete_instance___invalid_service_id,
fail_to_delete_instance___invalid_process_id,
fail_to_execute_transition_function___null_context,
fail_to_get_free_instance___null_component_info,
fail_to_get_free_instance___no_free_instance,
fail_to_get_free_instance___invalid_service_id,
fail_to_get_instance_data___null_context,
fail_to_get_instance_data___invalid_service_id,
fail_to_get_instance_data___invalid_instance_id,
fail_to_get_instance_data___inactive_instance,
fail_to_handle_saved_events___null_event,
fail_to_handle_saved_events___invalid_service_id,
fail_to_handle_saved_events___invalid_instance_id,
fail_to_handle_saved_events___null_context,
fail_to_handle_saved_events___transition_failed,
fail_to_process_events___null_event,
fail_to_process_events___invalid_process_id,
fail_to_process_events___invalid_instance_id,
fail_to_process_events___over_max_process,
fail_to_process_events___transition_failed,
delete_a_non_empty_event_list,
dirty_count_not_consistent,
fail_to_get_instance_state___null_context,
fail_to_add_instance___out_of_system_memory,
fail_to_init_instance_array___out_of_system_memory,
fail_to_init_context___out_of_system_memory,

 
create___adm_create_failed = 0x1700,
delete___adm_delete_failed = 0x1710,
alloc___adm_alloc_failed = 0x1720,
alloc___adm_switch_cache_failed = 0x1726,
realloc___adm_realloc_failed = 0x172c,
free___adm_free_failed = 0x1730,
free___adm_double_free = 0x1732,
free___adm_footer_corrupted = 0x1740,
free___adm_header_corrupted,
fail___adm_get_a_null_pointer = 0x1750,
delete___adm_delete_null_pool,
alloc___adm_alloc_null_pool,
free___adm_free_null_pool,
realloc___adm_realloc_null_pool,
fail___admid_in_cb_corrupted = 0x1760,
delete___admid_in_cb_corrupted,
alloc___admid_in_cb_corrupted,
free___admid_in_cb_corrupted,
realloc___admid_in_cb_corrupted,
concurrent___adm_concurrent_operation_detected = 0x1770,
fail___adm_get_a_bad_pointer,
get_extheader___no_extheader_on_this_adm = 0x1781,

 
create___afm_create_failed = 0x1800,
delete___afm_delete_failed = 0x1810,
alloc___afm_alloc_failed = 0x1820,
alloc___afm_switch_cache_failed = 0x1826,
free___afm_free_failed = 0x1830,
free___afm_double_free,
free___afm_footer_corrupted = 0x1840,
free___afm_header_corrupted,
alloc___afm_footer_corrupted,
alloc___afm_header_corrupted,
fail___afm_get_a_null_pointer = 0x1850,
fail___afm_delete_null_pool,
fail___afm_alloc_null_pool,
fail___afm_free_null_pool,
fail___afmid_in_cb_corrupted = 0x1860,
delete___afmid_in_cb_corrupted,
alloc___afmid_in_cb_corrupted,
free___afmid_in_cb_corrupted,
concurrent___afm_concurrent_operation_detected = 0x1870,
fail___afm_bad_pointer,





#line 171 "kal\\include\\kal_internal_api.h"
    KAL_ERROR_STRING_END

} kal_error_str;

typedef struct
{
    kal_uint32 param1;
    kal_uint32 param2;
    kal_uint32 param3;
    kal_uint32 param4;
    kal_uint32 param5;
    kal_uint32 param6;
    kal_uint32 param7;
    kal_uint32 param8;
} kal_error_param;

#line 195 "kal\\include\\kal_internal_api.h"


extern void TMC_Timer_Interrupt(void) ;






#line 214 "kal\\include\\kal_internal_api.h"



 
extern char *basename(char *file);



 
void *kal_create_thread_stack(kal_uint32 stack_size, kal_bool in_intsram, kal_uint32 *real_size);
kal_taskid kal_create_task(kal_char *task_name_ptr, kal_uint8 priority, void *stack_addr, kal_uint32 stack_size,                            kal_task_func_ptr entry_func_ptr, void *entry_param_ptr, kal_uint8 options);

void kal_delete_task(kal_taskid task_id);
kal_hisrid kal_create_hisr(kal_char* hisr_name, kal_uint8 priority, kal_uint32 stack_size,                            kal_hisr_func_ptr entry_func, kal_uint8 options);


extern kal_bool stack_is_task_existed(module_type module_id);


 
void kal_delete_msg_q(kal_msgqid queue_id);



 
kal_uint32 kal_take_thread_protect(void);
void kal_give_thread_protect(kal_uint32 v);



 
 
extern void *kal_adm_internal_alloc(KAL_ADM_ID adm_id, kal_uint32 size, char *filename, kal_uint32 line);



 
extern void *kal_sys_mem_alloc(kal_uint32 size);
extern void kal_sys_mem_free(void *ptr);
extern kal_uint32 kal_sys_mem_query_freesize(void);
extern void kal_sys_mem_sort_frags(void);

extern void *kal_debug_mem_alloc(kal_uint32 size);
extern void kal_debug_mem_free(void *p);
extern kal_uint32 kal_debug_mem_query_freesize(void);


kal_poolid kal_create_buff_pool(kal_uint32 buff_size, kal_uint16 num_buffs);
void kal_delete_buff_pool(kal_poolid pool_id);
void *kal_get_buffer(kal_poolid ext_pool_id, kal_uint32  alloc_id, kal_uint32 size, 
                     kal_char* alloc_file, kal_uint32 alloc_line, kal_uint32 caller_addr);
void kal_release_buffer(void *usr_buff, kal_uint32 dealloc_id,
                        kal_char *dealloc_file, kal_uint32 dealloc_line);
kal_uint32 kal_get_num_free_buffs( kal_poolid pool_id );
kal_bool kal_query_ctrlbuf_max_consumption(kal_uint32 *ptr);

kal_uint32 kal_query_ctrlbuf_size_level(void);
kal_uint32 kal_query_ctrlbuf_size(kal_uint32 level);
kal_bool kal_query_ctrlbuf_alloc_num(kal_uint32 *ptr);
kal_bool kal_retrieve_ctrlbuf_info(kal_uint32 level, kal_uint32 index, kal_uint32 *ptr);





 
void kal_evshed_create_pool(void);
void* kal_evshed_get_mem(kal_uint32 size);
void kal_evshed_free_mem(void* buff_ptr);

kal_uint32 kal_check_allowed_sleep_clock(kal_uint32 period_ticks);
void kal_recover_clock(kal_uint32 delayed_ticks);
void kal_invoke_expired_events(kal_uint32 delayed_ticks);





 

 
typedef void (*kal_error_func_ptr)(kal_uint32, kal_uint32);
#line 310 "kal\\include\\kal_internal_api.h"


void kal_register_fatal_error_handler(kal_error_func_ptr fatal_handler_ptr);
void kal_exit(void);

extern void stack_rand_seed(kal_uint32 seed);

#line 1 "nucleus\\inc\\Nucleus.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 













 


 


 




 




 




 


 



 

typedef unsigned long           UNSIGNED;
typedef long                    SIGNED;
typedef unsigned char           DATA_ELEMENT;
typedef DATA_ELEMENT            OPTION;
typedef int                     STATUS;
typedef unsigned char           UNSIGNED_CHAR;
typedef char                    CHAR;
typedef int                     INT;
typedef unsigned long *         UNSIGNED_PTR;
typedef unsigned char *         BYTE_PTR;


typedef char           INT8;  
typedef unsigned char  UINT8; 
typedef signed short   INT16; 
typedef unsigned short UINT16;
typedef signed long    INT32; 
typedef unsigned long  UINT32;




 









 
   





 
   







 








 

#line 214 "nucleus\\inc\\Nucleus.h"

 

typedef struct NU_VECTOR_STRUCT
{
    void       *pointer;
} NU_VECTOR;


 

#line 244 "nucleus\\inc\\Nucleus.h"


 





 

#line 267 "nucleus\\inc\\Nucleus.h"

 

#line 322 "nucleus\\inc\\Nucleus.h"


 










 

#line 345 "nucleus\\inc\\Nucleus.h"


 

#line 414 "nucleus\\inc\\Nucleus.h"



 





 



 



#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\nucleus.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 

#line 1219 "nucleus\\inc\\nucleus.h"

#line 66 "nucleus\\inc\\cs_defs.h"


 





 

typedef struct  CS_NODE_STRUCT
{
    struct CS_NODE_STRUCT  *cs_previous;
    struct CS_NODE_STRUCT  *cs_next;
    DATA_ELEMENT            cs_priority;


    DATA_ELEMENT            cs_padding[3];


}  CS_NODE;




#line 433 "nucleus\\inc\\Nucleus.h"
#line 1 "nucleus\\inc\\tm_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 65 "nucleus\\inc\\tm_defs.h"


 





 

#line 81 "nucleus\\inc\\tm_defs.h"




 

typedef struct TM_TCB_STRUCT 
{
    INT                 tm_timer_type;          
    UNSIGNED            tm_remaining_time;      
    void               *tm_information;         
    struct TM_TCB_STRUCT
                       *tm_next_timer,          
                       *tm_previous_timer;      
} TM_TCB;    


 

typedef struct TM_APP_TCB_STRUCT
{
    CS_NODE             tm_created;             
                                                
    UNSIGNED            tm_id;                  
    CHAR                tm_name[8];   
    void  (*tm_expiration_routine)(UNSIGNED);   
    UNSIGNED            tm_expiration_id;       
    INT                 tm_enabled;             
    UNSIGNED            tm_expirations;         
    UNSIGNED            tm_initial_time;        
    UNSIGNED            tm_reschedule_time;     
    TM_TCB              tm_actual_timer;        
} TM_APP_TCB;



 
   
#line 1 "nucleus\\inc\\tc_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 72 "nucleus\\inc\\tc_defs.h"
#line 1 "nucleus\\inc\\tm_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 65 "nucleus\\inc\\tm_defs.h"


 

#line 122 "nucleus\\inc\\tm_defs.h"


#line 73 "nucleus\\inc\\tc_defs.h"


 





 

#line 92 "nucleus\\inc\\tc_defs.h"

 

typedef struct TC_TCB_STRUCT 
{
    

 
       
    CS_NODE             tc_created;             
                                                
    UNSIGNED            tc_id;                  
    CHAR                tc_name[8];   
    DATA_ELEMENT        tc_status;              
    DATA_ELEMENT        tc_delayed_suspend;     
    DATA_ELEMENT        tc_priority;            
    DATA_ELEMENT        tc_preemption;          
    UNSIGNED            tc_scheduled;           
    UNSIGNED            tc_cur_time_slice;      
    void               *tc_stack_start;         
    void               *tc_stack_end;           
    void               *tc_stack_pointer;       
    UNSIGNED            tc_stack_size;          
    UNSIGNED            tc_stack_minimum;       
    struct TC_PROTECT_STRUCT
                       *tc_current_protect;     
    void               *tc_saved_stack_ptr;     
    UNSIGNED            tc_time_slice;          

    
    

 
    struct TC_TCB_STRUCT
                       *tc_ready_previous,      
                       *tc_ready_next;          
                        
     

    UNSIGNED            tc_priority_group;      
    struct TC_TCB_STRUCT
                      **tc_priority_head;       
    DATA_ELEMENT       *tc_sub_priority_ptr;    
    DATA_ELEMENT        tc_sub_priority;        
    DATA_ELEMENT        tc_saved_status;        
    DATA_ELEMENT        tc_signal_active;       
    

    DATA_ELEMENT        tc_padding[1];


                                                
    void                (*tc_entry)(UNSIGNED, void *);
    UNSIGNED            tc_argc;                
    void               *tc_argv;                
    void                (*tc_cleanup) (void *); 
    void               *tc_cleanup_info;        
    struct TC_PROTECT_STRUCT
                       *tc_suspend_protect;     
                                                

     
    INT                 tc_timer_active;        
    TM_TCB              tc_timer_control;       

     
    
    UNSIGNED            tc_signals;             
    UNSIGNED            tc_enabled_signals;     
    
    
 
    
     
    void                (*tc_signal_handler) (UNSIGNED);

    
 
    UNSIGNED            tc_system_reserved_1;   
    UNSIGNED            tc_system_reserved_2;   
    UNSIGNED            tc_system_reserved_3;   
    UNSIGNED            tc_app_reserved_1;      

} TC_TCB;    


 

typedef struct TC_HCB_STRUCT 
{
    

 
       
    CS_NODE             tc_created;             
                                                
    UNSIGNED            tc_id;                  
    CHAR                tc_name[8];   
    DATA_ELEMENT        tc_not_used_1;          
    DATA_ELEMENT        tc_not_used_2;          
    DATA_ELEMENT        tc_priority;            
    DATA_ELEMENT        tc_not_used_3;          
    UNSIGNED            tc_scheduled;           
    UNSIGNED            tc_cur_time_slice;      
    void               *tc_stack_start;         
    void               *tc_stack_end;           
    void               *tc_stack_pointer;       
    UNSIGNED            tc_stack_size;          
    UNSIGNED            tc_stack_minimum;       
    struct TC_PROTECT_STRUCT
                       *tc_current_protect;     
    struct TC_HCB_STRUCT
                       *tc_active_next;         
    
    

 
    UNSIGNED            tc_activation_count;    
    void                (*tc_entry)(void);      

    
 
    UNSIGNED            tc_system_reserved_1;   
    UNSIGNED            tc_system_reserved_2;   
    UNSIGNED            tc_system_reserved_3;   
    UNSIGNED            tc_app_reserved_1;      

} TC_HCB;    


 

typedef struct TC_PROTECT_STRUCT
{
    TC_TCB             *tc_tcb_pointer;         
    UNSIGNED            tc_thread_waiting;      
} TC_PROTECT;




#line 120 "nucleus\\inc\\tm_defs.h"




#line 434 "nucleus\\inc\\Nucleus.h"
#line 1 "nucleus\\inc\\tc_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 72 "nucleus\\inc\\tc_defs.h"
#line 1 "nucleus\\inc\\tm_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 65 "nucleus\\inc\\tm_defs.h"


 

#line 122 "nucleus\\inc\\tm_defs.h"


#line 73 "nucleus\\inc\\tc_defs.h"


 

#line 231 "nucleus\\inc\\tc_defs.h"


#line 435 "nucleus\\inc\\Nucleus.h"
#line 1 "nucleus\\inc\\mb_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 67 "nucleus\\inc\\mb_defs.h"
#line 1 "nucleus\\inc\\tc_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 72 "nucleus\\inc\\tc_defs.h"
#line 1 "nucleus\\inc\\tm_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 65 "nucleus\\inc\\tm_defs.h"


 

#line 122 "nucleus\\inc\\tm_defs.h"


#line 73 "nucleus\\inc\\tc_defs.h"


 

#line 231 "nucleus\\inc\\tc_defs.h"


#line 68 "nucleus\\inc\\mb_defs.h"


 





 





 

typedef struct MB_MCB_STRUCT 
{
    CS_NODE             mb_created;             
                                                
    UNSIGNED            mb_id;                  
    CHAR                mb_name[8];   
    DATA_ELEMENT        mb_message_present;     
    DATA_ELEMENT        mb_fifo_suspend;        

    DATA_ELEMENT        mb_padding[2];

    UNSIGNED            mb_tasks_waiting;       
    UNSIGNED                                    
                        mb_message_area[4];
    struct MB_SUSPEND_STRUCT
                       *mb_suspension_list;     
} MB_MCB;    



 
   
typedef struct MB_SUSPEND_STRUCT
{
    CS_NODE             mb_suspend_link;        
    MB_MCB             *mb_mailbox;             
    TC_TCB             *mb_suspended_task;      
    UNSIGNED           *mb_message_area;        
    STATUS              mb_return_status;       
} MB_SUSPEND;




#line 436 "nucleus\\inc\\Nucleus.h"
#line 1 "nucleus\\inc\\qu_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 66 "nucleus\\inc\\qu_defs.h"
#line 1 "nucleus\\inc\\tc_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 72 "nucleus\\inc\\tc_defs.h"
#line 1 "nucleus\\inc\\tm_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 65 "nucleus\\inc\\tm_defs.h"


 

#line 122 "nucleus\\inc\\tm_defs.h"


#line 73 "nucleus\\inc\\tc_defs.h"


 

#line 231 "nucleus\\inc\\tc_defs.h"


#line 67 "nucleus\\inc\\qu_defs.h"


 





 




 

typedef struct QU_QCB_STRUCT 
{
    CS_NODE             qu_created;             
                                                
    UNSIGNED            qu_id;                  
    CHAR                qu_name[8];   
    DATA_ELEMENT        qu_fixed_size;          
    DATA_ELEMENT        qu_fifo_suspend;        

    DATA_ELEMENT        qu_padding[2];

    UNSIGNED            qu_queue_size;          
    UNSIGNED            qu_messages;            
    UNSIGNED            qu_message_size;        
    UNSIGNED            qu_available;           
    UNSIGNED_PTR        qu_start;               
    UNSIGNED_PTR        qu_end;                 
    UNSIGNED_PTR        qu_read;                
    UNSIGNED_PTR        qu_write;               
    UNSIGNED            qu_tasks_waiting;       
    struct QU_SUSPEND_STRUCT
                       *qu_urgent_list;         
    struct QU_SUSPEND_STRUCT
                       *qu_suspension_list;     
} QU_QCB;    



 
   
typedef struct QU_SUSPEND_STRUCT
{
    CS_NODE             qu_suspend_link;        
    QU_QCB             *qu_queue;               
    TC_TCB             *qu_suspended_task;      
    UNSIGNED_PTR        qu_message_area;        
    UNSIGNED            qu_message_size;        
    UNSIGNED            qu_actual_size;         
    STATUS              qu_return_status;       
} QU_SUSPEND;




#line 437 "nucleus\\inc\\Nucleus.h"
#line 1 "nucleus\\inc\\pi_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 66 "nucleus\\inc\\pi_defs.h"
#line 1 "nucleus\\inc\\tc_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 72 "nucleus\\inc\\tc_defs.h"
#line 1 "nucleus\\inc\\tm_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 65 "nucleus\\inc\\tm_defs.h"


 

#line 122 "nucleus\\inc\\tm_defs.h"


#line 73 "nucleus\\inc\\tc_defs.h"


 

#line 231 "nucleus\\inc\\tc_defs.h"


#line 67 "nucleus\\inc\\pi_defs.h"


 





 




 

typedef struct PI_PCB_STRUCT 
{
    CS_NODE             pi_created;             
                                                
    UNSIGNED            pi_id;                  
    CHAR                pi_name[8];   
    DATA_ELEMENT        pi_fixed_size;          
    DATA_ELEMENT        pi_fifo_suspend;        

    DATA_ELEMENT        pi_padding[2];

    UNSIGNED            pi_pipe_size;           
    UNSIGNED            pi_messages;            
    UNSIGNED            pi_message_size;        
    UNSIGNED            pi_available;           
    BYTE_PTR            pi_start;               
    BYTE_PTR            pi_end;                 
    BYTE_PTR            pi_read;                
    BYTE_PTR            pi_write;               
    UNSIGNED            pi_tasks_waiting;       
    struct PI_SUSPEND_STRUCT
                       *pi_urgent_list;         
    struct PI_SUSPEND_STRUCT
                       *pi_suspension_list;     
} PI_PCB;    



 
   
typedef struct PI_SUSPEND_STRUCT
{
    CS_NODE             pi_suspend_link;        
    PI_PCB             *pi_pipe;                
    TC_TCB             *pi_suspended_task;      
    BYTE_PTR            pi_message_area;        
    UNSIGNED            pi_message_size;        
    UNSIGNED            pi_actual_size;         
    STATUS              pi_return_status;       
} PI_SUSPEND;




#line 438 "nucleus\\inc\\Nucleus.h"
#line 1 "nucleus\\inc\\sm_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 66 "nucleus\\inc\\sm_defs.h"
#line 1 "nucleus\\inc\\tc_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 72 "nucleus\\inc\\tc_defs.h"
#line 1 "nucleus\\inc\\tm_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 65 "nucleus\\inc\\tm_defs.h"


 

#line 122 "nucleus\\inc\\tm_defs.h"


#line 73 "nucleus\\inc\\tc_defs.h"


 

#line 231 "nucleus\\inc\\tc_defs.h"


#line 67 "nucleus\\inc\\sm_defs.h"


 





 




 

typedef struct SM_SCB_STRUCT 
{
    CS_NODE             sm_created;             
                                                
    UNSIGNED            sm_id;                  
    CHAR                sm_name[8];   
    UNSIGNED            sm_semaphore_count;     
    DATA_ELEMENT        sm_fifo_suspend;        

    DATA_ELEMENT        sm_padding[3];

    UNSIGNED            sm_tasks_waiting;       
    struct SM_SUSPEND_STRUCT
                       *sm_suspension_list;     
} SM_SCB;    



 
   
typedef struct SM_SUSPEND_STRUCT
{
    CS_NODE             sm_suspend_link;        
    SM_SCB             *sm_semaphore;           
    TC_TCB             *sm_suspended_task;      
    STATUS              sm_return_status;       
} SM_SUSPEND;




#line 439 "nucleus\\inc\\Nucleus.h"
#line 1 "nucleus\\inc\\ev_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 66 "nucleus\\inc\\ev_defs.h"
#line 1 "nucleus\\inc\\tc_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 72 "nucleus\\inc\\tc_defs.h"
#line 1 "nucleus\\inc\\tm_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 65 "nucleus\\inc\\tm_defs.h"


 

#line 122 "nucleus\\inc\\tm_defs.h"


#line 73 "nucleus\\inc\\tc_defs.h"


 

#line 231 "nucleus\\inc\\tc_defs.h"


#line 67 "nucleus\\inc\\ev_defs.h"


 





 






 

typedef struct EV_GCB_STRUCT 
{
    CS_NODE             ev_created;             
                                                
    UNSIGNED            ev_id;                  
    CHAR                ev_name[8];   
    UNSIGNED            ev_current_events;      
    UNSIGNED            ev_tasks_waiting;       
    struct EV_SUSPEND_STRUCT
                       *ev_suspension_list;     
} EV_GCB;    



 
   
typedef struct EV_SUSPEND_STRUCT
{
    CS_NODE             ev_suspend_link;        
    EV_GCB             *ev_event_group;         
    UNSIGNED            ev_requested_events;    
    DATA_ELEMENT        ev_operation;           

    DATA_ELEMENT        ev_padding[3];

    TC_TCB             *ev_suspended_task;      
    STATUS              ev_return_status;       
    UNSIGNED            ev_actual_events;       
} EV_SUSPEND;




#line 440 "nucleus\\inc\\Nucleus.h"
#line 1 "nucleus\\inc\\pm_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 67 "nucleus\\inc\\pm_defs.h"
#line 1 "nucleus\\inc\\tc_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 72 "nucleus\\inc\\tc_defs.h"
#line 1 "nucleus\\inc\\tm_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 65 "nucleus\\inc\\tm_defs.h"


 

#line 122 "nucleus\\inc\\tm_defs.h"


#line 73 "nucleus\\inc\\tc_defs.h"


 

#line 231 "nucleus\\inc\\tc_defs.h"


#line 68 "nucleus\\inc\\pm_defs.h"


 





 







 

typedef struct PM_PCB_STRUCT 
{
    CS_NODE             pm_created;             
                                                
    UNSIGNED            pm_id;                  
    CHAR                pm_name[8];   
    void               *pm_start_address;       
    UNSIGNED            pm_pool_size;           
    UNSIGNED            pm_partition_size;      
    UNSIGNED            pm_available;           
    UNSIGNED            pm_allocated;           
    struct PM_HEADER_STRUCT    
                       *pm_available_list;      
    DATA_ELEMENT        pm_fifo_suspend;        

    DATA_ELEMENT        pm_padding[3];

    UNSIGNED            pm_tasks_waiting;       
    struct PM_SUSPEND_STRUCT
                       *pm_suspension_list;     
} PM_PCB;    


 

typedef struct PM_HEADER_STRUCT
{
    struct PM_HEADER_STRUCT
                       *pm_next_available;      
                                                
    PM_PCB             *pm_partition_pool;      
} PM_HEADER;



 
   
typedef struct PM_SUSPEND_STRUCT
{
    CS_NODE             pm_suspend_link;        
    PM_PCB             *pm_partition_pool;      
    TC_TCB             *pm_suspended_task;      
    void               *pm_return_pointer;      
    STATUS              pm_return_status;       
} PM_SUSPEND;




#line 441 "nucleus\\inc\\Nucleus.h"
#line 1 "nucleus\\inc\\dm_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 70 "nucleus\\inc\\dm_defs.h"
#line 1 "nucleus\\inc\\tc_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 72 "nucleus\\inc\\tc_defs.h"
#line 1 "nucleus\\inc\\tm_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 1 "nucleus\\inc\\cs_defs.h"
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

#line 66 "nucleus\\inc\\cs_defs.h"


 
#line 89 "nucleus\\inc\\cs_defs.h"


#line 65 "nucleus\\inc\\tm_defs.h"


 

#line 122 "nucleus\\inc\\tm_defs.h"


#line 73 "nucleus\\inc\\tc_defs.h"


 

#line 231 "nucleus\\inc\\tc_defs.h"


#line 71 "nucleus\\inc\\dm_defs.h"


 





 







 

typedef struct DM_PCB_STRUCT 
{
    CS_NODE             dm_created;             
                                                
    TC_PROTECT          dm_protect;             
    UNSIGNED            dm_id;                  
    CHAR                dm_name[8];   
    void               *dm_start_address;       
    UNSIGNED            dm_pool_size;           
    UNSIGNED            dm_min_allocation;      
    UNSIGNED            dm_available;           
    struct DM_HEADER_STRUCT    
                       *dm_memory_list;         
    struct DM_HEADER_STRUCT
                       *dm_search_ptr;          
    DATA_ELEMENT        dm_fifo_suspend;        

    DATA_ELEMENT        dm_padding[3];

    UNSIGNED            dm_tasks_waiting;       
    struct DM_SUSPEND_STRUCT
                       *dm_suspension_list;     
} DM_PCB;    


 

typedef struct DM_HEADER_STRUCT
{
    struct DM_HEADER_STRUCT
                       *dm_next_memory,         
                       *dm_previous_memory;     
    DATA_ELEMENT        dm_memory_free;         

    DATA_ELEMENT        dm_padding[3];

    DM_PCB             *dm_memory_pool;         
} DM_HEADER;



 
   
typedef struct DM_SUSPEND_STRUCT
{
    CS_NODE             dm_suspend_link;        
    DM_PCB             *dm_memory_pool;         
    UNSIGNED            dm_request_size;        
    TC_TCB             *dm_suspended_task;      
    void               *dm_return_pointer;      
    STATUS              dm_return_status;       
} DM_SUSPEND;




#line 442 "nucleus\\inc\\Nucleus.h"




#line 455 "nucleus\\inc\\Nucleus.h"


 
typedef TC_TCB      NU_TASK;




#line 472 "nucleus\\inc\\Nucleus.h"


 
typedef TC_HCB      NU_HISR;




#line 489 "nucleus\\inc\\Nucleus.h"


 
typedef MB_MCB      NU_MAILBOX;


 

#line 506 "nucleus\\inc\\Nucleus.h"


 
typedef QU_QCB      NU_QUEUE;




#line 523 "nucleus\\inc\\Nucleus.h"


 
typedef PI_PCB      NU_PIPE;




#line 540 "nucleus\\inc\\Nucleus.h"


 
typedef SM_SCB      NU_SEMAPHORE;




#line 557 "nucleus\\inc\\Nucleus.h"


 
typedef EV_GCB      NU_EVENT_GROUP;




#line 574 "nucleus\\inc\\Nucleus.h"


 
typedef PM_PCB      NU_PARTITION_POOL;




#line 591 "nucleus\\inc\\Nucleus.h"


 
typedef DM_PCB      NU_MEMORY_POOL;




#line 608 "nucleus\\inc\\Nucleus.h"


 
typedef TM_APP_TCB      NU_TIMER;




#line 625 "nucleus\\inc\\Nucleus.h"


 
typedef TC_PROTECT      NU_PROTECT;




 

struct NU_INITIALIZE_STRUCT
{
    void       *nu_io_address;               
    UNSIGNED    nu_logical_units;            
    void       *nu_memory;                   
    INT         nu_vector;                   
};

struct NU_ASSIGN_STRUCT
{
    UNSIGNED    nu_logical_unit;             
    INT         nu_assign_info;              
};

struct NU_RELEASE_STRUCT
{
    UNSIGNED    nu_logical_unit;             
    INT         nu_release_info;             
};

struct NU_INPUT_STRUCT
{
    UNSIGNED    nu_logical_unit;             
    UNSIGNED    nu_offset;                   
    UNSIGNED    nu_request_size;             
    UNSIGNED    nu_actual_size;              
    void       *nu_buffer_ptr;               
};

struct NU_OUTPUT_STRUCT
{
    UNSIGNED    nu_logical_unit;             
    UNSIGNED    nu_offset;                   
    UNSIGNED    nu_request_size;             
    UNSIGNED    nu_actual_size;              
    void       *nu_buffer_ptr;               
};

struct NU_STATUS_STRUCT
{
    UNSIGNED    nu_logical_unit;             
    void       *nu_extra_status;             
};

struct NU_TERMINATE_STRUCT
{
    UNSIGNED    nu_logical_unit;             
};


typedef struct NU_DRIVER_REQUEST_STRUCT
{
    INT         nu_function;                 
    UNSIGNED    nu_timeout;                  
    STATUS      nu_status;                   
    UNSIGNED    nu_supplemental;             
    void       *nu_supplemental_ptr;         
    
     
    union NU_REQUEST_INFO_UNION
    {
        struct NU_INITIALIZE_STRUCT     nu_initialize;
        struct NU_ASSIGN_STRUCT         nu_assign;
        struct NU_RELEASE_STRUCT        nu_release;
        struct NU_INPUT_STRUCT          nu_input;
        struct NU_OUTPUT_STRUCT         nu_output;
        struct NU_STATUS_STRUCT         nu_status;
        struct NU_TERMINATE_STRUCT      nu_terminate;
    } nu_request_info;
    
} NU_DRIVER_REQUEST;

typedef struct NU_DRIVER_STRUCT
{
    UNSIGNED       words[3];       
    CHAR           nu_driver_name[8];
    void          *nu_info_ptr;
    UNSIGNED       nu_driver_id;
    void           (*nu_driver_entry)(struct NU_DRIVER_STRUCT *,
                                                NU_DRIVER_REQUEST *);
} NU_DRIVER;



 

void            Application_Initialize(void *first_available_memory);



 



 
#line 963 "nucleus\\inc\\Nucleus.h"


 

STATUS          TCCE_Create_Task(NU_TASK *task, CHAR *name, 
                        void (*task_entry)(UNSIGNED, void *), UNSIGNED argc,
                        void *argv, void *stack_address, UNSIGNED stack_size,
                        OPTION priority, UNSIGNED time_slice, 
                        OPTION preempt, OPTION auto_start);
STATUS          TCCE_Delete_Task(NU_TASK *task);
STATUS          TCCE_Reset_Task(NU_TASK *task, UNSIGNED argc, void *argv);
STATUS          TCCE_Terminate_Task(NU_TASK *task);
STATUS          TCCE_Resume_Service(NU_TASK *task);
STATUS          TCCE_Suspend_Service(NU_TASK *task);
void            TCCE_Relinquish(void);
void            TCCE_Task_Sleep(UNSIGNED ticks);
OPTION          TCSE_Change_Priority(NU_TASK *task, OPTION new_priority);
OPTION          TCSE_Change_Preemption(OPTION preempt);
UNSIGNED        TCSE_Change_Time_Slice(NU_TASK *task, UNSIGNED time_slice);
UNSIGNED        TCT_Check_Stack(void);
NU_TASK        *TCC_Current_Task_Pointer(void);
UNSIGNED        TCF_Established_Tasks(void);
STATUS          TCF_Task_Information(NU_TASK *task, CHAR *name, 
                        DATA_ELEMENT *status, UNSIGNED *scheduled_count,
                        OPTION *priority, OPTION *preempt,
                        UNSIGNED *time_slice, void **stack_base,
                        UNSIGNED *stack_size, UNSIGNED *minimum_stack);
UNSIGNED        TCF_Task_Pointers(NU_TASK **pointer_list, 
                                                UNSIGNED maximum_pointers);

 

STATUS          MBCE_Create_Mailbox(NU_MAILBOX *mailbox, CHAR *name, 
                                                OPTION suspend_type);
STATUS          MBCE_Delete_Mailbox(NU_MAILBOX *mailbox);
STATUS          MBSE_Reset_Mailbox(NU_MAILBOX *mailbox);
STATUS          MBCE_Send_To_Mailbox(NU_MAILBOX *mailbox, void *message, 
                                                        UNSIGNED suspend);
STATUS          MBSE_Broadcast_To_Mailbox(NU_MAILBOX *mailbox, void *message,
                                                        UNSIGNED suspend);
STATUS          MBCE_Receive_From_Mailbox(NU_MAILBOX *mailbox, void *message,
                                                        UNSIGNED suspend);
UNSIGNED        MBF_Established_Mailboxes(void);
STATUS          MBF_Mailbox_Information(NU_MAILBOX *mailbox, CHAR *name, 
                  OPTION *suspend_type, OPTION *message_present,
                  UNSIGNED *tasks_waiting, NU_TASK **first_task);
UNSIGNED        MBF_Mailbox_Pointers(NU_MAILBOX **pointer_list,
                                                UNSIGNED maximum_pointers);

 

STATUS          QUCE_Create_Queue(NU_QUEUE *queue, CHAR *name, 
                      void *start_address, UNSIGNED queue_size, 
                      OPTION message_type, UNSIGNED message_size,
                      OPTION suspend_type);
STATUS          QUCE_Delete_Queue(NU_QUEUE *queue);
STATUS          QUSE_Reset_Queue(NU_QUEUE *queue);
STATUS          QUSE_Send_To_Front_Of_Queue(NU_QUEUE *queue, void *message, 
                                        UNSIGNED size, UNSIGNED suspend);
STATUS          QUCE_Send_To_Queue(NU_QUEUE *queue, void *message, 
                                        UNSIGNED size, UNSIGNED suspend);
STATUS          QUSE_Broadcast_To_Queue(NU_QUEUE *queue, void *message, 
                                        UNSIGNED size, UNSIGNED suspend);
STATUS          QUCE_Receive_From_Queue(NU_QUEUE *queue, void *message,
                      UNSIGNED size, UNSIGNED *actual_size, UNSIGNED suspend);
UNSIGNED        QUF_Established_Queues(void);
STATUS          QUF_Queue_Information(NU_QUEUE *queue, CHAR *name, 
                  void **start_address, UNSIGNED *queue_size, 
                  UNSIGNED *available, UNSIGNED *messages, 
                  OPTION *message_type, UNSIGNED *message_size,
                  OPTION *suspend_type, UNSIGNED *tasks_waiting,
                  NU_TASK **first_task);
UNSIGNED        QUF_Queue_Pointers(NU_QUEUE **pointer_list, 
                                                UNSIGNED maximum_pointers);

 

STATUS          PICE_Create_Pipe(NU_PIPE *pipe, CHAR *name, 
                      void *start_address, UNSIGNED pipe_size, 
                      OPTION message_type, UNSIGNED message_size,
                      OPTION suspend_type);
STATUS          PICE_Delete_Pipe(NU_PIPE *pipe);
STATUS          PISE_Reset_Pipe(NU_PIPE *pipe);
STATUS          PISE_Send_To_Front_Of_Pipe(NU_PIPE *pipe, void *message, 
                                        UNSIGNED size, UNSIGNED suspend);
STATUS          PICE_Send_To_Pipe(NU_PIPE *pipe, void *message, 
                                        UNSIGNED size, UNSIGNED suspend);
STATUS          PISE_Broadcast_To_Pipe(NU_PIPE *pipe, void *message, 
                                        UNSIGNED size, UNSIGNED suspend);
STATUS          PICE_Receive_From_Pipe(NU_PIPE *pipe, void *message,
                      UNSIGNED size, UNSIGNED *actual_size, UNSIGNED suspend);
UNSIGNED        PIF_Established_Pipes(void);
STATUS          PIF_Pipe_Information(NU_PIPE *pipe, CHAR *name, 
                  void **start_address, UNSIGNED *pipe_size, 
                  UNSIGNED *available, UNSIGNED *messages, 
                  OPTION *message_type, UNSIGNED *message_size,
                  OPTION *suspend_type, UNSIGNED *tasks_waiting,
                  NU_TASK **first_task);
UNSIGNED        PIF_Pipe_Pointers(NU_PIPE **pointer_list, 
                                                UNSIGNED maximum_pointers);

 

STATUS          SMCE_Create_Semaphore(NU_SEMAPHORE *semaphore, CHAR *name, 
                        UNSIGNED initial_count, OPTION suspend_type);
STATUS          SMCE_Delete_Semaphore(NU_SEMAPHORE *semaphore);
STATUS          SMSE_Reset_Semaphore(NU_SEMAPHORE *semaphore, 
                                        UNSIGNED initial_count);
STATUS          SMCE_Obtain_Semaphore(NU_SEMAPHORE *semaphore, UNSIGNED suspend);
STATUS          SMCE_Release_Semaphore(NU_SEMAPHORE *semaphore);
UNSIGNED        SMF_Established_Semaphores(void);
STATUS          SMF_Semaphore_Information(NU_SEMAPHORE *semaphore, CHAR *name, 
                  UNSIGNED *current_count, OPTION *suspend_type, 
                  UNSIGNED *tasks_waiting, NU_TASK **first_task);
UNSIGNED        SMF_Semaphore_Pointers(NU_SEMAPHORE **pointer_list, 
                                                UNSIGNED maximum_pointers);
                                                
 

STATUS          EVCE_Create_Event_Group(NU_EVENT_GROUP *group, CHAR *name);
STATUS          EVCE_Delete_Event_Group(NU_EVENT_GROUP *group);
STATUS          EVCE_Set_Events(NU_EVENT_GROUP *group, UNSIGNED events, 
                                                OPTION operation);
STATUS          EVCE_Retrieve_Events(NU_EVENT_GROUP *group, 
                        UNSIGNED requested_flags, OPTION operation, 
                        UNSIGNED *retrieved_flags, UNSIGNED suspend);
UNSIGNED        EVF_Established_Event_Groups(void);
STATUS          EVF_Event_Group_Information(NU_EVENT_GROUP *group, CHAR *name, 
                  UNSIGNED *event_flags, UNSIGNED *tasks_waiting, 
                  NU_TASK **first_task);
UNSIGNED        EVF_Event_Group_Pointers(NU_EVENT_GROUP **pointer_list, 
                                                UNSIGNED maximum_pointers);

 

UNSIGNED        TCSE_Control_Signals(UNSIGNED signal_enable_mask);
UNSIGNED        TCSE_Receive_Signals(void);
STATUS          TCSE_Register_Signal_Handler(void (*signal_handler)(UNSIGNED));
STATUS          TCSE_Send_Signals(NU_TASK *task, UNSIGNED signals);

 
                                                
STATUS          PMCE_Create_Partition_Pool(NU_PARTITION_POOL *pool, CHAR *name, 
                        void *start_address, UNSIGNED pool_size,
                        UNSIGNED partition_size, OPTION suspend_type);
STATUS          PMCE_Delete_Partition_Pool(NU_PARTITION_POOL *pool);
STATUS          PMCE_Allocate_Partition(NU_PARTITION_POOL *pool, 
                                void **return_pointer, UNSIGNED suspend);
STATUS          PMCE_Deallocate_Partition(void *partition);
UNSIGNED        PMF_Established_Partition_Pools(void);
STATUS          PMF_Partition_Pool_Information(NU_PARTITION_POOL *pool, 
                        CHAR *name, 
                  void **start_address, UNSIGNED *pool_size,
                  UNSIGNED *partition_size, UNSIGNED *available,
                  UNSIGNED *allocated, OPTION *suspend_type, 
                  UNSIGNED *tasks_waiting, NU_TASK **first_task);
UNSIGNED        PMF_Partition_Pool_Pointers(NU_PARTITION_POOL **pointer_list, 
                                                UNSIGNED maximum_pointers);

 

STATUS          DMCE_Create_Memory_Pool(NU_MEMORY_POOL *pool, CHAR *name, 
                        void *start_address, UNSIGNED pool_size,
                        UNSIGNED min_allocation, OPTION suspend_type);
STATUS          DMCE_Delete_Memory_Pool(NU_MEMORY_POOL *pool);
STATUS          DMCE_Allocate_Memory(NU_MEMORY_POOL *pool, void **return_pointer,
                                UNSIGNED size, UNSIGNED suspend);
STATUS          DMCE_Deallocate_Memory(void *memory);
UNSIGNED        DMF_Established_Memory_Pools(void);
STATUS          DMF_Memory_Pool_Information(NU_MEMORY_POOL *pool, CHAR *name, 
                  void **start_address, UNSIGNED *pool_size,
                  UNSIGNED *min_allocation, UNSIGNED *available,
                  OPTION *suspend_type, UNSIGNED *tasks_waiting, 
                  NU_TASK **first_task);
UNSIGNED        DMF_Memory_Pool_Pointers(NU_MEMORY_POOL **pointer_list, 
                                                UNSIGNED maximum_pointers);

 

INT             TCT_Control_Interrupts(INT new_level);
INT             TCT_Local_Control_Interrupts(INT new_level);
void            TCT_Restore_Interrupts(void);
void           *INT_Setup_Vector(INT vector, void *new_vector);
STATUS          TCC_Register_LISR(INT vector, 
                                void (*new_lisr)(INT),
                                        void (**old_lisr)(INT));
STATUS          TCCE_Activate_HISR(NU_HISR *hisr);
STATUS          TCCE_Create_HISR(NU_HISR *hisr, CHAR *name,
                        void (*hisr_entry)(void), OPTION priority,
                        void *stack_address, UNSIGNED stack_size);
STATUS          TCCE_Delete_HISR(NU_HISR *hisr);
NU_HISR        *TCC_Current_HISR_Pointer(void);
UNSIGNED        TCF_Established_HISRs(void);
STATUS          TCF_HISR_Information(NU_HISR *hisr, CHAR *name,
                        UNSIGNED *scheduled_count, DATA_ELEMENT *priority,
                        void **stack_base, UNSIGNED *stack_size,
                        UNSIGNED *minimum_stack);
UNSIGNED        TCF_HISR_Pointers(NU_HISR **pointer_list,
                                                UNSIGNED maximum_pointers);
void            TCT_Protect(NU_PROTECT *protect_struct);
void            TCT_Unprotect(void);

 

STATUS          TMSE_Create_Timer(NU_TIMER *timer, CHAR *name, 
                        void (*expiration_routine)(UNSIGNED), UNSIGNED id,
                        UNSIGNED initial_time, UNSIGNED reschedule_time,
                        OPTION enable);
STATUS          TMSE_Delete_Timer(NU_TIMER *timer);
STATUS          TMSE_Reset_Timer(NU_TIMER *timer, 
                        void (*expiration_routine)(UNSIGNED), 
                        UNSIGNED initial_time, UNSIGNED reschedule_timer,
                        OPTION enable);
STATUS          TMSE_Control_Timer(NU_TIMER *timer, OPTION enable);
UNSIGNED        TMF_Established_Timers(void);
STATUS          TMF_Timer_Information(NU_TIMER *timer, CHAR *name, 
                  OPTION *enable, UNSIGNED *expirations, UNSIGNED *id,
                  UNSIGNED *initial_time, UNSIGNED *reschedule_time);
UNSIGNED        TMF_Timer_Pointers(NU_TIMER **pointer_list, 
                                                UNSIGNED maximum_pointers);
void            TMT_Set_Clock(UNSIGNED new_value);
UNSIGNED        TMT_Retrieve_Clock(void);

 

CHAR           *RLC_Release_Information(void);
CHAR           *LIC_License_Information(void);
void            HIC_Disable_History_Saving(void);
void            HIC_Enable_History_Saving(void);
void            HIC_Make_History_Entry_Service(UNSIGNED param1, UNSIGNED param2,
                                                UNSIGNED param3);
STATUS          HIC_Retrieve_History_Entry(DATA_ELEMENT *id, 
                        UNSIGNED *param1, UNSIGNED *param2, UNSIGNED *param3,
                        UNSIGNED *time, NU_TASK **task, NU_HISR **hisr);

 

STATUS          IOCE_Create_Driver(NU_DRIVER *driver, CHAR *name, 
                    void (*driver_entry)(NU_DRIVER *, NU_DRIVER_REQUEST *));
STATUS          IOCE_Delete_Driver(NU_DRIVER *driver);
STATUS          IOCE_Request_Driver(NU_DRIVER *driver, 
                                                NU_DRIVER_REQUEST *request);
STATUS          IOCE_Resume_Driver(NU_TASK *task);
STATUS          IOCE_Suspend_Driver(void (*terminate_routine)(void *),
                                        void *information, UNSIGNED timeout);
UNSIGNED        IOF_Established_Drivers(void);
UNSIGNED        IOF_Driver_Pointers(NU_DRIVER **pointer_list, 
                                                UNSIGNED maximum_pointers);









#line 319 "kal\\include\\kal_internal_api.h"








#line 348 "kal\\include\\kal_internal_api.h"

#line 398 "kal\\include\\kal_internal_api.h"

#line 1 "kal\\nucleus\\include\\kal_nucleus_common_defs.h"

































 








































































 







 








 
 
 























 
 
typedef NU_TASK               kal_os_task_type;
typedef NU_HISR               kal_os_hisr_type;
typedef NU_QUEUE              kal_os_queue_type;
typedef NU_SEMAPHORE          kal_os_mutex_type;
typedef NU_SEMAPHORE          kal_os_sem_type;
typedef NU_EVENT_GROUP        kal_os_eventgrp_type;
typedef NU_TIMER              kal_os_timer_type;
typedef NU_PARTITION_POOL     kal_os_pool_type;

 
 
typedef void (*kal_nu_task_func_ptr) (UNSIGNED, void *);
typedef void (*kal_nu_hisr_func_ptr) (void);
typedef void (*kal_nu_timer_func_ptr) (UNSIGNED);

typedef struct {
   struct kal_int_pool_struct*  pool_id;
   void *                       start_address;
   void *                      end_address;
} kal_buff_pool_info;



 



 







#line 401 "kal\\include\\kal_internal_api.h"
#line 1 "kal\\nucleus\\include\\kal_nucleus.h"

































 




























































































































































































 







 








 




















struct kal_int_enhmutex;
struct kal_int_enhmutex_suspend;



 


typedef struct kal_int_task_struct {
   kal_os_task_type task_id;
   kal_char *task_name;
   kal_uint16 task_index;
   kal_uint16 task_enhmutex_count;
   kal_uint32 priority_record;
   struct kal_int_enhmutex_suspend *task_enhmutex_blockon;
} *kal_internal_taskid, kal_task_type;

typedef struct kal_int_hisr_struct {
   kal_os_hisr_type hisr_id;
   kal_char *hisr_name;
   kal_uint16 hisr_index;
} *kal_internal_hisrid, kal_hisr_type;

#line 300 "kal\\nucleus\\include\\kal_nucleus.h"




 
#line 320 "kal\\nucleus\\include\\kal_nucleus.h"

typedef struct {
   kal_os_queue_type    queue_id;
   kal_uint16           max_msg_size;
}* kal_internal_msgqid, kal_queue_type;



typedef struct {
   kal_os_mutex_type    mutex_id;
   kal_os_task_type     *owner_task;
   kal_mutex_state      mutex_state;
} *kal_internal_mutexid, kal_mutex_type;

typedef kal_os_sem_type *kal_internal_semid, kal_sem_type;

typedef kal_os_eventgrp_type *kal_internal_eventgrpid, kal_eventgrp_type;




 
#line 370 "kal\\nucleus\\include\\kal_nucleus.h"

typedef struct {
   kal_os_timer_type       timer_id;
   kal_timer_func_ptr      func_ptr;
   void *                  timer_param_ptr;
   kal_uint32              set_time;
} * kal_internal_timerid, kal_timer_type;



typedef enum {
   NO_TIMER,
   UNLIMITED_SLEEP_TIME,
   LIMITED_SLEEP_TIME
} kal_sleep_state;

typedef struct
{
    kal_uint32 sleep_time;
    kal_uint32 first_timer_time;
    kal_sleep_state sleep_status;
}Sleep_Time;









 


typedef struct kal_int_pool_struct {
   kal_os_pool_type        pool_id;
   kal_uint32              buff_size;
   struct kal_int_pool_statistics_struct    *pool_stat;




} *kal_internal_poolid, kal_pool_type;

#line 421 "kal\\nucleus\\include\\kal_nucleus.h"




struct kal_int_enhmutex_suspend {
     
     
     
    struct kal_int_enhmutex_suspend *emts_prev;
    struct kal_int_enhmutex_suspend *emts_next;
    
    struct kal_int_enhmutex *emts_mutex;
    kal_internal_taskid  emts_task;
};

typedef struct kal_int_enhmutex {
     
     
     
    struct kal_int_enhmutex_suspend *emtx_prev;
    struct kal_int_enhmutex_suspend *emtx_next;
    
    kal_uint8    emtx_max_wprio;           
    kal_uint16   emtx_suspension_count;    
    kal_internal_taskid emtx_ownertask;
    
     
    kal_uint32   emtx_magic;               
    kal_char     emtx_name[8];



} *kal_internal_enhmutexid, kal_internal_enhmutex_type;




 

extern kal_char sys_info_str[192];




 

extern void kal_get_sleep_time(Sleep_Time *cal_ticks);
extern kal_uint32 kal_is_valid_sleep_time(Sleep_Time *sl);






#line 402 "kal\\include\\kal_internal_api.h"
#line 408 "kal\\include\\kal_internal_api.h"

#line 1 "kal\\common\\include\\kal_debug_common_defs.h"

































 




































































































































 







 






#line 1 "kal\\stacklib\\include\\lcd_ip_cqueue.h"

































 







































































 








 







 
 





 















 

#line 157 "kal\\stacklib\\include\\lcd_ip_cqueue.h"














 

#line 180 "kal\\stacklib\\include\\lcd_ip_cqueue.h"

#line 188 "kal\\stacklib\\include\\lcd_ip_cqueue.h"















 

#line 211 "kal\\stacklib\\include\\lcd_ip_cqueue.h"















 

#line 235 "kal\\stacklib\\include\\lcd_ip_cqueue.h"
















 

#line 260 "kal\\stacklib\\include\\lcd_ip_cqueue.h"
















 







#line 296 "kal\\stacklib\\include\\lcd_ip_cqueue.h"

 






#line 183 "kal\\common\\include\\kal_debug_common_defs.h"







 
#line 202 "kal\\common\\include\\kal_debug_common_defs.h"




 




 

#line 237 "kal\\common\\include\\kal_debug_common_defs.h"



 


#line 268 "kal\\common\\include\\kal_debug_common_defs.h"





extern kal_uint16 __kal_get_buff_num(void *buff_ptr, kal_uint16* index_p);

extern kal_uint16 kal_get_buff_num(void *buff_ptr);




extern void kal_uint_2_hex_str( kal_uint32 num, kal_char* string );

extern void kal_uint_2_str( kal_uint32 num, kal_char* string );

extern kal_bool kal_debug_is_history_empty( kal_internal_poolid pool_id, void*  buff_ptr );

extern void kal_validate_buff_footer(void *buff_ptr, kal_uint32 buff_size );

extern void kal_take_reentrant_mutex(kal_os_mutex_type *mutex_id);

extern void kal_give_reentrant_mutex(kal_os_mutex_type *mutex_id);



 


 
extern kal_buff_pool_info   pool_info_g [ 40 ];
extern kal_uint8            num_buff_pools_created_g;




extern kal_internal_hisrid  kal_hisr_ptrs_g [ 20 ];





#line 410 "kal\\include\\kal_internal_api.h"

#line 1 "kal\\nucleus\\include\\kal_debug_nucleus.h"

































 








































































 







 










 

















#line 161 "kal\\nucleus\\include\\kal_debug_nucleus.h"




 



 
extern void kal_update_buff_header_footer(kal_poolid pool_id,void *buff_ptr,kal_taskid ext_task_id,kal_uint32 buff_size,kal_uint16 buff_number);


extern void kal_is_valid_buffer(void* buff_ptr, kal_uint16 buff_number);








#line 413 "kal\\include\\kal_internal_api.h"




#line 1 "kal\\include\\kal_debug.h"

































 
































































































































 







 






 



















 
#line 1 "kal\\include\\kal_release.h"

































 










































 







 

#line 88 "kal\\include\\kal_release.h"
#line 89 "kal\\include\\kal_release.h"
#line 90 "kal\\include\\kal_release.h"

#line 200 "kal\\include\\kal_debug.h"







 
#line 216 "kal\\include\\kal_debug.h"




extern void kal_debug_print(kal_char* string_to_be_printed);
extern void dbg_print(char *fmt,...);

#line 233 "kal\\include\\kal_debug.h"

#line 240 "kal\\include\\kal_debug.h"



extern void stack_print(char* string);

#line 254 "kal\\include\\kal_debug.h"







#line 418 "kal\\include\\kal_internal_api.h"




 
struct ptr_node {
	void* ptr;
	kal_uint32 size;
	struct ptr_node* next_ptr;
};


typedef struct kal_pool_statistics_struct {
	kal_uint16 current_allocation;
	kal_uint16 max_num_allocated;
} *kal_pool_statistics;


#line 443 "kal\\include\\kal_internal_api.h"




typedef struct kal_int_pool_statistics_struct {
	struct kal_pool_statistics_struct   pool_info;
	kal_uint32*          buff_caller_addr;
} *kal_internal_pool_statistics, kal_pool_stat_type;




#line 467 "kal\\include\\kal_internal_api.h"

typedef void(*kal_print_string_func_ptr)(kal_char*);







#line 483 "kal\\include\\kal_internal_api.h"









 
#line 500 "kal\\include\\kal_internal_api.h"








 
#line 521 "kal\\include\\kal_internal_api.h"








 





void kal_debug_reset_pool_statistics(kal_poolid pool_id);

#line 546 "kal\\include\\kal_internal_api.h"





 




 
#line 569 "kal\\include\\kal_internal_api.h"








 
 
#line 606 "kal\\include\\kal_internal_api.h"



#line 615 "kal\\include\\kal_internal_api.h"

void kal_debug_register_print_string_function (kal_print_string_func_ptr func_ptr);
void kal_debug_print(kal_char* string_to_be_printed);
void kal_debug_print_int(kal_int32 int_to_be_printed);
void kal_debug_print_uint(kal_uint32 int_to_be_printed);
void kal_debug_print_uint_in_hex(kal_uint32 int_to_be_printed);
void kal_debug_abort( void );
void kal_debug_reset( void );




















#line 654 "kal\\include\\kal_internal_api.h"




extern NU_PROTECT g_stack_pool_protect;
extern NU_PROTECT TCD_System_Protect;
extern void TCT_Unprotect_Specific(NU_PROTECT *protect);












#line 685 "kal\\include\\kal_internal_api.h"





extern void *__kal_stack_realloc(KAL_ADM_ID adm_id, void *p, kal_uint32 size, kal_uint32 *actual_size, kal_uint32 option, char *filename, kal_uint32 line);
KAL_ADM_ID kal_adm_create_for_stack(void *mem_addr, kal_uint32 size, kal_uint32 *subpool_size, kal_uint32 flags);
void *kal_adm_alloc_for_stack(KAL_ADM_ID adm_id, kal_uint32 size,kal_uint32 option);
void *kal_adm_realloc_for_stack(KAL_ADM_ID adm_id, void *p,  kal_uint32 size);
void kal_adm_free_for_stack(KAL_ADM_ID adm_id, void *mem_addr);
kal_bool kal_is_task_stack_nonshareable(kal_uint32 task_index);









#line 303 "hal\\storage\\flash\\fdm\\inc\\DrvFlash.h"
#line 304 "hal\\storage\\flash\\fdm\\inc\\DrvFlash.h"













#line 323 "hal\\storage\\flash\\fdm\\inc\\DrvFlash.h"







 
#line 339 "hal\\storage\\flash\\fdm\\inc\\DrvFlash.h"

 







typedef __packed struct
{
   kal_uint32 TotalBlocks;
   kal_uint32 BlockSize[8];
   kal_uint32 AvailInRegion[8];       
   kal_uint32 RegionBlocks[8];
   kal_uint32 ActualRegionNum;
   WORD  PageSize;
   kal_uint32 baseUnlockBlock;                 
   kal_uint32 endUnlockBlock;                  
} NOR_MTD_FlashInfo;






 
typedef struct
{
   int     (* MountDevice)  (void * DriveData, void * Info);
   int     (* ShutDown)     (void * DriveData);
   void *  (* MapWindow)    (void * DriveData, kal_uint32 BlockIndex, kal_uint32 WindowIndex);
   int     (* EraseBlock)   (void * DriveData, kal_uint32 BlockIndex);
   int     (* ProgramData)  (void * DriveData, void * Address, void * Data, UINT Length);
   int     (*NonBlockEraseBlock) (void * DriveData, kal_uint32  BlockIndex);  
   int     (*CheckDeviceReady)   (void * DriveData, kal_uint32 BlockIndex);  
   int     (*SuspendErase)       (void * DriveData, kal_uint32 BlockIndex);  
   int     (*ResumeErase)        (void * DriveData, kal_uint32 BlockIndex);  
   int     (*BlankCheck)             (void * DriveData, kal_uint32 BlockIndex);
   int     (*OTPAccess)           (void * DriveData, int accesstype, UINT Offset, void * BufferPtr, UINT Length);
   int     (*OTPQueryLength)      (void * DriveData, UINT *Length);
   int     (*LockEraseBlkAddr)         (void * DriveData, void *Address,UINT Action);
   kal_bool (*IsEraseSuspended)     (void * DriveData, kal_uint32 BlockIndex);
   int     (*IOCtrl)        (void * DriveData, UINT CtrlAction, void * CtrlData); 
} NOR_MTD_Driver;

 







typedef struct
{
   const  char * FileName;
   kal_uint32  FileSize;
   kal_uint32  BlockSize;
   kal_uint32  WindowSize;
   HANDLE H;
   BYTE * BaseAddr;
   void * CurrAddr;
} NORMtdFileData;



typedef struct
{
   kal_uint32 BlockSize;
   kal_uint32 RegionBlocks;
} FlashRegionInfo;


typedef struct
{
   kal_uint32 BankSize;
   kal_uint32 Banks;
} FlashBankInfo;





 
typedef struct
{
   kal_uint32 BlockIndex;
   kal_uint32 EraseCount;
} NOR_EraseInfo;




typedef struct
{
   kal_uint32 BlockIndex;
   kal_uint32 BaseAddress;
} NOR_AddrLookup;


typedef struct
{
   kal_uint32  Signature;
   BYTE * BaseAddr;
   kal_semid          DeviceLock;       
   kal_taskid         DeviceLockOwner;  
   kal_int8           DeviceLockDepth;  

   FlashRegionInfo * RegionInfo;
   BYTE * CurrAddr;
   FlashBankInfo *BankInfo;
   BYTE * CurrBankAddr;
   kal_uint32 CurrBankSize;
   BYTE * CurrPollAddr;
#line 464 "hal\\storage\\flash\\fdm\\inc\\DrvFlash.h"
   NOR_AddrLookup  lookup_tbl[(8)][2];

} NOR_Flash_MTD_Data;

#line 477 "hal\\storage\\flash\\fdm\\inc\\DrvFlash.h"

 





 
typedef __packed struct
{
   kal_uint32 head;
   kal_uint32 tail;
   kal_uint32* queue;
} NOR_EraseQueue;
 
typedef enum
{
   NOR_IN_READY = 0xF0,
   NOR_IN_PROGRAM,
   NOR_IN_SUSPENDED_PROGRAM,
   NOR_IN_ERASE,
   NOR_IN_SUSPENDED_ERASE,
   NOR_IN_ERROR
} NOR_Flash_State;

extern NOR_Flash_State FlashState;













typedef __packed struct
{
   kal_uint32 LogicalSectorID;
   kal_uint32 PysicalSectorID_new;
} MS_ENTRY;







typedef __packed struct NOR_FLASH_DRV_Data
{
   kal_uint32    TotalFATSectors;        
   NOR_MTD_Driver *MTDDriver;       
   void    *MTDData;                
   WORD    *AvailSectorsInBlock;    
   WORD    *ValidSectorsInBlock;    
   NOR_MTD_FlashInfo FlashInfo;     
   kal_uint32    HeaderSize[8]; 
   kal_uint32    SectorsPerBlock[8];    
   kal_uint32    ActiveBlock;            
   kal_uint32    ReclaimEraseCount;      
   kal_uint32    ReclaimBlockID;         
   kal_uint32    TotalPhysicalSectors;   
   kal_uint32    PartitionSectors;       

   kal_uint32    GCBlockSectors;         
#line 551 "hal\\storage\\flash\\fdm\\inc\\DrvFlash.h"
   kal_uint32    GCThreshold;            

   kal_uint32    AvailSectors;           
   kal_uint32    DeletedSectors;         
   kal_uint32    StartSector;            
   kal_uint32    Sectors;                
   kal_uint32    SectorsLeft;            
   kal_uint32    BLOCKID_OFFSET;         
   kal_uint32    SECTORIDX_MASK;         
   kal_uint32    PHY_SECTOR_OFFSET;      

   kal_uint32    MSTABLE_ENTRY_NUM;
   kal_uint32    MS_count;               
   MS_ENTRY *MSEntryTable;
   BYTE    *SectorMap;              
   BYTE    *Buffer;                 

   void (*CompleteErase)(struct NOR_FLASH_DRV_Data * D);

   kal_uint32    RegionMaxBlock;         

   void    (*ProgramFailHandle)  (struct NOR_FLASH_DRV_Data * D);
   void    (*ReclaimBlock_post)  (struct NOR_FLASH_DRV_Data * D);

   kal_uint32    IdleReclaimBlockID;     
   kal_uint32   (*SelectReclaimTarget)(struct NOR_FLASH_DRV_Data * D);
   kal_uint32   (* ReclaimOneSector)  (struct NOR_FLASH_DRV_Data * D, kal_uint32 Target, kal_uint32 sector);



   kal_uint32    IdleSweepThreshold;     


#line 592 "hal\\storage\\flash\\fdm\\inc\\DrvFlash.h"


   WORD     queueSize;              





   BYTE          BlockReclaimingMark;

   kal_bool    ProgramFailRetry;






} NOR_FLASH_DRV_Data;



extern kal_mutexid fdm_reclaim_mutex;
extern kal_eventgrpid  nor_egid;






 
typedef struct
{
   kal_uint32 BankSize;
   kal_uint32 Banks;
} NORBankInfo;


 
typedef struct
{
   kal_uint32 TotalLSMT;
   kal_uint32 BlkSize;
   kal_uint32 PageSize;
   NORBankInfo *BankInfo;
   WORD TblEntrys;
   WORD TotalBlks;
} NORLayoutInfo;

typedef struct
{
   kal_uint32  Signature;
   BYTE * BaseAddr;
   kal_semid          DeviceLock;       
   kal_taskid         DeviceLockOwner;  
   kal_int8           DeviceLockDepth;  

   NORLayoutInfo * LayoutInfo;
#line 658 "hal\\storage\\flash\\fdm\\inc\\DrvFlash.h"
} NOR_MTD_DATA;

typedef __packed struct
{
   kal_uint32 MSCount;
   kal_uint32 *LogPageID;
   WORD *NewEntryID;
   WORD *OldEntryID;
} MS_TABLE;

typedef __packed struct
{
   WORD LogBlkID;
   WORD TblIDInBlk;
} LSMGEntry;


typedef __packed struct
{
   kal_uint32    TotalFATSectors;
   NOR_MTD_Driver * MTDDriver;
   void *      MTDData;
   int  (* DiscardSectors) (void * DriveData, UINT Sector, UINT Sectors);
   void (*ReclaimBlock) (void* DriveData, kal_bool isBackground);

   void    (*ProgramFailHandle)  (void* DriveData);
   NOR_MTD_FlashInfo FlashInfo;     

   kal_uint32    SecondPartitionSectors;
   kal_uint32    HeaderSize[2];  
   
   kal_uint32    *InvalidEntryInTblBlk; 
   kal_uint32    TotalAvail[2];   
   
   
   kal_uint32    TotalInvalid[2]; 
   
   kal_uint32    ReclHighThreshold[2]; 
   kal_uint32    ReclLowThreshold[2];
   kal_uint32    SystemThreshold[2];
   kal_bool   NeedResumeFlag;
   kal_bool   NeedFRecl;
   LSMGEntry    *LSMG;            
   WORD      ReclType;
   WORD      *LBM;              
   WORD      *AvailInBlk;     
   WORD      *InvalidInBlk;     
   WORD      ActiveBlk[2];    
   
   WORD      ReclLogBlkID;  
   WORD      ErasingPhyBlk;
   WORD      ReclToPhyBlkID;
   WORD      ReclFromPhyBlkID;
   WORD      PageSizeShift;
   WORD      BlkIDShift;
   WORD      TblSizeShift;
   WORD      TblIDShift;
   WORD      PagesPerBlk;
   WORD      TblsPerBlk;
   WORD      TblBlks;
   WORD      SetTblBlks;
   WORD      DataBlks;
   kal_uint32 MSTABLE_ENTRY_NUM;
   MS_TABLE  MSTable;
   BYTE      *Buffer;
   BYTE      *CopyBuffer;
} NOR_FTL_DATA;






typedef struct
{
   kal_uint32 Blocks;
   kal_uint32 BlockSize;
   kal_uint32 EraseCountMax;
   kal_uint32 EraseCountMin;
   kal_uint32 EraseCountAverage;
   kal_uint32 SectorsInUse;
   kal_uint32 SectorsDeleted;
   kal_uint32 SectorsAvail;
} NORFlashInfo;

 
#line 909 "hal\\storage\\flash\\fdm\\inc\\DrvFlash.h"


 
int NOR_MountDevice(void * DriveData, int DeviceNumber, int DeviceType, kal_uint32 Flags);
int NOR_ShutDown(void * DriveData);
int NOR_ReadSectors(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int NOR_WriteSectors(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int NOR_MediaChanged(void * DriveData);
int NOR_DiscardSectors(void * DriveData, kal_uint32 Sector, UINT Sectors);
int NOR_GetDiskGeometry(void * DriveData, FS_PartitionRecord * DiskGeometry, BYTE * MediaDescriptor);
int NOR_LowLevelFormat(void * DriveData, const char * DeviceName, FS_FormatCallback Progress, kal_uint32 Flags);
int NOR_NonBlockWriteSectors(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int NOR_RecoverableWriteSectors(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int NOR_ResumeSectorStates(void * DriveData);

int SIB_MountDevice(void * DriveData, int DeviceNumber, int DeviceType, kal_uint32 Flags);
int SIB_ReadSectors(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int SIB_WriteSectors(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int SIB_DiscardSectors(void * DriveData, kal_uint32 Sector, UINT Sectors);
int SIB_GetDiskGeometry(void * DriveData, FS_PartitionRecord * DiskGeometry, BYTE * MediaDescriptor);
int SIB_LowLevelFormat(void * DriveData, const char * DeviceName, FS_FormatCallback Progress, kal_uint32 Flags);
int SIB_NonBlockWriteSectors(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int SIB_RecoverableWriteSectors(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int SIB_ResumeSectorStates(void * DriveData);

int nNOR_MountDevice(void * DriveData, int DeviceNumber, int DeviceType, kal_uint32 Flags);
int nNOR_ReadSectors(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int nNOR_WriteSectors(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int nNOR_MediaChanged(void * DriveData);
int nNOR_DiscardSectors(void * DriveData, kal_uint32 Sector, UINT Sectors);
int nNOR_LowLevelFormat(void * DriveData, const char * DeviceName, FS_FormatCallback Progress, kal_uint32 Flags);
int nNOR_NonBlockWriteSectors(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int nNOR_RecoverableWriteSectors(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int nNOR_ResumeSectorStates(void * DriveData);
void nNOR_ReclaimBlock(void* DriveData, kal_bool isBackground);

int nSIB_MountDevice(void * DriveData, int DeviceNumber, int DeviceType, kal_uint32 Flags);
int nSIB_ReadSectors(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int nSIB_WriteSectors(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int nSIB_DiscardSectors(void * DriveData, kal_uint32 Sector, UINT Sectors);
int nGetDiskGeometry(void * DriveData, FS_PartitionRecord * DiskGeometry, BYTE * MediaDescriptor);
int nSIB_LowLevelFormat(void * DriveData, const char * DeviceName, FS_FormatCallback Progress, kal_uint32 Flags);
int nSIB_NonBlockWriteSectors(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int nSIB_RecoverableWriteSectors(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int nSIB_ResumeSectorStates(void * DriveData);
void nSIB_ReclaimBlock(void* DriveData, kal_bool isBackground);
int nShutDown(void * DriveData);

int NOR_MountDevice_ext(void * DriveData, int DeviceNumber, int DeviceType, kal_uint32 Flags);
int NOR_ShutDown_ext(void * DriveData);
int NOR_ReadSectors_ext(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int NOR_WriteSectors_ext(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int NOR_MediaChanged_ext(void * DriveData);
int NOR_DiscardSectors_ext(void * DriveData, kal_uint32 Sector, UINT Sectors);
int NOR_GetDiskGeometry_ext(void * DriveData, FS_PartitionRecord * DiskGeometry, BYTE * MediaDescriptor);
int NOR_LowLevelFormat_ext(void * DriveData, const char * DeviceName, FS_FormatCallback Progress, kal_uint32 Flags);
int NOR_NonBlockWriteSectors_ext(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int NOR_RecoverableWriteSectors_ext(void * DriveData, kal_uint32 Sector, UINT Sectors, void * Buffer);
int NOR_ResumeSectorStates_ext(void * DriveData);

int OTPAccess(void * DriveData, int accesstype, UINT Offset, void * BufferPtr, UINT Length);
int OTPQueryLength(void * DriveData, UINT *Length);





extern void ESB_CompleteErase(NOR_FLASH_DRV_Data * D);






extern void GetFDMLock(void);
extern void FreeFDMLock(void);
#line 994 "hal\\storage\\flash\\fdm\\inc\\DrvFlash.h"



extern void setIdleSweepThreshold(NOR_FLASH_DRV_Data * D, kal_uint32 MaxSectorsPerBlock); 











#line 1020 "hal\\storage\\flash\\fdm\\inc\\DrvFlash.h"


#line 161 "custom\\common\\hal\\custom_flash.c"
#line 1 "hal\\storage\\flash\\fdm\\inc\\NAND_FDM.h"

































 































































































































































































































 








 
#line 1 "custom\\common\\hal\\flash_opt.h"

































 
































































 

#line 102 "custom\\common\\hal\\flash_opt.h"
#line 103 "custom\\common\\hal\\flash_opt.h"
#line 1 "custom\\system\\HEXING60A_11B_BB\\flash_opt_gen.h"

































 
































 







 
















 








 

 



 


 







 

    





    





 


















#line 104 "custom\\common\\hal\\flash_opt.h"









 







#line 129 "custom\\common\\hal\\flash_opt.h"






 


        


 

        


 






#line 161 "custom\\common\\hal\\flash_opt.h"







 







 






#line 297 "custom\\common\\hal\\flash_opt.h"

#line 352 "custom\\common\\hal\\flash_opt.h"
      
            


 






         
            


 
#line 403 "custom\\common\\hal\\flash_opt.h"



#line 426 "custom\\common\\hal\\flash_opt.h"


#line 445 "custom\\common\\hal\\flash_opt.h"
         
            


 






      
             

      

   
        





 


















#line 494 "custom\\common\\hal\\flash_opt.h"







#line 517 "custom\\common\\hal\\flash_opt.h"






 





















































#line 583 "custom\\common\\hal\\flash_opt.h"

#line 590 "custom\\common\\hal\\flash_opt.h"












#line 608 "custom\\common\\hal\\flash_opt.h"

#line 615 "custom\\common\\hal\\flash_opt.h"

























#line 646 "custom\\common\\hal\\flash_opt.h"

#line 654 "custom\\common\\hal\\flash_opt.h"

#line 662 "custom\\common\\hal\\flash_opt.h"

#line 670 "custom\\common\\hal\\flash_opt.h"






 
#line 686 "custom\\common\\hal\\flash_opt.h"


#line 270 "hal\\storage\\flash\\fdm\\inc\\NAND_FDM.h"
#line 276 "hal\\storage\\flash\\fdm\\inc\\NAND_FDM.h"





#line 282 "hal\\storage\\flash\\fdm\\inc\\NAND_FDM.h"

#line 284 "hal\\storage\\flash\\fdm\\inc\\NAND_FDM.h"



 
#line 297 "hal\\storage\\flash\\fdm\\inc\\NAND_FDM.h"



 



#line 310 "hal\\storage\\flash\\fdm\\inc\\NAND_FDM.h"

 





#line 1 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"

































 

















































































































































































































 






 
#line 254 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"



#line 1 "hal\\system\\dma\\inc\\dma_hw.h"

































 




















































































































































































































































































































 



#line 348 "hal\\system\\dma\\inc\\dma_hw.h"
#line 1 "interface\\hal\\peripheral\\drv_comm.h"

































 

















































































































































































































































































































































 







#line 1 "hal\\drv_def\\drv_features.h"

































 





























































 






#line 1 "hal\\drv_def\\drv_features_usb.h"

































 



































































































 




 
#line 141 "hal\\drv_def\\drv_features_usb.h"

#line 295 "hal\\drv_def\\drv_features_usb.h"


   







 
#line 327 "hal\\drv_def\\drv_features_usb.h"


#line 104 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_i2c.h"

































 















































































































 



#line 151 "hal\\drv_def\\drv_features_i2c.h"

 
#line 227 "hal\\drv_def\\drv_features_i2c.h"
 
#line 236 "hal\\drv_def\\drv_features_i2c.h"


  










#line 105 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_accdet.h"

































 































































 



#line 103 "hal\\drv_def\\drv_features_accdet.h"

 






#line 118 "hal\\drv_def\\drv_features_accdet.h"


#line 106 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_adc.h"

































 































































































































































 
 



 
#line 201 "hal\\drv_def\\drv_features_adc.h"

#line 417 "hal\\drv_def\\drv_features_adc.h"
   
   




      

 





#line 437 "hal\\drv_def\\drv_features_adc.h"
   
#line 675 "hal\\drv_def\\drv_features_adc.h"





#line 107 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_pfc.h"

































 























































 
 



 
#line 97 "hal\\drv_def\\drv_features_pfc.h"











#line 108 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_gcu.h"

































 























































 



#line 95 "hal\\drv_def\\drv_features_gcu.h"

#line 123 "hal\\drv_def\\drv_features_gcu.h"

#line 144 "hal\\drv_def\\drv_features_gcu.h"
    














#line 109 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_gpt.h"

































 



















































 
 



#line 92 "hal\\drv_def\\drv_features_gpt.h"











 

 
#line 147 "hal\\drv_def\\drv_features_gpt.h"











 
#line 110 "hal\\drv_def\\drv_features.h"
#line 111 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_pwm.h"



#line 5 "hal\\drv_def\\drv_features_pwm.h"









 

 
#line 62 "hal\\drv_def\\drv_features_pwm.h"
   


   





 

#line 112 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_rtc.h"

































 











































































































 
 



 
#line 149 "hal\\drv_def\\drv_features_rtc.h"

#line 397 "hal\\drv_def\\drv_features_rtc.h"












#line 113 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_wdt.h"



#line 5 "hal\\drv_def\\drv_features_wdt.h"









 
 
#line 53 "hal\\drv_def\\drv_features_wdt.h"

   
   







 




#line 114 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_uart.h"

































 






































































































 



#line 142 "hal\\drv_def\\drv_features_uart.h"

 
#line 567 "hal\\drv_def\\drv_features_uart.h"
   
#line 574 "hal\\drv_def\\drv_features_uart.h"
	




   








#line 115 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_irda.h"

































 











































 



#line 83 "hal\\drv_def\\drv_features_irda.h"

 
#line 97 "hal\\drv_def\\drv_features_irda.h"





 






#line 116 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_gpio.h"



#line 5 "hal\\drv_def\\drv_features_gpio.h"





 

 
#line 195 "hal\\drv_def\\drv_features_gpio.h"







 

#line 117 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_bmt.h"

































 



























































































































 
 



 
#line 165 "hal\\drv_def\\drv_features_bmt.h"

#line 270 "hal\\drv_def\\drv_features_bmt.h"










#line 118 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_misc.h"

































 

































































 



#line 105 "hal\\drv_def\\drv_features_misc.h"

#line 594 "hal\\drv_def\\drv_features_misc.h"



#line 119 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_msdc.h"

































 















































































































































































 




 
#line 217 "hal\\drv_def\\drv_features_msdc.h"

 
#line 381 "hal\\drv_def\\drv_features_msdc.h"

    





    
#line 398 "hal\\drv_def\\drv_features_msdc.h"
    
    
#line 412 "hal\\drv_def\\drv_features_msdc.h"
		
#line 484 "hal\\drv_def\\drv_features_msdc.h"

 















 
#line 552 "hal\\drv_def\\drv_features_msdc.h"


 









 



#line 584 "hal\\drv_def\\drv_features_msdc.h"











 






#line 610 "hal\\drv_def\\drv_features_msdc.h"



















#line 636 "hal\\drv_def\\drv_features_msdc.h"





#line 648 "hal\\drv_def\\drv_features_msdc.h"



















#line 674 "hal\\drv_def\\drv_features_msdc.h"









#line 691 "hal\\drv_def\\drv_features_msdc.h"

#line 120 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_sim.h"

































 



























































































































































 



#line 195 "hal\\drv_def\\drv_features_sim.h"




 



























 



























#line 263 "hal\\drv_def\\drv_features_sim.h"






#line 276 "hal\\drv_def\\drv_features_sim.h"






 






























 
























#line 121 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_video.h"




#line 6 "hal\\drv_def\\drv_features_video.h"
#line 1 "hal\\drv_def\\drv_features_vcodec.h"

































 














































































































































































































 



#line 246 "hal\\drv_def\\drv_features_vcodec.h"

#line 256 "hal\\drv_def\\drv_features_vcodec.h"




 
#line 272 "hal\\drv_def\\drv_features_vcodec.h"

#line 285 "hal\\drv_def\\drv_features_vcodec.h"










#line 320 "hal\\drv_def\\drv_features_vcodec.h"



#line 329 "hal\\drv_def\\drv_features_vcodec.h"





 
#line 341 "hal\\drv_def\\drv_features_vcodec.h"





#line 362 "hal\\drv_def\\drv_features_vcodec.h"

#line 391 "hal\\drv_def\\drv_features_vcodec.h"











 


#line 442 "hal\\drv_def\\drv_features_vcodec.h"











 
 














































































































































































































































































































































































































#line 7 "hal\\drv_def\\drv_features_video.h"
#line 8 "hal\\drv_def\\drv_features_video.h"



 
















    
 














































 











	





 



 




 



 














 
#line 133 "hal\\drv_def\\drv_features_video.h"





#line 144 "hal\\drv_def\\drv_features_video.h"


















 































 



















 



#line 224 "hal\\drv_def\\drv_features_video.h"







 










 











 
#line 262 "hal\\drv_def\\drv_features_video.h"












 





































 






 
#line 331 "hal\\drv_def\\drv_features_video.h"



 
#line 349 "hal\\drv_def\\drv_features_video.h"



 
#line 361 "hal\\drv_def\\drv_features_video.h"















































 







 




 
#line 429 "hal\\drv_def\\drv_features_video.h"



 






 






 






 








 







 








 



#line 498 "hal\\drv_def\\drv_features_video.h"

#line 506 "hal\\drv_def\\drv_features_video.h"





 
#line 518 "hal\\drv_def\\drv_features_video.h"








 
#line 537 "hal\\drv_def\\drv_features_video.h"





 






 






 










 
#line 576 "hal\\drv_def\\drv_features_video.h"







 







 




#line 122 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_tp.h"

































 



























































































 



#line 131 "hal\\drv_def\\drv_features_tp.h"

#line 308 "hal\\drv_def\\drv_features_tp.h"











#line 432 "hal\\drv_def\\drv_features_tp.h"





#line 123 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_display.h"

































 

















































































































































































































 





 



 
#line 256 "hal\\drv_def\\drv_features_display.h"


 






#line 271 "hal\\drv_def\\drv_features_display.h"







 
#line 289 "hal\\drv_def\\drv_features_display.h"





 











#line 376 "hal\\drv_def\\drv_features_display.h"



#line 441 "hal\\drv_def\\drv_features_display.h"

#line 501 "hal\\drv_def\\drv_features_display.h"


#line 566 "hal\\drv_def\\drv_features_display.h"


#line 615 "hal\\drv_def\\drv_features_display.h"





  

  
#line 629 "hal\\drv_def\\drv_features_display.h"
  



  




  




  


  
  
  




  

  
   


  
  


    



#line 739 "hal\\drv_def\\drv_features_display.h"



#line 815 "hal\\drv_def\\drv_features_display.h"



#line 882 "hal\\drv_def\\drv_features_display.h"



#line 935 "hal\\drv_def\\drv_features_display.h"



#line 968 "hal\\drv_def\\drv_features_display.h"



#line 999 "hal\\drv_def\\drv_features_display.h"



#line 1045 "hal\\drv_def\\drv_features_display.h"




 

#line 1079 "hal\\drv_def\\drv_features_display.h"



#line 1110 "hal\\drv_def\\drv_features_display.h"


#line 1140 "hal\\drv_def\\drv_features_display.h"


#line 1170 "hal\\drv_def\\drv_features_display.h"





#line 1187 "hal\\drv_def\\drv_features_display.h"



#line 1199 "hal\\drv_def\\drv_features_display.h"




 




 
#line 1270 "hal\\drv_def\\drv_features_display.h"

#line 124 "hal\\drv_def\\drv_features.h"
#line 125 "hal\\drv_def\\drv_features.h"
#line 126 "hal\\drv_def\\drv_features.h"
#line 127 "hal\\drv_def\\drv_features.h"
#line 128 "hal\\drv_def\\drv_features.h"
#line 129 "hal\\drv_def\\drv_features.h"
#line 130 "hal\\drv_def\\drv_features.h"
#line 131 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_resizer.h"

































 






















































 



#line 95 "hal\\drv_def\\drv_features_resizer.h"



#line 118 "hal\\drv_def\\drv_features_resizer.h"



   



#line 131 "hal\\drv_def\\drv_features_resizer.h"


   
#line 1 "interface\\hal\\drv_sw_def\\drv_sw_features_mdp.h"

































 


















































































































 





#line 156 "interface\\hal\\drv_sw_def\\drv_sw_features_mdp.h"






































 





















#line 226 "interface\\hal\\drv_sw_def\\drv_sw_features_mdp.h"

#line 237 "interface\\hal\\drv_sw_def\\drv_sw_features_mdp.h"

#line 251 "interface\\hal\\drv_sw_def\\drv_sw_features_mdp.h"









 
#line 271 "interface\\hal\\drv_sw_def\\drv_sw_features_mdp.h"

#line 285 "interface\\hal\\drv_sw_def\\drv_sw_features_mdp.h"

#line 299 "interface\\hal\\drv_sw_def\\drv_sw_features_mdp.h"

#line 313 "interface\\hal\\drv_sw_def\\drv_sw_features_mdp.h"

#line 327 "interface\\hal\\drv_sw_def\\drv_sw_features_mdp.h"

#line 354 "interface\\hal\\drv_sw_def\\drv_sw_features_mdp.h"













#line 135 "hal\\drv_def\\drv_features_resizer.h"
      
#line 146 "hal\\drv_def\\drv_features_resizer.h"
 


#line 132 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_rotator.h"

































 


























































































































 



#line 163 "hal\\drv_def\\drv_features_rotator.h"
#line 164 "hal\\drv_def\\drv_features_rotator.h"















#line 198 "hal\\drv_def\\drv_features_rotator.h"










#line 215 "hal\\drv_def\\drv_features_rotator.h"














                                           





                                           


















#line 289 "hal\\drv_def\\drv_features_rotator.h"

#line 133 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_stack_switch.h"

































 


































 



#line 74 "hal\\drv_def\\drv_features_stack_switch.h"

#line 82 "hal\\drv_def\\drv_features_stack_switch.h"



#line 134 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_isp.h"

































 










































 




#line 83 "hal\\drv_def\\drv_features_isp.h"















#line 135 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_spi.h"



#line 5 "hal\\drv_def\\drv_features_spi.h"

#line 54 "hal\\drv_def\\drv_features_spi.h"


#line 136 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_hif.h"



#line 5 "hal\\drv_def\\drv_features_hif.h"

#line 16 "hal\\drv_def\\drv_features_hif.h"


#line 137 "hal\\drv_def\\drv_features.h"
#line 1 "hal\\drv_def\\drv_features_f32k.h"

































 




















































 
 



 
#line 94 "hal\\drv_def\\drv_features_f32k.h"

#line 110 "hal\\drv_def\\drv_features_f32k.h"







#line 138 "hal\\drv_def\\drv_features.h"
#line 381 "interface\\hal\\peripheral\\drv_comm.h"
#line 382 "interface\\hal\\peripheral\\drv_comm.h"
#line 383 "interface\\hal\\peripheral\\drv_comm.h"
#line 384 "interface\\hal\\peripheral\\drv_comm.h"
#line 1 "kal\\include\\kal_trace.h"

































 























































































































































































































































































 




#line 320 "kal\\include\\kal_trace.h"
#line 322 "kal\\include\\kal_trace.h"
#line 324 "kal\\include\\kal_trace.h"
#line 325 "kal\\include\\kal_trace.h"


  #pragma diag_suppress 870








struct ilm_struct;
extern void tst_EM_logger(struct ilm_struct *ilm_ptr);









#line 354 "kal\\include\\kal_trace.h"


#line 376 "kal\\include\\kal_trace.h"



#line 388 "kal\\include\\kal_trace.h"

#line 398 "kal\\include\\kal_trace.h"



typedef enum
{
   TRACE_FUNC,
   TRACE_STATE,
   TRACE_INFO,
   TRACE_WARNING,
   TRACE_ERROR,
   TRACE_GROUP_1,
   TRACE_GROUP_2,
   TRACE_GROUP_3,
   TRACE_GROUP_4,
   TRACE_GROUP_5,
   TRACE_GROUP_6,
   TRACE_GROUP_7,
   TRACE_GROUP_8,
   TRACE_GROUP_9,
   TRACE_GROUP_10,
   TRACE_PEER
}trace_class_enum;







  
  
  
  extern void kal_critical_trace( trace_class_enum, kal_uint32, const kal_char* , ...);
  extern void kal_critical_brief_trace( trace_class_enum, kal_uint32, const kal_char* , ...);
  extern void kal_critical_assert_trace( trace_class_enum, kal_uint32, const kal_char* , ...);    
  
 


























 
  extern void kal_trace( trace_class_enum, kal_uint32, const kal_char* , ...);
  extern void kal_brief_trace( trace_class_enum, kal_uint32, const kal_char* , ...);
  extern void kal_trace_for_3rd_party( trace_class_enum, kal_uint32, const kal_char* , va_list);
  extern void kal_lib_trace( trace_class_enum, kal_uint32, const kal_char* , ...);
  extern void kal_assert_trace( trace_class_enum, kal_uint32, const kal_char* , ...);
  extern void kal_wap_trace(module_type mod_id, trace_class_enum trc_class, const char *fmt,...);
  extern void kal_buffer_trace(trace_class_enum trc_class, kal_uint32 msg_index, const kal_char* fmt, kal_uint32 buf_len, const kal_uint8* pData);
  extern void kal_dev_trace(trace_class_enum trc_class, kal_uint32 msg_index, const char *arg_type,...);
  extern void kal_bootup_trace( trace_class_enum, kal_uint32, const kal_char* , ...);

#line 767 "kal\\include\\kal_trace.h"






 






















 
  extern void kal_prompt_trace(module_type mod_id, const kal_char *fmt,...);
  extern void tst_sys_init_trace(const kal_char *info);
  extern void tst_sys_trace(kal_char *info);
  extern void tst_sysfatal_trace(kal_char *info);
  extern kal_int32 tst_trace_check_ps_filter_off(trace_class_enum trc_class, kal_uint32* module_id, kal_uint32 supportOption);
  
#line 819 "kal\\include\\kal_trace.h"

typedef void (*TST_VC_CallBack)(const kal_uint8* pData, kal_uint32 nLen);
typedef void (*TST_String_Inject_CB)(kal_uint32 index, kal_uint8 *pData);




 
typedef enum
{
	TVCI_GPS_LOGGING,
	TVCI_DNT_L2COPRO_LOGGING,
	TVCI_CATCHER_POLLING,
	TVCI_GDB_COMM,
	TVCI_AST_LOGGING,
	TVCI_MINI_LOG,
	TVCI_VM_LOGGING,
	TVCI_LAST_ID
}
tst_virtual_channel_id;

kal_bool tst_vc_register_channel(tst_virtual_channel_id channel_id, TST_VC_CallBack fnCmd);
kal_bool tst_vc_response(tst_virtual_channel_id channel_id, const kal_uint8 *pData, kal_uint16 len);











#line 385 "interface\\hal\\peripheral\\drv_comm.h"







typedef enum {
    	io_low=0,
	   io_high
} IO_level;



typedef enum {
    	DEV_DMA=0,
    	DEV_USB,
    	DEV_GCU,
    	DEV_CHE,
    	DEV_PPP,
    	DEV_GPT,
    	DEV_KP,
    	DEV_GPIO,
    	DEV_UART1,
    	DEV_UART2,
    	DEV_UART3,
    	DEV_SIM,
    	DEV_PWM,
    	DEV_PWM2,
    	DEV_ALTER,
    	DEV_LCD,
    	DEV_MSDC,
    	DEV_TRC,
    	DEV_NFI,
    	DEV_B2SPI,
    	DEV_IRDA,
    	DEV_ADC,
    	DEV_RTC,
    	DEV_DIV,
    	DEV_FCS,
    	DEV_RZLB,
    	DEV_CRZ,
    	DEV_TV_OUT,
    	DEV_IPP,
    	DEV_PNG,
    	DEV_GIF,
    	DEV_GCMQ,
    	DEV_G2D,
    	DEV_MP4,
    	DEV_JPEG,
    	DEV_PRZ,
    	DEV_RESZ,
    	DEV_ISP,
    	DEV_DCT,
    	DEV_IMGDMA,
    	DEV_DRZ,
    	DEV_MSDC2,
    	DEV_SIM2,
      DEV_ROTDMA,
      DEV_CAM104M,
      DEV_LCD104M,
    	DEV_MAX_ID,
		DEV_NULL_ID = 0xfe
} DEVICE_ID_ENUM;



typedef void (* VOID_FUNC)(void);


#line 555 "interface\\hal\\peripheral\\drv_comm.h"

#line 562 "interface\\hal\\peripheral\\drv_comm.h"

#line 569 "interface\\hal\\peripheral\\drv_comm.h"

#line 576 "interface\\hal\\peripheral\\drv_comm.h"

#line 583 "interface\\hal\\peripheral\\drv_comm.h"

#line 590 "interface\\hal\\peripheral\\drv_comm.h"

#line 597 "interface\\hal\\peripheral\\drv_comm.h"

#line 604 "interface\\hal\\peripheral\\drv_comm.h"

#line 611 "interface\\hal\\peripheral\\drv_comm.h"

#line 618 "interface\\hal\\peripheral\\drv_comm.h"

#line 625 "interface\\hal\\peripheral\\drv_comm.h"

#line 636 "interface\\hal\\peripheral\\drv_comm.h"

#line 647 "interface\\hal\\peripheral\\drv_comm.h"

extern void Fast_Memcpy(void *srcaddr, void *dstaddr, kal_uint32 leng);
extern void Fast_SherifWrite(void *srcaddr,void *dstaddr,kal_uint32 len);
extern void Fast_SherifRead(void *srcaddr,void *dstaddr,kal_uint32 len);







extern kal_uint32 SaveAndSetIRQMask(void);
extern void RestoreIRQMask(kal_uint32);






extern boot_mode_type Drv_query_boot_mode(void);

extern kal_uint32 drv_get_current_time(void);
extern kal_uint32 drv_get_duration_tick(kal_uint32 previous_time, kal_uint32 current_time);
extern kal_uint32 drv_get_duration_ms(kal_uint32 previous_time);



void get_NFI_bus(void);
void free_NFI_bus(void);







#line 706 "interface\\hal\\peripheral\\drv_comm.h"



 





 
#line 726 "interface\\hal\\peripheral\\drv_comm.h"

#line 751 "interface\\hal\\peripheral\\drv_comm.h"

#line 759 "interface\\hal\\peripheral\\drv_comm.h"


 

#line 787 "interface\\hal\\peripheral\\drv_comm.h"
extern void drv_trace0(trace_class_enum trc_class, kal_uint32 msg_index, const char *arg_type);
extern void drv_trace1(trace_class_enum trc_class, kal_uint32 msg_index, const char *arg_type, kal_uint32 data1);
extern void drv_trace2(trace_class_enum trc_class, kal_uint32 msg_index, const char *arg_type, kal_uint32 data1, kal_uint32 data2);
extern void drv_trace4(trace_class_enum trc_class, kal_uint32 msg_index, const char *arg_type, kal_uint32 data1, kal_uint32 data2, kal_uint32 data3, kal_uint32 data4);
extern void drv_trace8(trace_class_enum trc_class, kal_uint32 msg_index, const char *arg_type, kal_uint32 data1, kal_uint32 data2, kal_uint32 data3, kal_uint32 data4,
                kal_uint32 data5, kal_uint32 data6, kal_uint32 data7, kal_uint32 data8);
#line 801 "interface\\hal\\peripheral\\drv_comm.h"

extern kal_uint8 drv_dummy_return(void);



#line 349 "hal\\system\\dma\\inc\\dma_hw.h"
#line 1 "interface\\hal\\system\\intrCtrl.h"

































 
























































































































































































































































































































































































 






 
#line 1 "kal\\include\\kal_release.h"

































 










































 







 

#line 88 "kal\\include\\kal_release.h"
#line 89 "kal\\include\\kal_release.h"
#line 90 "kal\\include\\kal_release.h"

#line 420 "interface\\hal\\system\\intrCtrl.h"








 











                                 



                                 



























































































     
#line 1 "hal\\system\\cirq\\inc\\intrCtrl_MT6260.h"

































 

















































 



 






















































#line 149 "hal\\system\\cirq\\inc\\intrCtrl_MT6260.h"











#line 180 "hal\\system\\cirq\\inc\\intrCtrl_MT6260.h"





 
#line 235 "hal\\system\\cirq\\inc\\intrCtrl_MT6260.h"

 
 
 
 
 
 

   


 
#line 260 "hal\\system\\cirq\\inc\\intrCtrl_MT6260.h"
 
 
#line 303 "hal\\system\\cirq\\inc\\intrCtrl_MT6260.h"



 


























 
#line 349 "hal\\system\\cirq\\inc\\intrCtrl_MT6260.h"



 
#line 360 "hal\\system\\cirq\\inc\\intrCtrl_MT6260.h"



 






 

#line 380 "hal\\system\\cirq\\inc\\intrCtrl_MT6260.h"

typedef enum
{
    LISR_GPI = (3),
    LISR_CTIRQ1 = (1),
    LISR_CTIRQ2 = (2),
    LISR_DSP12CPU = (26),
    LISR_SIM = (13),
    LISR_DMA = (14),
    LISR_TDMA = (0),
    LISR_UART1 = (15),
    LISR_KP = (16),
    LISR_UART2 = (17),
    LISR_GPTimer = (18),
    LISR_EINT = (19),
    LISR_USB = (20),
    LISR_MSDC = (21),
    LISR_LCD = (23),
    
    LISR_GPII = (4),
    LISR_WDT = (25),
    LISR_RESIZER = (27),
    LISR_IRDBG1 = (32),
    LISR_MSDC_CD = (29),
    LISR_I2C = (31),
    LISR_SIM2 = (33),
}LISR_IRQ_NO;

enum Irq_Code_Def_Enum
{
    Enum_IRQ_CTIRQ1_CODE=0x1,
    Enum_IRQ_Code_End
};

#line 538 "interface\\hal\\system\\intrCtrl.h"
#line 1 "hal\\system\\cirq\\inc\\ADIE_intrCtrl_MT6260.h"

































 





































 



 

#line 94 "hal\\system\\cirq\\inc\\ADIE_intrCtrl_MT6260.h"















#line 115 "hal\\system\\cirq\\inc\\ADIE_intrCtrl_MT6260.h"

#line 122 "hal\\system\\cirq\\inc\\ADIE_intrCtrl_MT6260.h"

#line 129 "hal\\system\\cirq\\inc\\ADIE_intrCtrl_MT6260.h"




#line 151 "hal\\system\\cirq\\inc\\ADIE_intrCtrl_MT6260.h"




#line 161 "hal\\system\\cirq\\inc\\ADIE_intrCtrl_MT6260.h"




 








 
 
 
 
 









 





 
#line 205 "hal\\system\\cirq\\inc\\ADIE_intrCtrl_MT6260.h"



 
 








 







 





 







 









#line 539 "interface\\hal\\system\\intrCtrl.h"


#line 1 "hal\\system\\cirq\\inc\\cirq_internal.h"

































 



































 






 

 
 




#line 542 "interface\\hal\\system\\intrCtrl.h"



 
#line 555 "interface\\hal\\system\\intrCtrl.h"
   




 
 












 
typedef struct IRQ_MASK_VALUE_STRUCT
{



   kal_uint32 irq_mask0;
   kal_uint32 irq_mask1;
#line 604 "interface\\hal\\system\\intrCtrl.h"
} IRQ_MASK_VALUE_T;





 

typedef enum 
{
#line 1 "hal\\system\\cirq\\inc\\intrCtrl_SW_Handle.h"

































 




















































































 

 





































#line 1 "hal\\system\\cirq\\inc\\intrCtrl_MT6260_SW_Handle.h"

































 





































 




 
      
SW_TRIGGER_CODE1=((48)),
SW_TRIGGER_CODE2=((48)+1),
#line 161 "hal\\system\\cirq\\inc\\intrCtrl_SW_Handle.h"
#line 616 "interface\\hal\\system\\intrCtrl.h"

   SW_HANDLE_END
}SW_CODE_HANDLE;

extern void Activate_LISR(SW_CODE_HANDLE code);
extern void Deactivate_LISR(SW_CODE_HANDLE code);
extern const kal_uint8 SW_Code_Handle2Code[SW_HANDLE_END-(48)];

 


extern kal_uint32 SW_INT_Counter[SW_HANDLE_END-(48)];



extern const kal_uint8 irqLine[(0x35)];
extern kal_uint8 IRQCode2Line[(48)];

extern kal_uint32 SaveAndSetIRQMask(void);
extern void RestoreIRQMask(kal_uint32);

extern void IRQClearInt(kal_uint8);
extern void IRQMask(kal_uint8);
extern void IRQMaskAll(void);
extern void IRQUnmask(kal_uint8);
extern void CTIRQ1_2_MaskAll(IRQ_MASK_VALUE_T *val);
extern void CTIRQ1_2_Restore(IRQ_MASK_VALUE_T *val);
extern void IRQSensitivity(kal_uint8, kal_bool);
extern void FIQSensitivity(kal_bool);
extern void initINTR(void);
extern kal_uint16 INT_BootMode(void);
extern kal_uint32 IRQMask_Status(kal_uint8 code);
extern kal_uint32 IRQ_Status(void);
extern kal_uint32 FIQ_isValid(void);

extern void IRQ_Register_LISR(kal_uint32 code, void (*reg_lisr)(void), char* description);
extern kal_uint32 CheckIRQLock(void);

extern void SetINTMask(kal_uint8 code);
extern void RestoreINTMask(kal_uint8 code);

 
#line 664 "interface\\hal\\system\\intrCtrl.h"

 
#line 672 "interface\\hal\\system\\intrCtrl.h"













#line 350 "hal\\system\\dma\\inc\\dma_hw.h"
#line 1 "hal\\system\\pdn\\inc\\drvpdn.h"

































 















































































































































































































































































































































































































 
#line 436 "hal\\system\\pdn\\inc\\drvpdn.h"




#line 452 "hal\\system\\pdn\\inc\\drvpdn.h"




 





 

#line 465 "hal\\system\\pdn\\inc\\drvpdn.h"
#line 466 "hal\\system\\pdn\\inc\\drvpdn.h"

#line 1 "hal\\system\\pdn\\inc\\pdn_hw_series.h"

































 



























 
#line 64 "hal\\system\\pdn\\inc\\pdn_hw_series.h"






 













































#line 1 "hal\\system\\pdn\\inc\\pdn_hw_mt6260_series.h"

































 



































 

#line 73 "hal\\system\\pdn\\inc\\pdn_hw_mt6260_series.h"
















#line 96 "hal\\system\\pdn\\inc\\pdn_hw_mt6260_series.h"

#line 105 "hal\\system\\pdn\\inc\\pdn_hw_mt6260_series.h"

#line 116 "hal\\system\\pdn\\inc\\pdn_hw_mt6260_series.h"














#line 136 "hal\\system\\pdn\\inc\\pdn_hw_mt6260_series.h"


 













#line 158 "hal\\system\\pdn\\inc\\pdn_hw_mt6260_series.h"









 










#line 184 "hal\\system\\pdn\\inc\\pdn_hw_mt6260_series.h"




 













 














#line 118 "hal\\system\\pdn\\inc\\pdn_hw_series.h"




#line 468 "hal\\system\\pdn\\inc\\drvpdn.h"



 





 




enum { PDN_OPT_32BIT_REG = 0x01, PDN_OPT_16BIT_REG = 0x02, PDN_OPT_NEVER_OFF = 0x04, PDN_OPT_INVERSED_POLARITY = 0x08};






 

 
typedef enum {
#line 1 "hal\\system\\pdn\\inc\\pdn_def.h"

































 










































































































 














































#line 1 "hal\\system\\pdn\\inc\\pdn_def_mt6260_series.h"

































 











































 




 


































 












































































#line 190 "hal\\system\\pdn\\inc\\pdn_def.h"
#line 500 "hal\\system\\pdn\\inc\\drvpdn.h"


    PDN_MAX_DEV
} PDN_DEVICE;

typedef enum {
#line 1 "hal\\system\\pdn\\inc\\pdn_def.h"

































 










































































































 














































#line 1 "hal\\system\\pdn\\inc\\pdn_def_mt6260_series.h"

































 











































 




 

PDN_UART1_CON_REG = (kal_int32)((0xA0010000)+0x0304),
PDN_UART2_CON_REG = (kal_int32)((0xA0010000)+0x0304),

PDN_GCU_CON_REG = (kal_int32)((0x83000000)+0x0008),
PDN_DMA_CON_REG = (kal_int32)((0xA0010000)+0x0304),
PDN_SIM_CON_REG = (kal_int32)((0xA0010000)+0x0304),

PDN_ADC_CON_REG = (kal_int32)((0xA0730000)+0x0008),
PDN_GPT_CON_REG = (kal_int32)((0xA0010000)+0x0308),
PDN_PWM_CON_REG = (kal_int32)((0xA0010000)+0x0308),
PDN_PWM2_CON_REG = (kal_int32)((0xA0730000)+0x0008),
PDN_USB_CON_REG = (kal_int32)((0xA0010000)+0x0304),

PDN_MSDC_CON_REG = (kal_int32)((0xA0010000)+0x0304),
PDN_NFI_CON_REG = (kal_int32)((0xA0010000)+0x0308),




PDN_RESZ_CON_REG = (kal_int32)((0xA0010000)+0x0300),




PDN_MSDC2_CON_REG = (kal_int32)((0xA0010000)+0x0308),
PDN_SIM2_CON_REG = (kal_int32)((0xA0010000)+0x0304),
PDN_ROTDMA_CON_REG = (kal_int32)((0xA0010000)+0x0300),






 


PDN_IRDMA_CON_REG = (kal_int32)((0x82C00000)+0x0000),
PDN_IRDBG_CON_REG = (kal_int32)((0x82C00000)+0x0000),



PDN_LCD_CON_REG = (kal_int32)((0xA0010000)+0x0300),

PDN_TP_CON_REG = (kal_int32)((0xA0730000)+0x0008),


PDN_TDMA_CON_REG = (kal_int32)((0x83000000)+0x0008),

PDN_BSI_CON_REG = (kal_int32)((0x83000000)+0x0088),
PDN_BPI_CON_REG = (kal_int32)((0x83000000)+0x0088),

PDN_APC_PRE_CON_REG = (kal_int32)((0x82C00000)+0x0008),
PDN_APC_CON_REG = (kal_int32)((0x82C00000)+0x0030),
PDN_FCS_CON_REG = (kal_int32)((0x83000000)+0x0008),
PDN_VAFE_CON_REG = (kal_int32)((0x82C00000)+0x0008),
PDN_BFE_CON_REG = (kal_int32)((0x82C00000)+0x0008),
PDN_GCC_CON_REG = (kal_int32)((0x82C00000)+0x0000),
PDN_DIV_CON_REG = (kal_int32)((0x83000000)+0x0008),


PDN_I2C_CON_REG = (kal_int32)((0xA0010000)+0x0304),
PDN_SPI_CON_REG = (kal_int32)((0xA0010000)+0x0304),
PDN_OSTIMER_CON_REG = (kal_int32)((0xA0010000)+0x0304),
PDN_HIF_CON_REG = (kal_int32)((0xA0010000)+0x0304),




PDN_PWM3_CON_REG = (kal_int32)((0xA0730000)+0x0008),
PDN_SEJ_CON_REG = (kal_int32)((0xA0010000)+0x0304),
PDN_G2D_CON_REG = (kal_int32)((0xA0010000)+0x0304),




PDN_BTIF_CON_REG = (kal_int32)((0xA0010000)+0x0308),
PDN_LZMA_CON_REG = (kal_int32)((0xA0010000)+0x0308),
PDN_ROM_CON_REG = (kal_int32)((0xA0010000)+0x0308),
PDN_EFUSE_CON_REG = (kal_int32)((0xA0010000)+0x0308),
PDN_SW_LPM_CON_REG = (kal_int32)((0xA0010000)+0x0308),
PDN_RXBUF_CON_REG = (kal_int32)((0x82C00000)+0x0000),
PDN_TXBUF_CON_REG = (kal_int32)((0x82C00000)+0x0000),
PDN_AHB2DSPIO_CON_REG = (kal_int32)((0x82C00000)+0x0000),
PDN_BSI_T_CON_REG = (kal_int32)((0x83000000)+0x0008),
PDN_BPI_T_CON_REG = (kal_int32)((0x83000000)+0x0008),
PDN_CAM_BCLK_CON_REG = (kal_int32)((0xA0010000)+0x0300),
PDN_PAD2CAM_CON_REG = (kal_int32)((0xA0010000)+0x0300),

PDN_SLCD_CON_REG = (kal_int32)((0xA0010000)+0x0300),
PDN_MM_COLOR_CON_REG = (kal_int32)((0xA0010000)+0x0300),
PDN_BT_26M_CON_REG = (kal_int32)((0xA0010000)+0x0300),
PDN_MD2G_26M_CON_REG = (kal_int32)((0xA0010000)+0x0300),
PDN_CAM_48M_CON_REG = (kal_int32)((0xA0010000)+0x0300),

PDN_DMA2SFC_CON_REG = (kal_int32)((0xA0010000)+0x0300),
PDN_BT_BUS_CON_REG = (kal_int32)((0xA0010000)+0x0300),

PDN_BT_ARM7_CON_REG = (kal_int32)((0xA0010000)+0x0300),

PDN_2GDMA2SFC_CON_REG = (kal_int32)((0xA0010000)+0x0300),


PDN_PMU_26M_CON_REG = (kal_int32)((0xA0730000)+0x0008),



PDN_SFC_CON_REG = (kal_int32)((0xA0010000)+0x0308),
PDN_SPI_NAND_CON_REG = (kal_int32)((0xA0010000)+0x0308),
PDN_FM_F26M_CON_REG = (kal_int32)((0xA0010000)+0x0308),
PDN_FM_BCLK_CON_REG = (kal_int32)((0xA0010000)+0x0308),
#line 190 "hal\\system\\pdn\\inc\\pdn_def.h"
#line 514 "hal\\system\\pdn\\inc\\drvpdn.h"


    PDN_MAX_CON_REG
} PDN_CON_REG;

typedef enum {
#line 1 "hal\\system\\pdn\\inc\\pdn_def.h"

































 










































































































 














































#line 1 "hal\\system\\pdn\\inc\\pdn_def_mt6260_series.h"

































 











































 




 

PDN_UART1_SET_REG = (kal_int32)((0xA0010000)+0x0314),
PDN_UART2_SET_REG = (kal_int32)((0xA0010000)+0x0314),

PDN_GCU_SET_REG = (kal_int32)((0x83000000)+0x0028),
PDN_DMA_SET_REG = (kal_int32)((0xA0010000)+0x0314),
PDN_SIM_SET_REG = (kal_int32)((0xA0010000)+0x0314),

PDN_ADC_SET_REG = (kal_int32)((0xA0730000)+0x000C),
PDN_GPT_SET_REG = (kal_int32)((0xA0010000)+0x0318),
PDN_PWM_SET_REG = (kal_int32)((0xA0010000)+0x0318),
PDN_PWM2_SET_REG = (kal_int32)((0xA0730000)+0x000C),
PDN_USB_SET_REG = (kal_int32)((0xA0010000)+0x0314),

PDN_MSDC_SET_REG = (kal_int32)((0xA0010000)+0x0314),
PDN_NFI_SET_REG = (kal_int32)((0xA0010000)+0x0318),




PDN_RESZ_SET_REG = (kal_int32)((0xA0010000)+0x0310),




PDN_MSDC2_SET_REG = (kal_int32)((0xA0010000)+0x0318),
PDN_SIM2_SET_REG = (kal_int32)((0xA0010000)+0x0314),
PDN_ROTDMA_SET_REG = (kal_int32)((0xA0010000)+0x0310),






 


PDN_IRDMA_SET_REG = (kal_int32)((0x82C00000)+0x0010),
PDN_IRDBG_SET_REG = (kal_int32)((0x82C00000)+0x0010),



PDN_LCD_SET_REG = (kal_int32)((0xA0010000)+0x0310),

PDN_TP_SET_REG = (kal_int32)((0xA0730000)+0x000C),


PDN_TDMA_SET_REG = (kal_int32)((0x83000000)+0x0028),

PDN_BSI_SET_REG = (kal_int32)((0x83000000)+0x00A8),
PDN_BPI_SET_REG = (kal_int32)((0x83000000)+0x00A8),

PDN_APC_PRE_SET_REG = (kal_int32)((0x82C00000)+0x0018),
PDN_APC_SET_REG = (kal_int32)((0x82C00000)+0x0034),
PDN_FCS_SET_REG = (kal_int32)((0x83000000)+0x0028),
PDN_VAFE_SET_REG = (kal_int32)((0x82C00000)+0x0018),
PDN_BFE_SET_REG = (kal_int32)((0x82C00000)+0x0018),
PDN_GCC_SET_REG = (kal_int32)((0x82C00000)+0x0010),
PDN_DIV_SET_REG = (kal_int32)((0x83000000)+0x0028),


PDN_I2C_SET_REG = (kal_int32)((0xA0010000)+0x0314),
PDN_SPI_SET_REG = (kal_int32)((0xA0010000)+0x0314),
PDN_OSTIMER_SET_REG = (kal_int32)((0xA0010000)+0x0314),
PDN_HIF_SET_REG = (kal_int32)((0xA0010000)+0x0314),




PDN_PWM3_SET_REG = (kal_int32)((0xA0730000)+0x000C),
PDN_SEJ_SET_REG = (kal_int32)((0xA0010000)+0x0314),
PDN_G2D_SET_REG = (kal_int32)((0xA0010000)+0x0314),




PDN_BTIF_SET_REG = (kal_int32)((0xA0010000)+0x0318),
PDN_LZMA_SET_REG = (kal_int32)((0xA0010000)+0x0318),
PDN_ROM_SET_REG = (kal_int32)((0xA0010000)+0x0318),
PDN_EFUSE_SET_REG = (kal_int32)((0xA0010000)+0x0318),
PDN_SW_LPM_SET_REG = (kal_int32)((0xA0010000)+0x0318),
PDN_RXBUF_SET_REG = (kal_int32)((0x82C00000)+0x0010),
PDN_TXBUF_SET_REG = (kal_int32)((0x82C00000)+0x0010),
PDN_AHB2DSPIO_SET_REG = (kal_int32)((0x82C00000)+0x0010),
PDN_BSI_T_SET_REG = (kal_int32)((0x83000000)+0x0028),
PDN_BPI_T_SET_REG = (kal_int32)((0x83000000)+0x0028),
PDN_CAM_BCLK_SET_REG = (kal_int32)((0xA0010000)+0x0310),
PDN_PAD2CAM_SET_REG = (kal_int32)((0xA0010000)+0x0310),

PDN_SLCD_SET_REG = (kal_int32)((0xA0010000)+0x0310),
PDN_MM_COLOR_SET_REG = (kal_int32)((0xA0010000)+0x0310),
PDN_BT_26M_SET_REG = (kal_int32)((0xA0010000)+0x0310),
PDN_MD2G_26M_SET_REG = (kal_int32)((0xA0010000)+0x0310),
PDN_CAM_48M_SET_REG = (kal_int32)((0xA0010000)+0x0310),

PDN_DMA2SFC_SET_REG = (kal_int32)((0xA0010000)+0x0310),
PDN_BT_BUS_SET_REG = (kal_int32)((0xA0010000)+0x0310),

PDN_BT_ARM7_SET_REG = (kal_int32)((0xA0010000)+0x0310),

PDN_2GDMA2SFC_SET_REG = (kal_int32)((0xA0010000)+0x0310),


PDN_PMU_26M_SET_REG = (kal_int32)((0xA0730000)+0x000C),



PDN_SFC_SET_REG = (kal_int32)((0xA0010000)+0x0318),
PDN_SPI_NAND_SET_REG = (kal_int32)((0xA0010000)+0x0318),
PDN_FM_F26M_SET_REG = (kal_int32)((0xA0010000)+0x0318),
PDN_FM_BCLK_SET_REG = (kal_int32)((0xA0010000)+0x0318),
#line 190 "hal\\system\\pdn\\inc\\pdn_def.h"
#line 528 "hal\\system\\pdn\\inc\\drvpdn.h"


    PDN_MAX_SET_REG
} PDN_SET_REG;

typedef enum {
#line 1 "hal\\system\\pdn\\inc\\pdn_def.h"

































 










































































































 














































#line 1 "hal\\system\\pdn\\inc\\pdn_def_mt6260_series.h"

































 











































 




 

PDN_UART1_CLR_REG = (kal_int32)((0xA0010000)+0x0324),
PDN_UART2_CLR_REG = (kal_int32)((0xA0010000)+0x0324),

PDN_GCU_CLR_REG = (kal_int32)((0x83000000)+0x0018),
PDN_DMA_CLR_REG = (kal_int32)((0xA0010000)+0x0324),
PDN_SIM_CLR_REG = (kal_int32)((0xA0010000)+0x0324),

PDN_ADC_CLR_REG = (kal_int32)((0xA0730000)+0x0010),
PDN_GPT_CLR_REG = (kal_int32)((0xA0010000)+0x0328),
PDN_PWM_CLR_REG = (kal_int32)((0xA0010000)+0x0328),
PDN_PWM2_CLR_REG = (kal_int32)((0xA0730000)+0x0010),
PDN_USB_CLR_REG = (kal_int32)((0xA0010000)+0x0324),

PDN_MSDC_CLR_REG = (kal_int32)((0xA0010000)+0x0324),
PDN_NFI_CLR_REG = (kal_int32)((0xA0010000)+0x0328),




PDN_RESZ_CLR_REG = (kal_int32)((0xA0010000)+0x0320),




PDN_MSDC2_CLR_REG = (kal_int32)((0xA0010000)+0x0328),
PDN_SIM2_CLR_REG = (kal_int32)((0xA0010000)+0x0324),
PDN_ROTDMA_CLR_REG = (kal_int32)((0xA0010000)+0x0320),






 


PDN_IRDMA_CLR_REG = (kal_int32)((0x82C00000)+0x0020),
PDN_IRDBG_CLR_REG = (kal_int32)((0x82C00000)+0x0020),



PDN_LCD_CLR_REG = (kal_int32)((0xA0010000)+0x0320),

PDN_TP_CLR_REG = (kal_int32)((0xA0730000)+0x0010),


PDN_TDMA_CLR_REG = (kal_int32)((0x83000000)+0x0018),

PDN_BSI_CLR_REG = (kal_int32)((0x83000000)+0x0098),
PDN_BPI_CLR_REG = (kal_int32)((0x83000000)+0x0098),

PDN_APC_PRE_CLR_REG = (kal_int32)((0x82C00000)+0x0028),
PDN_APC_CLR_REG = (kal_int32)((0x82C00000)+0x0038),
PDN_FCS_CLR_REG = (kal_int32)((0x83000000)+0x0018),
PDN_VAFE_CLR_REG = (kal_int32)((0x82C00000)+0x0028),
PDN_BFE_CLR_REG = (kal_int32)((0x82C00000)+0x0028),
PDN_GCC_CLR_REG = (kal_int32)((0x82C00000)+0x0020),
PDN_DIV_CLR_REG = (kal_int32)((0x83000000)+0x0018),


PDN_I2C_CLR_REG = (kal_int32)((0xA0010000)+0x0324),
PDN_SPI_CLR_REG = (kal_int32)((0xA0010000)+0x0324),
PDN_OSTIMER_CLR_REG = (kal_int32)((0xA0010000)+0x0324),
PDN_HIF_CLR_REG = (kal_int32)((0xA0010000)+0x0324),




PDN_PWM3_CLR_REG = (kal_int32)((0xA0730000)+0x0010),
PDN_SEJ_CLR_REG = (kal_int32)((0xA0010000)+0x0324),
PDN_G2D_CLR_REG = (kal_int32)((0xA0010000)+0x0324),




PDN_BTIF_CLR_REG = (kal_int32)((0xA0010000)+0x0328),
PDN_LZMA_CLR_REG = (kal_int32)((0xA0010000)+0x0328),
PDN_ROM_CLR_REG = (kal_int32)((0xA0010000)+0x0328),
PDN_EFUSE_CLR_REG = (kal_int32)((0xA0010000)+0x0328),
PDN_SW_LPM_CLR_REG = (kal_int32)((0xA0010000)+0x0328),
PDN_RXBUF_CLR_REG = (kal_int32)((0x82C00000)+0x0020),
PDN_TXBUF_CLR_REG = (kal_int32)((0x82C00000)+0x0020),
PDN_AHB2DSPIO_CLR_REG = (kal_int32)((0x82C00000)+0x0020),
PDN_BSI_T_CLR_REG = (kal_int32)((0x83000000)+0x0018),
PDN_BPI_T_CLR_REG = (kal_int32)((0x83000000)+0x0018),
PDN_CAM_BCLK_CLR_REG = (kal_int32)((0xA0010000)+0x0320),
PDN_PAD2CAM_CLR_REG = (kal_int32)((0xA0010000)+0x0320),

PDN_SLCD_CLR_REG = (kal_int32)((0xA0010000)+0x0320),
PDN_MM_COLOR_CLR_REG = (kal_int32)((0xA0010000)+0x0320),
PDN_BT_26M_CLR_REG = (kal_int32)((0xA0010000)+0x0320),
PDN_MD2G_26M_CLR_REG = (kal_int32)((0xA0010000)+0x0320),
PDN_CAM_48M_CLR_REG = (kal_int32)((0xA0010000)+0x0320),

PDN_DMA2SFC_CLR_REG = (kal_int32)((0xA0010000)+0x0320),
PDN_BT_BUS_CLR_REG = (kal_int32)((0xA0010000)+0x0320),

PDN_BT_ARM7_CLR_REG = (kal_int32)((0xA0010000)+0x0320),

PDN_2GDMA2SFC_CLR_REG = (kal_int32)((0xA0010000)+0x0320),


PDN_PMU_26M_CLR_REG = (kal_int32)((0xA0730000)+0x0010),



PDN_SFC_CLR_REG = (kal_int32)((0xA0010000)+0x0328),
PDN_SPI_NAND_CLR_REG = (kal_int32)((0xA0010000)+0x0328),
PDN_FM_F26M_CLR_REG = (kal_int32)((0xA0010000)+0x0328),
PDN_FM_BCLK_CLR_REG = (kal_int32)((0xA0010000)+0x0328),
#line 190 "hal\\system\\pdn\\inc\\pdn_def.h"
#line 542 "hal\\system\\pdn\\inc\\drvpdn.h"


    PDN_MAX_CLR_REG
} PDN_CLR_REG;

typedef enum {
#line 1 "hal\\system\\pdn\\inc\\pdn_def.h"

































 










































































































 














































#line 1 "hal\\system\\pdn\\inc\\pdn_def_mt6260_series.h"

































 











































 




 

PDN_UART1_REG_BIT = (kal_int32)0x2000,
PDN_UART2_REG_BIT = (kal_int32)0x4000,

PDN_GCU_REG_BIT = (kal_int32)0x2000,
PDN_DMA_REG_BIT = (kal_int32)0x0002,
PDN_SIM_REG_BIT = (kal_int32)0x0010,

PDN_ADC_REG_BIT = (kal_int32)0x0004,
PDN_GPT_REG_BIT = (kal_int32)0x0004,
PDN_PWM_REG_BIT = (kal_int32)0x0001,
PDN_PWM2_REG_BIT = (kal_int32)0x0002,
PDN_USB_REG_BIT = (kal_int32)0x0004,

PDN_MSDC_REG_BIT = (kal_int32)0x0008,
PDN_NFI_REG_BIT = (kal_int32)0x0200,




PDN_RESZ_REG_BIT = (kal_int32)0x0002,




PDN_MSDC2_REG_BIT = (kal_int32)0x0400,
PDN_SIM2_REG_BIT = (kal_int32)0x0020,
PDN_ROTDMA_REG_BIT = (kal_int32)0x0004,






 


PDN_IRDMA_REG_BIT = (kal_int32)0x0040,
PDN_IRDBG_REG_BIT = (kal_int32)0x2000,



PDN_LCD_REG_BIT = (kal_int32)0x0001,

PDN_TP_REG_BIT = (kal_int32)0x0008,


PDN_TDMA_REG_BIT = (kal_int32)0x0001,

PDN_BSI_REG_BIT = (kal_int32)0x0004,
PDN_BPI_REG_BIT = (kal_int32)0x0008,

PDN_APC_PRE_REG_BIT = (kal_int32)0x0020,
PDN_APC_REG_BIT = (kal_int32)0x0020,
PDN_FCS_REG_BIT = (kal_int32)0x1000,
PDN_VAFE_REG_BIT = (kal_int32)0x0100,
PDN_BFE_REG_BIT = (kal_int32)0x0200,
PDN_GCC_REG_BIT = (kal_int32)0x0002,
PDN_DIV_REG_BIT = (kal_int32)0x0800,


PDN_I2C_REG_BIT = (kal_int32)0x0040,
PDN_SPI_REG_BIT = (kal_int32)0x0080,
PDN_OSTIMER_REG_BIT = (kal_int32)0x0100,
PDN_HIF_REG_BIT = (kal_int32)0x0200,




PDN_PWM3_REG_BIT = (kal_int32)0x0001,
PDN_SEJ_REG_BIT = (kal_int32)0x0001,
PDN_G2D_REG_BIT = (kal_int32)0x0020,




PDN_BTIF_REG_BIT = (kal_int32)0x0002,
PDN_LZMA_REG_BIT = (kal_int32)0x0010,
PDN_ROM_REG_BIT = (kal_int32)0x0020,
PDN_EFUSE_REG_BIT = (kal_int32)0x0040,
PDN_SW_LPM_REG_BIT = (kal_int32)0x0080,
PDN_RXBUF_REG_BIT = (kal_int32)0x0100,
PDN_TXBUF_REG_BIT = (kal_int32)0x0200,
PDN_AHB2DSPIO_REG_BIT = (kal_int32)0x8000,
PDN_BSI_T_REG_BIT = (kal_int32)0x0004,
PDN_BPI_T_REG_BIT = (kal_int32)0x0008,
PDN_CAM_BCLK_REG_BIT = (kal_int32)0x0008,
PDN_PAD2CAM_REG_BIT = (kal_int32)0x0010,

PDN_SLCD_REG_BIT = (kal_int32)0x0080,
PDN_MM_COLOR_REG_BIT = (kal_int32)0x0040,
PDN_BT_26M_REG_BIT = (kal_int32)0x0200,
PDN_MD2G_26M_REG_BIT = (kal_int32)0x0100,
PDN_CAM_48M_REG_BIT = (kal_int32)0x0400,

PDN_DMA2SFC_REG_BIT = (kal_int32)0x0800,
PDN_BT_BUS_REG_BIT = (kal_int32)0x2000,

PDN_BT_ARM7_REG_BIT = (kal_int32)0x8000,

PDN_2GDMA2SFC_REG_BIT = (kal_int32)0x1000,


PDN_PMU_26M_REG_BIT = (kal_int32)0x0010,



PDN_SFC_REG_BIT = (kal_int32)0x0800,
PDN_SPI_NAND_REG_BIT = (kal_int32)0x1000,
PDN_FM_F26M_REG_BIT = (kal_int32)0x2000,
PDN_FM_BCLK_REG_BIT = (kal_int32)0x4000,
#line 190 "hal\\system\\pdn\\inc\\pdn_def.h"
#line 556 "hal\\system\\pdn\\inc\\drvpdn.h"


    PDN_MAX_REG_BIT
} PDN_REG_BIT;

typedef enum {
#line 1 "hal\\system\\pdn\\inc\\pdn_def.h"

































 










































































































 














































#line 1 "hal\\system\\pdn\\inc\\pdn_def_mt6260_series.h"

































 











































 




 

PDN_UART1_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG | PDN_OPT_NEVER_OFF,
PDN_UART2_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG | PDN_OPT_NEVER_OFF,

PDN_GCU_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_DMA_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_SIM_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

PDN_ADC_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
PDN_GPT_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_PWM_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_PWM2_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
PDN_USB_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

PDN_MSDC_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_NFI_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,




PDN_RESZ_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,




PDN_MSDC2_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_SIM2_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_ROTDMA_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,






 


PDN_IRDMA_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
PDN_IRDBG_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,



PDN_LCD_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

PDN_TP_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,


PDN_TDMA_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

PDN_BSI_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_BPI_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

PDN_APC_PRE_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
PDN_APC_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
PDN_FCS_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_VAFE_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
PDN_BFE_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
PDN_GCC_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
PDN_DIV_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,


PDN_I2C_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_SPI_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_OSTIMER_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_HIF_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,




PDN_PWM3_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
PDN_SEJ_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_G2D_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,




PDN_BTIF_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_LZMA_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_ROM_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_EFUSE_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_SW_LPM_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_RXBUF_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
PDN_TXBUF_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
PDN_AHB2DSPIO_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,
PDN_BSI_T_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_BPI_T_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_CAM_BCLK_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_PAD2CAM_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

PDN_SLCD_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_MM_COLOR_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_BT_26M_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_MD2G_26M_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_CAM_48M_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

PDN_DMA2SFC_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_BT_BUS_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

PDN_BT_ARM7_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,

PDN_2GDMA2SFC_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,


PDN_PMU_26M_REG_WIDTH = (kal_int32)PDN_OPT_16BIT_REG,



PDN_SFC_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_SPI_NAND_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_FM_F26M_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
PDN_FM_BCLK_REG_WIDTH = (kal_int32)PDN_OPT_32BIT_REG,
#line 190 "hal\\system\\pdn\\inc\\pdn_def.h"
#line 570 "hal\\system\\pdn\\inc\\drvpdn.h"


    PDN_MAX_REG_WIDTH
} PDN_REG_WIDTH;







 

typedef struct
{
    kal_uint32 addr;
    kal_uint32 code;
    kal_uint32 ctrl;
    kal_uint8 options;
    kal_uint8 pad[3];
} PDN_INPUT;




 
#line 613 "hal\\system\\pdn\\inc\\drvpdn.h"




 
#line 660 "hal\\system\\pdn\\inc\\drvpdn.h"




 
#line 707 "hal\\system\\pdn\\inc\\drvpdn.h"






 
#line 722 "hal\\system\\pdn\\inc\\drvpdn.h"




 

extern void DRVPDN_Enable(PDN_DEVICE handle);
extern void DRVPDN_Disable(PDN_DEVICE hanlde);





#line 351 "hal\\system\\dma\\inc\\dma_hw.h"

#line 1688 "hal\\system\\dma\\inc\\dma_hw.h"

    
#line 1704 "hal\\system\\dma\\inc\\dma_hw.h"
                                       


                                       

                                       
                             




                                       



                                       
#line 1736 "hal\\system\\dma\\inc\\dma_hw.h"
                                       
#line 1749 "hal\\system\\dma\\inc\\dma_hw.h"

#line 1788 "hal\\system\\dma\\inc\\dma_hw.h"

#line 1865 "hal\\system\\dma\\inc\\dma_hw.h"





                                       

                                       

   
#line 1906 "hal\\system\\dma\\inc\\dma_hw.h"
                                       

#line 1919 "hal\\system\\dma\\inc\\dma_hw.h"

#line 1927 "hal\\system\\dma\\inc\\dma_hw.h"





#line 1941 "hal\\system\\dma\\inc\\dma_hw.h"

#line 1948 "hal\\system\\dma\\inc\\dma_hw.h"




   



#line 1986 "hal\\system\\dma\\inc\\dma_hw.h"



#line 2010 "hal\\system\\dma\\inc\\dma_hw.h"






#line 261 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"



#line 265 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"
#line 266 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"



#line 1 "hal\\storage\\flash\\mtd\\inc\\nand_devconfig.h"

































 













































 
 



 
typedef enum
{
    simu_NAND_0 = 0,
    simu_NAND_1,
    SAMSUNG_K9F2808U0C,
    SAMSUNG_K9F5608U0D,
    SAMSUNG_K9F1G08U0A,
    SAMSUNG_K9F1G08U0B,
    SAMSUNG_K9F4G08U0A,
    SAMSUNG_K9K8G08U0A,
    HYNIX_HY27UF081G2A,
    MICRON_29F4G08AAC,
    INTEL_29F08G08CAN,  
    HYNIX_HY27US08121B,
	PTC_FST1G54AUCA,

     
    MAX_NAND_NAME = 0x7FFFFFFF  
}nand_Name;



#line 270 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"



  
#line 283 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"




 
#line 295 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"



 





#line 314 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"

 
#line 323 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"

 
#line 342 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"


 




#line 427 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"







#line 442 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"



#line 735 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"

#line 902 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"



 





 






 
#line 938 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"








 
#line 959 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"

 
#line 976 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"

 






 
#line 1002 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"

#line 1009 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"





 
#line 1029 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"

#line 1037 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"

 
#line 1071 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"

 







 

 
#line 1109 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"

 
#line 1140 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"




 
 
#line 1155 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"

typedef struct NAND_ID_tag
{
    kal_uint32 mID:8;             
    kal_uint32 dID:8;             
    kal_uint32 dieNum:2;          
    kal_uint32 cellType:2;        
    kal_uint32 simultNum:2;       
    kal_uint32 dieInterleave:1;   
    kal_uint32 cacheProgram:1;    
    kal_uint32 pageSize:2;        
    kal_uint32 spareSize:1;       
    kal_uint32 accessTime0:1;     
    kal_uint32 blockSize:2;       
    kal_uint32 IOWidth:1;         
    kal_uint32 accessTime1:1;     
    kal_uint32 byte5Rev0:1;       
    kal_uint32 ToshibaExt:1;      
    kal_uint32 planeNum:2;        
    kal_uint32 planeSize:3;       
    kal_uint32 byte5Rev1:1;       
    kal_uint32 Reserve:24;        
}nAND_ID;


typedef struct
{
    kal_uint8  cmd[2];
    kal_uint8  cmd_len;
    kal_uint32 add[2];  
    kal_uint8  add_cycle;
    kal_uint8  *buff;
    kal_uint32 buff_len;
    kal_uint8  *spare;
    kal_uint32 spare_len;
    kal_uint32 intFlag;
    kal_uint8  ECCFlag;



}nAND_Cmd_info;


typedef struct mtd_lock_tag {
   kal_uint32  lock_count;
   kal_taskid  owner_id;
   kal_enhmutexid mtd_enhmutex;
} NAND_MTD_LOCK;

#line 1218 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"


#line 1227 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"



#line 1308 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"















 

typedef struct
{
    kal_uint32* page_p;
    kal_uint8  *buff;
    kal_uint8  *spare;
    kal_uint16 pageOffset;  
    kal_uint8  addCycle;
    kal_uint8  opFlag;
}mtd_drv_para;
 
#line 1343 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"
typedef struct multiPage_operation_tag
{
    kal_uint32 (*func_p) (mtd_drv_para* Para);           
    kal_uint8 startAlign;        
    kal_uint8 multiPageNum;     
}mPage_operation;




typedef struct
{
    kal_uint8  *buff;
    kal_uint8  *spare;
    kal_uint32 pageIdx[8];
    kal_uint16 length;
    kal_uint8  ce;
    kal_uint8  m_idx;   
    kal_uint8  opFlag;
}mtd_if_para;


typedef struct
{
	kal_uint32     (* ProgramPage)                   (mtd_drv_para* Para);
	kal_uint32     (* ReadPage)                      (mtd_drv_para* Para);
	kal_uint32     (* CopyPage)                      (mtd_drv_para* Para);
	kal_uint32     (* EraseBlock)                    (mtd_drv_para* Para);
 
	kal_uint32     (* TwoPlaneProgram)               (mtd_drv_para* Para); 
	kal_uint32     (* TwoDieProgram)                 (mtd_drv_para* Para); 
	kal_uint32     (* FourPlaneProgram)              (mtd_drv_para* Para); 
	kal_uint32     (* TwoDieTwoPlaneProgram)         (mtd_drv_para* Para); 
	kal_uint32     (* CacheProgram)                  (mtd_drv_para* Para);
	kal_uint32     (* TwoPlaneCacheProgram)          (mtd_drv_para* Para);
	kal_uint32     (* TwoDieCacheProgram)            (mtd_drv_para* Para);
	kal_uint32     (* FourPlaneCacheProgram)         (mtd_drv_para* Para);
	kal_uint32     (* TwoDieTwoPlaneCacheProgram)    (mtd_drv_para* Para);
 
	kal_uint32     (* TwoPlaneErase)               (mtd_drv_para* Para); 
	kal_uint32     (* TwoDieErase)                 (mtd_drv_para* Para); 
	kal_uint32     (* FourPlaneErase)              (mtd_drv_para* Para); 
	kal_uint32     (* TwoDieTwoPlaneErase)         (mtd_drv_para* Para); 
 
	kal_int32  	   (* OTPAccess)                   (kal_int32 accesstype, kal_uint32 PageAddr, void *BufferPtr, void *SparePtr);
	kal_int32      (* OTPQueryLength)              (kal_uint32 *Length);
} NAND_MTD_SUB_DRIVER;

typedef struct
{
    nand_Name               DevName_enum;         
    kal_uint8               ID_info[8];     
    kal_uint8               ID_valid_mask[8];   
    kal_uint8               IOWidth;
    kal_uint8               address_cycle;  
    kal_uint8               planeNum;       
    kal_uint8               dieNum;         
    kal_uint16              pageSize;
    kal_uint16              spareSize;
    kal_uint16              blockPage;
    kal_uint16              deviceSize;     
    kal_uint16              supportMPType;   
    kal_uint16              supportMEType;   
    kal_uint16              CopyBackType;   
    NAND_MTD_SUB_DRIVER*        driverSet;      
}flash_list  ;
 

 



 








 
enum
{
    ECC_SKIP = 0,            
    ECC_FIRST_HALF,      
    ECC_SECOND_HALF,     
    ECC_WHOLE            
};


 


#line 1483 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"
 


#line 1495 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"





 

kal_int32 MTD_MountDevice( void);
kal_uint32 MTD_CE_Interleave_Program (mtd_if_para* Para);
kal_uint32 MTD_CE_Interleave_CacheProgram (mtd_if_para* Para);
kal_uint32 MTD_Program (mtd_if_para* Para);
kal_uint32 MTD_CacheProgram (mtd_if_para* Para);
kal_uint32 MTD_Read(mtd_if_para* Para);
kal_uint32 MTD_Erase(mtd_if_para* Para);
kal_uint32 MTD_MarkBlockBad (mtd_if_para* Para);
kal_uint32 MTD_CheckBlockBad (mtd_if_para* Para);
kal_uint32 MTD_NAND_Reset(mtd_if_para* Para);
kal_int32 MTD_ShutDown	(void);

#line 1523 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"



 
kal_uint32 single_Page_Program (mtd_drv_para *para);
kal_uint32 single_Page_CacheProgram (mtd_drv_para *para);
kal_uint32 single_Page_Read (mtd_drv_para *para);
kal_uint32 single_Block_Erase (mtd_drv_para *para);
kal_uint32 toshiba_twoPlane_Program (mtd_drv_para *para);
kal_uint32 toshiba_twoPlane_Erase (mtd_drv_para *para);
kal_uint32 toshiba_fourPlane_Program (mtd_drv_para *para);
kal_uint32 toshiba_fourPlane_Erase (mtd_drv_para *para);
kal_uint32 toshiba_twoPlane_CacheProgram (mtd_drv_para *para);
kal_uint32 toshiba_fourPlane_CacheProgram (mtd_drv_para *para);
kal_uint32 samsung_twoPlane_Program (mtd_drv_para *para);
kal_uint32 samsung_twoPlane_Erase (mtd_drv_para *para);
kal_uint32 samsung_twoDie_Program (mtd_drv_para *para);
kal_uint32 samsung_twoDie_Erase (mtd_drv_para *para);
kal_uint32 samsung_twoDie_twoPlane_Program (mtd_drv_para *para);
kal_uint32 samsung_twoDie_twoPlane_Erase (mtd_drv_para *para);
kal_int32  samsung_OTPAccess(kal_int32 accesstype, kal_uint32 PageAddr, void *BufferPtr, void *SparePtr);
kal_int32  samsung_OTPQueryLength(kal_uint32 *Length);
kal_int32  hynix_OTPAccess(kal_int32 accesstype, kal_uint32 PageAddr, void *BufferPtr, void *SparePtr);
kal_int32  hynix_OTPQueryLength(kal_uint32 *Length);
kal_int32  ESMT_OTPAccess(kal_int32 accesstype, kal_uint32 PageAddr, void *BufferPtr, void *SparePtr);
kal_int32  ESMT_OTPQueryLength(kal_uint32 *Length);
kal_int32  micron_OTPAccess(kal_int32 accesstype, kal_uint32 PageAddr, void *BufferPtr, void *SparePtr);
kal_int32  micron_OTPQueryLength(kal_uint32 *Length);
kal_int32  NAND_OTPAccess(kal_int32 accesstype, kal_uint32 PageAddr, void *BufferPtr, void *SparePtr);
kal_int32  NAND_OTPQueryLength(kal_uint32 *Length);
kal_uint32 micron_twoPlane_Program (mtd_drv_para *para);
kal_uint32 micron_twoPlane_Erase (mtd_drv_para *para);
kal_uint32 micron_twoPlane_CacheProgram (mtd_drv_para *para);
kal_uint32 micron_twoDie_Program (mtd_drv_para *para);
kal_uint32 micron_twoDie_Erase (mtd_drv_para *para);
kal_uint32 micron_twoDie_twoPlane_Program (mtd_drv_para *para);
kal_uint32 micron_twoDie_twoPlane_Erase (mtd_drv_para *para);
kal_uint32 micron_twoDie_CacheProgram (mtd_drv_para *para);
kal_uint32 micron_twoDie_twoPlane_CacheProgram (mtd_drv_para *para);

kal_uint32 FlashCheckID(const flash_list *ID_table);

kal_uint8 read_status(kal_uint8 cmd1, nAND_Cmd_info* info );
kal_int32 InitializeMTD(void * DriveData);
void nfi_lisr(void);
void nfi_hisr(void);
void NFI_DMA_Callback(void);
void pdn_nfi(kal_bool ON);
void NAND_GPIO_InitIO(char direction, char port);
char NAND_GPIO_ReturnMode(char port);
char NAND_GPIO_ReadIO(char port);
void NAND_GPIO_WriteIO(char data, char port);
kal_bool NAND_INT_USBBoot(void);



 






#line 1592 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"












typedef struct
{
   kal_uint16     id;
   kal_uint16     plane_size;      
   kal_uint16     block_size;      
   kal_uint8      io_width;        
}  superand_flash_list;


typedef struct
{
	kal_int32     (* MountDevice)    (void * DriveData);
	kal_int32     (* ShutDown)       (void * DriveData);
	kal_int32     (* ReadPages)      (void * DriveData, kal_uint32 PageIndex, kal_uint32 Pages, kal_uint8 * Data);
	kal_int32     (* RewritePages)   (void * DriveData, kal_uint32 PageIndex, kal_uint32 Pages, kal_uint8 * Data);
	kal_int32     (* ProgramData)    (void * DriveData, kal_uint32 PageIndex, kal_uint32 Bytes, kal_uint8 * Data);
	kal_int32     (* EraseBlock)     (void * DriveData, kal_uint32 PageIndex);
	kal_int32     (* ReadGoodBlkCnt) (void * DriveData);
} SuperAND_MTD_DRIVER;

#line 1648 "hal\\storage\\flash\\mtd\\inc\\NAND_MTD_FDM50_internal.h"

void SuperAND_MTD_Init(void);
kal_int32 SuperAND_MTD_MountDevice(void * DriveData);
kal_int32 SuperAND_MTD_ShutDown(void * DriveData);
kal_int32 SuperAND_MTD_ReadPages(void * DriveData, kal_uint32 PageIndex, kal_uint32 Pages, kal_uint8 * Data);
kal_int32 SuperAND_MTD_RewritePages(void * DriveData, kal_uint32 PageIndex, kal_uint32 Pages, kal_uint8 * Data);
kal_int32 SuperAND_MTD_ProgramData(void * DriveData, kal_uint32 PageIndex, kal_uint32 Bytes, kal_uint8 * Data);
kal_int32 SuperAND_MTD_EraseBlock(void * DriveData, kal_uint32 PageIndex);
kal_int32 SuperAND_MTD_ReadGoodBlkCnt(void * DriveData);

kal_uint16 superand_read_device_id(kal_uint16 csel);
kal_bool superand_checkdevice(void * DriveData);
kal_int32 superand_writefifo(void * DriveData, kal_uint32 PageIndex, kal_uint8 * Data, kal_uint32 Bytes, kal_bool rewrite);
void superand_readfifo(kal_uint8 * Data, kal_uint32 Pages);
kal_uint8 superand_read_status(void);


extern kal_uint32 custom_part_secs;

extern NAND_MTD_SUB_DRIVER SAMSUNG_SINGLE_CACHE_SUB_DRIVER;
extern NAND_MTD_SUB_DRIVER SAMSUNG_SUB_DRIVER;
extern NAND_MTD_SUB_DRIVER HYNIX_ST_SUB_DRIVER;
extern NAND_MTD_SUB_DRIVER TOSHIBA_SUB_DRIVER;
extern NAND_MTD_SUB_DRIVER MICRON_SUB_DRIVER;




#line 318 "hal\\storage\\flash\\fdm\\inc\\NAND_FDM.h"
#line 1 "interface\\hal\\storage\\nand_dal.h"

































 

















































































































 





 
#line 1 "interface\\fota\\fota_error.h"

































 





































 









 
#line 116 "interface\\fota\\fota_error.h"



 


#line 131 "interface\\fota\\fota_error.h"

#line 156 "interface\\hal\\storage\\nand_dal.h"


#line 159 "interface\\hal\\storage\\nand_dal.h"



 
#line 170 "interface\\hal\\storage\\nand_dal.h"





 
kal_int32 DAL_init (void);
kal_uint32 DAL_GetBlockSize(void);
kal_uint32 DAL_GetPageSize(void);
kal_bool NANDsanitycheck_Factory(void);

#line 210 "interface\\hal\\storage\\nand_dal.h"

#line 319 "hal\\storage\\flash\\fdm\\inc\\NAND_FDM.h"
#line 1 "hal\\storage\\flash\\mtd\\inc\\nand_dal_internal.h"

































 

























































































































 





 
#line 164 "hal\\storage\\flash\\mtd\\inc\\nand_dal_internal.h"
#line 165 "hal\\storage\\flash\\mtd\\inc\\nand_dal_internal.h"
#line 1 "hal\\storage\\flash\\mtd\\inc\\SPI_NAND_MTD_FDM50_internal.h"

































 



















 






#line 62 "hal\\storage\\flash\\mtd\\inc\\SPI_NAND_MTD_FDM50_internal.h"
#line 63 "hal\\storage\\flash\\mtd\\inc\\SPI_NAND_MTD_FDM50_internal.h"
#line 1 "hal\\storage\\flash\\mtd\\inc\\snand_hw.h"

































 



















 



#line 59 "hal\\storage\\flash\\mtd\\inc\\snand_hw.h"
#line 60 "hal\\storage\\flash\\mtd\\inc\\snand_hw.h"





typedef volatile kal_uint8 *    SNAND_P_U8;
typedef volatile kal_int8 *     SNAND_P_S8;
typedef volatile kal_uint16 *   SNAND_P_U16;
typedef volatile kal_int16 *    SNAND_P_S16;
typedef volatile kal_uint32 *   SNAND_P_U32;
typedef volatile kal_int32 *    SNAND_P_S32;


#line 88 "hal\\storage\\flash\\mtd\\inc\\snand_hw.h"






#line 103 "hal\\storage\\flash\\mtd\\inc\\snand_hw.h"
































































#line 184 "hal\\storage\\flash\\mtd\\inc\\snand_hw.h"





































#line 235 "hal\\storage\\flash\\mtd\\inc\\snand_hw.h"



















#line 265 "hal\\storage\\flash\\mtd\\inc\\snand_hw.h"
















#line 287 "hal\\storage\\flash\\mtd\\inc\\snand_hw.h"










#line 305 "hal\\storage\\flash\\mtd\\inc\\snand_hw.h"
























#line 64 "hal\\storage\\flash\\mtd\\inc\\SPI_NAND_MTD_FDM50_internal.h"
#line 65 "hal\\storage\\flash\\mtd\\inc\\SPI_NAND_MTD_FDM50_internal.h"


    


 

    








 

#line 90 "hal\\storage\\flash\\mtd\\inc\\SPI_NAND_MTD_FDM50_internal.h"

typedef struct
{
    kal_uint32  page_size;
    kal_uint32  row_addr;
    kal_uint32  col_addr;
    kal_uint32  data_bytes;
    kal_uint32  spare_bytes;    
    kal_uint8   * data;
    kal_uint8   * spare;
} SNAND_MTD_DRV_PARA;


typedef enum {
     SNAND_UNDEF     = 0
    ,SNAND_SPI       = 1
    ,SNAND_SPIQ      = 2
} SNAND_Mode;

typedef enum {
     SNAND_PART_BEGIN       = 0
    ,SNAND_DATA_PART        = 0
    ,SNAND_SPARE_PART       = 1
    ,SNAND_PART_END         = 2
} SNAND_Data_Parts;

typedef union {
    kal_uint32   u32;
    kal_uint16   u16[2];
    kal_uint8    u8[4];
} SNAND_Uint;







#line 136 "hal\\storage\\flash\\mtd\\inc\\SPI_NAND_MTD_FDM50_internal.h"


























#line 172 "hal\\storage\\flash\\mtd\\inc\\SPI_NAND_MTD_FDM50_internal.h"



 
extern void         SNAND_COMMON_SetBadBlockMark(kal_uint16 mark, void * spare);
extern kal_uint16   SNAND_COMMON_GetBadBlockMark(void * spare);



 
#line 236 "hal\\storage\\flash\\mtd\\inc\\SPI_NAND_MTD_FDM50_internal.h"




















#line 166 "hal\\storage\\flash\\mtd\\inc\\nand_dal_internal.h"
#line 167 "hal\\storage\\flash\\mtd\\inc\\nand_dal_internal.h"

typedef struct flash_info_tag_2
{
    flash_list          deviceInfo_CE[2];
    kal_uint8           valid_CE[2];     
    kal_uint8           bank_CE[2];     
    kal_uint8           zone_CE[2];     
    kal_uint32          devicePage[2];
    kal_uint32          diePage[2];
    kal_uint32          planePage[2];
    kal_uint16          supportMPType[2];  
    kal_uint16          supportMEType[2];  
    kal_uint16          pageSize;
    kal_uint16          spareSize;
    kal_uint16          blockPage;
    kal_uint8           bankNum;     
    kal_uint8           zoneNum;     
    kal_uint8           CE_interleave_Flag;
    kal_uint8           CE_cache_interleave_Flag;
    kal_uint8           CE_interleave_mOP_Idx[2];
    kal_uint8           CE_cache_interleave_mOP_Idx[2];
    mPage_operation     multiProgram[2][6];
    mPage_operation     multiErase[2][6];
}flash_info_2;
 


typedef struct
{
  kal_uint8 TotalZoneNum;         
  kal_uint16  PSectionNumInZone[8];  
  kal_uint8 BankNumber;
  kal_bool  Plane_PagePair;      
  kal_bool  ExtendBlock;
  kal_uint8   SectorNumPerPage;
  kal_uint16  PageNumPerSection;
  kal_uint8 SectionShiftNum;        



} FLASH_INFO;





typedef struct
{
    kal_uint8  zoneNum;   
    kal_uint16 *bankArry; 
    kal_uint32 pageIdx;  
    kal_uint32 phyPage;  
    kal_uint8  ce;       
}add_convert;

typedef struct
{
    kal_uint8  zoneNum;   
    kal_uint8  ce;       
    kal_uint16 blockNum;  
    kal_uint32 zoneOffset;  
    kal_uint32 bankOffset;  
}struct_map_cache ;

#line 250 "hal\\storage\\flash\\mtd\\inc\\nand_dal_internal.h"

typedef struct
{
  kal_uint16    LBA;
  kal_uint16    BM_PA;
  kal_uint8   R;  
  kal_uint8   BI;
  kal_uint16    PBA;
} FDMData_512;

typedef struct
{
  kal_uint16    BI;
  kal_uint16    BM_PA;
  kal_uint16    LBA;
  kal_uint16    PBA;
} FDMData_2k;



typedef struct
{
    kal_uint8     Reserved1[4];     
    kal_uint16    BI;               
    kal_uint16    BM_PA;            
    kal_uint16    LBA;              
    kal_uint16    PBA;              





} FDMDataU_2K_GigaDevice;

typedef struct
{
    kal_uint8     Reserved1[8];     
    kal_uint16    BI;               
    kal_uint16    BM_PA;            
    kal_uint16    LBA;              
    kal_uint16    PBA;              





} FDMDataU_2K_Powerchip;

typedef enum
{
    CODE_ACC,
    FAT_ACC,
    RAW_ACC
} DAL_ACC_Type;






#line 317 "hal\\storage\\flash\\mtd\\inc\\nand_dal_internal.h"










#line 336 "hal\\storage\\flash\\mtd\\inc\\nand_dal_internal.h"

kal_int32 DAL_FDM_Flash_Info_Init ( FLASH_INFO* fdm_flash_info, kal_uint32 DiskIndex);




 
kal_int32 DAL_ProgramPage(DAL_ACC_Type Acc_Type, kal_uint8 ZoneNo, kal_uint16 *Bank, kal_uint16 PageAddr,
                          kal_uint16 PageLength, kal_uint8 *Data, kal_uint8 *Spare);

kal_int32 DAL_ReadPage(DAL_ACC_Type Acc_Type, kal_uint8 ZoneNo, kal_uint16 *Bank, kal_uint16 PageAddr, kal_uint16 PageLength,
                       kal_uint8 *Data, kal_uint8 *Spare);

kal_int32 DAL_CopyPage(DAL_ACC_Type Acc_Type, kal_uint8 ZoneNo, kal_uint16 *srcBank, kal_uint16 *dstBank, kal_uint16 srcPageAddr,
                       kal_uint16 dstPageAddr, kal_uint16 PageLength, kal_uint8 *Data_buff, kal_uint8 *Spare_buff, kal_uint32 buff_len,
                       kal_uint8 SDataNumber);

kal_int32 DAL_EraseBlock(DAL_ACC_Type Acc_Type, kal_uint8 ZoneNo, kal_uint16 *Bank,kal_uint8 start, kal_uint8 length);

kal_int32 DAL_MarkBlockBad(DAL_ACC_Type Acc_Type, kal_uint8 ZoneNo, kal_uint16 *Bank,kal_uint8 Block_offset, kal_bool EraseBlock,
                            kal_uint32 *Data_buff, kal_uint32 *Spare_buff);





 
kal_int32 DAL_CheckBadBlock (DAL_ACC_Type Acc_Type, kal_uint8 ZoneNo, kal_uint16 *Bank,kal_uint8 Block_offset,
                             kal_bool newFlash, kal_uint32 *Data_buff, kal_uint32 *Spare_buff);

kal_int32 DAL_NAND_Reset(void);



 
kal_uint16 DAL_GetFDMData(kal_uint8 FDMType, kal_uint32 *Spare_buff) ;

void DAL_SetFDMData(kal_uint16 BMPA, kal_uint16 LBA, kal_uint8 Option, kal_uint32 *Spare_buff);

kal_uint8 DAL_GetDALVersion(void);

kal_bool DAL_FormatQuery(kal_uint8 dal_ver);

void DAL_GetDeviceInfo (kal_uint8 cs, flash_list* p);


kal_uint32 addressMap(add_convert* AddInfo);
kal_int32 DAL_ShutDown (void);

kal_int32 DAL_OTPAccess(kal_int32 accesstype, kal_uint32 Offset, void * BufferPtr, kal_uint32 Length);
kal_int32 DAL_OTPQueryLength(kal_uint32 *LengthPtr);
kal_int32 DAL_GetDeviceIDInfo(void* DeviceInfo);
kal_int32 DAL_LPage2PPage(DAL_ACC_Type Acc_Type, kal_uint8 ZoneNo, kal_uint16 *Bank, kal_uint16 PageAddr);

#line 447 "hal\\storage\\flash\\mtd\\inc\\nand_dal_internal.h"

#line 320 "hal\\storage\\flash\\fdm\\inc\\NAND_FDM.h"







#line 334 "hal\\storage\\flash\\fdm\\inc\\NAND_FDM.h"






#line 352 "hal\\storage\\flash\\fdm\\inc\\NAND_FDM.h"

#line 360 "hal\\storage\\flash\\fdm\\inc\\NAND_FDM.h"







extern kal_bool INT_QueryExceptionStatus(void);





typedef struct
{
	kal_uint16	LSectionAddr;
	kal_uint16	BMR_PSection;
	kal_uint16	BMR_LastPage;
	kal_uint16	NonBMR_PSection;
	kal_uint16	NonBMR_LastPage;
	kal_uint16	NonBMR_TablePage;
	kal_uint16	NumNoUse;
} ACTIVE_INFO;

typedef struct
{
	kal_uint16	PSectionAddr;
	kal_uint16	EmptyPageAddr;
	kal_uint8	CurActive;
} PMT_INFO;

typedef struct
{
	kal_uint32    	total_FAT_sectors;     
	kal_uint32    	partition_sectors;     
} FAT_INFO;

typedef struct
{
	kal_uint16	PSect;
	kal_uint16	Page;
} LSMT_INFO;

typedef struct
{
	kal_uint16	SectionBuf[16];
	kal_uint8	Head;
	kal_uint8	Tail;
} ERASE_QUEUE;



typedef struct
{
	kal_uint8				Zone;
	kal_uint8				NewZone;
	kal_uint8				Region;
	kal_uint8				NewRegion;
	kal_uint16				LSect;
	kal_uint16				PSect;
	kal_uint16				LPage;
	kal_uint16				PPage;
} ADDR_INFO;

typedef struct
{
	kal_uint16				LSectAddr;
	kal_uint16				NumCycles;
} WEAR_INFO;

#line 503 "hal\\storage\\flash\\fdm\\inc\\NAND_FDM.h"
typedef union _FDMTABLE {
    struct {
    	kal_uint32	Sector[1024];
    } All;
    struct {
		kal_uint16	LSM[1024];     
		kal_uint16	PMT[512];		
		kal_uint16	BRMT[256];	
		kal_uint16	Buffer[256];		
    } T;
    struct {
    	kal_uint16	BRMT[2048];			
    } A;
    struct {
    	kal_uint8	Sector[8][512];
    } S;
} FDM_TABLE;

typedef struct
{
	kal_uint16	BRMT_Addr[8];
	kal_uint16	ReplaceBlockBegin[8];
	kal_uint16	CurSectorInRAM;
	kal_uint16  LastPage[8];
} BRMT_INFO;

typedef struct
{
	kal_uint16	LSectionNum;
	kal_bool	NoReplace;
	kal_uint8	ReplaceBeginRegion;
	kal_uint16	ReplaceBeginSection;
	kal_uint16	PSectionNumLastR;
	kal_uint16	LSectionNumLastR;
	kal_uint8	RegionNum;
	kal_uint16	RegionInitMask;
	LSMT_INFO	LSMT[8];
} ZONE_INFO;

typedef struct
{
	kal_uint8				PageNumInBuffer;
	kal_uint8 				CurActive;
	kal_bool				WriteProtect;
	kal_bool				PMTInRAMModified;
	kal_bool				NewActive;
	kal_uint16     			TotalPSectionNum;
	ERASE_QUEUE				EraseQueue;
	ZONE_INFO				ZoneInfo[8];
	BRMT_INFO				BRMTInfo;
	ACTIVE_INFO				ActiveInfo[5];
	FDM_TABLE				FDMTable;
	PMT_INFO				PMTInfo;
	WEAR_INFO				WearInfo;
	kal_uint16				DATA_PSection;
	kal_uint16				DataBank[8];
	kal_uint16				NewBank[8];
	kal_uint16				BMRBank[8];
	kal_uint16				NonBMRBank[8];
	kal_uint16				NewPSect;
	kal_uint16				ActiveOrder;




} NANDFDM5_DATA;



typedef struct
{






	FAT_INFO				flash_info;





} NAND_FLASH_DRV_DATA;



kal_int32 FDM5_MountDevice		(void * DriveData, int DeviceNumber, int DeviceType, kal_uint32 Flags);
kal_int32 FDM5_ShutDown			(void * DriveData);
kal_int32 FDM5_ReadSectors		(void * DriveData, kal_uint32 Sector, kal_uint32 Sectors, void * Data);
kal_int32 FDM5_WriteSectors		(void * DriveData, kal_uint32 Sector, kal_uint32 Sectors, void * Data);
kal_int32 FDM5_MediaChanged		(void * DriveData);
kal_int32 FDM5_DiscardSectors	(void * DriveData, kal_uint32 Sector, kal_uint32 Sectors);
kal_int32 FDM5_GetDiskGeometry	(void * DriveData, FS_PartitionRecord * DiskGeometry, kal_uint8 * MediaDescriptor);
kal_int32 FDM5_LowLevelFormat	(void * DriveData, const char * DeviceName, FS_FormatCallback Progress, kal_uint32 Flags);
int FDM5_CopySectors			(void *DriveData, kal_uint32 SrcSector , kal_uint32 DstSector, kal_uint32 Sectors);
kal_int32 FDM5_DiskNeedFormat	(void * DriveData);
kal_int32 FDM5_OTPAccess		(void * DriveData, kal_int32 accesstype, kal_uint32 Offset, void * BufferPtr, kal_uint32 Length);
kal_int32 FDM5_OTPQueryLength	(void * DriveData, kal_uint32 *LengthPtr);
kal_int32 FDM5_IOCtrl			(void * DriveData, UINT CtrlAction, void * CtrlData);
kal_int32 FDM5_LSN2PPN(void * DriveData, kal_uint32 Sector);
#line 612 "hal\\storage\\flash\\fdm\\inc\\NAND_FDM.h"
typedef enum
{
   BLBRMT_ERRCODE_NOERR             = 0,
   BLBRMT_ERRCODE_BRMT_NOT_FOUND    = 0x01,
   BLBRMT_ERRCODE_INVALID_BUFSIZE   = 0x02,
   BLBRMT_ERRCODE_BRMT_READ_ECCERR  = 0x03,
   BLBRMT_ERRCODE_BRMT_ADDR_ERR     = 0x04,
   BLBRMT_ERRCODE_BRMT_NO_FREE_BLK  = 0x05,
   BLBRMT_ERRCODE_BRMT_FDMVER_ERR   = 0x06,
   BLBRMT_ERRCODE_BRMT_PROGRAM_FAIL = 0x07

}BLBRMT_Error_Code;
kal_uint32 FDM5_BLReadBRMT(kal_uint8 *pBuf, kal_uint32 BufLen, kal_uint32 *ReturnLen);
kal_uint32 FDM5_BLWriteBRMT(kal_uint8 *pBuf, kal_uint32 BufLen);



#line 1296 "hal\\storage\\flash\\fdm\\inc\\NAND_FDM.h"




 










typedef struct
{
    SuperAND_MTD_DRIVER     * MTD;





    kal_uint8                    io_width;
    kal_uint32                   pages_of_first_device;
    kal_uint32                   pages_of_block;
    kal_uint32                  block_mask;
    kal_uint32                   total_pages;

    kal_uint32                   first_fat_sector_offset;
    kal_uint32                   total_fat_sectors;
    kal_uint32                   partition_sectors;

    kal_uint32                   buffer[2048/sizeof(kal_uint32)];
} SuperAND_FLASH_DRV_DATA;



void SuperAND_FDM_Init(void);
void SuperAND_SelfFormat(SuperAND_FLASH_DRV_DATA *D, kal_int32 DeviceType);

kal_int32 SuperAND_FDM_MountDevice(void * DriveData, int DeviceNumber, int DeviceType, kal_uint32 Flags);
kal_int32 SuperAND_FDM_ShutDown(void * DriveData);
kal_int32 SuperAND_FDM_ReadSectors(void * DriveData, kal_uint32 Sector, kal_uint32 Sectors, void * Buffer);
kal_int32 SuperAND_FDM_WriteSectors(void * DriveData, kal_uint32 Sector, kal_uint32 Sectors, void * Buffer);
kal_int32 SuperAND_FDM_MediaChanged(void * DriveData);
kal_int32 SuperAND_FDM_DiscardSectors(void * DriveData, kal_uint32 Sector, kal_uint32 Sectors);
kal_int32 SuperAND_FDM_GetDiskGeometry(void * DriveData, FS_PartitionRecord * DiskGeometry, kal_uint8 * MediaDescriptor);
kal_int32 SuperAND_FDM_GetDiskGeometry(void * DriveData, FS_PartitionRecord * DiskGeometry, kal_uint8 * MediaDescriptor);
kal_int32 SuperAND_FDM_LowLevelFormat(void * DriveData, const char * DeviceName, FS_FormatCallback Progress, kal_uint32 Flags);
kal_int32 SuperAND_FDM_NonBlockWriteSectors(void * DriveData, kal_uint32 Sector, kal_uint32 Sectors, void * Buffer);
kal_int32 SuperAND_FDM_RecoverableWriteSectors(void * DriveData, kal_uint32 Sector, kal_uint32 Sectors, void * Buffer);
kal_int32 SuperAND_FDM_ResumeSectorStates(void  * DriveData);
kal_int32 SuperAND_FDM_HighLevelFormat(void);
kal_int32 SuperAND_FDM_FlushData(void * DriveData);
kal_int32 SuperAND_FDM_CopySectors(void * DriveData, kal_uint32 SrcSector, kal_uint32 DstSector, kal_uint32 Sectors);



#line 162 "custom\\common\\hal\\custom_flash.c"
#line 1 "custom\\system\\HEXING60A_11B_BB\\custom_fota.h"

































 






































 

#line 78 "custom\\system\\HEXING60A_11B_BB\\custom_fota.h"
#line 1 "custom\\common\\hal\\flash_opt.h"

































 
































































 

#line 102 "custom\\common\\hal\\flash_opt.h"
#line 103 "custom\\common\\hal\\flash_opt.h"
#line 1 "custom\\system\\HEXING60A_11B_BB\\flash_opt_gen.h"

































 
































 







 
















 








 

 



 


 







 

    





    





 


















#line 104 "custom\\common\\hal\\flash_opt.h"









 







#line 129 "custom\\common\\hal\\flash_opt.h"






 


        


 

        


 






#line 161 "custom\\common\\hal\\flash_opt.h"







 







 






#line 297 "custom\\common\\hal\\flash_opt.h"

#line 352 "custom\\common\\hal\\flash_opt.h"
      
            


 






         
            


 
#line 403 "custom\\common\\hal\\flash_opt.h"



#line 426 "custom\\common\\hal\\flash_opt.h"


#line 445 "custom\\common\\hal\\flash_opt.h"
         
            


 






      
             

      

   
        





 


















#line 494 "custom\\common\\hal\\flash_opt.h"







#line 517 "custom\\common\\hal\\flash_opt.h"






 





















































#line 583 "custom\\common\\hal\\flash_opt.h"

#line 590 "custom\\common\\hal\\flash_opt.h"












#line 608 "custom\\common\\hal\\flash_opt.h"

#line 615 "custom\\common\\hal\\flash_opt.h"

























#line 646 "custom\\common\\hal\\flash_opt.h"

#line 654 "custom\\common\\hal\\flash_opt.h"

#line 662 "custom\\common\\hal\\flash_opt.h"

#line 670 "custom\\common\\hal\\flash_opt.h"






 
#line 686 "custom\\common\\hal\\flash_opt.h"


#line 79 "custom\\system\\HEXING60A_11B_BB\\custom_fota.h"




 

#line 91 "custom\\system\\HEXING60A_11B_BB\\custom_fota.h"



 




extern const kal_uint32 FOTA_FUE_RESIDENT_SPACE;

typedef kal_uint16 FOTA_NFB_Table_Element_type;

#line 122 "custom\\system\\HEXING60A_11B_BB\\custom_fota.h"

#line 1 "interface\\fs\\fat_fs.h"

































 
































































 



#line 104 "interface\\fs\\fat_fs.h"




#line 124 "custom\\system\\HEXING60A_11B_BB\\custom_fota.h"
#line 125 "custom\\system\\HEXING60A_11B_BB\\custom_fota.h"

typedef struct {
   kal_uint32 BlockBase;
   kal_uint32 BlockSize;
} FlashBlockInfo;


#line 138 "custom\\system\\HEXING60A_11B_BB\\custom_fota.h"





#line 158 "custom\\system\\HEXING60A_11B_BB\\custom_fota.h"

extern kal_int32 FOTA_CustomInitialize(void);

extern const kal_uint32  FOTA_MAX_PAGE_SIZE;

#line 163 "custom\\common\\hal\\custom_flash.c"
#line 1 "interface\\hal\\storage\\flash_disk.h"

































 




































































 









 

#line 116 "interface\\hal\\storage\\flash_disk.h"
#line 1 "custom\\common\\hal\\flash_opt.h"

































 
































































 

#line 102 "custom\\common\\hal\\flash_opt.h"
#line 103 "custom\\common\\hal\\flash_opt.h"
#line 1 "custom\\system\\HEXING60A_11B_BB\\flash_opt_gen.h"

































 
































 







 
















 








 

 



 


 







 

    





    





 


















#line 104 "custom\\common\\hal\\flash_opt.h"









 







#line 129 "custom\\common\\hal\\flash_opt.h"






 


        


 

        


 






#line 161 "custom\\common\\hal\\flash_opt.h"







 







 






#line 297 "custom\\common\\hal\\flash_opt.h"

#line 352 "custom\\common\\hal\\flash_opt.h"
      
            


 






         
            


 
#line 403 "custom\\common\\hal\\flash_opt.h"



#line 426 "custom\\common\\hal\\flash_opt.h"


#line 445 "custom\\common\\hal\\flash_opt.h"
         
            


 






      
             

      

   
        





 


















#line 494 "custom\\common\\hal\\flash_opt.h"







#line 517 "custom\\common\\hal\\flash_opt.h"






 





















































#line 583 "custom\\common\\hal\\flash_opt.h"

#line 590 "custom\\common\\hal\\flash_opt.h"












#line 608 "custom\\common\\hal\\flash_opt.h"

#line 615 "custom\\common\\hal\\flash_opt.h"

























#line 646 "custom\\common\\hal\\flash_opt.h"

#line 654 "custom\\common\\hal\\flash_opt.h"

#line 662 "custom\\common\\hal\\flash_opt.h"

#line 670 "custom\\common\\hal\\flash_opt.h"






 
#line 686 "custom\\common\\hal\\flash_opt.h"


#line 117 "interface\\hal\\storage\\flash_disk.h"
#line 1 "interface\\hal\\storage\\flash_mtd.h"

































 







































































































































 









 
 
 

 
 
 




 


 
void                    Flash_ReturnReady(void);
#line 118 "interface\\hal\\storage\\flash_disk.h"
#line 119 "interface\\hal\\storage\\flash_disk.h"
#line 120 "interface\\hal\\storage\\flash_disk.h"
#line 1 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdlib.h"
 
 
 




 
 



 












  


 








#line 45 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdlib.h"


  
  typedef unsigned int size_t;










    



    typedef unsigned short wchar_t;  
#line 74 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdlib.h"

typedef struct div_t { int quot, rem; } div_t;
    
typedef struct ldiv_t { long int quot, rem; } ldiv_t;
    

typedef struct lldiv_t { __int64 quot, rem; } lldiv_t;
    


#line 95 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdlib.h"
   



 

   




 
#line 114 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdlib.h"
   


 
extern __declspec(__nothrow) int __aeabi_MB_CUR_MAX(void);

   




 

extern __declspec(__nothrow) double atof(const char *  );
   



 
extern __declspec(__nothrow) int atoi(const char *  );
   



 
extern __declspec(__nothrow) long int atol(const char *  );
   



 

extern __declspec(__nothrow) __int64 atoll(const char *  );
   



 


extern __declspec(__nothrow) double strtod(const char * __restrict  , char ** __restrict  );
   

















 

extern __declspec(__nothrow) float strtof(const char * __restrict  , char ** __restrict  );
extern __declspec(__nothrow) long double strtold(const char * __restrict  , char ** __restrict  );
   

 

extern __declspec(__nothrow) long int strtol(const char * __restrict  ,
                        char ** __restrict  , int  );
   



























 
extern __declspec(__nothrow) unsigned long int strtoul(const char * __restrict  ,
                                       char ** __restrict  , int  );
   


























 

 
extern __declspec(__nothrow) __int64 strtoll(const char * __restrict  ,
                               char ** __restrict  , int  );
   




 
extern __declspec(__nothrow) unsigned __int64 strtoull(const char * __restrict  ,
                                         char ** __restrict  , int  );
   



 

extern __declspec(__nothrow) int rand(void);
   







 
extern __declspec(__nothrow) void srand(unsigned int  );
   






 

extern __declspec(__nothrow) void *calloc(size_t  , size_t  );
   



 
extern __declspec(__nothrow) void free(void *  );
   





 
extern __declspec(__nothrow) void *malloc(size_t  );
   



 
extern __declspec(__nothrow) void *realloc(void *  , size_t  );
   













 
typedef int (*__heapprt)(void *, char const *, ...);
extern __declspec(__nothrow) void __heapstats(int (*  )(void *  ,
                                           char const *  , ...),
                        void *  );
   










 
extern __declspec(__nothrow) int __heapvalid(int (*  )(void *  ,
                                           char const *  , ...),
                       void *  , int  );
   














 
extern __declspec(__nothrow) __declspec(__noreturn) void abort(void);
   







 

extern __declspec(__nothrow) int atexit(void (*  )(void));
   




 
#line 379 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdlib.h"


extern __declspec(__nothrow) __declspec(__noreturn) void exit(int  );
   












 

extern __declspec(__nothrow) __declspec(__noreturn) void _Exit(int  );
   







      

extern __declspec(__nothrow) char *getenv(const char *  );
   









 

extern __declspec(__nothrow) int  system(const char *  );
   









 

extern  void *bsearch(const void *  , const void *  ,
              size_t  , size_t  ,
              int (*  )(const void *, const void *));
   












 
#line 463 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdlib.h"


extern  void qsort(void *  , size_t  , size_t  ,
           int (*  )(const void *, const void *));
   









 

#line 489 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdlib.h"

extern __declspec(__nothrow) __pure int abs(int  );
   



 

extern __declspec(__nothrow) __pure div_t div(int  , int  );
   









 
extern __declspec(__nothrow) __pure long int labs(long int  );
   



 




extern __declspec(__nothrow) __pure ldiv_t ldiv(long int  , long int  );
   











 







extern __declspec(__nothrow) __pure __int64 llabs(__int64  );
   



 




extern __declspec(__nothrow) __pure lldiv_t lldiv(__int64  , __int64  );
   











 
#line 570 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdlib.h"



 
typedef struct __sdiv32by16 { int quot, rem; } __sdiv32by16;
typedef struct __udiv32by16 { unsigned int quot, rem; } __udiv32by16;
    
typedef struct __sdiv64by32 { int rem, quot; } __sdiv64by32;

__value_in_regs extern __declspec(__nothrow) __pure __sdiv32by16 __rt_sdiv32by16(
     int  ,
     short int  );
   

 
__value_in_regs extern __declspec(__nothrow) __pure __udiv32by16 __rt_udiv32by16(
     unsigned int  ,
     unsigned short  );
   

 
__value_in_regs extern __declspec(__nothrow) __pure __sdiv64by32 __rt_sdiv64by32(
     int  , unsigned int  ,
     int  );
   

 



 
extern __declspec(__nothrow) unsigned int __fp_status(unsigned int  , unsigned int  );
   







 























 
extern __declspec(__nothrow) int mblen(const char *  , size_t  );
   












 
extern __declspec(__nothrow) int mbtowc(wchar_t * __restrict  ,
                   const char * __restrict  , size_t  );
   















 
extern __declspec(__nothrow) int wctomb(char *  , wchar_t  );
   













 





 
extern __declspec(__nothrow) size_t mbstowcs(wchar_t * __restrict  ,
                      const char * __restrict  , size_t  );
   














 
extern __declspec(__nothrow) size_t wcstombs(char * __restrict  ,
                      const wchar_t * __restrict  , size_t  );
   














 

extern __declspec(__nothrow) void __use_realtime_heap(void);
extern __declspec(__nothrow) void __use_realtime_division(void);
extern __declspec(__nothrow) void __use_two_region_memory(void);
extern __declspec(__nothrow) void __use_no_heap(void);
extern __declspec(__nothrow) void __use_no_heap_region(void);

extern __declspec(__nothrow) char const *__C_library_version_string(void);
extern __declspec(__nothrow) int __C_library_version_number(void);











#line 807 "C:\\Program Files\\ARM\\RVCT\\Data\\3.1\\569\\include\\windows\\stdlib.h"


 
#line 121 "interface\\hal\\storage\\flash_disk.h"
#line 122 "interface\\hal\\storage\\flash_disk.h"

#line 125 "interface\\hal\\storage\\flash_disk.h"
#line 126 "interface\\hal\\storage\\flash_disk.h"








 





















 



#line 167 "interface\\hal\\storage\\flash_disk.h"

#line 175 "interface\\hal\\storage\\flash_disk.h"



 

 
#line 190 "interface\\hal\\storage\\flash_disk.h"

 
#line 199 "interface\\hal\\storage\\flash_disk.h"

 

kal_int32 NOR_init (void);

kal_int32 NOR_ReadPhysicalPage (kal_uint32 block_idx, kal_uint32 page_idx, kal_uint8 * data_ptr);




kal_uint32 NOR_BlockSize(kal_uint32 block_idx);
kal_uint32 NOR_BlockIndex(kal_uint32 block_addr);
kal_int32 NOR_Addr2BlockIndexOffset(kal_uint32 block_addr, kal_uint32 *block_index, kal_uint32 *offset);
kal_int32 NOR_BlockIndexOffset2Addr(kal_uint32 block_index, kal_uint32 offset, kal_uint32 *addr);

#line 164 "custom\\common\\hal\\custom_flash.c"
#line 1 "hal\\storage\\flash\\mtd\\inc\\flash_disk_internal.h"

































 




























































 









 

#line 108 "hal\\storage\\flash\\mtd\\inc\\flash_disk_internal.h"
#line 109 "hal\\storage\\flash\\mtd\\inc\\flash_disk_internal.h"
#line 1 "custom\\common\\hal\\flash_opt.h"

































 
































































 

#line 102 "custom\\common\\hal\\flash_opt.h"
#line 103 "custom\\common\\hal\\flash_opt.h"
#line 1 "custom\\system\\HEXING60A_11B_BB\\flash_opt_gen.h"

































 
































 







 
















 








 

 



 


 







 

    





    





 


















#line 104 "custom\\common\\hal\\flash_opt.h"









 







#line 129 "custom\\common\\hal\\flash_opt.h"






 


        


 

        


 






#line 161 "custom\\common\\hal\\flash_opt.h"







 







 






#line 297 "custom\\common\\hal\\flash_opt.h"

#line 352 "custom\\common\\hal\\flash_opt.h"
      
            


 






         
            


 
#line 403 "custom\\common\\hal\\flash_opt.h"



#line 426 "custom\\common\\hal\\flash_opt.h"


#line 445 "custom\\common\\hal\\flash_opt.h"
         
            


 






      
             

      

   
        





 


















#line 494 "custom\\common\\hal\\flash_opt.h"







#line 517 "custom\\common\\hal\\flash_opt.h"






 





















































#line 583 "custom\\common\\hal\\flash_opt.h"

#line 590 "custom\\common\\hal\\flash_opt.h"












#line 608 "custom\\common\\hal\\flash_opt.h"

#line 615 "custom\\common\\hal\\flash_opt.h"

























#line 646 "custom\\common\\hal\\flash_opt.h"

#line 654 "custom\\common\\hal\\flash_opt.h"

#line 662 "custom\\common\\hal\\flash_opt.h"

#line 670 "custom\\common\\hal\\flash_opt.h"






 
#line 686 "custom\\common\\hal\\flash_opt.h"


#line 110 "hal\\storage\\flash\\mtd\\inc\\flash_disk_internal.h"
#line 111 "hal\\storage\\flash\\mtd\\inc\\flash_disk_internal.h"
#line 112 "hal\\storage\\flash\\mtd\\inc\\flash_disk_internal.h"
#line 113 "hal\\storage\\flash\\mtd\\inc\\flash_disk_internal.h"
#line 114 "hal\\storage\\flash\\mtd\\inc\\flash_disk_internal.h"
#line 115 "hal\\storage\\flash\\mtd\\inc\\flash_disk_internal.h"

#line 118 "hal\\storage\\flash\\mtd\\inc\\flash_disk_internal.h"
#line 119 "hal\\storage\\flash\\mtd\\inc\\flash_disk_internal.h"









 




#line 144 "hal\\storage\\flash\\mtd\\inc\\flash_disk_internal.h"



typedef __packed struct {
   kal_uint32   DiskSize;        
   NOR_MTD_Driver *MTDDriver;       
   void    *MTDData;                
   NOR_MTD_FlashInfo FlashInfo;     




   kal_bool is_mount;
} NOR_FLASH_DISK_Data;



 




extern kal_bool         INT_QueryExceptionStatus(void);
extern kal_uint32       BlockIndex(void* DriverData, kal_uint32 blk_addr);
extern kal_mutexid      fdm_reclaim_mutex;

 
kal_int32 readRawDiskData(NOR_FLASH_DISK_Data *D, kal_uint32 addr, kal_uint8* data_ptr, kal_uint32 len);






#line 165 "custom\\common\\hal\\custom_flash.c"
#line 1 "custom\\common\\hal\\combo_flash_init.h"

































 







































































 



#line 1 "custom\\common\\hal\\flash_opt.h"

































 
































































 

#line 102 "custom\\common\\hal\\flash_opt.h"
#line 103 "custom\\common\\hal\\flash_opt.h"
#line 1 "custom\\system\\HEXING60A_11B_BB\\flash_opt_gen.h"

































 
































 







 
















 








 

 



 


 







 

    





    





 


















#line 104 "custom\\common\\hal\\flash_opt.h"









 







#line 129 "custom\\common\\hal\\flash_opt.h"






 


        


 

        


 






#line 161 "custom\\common\\hal\\flash_opt.h"







 







 






#line 297 "custom\\common\\hal\\flash_opt.h"

#line 352 "custom\\common\\hal\\flash_opt.h"
      
            


 






         
            


 
#line 403 "custom\\common\\hal\\flash_opt.h"



#line 426 "custom\\common\\hal\\flash_opt.h"


#line 445 "custom\\common\\hal\\flash_opt.h"
         
            


 






      
             

      

   
        





 


















#line 494 "custom\\common\\hal\\flash_opt.h"







#line 517 "custom\\common\\hal\\flash_opt.h"






 





















































#line 583 "custom\\common\\hal\\flash_opt.h"

#line 590 "custom\\common\\hal\\flash_opt.h"












#line 608 "custom\\common\\hal\\flash_opt.h"

#line 615 "custom\\common\\hal\\flash_opt.h"

























#line 646 "custom\\common\\hal\\flash_opt.h"

#line 654 "custom\\common\\hal\\flash_opt.h"

#line 662 "custom\\common\\hal\\flash_opt.h"

#line 670 "custom\\common\\hal\\flash_opt.h"






 
#line 686 "custom\\common\\hal\\flash_opt.h"


#line 111 "custom\\common\\hal\\combo_flash_init.h"
#line 1 "kal\\include\\kal_release.h"

































 










































 







 

#line 88 "kal\\include\\kal_release.h"
#line 89 "kal\\include\\kal_release.h"
#line 90 "kal\\include\\kal_release.h"

#line 112 "custom\\common\\hal\\combo_flash_init.h"
#line 1 "custom\\common\\hal\\combo_flash_defs.h"

































 























































































 



#line 1 "kal\\include\\kal_release.h"

































 










































 







 

#line 88 "kal\\include\\kal_release.h"
#line 89 "kal\\include\\kal_release.h"
#line 90 "kal\\include\\kal_release.h"

#line 127 "custom\\common\\hal\\combo_flash_defs.h"
#line 128 "custom\\common\\hal\\combo_flash_defs.h"
#line 129 "custom\\common\\hal\\combo_flash_defs.h"
#line 1 "custom\\common\\hal\\flash_opt.h"

































 
































































 

#line 102 "custom\\common\\hal\\flash_opt.h"
#line 103 "custom\\common\\hal\\flash_opt.h"
#line 1 "custom\\system\\HEXING60A_11B_BB\\flash_opt_gen.h"

































 
































 







 
















 








 

 



 


 







 

    





    





 


















#line 104 "custom\\common\\hal\\flash_opt.h"









 







#line 129 "custom\\common\\hal\\flash_opt.h"






 


        


 

        


 






#line 161 "custom\\common\\hal\\flash_opt.h"







 







 






#line 297 "custom\\common\\hal\\flash_opt.h"

#line 352 "custom\\common\\hal\\flash_opt.h"
      
            


 






         
            


 
#line 403 "custom\\common\\hal\\flash_opt.h"



#line 426 "custom\\common\\hal\\flash_opt.h"


#line 445 "custom\\common\\hal\\flash_opt.h"
         
            


 






      
             

      

   
        





 


















#line 494 "custom\\common\\hal\\flash_opt.h"







#line 517 "custom\\common\\hal\\flash_opt.h"






 





















































#line 583 "custom\\common\\hal\\flash_opt.h"

#line 590 "custom\\common\\hal\\flash_opt.h"












#line 608 "custom\\common\\hal\\flash_opt.h"

#line 615 "custom\\common\\hal\\flash_opt.h"

























#line 646 "custom\\common\\hal\\flash_opt.h"

#line 654 "custom\\common\\hal\\flash_opt.h"

#line 662 "custom\\common\\hal\\flash_opt.h"

#line 670 "custom\\common\\hal\\flash_opt.h"






 
#line 686 "custom\\common\\hal\\flash_opt.h"


#line 130 "custom\\common\\hal\\combo_flash_defs.h"



#line 1 "sss\\interface\\inc\\br_sw_types.h"

































 



















 




#line 1 "sss\\interface\\inc\\sw_types.h"

































 



















 
 



#line 60 "sss\\interface\\inc\\sw_types.h"



 
typedef signed char                       int8;
typedef signed short                      int16;
typedef signed long                       int32;
typedef signed int                        intx;
typedef unsigned char                     uint8;
typedef unsigned short                    uint16;
typedef unsigned long                     uint32;
typedef unsigned int                      uintx;
                                          
typedef unsigned char                     U8;
typedef signed char                       S8;
typedef unsigned short                    U16;
typedef signed short                      S16;
typedef unsigned int                      U32;
typedef signed int                        S32;
                                          
typedef unsigned char                     US8;
typedef unsigned short                    US16;
typedef unsigned int                      US32;

typedef volatile unsigned char *          P_U8;
typedef volatile signed char *            P_S8;
typedef volatile unsigned short *         P_U16;
typedef volatile signed short *           P_S16;
typedef volatile unsigned int *           P_U32;
typedef volatile signed int *             P_S32;
                                          
typedef volatile const unsigned char *    CONST_P_U8;
typedef volatile const signed char *      CONST_P_S8;
typedef volatile const unsigned short *   CONST_P_U16;
typedef volatile const signed short *     CONST_P_S16;
typedef volatile const unsigned int *     CONST_P_U32;
typedef volatile const signed int *       CONST_P_S32;


typedef unsigned long long                U64;
typedef signed long long                  S64;
typedef unsigned long long *              P_U64;
typedef signed long long *                P_S64;



typedef unsigned char  bool;




 




#line 133 "sss\\interface\\inc\\sw_types.h"







#line 60 "sss\\interface\\inc\\br_sw_types.h"














typedef enum {
     USBDL_AUTO_DETECT = 0
    ,USBDL_BY_GPIO_ONLY
    ,USBDL_TYPE_RESERVED1
    ,USBDL_TYPE_RESERVED2
} USBDL_TYPE;









#line 135 "custom\\common\\hal\\combo_flash_defs.h"
#line 1 "hal\\system\\GFH\\public\\br_GFH.h"

































 



















 



#line 59 "hal\\system\\GFH\\public\\br_GFH.h"





typedef enum {

     GFH_FILE_INFO          = 0x0000
    ,GFH_BL_INFO            = 0x0001
    ,GFH_ANTI_CLONE         = 0x0002
    ,GFH_BL_SEC_KEY         = 0x0003
    ,GFH_SCTRL_CERT         = 0x0004
    ,GFH_TOOL_AUTH          = 0x0005
    ,GFH_MTK_RESERVED1      = 0x0006
    ,GFH_BROM_CFG           = 0x0007
    ,GFH_BROM_SEC_CFG       = 0x0008
    ,GFH_MTK_RESERVED2      = 0x0009
    ,GFH_MTK_RESERVED3      = 0x000a
    ,GFH_ROOT_CERT          = 0x000b
    ,GFH_EXP_CHK            = 0x000c
    ,GFH_EPP_PARAM          = 0x000d
    ,GFH_CHIP_VER           = 0x000e
    ,GFH_MTK_RESERVED4      = 0x000f
    ,GFH_MD_SEC_CFG         = 0x0010
    
    ,GFH_EPP_INFO           = 0x0100
    ,GFH_EMI_LIST           = 0x0101
    ,GFH_CMEM_ID_INFO       = 0x0102
    ,GFH_CMEM_NOR_INFO      = 0x0103
    ,GFH_DSP_INFO           = 0x0104

    ,GFH_MAUI_INFO          = 0x0200
    ,GFH_MAUI_SEC           = 0x0201    
    ,GFH_MAUI_CODE_KEY      = 0x0202    
    ,GFH_MAUI_SECURE_RO_KEY = 0x0203    
    ,GFH_MAUI_RESOURCE_KEY  = 0x0204    

    ,GFH_SECURE_RO_INFO     = 0x0205

    ,GFH_DL_PACKAGE_INFO    = 0x0206
    ,GFH_FLASH_INFO         = 0x0207
    ,GFH_MACR_INFO          = 0x0208
    ,GFH_ARM_BL_INFO        = 0x0209
    ,GFH_EMMC_BOOTING_INFO  = 0x020A
    ,GFH_FOTA_INFO          = 0x020B
    ,GFH_CBR_RECORD_INFO    = 0x020C
    ,GFH_CONFIDENTIAL_BIN_INFO = 0x020D
    ,GFH_CBR_INFO           = 0x020E
    ,GFH_MBA_INFO           = 0x020F    
    ,GFH_BINARY_LOCATION    = 0x0210

    ,GFH_BOOT_CERT_CTRL_CONTENT = 0x0300

    ,GFH_TYPE_NUM
    ,GFH_TYPE_END           = (U16)0xffff
} GFH_TYPE;















typedef struct GFH_Header {
    U32                 m_magic_ver;
    U16                 m_size;



    GFH_TYPE            m_type;

} GFH_Header;

typedef struct GFH_End {
    U32                 m_magic_end;
} GFH_End;













#line 1 "hal\\system\\GFH\\public\\br_GFH_file_info.h"

































 



















 



#line 59 "hal\\system\\GFH\\public\\br_GFH_file_info.h"
#line 1 "hal\\system\\GFH\\public\\br_GFH.h"

































 



















 
#line 60 "hal\\system\\GFH\\public\\br_GFH_file_info.h"









typedef enum {
     GFH_FILE_NONE          = 0x0000                
    ,ARM_BL                 = 0x0001
    ,ARM_EXT_BL             = 0x0002
    ,DUALMAC_DSP_BL         = 0x0003
    ,SCTRL_CERT             = 0x0004
    ,TOOL_AUTH              = 0x0005
    ,FILE_MTK_RESERVED1     = 0x0006
    ,EPP                    = 0x0007
    ,FILE_MTK_RESERVED2     = 0x0008
    ,FILE_MTK_RESERVED3     = 0x0009
    ,ROOT_CERT              = 0x000a

    ,V_MAUI_BINARY          = 0x0100                 
    ,PRIMARY_MAUI           = V_MAUI_BINARY
    ,SECONDARY_MAUI         = 0x0101
    ,ON_DEMAND_PAGING       = 0x0102
    ,THIRD_ROM              = 0x0103
    ,DSP_ROM                = 0x0104
    ,CACHED_DSP_ROM         = 0x0105
    ,PRIMARY_FACTORY_BIN    = 0x0106
    ,SECONDARY_FACTORY_BIN  = 0x0107
    ,VIVA                   = 0x0108
    ,V_MAUI_BINARY_END      = 0x017f

    ,V_RESOURCE_BINARY      = 0x0180                
    ,CUSTOM_PACK            = V_RESOURCE_BINARY
    ,LANGUAGE_PACK          = 0x0181
    ,JUMP_TABLE             = 0x0182
    ,V_RESOURCE_BINARY_END  = 0x01ff

    ,V_MISC_BINARY          = 0x0200                
    ,FOTA_UE                = V_MISC_BINARY
    ,ARM_EXT_BL_BACKUP      = 0x0201    
    ,V_MISC_BINARY_END

    ,V_SECURE_RO            = 0x0300                
    ,SECURE_RO_S            = V_SECURE_RO
    ,SECURE_RO_ME           = 0x0301
    ,V_SECURE_RO_END

    ,V_EXTERNAL_FILE        = 0x0400
    ,CARD_DOWNLOAD_PACKAGE  = V_EXTERNAL_FILE
    ,CONFIDENTIAL_BINARY    = 0x0401
    ,V_EXTERNAL_FILE_END
    
    ,V_FILE_SYSTEM_BINARY   = 0x0480                
    ,FILE_SYSTEM            = V_FILE_SYSTEM_BINARY
    ,V_FILE_SYSTEM_BINARY_END

    ,V_SRD                  = 0x500                 
    ,BOOT_CERT_CTRL         = V_SRD
    ,V_SRD_END                
    
    ,V_CUSTOMIZED_FILE      = 0x7000
    ,CUSTOMER_BIN1          = V_CUSTOMIZED_FILE
    ,CUSTOMER_BIN2          = 0x7001
    ,CUSTOMER_BIN3          = 0x7002
    ,V_CUSTOMIZED_FILE_END  = 0x70ff

    ,GFH_FILE_END           = (U16)0xffff
} GFH_FILE_TYPE;

typedef enum {
     FLASH_DEV_NONE         = 0
    ,F_NOR                  = 1
    ,F_NAND_SEQUENTIAL      = 2
    ,F_NAND_TTBL            = 3
    ,F_NAND_FDM50           = 4
    ,F_EMMC_BOOT_REGION     = 5
    ,F_EMMC_DATA_REGION     = 6
    ,F_SF                   = 7
    ,F_XBOOT                = 8
    ,F_SPI_NAND_SEQUENTIAL  = 9
    ,F_SPI_NAND_TTBL        = 10
    ,F_SPI_NAND_FDM50       = 11
    ,F_MSDC                 = 12
    ,FLASH_DEV_END          = (U8)255
} GFH_FLASH_DEV;

typedef enum {
     SIG_NONE               = 0
    ,SIG_PHASH              = 1
    ,SIG_SINGLE             = 2
    ,SIG_SINGLE_AND_PHASH   = 3
    ,SIG_MULTI              = 4
    ,SIG_TYPE_NUM
    ,SIG_TYPE_END           = (U8)255
} GFH_SIG_TYPE;
















typedef struct GFH_FILE_INFO_v1 {
    GFH_Header      m_gfh_hdr;
    char            m_identifier[12];       
    U32             m_file_ver;





    GFH_FILE_TYPE   m_file_type;
    GFH_FLASH_DEV   m_flash_dev;
    GFH_SIG_TYPE    m_sig_type;

    U32             m_load_addr;
    U32             m_file_len;
    U32             m_max_size;
    U32             m_content_offset;
    U32             m_sig_len;
    U32             m_jump_offset;
    U32             m_attr;
} GFH_FILE_INFO_v1;




extern U32  GFH_FILE_INFO_BasicCheck(const GFH_FILE_INFO_v1 *  p_gfh_file_info);
extern U32  GFH_FILE_INFO_IsValid(const GFH_FILE_INFO_v1 *  p_gfh_file_info);

#line 210 "hal\\system\\GFH\\public\\br_GFH_file_info.h"





#line 157 "hal\\system\\GFH\\public\\br_GFH.h"

#line 136 "custom\\common\\hal\\combo_flash_defs.h"


#line 150 "custom\\common\\hal\\combo_flash_defs.h"

#line 1 "custom\\system\\HEXING60A_11B_BB\\combo_sfi_defs.h"

































 
































 




#line 1 "interface\\hal\\storage\\flash_sfi_release.h"

































 












































































 





#line 1 "custom\\system\\HEXING60A_11B_BB\\custom_sfi_clock.h"

































 
































 



 

  
#line 119 "interface\\hal\\storage\\flash_sfi_release.h"



    

 







 
typedef enum sfi_clock_enum_t
{
   SFI_CLK_UNKNOWN = 0,
   SFI_CLK_78MHZ   = 78,
   SFI_CLK_104MHZ  = 104,
   SFI_CLK_130MHZ  = 130,
   SFI_CLK_166MHZ  = 166
}sfi_clock_enum;



 
typedef enum sfi_voltage_enum_t
{
   SFI_Voltage_UNKNOWN = 0,
   SFI_Voltage_18      = 18,  
   SFI_Voltage_30      = 30   
}sfi_voltage_enum;


extern sfi_clock_enum SFI_Dev_WorkingFrequencyQuery(void);
extern sfi_voltage_enum SFI_Dev_WorkingVoltageQuery(void);



#line 73 "custom\\system\\HEXING60A_11B_BB\\combo_sfi_defs.h"









#line 93 "custom\\system\\HEXING60A_11B_BB\\combo_sfi_defs.h"


typedef struct {
#line 105 "custom\\system\\HEXING60A_11B_BB\\combo_sfi_defs.h"
    kal_uint32      HWConf_104M[10];     
    kal_uint8       DevInit_104M[32];   





    kal_uint32      HWConf_26M[8];     
    
} CMEMEntrySFI;
#line 126 "custom\\system\\HEXING60A_11B_BB\\combo_sfi_defs.h"


typedef struct {
#line 136 "custom\\system\\HEXING60A_11B_BB\\combo_sfi_defs.h"
    kal_uint32      HWConf_104M[5];     




    kal_uint32      HWConf_26M[3];     
} CMEMEntrySFI_DCM;
#line 151 "custom\\system\\HEXING60A_11B_BB\\combo_sfi_defs.h"
typedef struct {
    kal_uint32      HWConf[16];     
} CMEMEntryEMI;

typedef struct {

    char               m_identifier[16];   
#line 165 "custom\\system\\HEXING60A_11B_BB\\combo_sfi_defs.h"
    unsigned int       m_ver;
    unsigned int       Count;
    CMEMEntrySFI       List[1];  
} CMEMEntrySFIList;

typedef struct {
    CMEMEntrySFI_DCM      List[1];  
} CMEMEntrySFIList_dcm;



#line 153 "custom\\common\\hal\\combo_flash_defs.h"


#line 171 "custom\\common\\hal\\combo_flash_defs.h"






typedef union   {
    kal_uint8  NAND[8];
    kal_uint16 NOR[4];
} CMEMFlashID;


typedef struct {
    kal_uint8       DeviceType;  
    kal_uint8       IDLength;

    kal_uint8       ID[8];



} CMEMEntryID;


typedef struct {



    unsigned int       m_ver;
    unsigned int       Count;
    CMEMEntryID        List[1];
} CMEMEntryIDList;





typedef struct  {
    kal_uint32  Offset;
    kal_uint32  Size;
} FlashBlockLayout;


typedef struct {
    kal_uint16          FDMType;       
    kal_uint16          PageBufferSize;   
    kal_uint32          UniformBlocks;    
    FlashBlockLayout    BlockLayout[8];
    FlashBankInfo       BankInfo[8];
} CMEMEntryNOR;


typedef struct {



    unsigned int       m_ver;
    unsigned int       Count;
    CMEMEntryNOR       List[1];
} CMEMEntryNORList;






#line 113 "custom\\common\\hal\\combo_flash_init.h"



#line 117 "custom\\common\\hal\\combo_flash_init.h"
#line 118 "custom\\common\\hal\\combo_flash_init.h"
#line 119 "custom\\common\\hal\\combo_flash_init.h"


typedef enum   {
    CMEM_NO_ERROR=0,
    CMEM_ERR_ID_NOT_FOUND,
    CMEM_ERR_FDM_MISMATCH,
    CMEM_ERR_MTD_MISMATCH,
    CMEM_ERR_FDM_INIT_FAIL,
    CMEM_ERR_MTD_INIT_FAIL,
    CMEM_ERR_FDM_REGION_INFO_OVERFLOW
} Enum_CMEM_StatusCode;

typedef enum   {
    CMEM_TYPE_END_OF_LIST=0,
    CMEM_TYPE_NAND,
    CMEM_TYPE_NOR,
    CMEM_TYPE_SERIAL_NOR_FLASH,
    CMEM_TYPE_EMMC,
    CMEM_TYPE_SERIAL_NAND_FLASH
} Enum_CMEM_Type;




typedef enum   {
    CMEM_FDM_NOR_DEFAULT=0,	
    CMEM_NOR_CS_INTEL_SERIES,
    CMEM_NOR_CS_INTEL_SIBLEY,
    CMEM_NOR_CS_RAM_DISK,
    CMEM_NOR_CS_SST,
    CMEM_NOR_CS_AMD_SERIES,
    CMEM_NOR_CS_SPANSION_PL_J,
    CMEM_NOR_CS_SPANSION_PL_N,
    CMEM_NOR_CS_SPANSION_WS_N,
    CMEM_NOR_CS_SPANSION_WS_P,
    CMEM_NOR_CS_SPANSION_GL_A,
    CMEM_NOR_CS_SPANSION_GL_N,
    CMEM_NOR_CS_SPANSION_NS_N,
    CMEM_NOR_CS_SPANSION_NS_P,
    CMEM_NOR_CS_SPANSION_NS_J,
    CMEM_NOR_CS_TOSHIBA,
    CMEM_NOR_CS_TOSHIBA_TV,
    CMEM_NOR_CS_TOSHIBA_TY,
    CMEM_NOR_CS_SILICON7,
    CMEM_NOR_CS_SAMSUNG_SPANSION_NS_J_LIKE,
    CMEM_NOR_CS_SPANSION_VS_R,
    CMEM_NOR_CS_SPANSION_VS_R64,
    CMEM_NOR_CS_SPANSION_WS_R
   
} Enum_CMEM_CommSeries;


extern kal_int32 ComboMem_Initialize(void);
extern kal_int32 CMEM_Init_FullDriver(void);
extern kal_uint32 CMEM_BlockSize(kal_uint32 address);
#line 180 "custom\\common\\hal\\combo_flash_init.h"
kal_int32 CMEM_Index(void);


const CMEMEntryID *CMEM_GetIDEntry(kal_uint32 index);




kal_bool CMEM_CheckValidDeviceID(kal_uint8 *id);
kal_bool CMEM_EMIINIT_CheckValidDeviceID(kal_uint8 *id);




kal_int32 CMEM_EMIINIT_Index(void);




#line 166 "custom\\common\\hal\\custom_flash.c"

#line 1 "custom\\system\\HEXING60A_11B_BB\\custom_flash.h"

































 
































 

    
    
#line 78 "custom\\system\\HEXING60A_11B_BB\\custom_flash.h"






 







 














 









 











 






 





const kal_char FLASH_ID[] = "{0xEF, 0x60, 0x18}";






















 

#line 168 "custom\\common\\hal\\custom_flash.c"

#line 1 "hal\\storage\\flash\\mtd\\inc\\flash_mtd_ut.h"

































 











































 



#line 95 "hal\\storage\\flash\\mtd\\inc\\flash_mtd_ut.h"







#line 170 "custom\\common\\hal\\custom_flash.c"
#line 1 "hal\\storage\\flash\\fdm\\inc\\drvflash_ut.h"

































 















































































 











#line 127 "hal\\storage\\flash\\fdm\\inc\\drvflash_ut.h"

#line 129 "hal\\storage\\flash\\fdm\\inc\\drvflash_ut.h"



typedef enum {
   NOR_FDM_UT_RW_STRESS = 0,
   NOR_FDM_UT_AUTO,
   NOR_FDM_UT_AUTO_16HR,
   NOR_FDM_UT_NORMAL_POWER_ON_OFF,
   NOR_FDM_UT_RANDOM_POWER_LOSS,
   NOR_FDM_UT_BUSY_POWER_LOSS,
   NOR_FDM_UT_CFI,
   NOR_FDM_UT_PROFILING,                
   NOR_FDM_UT_ATE,
   NOR_FDM_UT_BOOTROM,
   NOR_FDM_UT_OTP,
   NOR_FDM_UT_API,
   NOR_MTD_UT_MEMORY_SLT,
   NOR_MTD_UT_DEVICE_TEST
} NOR_FDM_UT_Code;

                                        




extern kal_bool nor_fdm_dbg_enable; 










#line 178 "hal\\storage\\flash\\fdm\\inc\\drvflash_ut.h"



#line 189 "hal\\storage\\flash\\fdm\\inc\\drvflash_ut.h"


#line 198 "hal\\storage\\flash\\fdm\\inc\\drvflash_ut.h"









#line 227 "hal\\storage\\flash\\fdm\\inc\\drvflash_ut.h"







#line 255 "hal\\storage\\flash\\fdm\\inc\\drvflash_ut.h"


#line 171 "custom\\common\\hal\\custom_flash.c"

#line 1 "custom\\common\\hal\\nvram\\custom_nvram_int_config.h"

































 







































































































































 



#line 175 "custom\\common\\hal\\nvram\\custom_nvram_int_config.h"
#line 1 "interface\\middleware\\nvram_config.h"

































 































































 















#line 122 "interface\\middleware\\nvram_config.h"











#line 139 "interface\\middleware\\nvram_config.h"





#line 160 "interface\\middleware\\nvram_config.h"





#line 175 "interface\\middleware\\nvram_config.h"











#line 176 "custom\\common\\hal\\nvram\\custom_nvram_int_config.h"
#line 1 "interface\\nvram\\nvram_enums.h"

































 



































































 





typedef enum
{
    NVRAM_POWERON_NORMAL,
    NVRAM_POWERON_CHARGER,
    NVRAM_POWERON_ALARM,
    NVRAM_POWERON_INVALID
} nvram_poweron_mode_enum;

typedef enum
{
    NVRAM_LOCK_DISABLE,
    NVRAM_LOCK_ENABLE,
    NVRAM_LOCK_TEMP_DISABLE,
    NVRAM_LOCK_OTP,
    NVRAM_LOCK_INVALID
} nvram_lock_state_enum;

typedef enum
{
    NVRAM_DEFAULT_VALUE_SUCCESS,
    NVRAM_DEFAULT_VALUE_FAIL,
    NVRAM_DEFAULT_VALUE_FF,
    NVRAM_DEFAULT_VALUE_ZERO,
    NVRAM_DEFAULT_VALUE_POINT,
    NVRAM_DEFAULT_VALUE_APPLICATION,

    NVRAM_DEFAULT_VALUE_MAX
} nvram_default_value_enum;

typedef enum
{
    NVRAM_RESET_ALL,
    NVRAM_RESET_USER,
    NVRAM_RESET_SYSTEM,
    NVRAM_RESET_CERTAIN,
    NVRAM_RESET_FACTORY,
    NVRAM_RESET_CUSTPACK,
    NVRAM_RESET_SECUPACK,
    NVRAM_RESET_BRANCH,
    NVRAM_RESET_PACKAGE,
    NVRAM_RESET_FAT,
    NVRAM_RESET_SDS,
    NVRAM_RESET_CAT,
    NVRAM_RESET_INVALID
} nvram_reset_category_enum;


typedef enum
{
     
    NVRAM_ERRNO_SUCCESS,
    NVRAM_IO_ERRNO_OK = NVRAM_ERRNO_SUCCESS,

    NVRAM_ERRNO_FAIL,
    NVRAM_ERRNO_INVALID,
    NVRAM_ERRNO_NOT_READY,

     
    NVRAM_IO_ERRNO_INVALID_LID,
    NVRAM_IO_ERRNO_INVALID_SIZE,
    NVRAM_IO_ERRNO_INVALID_RECORD,
    NVRAM_IO_ERRNO_INVALID_APPID,
    NVRAM_IO_ERRNO_UNINIT,
    NVRAM_IO_ERRNO_INIT,
    NVRAM_IO_ERRNO_CHK,
    NVRAM_IO_ERRNO_LOCKED,
    NVRAM_IO_ERRNO_WRONG_RINGLID,
    NVRAM_IO_ERRNO_ACCESS_DENIED,
    NVRAM_IO_ERRNO_DRV_BROKEN,
    NVRAM_IO_ERRNO_CONTENT_BROKEN,
    NVRAM_IO_ERRNO_SDS_FAIL,
    NVRAM_IO_ERRNO_SDS_MODE,

     
    NVRAM_ERRNO_OTP_UNKNOW,     
    NVRAM_ERRNO_OTP_OVERSCOPE,  
    NVRAM_ERRNO_OTP_WRITEFAIL,  
    NVRAM_ERRNO_OTP_LOCKED,     
    NVRAM_ERRNO_OTP_INVALID_INPUT,
    NVRAM_ERRNO_OTP_INVALID_RANGE,
    NVRAM_ERRNO_OTP_WRITETWICE,

    NVRAM_ERRNO_IMAGE_BROKEN,
    NVRAM_ERRNO_IMAGE_EMPTY,
    NVRAM_ERRNO_IMAGE_DATA_NOT_SYNC,
    NVRAM_ERRNO_IMAGE_DATA_NOT_EXIST,

    NVRAM_ERRNO_FOLDER_EXIST,

    NVRAM_ERRNO_SDS_READY,
    NVRAM_ERRNO_SDS_EMPTY,

    NVRAM_ERRNO_MAX
} nvram_errno_enum;




typedef kal_uint16 nvram_lid_enum;
typedef kal_uint16 nvram_app_id_enum;







typedef enum
{
    NVRAM_IMAGE_TYPE_EMPTY = 0x0000,
    NVRAM_IMAGE_TYPE_CALIBRAT = 0x0001,
    NVRAM_IMAGE_TYPE_IMEI = 0x0002,
    NVRAM_IMAGE_TYPE_ALL
} nvram_image_type_enum;




typedef enum
{
    NVRAM_SDS_ACCESS_BACKUP,
    NVRAM_SDS_ACCESS_RESTORE,
} nvram_sds_access_enum;

typedef enum
{
    NVRAM_RESTORE_FALSE,
    NVRAM_RESTORE_TRUE
}nvram_restore_flag_enum;
#line 177 "custom\\common\\hal\\nvram\\custom_nvram_int_config.h"
#line 1 "interface\\nvram\\nvram_defs.h"

































 























































































 









#line 133 "interface\\nvram\\nvram_defs.h"



 



 
#line 1 "custom\\common\\hal\\nvram\\nvram_lid_statistics.h"

































 




















 








#line 142 "interface\\nvram\\nvram_defs.h"
#line 143 "interface\\nvram\\nvram_defs.h"













 








#line 171 "interface\\nvram\\nvram_defs.h"















#line 195 "interface\\nvram\\nvram_defs.h"






 










 
typedef kal_uint16 nvram_attr_enum;
#line 232 "interface\\nvram\\nvram_defs.h"





typedef kal_uint32 nvram_category_enum;


 





 






 





 






 
#line 276 "interface\\nvram\\nvram_defs.h"




typedef enum
{
    NVRAM_CLEAN_FOLDER_NONE = 0x00,
    NVRAM_CLEAN_FOLDER_SYSTEM = 0x01,       
    NVRAM_CLEAN_FOLDER_FACTORY = 0x02,
    NVRAM_CLEAN_FOLDER_BRANCH = 0x04,
    NVRAM_CLEAN_FOLDER_ALL = 0xFF
} nvram_clean_folder_enum;


 

typedef void (*nvram_query_deault_func)(nvram_lid_enum file_id, kal_uint8 *buffer, kal_uint16 buffer_size);




    typedef struct



    {
        nvram_lid_enum          LID;                                                             
        kal_uint16              total_records;                       
        kal_uint32              size;                                                           
        kal_uint8 const*        default_value;                       
        nvram_category_enum     category;                                                   
        nvram_attr_enum         attr;                                                           
        kal_char                fileprefix[4 + 1];
        kal_char                fileverno[3 + 1];  
        kal_char*               description;                    
    } nvram_ltable_entry_struct;
#line 328 "interface\\nvram\\nvram_defs.h"

typedef struct
{
    nvram_ltable_entry_struct *ltable;
    kal_uint32 size;
}nvram_ltable_tbl_struct;


#line 389 "interface\\nvram\\nvram_defs.h"

#line 400 "interface\\nvram\\nvram_defs.h"

#line 409 "interface\\nvram\\nvram_defs.h"





typedef struct
{
    kal_uint8 const* version;
    void const* custpack_default[10];
}custpack_nvram_header;

typedef struct
{
    nvram_clean_folder_enum   category;
    kal_wchar    *folder_path;
} nvram_clean_folder_entry;

typedef struct
{
    nvram_lid_enum LID;
    kal_bool (*get_data)(kal_uint8 *buffer, kal_uint16 buf_size);
}nvram_shutdown_cb_struct;

typedef struct
{
    nvram_lid_enum LID;
    kal_uint32 size;                 
    kal_uint16 total_records;        
    kal_uint8 const *default_value;
    kal_bool is_multi_default;
} nvram_cat_replace_setting;



 

extern const kal_uint8 NVRAM_EF_ZERO_DEFAULT[];
extern const kal_uint8 NVRAM_EF_FF_DEFAULT[];










#line 178 "custom\\common\\hal\\nvram\\custom_nvram_int_config.h"































#line 216 "custom\\common\\hal\\nvram\\custom_nvram_int_config.h"









































#line 173 "custom\\common\\hal\\custom_flash.c"



#line 185 "custom\\common\\hal\\custom_flash.c"























 








 

























#line 250 "custom\\common\\hal\\custom_flash.c"






 







 






















 

static FlashRegionInfo RegionInfo[]=  
{
   {0x10000, 32},
   {0, 0}  
};


#line 359 "custom\\common\\hal\\custom_flash.c"








 

extern NOR_MTD_Driver NORFlashMtd;

#line 489 "custom\\common\\hal\\custom_flash.c"









 
kal_uint32 custom_get_NORFLASH_Base(void);






 

  
  
  
  
  
  

#line 550 "custom\\common\\hal\\custom_flash.c"





   kal_uint16 wNandMaxReplaceCount = 28;






kal_uint32 custom_part_secs = (0);


#line 572 "custom\\common\\hal\\custom_flash.c"
NAND_FLASH_DRV_DATA  NANDFlashDriveData;

















 
kal_uint32
custom_get_NORFLASH_ROMSpace(void)
{





   return (0x00e00000 + 0x0);

}
















 
kal_uint32
custom_get_NORFLASH_Size(void)
{



   return 0x01000000;

}















 



void Initialize_FDD_tables(void)
{
    ComboMem_Initialize();
    return;
}

#line 833 "custom\\common\\hal\\custom_flash.c"

void nor_sweep_device(void)
{

   kal_set_eg_events(nor_egid, 0x4, 0);

   return;
}

void nor_manual_reclaim(void)
{

   kal_set_eg_events(nor_egid, 0x1, 0);

   return;
}














 
kal_uint32 custom_get_fat_addr()
{





      return (0x00e00000 + 0x0);

}














 
kal_uint32 custom_get_fat_len()
{





      return (0x00200000 - 0x0);

}
















 

kal_bool NANDParameterInitialized = KAL_FALSE;
void Custom_NAND_Init(void)
{
#line 1006 "custom\\common\\hal\\custom_flash.c"
}


extern kal_int32 EMI_QueryIsRemapped(void);

void Custom_NOR_Init(void)
{


   CMEM_Init_FullDriver();
#line 1033 "custom\\common\\hal\\custom_flash.c"
}

#line 1117 "custom\\common\\hal\\custom_flash.c"

#line 1135 "custom\\common\\hal\\custom_flash.c"















 
kal_uint32 custom_get_NORFLASH_Base(void)
{



   return 0x10000000;

}
















 
kal_uint32 custom_get_FLASH_Size(void)
{





   return 0x01000000;

}


















 

kal_bool INT_QueryIsROMSpace(kal_uint32 addr)
{

    

   
   if(( ((0x10000000)?(addr>= 0x10000000):(KAL_TRUE)) && addr<(0x10000000+0x01000000)) || (addr>=0x90000000 && addr<(0x90000000+0x01000000)))
       return KAL_TRUE;
   else

       return KAL_FALSE;





}

 
#line 145 "tools\\NVRAMStatistic\\src\\ckSysDrv_flash_cfg_preproc.c"
#line 146 "tools\\NVRAMStatistic\\src\\ckSysDrv_flash_cfg_preproc.c"



 




    int cksysdrv_enabled = 1;




 



   int fs_auto_config_support = 0;




 


        int app_storage_in_sys_drv = 1;



    

#line 194 "tools\\NVRAMStatistic\\src\\ckSysDrv_flash_cfg_preproc.c"

int allocated_fat_space    = (0x00200000 - 0x0);
int partition_sectors      = (710 - 0);
int flash_base_address     = (0x00e00000 + 0x0);
int system_drive_location  = 2;  





 

#line 221 "tools\\NVRAMStatistic\\src\\ckSysDrv_flash_cfg_preproc.c"

#line 228 "tools\\NVRAMStatistic\\src\\ckSysDrv_flash_cfg_preproc.c"



        int fs_nor_base_address    = (0x00e00000 + 0x0);

        


 

        int fs_nor_length          = (0x00200000 - 0x0);








        int backup_partition_base = -1;
        int backup_partition_size = -1;
        int bakcup_partition_overlap_size = -1;







 


   int fs_low_cost_support = 0;






 


   int nand_total_size = 0;    
   int nand_block_size = 0;    







 


   int nand_fdm_version = 5;






 


int nvram_custom_cfg_max_record_sector_num = (4);



   int nor_reserved_blocks = (3);
   int nor_single_bank_support = 1;









   int nor_sector_size = 512;


