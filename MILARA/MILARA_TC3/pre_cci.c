# 1 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\milara\\milara_tc3\\\\combined_MILARA_TC3.c"
# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\milara\\milara_tc3\\\\combined_MILARA_TC3.c" 2

# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\milara\\milara_tc3\\\\combined_MILARA_TC3.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2





 
 





# 3 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\milara\\milara_tc3\\\\combined_MILARA_TC3.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\milara\\milara_tc3\\\\combined_MILARA_TC3.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("dashboard.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=requestToken",
		"RegExp=name=\"requestToken\"\\ value=\"(.*?)\">\\\r\\\n\\\t\\\t<input\\ type",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/hostSignon.do*",
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=requestLanguageToken",
		"RegExp=name=\"requestLanguageToken\"\\ value=\"(.*?)\"\\ id",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/hostSignon.do*",
		"LAST");

	web_url("hostSignon.do", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?successURL=https%3A%2F%2Fav-pt-ferrari.accela.com%2Fportlets%2Fspa%2Fdashboard.do&SignOnModule=", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(38);
	web_add_header("AppD_Header", "MILARA_Login");
	lr_start_transaction("MILARA_Login");

	web_custom_request("loginAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?requestType=checkWebSSOAdapter&servProvCode=MILARA", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		"LAST");

	web_submit_data("hostSignon.do_2",
		"Action=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true",
		"Snapshot=t175.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=action", "Value=signon", "ENDITEM",
		"Name=successUrl", "Value=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", "ENDITEM",
		"Name=cookieUserName", "Value=", "ENDITEM",
		"Name=cookieAgencyName", "Value=", "ENDITEM",
		"Name=requestToken", "Value={requestToken}", "ENDITEM",
		"Name=requestLanguageToken", "Value={requestLanguageToken}", "ENDITEM",
		"Name=password1", "Value=", "ENDITEM",
		"Name=servProvCode", "Value=MILARA", "ENDITEM",
		"Name=username", "Value=admin", "ENDITEM",
		"Name=password", "Value=admin", "ENDITEM",
		"Name=accela_select_language", "Value=en_US", "ENDITEM",
		"Name=submit_", "Value=Login", "ENDITEM",
		"LAST");

	web_url("dashboard.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("text.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"AANewUX_ApplicationMenu_Administration\":\"\",\"AANewUX_ApplicationMenu_CivicPlatform\":\"\",\"AANewUX_ApplicationMenu_ExitAdministration\":\"\",\"AANewUX_ApplicationMenu_ClassicAdministration\":\"\",\"AANewUX_ApplicationMenu_ExitClassicAdministration\":\"\",\"AANewUX_ApplicationMenu_Help\":\"\",\"AANewUX_ApplicationMenu_SignOut\":\"\",\"AANewUX_ApplicationMenu_SwitchToV360\":\"\",\"AANewUX_Dialog_Close\":\"\",\"AANewUX_Dialog_PortletErrorTitle\":\"\",\"AANewUX_Dialog_URLRequired\":\"\",\""
		"AANewUX_Error_InvalidResponse\":\"\",\"AANewUX_Error_SessionTimedOut\":\"\",\"AANewUX_GIS_CreateInspections\":\"\",\"AANewUX_GIS_Actions\":\"\",\"AANewUX_GIS_AccelaRecords\":\"\",\"AANewUX_GIS_Address\":\"\",\"AANewUX_GIS_Addresses\":\"\",\"AANewUX_GIS_Assets\":\"\",\"AANewUX_GIS_Contents\":\"\",\"AANewUX_GIS_NotPlotted\":\"\",\"AANewUX_GIS_AllRecords\":\"\",\"AANewUX_GIS_AllTransactions\":\"\",\"AANewUX_GIS_AssetGroup\":\"\",\"AANewUX_GIS_AssetID\":\"\",\"AANewUX_GIS_AssetType\":\"\",\""
		"AANewUX_GIS_ClassType\":\"\",\"AANewUX_GIS_ClearAll\":\"\",\"AANewUX_GIS_AttachToRecord\":\"\",\"AANewUX_GIS_BufferSelection\":\"\",\"AANewUX_GIS_DriveTimeBufferSelection\":\"\",\"AANewUX_GIS_CreateNewRecord\":\"\",\"AANewUX_GIS_CreateWorkOrder\":\"\",\"AANewUX_GIS_CreateMultipleWorkOrders\":\"\",\"AANewUX_GIS_ExportToCSV\":\"\",\"AANewUX_GIS_Description\":\"\",\"AANewUX_GIS_GISObjects\":\"\",\"AANewUX_GIS_HideDetails\":\"\",\"AANewUX_GIS_InstallDate\":\"\",\"AANewUX_GIS_Inspections\":\"\",\""
		"AANewUX_GIS_InspectionType\":\"\",\"AANewUX_GIS_OpenedDate\":\"\",\"AANewUX_GIS_Owner\":\"\",\"AANewUX_GIS_Parcel\":\"\",\"AANewUX_GIS_Parcels\":\"\",\"AANewUX_GIS_Permits\":\"\",\"AANewUX_GIS_ParcelID\":\"\",\"AANewUX_GIS_RecordID\":\"\",\"AANewUX_GIS_PermitID\":\"\",\"AANewUX_GIS_Records\":\"\",\"AANewUX_GIS_RecordType\":\"\",\"AANewUX_GIS_ScheduledDate\":\"\",\"AANewUX_GIS_SelectNearbyFeatures\":\"\",\"AANewUX_GIS_SendGISFeature\":\"\",\"AANewUX_GIS_ShowDetails\":\"\",\""
		"AANewUX_GIS_ShowDocument\":\"\",\"AANewUX_GIS_ShowingResults\":\"\",\"AANewUX_GIS_Status\":\"\",\"AANewUX_GIS_TooManyGisObjectsTitle\":\"\",\"AANewUX_GIS_TooManyGisObjectsMsg\":\"\",\"AANewUX_GIS_Transactions\":\"\",\"AANewUX_GIS_XCoordinate\":\"\",\"AANewUX_GIS_YCoordinate\":\"\",\"AANewUX_GIS_ZipCode\":\"\",\"AANewUX_GIS_InspRecords\":\"\",\"AANewUX_GIS_selected\":\"\",\"AANewUX_GIS_SelectAll\":\"\",\"AANewUX_GIS_DeselectAll\":\"\",\"AANewUX_GIS_Opened\":\"\",\"AANewUX_GIS_MORE\":\"\",\""
		"AANewUX_GIS_NewPanelRecords\":\"\",\"AANewUX_GlobalSearch_Address\":\"\",\"AANewUX_GlobalSearch_Agency\":\"\",\"AANewUX_GlobalSearch_AltID\":\"\",\"AANewUX_GlobalSearch_Applicant\":\"\",\"AANewUX_GlobalSearch_ApplicationName\":\"\",\"AANewUX_GlobalSearch_AssetInfo\":\"\",\"AANewUX_GlobalSearch_AssetsTab\":\"\",\"AANewUX_GlobalSearch_BusinessName\":\"\",\"AANewUX_GlobalSearch_ColumnView\":\"\",\"AANewUX_GlobalSearch_Contact\":\"\",\"AANewUX_GlobalSearch_ContactNumber\":\"\",\""
		"AANewUX_GlobalSearch_ContactBusinessName\":\"\",\"AANewUX_GlobalSearch_ContactsTab\":\"\",\"AANewUX_GlobalSearch_ContactType\":\"\",\"AANewUX_GlobalSearch_CreatedDate\":\"\",\"AANewUX_GlobalSearch_CreatedOn\":\"\",\"AANewUX_GlobalSearch_Description\":\"\",\"AANewUX_GlobalSearch_Document\":\"\",\"AANewUX_GlobalSearch_DocumentCategory\":\"\",\"AANewUX_GlobalSearch_DocumentName\":\"\",\"AANewUX_GlobalSearch_DocumentStatus\":\"\",\"AANewUX_GlobalSearch_DocumentsTab\":\"\",\"AANewUX_GlobalSearch_Email"
		"\":\"\",\"AANewUX_GlobalSearch_FilterButton\":\"\",\"AANewUX_GlobalSearch_FullName\":\"\",\"AANewUX_GlobalSearch_LastPage\":\"\",\"AANewUX_GlobalSearch_LastUpdatedOn\":\"\",\"AANewUX_GlobalSearch_LicenseExpiresOn\":\"\",\"AANewUX_GlobalSearch_LicenseIssuedOn\":\"\",\"AANewUX_GlobalSearch_LicenceProfessionalsTab\":\"\",\"AANewUX_GlobalSearch_LicenseType\":\"\",\"AANewUX_GlobalSearch_Location\":\"\",\"AANewUX_GlobalSearch_LocationsTab\":\"\",\"AANewUX_GlobalSearch_NextPageLink\":\"\",\""
		"AANewUX_GlobalSearch_Owner\":\"\",\"AANewUX_GlobalSearch_Page\":\"\",\"AANewUX_GlobalSearch_Parcel\":\"\",\"AANewUX_GlobalSearch_ParcelsTab\":\"\",\"AANewUX_GlobalSearch_PhoneNumber\":\"\",\"AANewUX_GlobalSearch_ProjectName\":\"\",\"AANewUX_GlobalSearch_Record\":\"\",\"AANewUX_GlobalSearch_RecordID\":\"\",\"AANewUX_GlobalSearch_RecordInfo\":\"\",\"AANewUX_GlobalSearch_RecordsTab\":\"\",\"AANewUX_GlobalSearch_RecordType\":\"\",\"AANewUX_GlobalSearch_ReportedType\":\"\",\""
		"AANewUX_GlobalSearch_ResultsCount\":\"\",\"AANewUX_GlobalSearch_Review\":\"\",\"AANewUX_GlobalSearch_PreviousPageLink\":\"\",\"AANewUX_GlobalSearch_ShortNotes\":\"\",\"AANewUX_GlobalSearch_Showing\":\"\",\"AANewUX_GlobalSearch_SortByMostRecent\":\"\",\"AANewUX_GlobalSearch_Status\":\"\",\"AANewUX_GlobalSearch_StatusDate\":\"\",\"AANewUX_GlobalSearch_StateLicenseNo\":\"\",\"AANewUX_GlobalSearch_TabRecordCount\":\"\",\"AANewUX_GlobalSearch_TradeName\":\"\",\"AANewUX_GlobalSearch_Type\":\"\",\""
		"AANewUX_GlobalSearchForm_Advanced\":\"\",\"AANewUX_GlobalSearchForm_RecentSearches\":\"\",\"AANewUX_GlobalSearchForm_InputPlaceholder\":\"\",\"AANewUX_GlobalSearchForm_SubmitButtonText\":\"\",\"AANewUX_Launchpad_Address\":\"\",\"AANewUX_Launchpad_AddFavorite\":\"\",\"AANewUX_Launchpad_AllPages\":\"\",\"AANewUX_Launchpad_Assets\":\"\",\"AANewUX_Launchpad_ClearAll\":\"\",\"AANewUX_Launchpad_Contacts\":\"\",\"AANewUX_Launchpad_Filter\":\"\",\"AANewUX_Launchpad_FilterList\":\"\",\""
		"AANewUX_Launchpad_HideAllPages\":\"\",\"AANewUX_Launchpad_New\":\"\",\"AANewUX_Launchpad_NewApplication\":\"\",\"AANewUX_Launchpad_Owners\":\"\",\"AANewUX_Launchpad_Parcels\":\"\",\"AANewUX_Launchpad_Professionals\":\"\",\"AANewUX_Launchpad_Recent\":\"\",\"AANewUX_Launchpad_ShowAllPages\":\"\",\"AANewUX_Launchpad_YourPages\":\"\",\"AANewUX_Launchpad_RemoveFavorite\":\"\",\"AANewUX_MainMenu_Label\":\"\",\"AANewUX_MainMenu_DashboardActive\":\"\",\"AANewUX_MainMenu_DashboardOpen\":\"\",\""
		"AANewUX_MainMenu_GlobalSearchOpen\":\"\",\"AANewUX_MainMenu_GlobalSearchClose\":\"\",\"AANewUX_MainMenu_LaunchpadOpen\":\"\",\"AANewUX_MainMenu_LaunchpadClose\":\"\",\"AANewUX_Task_Actions\":\"\",\"AANewUX_Task_Active\":\"\",\"AANewUX_Task_ActivityDeleteSuccess\":\"\",\"AANewUX_Task_ActivityID\":\"\",\"AANewUX_Task_Address\":\"\",\"AANewUX_Task_Agenda\":\"\",\"AANewUX_Task_AllPages\":\"\",\"AANewUX_Task_AltID\":\"\",\"AANewUX_Task_AlternateID\":\"\",\"AANewUX_Task_Assign\":\"\",\""
		"AANewUX_Task_Assigned\":\"\",\"AANewUX_Task_AssignedTo\":\"\",\"AANewUX_Task_Cancel\":\"\",\"AANewUX_Task_Category\":\"\",\"AANewUX_Task_CategoryACTIVITY\":\"\",\"AANewUX_Task_CategoryDOCUMENT\":\"\",\"AANewUX_Task_CategoryINSPECTION\":\"\",\"AANewUX_Task_CategoryMEETING\":\"\",\"AANewUX_Task_CategoryWORKFLOW\":\"\",\"AANewUX_Task_Claim\":\"\",\"AANewUX_Task_Clear\":\"\",\"AANewUX_Task_ColumnView\":\"\",\"AANewUX_Task_Completed\":\"\",\"AANewUX_Task_ConditionApplied\":\"\",\""
		"AANewUX_Task_ConditionPlusNMore\":\"\",\"AANewUX_Task_Delete\":\"\",\"AANewUX_Task_DocumentActionNotDefined\":\"\",\"AANewUX_Task_DocumentPreviewPermissionFail\":\"\",\"AANewUX_Task_Download\":\"\",\"AANewUX_Task_Due\":\"\",\"AANewUX_Task_DueInNDays\":\"\",\"AANewUX_Task_DueDateNotAssigned\":\"\",\"AANewUX_Task_DueToday\":\"\",\"AANewUX_Task_Duplicate\":\"\",\"AANewUX_Task_Duration\":\"\",\"AANewUX_Task_DurationHour\":\"\",\"AANewUX_Task_DurationHours\":\"\",\"AANewUX_Task_DurationMinute\":\"\",\""
		"AANewUX_Task_DurationMinutes\":\"\",\"AANewUX_Task_ExportToCSV\":\"\",\"AANewUX_Task_Filter\":\"\",\"AANewUX_Task_FilterAdvanced\":\"\",\"AANewUX_Task_FilterApply\":\"\",\"AANewUX_Task_FilterClearAll\":\"\",\"AANewUX_Task_FilterDateRangeAssigned\":\"\",\"AANewUX_Task_FilterDateRangeDue\":\"\",\"AANewUX_Task_FilterDateRangeOpen\":\"\",\"AANewUX_Task_FilterDateRangeStatus\":\"\",\"AANewUX_Task_FilterFrom\":\"\",\"AANewUX_Task_FilterSelected\":\"\",\"AANewUX_Task_FilterSave\":\"\",\""
		"AANewUX_Task_FilterStatusCompleted\":\"\",\"AANewUX_Task_FilterTabAssignedTo\":\"\",\"AANewUX_Task_FilterTabDateRange\":\"\",\"AANewUX_Task_FilterTabSaved\":\"\",\"AANewUX_Task_FilterTabStatus\":\"\",\"AANewUX_Task_FilterTabType\":\"\",\"AANewUX_Task_FilterTo\":\"\",\"AANewUX_Task_Group\":\"\",\"AANewUX_Task_HasNoAddress\":\"\",\"AANewUX_Task_HasNoCity\":\"\",\"AANewUX_Task_HasNoComment\":\"\",\"AANewUX_Task_HasNoDescription\":\"\",\"AANewUX_Task_HasNoLocation\":\"\",\""
		"AANewUX_Task_HasNoMeetingBody\":\"\",\"AANewUX_Task_HasNoScheduledTime\":\"\",\"AANewUX_Task_InspectionCancelSuccess\":\"\",\"AANewUX_Task_InspectionDeleteFail\":\"\",\"AANewUX_Task_InspectionDeleteSuccess\":\"\",\"AANewUX_Task_InTheAfternoon\":\"\",\"AANewUX_Task_InTheMorning\":\"\",\"AANewUX_Task_Location\":\"\",\"AANewUX_Task_LoadMore\":\"\",\"AANewUX_Task_LoadingTasks\":\"\",\"AANewUX_Task_MeetingRejectedSuccess\":\"\",\"AANewUX_Task_NoMoreRecordsAvailable\":\"\",\""
		"AANewUX_Task_NoTasksAssigned\":\"\",\"AANewUX_Task_NoTasksFound\":\"\",\"AANewUX_Task_NoFilteredTasksFound\":\"\",\"AANewUX_Task_NoQuickQueriesFound\":\"\",\"AANewUX_Task_PageLabel\":\"\",\"AANewUX_Task_PageOfLabel\":\"\",\"AANewUX_Task_Preview\":\"\",\"AANewUX_Task_PreviewDocument\":\"\",\"AANewUX_Task_Print\":\"\",\"AANewUX_Task_QuickQueries\":\"\",\"AANewUX_Task_Reassign\":\"\",\"AANewUX_Task_RecordAgendaSetSuccess\":\"\",\"AANewUX_Task_RecordActionDownloadSuccess\":\"\",\""
		"AANewUX_Task_RecordDuplicateSuccess\":\"\",\"AANewUX_Task_RecordID\":\"\",\"AANewUX_Task_RecordReassignSuccess\":\"\",\"AANewUX_Task_RecordRemoveSuccess\":\"\",\"AANewUX_Task_RecordRescheduleSuccess\":\"\",\"AANewUX_Task_RecordReviewSuccess\":\"\",\"AANewUX_Task_RecordType\":\"\",\"AANewUX_Task_Reject\":\"\",\"AANewUX_Task_Release\":\"\",\"AANewUX_Task_Remove\":\"\",\"AANewUX_Task_Reschedule\":\"\",\"AANewUX_Task_Result\":\"\",\"AANewUX_Task_Review\":\"\",\"AANewUX_Task_Schedule\":\"\",\""
		"AANewUX_Task_ShowingNTasks\":\"\",\"AANewUX_Task_ShowingNFilteredTasks\":\"\",\"AANewUX_Task_Sort\":\"\",\"AANewUX_Task_Success\":\"\",\"AANewUX_Task_TaskErrorHeading\":\"\",\"AANewUX_Task_TaskName\":\"\",\"AANewUX_Task_TaskListFixedColumnHeader\":\"\",\"AANewUX_Task_TaskListDueDateHeader\":\"\",\"AANewUX_Task_TaskListFlagsHeader\":\"\",\"AANewUX_Task_TaskListStatusHeader\":\"\",\"AANewUX_Task_TaskListDetailsHeader\":\"\",\"AANewUX_Task_Tasks\":\"\",\"AANewUX_Task_TotalTasks\":\"\",\""
		"AANewUX_Task_Type\":\"\",\"AANewUX_Task_ViewDocInfo\":\"\",\"AANewUX_Task_Warning\":\"\",\"AANewUX_Task_Workflow\":\"\",\"AANewUX_Task_WorkflowClaimFail\":\"\",\"AANewUX_Task_WorkflowClaimPermissionFail\":\"\",\"AANewUX_Task_WorkflowClaimSuccess\":\"\",\"AANewUX_Task_WorkflowReleaseFail\":\"\",\"AANewUX_Task_WorkflowReleasePermissionFail\":\"\",\"AANewUX_Task_WorkflowReleaseSuccess\":\"\",\"AANewUX_Tooltip_CardView\":\"\",\"AANewUX_Tooltip_ListView\":\"\",\"AANewUX_Tooltip_Map\":\"\",\""
		"AANewUX_Tooltip_SuperAgencyDashboard\":\"\",\"AANewUX_Tooltip_Tasks\":\"\",\"AANewUX_Workspace_Close\":\"\",\"AANewUX_Workspace_More\":\"\",\"AANewUX_Workspace_OpenSpaces\":\"\",\"AANewUX_Workspace_Pin\":\"\",\"AANewUX_Workspace_Unpin\":\"\"}", 
		"LAST");

	web_custom_request("userinfo.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/user/userinfo.do?mode=userInfo", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={}", 
		"LAST");

	web_url("session.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("MILARA_Login",2);

	lr_think_time(20);
	web_add_header("AppD_Header", "MILARA_TC3_01_ClickRecords");
	lr_start_transaction("MILARA_TC3_01_ClickRecords");

	web_url("session.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t180.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc91", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("myCAPDetailPortlet.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t184.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("View the content of this inline frame", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Licenses&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("MILARA_TC3_01_ClickRecords",2);

	lr_think_time(7);
	web_add_header("AppD_Header", "MILARA_TC3_02_Records_ClickNew");
	lr_start_transaction("MILARA_TC3_02_Records_ClickNew");

	web_url("session.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc91&module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Licenses&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("capTypePickerSelector.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Licenses&isGeneralCAP=Y", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Licenses&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Licenses&isGeneralCAP=Y", 
		"Snapshot=t189.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("MILARA_TC3_02_Records_ClickNew",2);

	lr_think_time(4);
	web_add_header("AppD_Header", "LARA_TC3_03_SelectRecordType_OpenSpearForm");
	lr_start_transaction("MILARA_TC3_03_SelectRecordType_OpenSpearForm");

	web_url("session.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc91&module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Licenses&isGeneralCAP=Y", 
		"Snapshot=t190.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("capTypePicker.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=validateCapType&modelId=&module=Enforcement", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Licenses&isGeneralCAP=Y", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fpicker%2FcapTypePicker.do%3FfromModel%3Dcap%26module%3DLicenses%26isGeneralCAP%3DY&value(CurrentEntryURL)=%2Fportlets%2Fpicker%2FcapTypePicker.do%3FfromModel%3Dcap%26module%3DLicenses%26isGeneralCAP%3DY&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=&module=Licenses&accelasubmitbuttonname=&itemName=&CurrentViewID=119&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=119&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&value(capTypeModel*type)=Complaint&value(capTypeModel*subType)=NA&value(capTypeModel*category)=NA&value(selectModuleName)=Enforcement&value(g1AssetGroup)=&value(g1AssetType)=&value(mode)=add&value(srLevel)=&value(capGroupIndex)=&value(capTypeModel*group)=Enforcement&value(capTypeModel)=Enforcement%2FComplaint%2FNA%2FNA&value(fromModel)=cap&value(modelId)=&value(formKey)=&value(GISCommand)=&", 
		"LAST");

	web_url("session.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc91&module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Licenses&isGeneralCAP=Y", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("capTypePicker.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Licenses&isGeneralCAP=Y", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=value(FirstEntryURL)", "Value=/portlets/picker/capTypePicker.do?fromModel=cap&module=Licenses&isGeneralCAP=Y", "ENDITEM", 
		"Name=value(CurrentEntryURL)", "Value=/portlets/picker/capTypePicker.do?fromModel=cap&module=Licenses&isGeneralCAP=Y", "ENDITEM", 
		"Name=portlet_language", "Value=en_US", "ENDITEM", 
		"Name=refresh_target", "Value=", "ENDITEM", 
		"Name=refresh_url", "Value=", "ENDITEM", 
		"Name=buttonName", "Value=", "ENDITEM", 
		"Name=modeName", "Value=", "ENDITEM", 
		"Name=module", "Value=Licenses", "ENDITEM", 
		"Name=accelasubmitbuttonname", "Value=", "ENDITEM", 
		"Name=itemName", "Value=", "ENDITEM", 
		"Name=CurrentViewID", "Value=119", "ENDITEM", 
		"Name=exceptionLogID", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=119", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=7M8ClLd+DbTHcKSi4w11SQrX", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=value(capTypeModel*type)", "Value=Complaint", "ENDITEM", 
		"Name=value(capTypeModel*subType)", "Value=NA", "ENDITEM", 
		"Name=value(capTypeModel*category)", "Value=NA", "ENDITEM", 
		"Name=value(selectModuleName)", "Value=Enforcement", "ENDITEM", 
		"Name=value(g1AssetGroup)", "Value=", "ENDITEM", 
		"Name=value(g1AssetType)", "Value=", "ENDITEM", 
		"Name=value(mode)", "Value=add", "ENDITEM", 
		"Name=value(srLevel)", "Value=", "ENDITEM", 
		"Name=value(capGroupIndex)", "Value=", "ENDITEM", 
		"Name=value(capTypeModel*group)", "Value=Enforcement", "ENDITEM", 
		"Name=value(capTypeModel)", "Value=Enforcement/Complaint/NA/NA", "ENDITEM", 
		"Name=value(fromModel)", "Value=cap", "ENDITEM", 
		"Name=value(modelId)", "Value=", "ENDITEM", 
		"Name=value(formKey)", "Value=", "ENDITEM", 
		"Name=value(GISCommand)", "Value=", "ENDITEM", 
		"LAST");

	web_submit_data("ajax.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t194.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=MI&stateProperty=value(contactsModel2*state)&aaZoneId=aazone-country-state-contact2&stateReadOnly=false&country=&tempModuleName=Enforcement&aaxmlrequest=true&aa_rand=0.33135349699296057&aazones=aazone-country-state-contact2&width=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t195.inf", 
		"Mode=HTML", 
		"Body=aazone-country-state-contact2", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(contactsModel2*driverLicenseState)&aaZoneId=aazone-country-driverLicenseState2&stateReadOnly=false&country=&tempModuleName=Enforcement&aaxmlrequest=true&aa_rand=0.8675705457571894&aazones=aazone-country-driverLicenseState2&width=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t196.inf", 
		"Mode=HTML", 
		"Body=aazone-country-driverLicenseState2", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(contactsModel2*birthState)&aaZoneId=aazone-birth-state-contact2&stateReadOnly=false&country=&tempModuleName=Enforcement&aaxmlrequest=true&aa_rand=0.18017175840213895&aazones=aazone-birth-state-contact2&width=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t197.inf", 
		"Mode=HTML", 
		"Body=aazone-birth-state-contact2", 
		"LAST");

	web_submit_data("empty.jsp_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("getXRefContactAddressListBySingleContact3.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getXRefContactAddressListBySingleContact3.do?mode=list&type=contact3&currentContactType=&module=Enforcement&showReadOnlyContactAddress=N&fromViewSummary=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t199.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("getXRefContactAddressListBySingleContact3.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getXRefContactAddressListBySingleContact3.do?mode=list&type=contact3&currentContactType=&module=Enforcement&showReadOnlyContactAddress=N&fromViewSummary=null", 
		"TargetFrame=_self", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t200.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("appSpecInfoForm.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=buildDrillList&module=Enforcement&guideSheetSeq=&singleMode=", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("search.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		"LAST");

	web_submit_data("regionalSyncMask.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&getMsg=Y", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t204.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t205.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t206.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("expression.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t207.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=argumentPKs", "Value=[{\"portletID\":-1,\"viewKey1\":\"\",\"viewKey2\":\"\",\"viewKey3\":\"\"},{\"portletID\":124,\"viewKey1\":\"Complainant\",\"viewKey2\":\"\",\"viewKey3\":\"\"}]", "ENDITEM", 
		"Name=expressionPageType", "Value=SPEAR", "ENDITEM", 
		"Name=isReload", "Value=false", "ENDITEM", 
		"Name=module", "Value=Enforcement", "ENDITEM", 
		"Name=capType", "Value=Enforcement/Complaint/NA/NA", "ENDITEM", 
		"LAST");

	web_custom_request("expression.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t208.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Enforcement&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&"
		"singleModeName=COMPLAINT%2BINFORMATION&app_spec_info_COMPLAINT_INFORMATION_Profession=&app_spec_info_COMPLAINT_INFORMATION_Name_of_Licensee=&app_spec_info_COMPLAINT_INFORMATION_Address_of_Licensee=&app_spec_info_COMPLAINT_INFORMATION_License_Number=&app_spec_info_COMPLAINT_INFORMATION_Description_of_Complaint=&singleModeName=WILLINGNESS%2BTO%2BTESTIFY&singleModeName=COMMUNICATION%2BCONSENT&app_spec_info_COMMUNICATION_CONSENT_Name=&app_spec_info_COMMUNICATION_CONSENT_Address=&"
		"app_spec_info_COMMUNICATION_CONSENT_Telephone_Number=&app_spec_info_COMMUNICATION_CONSENT_Email_Address=&app_spec_info_COMMUNICATION_CONSENT_Relationship_to_You=&singleModeName=PATIENT%2BMEDICAL%2BTREATMENT&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Name=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Date_of_Birth=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Last_4_Digit%2527s_of_Patient%2527s_SSN=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Date_of_Incident=&singleModeName="
		"MEDICAL%2BSTAFF%2BPRIVILEGES&app_spec_info_MEDICAL_STAFF_PRIVILEGES_On_what_date_did_the_change_in_staff_privileges_occur=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_time_licensee_was_on_facility_staff=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Was_the_resignation_voluntary=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Suspension=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Probation=&singleModeName=POLICE%2BREPORT&app_spec_info_POLICE_REPORT_Police_Agency=&"
		"app_spec_info_POLICE_REPORT_Police_Report_Incident_Number=&singleModeName=CRIMINAL%2BCONVICTIONS&app_spec_info_CRIMINAL_CONVICTIONS_Are_you_self_reporting_a_conviction_or_reporting_a_conviction_against_a_licensee=&singleModeName=SELF%2BREPORTING&app_spec_info_SELF_REPORTING_State_Board_Name=&app_spec_info_SELF_REPORTING_Date_of_Action=&app_spec_info_SELF_REPORTING_Nature_of_Disciplinary_Action=&singleModeName=ENFORCEMENT%2BROUTING&app_spec_info_ENFORCEMENT_ROUTING_Complaint_Type=&"
		"app_spec_info_ENFORCEMENT_ROUTING_Route_to_Drug_Monitoring_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints=on&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=124&"
		"sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(contact2*refContactNumber)=&value(contactsModel2*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel2*contactTypeFlag)=individual&value(contactsModel2*accessLevel)=N&value(contactsModel2*contactType)=Complainant&value(contactsModel2*title)=&value(contactsModel2*fullName)=&value(contactsModel2*addressId)=&value(contactsModel2*addressLine1)=&value"
		"(contactsModel2*addressLine2)=&value(contactsModel2*addressLine3)=&value(contactsModel2*city)=&value(contactsModel2*state)=MI&value(contactsModel2*zip)=&value(contactsModel2*countryCode)=&value(contactsModel2*fax)=&value(contactsModel2*contactOnSRChange)=&value(contactsModel2*comment)=&value(maskformat_contactsModel2*maskedSsn)=%23%23%23-%23%23-%23%23%23%23&value(contactsModel2*maskedSsn)=&value(maskformat_contactsModel2*fein)=&value(contactsModel2*fein)=&value(contactsModel2*userID)=&value"
		"(contactsModel2*internalUserFlag)=&value(templateData)=&value(contactsModel2*salutation)=&value(contactsModel2*gender)=&value(contactsModel2*postOfficeBox)=&date(contactsModel2*birthDate)=&value(contactsModel2*namesuffix)=&value(contactsModel2*birthCity)=&value(contactsModel2*birthState)=&value(contactsModel2*birthRegion)=&value(contactsModel2*race)=&date(contactsModel2*deceasedDate)=&value(contactsModel2*passportNumber)=&value(contactsModel2*driverLicenseNbr)=&value"
		"(contactsModel2*driverLicenseState)=&value(contactsModel2*stateIDNbr)=&value(contactsModel2*relation)=&value(contactsModel2*flag)=N&value(contactsModel2*firstName)=&value(contactsModel2*middleName)=&value(contactsModel2*lastName)=&value(contactsModel2*businessName)=&value(contactsModel2*businessName2)=&value(contactsModel2*tradeName)=&ACMask_124_9_value(contactsModel2*phone1_disp)=&ACMask_124_9_value(contactsModel2*phone1)=&ACMask_124_10_value(contactsModel2*phone2_disp)=&ACMask_124_10_value"
		"(contactsModel2*phone2)=&ACMask_124_23_value(contactsModel2*phone3_disp)=&ACMask_124_23_value(contactsModel2*phone3)=&value(contactsModel2*preferredChannel)=&value(contactsModel2*email)=&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea16=&sourcetextarea16=&layouttextarea16=null&contactsModel2*uiuid=16&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=124&sessionIdFromWindow="
		"7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isContact3=1&contact3ViewID=124&isContact3Validation=N&isContact3Required=Y&contact3AccessRight=F&contact3ContactNumber=null&value(mode)=add&value(srTest)=&value(capType)=Enforcement%2FComplaint%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&value(capType)=Enforcement%2FComplaint%2FNA%2FNA&value"
		"(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capModel*capStatus)=Submitted&value(capDetailModel*asgnStaff)=&value"
		"(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)="
		"&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date"
		"(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&date(capModel*fileDate)=08%2F28%2F2018&editPar=2112&"
		"allViewIDGroup=%2C124%2C225&viewGroup=%2C124%2C225&formGroup=%2Ccontact3DetailForm%2CcapDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(contactsModel2*maskedSsn)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(contactsModel2*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber=undefined&argumentPKs="
		"%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A124%2C%22viewKey1%22%3A%22Complainant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute", 
		"LAST");

	web_submit_data("empty.jsp_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t209.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("expression.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t210.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Enforcement&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&"
		"singleModeName=COMPLAINT%2BINFORMATION&app_spec_info_COMPLAINT_INFORMATION_Profession=Nursing&app_spec_info_COMPLAINT_INFORMATION_Name_of_Licensee=performance&app_spec_info_COMPLAINT_INFORMATION_Address_of_Licensee=&app_spec_info_COMPLAINT_INFORMATION_License_Number=&app_spec_info_COMPLAINT_INFORMATION_Description_of_Complaint=performance&app_spec_info_COMPLAINT_INFORMATION_Is_this_drug_related%253F=No&singleModeName=WILLINGNESS%2BTO%2BTESTIFY&"
		"app_spec_info_WILLINGNESS_TO_TESTIFY_Are_you_willing_to_testify_in_a_hearing=No&singleModeName=COMMUNICATION%2BCONSENT&app_spec_info_COMMUNICATION_CONSENT_I_authorize_the_Department_to_release_my_name_and_all_relevant_information_pertaining_to_this_allega=No&app_spec_info_COMMUNICATION_CONSENT_Do_you_authorize_another_person_to_communicate_with_the_department_regarding_your_complaint=No&app_spec_info_COMMUNICATION_CONSENT_Name=&app_spec_info_COMMUNICATION_CONSENT_Address=&"
		"app_spec_info_COMMUNICATION_CONSENT_Telephone_Number=&app_spec_info_COMMUNICATION_CONSENT_Email_Address=&app_spec_info_COMMUNICATION_CONSENT_Relationship_to_You=&singleModeName=PATIENT%2BMEDICAL%2BTREATMENT&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Name=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Date_of_Birth=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Last_4_Digit%2527s_of_Patient%2527s_SSN=0&app_spec_info_PATIENT_MEDICAL_TREATMENT_Date_of_Incident=&singleModeName="
		"MEDICAL%2BSTAFF%2BPRIVILEGES&app_spec_info_MEDICAL_STAFF_PRIVILEGES_On_what_date_did_the_change_in_staff_privileges_occur=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_time_licensee_was_on_facility_staff=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Was_the_resignation_voluntary=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Suspension=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Probation=&singleModeName=POLICE%2BREPORT&app_spec_info_POLICE_REPORT_Police_Agency=&"
		"app_spec_info_POLICE_REPORT_Police_Report_Incident_Number=&singleModeName=CRIMINAL%2BCONVICTIONS&app_spec_info_CRIMINAL_CONVICTIONS_Are_you_self_reporting_a_conviction_or_reporting_a_conviction_against_a_licensee=&singleModeName=SELF%2BREPORTING&app_spec_info_SELF_REPORTING_State_Board_Name=&app_spec_info_SELF_REPORTING_Date_of_Action=&app_spec_info_SELF_REPORTING_Nature_of_Disciplinary_Action=&singleModeName=ENFORCEMENT%2BROUTING&app_spec_info_ENFORCEMENT_ROUTING_Complaint_Type=&"
		"app_spec_info_ENFORCEMENT_ROUTING_Route_to_Drug_Monitoring_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints=on&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=124&"
		"sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(contact2*refContactNumber)=&value(contactsModel2*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel2*contactTypeFlag)=individual&value(contactsModel2*accessLevel)=N&value(contactsModel2*contactType)=Complainant&value(contactsModel2*title)=&value(contactsModel2*fullName)=&value(contactsModel2*addressId)=&value(contactsModel2*addressLine1)=&value"
		"(contactsModel2*addressLine2)=&value(contactsModel2*addressLine3)=&value(contactsModel2*city)=&value(contactsModel2*state)=MI&value(contactsModel2*zip)=&value(contactsModel2*countryCode)=&value(contactsModel2*fax)=&value(contactsModel2*contactOnSRChange)=&value(contactsModel2*comment)=&value(maskformat_contactsModel2*maskedSsn)=%23%23%23-%23%23-%23%23%23%23&value(contactsModel2*maskedSsn)=&value(maskformat_contactsModel2*fein)=&value(contactsModel2*fein)=&value(contactsModel2*userID)=&value"
		"(contactsModel2*internalUserFlag)=&value(templateData)=&value(contactsModel2*salutation)=&value(contactsModel2*gender)=&value(contactsModel2*postOfficeBox)=&date(contactsModel2*birthDate)=&value(contactsModel2*namesuffix)=&value(contactsModel2*birthCity)=&value(contactsModel2*birthState)=&value(contactsModel2*birthRegion)=&value(contactsModel2*race)=&date(contactsModel2*deceasedDate)=&value(contactsModel2*passportNumber)=&value(contactsModel2*driverLicenseNbr)=&value"
		"(contactsModel2*driverLicenseState)=&value(contactsModel2*stateIDNbr)=&value(contactsModel2*relation)=&value(contactsModel2*flag)=N&value(contactsModel2*firstName)=&value(contactsModel2*middleName)=&value(contactsModel2*lastName)=&value(contactsModel2*businessName)=&value(contactsModel2*businessName2)=&value(contactsModel2*tradeName)=&ACMask_124_9_value(contactsModel2*phone1_disp)=&ACMask_124_9_value(contactsModel2*phone1)=&ACMask_124_10_value(contactsModel2*phone2_disp)=&ACMask_124_10_value"
		"(contactsModel2*phone2)=&ACMask_124_23_value(contactsModel2*phone3_disp)=&ACMask_124_23_value(contactsModel2*phone3)=&value(contactsModel2*preferredChannel)=&value(contactsModel2*email)=&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea16=&sourcetextarea16=&layouttextarea16=null&contactsModel2*uiuid=16&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=124&sessionIdFromWindow="
		"7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isContact3=1&contact3ViewID=124&isContact3Validation=N&isContact3Required=Y&contact3AccessRight=F&contact3ContactNumber=null&value(mode)=add&value(srTest)=&value(capType)=Enforcement%2FComplaint%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&value(capType)=Enforcement%2FComplaint%2FNA%2FNA&value"
		"(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capModel*capStatus)=Submitted&value(capDetailModel*asgnStaff)=&value"
		"(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)="
		"&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date"
		"(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&date(capModel*fileDate)=08%2F28%2F2018&editPar=2112&"
		"allViewIDGroup=%2C124%2C225&viewGroup=%2C124%2C225&formGroup=%2Ccontact3DetailForm%2CcapDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(contactsModel2*maskedSsn)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(contactsModel2*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&accelasubmitbuttonname=Previous&callBack=&variableKey=ASI%3A%3ACOMMUNICATION%20CONSENT%3A%3ADo%20you%20authorize%20another%20person%20to%20communicate%20with%20the%20department%20regarding%20your%20complaint&refAPONumber=undefined&argumentPKs="
		"%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A124%2C%22viewKey1%22%3A%22Complainant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute", 
		"LAST");

	web_custom_request("expression.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t211.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Enforcement&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&"
		"singleModeName=COMPLAINT%2BINFORMATION&app_spec_info_COMPLAINT_INFORMATION_Profession=Nursing&app_spec_info_COMPLAINT_INFORMATION_Name_of_Licensee=performance&app_spec_info_COMPLAINT_INFORMATION_Address_of_Licensee=&app_spec_info_COMPLAINT_INFORMATION_License_Number=&app_spec_info_COMPLAINT_INFORMATION_Description_of_Complaint=performance&app_spec_info_COMPLAINT_INFORMATION_Is_this_drug_related%253F=No&singleModeName=WILLINGNESS%2BTO%2BTESTIFY&"
		"app_spec_info_WILLINGNESS_TO_TESTIFY_Are_you_willing_to_testify_in_a_hearing=No&singleModeName=COMMUNICATION%2BCONSENT&app_spec_info_COMMUNICATION_CONSENT_I_authorize_the_Department_to_release_my_name_and_all_relevant_information_pertaining_to_this_allega=No&app_spec_info_COMMUNICATION_CONSENT_Do_you_authorize_another_person_to_communicate_with_the_department_regarding_your_complaint=No&app_spec_info_COMMUNICATION_CONSENT_Name=&app_spec_info_COMMUNICATION_CONSENT_Address=&"
		"app_spec_info_COMMUNICATION_CONSENT_Telephone_Number=&app_spec_info_COMMUNICATION_CONSENT_Email_Address=&app_spec_info_COMMUNICATION_CONSENT_Relationship_to_You=&singleModeName=PATIENT%2BMEDICAL%2BTREATMENT&app_spec_info_PATIENT_MEDICAL_TREATMENT_Is_your_complaint_regarding_the_medical_treatment_of_a_patient=No&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Name=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Date_of_Birth=&"
		"app_spec_info_PATIENT_MEDICAL_TREATMENT_Last_4_Digit%2527s_of_Patient%2527s_SSN=0&app_spec_info_PATIENT_MEDICAL_TREATMENT_Date_of_Incident=&singleModeName=MEDICAL%2BSTAFF%2BPRIVILEGES&app_spec_info_MEDICAL_STAFF_PRIVILEGES_On_what_date_did_the_change_in_staff_privileges_occur=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_time_licensee_was_on_facility_staff=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Was_the_resignation_voluntary=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Suspension=&"
		"app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Probation=&singleModeName=POLICE%2BREPORT&app_spec_info_POLICE_REPORT_Police_Agency=&app_spec_info_POLICE_REPORT_Police_Report_Incident_Number=&singleModeName=CRIMINAL%2BCONVICTIONS&app_spec_info_CRIMINAL_CONVICTIONS_Are_you_self_reporting_a_conviction_or_reporting_a_conviction_against_a_licensee=&singleModeName=SELF%2BREPORTING&app_spec_info_SELF_REPORTING_State_Board_Name=&app_spec_info_SELF_REPORTING_Date_of_Action=&"
		"app_spec_info_SELF_REPORTING_Nature_of_Disciplinary_Action=&singleModeName=ENFORCEMENT%2BROUTING&app_spec_info_ENFORCEMENT_ROUTING_Complaint_Type=&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Drug_Monitoring_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints=on&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SPEAR&"
		"expression_page_reload_after_submit_or_validate_failed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=124&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(contact2*refContactNumber)=&value(contactsModel2*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel2*contactTypeFlag)=individual&value(contactsModel2*accessLevel)=N&value"
		"(contactsModel2*contactType)=Complainant&value(contactsModel2*title)=&value(contactsModel2*fullName)=&value(contactsModel2*addressId)=&value(contactsModel2*addressLine1)=&value(contactsModel2*addressLine2)=&value(contactsModel2*addressLine3)=&value(contactsModel2*city)=&value(contactsModel2*state)=MI&value(contactsModel2*zip)=&value(contactsModel2*countryCode)=&value(contactsModel2*fax)=&value(contactsModel2*contactOnSRChange)=&value(contactsModel2*comment)=&value"
		"(maskformat_contactsModel2*maskedSsn)=%23%23%23-%23%23-%23%23%23%23&value(contactsModel2*maskedSsn)=&value(maskformat_contactsModel2*fein)=&value(contactsModel2*fein)=&value(contactsModel2*userID)=&value(contactsModel2*internalUserFlag)=&value(templateData)=&value(contactsModel2*salutation)=&value(contactsModel2*gender)=&value(contactsModel2*postOfficeBox)=&date(contactsModel2*birthDate)=&value(contactsModel2*namesuffix)=&value(contactsModel2*birthCity)=&value(contactsModel2*birthState)=&value"
		"(contactsModel2*birthRegion)=&value(contactsModel2*race)=&date(contactsModel2*deceasedDate)=&value(contactsModel2*passportNumber)=&value(contactsModel2*driverLicenseNbr)=&value(contactsModel2*driverLicenseState)=&value(contactsModel2*stateIDNbr)=&value(contactsModel2*relation)=&value(contactsModel2*flag)=N&value(contactsModel2*firstName)=&value(contactsModel2*middleName)=&value(contactsModel2*lastName)=&value(contactsModel2*businessName)=&value(contactsModel2*businessName2)=&value"
		"(contactsModel2*tradeName)=&ACMask_124_9_value(contactsModel2*phone1_disp)=&ACMask_124_9_value(contactsModel2*phone1)=&ACMask_124_10_value(contactsModel2*phone2_disp)=&ACMask_124_10_value(contactsModel2*phone2)=&ACMask_124_23_value(contactsModel2*phone3_disp)=&ACMask_124_23_value(contactsModel2*phone3)=&value(contactsModel2*preferredChannel)=&value(contactsModel2*email)=&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea16=&"
		"sourcetextarea16=&layouttextarea16=null&contactsModel2*uiuid=16&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=124&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isContact3=1&contact3ViewID=124&isContact3Validation=N&isContact3Required=Y&contact3AccessRight=F&contact3ContactNumber=null&value(mode)=add&value(srTest)=&value(capType)=Enforcement%2FComplaint%2FNA%2FNA&value"
		"(capID)=&value(capDetailModel*shortNotes)=&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&value(capType)=Enforcement%2FComplaint%2FNA%2FNA&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value"
		"(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capModel*capStatus)=Submitted&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits"
		")=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value"
		"(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date"
		"(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&date(capModel*fileDate)=08%2F28%2F2018&editPar=2112&allViewIDGroup=%2C124%2C225&viewGroup=%2C124%2C225&formGroup=%2Ccontact3DetailForm%2CcapDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=&"
		"SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(contactsModel2*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(contactsModel2*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&accelasubmitbuttonname=Previous&callBack=&variableKey="
		"ASI%3A%3APATIENT%20MEDICAL%20TREATMENT%3A%3AIs%20your%20complaint%20regarding%20the%20medical%20treatment%20of%20a%20patient&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A124%2C%22viewKey1%22%3A%22Complainant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute", 
		"LAST");

	web_custom_request("expression.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t212.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Enforcement&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&"
		"singleModeName=COMPLAINT%2BINFORMATION&app_spec_info_COMPLAINT_INFORMATION_Profession=Nursing&app_spec_info_COMPLAINT_INFORMATION_Name_of_Licensee=performance&app_spec_info_COMPLAINT_INFORMATION_Address_of_Licensee=&app_spec_info_COMPLAINT_INFORMATION_License_Number=&app_spec_info_COMPLAINT_INFORMATION_Description_of_Complaint=performance&app_spec_info_COMPLAINT_INFORMATION_Is_this_drug_related%253F=No&singleModeName=WILLINGNESS%2BTO%2BTESTIFY&"
		"app_spec_info_WILLINGNESS_TO_TESTIFY_Are_you_willing_to_testify_in_a_hearing=No&singleModeName=COMMUNICATION%2BCONSENT&app_spec_info_COMMUNICATION_CONSENT_I_authorize_the_Department_to_release_my_name_and_all_relevant_information_pertaining_to_this_allega=No&app_spec_info_COMMUNICATION_CONSENT_Do_you_authorize_another_person_to_communicate_with_the_department_regarding_your_complaint=No&app_spec_info_COMMUNICATION_CONSENT_Name=&app_spec_info_COMMUNICATION_CONSENT_Address=&"
		"app_spec_info_COMMUNICATION_CONSENT_Telephone_Number=&app_spec_info_COMMUNICATION_CONSENT_Email_Address=&app_spec_info_COMMUNICATION_CONSENT_Relationship_to_You=&singleModeName=PATIENT%2BMEDICAL%2BTREATMENT&app_spec_info_PATIENT_MEDICAL_TREATMENT_Is_your_complaint_regarding_the_medical_treatment_of_a_patient=No&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Name=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Date_of_Birth=&"
		"app_spec_info_PATIENT_MEDICAL_TREATMENT_Last_4_Digit%2527s_of_Patient%2527s_SSN=0&app_spec_info_PATIENT_MEDICAL_TREATMENT_Date_of_Incident=&singleModeName=MEDICAL%2BSTAFF%2BPRIVILEGES&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Are_you_reporting_a_change_in_medical_staff_privileges=No&app_spec_info_MEDICAL_STAFF_PRIVILEGES_On_what_date_did_the_change_in_staff_privileges_occur=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_time_licensee_was_on_facility_staff=&"
		"app_spec_info_MEDICAL_STAFF_PRIVILEGES_Was_the_resignation_voluntary=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Suspension=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Probation=&singleModeName=POLICE%2BREPORT&app_spec_info_POLICE_REPORT_Police_Agency=&app_spec_info_POLICE_REPORT_Police_Report_Incident_Number=&singleModeName=CRIMINAL%2BCONVICTIONS&app_spec_info_CRIMINAL_CONVICTIONS_Are_you_self_reporting_a_conviction_or_reporting_a_conviction_against_a_licensee=&singleModeName="
		"SELF%2BREPORTING&app_spec_info_SELF_REPORTING_State_Board_Name=&app_spec_info_SELF_REPORTING_Date_of_Action=&app_spec_info_SELF_REPORTING_Nature_of_Disciplinary_Action=&singleModeName=ENFORCEMENT%2BROUTING&app_spec_info_ENFORCEMENT_ROUTING_Complaint_Type=&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Drug_Monitoring_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints=on&expression_portlet_to_be_populate=-1&"
		"expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=124&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(contact2*refContactNumber)=&value(contactsModel2*refContactNumber)=&value(serviceProviderCode)=&value"
		"(contactsModel2*contactTypeFlag)=individual&value(contactsModel2*accessLevel)=N&value(contactsModel2*contactType)=Complainant&value(contactsModel2*title)=&value(contactsModel2*fullName)=&value(contactsModel2*addressId)=&value(contactsModel2*addressLine1)=&value(contactsModel2*addressLine2)=&value(contactsModel2*addressLine3)=&value(contactsModel2*city)=&value(contactsModel2*state)=MI&value(contactsModel2*zip)=&value(contactsModel2*countryCode)=&value(contactsModel2*fax)=&value"
		"(contactsModel2*contactOnSRChange)=&value(contactsModel2*comment)=&value(maskformat_contactsModel2*maskedSsn)=%23%23%23-%23%23-%23%23%23%23&value(contactsModel2*maskedSsn)=&value(maskformat_contactsModel2*fein)=&value(contactsModel2*fein)=&value(contactsModel2*userID)=&value(contactsModel2*internalUserFlag)=&value(templateData)=&value(contactsModel2*salutation)=&value(contactsModel2*gender)=&value(contactsModel2*postOfficeBox)=&date(contactsModel2*birthDate)=&value(contactsModel2*namesuffix)=&"
		"value(contactsModel2*birthCity)=&value(contactsModel2*birthState)=&value(contactsModel2*birthRegion)=&value(contactsModel2*race)=&date(contactsModel2*deceasedDate)=&value(contactsModel2*passportNumber)=&value(contactsModel2*driverLicenseNbr)=&value(contactsModel2*driverLicenseState)=&value(contactsModel2*stateIDNbr)=&value(contactsModel2*relation)=&value(contactsModel2*flag)=N&value(contactsModel2*firstName)=&value(contactsModel2*middleName)=&value(contactsModel2*lastName)=&value"
		"(contactsModel2*businessName)=&value(contactsModel2*businessName2)=&value(contactsModel2*tradeName)=&ACMask_124_9_value(contactsModel2*phone1_disp)=&ACMask_124_9_value(contactsModel2*phone1)=&ACMask_124_10_value(contactsModel2*phone2_disp)=&ACMask_124_10_value(contactsModel2*phone2)=&ACMask_124_23_value(contactsModel2*phone3_disp)=&ACMask_124_23_value(contactsModel2*phone3)=&value(contactsModel2*preferredChannel)=&value(contactsModel2*email)=&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&"
		"value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea16=&sourcetextarea16=&layouttextarea16=null&contactsModel2*uiuid=16&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=124&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isContact3=1&contact3ViewID=124&isContact3Validation=N&isContact3Required=Y&contact3AccessRight=F&contact3ContactNumber=null&value(mode)=add&value"
		"(srTest)=&value(capType)=Enforcement%2FComplaint%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&value(capType)=Enforcement%2FComplaint%2FNA%2FNA&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&"
		"value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capModel*capStatus)=Submitted&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)"
		"=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value"
		"(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value"
		"(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&date(capModel*fileDate)=08%2F28%2F2018&editPar=2112&allViewIDGroup=%2C124%2C225&viewGroup=%2C124%2C225&formGroup=%2Ccontact3DetailForm%2CcapDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value"
		"(createCapForParcelType)=&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(contactsModel2*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(contactsModel2*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&accelasubmitbuttonname=Previous&callBack=&variableKey="
		"ASI%3A%3AMEDICAL%20STAFF%20PRIVILEGES%3A%3AAre%20you%20reporting%20a%20change%20in%20medical%20staff%20privileges&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A124%2C%22viewKey1%22%3A%22Complainant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute", 
		"LAST");

	lr_think_time(4);

	web_custom_request("expression.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t213.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Enforcement&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&"
		"singleModeName=COMPLAINT%2BINFORMATION&app_spec_info_COMPLAINT_INFORMATION_Profession=Nursing&app_spec_info_COMPLAINT_INFORMATION_Name_of_Licensee=performance&app_spec_info_COMPLAINT_INFORMATION_Address_of_Licensee=&app_spec_info_COMPLAINT_INFORMATION_License_Number=&app_spec_info_COMPLAINT_INFORMATION_Description_of_Complaint=performance&app_spec_info_COMPLAINT_INFORMATION_Is_this_drug_related%253F=No&singleModeName=WILLINGNESS%2BTO%2BTESTIFY&"
		"app_spec_info_WILLINGNESS_TO_TESTIFY_Are_you_willing_to_testify_in_a_hearing=No&singleModeName=COMMUNICATION%2BCONSENT&app_spec_info_COMMUNICATION_CONSENT_I_authorize_the_Department_to_release_my_name_and_all_relevant_information_pertaining_to_this_allega=No&app_spec_info_COMMUNICATION_CONSENT_Do_you_authorize_another_person_to_communicate_with_the_department_regarding_your_complaint=No&app_spec_info_COMMUNICATION_CONSENT_Name=&app_spec_info_COMMUNICATION_CONSENT_Address=&"
		"app_spec_info_COMMUNICATION_CONSENT_Telephone_Number=&app_spec_info_COMMUNICATION_CONSENT_Email_Address=&app_spec_info_COMMUNICATION_CONSENT_Relationship_to_You=&singleModeName=PATIENT%2BMEDICAL%2BTREATMENT&app_spec_info_PATIENT_MEDICAL_TREATMENT_Is_your_complaint_regarding_the_medical_treatment_of_a_patient=No&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Name=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Date_of_Birth=&"
		"app_spec_info_PATIENT_MEDICAL_TREATMENT_Last_4_Digit%2527s_of_Patient%2527s_SSN=0&app_spec_info_PATIENT_MEDICAL_TREATMENT_Date_of_Incident=&singleModeName=MEDICAL%2BSTAFF%2BPRIVILEGES&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Are_you_reporting_a_change_in_medical_staff_privileges=No&app_spec_info_MEDICAL_STAFF_PRIVILEGES_On_what_date_did_the_change_in_staff_privileges_occur=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_time_licensee_was_on_facility_staff=&"
		"app_spec_info_MEDICAL_STAFF_PRIVILEGES_Was_the_resignation_voluntary=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Suspension=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Probation=&singleModeName=POLICE%2BREPORT&app_spec_info_POLICE_REPORT_Is_there_a_police_report=No&app_spec_info_POLICE_REPORT_Police_Agency=&app_spec_info_POLICE_REPORT_Police_Report_Incident_Number=&singleModeName=CRIMINAL%2BCONVICTIONS&"
		"app_spec_info_CRIMINAL_CONVICTIONS_Are_you_self_reporting_a_conviction_or_reporting_a_conviction_against_a_licensee=&singleModeName=SELF%2BREPORTING&app_spec_info_SELF_REPORTING_State_Board_Name=&app_spec_info_SELF_REPORTING_Date_of_Action=&app_spec_info_SELF_REPORTING_Nature_of_Disciplinary_Action=&singleModeName=ENFORCEMENT%2BROUTING&app_spec_info_ENFORCEMENT_ROUTING_Complaint_Type=&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Drug_Monitoring_Value=Y&"
		"app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints=on&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=124&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&"
		"value(mode)=newsave&value(contactSeqNumber)=&value(contact2*refContactNumber)=&value(contactsModel2*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel2*contactTypeFlag)=individual&value(contactsModel2*accessLevel)=N&value(contactsModel2*contactType)=Complainant&value(contactsModel2*title)=&value(contactsModel2*fullName)=&value(contactsModel2*addressId)=&value(contactsModel2*addressLine1)=&value(contactsModel2*addressLine2)=&value(contactsModel2*addressLine3)=&value"
		"(contactsModel2*city)=&value(contactsModel2*state)=MI&value(contactsModel2*zip)=&value(contactsModel2*countryCode)=&value(contactsModel2*fax)=&value(contactsModel2*contactOnSRChange)=&value(contactsModel2*comment)=&value(maskformat_contactsModel2*maskedSsn)=%23%23%23-%23%23-%23%23%23%23&value(contactsModel2*maskedSsn)=&value(maskformat_contactsModel2*fein)=&value(contactsModel2*fein)=&value(contactsModel2*userID)=&value(contactsModel2*internalUserFlag)=&value(templateData)=&value"
		"(contactsModel2*salutation)=&value(contactsModel2*gender)=&value(contactsModel2*postOfficeBox)=&date(contactsModel2*birthDate)=&value(contactsModel2*namesuffix)=&value(contactsModel2*birthCity)=&value(contactsModel2*birthState)=&value(contactsModel2*birthRegion)=&value(contactsModel2*race)=&date(contactsModel2*deceasedDate)=&value(contactsModel2*passportNumber)=&value(contactsModel2*driverLicenseNbr)=&value(contactsModel2*driverLicenseState)=&value(contactsModel2*stateIDNbr)=&value"
		"(contactsModel2*relation)=&value(contactsModel2*flag)=N&value(contactsModel2*firstName)=&value(contactsModel2*middleName)=&value(contactsModel2*lastName)=&value(contactsModel2*businessName)=&value(contactsModel2*businessName2)=&value(contactsModel2*tradeName)=&ACMask_124_9_value(contactsModel2*phone1_disp)=&ACMask_124_9_value(contactsModel2*phone1)=&ACMask_124_10_value(contactsModel2*phone2_disp)=&ACMask_124_10_value(contactsModel2*phone2)=&ACMask_124_23_value(contactsModel2*phone3_disp)=&"
		"ACMask_124_23_value(contactsModel2*phone3)=&value(contactsModel2*preferredChannel)=&value(contactsModel2*email)=&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea16=&sourcetextarea16=&layouttextarea16=null&contactsModel2*uiuid=16&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=124&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&endDate=&"
		"chooseItems=&effectiveDate=&isContact3=1&contact3ViewID=124&isContact3Validation=N&isContact3Required=Y&contact3AccessRight=F&contact3ContactNumber=null&value(mode)=add&value(srTest)=&value(capType)=Enforcement%2FComplaint%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&value(capType)=Enforcement%2FComplaint%2FNA%2FNA&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)="
		"&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capModel*capStatus)=Submitted&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value"
		"(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date"
		"(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value"
		"(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&date(capModel*fileDate)=08%2F28%2F2018&editPar=2112&allViewIDGroup=%2C124%2C225&viewGroup=%2C124%2C225&formGroup="
		"%2Ccontact3DetailForm%2CcapDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(contactsModel2*maskedSsn)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(contactsModel2*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&accelasubmitbuttonname=Previous&callBack=&variableKey=ASI%3A%3APOLICE%20REPORT%3A%3AIs%20there%20a%20police%20report&refAPONumber=undefined&argumentPKs="
		"%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A124%2C%22viewKey1%22%3A%22Complainant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute", 
		"LAST");

	web_custom_request("expression.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t214.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Enforcement&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&"
		"singleModeName=COMPLAINT%2BINFORMATION&app_spec_info_COMPLAINT_INFORMATION_Profession=Nursing&app_spec_info_COMPLAINT_INFORMATION_Name_of_Licensee=performance&app_spec_info_COMPLAINT_INFORMATION_Address_of_Licensee=&app_spec_info_COMPLAINT_INFORMATION_License_Number=&app_spec_info_COMPLAINT_INFORMATION_Description_of_Complaint=performance&app_spec_info_COMPLAINT_INFORMATION_Is_this_drug_related%253F=No&singleModeName=WILLINGNESS%2BTO%2BTESTIFY&"
		"app_spec_info_WILLINGNESS_TO_TESTIFY_Are_you_willing_to_testify_in_a_hearing=No&singleModeName=COMMUNICATION%2BCONSENT&app_spec_info_COMMUNICATION_CONSENT_I_authorize_the_Department_to_release_my_name_and_all_relevant_information_pertaining_to_this_allega=No&app_spec_info_COMMUNICATION_CONSENT_Do_you_authorize_another_person_to_communicate_with_the_department_regarding_your_complaint=No&app_spec_info_COMMUNICATION_CONSENT_Name=&app_spec_info_COMMUNICATION_CONSENT_Address=&"
		"app_spec_info_COMMUNICATION_CONSENT_Telephone_Number=&app_spec_info_COMMUNICATION_CONSENT_Email_Address=&app_spec_info_COMMUNICATION_CONSENT_Relationship_to_You=&singleModeName=PATIENT%2BMEDICAL%2BTREATMENT&app_spec_info_PATIENT_MEDICAL_TREATMENT_Is_your_complaint_regarding_the_medical_treatment_of_a_patient=No&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Name=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Date_of_Birth=&"
		"app_spec_info_PATIENT_MEDICAL_TREATMENT_Last_4_Digit%2527s_of_Patient%2527s_SSN=0&app_spec_info_PATIENT_MEDICAL_TREATMENT_Date_of_Incident=&singleModeName=MEDICAL%2BSTAFF%2BPRIVILEGES&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Are_you_reporting_a_change_in_medical_staff_privileges=No&app_spec_info_MEDICAL_STAFF_PRIVILEGES_On_what_date_did_the_change_in_staff_privileges_occur=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_time_licensee_was_on_facility_staff=&"
		"app_spec_info_MEDICAL_STAFF_PRIVILEGES_Was_the_resignation_voluntary=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Suspension=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Probation=&singleModeName=POLICE%2BREPORT&app_spec_info_POLICE_REPORT_Is_there_a_police_report=No&app_spec_info_POLICE_REPORT_Police_Agency=&app_spec_info_POLICE_REPORT_Police_Report_Incident_Number=&singleModeName=CRIMINAL%2BCONVICTIONS&app_spec_info_CRIMINAL_CONVICTIONS_Are_you_reporting_a_criminal_conviction=No&"
		"app_spec_info_CRIMINAL_CONVICTIONS_Are_you_self_reporting_a_conviction_or_reporting_a_conviction_against_a_licensee=&singleModeName=SELF%2BREPORTING&app_spec_info_SELF_REPORTING_State_Board_Name=&app_spec_info_SELF_REPORTING_Date_of_Action=&app_spec_info_SELF_REPORTING_Nature_of_Disciplinary_Action=&singleModeName=ENFORCEMENT%2BROUTING&app_spec_info_ENFORCEMENT_ROUTING_Complaint_Type=&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Drug_Monitoring_Value=Y&"
		"app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints=on&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=124&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&"
		"value(mode)=newsave&value(contactSeqNumber)=&value(contact2*refContactNumber)=&value(contactsModel2*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel2*contactTypeFlag)=individual&value(contactsModel2*accessLevel)=N&value(contactsModel2*contactType)=Complainant&value(contactsModel2*title)=&value(contactsModel2*fullName)=&value(contactsModel2*addressId)=&value(contactsModel2*addressLine1)=&value(contactsModel2*addressLine2)=&value(contactsModel2*addressLine3)=&value"
		"(contactsModel2*city)=&value(contactsModel2*state)=MI&value(contactsModel2*zip)=&value(contactsModel2*countryCode)=&value(contactsModel2*fax)=&value(contactsModel2*contactOnSRChange)=&value(contactsModel2*comment)=&value(maskformat_contactsModel2*maskedSsn)=%23%23%23-%23%23-%23%23%23%23&value(contactsModel2*maskedSsn)=&value(maskformat_contactsModel2*fein)=&value(contactsModel2*fein)=&value(contactsModel2*userID)=&value(contactsModel2*internalUserFlag)=&value(templateData)=&value"
		"(contactsModel2*salutation)=&value(contactsModel2*gender)=&value(contactsModel2*postOfficeBox)=&date(contactsModel2*birthDate)=&value(contactsModel2*namesuffix)=&value(contactsModel2*birthCity)=&value(contactsModel2*birthState)=&value(contactsModel2*birthRegion)=&value(contactsModel2*race)=&date(contactsModel2*deceasedDate)=&value(contactsModel2*passportNumber)=&value(contactsModel2*driverLicenseNbr)=&value(contactsModel2*driverLicenseState)=&value(contactsModel2*stateIDNbr)=&value"
		"(contactsModel2*relation)=&value(contactsModel2*flag)=N&value(contactsModel2*firstName)=&value(contactsModel2*middleName)=&value(contactsModel2*lastName)=&value(contactsModel2*businessName)=&value(contactsModel2*businessName2)=&value(contactsModel2*tradeName)=&ACMask_124_9_value(contactsModel2*phone1_disp)=&ACMask_124_9_value(contactsModel2*phone1)=&ACMask_124_10_value(contactsModel2*phone2_disp)=&ACMask_124_10_value(contactsModel2*phone2)=&ACMask_124_23_value(contactsModel2*phone3_disp)=&"
		"ACMask_124_23_value(contactsModel2*phone3)=&value(contactsModel2*preferredChannel)=&value(contactsModel2*email)=&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea16=&sourcetextarea16=&layouttextarea16=null&contactsModel2*uiuid=16&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=124&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&endDate=&"
		"chooseItems=&effectiveDate=&isContact3=1&contact3ViewID=124&isContact3Validation=N&isContact3Required=Y&contact3AccessRight=F&contact3ContactNumber=null&value(mode)=add&value(srTest)=&value(capType)=Enforcement%2FComplaint%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&value(capType)=Enforcement%2FComplaint%2FNA%2FNA&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)="
		"&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capModel*capStatus)=Submitted&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value"
		"(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date"
		"(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value"
		"(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&date(capModel*fileDate)=08%2F28%2F2018&editPar=2112&allViewIDGroup=%2C124%2C225&viewGroup=%2C124%2C225&formGroup="
		"%2Ccontact3DetailForm%2CcapDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(contactsModel2*maskedSsn)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(contactsModel2*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&accelasubmitbuttonname=Previous&callBack=&variableKey=ASI%3A%3ACRIMINAL%20CONVICTIONS%3A%3AAre%20you%20reporting%20a%20criminal%20conviction&refAPONumber=undefined&argumentPKs="
		"%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A124%2C%22viewKey1%22%3A%22Complainant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute", 
		"LAST");

	web_custom_request("expression.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t215.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Enforcement&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&"
		"singleModeName=COMPLAINT%2BINFORMATION&app_spec_info_COMPLAINT_INFORMATION_Profession=Nursing&app_spec_info_COMPLAINT_INFORMATION_Name_of_Licensee=performance&app_spec_info_COMPLAINT_INFORMATION_Address_of_Licensee=&app_spec_info_COMPLAINT_INFORMATION_License_Number=&app_spec_info_COMPLAINT_INFORMATION_Description_of_Complaint=performance&app_spec_info_COMPLAINT_INFORMATION_Is_this_drug_related%253F=No&singleModeName=WILLINGNESS%2BTO%2BTESTIFY&"
		"app_spec_info_WILLINGNESS_TO_TESTIFY_Are_you_willing_to_testify_in_a_hearing=No&singleModeName=COMMUNICATION%2BCONSENT&app_spec_info_COMMUNICATION_CONSENT_I_authorize_the_Department_to_release_my_name_and_all_relevant_information_pertaining_to_this_allega=No&app_spec_info_COMMUNICATION_CONSENT_Do_you_authorize_another_person_to_communicate_with_the_department_regarding_your_complaint=No&app_spec_info_COMMUNICATION_CONSENT_Name=&app_spec_info_COMMUNICATION_CONSENT_Address=&"
		"app_spec_info_COMMUNICATION_CONSENT_Telephone_Number=&app_spec_info_COMMUNICATION_CONSENT_Email_Address=&app_spec_info_COMMUNICATION_CONSENT_Relationship_to_You=&singleModeName=PATIENT%2BMEDICAL%2BTREATMENT&app_spec_info_PATIENT_MEDICAL_TREATMENT_Is_your_complaint_regarding_the_medical_treatment_of_a_patient=No&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Name=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Date_of_Birth=&"
		"app_spec_info_PATIENT_MEDICAL_TREATMENT_Last_4_Digit%2527s_of_Patient%2527s_SSN=0&app_spec_info_PATIENT_MEDICAL_TREATMENT_Date_of_Incident=&singleModeName=MEDICAL%2BSTAFF%2BPRIVILEGES&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Are_you_reporting_a_change_in_medical_staff_privileges=No&app_spec_info_MEDICAL_STAFF_PRIVILEGES_On_what_date_did_the_change_in_staff_privileges_occur=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_time_licensee_was_on_facility_staff=&"
		"app_spec_info_MEDICAL_STAFF_PRIVILEGES_Was_the_resignation_voluntary=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Suspension=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Probation=&singleModeName=POLICE%2BREPORT&app_spec_info_POLICE_REPORT_Is_there_a_police_report=No&app_spec_info_POLICE_REPORT_Police_Agency=&app_spec_info_POLICE_REPORT_Police_Report_Incident_Number=&singleModeName=CRIMINAL%2BCONVICTIONS&app_spec_info_CRIMINAL_CONVICTIONS_Are_you_reporting_a_criminal_conviction=No&"
		"app_spec_info_CRIMINAL_CONVICTIONS_Are_you_self_reporting_a_conviction_or_reporting_a_conviction_against_a_licensee=&singleModeName=SELF%2BREPORTING&app_spec_info_SELF_REPORTING_Are_you_self_reporting_disciplinary_action_taken_against_you_by_another_state_board=No&app_spec_info_SELF_REPORTING_State_Board_Name=&app_spec_info_SELF_REPORTING_Date_of_Action=&app_spec_info_SELF_REPORTING_Nature_of_Disciplinary_Action=&singleModeName=ENFORCEMENT%2BROUTING&app_spec_info_ENFORCEMENT_ROUTING_Complaint_Type"
		"=&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Drug_Monitoring_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints=on&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=124&"
		"sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(contact2*refContactNumber)=&value(contactsModel2*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel2*contactTypeFlag)=individual&value(contactsModel2*accessLevel)=N&value(contactsModel2*contactType)=Complainant&value(contactsModel2*title)=&value(contactsModel2*fullName)=&value(contactsModel2*addressId)=&value(contactsModel2*addressLine1)=&value"
		"(contactsModel2*addressLine2)=&value(contactsModel2*addressLine3)=&value(contactsModel2*city)=&value(contactsModel2*state)=MI&value(contactsModel2*zip)=&value(contactsModel2*countryCode)=&value(contactsModel2*fax)=&value(contactsModel2*contactOnSRChange)=&value(contactsModel2*comment)=&value(maskformat_contactsModel2*maskedSsn)=%23%23%23-%23%23-%23%23%23%23&value(contactsModel2*maskedSsn)=&value(maskformat_contactsModel2*fein)=&value(contactsModel2*fein)=&value(contactsModel2*userID)=&value"
		"(contactsModel2*internalUserFlag)=&value(templateData)=&value(contactsModel2*salutation)=&value(contactsModel2*gender)=&value(contactsModel2*postOfficeBox)=&date(contactsModel2*birthDate)=&value(contactsModel2*namesuffix)=&value(contactsModel2*birthCity)=&value(contactsModel2*birthState)=&value(contactsModel2*birthRegion)=&value(contactsModel2*race)=&date(contactsModel2*deceasedDate)=&value(contactsModel2*passportNumber)=&value(contactsModel2*driverLicenseNbr)=&value"
		"(contactsModel2*driverLicenseState)=&value(contactsModel2*stateIDNbr)=&value(contactsModel2*relation)=&value(contactsModel2*flag)=N&value(contactsModel2*firstName)=&value(contactsModel2*middleName)=&value(contactsModel2*lastName)=&value(contactsModel2*businessName)=&value(contactsModel2*businessName2)=&value(contactsModel2*tradeName)=&ACMask_124_9_value(contactsModel2*phone1_disp)=&ACMask_124_9_value(contactsModel2*phone1)=&ACMask_124_10_value(contactsModel2*phone2_disp)=&ACMask_124_10_value"
		"(contactsModel2*phone2)=&ACMask_124_23_value(contactsModel2*phone3_disp)=&ACMask_124_23_value(contactsModel2*phone3)=&value(contactsModel2*preferredChannel)=&value(contactsModel2*email)=&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea16=&sourcetextarea16=&layouttextarea16=null&contactsModel2*uiuid=16&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=124&sessionIdFromWindow="
		"7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isContact3=1&contact3ViewID=124&isContact3Validation=N&isContact3Required=Y&contact3AccessRight=F&contact3ContactNumber=null&value(mode)=add&value(srTest)=&value(capType)=Enforcement%2FComplaint%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&value(capType)=Enforcement%2FComplaint%2FNA%2FNA&value"
		"(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capModel*capStatus)=Submitted&value(capDetailModel*asgnStaff)=&value"
		"(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)="
		"&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date"
		"(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&date(capModel*fileDate)=08%2F28%2F2018&editPar=2112&"
		"allViewIDGroup=%2C124%2C225&viewGroup=%2C124%2C225&formGroup=%2Ccontact3DetailForm%2CcapDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(contactsModel2*maskedSsn)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(contactsModel2*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&accelasubmitbuttonname=Previous&callBack=&variableKey=ASI%3A%3ASELF%20REPORTING%3A%3AAre%20you%20self-reporting%20disciplinary%20action%20taken%20against%20you%20by%20another%20state%20board&refAPONumber=undefined&argumentPKs="
		"%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A124%2C%22viewKey1%22%3A%22Complainant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute", 
		"LAST");

	lr_think_time(4);

	web_url("session.do_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc91&module=Enforcement", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t216.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("MILARA_TC3_03_SelectRecordType_OpenSpearForm",2);

	lr_think_time(6);
	web_add_header("AppD_Header", "MILARA_TC3_08_SubmitApplication_AddNewApplication");
	lr_start_transaction("MILARA_TC3_08_SubmitApplication_AddNewApplication");

	web_url("session.do_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc91&module=Enforcement", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t217.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("expression.do_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t218.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Enforcement&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&"
		"singleModeName=COMPLAINT%2BINFORMATION&app_spec_info_COMPLAINT_INFORMATION_Profession=Nursing&app_spec_info_COMPLAINT_INFORMATION_Name_of_Licensee=performance&app_spec_info_COMPLAINT_INFORMATION_Address_of_Licensee=&app_spec_info_COMPLAINT_INFORMATION_License_Number=&app_spec_info_COMPLAINT_INFORMATION_Description_of_Complaint=performance&app_spec_info_COMPLAINT_INFORMATION_Is_this_drug_related%253F=No&singleModeName=WILLINGNESS%2BTO%2BTESTIFY&"
		"app_spec_info_WILLINGNESS_TO_TESTIFY_Are_you_willing_to_testify_in_a_hearing=No&singleModeName=COMMUNICATION%2BCONSENT&app_spec_info_COMMUNICATION_CONSENT_I_authorize_the_Department_to_release_my_name_and_all_relevant_information_pertaining_to_this_allega=No&app_spec_info_COMMUNICATION_CONSENT_Do_you_authorize_another_person_to_communicate_with_the_department_regarding_your_complaint=No&app_spec_info_COMMUNICATION_CONSENT_Name=&app_spec_info_COMMUNICATION_CONSENT_Address=&"
		"app_spec_info_COMMUNICATION_CONSENT_Telephone_Number=&app_spec_info_COMMUNICATION_CONSENT_Email_Address=&app_spec_info_COMMUNICATION_CONSENT_Relationship_to_You=&singleModeName=PATIENT%2BMEDICAL%2BTREATMENT&app_spec_info_PATIENT_MEDICAL_TREATMENT_Is_your_complaint_regarding_the_medical_treatment_of_a_patient=No&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Name=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Date_of_Birth=&"
		"app_spec_info_PATIENT_MEDICAL_TREATMENT_Last_4_Digit%2527s_of_Patient%2527s_SSN=0&app_spec_info_PATIENT_MEDICAL_TREATMENT_Date_of_Incident=&singleModeName=MEDICAL%2BSTAFF%2BPRIVILEGES&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Are_you_reporting_a_change_in_medical_staff_privileges=No&app_spec_info_MEDICAL_STAFF_PRIVILEGES_On_what_date_did_the_change_in_staff_privileges_occur=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_time_licensee_was_on_facility_staff=&"
		"app_spec_info_MEDICAL_STAFF_PRIVILEGES_Was_the_resignation_voluntary=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Suspension=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Probation=&singleModeName=POLICE%2BREPORT&app_spec_info_POLICE_REPORT_Is_there_a_police_report=No&app_spec_info_POLICE_REPORT_Police_Agency=&app_spec_info_POLICE_REPORT_Police_Report_Incident_Number=&singleModeName=CRIMINAL%2BCONVICTIONS&app_spec_info_CRIMINAL_CONVICTIONS_Are_you_reporting_a_criminal_conviction=No&"
		"app_spec_info_CRIMINAL_CONVICTIONS_Are_you_self_reporting_a_conviction_or_reporting_a_conviction_against_a_licensee=&singleModeName=SELF%2BREPORTING&app_spec_info_SELF_REPORTING_Are_you_self_reporting_disciplinary_action_taken_against_you_by_another_state_board=No&app_spec_info_SELF_REPORTING_State_Board_Name=&app_spec_info_SELF_REPORTING_Date_of_Action=&app_spec_info_SELF_REPORTING_Nature_of_Disciplinary_Action=&singleModeName=ENFORCEMENT%2BROUTING&app_spec_info_ENFORCEMENT_ROUTING_Complaint_Type"
		"=Public&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Drug_Monitoring_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints=on&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=124&"
		"sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(contact2*refContactNumber)=&value(contactsModel2*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel2*contactTypeFlag)=individual&value(contactsModel2*accessLevel)=N&value(contactsModel2*contactType)=Complainant&value(contactsModel2*title)=&value(contactsModel2*fullName)=&value(contactsModel2*addressId)=&value(contactsModel2*addressLine1)=&value"
		"(contactsModel2*addressLine2)=&value(contactsModel2*addressLine3)=&value(contactsModel2*city)=&value(contactsModel2*state)=MI&value(contactsModel2*zip)=&value(contactsModel2*countryCode)=&value(contactsModel2*fax)=&value(contactsModel2*contactOnSRChange)=&value(contactsModel2*comment)=&value(maskformat_contactsModel2*maskedSsn)=%23%23%23-%23%23-%23%23%23%23&value(contactsModel2*maskedSsn)=&value(maskformat_contactsModel2*fein)=&value(contactsModel2*fein)=&value(contactsModel2*userID)=&value"
		"(contactsModel2*internalUserFlag)=&value(templateData)=&value(contactsModel2*salutation)=&value(contactsModel2*gender)=&value(contactsModel2*postOfficeBox)=&date(contactsModel2*birthDate)=&value(contactsModel2*namesuffix)=&value(contactsModel2*birthCity)=&value(contactsModel2*birthState)=&value(contactsModel2*birthRegion)=&value(contactsModel2*race)=&date(contactsModel2*deceasedDate)=&value(contactsModel2*passportNumber)=&value(contactsModel2*driverLicenseNbr)=&value"
		"(contactsModel2*driverLicenseState)=&value(contactsModel2*stateIDNbr)=&value(contactsModel2*relation)=&value(contactsModel2*flag)=N&value(contactsModel2*firstName)=&value(contactsModel2*middleName)=&value(contactsModel2*lastName)=&value(contactsModel2*businessName)=&value(contactsModel2*businessName2)=&value(contactsModel2*tradeName)=&ACMask_124_9_value(contactsModel2*phone1_disp)=1234567890&ACMask_124_9_value(contactsModel2*phone1)=1234567890&ACMask_124_10_value(contactsModel2*phone2_disp)="
		"2345678901&ACMask_124_10_value(contactsModel2*phone2)=2345678901&ACMask_124_23_value(contactsModel2*phone3_disp)=3456789012&ACMask_124_23_value(contactsModel2*phone3)=3456789012&value(contactsModel2*preferredChannel)=&value(contactsModel2*email)=&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea16=&sourcetextarea16=&layouttextarea16=null&contactsModel2*uiuid=16&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&"
		"ExportFileType=print&CurrentViewID=124&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isContact3=1&contact3ViewID=124&isContact3Validation=N&isContact3Required=Y&contact3AccessRight=F&contact3ContactNumber=null&value(mode)=add&value(srTest)=&value(capType)=Enforcement%2FComplaint%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&value(capType)="
		"Enforcement%2FComplaint%2FNA%2FNA&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capModel*capStatus)=Submitted&value"
		"(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value"
		"(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&"
		"value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&date"
		"(capModel*fileDate)=08%2F28%2F2018&editPar=2112&allViewIDGroup=%2C124%2C225&viewGroup=%2C124%2C225&formGroup=%2Ccontact3DetailForm%2CcapDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value"
		"(contactsModel2*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(contactsModel2*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&accelasubmitbuttonname=Previous&callBack=window.expression.__doExpressionSubmitCallBack(0)&variableKey=onSubmit&refAPONumber=undefined&argumentPKs="
		"%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A124%2C%22viewKey1%22%3A%22Complainant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute", 
		"LAST");

 





	web_reg_save_param_ex(
		"ParamName=Param_ID3",
		"LB/IC=ID3=",
		"RB/IC=&requireNotice",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/CapBySingle.do*",
		"LAST");

	web_submit_data("CapBySingle.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Enforcement", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Enforcement", 
		"Snapshot=t219.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=value(FirstEntryURL)", "Value=", "ENDITEM", 
		"Name=value(CurrentEntryURL)", "Value=", "ENDITEM", 
		"Name=portlet_language", "Value=en_US", "ENDITEM", 
		"Name=refresh_target", "Value=", "ENDITEM", 
		"Name=refresh_url", "Value=", "ENDITEM", 
		"Name=buttonName", "Value=", "ENDITEM", 
		"Name=modeName", "Value=new", "ENDITEM", 
		"Name=module", "Value=Enforcement", "ENDITEM", 
		"Name=accelasubmitbuttonname", "Value=newCap", "ENDITEM", 
		"Name=itemName", "Value=", "ENDITEM", 
		"Name=CurrentViewID", "Value=", "ENDITEM", 
		"Name=exceptionLogID", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=7M8ClLd+DbTHcKSi4w11SQrX", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=value(paLicenseId)", "Value=", "ENDITEM", 
		"Name=isRefreshPartialCondition", "Value=N", "ENDITEM", 
		"Name=isAppSpecInfo", "Value=1", "ENDITEM", 
		"Name=value(capID*ID1)", "Value=", "ENDITEM", 
		"Name=value(capID*ID2)", "Value=", "ENDITEM", 
		"Name=value(capID*ID3)", "Value=", "ENDITEM", 
		"Name=singleModeName", "Value=COMPLAINT+INFORMATION", "ENDITEM", 
		"Name=app_spec_info_COMPLAINT_INFORMATION_Profession", "Value=Nursing", "ENDITEM", 
		"Name=app_spec_info_COMPLAINT_INFORMATION_Name_of_Licensee", "Value=performance", "ENDITEM", 
		"Name=app_spec_info_COMPLAINT_INFORMATION_Address_of_Licensee", "Value=", "ENDITEM", 
		"Name=app_spec_info_COMPLAINT_INFORMATION_License_Number", "Value=", "ENDITEM", 
		"Name=app_spec_info_COMPLAINT_INFORMATION_Description_of_Complaint", "Value=performance", "ENDITEM", 
		"Name=app_spec_info_COMPLAINT_INFORMATION_Is_this_drug_related%3F", "Value=No", "ENDITEM", 
		"Name=singleModeName", "Value=WILLINGNESS+TO+TESTIFY", "ENDITEM", 
		"Name=app_spec_info_WILLINGNESS_TO_TESTIFY_Are_you_willing_to_testify_in_a_hearing", "Value=No", "ENDITEM", 
		"Name=singleModeName", "Value=COMMUNICATION+CONSENT", "ENDITEM", 
		"Name=app_spec_info_COMMUNICATION_CONSENT_I_authorize_the_Department_to_release_my_name_and_all_relevant_information_pertaining_to_this_allega", "Value=No", "ENDITEM", 
		"Name=app_spec_info_COMMUNICATION_CONSENT_Do_you_authorize_another_person_to_communicate_with_the_department_regarding_your_complaint", "Value=No", "ENDITEM", 
		"Name=app_spec_info_COMMUNICATION_CONSENT_Name", "Value=", "ENDITEM", 
		"Name=app_spec_info_COMMUNICATION_CONSENT_Address", "Value=", "ENDITEM", 
		"Name=app_spec_info_COMMUNICATION_CONSENT_Telephone_Number", "Value=", "ENDITEM", 
		"Name=app_spec_info_COMMUNICATION_CONSENT_Email_Address", "Value=", "ENDITEM", 
		"Name=app_spec_info_COMMUNICATION_CONSENT_Relationship_to_You", "Value=", "ENDITEM", 
		"Name=singleModeName", "Value=PATIENT+MEDICAL+TREATMENT", "ENDITEM", 
		"Name=app_spec_info_PATIENT_MEDICAL_TREATMENT_Is_your_complaint_regarding_the_medical_treatment_of_a_patient", "Value=No", "ENDITEM", 
		"Name=app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%27s_Name", "Value=", "ENDITEM", 
		"Name=app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%27s_Date_of_Birth", "Value=", "ENDITEM", 
		"Name=app_spec_info_PATIENT_MEDICAL_TREATMENT_Last_4_Digit%27s_of_Patient%27s_SSN", "Value=0", "ENDITEM", 
		"Name=app_spec_info_PATIENT_MEDICAL_TREATMENT_Date_of_Incident", "Value=", "ENDITEM", 
		"Name=singleModeName", "Value=MEDICAL+STAFF+PRIVILEGES", "ENDITEM", 
		"Name=app_spec_info_MEDICAL_STAFF_PRIVILEGES_Are_you_reporting_a_change_in_medical_staff_privileges", "Value=No", "ENDITEM", 
		"Name=app_spec_info_MEDICAL_STAFF_PRIVILEGES_On_what_date_did_the_change_in_staff_privileges_occur", "Value=", "ENDITEM", 
		"Name=app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_time_licensee_was_on_facility_staff", "Value=", "ENDITEM", 
		"Name=app_spec_info_MEDICAL_STAFF_PRIVILEGES_Was_the_resignation_voluntary", "Value=", "ENDITEM", 
		"Name=app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Suspension", "Value=", "ENDITEM", 
		"Name=app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Probation", "Value=", "ENDITEM", 
		"Name=singleModeName", "Value=POLICE+REPORT", "ENDITEM", 
		"Name=app_spec_info_POLICE_REPORT_Is_there_a_police_report", "Value=No", "ENDITEM", 
		"Name=app_spec_info_POLICE_REPORT_Police_Agency", "Value=", "ENDITEM", 
		"Name=app_spec_info_POLICE_REPORT_Police_Report_Incident_Number", "Value=", "ENDITEM", 
		"Name=singleModeName", "Value=CRIMINAL+CONVICTIONS", "ENDITEM", 
		"Name=app_spec_info_CRIMINAL_CONVICTIONS_Are_you_reporting_a_criminal_conviction", "Value=No", "ENDITEM", 
		"Name=app_spec_info_CRIMINAL_CONVICTIONS_Are_you_self_reporting_a_conviction_or_reporting_a_conviction_against_a_licensee", "Value=", "ENDITEM", 
		"Name=singleModeName", "Value=SELF+REPORTING", "ENDITEM", 
		"Name=app_spec_info_SELF_REPORTING_Are_you_self_reporting_disciplinary_action_taken_against_you_by_another_state_board", "Value=No", "ENDITEM", 
		"Name=app_spec_info_SELF_REPORTING_State_Board_Name", "Value=", "ENDITEM", 
		"Name=app_spec_info_SELF_REPORTING_Date_of_Action", "Value=", "ENDITEM", 
		"Name=app_spec_info_SELF_REPORTING_Nature_of_Disciplinary_Action", "Value=", "ENDITEM", 
		"Name=singleModeName", "Value=ENFORCEMENT+ROUTING", "ENDITEM", 
		"Name=app_spec_info_ENFORCEMENT_ROUTING_Complaint_Type", "Value=Public", "ENDITEM", 
		"Name=app_spec_info_ENFORCEMENT_ROUTING_Route_to_Drug_Monitoring_Value", "Value=Y", "ENDITEM", 
		"Name=app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints_Value", "Value=Y", "ENDITEM", 
		"Name=app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints", "Value=on", "ENDITEM", 
		"Name=value(mode)", "Value=New", "ENDITEM", 
		"Name=expression_portlet_to_be_populate", "Value=-1", "ENDITEM", 
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM", 
		"Name=is_ASI_fields_displayed", "Value=true", "ENDITEM", 
		"Name=expressionPageType", "Value=SPEAR", "ENDITEM", 
		"Name=expression_page_reload_after_submit_or_validate_failed", "Value=true", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=124", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=7M8ClLd+DbTHcKSi4w11SQrX", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=value(mode)", "Value=newsave", "ENDITEM", 
		"Name=value(contactSeqNumber)", "Value=", "ENDITEM", 
		"Name=value(contact2*refContactNumber)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*refContactNumber)", "Value=", "ENDITEM", 
		"Name=value(serviceProviderCode)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*contactTypeFlag)", "Value=individual", "ENDITEM", 
		"Name=value(contactsModel2*contactType_cur)", "Value=Complainant", "ENDITEM", 
		"Name=value(contactsModel2*contactType)", "Value=Complainant", "ENDITEM", 
		"Name=value(contactsModel2*title)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*fullName)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*addressId)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*addressLine1)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*addressLine2)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*addressLine3)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*city)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*state)", "Value=MI", "ENDITEM", 
		"Name=value(contactsModel2*zip)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*countryCode)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*fax)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*contactOnSRChange)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*comment)", "Value=", "ENDITEM", 
		"Name=value(maskformat_contactsModel2*maskedSsn)", "Value=###-##-####", "ENDITEM", 
		"Name=value(contactsModel2*maskedSsn)", "Value=", "ENDITEM", 
		"Name=value(maskformat_contactsModel2*fein)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*fein)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*userID)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*internalUserFlag)", "Value=", "ENDITEM", 
		"Name=value(templateData)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*salutation)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*gender)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*postOfficeBox)", "Value=", "ENDITEM", 
		"Name=date(contactsModel2*birthDate)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*namesuffix)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*birthCity)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*birthState)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*birthRegion)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*race)", "Value=", "ENDITEM", 
		"Name=date(contactsModel2*deceasedDate)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*passportNumber)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*driverLicenseNbr)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*driverLicenseState)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*stateIDNbr)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*relation)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*flag)", "Value=N", "ENDITEM", 
		"Name=value(contactsModel2*firstName)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*middleName)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*lastName)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*businessName)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*businessName2)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*tradeName)", "Value=", "ENDITEM", 
		"Name=ACMask_124_9_value(contactsModel2*phone1_disp)", "Value=1234567890", "ENDITEM", 
		"Name=ACMask_124_9_value(contactsModel2*phone1)", "Value=1234567890", "ENDITEM", 
		"Name=ACMask_124_10_value(contactsModel2*phone2_disp)", "Value=2345678901", "ENDITEM", 
		"Name=ACMask_124_10_value(contactsModel2*phone2)", "Value=2345678901", "ENDITEM", 
		"Name=ACMask_124_23_value(contactsModel2*phone3_disp)", "Value=3456789012", "ENDITEM", 
		"Name=ACMask_124_23_value(contactsModel2*phone3)", "Value=3456789012", "ENDITEM", 
		"Name=value(contactsModel2*preferredChannel)", "Value=", "ENDITEM", 
		"Name=value(contactsModel2*email)", "Value=", "ENDITEM", 
		"Name=value(serviceProviderCode)", "Value=", "ENDITEM", 
		"Name=value(ID1)", "Value=", "ENDITEM", 
		"Name=value(ID2)", "Value=", "ENDITEM", 
		"Name=value(ID3)", "Value=", "ENDITEM", 
		"Name=value(mode)", "Value=New", "ENDITEM", 
		"Name=value(modePro)", "Value=add", "ENDITEM", 
		"Name=valuetextarea16", "Value=", "ENDITEM", 
		"Name=sourcetextarea16", "Value=", "ENDITEM", 
		"Name=layouttextarea16", "Value=null", "ENDITEM", 
		"Name=contactsModel2*uiuid", "Value=16", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=124", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=7M8ClLd+DbTHcKSi4w11SQrX", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=endDate", "Value=", "ENDITEM", 
		"Name=chooseItems", "Value=", "ENDITEM", 
		"Name=effectiveDate", "Value=", "ENDITEM", 
		"Name=isContact3", "Value=1", "ENDITEM", 
		"Name=contact3ViewID", "Value=124", "ENDITEM", 
		"Name=isContact3Validation", "Value=N", "ENDITEM", 
		"Name=isContact3Required", "Value=Y", "ENDITEM", 
		"Name=contact3AccessRight", "Value=F", "ENDITEM", 
		"Name=contact3ContactNumber", "Value=null", "ENDITEM", 
		"Name=value(mode)", "Value=add", "ENDITEM", 
		"Name=value(srTest)", "Value=", "ENDITEM", 
		"Name=value(capType)", "Value=Enforcement/Complaint/NA/NA", "ENDITEM", 
		"Name=value(capID)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*shortNotes)", "Value=", "ENDITEM", 
		"Name=value(capModel*specialText)", "Value=", "ENDITEM", 
		"Name=value(capWorkDescriptionModel*description)", "Value=", "ENDITEM", 
		"Name=value(capType)", "Value=Enforcement/Complaint/NA/NA", "ENDITEM", 
		"Name=value(capDetailModel*creatorDeptAlias)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*asgnDept)", "Value=", "ENDITEM", 
		"Name=value(capModel*capSubType)", "Value=", "ENDITEM", 
		"Name=date(capDetailModel*closedDate)", "Value=", "ENDITEM", 
		"Name=date(capDetailModel*asgnDate)", "Value=", "ENDITEM", 
		"Name=date(capDetailModel*completeDate)", "Value=", "ENDITEM", 
		"Name=date(capDetailModel*scheduledDate)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*scheduledTime)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*completeDept)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*completeStaff)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*closedDept)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*closedBy)", "Value=", "ENDITEM", 
		"Name=value(capModel*capStatus)", "Value=Submitted", "ENDITEM", 
		"Name=value(capDetailModel*asgnStaff)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*priority)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*reportedChannel)", "Value=Call Center", "ENDITEM", 
		"Name=value(capDetailModel*severity)", "Value=", "ENDITEM", 
		"Name=value(capModel*altID)", "Value=", "ENDITEM", 
		"Name=value(jobValue)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*totalFee)", "Value=0.0", "ENDITEM", 
		"Name=value(capDetailModel*totalPay)", "Value=0.0", "ENDITEM", 
		"Name=value(capDetailModel*balance)", "Value=0.0", "ENDITEM", 
		"Name=value(capDetailModel*estProdUnits)", "Value=0.0", "ENDITEM", 
		"Name=value(capDetailModel*actualProdUnits)", "Value=0.0", "ENDITEM", 
		"Name=value(capDetailModel*estCostPerUnit)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*costPerUnit)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*estJobCost)", "Value=", "ENDITEM", 
		"Name=value(blank1)", "Value=", "ENDITEM", 
		"Name=value(blank2)", "Value=", "ENDITEM", 
		"Name=value(blank3)", "Value=", "ENDITEM", 
		"Name=value(blank4)", "Value=", "ENDITEM", 
		"Name=value(blank5)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*totalJobCost)", "Value=", "ENDITEM", 
		"Name=value(b1ExpirationModel*expStatus)", "Value=", "ENDITEM", 
		"Name=date(b1ExpirationModel*expDate)", "Value=", "ENDITEM", 
		"Name=date(capModel*reportedDate)", "Value=08/28/2018", "ENDITEM", 
		"Name=value(capModel*reportedTime)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*anonymousFlag)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*referenceType)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*enforceDept)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*enforceOfficerName)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*enforceOfficerId)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*inspectorDept)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*inspectorName)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*inspectorId)", "Value=", "ENDITEM", 
		"Name=date(capDetailModel*appearanceDate)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*appearanceDayOfWeek)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*infractionFlag)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*misdemeanorFlag)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*offnWitnessedFlag)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*dfndtSignatureFlag)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*bookingFlag)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*statusReason)", "Value=", "ENDITEM", 
		"Name=date(capDetailModel*firstIssuedDate)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*undistributedCost)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*url)", "Value=", "ENDITEM", 
		"Name=value(capModel*pendingValidation)", "Value=", "ENDITEM", 
		"Name=date(capModel*fileDate)", "Value=08/28/2018", "ENDITEM", 
		"Name=editPar", "Value=2112", "ENDITEM", 
		"Name=allViewIDGroup", "Value=,124,225", "ENDITEM", 
		"Name=viewGroup", "Value=,124,225", "ENDITEM", 
		"Name=formGroup", "Value=,contact3DetailForm,capDetailForm", "ENDITEM", 
		"Name=fromModel", "Value=cap", "ENDITEM", 
		"Name=modelId", "Value=", "ENDITEM", 
		"Name=fromEditPartialCap", "Value=", "ENDITEM", 
		"Name=fromMode", "Value=newSingle", "ENDITEM", 
		"Name=GISCommand", "Value=null", "ENDITEM", 
		"Name=isAddressList", "Value=", "ENDITEM", 
		"Name=isParcelList", "Value=", "ENDITEM", 
		"Name=isOwnerList", "Value=", "ENDITEM", 
		"Name=isProfessionalList", "Value=", "ENDITEM", 
		"Name=value(contactValidatePassed)", "Value=true", "ENDITEM", 
		"Name=value(createCapForParcelType)", "Value=", "ENDITEM", 
		"Name=SKIP_EMSE_FLAG", "Value=N", "ENDITEM", 
		"Name=isFromAssetList", "Value=null ", "ENDITEM", 
		"Name=isValidationFailed", "Value=null", "ENDITEM", 
		"Name=isValidated", "Value=null", "ENDITEM", 
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(contactsModel2*maskedSsn)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"},\"value(contactsModel2*fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"}}}", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Enforcement", 
		"Snapshot=t220.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("EMSEMessage.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Enforcement", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Enforcement", 
		"Snapshot=t221.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Enforcement", 
		"Snapshot=t222.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc91&module=Enforcement", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Enforcement", 
		"Snapshot=t223.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("MILARA_TC3_08_SubmitApplication_AddNewApplication",2);
	web_add_header("AppD_Header", "MILARA_TC3_08_SubmitApplication_ViewSummary");
	lr_start_transaction("MILARA_TC3_08_SubmitApplication_ViewSummary");

	web_url("session.do_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc91&module=Enforcement", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Enforcement", 
		"Snapshot=t224.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t225.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("CapTabSummary.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Enforcement&isFromCapList=true",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do",
		"Snapshot=t226.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("ajax.do_2",
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Enforcement&isFromCapList=true",
		"Snapshot=t227.inf",
		"Mode=HTML",
		"ITEMDATA",
		"LAST");

	web_submit_data("empty.jsp_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t228.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Enforcement&ID1=REC18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Enforcement&isFromCapList=true",
		"Snapshot=t229.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("search.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/x-json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Enforcement&isFromCapList=true",
		"Snapshot=t230.inf",
		"Mode=HTML",
		"Body=categoryName=Portlet - Expression",
		"LAST");

	web_custom_request("expression.do_10",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Enforcement&isFromCapList=true",
		"Snapshot=t231.inf",
		"Mode=HTML",
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22CRIMINAL%20CONVICTIONS%20LIST%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22ACTIVITIES%20COM%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22NOTIFICATION%20GENERATOR%20COM%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=TABSUMMARY&isReload=false&module=Enforcement&capType=Enforcement%2FComplaint%2FNA%2FNA",
		"LAST");

	web_custom_request("expression.do_11",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Enforcement&isFromCapList=true",
		"Snapshot=t232.inf",
		"Mode=HTML",
		"Body=value(FirstEntryURL)=%2Fportlets%2Fcap%2Fcapsummary%2FCapTabSummary.do%3Fmode%3DtabSummary%26isRedirect%3Dfalse%26module%3DEnforcement&value(CurrentEntryURL)=%2Fportlets%2Fcap%2Fcapsummary%2FCapTabSummary.do%3Fmode%3DtabSummary%26isRedirect%3Dfalse%26module%3DEnforcement&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=tabSummary&module=Enforcement&itemName=&CurrentViewID=30046&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=30046&sessionIdFromWindow=7M8ClLd%2BDbTHcKSi4w11SQrX&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=TABSUMMARY&expression_page_reload_after_submit_or_validate_failed=true&expression_portlet_to_be_populate=-2&expression_portlet_to_be_populate=-99999&valuetextarea999=%5B%7B%22values%22%3A%5B%7B%22Is%20there%20a%20police%20report%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22No%22%2C%22row"
		"Index%22%3A%221%22%7D%2C%22Is%20this%20drug%20related%3F%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Police%20Agency%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Police%20Report%20Incident%20Number%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22ENF_COMP%22%2C%22subgroup%22%3A%22POLICE%20REPORT%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Are%20you%20reporting%20a%20change%20in%20medical%20staff%20privileges%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22No%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Is%20this%20drug%20related%3F%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22On%20what%20date%20did%20the%20change%20in%20staff%20privileges%20occur%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Period%20of%20time%20li"
		"censee%20was%20on%20facility%20staff%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Did%20the%20licensee%20resign%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Was%20the%20resignation%20voluntary%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Was%20the%20resignation%20in%20lieu%20of%20termination%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Was%20the%20licensee%20suspended%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Period%20of%20Suspension%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Was%20the%20licensee%20placed%20on%20probation%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Period%20of%20Probation%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C"
		"%22rowIndex%22%3A%221%22%7D%2C%22Was%20the%20licensee%20terminated%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22ENF_COMP%22%2C%22subgroup%22%3A%22MEDICAL%20STAFF%20PRIVILEGES%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Are%20you%20willing%20to%20testify%20in%20a%20hearing%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22No%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22ENF_COMP%22%2C%22subgroup%22%3A%22WILLINGNESS%20TO%20TESTIFY%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Complaint%20Type%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22Public%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Route%20to%20Drug%20Monitoring%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Route%20to%20Complaints%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%E2%88%9A%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22ENF_COMP%22%2C%22subgroup%22%3A%22ENFORC"
		"EMENT%20ROUTING%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Are%20you%20self-reporting%20disciplinary%20action%20taken%20against%20you%20by%20another%20state%20board%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22No%22%2C%22rowIndex%22%3A%221%22%7D%2C%22State%20Board%20Name%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Date%20of%20Action%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Nature%20of%20Disciplinary%20Action%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22ENF_COMP%22%2C%22subgroup%22%3A%22SELF%20REPORTING%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Is%20your%20complaint%20regarding%20the%20medical%20treatment%20of%20a%20patient%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22No%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Is%20this%20drug%20related%3F%22%3A%7B%22val"
		"ueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Patient's%20Name%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Patient's%20Date%20of%20Birth%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Last%204%20Digit's%20of%20Patient's%20SSN%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%220%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Date%20of%20Incident%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22ENF_COMP%22%2C%22subgroup%22%3A%22PATIENT%20MEDICAL%20TREATMENT%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Are%20you%20reporting%20a%20criminal%20conviction%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22No%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Are%20you%20self-reporting%20a%20conviction%20or%20reporting%20a%20conviction%20against%20a%20licensee%22%3A%7B%22valueSeq%22%3A%22%22%2C%22valu"
		"e%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22ENF_COMP%22%2C%22subgroup%22%3A%22CRIMINAL%20CONVICTIONS%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22I%20authorize%20the%20Department%20to%20release%20my%20name%20and%20all%20relevant%20information%20pertaining%20to%20this%20allega%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22No%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Do%20you%20authorize%20another%20person%20to%20communicate%20with%20the%20department%20regarding%20your%20complaint%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22No%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Name%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Address%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Telephone%20Number%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Email%20Address%22%3A%7B%22valueSeq%22%3A%22%2"
		"2%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Relationship%20to%20You%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22ENF_COMP%22%2C%22subgroup%22%3A%22COMMUNICATION%20CONSENT%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Profession%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22Nursing%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Name%20of%20Licensee%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22performance%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Address%20of%20Licensee%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22License%20Number%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Description%20of%20Complaint%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22performance%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Is%20this%20drug%20related%3F%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value"
		"%22%3A%22No%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22ENF_COMP%22%2C%22subgroup%22%3A%22COMPLAINT%20INFORMATION%22%2C%22templateType%22%3A%22Form%22%7D%5D&sourcetextarea999=%7B%22templateForms%22%3A%5B%7B%22groupName%22%3A%22ENF_COMP%22%2C%22subgroups%22%3A%5B%7B%22displayName%22%3A%22Complaint%20Information%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Profession%22%2C%22subgroupName%22%3A%22COMPLAINT%20INFORMATION%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22Nursing%22%2C%22displayFieldName%22%3A%22Filing%20Complaint%20Against%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Profession%22%2C%22checklistComment%22%3A%22Nursing%22"
		"%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Name%20of%20Licensee%22%2C%22subgroupName%22%3A%22COMPLAINT%20INFORMATION%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22performance%22%2C%22displayFieldName%22%3A%22Name%20of%20Licensee%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Name%20of%20Licensee%22%2C%22checklistComment%22%3A%22performance%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Address%20of%20Licensee%22%2C%22subgroupName%22%3A%22COMPLAINT%20INFORMATION%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3"
		"A%22Address%20of%20Licensee%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A6%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Address%20of%20Licensee%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%226%22%2C%22fieldTypeEnum%22%3A%22Textarea%22%7D%2C%7B%22fieldName%22%3A%22License%20Number%22%2C%22subgroupName%22%3A%22COMPLAINT%20INFORMATION%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22License%20Number%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceP"
		"roviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22License%20Number%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Description%20of%20Complaint%22%2C%22subgroupName%22%3A%22COMPLAINT%20INFORMATION%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22performance%22%2C%22displayFieldName%22%3A%22Description%20of%20Complaint%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A6%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Description%20of%20Complaint%22%2C%22checklistComment%22%3A%22performance%22%2C%22checkboxInd%22%3A%226%22%2C%22fieldTypeEnum%22%3A%22Textarea%22%7D%"
		"2C%7B%22fieldName%22%3A%22Is%20this%20drug%20related%3F%22%2C%22subgroupName%22%3A%22COMPLAINT%20INFORMATION%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22No%22%2C%22displayFieldName%22%3A%22Is%20this%20drug%20related%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A60%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Is%20this%20drug%20related%3F%22%2C%22checklistComment%22%3A%22No%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%5D%2C%22subgroupName%22%3A%22COMPLAINT%20INFORMATION%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Filing%20Complaint%20Against%22%2C%22Name%20of%20Licensee%22%2C%22Address%20of%20Licensee%22%2C%22License%20Number%22%2C%22Description%20of%20Complaint%22%2C%22I"
		"s%20this%20drug%20related%3F%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22Willingness%20to%20Testify%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Are%20you%20willing%20to%20testify%20in%20a%20hearing%22%2C%22subgroupName%22%3A%22WILLINGNESS%20TO%20TESTIFY%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22No%22%2C%22displayFieldName%22%3A%22Are%20you%20willing%20to%20testify%20in%20a%20hearing%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Are%20you%20willing%20to%20testify%20in%20a%20hearing%22%2C%22checklistComment%22%3A%22No%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%5D%2C%22subgroupName%22%3A%22WILL"
		"INGNESS%20TO%20TESTIFY%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Are%20you%20willing%20to%20testify%20in%20a%20hearing%3F%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22Communication%20Consent%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22I%20authorize%20the%20Department%20to%20release%20my%20name%20and%20all%20relevant%20information%20pertaining%20to%20this%20allega%22%2C%22subgroupName%22%3A%22COMMUNICATION%20CONSENT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22No%22%2C%22displayFieldName%22%3A%22I%20authorize%20the%20Department%20to%20release%20my%20name%20and%20all%20relevant%20information%20to%20other%20law%20enforcement%20%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A5%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Pa"
		"ram_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22I%20authorize%20the%20Department%20to%20release%20my%20name%20and%20all%20relevant%20information%20pertaining%20to%20this%20allega%22%2C%22checklistComment%22%3A%22No%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22Do%20you%20authorize%20another%20person%20to%20communicate%20with%20the%20department%20regarding%20your%20complaint%22%2C%22subgroupName%22%3A%22COMMUNICATION%20CONSENT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22No%22%2C%22displayFieldName%22%3A%22Do%20you%20authorize%20another%20person%20to%20communicate%20with%20the%20department%20regarding%20your%20complaint%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3"
		"D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Do%20you%20authorize%20another%20person%20to%20communicate%20with%20the%20department%20regarding%20your%20complaint%22%2C%22checklistComment%22%3A%22No%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22Name%22%2C%22subgroupName%22%3A%22COMMUNICATION%20CONSENT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Name%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Name%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Address%22%2C%"
		"22subgroupName%22%3A%22COMMUNICATION%20CONSENT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Address%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A6%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Address%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%226%22%2C%22fieldTypeEnum%22%3A%22Textarea%22%7D%2C%7B%22fieldName%22%3A%22Telephone%20Number%22%2C%22subgroupName%22%3A%22COMMUNICATION%20CONSENT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Telephone%20Number%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2"
		"C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Telephone%20Number%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Email%20Address%22%2C%22subgroupName%22%3A%22COMMUNICATION%20CONSENT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Email%20Address%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Email%20Address%22%2C%22checklistComment%22%3A%"
		"22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Relationship%20to%20You%22%2C%22subgroupName%22%3A%22COMMUNICATION%20CONSENT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Relationship%20to%20You%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A60%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Relationship%20to%20You%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%5D%2C%22subgroupName%22%3A%22COMMUNICATION%20CONSENT%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22I%20authorize%20the%20Department%20to%20release%20my%20name%20and%20all%20"
		"relevant%20information%20to%20other%20law%20enforcement%20%22%2C%22Do%20you%20authorize%20another%20person%20to%20communicate%20with%20the%20department%20regarding%20your%20complaint%3F%22%2C%22Name%22%2C%22Address%22%2C%22Telephone%20Number%22%2C%22Email%20Address%22%2C%22Relationship%20to%20You%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22Patient%20Medical%20Treatment%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Is%20your%20complaint%20regarding%20the%20medical%20treatment%20of%20a%20patient%22%2C%22subgroupName%22%3A%22PATIENT%20MEDICAL%20TREATMENT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22No%22%2C%22displayFieldName%22%3A%22Is%20your%20complaint%20regarding%20the%20medical%20treatment%20of%20a%20patient%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcem"
		"ent%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Is%20your%20complaint%20regarding%20the%20medical%20treatment%20of%20a%20patient%22%2C%22checklistComment%22%3A%22No%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22Is%20this%20drug%20related%3F%22%2C%22subgroupName%22%3A%22PATIENT%20MEDICAL%20TREATMENT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Is%20this%20drug%20related%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Is%20this%20drug%20related%3F%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fie"
		"ldName%22%3A%22Patient's%20Name%22%2C%22subgroupName%22%3A%22PATIENT%20MEDICAL%20TREATMENT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Patient's%20Name%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Patient's%20Name%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Patient's%20Date%20of%20Birth%22%2C%22subgroupName%22%3A%22PATIENT%20MEDICAL%20TREATMENT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Patient's%20Date%20of%20Birth%22%2C%22displayLen%22%3A0%2C%22displayOrde"
		"r%22%3A40%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Patient's%20Date%20of%20Birth%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22Last%204%20Digit's%20of%20Patient's%20SSN%22%2C%22subgroupName%22%3A%22PATIENT%20MEDICAL%20TREATMENT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%220%22%2C%22displayFieldName%22%3A%22Last%204%20Digit's%20of%20Patient's%20SSN%22%2C%22displayLen%22%3A6%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26"
		"ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Last%204%20Digit's%20of%20Patient's%20SSN%22%2C%22checklistComment%22%3A%220%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Date%20of%20Incident%22%2C%22subgroupName%22%3A%22PATIENT%20MEDICAL%20TREATMENT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Date%20of%20Incident%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A60%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Date%20of%20Incident%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%5D%2C%22subgroupName%22%3A%"
		"22PATIENT%20MEDICAL%20TREATMENT%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Is%20your%20complaint%20regarding%20the%20medical%20treatment%20of%20a%20patient%3F%22%2C%22Is%20this%20drug%20related%3F%22%2C%22Patient's%20Name%22%2C%22Patient's%20Date%20of%20Birth%22%2C%22Last%204%20Digit's%20of%20Patient's%20SSN%22%2C%22Date%20of%20Incident%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22Change%20in%20Staff%20Privileges%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Are%20you%20reporting%20a%20change%20in%20medical%20staff%20privileges%22%2C%22subgroupName%22%3A%22MEDICAL%20STAFF%20PRIVILEGES%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22No%22%2C%22displayFieldName%22%3A%22Are%20you%20reporting%20a%20change%20in%20medical%20staff%20privileges%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3D"
		"view%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Are%20you%20reporting%20a%20change%20in%20medical%20staff%20privileges%22%2C%22checklistComment%22%3A%22No%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22Is%20this%20drug%20related%3F%22%2C%22subgroupName%22%3A%22MEDICAL%20STAFF%20PRIVILEGES%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Is%20this%20drug%20related%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Is%20this%20drug%20related%3F%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3"
		"A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22On%20what%20date%20did%20the%20change%20in%20staff%20privileges%20occur%22%2C%22subgroupName%22%3A%22MEDICAL%20STAFF%20PRIVILEGES%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22On%20what%20date%20did%20the%20change%20in%20staff%20privileges%20occur%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22On%20what%20date%20did%20the%20change%20in%20staff%20privileges%20occur%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22Period%20of%20time%20licensee%20was%20on%20facility%20staff%22%2C%22subgroupN"
		"ame%22%3A%22MEDICAL%20STAFF%20PRIVILEGES%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Period%20of%20time%20licensee%20was%20employed%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Period%20of%20time%20licensee%20was%20on%20facility%20staff%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Did%20the%20licensee%20resign%22%2C%22subgroupName%22%3A%22MEDICAL%20STAFF%20PRIVILEGES%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Did%20the%20licensee%20resign%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A50%2C%22fi"
		"eldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Did%20the%20licensee%20resign%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22Was%20the%20resignation%20voluntary%22%2C%22subgroupName%22%3A%22MEDICAL%20STAFF%20PRIVILEGES%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Was%20the%20resignation%20voluntary%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A60%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%"
		"3DY%22%7D%2C%22checkboxDesc%22%3A%22Was%20the%20resignation%20voluntary%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Was%20the%20resignation%20in%20lieu%20of%20termination%22%2C%22subgroupName%22%3A%22MEDICAL%20STAFF%20PRIVILEGES%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Was%20the%20resignation%20in%20lieu%20of%20termination%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A70%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Was%20the%20resignation%20in%20lieu%20of%20termination%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22Was%20the%20licensee%20suspended%22%2C"
		"%22subgroupName%22%3A%22MEDICAL%20STAFF%20PRIVILEGES%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Was%20the%20licensee%20suspended%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A80%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Was%20the%20licensee%20suspended%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22Period%20of%20Suspension%22%2C%22subgroupName%22%3A%22MEDICAL%20STAFF%20PRIVILEGES%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Period%20of%20Suspension%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A90%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%"
		"22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Period%20of%20Suspension%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Was%20the%20licensee%20placed%20on%20probation%22%2C%22subgroupName%22%3A%22MEDICAL%20STAFF%20PRIVILEGES%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Was%20the%20licensee%20placed%20on%20probation%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A100%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Was%20the%20licensee%20plac"
		"ed%20on%20probation%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22Period%20of%20Probation%22%2C%22subgroupName%22%3A%22MEDICAL%20STAFF%20PRIVILEGES%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Period%20of%20Probation%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A110%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Period%20of%20Probation%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Was%20the%20licensee%20terminated%22%2C%22subgroupName%22%3A%22MEDICAL%20STAFF%20PRIVILEGES%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayField"
		"Name%22%3A%22Was%20the%20licensee%20terminated%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A120%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Was%20the%20licensee%20terminated%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%5D%2C%22subgroupName%22%3A%22MEDICAL%20STAFF%20PRIVILEGES%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Are%20you%20reporting%20a%20change%20in%20medical%20staff%20privileges%3F%22%2C%22Is%20this%20drug%20related%3F%22%2C%22On%20what%20date%20did%20the%20change%20in%20staff%20privileges%20occur%3F%22%2C%22Period%20of%20time%20licensee%20was%20employed%22%2C%22Did%20the%20licensee%20resign%3F%22%2C%22Was%20the%20resignation%20voluntary%3F%22%2C%22Was%20the%20resignation%20in%2"
		"0lieu%20of%20termination%3F%22%2C%22Was%20the%20licensee%20suspended%3F%22%2C%22Period%20of%20Suspension%22%2C%22Was%20the%20licensee%20placed%20on%20probation%3F%22%2C%22Period%20of%20Probation%22%2C%22Was%20the%20licensee%20terminated%3F%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22Police%20Report%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Is%20there%20a%20police%20report%22%2C%22subgroupName%22%3A%22POLICE%20REPORT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22No%22%2C%22displayFieldName%22%3A%22Is%20there%20a%20police%20report%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Is%20there%20a%20police%20report%22%2C%22checkli"
		"stComment%22%3A%22No%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22Is%20this%20drug%20related%3F%22%2C%22subgroupName%22%3A%22POLICE%20REPORT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Is%20this%20drug%20related%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Is%20this%20drug%20related%3F%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22Police%20Agency%22%2C%22subgroupName%22%3A%22POLICE%20REPORT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Police%20Agency%22%2C%22displayLen%22%3A0%2C%22displayOrde"
		"r%22%3A30%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Police%20Agency%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Police%20Report%20Incident%20Number%22%2C%22subgroupName%22%3A%22POLICE%20REPORT%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Police%20Report%20Incident%20Number%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26I"
		"D3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Police%20Report%20Incident%20Number%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%5D%2C%22subgroupName%22%3A%22POLICE%20REPORT%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Is%20there%20a%20police%20report%3F%22%2C%22Is%20this%20drug%20related%3F%22%2C%22Police%20Agency%22%2C%22Police%20Report%20Incident%20Number%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22Criminal%20Convictions%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Are%20you%20reporting%20a%20criminal%20conviction%22%2C%22subgroupName%22%3A%22CRIMINAL%20CONVICTIONS%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22No%22%2C%22displayFieldName%22%3A%22Are%20you%20reporting%20a%20criminal%20conviction%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2"
		"Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Are%20you%20reporting%20a%20criminal%20conviction%22%2C%22checklistComment%22%3A%22No%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22Are%20you%20self-reporting%20a%20conviction%20or%20reporting%20a%20conviction%20against%20a%20licensee%22%2C%22subgroupName%22%3A%22CRIMINAL%20CONVICTIONS%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Are%20you%20self-reporting%20a%20conviction%20or%20reporting%20a%20conviction%20against%20a%20licensee%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcemen"
		"t%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Are%20you%20self-reporting%20a%20conviction%20or%20reporting%20a%20conviction%20against%20a%20licensee%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%5D%2C%22subgroupName%22%3A%22CRIMINAL%20CONVICTIONS%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Are%20you%20reporting%20a%20criminal%20conviction%3F%22%2C%22Are%20you%20self-reporting%20a%20conviction%20or%20reporting%20a%20conviction%20against%20a%20licensee%3F%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22Disciplinary%20Action%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Are%20you%20self-reporting%20disciplinary%20action%20taken%20against%20you%20by%20another%20state%20board%22%2C%22subgroupName%22%3A%22SELF%20REPORTING%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22No%22%2C%22displayFi"
		"eldName%22%3A%22Are%20you%20self-reporting%20disciplinary%20action%20taken%20against%20you%20by%20another%20state%20board%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Are%20you%20self-reporting%20disciplinary%20action%20taken%20against%20you%20by%20another%20state%20board%22%2C%22checklistComment%22%3A%22No%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22State%20Board%20Name%22%2C%22subgroupName%22%3A%22SELF%20REPORTING%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22State%20Board%20Name%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A1%2C%22op"
		"tions%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22State%20Board%20Name%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Date%20of%20Action%22%2C%22subgroupName%22%3A%22SELF%20REPORTING%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Date%20of%20Action%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Date"
		"%20of%20Action%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22Nature%20of%20Disciplinary%20Action%22%2C%22subgroupName%22%3A%22SELF%20REPORTING%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Nature%20of%20Disciplinary%20Action%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A6%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Nature%20of%20Disciplinary%20Action%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%226%22%2C%22fieldTypeEnum%22%3A%22Textarea%22%7D%5D%2C%22subgroupName%22%3A%22SELF%20REPORTING%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Ar"
		"e%20you%20self-reporting%20disciplinary%20action%20taken%20against%20you%20by%20another%20state%20board%3F%22%2C%22State%20Board%20Name%22%2C%22Date%20of%20Action%22%2C%22Nature%20of%20Disciplinary%20Action%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22Enforcement%20Routing%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Complaint%20Type%22%2C%22subgroupName%22%3A%22ENFORCEMENT%20ROUTING%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22Public%22%2C%22displayFieldName%22%3A%22Complaint%20Type%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Complaint%20Type%22%2C%22checklistComment%22%3A%22Public%22%2C%22checkboxInd%22%3A%225%22%2C%22field"
		"TypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Route%20to%20Drug%20Monitoring%22%2C%22subgroupName%22%3A%22ENFORCEMENT%20ROUTING%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Route%20to%20Drug%20Monitoring%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A9%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Route%20to%20Drug%20Monitoring%22%2C%22checkboxInd%22%3A%229%22%2C%22fieldTypeEnum%22%3A%22Checkbox%22%7D%2C%7B%22fieldName%22%3A%22Route%20to%20Complaints%22%2C%22subgroupName%22%3A%22ENFORCEMENT%20ROUTING%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22defaultValue%22%3A%22%E2%88%9A%22%2C%22displayFieldName%22%3A%22Route%20to%20Complaints%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A31%2C%22fieldTypeValue%"
		"22%3A9%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Route%20to%20Complaints%22%2C%22checklistComment%22%3A%22%E2%88%9A%22%2C%22checkboxInd%22%3A%229%22%2C%22fieldTypeEnum%22%3A%22Checkbox%22%7D%5D%2C%22subgroupName%22%3A%22ENFORCEMENT%20ROUTING%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Complaint%20Type%22%2C%22Route%20to%20Drug%20Monitoring%22%2C%22Route%20to%20Complaints%22%5D%5D%2C%22rows%22%3Anull%7D%5D%2C%22templateType%22%3A%22Form%22%2C%22readOnly%22%3Atrue%7D%5D%2C%22templateTables%22%3A%5B%7B%22groupName%22%3A%22ENF_COMP%22%2C%22subgroups%22%3A%5B%7B%22displayName%22%3A%22Criminal%20Convictions%20List%22%2C%22rows%22%3Anull%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Conviction%22%2C%22subgroupName%22%3A%22CRIMINAL%"
		"20CONVICTIONS%20LIST%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Conviction%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoTableForm.do%3Fmode%3Dlist%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%26tableName%3DENF_COMP%3A%3ACRIMINAL%2BCONVICTIONS%2BLIST%22%2C%22target%22%3A%22_self%22%7D%2C%22checkboxDesc%22%3A%22Conviction%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Classification%22%2C%22subgroupName%22%3A%22CRIMINAL%20CONVICTIONS%20LIST%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Classification%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A5%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Classification%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropd"
		"own%22%7D%2C%7B%22fieldName%22%3A%22Offense%20Date%22%2C%22subgroupName%22%3A%22CRIMINAL%20CONVICTIONS%20LIST%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Offense%20Date%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A2%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Offense%20Date%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22Court%20Name%22%2C%22subgroupName%22%3A%22CRIMINAL%20CONVICTIONS%20LIST%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Court%20Name%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Court%20Name%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Court%20Case%20Number%22%2C%22subgroupName%22%3A%22CRIMINAL%20CONVICTIONS%20LIST%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Court%20Case%20Number%22%2C%22displayLen%22%3"
		"A-1%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Court%20Case%20Number%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Conviction%20Date%22%2C%22subgroupName%22%3A%22CRIMINAL%20CONVICTIONS%20LIST%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Conviction%20Date%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A60%2C%22fieldTypeValue%22%3A2%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Conviction%20Date%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22Have%20you%20been%20sentenced%3F%22%2C%22subgroupName%22%3A%22CRIMINAL%20CONVICTIONS%20LIST%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Have%20you%20been%20sentenced%3F%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A70%2C%22fieldTypeValue%22%3A3%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Have%20you%20been%20sentenced%3F%22%2C%22checkboxInd%22%3A%223%22"
		"%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22Sentencing%20Date%22%2C%22subgroupName%22%3A%22CRIMINAL%20CONVICTIONS%20LIST%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Sentencing%20Date%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A80%2C%22fieldTypeValue%22%3A2%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Sentencing%20Date%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%5D%2C%22subgroupName%22%3A%22CRIMINAL%20CONVICTIONS%20LIST%22%2C%22hasSelectCol%22%3Afalse%2C%22CSVData%22%3A%5B%5B%22Conviction%22%2C%22Classification%22%2C%22Offense%20Date%22%2C%22Court%20Name%22%2C%22Court%20Case%20Number%22%2C%22Conviction%20Date%22%2C%22Have%20you%20been%20sentenced%3F%22%2C%22Sentencing%20Date%22%5D%5D%7D%2C%7B%22displayName%22%3A%22Activities%20Complaint%22%2C%22rows%22%3Anull%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Activity%22%2C%22subgroupName%22%3A%22ACTIVITIES%20COM%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22dis"
		"playFieldName%22%3A%22Activity%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A5%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoTableForm.do%3Fmode%3Dlist%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%26tableName%3DENF_COMP%3A%3AACTIVITIES%2BCOM%22%2C%22target%22%3A%22_self%22%7D%2C%22checkboxDesc%22%3A%22Activity%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Comments%22%2C%22subgroupName%22%3A%22ACTIVITIES%20COM%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Comments%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A6%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Comments%22%2C%22checkboxInd%22%3A%226%22%2C%22fieldTypeEnum%22%3A%22Textarea%22%7D%2C%7B%22fieldName%22%3A%22Added%20by%22%2C%22subgroupName%22%3A%22ACTIVITIES%20COM%22%2C%22groupName%"
		"22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Added%20by%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Added%20by%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Date%20added%22%2C%22subgroupName%22%3A%22ACTIVITIES%20COM%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Date%20added%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A2%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Date%20added%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%5D%2C%22subgroupName%22%3A%22ACTIVITIES%20COM%22%2C%22hasSelectCol%22%3Afalse%2C%22CSVData%22%3A%5B%5B%22Activity%22%2C%22Comments%22%2C%22Added%20by%22%2C%22Date%20added%22%5D%5D%7D%2C%7B%22displayName%22%3A%22Notification%20Generator%22%2C%22rows%22%3Anull%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Notification%20Template%22%2C%22subgroupNa"
		"me%22%3A%22NOTIFICATION%20GENERATOR%20COM%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Notification%20Template%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A5%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoTableForm.do%3Fmode%3Dlist%26module%3DEnforcement%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%26tableName%3DENF_COMP%3A%3ANOTIFICATION%2BGENERATOR%2BCOM%22%2C%22target%22%3A%22_self%22%7D%2C%22checkboxDesc%22%3A%22Notification%20Template%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Contact%20Type%22%2C%22subgroupName%22%3A%22NOTIFICATION%20GENERATOR%20COM%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Contact%20Type%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A15%2C%22fieldTypeValue%22%3A5%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Contact%20Type%22%2C%22chec"
		"kboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Status%22%2C%22subgroupName%22%3A%22NOTIFICATION%20GENERATOR%20COM%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Status%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A5%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Status%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Date%20Sent%22%2C%22subgroupName%22%3A%22NOTIFICATION%20GENERATOR%20COM%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Date%20Sent%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A2%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Date%20Sent%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22Comments%22%2C%22subgroupName%22%3A%22NOTIFICATION%20GENERATOR%20COM%22%2C%22groupName%22%3A%22ENF_COMP%22%2C%22displayFieldName%22%3A%22Comments%22%2C%22displayL"
		"en%22%3A-1%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A6%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Comments%22%2C%22checkboxInd%22%3A%226%22%2C%22fieldTypeEnum%22%3A%22Textarea%22%7D%5D%2C%22subgroupName%22%3A%22NOTIFICATION%20GENERATOR%20COM%22%2C%22hasSelectCol%22%3Afalse%2C%22CSVData%22%3A%5B%5B%22Notification%20Template%22%2C%22Contact%20Type%22%2C%22Status%22%2C%22Date%20Sent%22%2C%22Comments%22%5D%5D%7D%5D%2C%22templateType%22%3A%22Table%22%2C%22readOnly%22%3Atrue%7D%5D%2C%22readOnly%22%3Atrue%2C%22UIUID%22%3A999%7D&layouttextarea999=%7B%22map%22%3A%7B%7D%2C%22layouts%22%3A%5B%5D%2C%22layoutHtml%22%3A%22%22%7D&uiuid=999&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22CRIMINAL%20CONVICTIONS%20LIST%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22vi"
		"ewKey1%22%3A%22ACTIVITIES%20COM%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22NOTIFICATION%20GENERATOR%20COM%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=TABSUMMARY&mode=execute",
		"LAST");

	lr_end_transaction("MILARA_TC3_08_SubmitApplication_ViewSummary",2);

	lr_think_time(8);
	web_add_header("AppD_Header", "MILARA_TC3_09_Record_ClickContact");
	lr_start_transaction("MILARA_TC3_09_Records_ClickContact");

	web_url("session.do_14", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc91&module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Licenses&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t233.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_15",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Enforcement&isFromCapList=true",
		"Snapshot=t234.inf",
		"Mode=HTML",
		"LAST");

 





 
 
 
 
 
 
 
 
 

 





 
 
 
 
 
 
 
 
 

 





 
 
 
 
 
 
 
 
 

 





	web_reg_save_param_ex(
		"ParamName=Param_Token_3",
		"LB/IC=type=\"hidden\" value=\"",
		"RB/IC=\" ",
		"Ordinal=6",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/contactList.do*",
		"LAST");

 





 
 
 
 
 
 
 
 

	web_url("contactList.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Enforcement&isFromCapList=true",
		"Snapshot=t235.inf",
		"Mode=HTML",
		"LAST");

	web_convert_param("Param_Token_3_URL2",
		"SourceString={Param_Token_3}",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		"LAST");

	web_submit_data("empty.jsp_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t236.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Enforcement&ID1=REC18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3"
		"C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Enforcement",
		"Snapshot=t237.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("MILARA_TC3_09_Records_ClickContact",2);

	lr_think_time(4);
	web_add_header("AppD_Header", "MILARA_TC3_10_Records_Contact_LookUpContact");
	lr_start_transaction("MILARA_TC3_10_Records_Contact_LookUpContact");

	web_url("session.do_16",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Enforcement",
		"Snapshot=t238.inf",
		"Mode=HTML",
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=TION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP",
		"RegExp=name=\"TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP\"\\ value=\"(.*?)\">\\\r\\\n\\\t\\\t<input\\ type",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/refContactListForCap.do*",
		"LAST");

 
	web_reg_save_param_ex(
		"ParamName=CurrentViewID",
		"LB=name=\"CurrentViewID\" value=\"",
		"RB=\"/>\r\n\t\t<input type",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/refContactListForCap.do*",
		"LAST");

	web_url("refContactListForCap.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Enforcement", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Enforcement", 
		"Snapshot=t239.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("ajax.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Enforcement", 
		"Snapshot=t240.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t241.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Enforcement", 
		"Snapshot=t242.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&getMsg=Y", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Enforcement", 
		"Snapshot=t243.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("MILARA_TC3_10_Records_Contact_LookUpContact",2);

	lr_think_time(18);
	web_add_header("AppD_Header", "MILARA_TC3_11_Record_Contact_LookUpContact_SearchContact");
	lr_start_transaction("MILARA_TC3_11_Record_Contact_LookUpContact_SearchContact");

	web_url("session.do_17",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Enforcement",
		"Snapshot=t244.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("refContactListForCap.do_2",
		"Action=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Enforcement",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Enforcement",
		"Snapshot=t245.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP", "Value=9a80743c3c0717ce811cefa0da01aca9", "ENDITEM",
		"Name=value(FirstEntryURL)", "Value=/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Enforcement", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Enforcement", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=", "ENDITEM",
		"Name=refresh_url", "Value=", "ENDITEM",
		"Name=buttonName", "Value=", "ENDITEM",
		"Name=modeName", "Value=search", "ENDITEM",
		"Name=module", "Value=Enforcement", "ENDITEM",
		"Name=accelasubmitbuttonname", "Value=submit", "ENDITEM",
		"Name=itemName", "Value=", "ENDITEM",
		"Name=CurrentViewID", "Value=21033", "ENDITEM",
		"Name=exceptionLogID", "Value=", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=value(portlet_soundex)", "Value=off", "ENDITEM",
		"Name=objectName", "Value=", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value=21033", "ENDITEM",
		"Name=sessionIdFromWindow", "Value={Param_Token_3}", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=value(mode)", "Value=search", "ENDITEM",
		"Name=value(capcontactid)", "Value=", "ENDITEM",
		"Name=value(sync)", "Value=", "ENDITEM",
		"Name=value(isDisableRefContact)", "Value=", "ENDITEM",
		"Name=value(lookup)", "Value=true", "ENDITEM",
		"Name=value(type)", "Value=", "ENDITEM",
		"Name=value(actType)", "Value=lookupdirect", "ENDITEM",
		"Name=value(fromDaily)", "Value=Y", "ENDITEM",
		"Name=value(scheduleNbr)", "Value=", "ENDITEM",
		"Name=value(locationNbr)", "Value=", "ENDITEM",
		"Name=value(refExamNbr)", "Value=", "ENDITEM",
		"Name=value(providerNbr)", "Value=", "ENDITEM",
		"Name=value(from)", "Value=", "ENDITEM",
		"Name=value(unDoAssign)", "Value=", "ENDITEM",
		"Name=value(providerEventBuilder)", "Value=", "ENDITEM",
		"Name=value(usedQueryInfo)", "Value=Y", "ENDITEM",
		"Name=value(contactType)", "Value=", "ENDITEM",
		"Name=value(relation)", "Value=", "ENDITEM",
		"Name=value(title)", "Value=", "ENDITEM",
		"Name=value(firstName)", "Value=", "ENDITEM",
		"Name=value(fullName)", "Value=", "ENDITEM",
		"Name=value(addressLine1)", "Value=", "ENDITEM",
		"Name=value(addressLine2)", "Value=", "ENDITEM",
		"Name=value(addressLine3)", "Value=", "ENDITEM",
		"Name=value(city)", "Value=", "ENDITEM",
		"Name=value(state)", "Value=", "ENDITEM",
		"Name=value(zip)", "Value=", "ENDITEM",
		"Name=value(countryCode)", "Value=", "ENDITEM",
		"Name=value(phone2)", "Value=", "ENDITEM",
		"Name=value(phone3)", "Value=", "ENDITEM",
		"Name=value(fax)", "Value=", "ENDITEM",
		"Name=value(auditStatus)", "Value=", "ENDITEM",
		"Name=value(contactTypeFlag)", "Value=", "ENDITEM",
		"Name=value(templateData)", "Value=", "ENDITEM",
		"Name=value(activityModel*activityTemplate)", "Value=", "ENDITEM",
		"Name=value(salutation)", "Value=", "ENDITEM",
		"Name=value(gender)", "Value=", "ENDITEM",
		"Name=value(postOfficeBox)", "Value=", "ENDITEM",
		"Name=value(activityModel*activityName)", "Value=", "ENDITEM",
		"Name=value(activityModel*activityType)", "Value=", "ENDITEM",
		"Name=value(activityModel*activityDescription)", "Value=", "ENDITEM",
		"Name=value(activityModel*activityAttributeLabel)", "Value=", "ENDITEM",
		"Name=value(activityModel*activityAttributeValue)", "Value=", "ENDITEM",
		"Name=value(businessName2)", "Value=", "ENDITEM",
		"Name=value(birthCity)", "Value=", "ENDITEM",
		"Name=value(birthState)", "Value=", "ENDITEM",
		"Name=value(birthRegion)", "Value=", "ENDITEM",
		"Name=value(race)", "Value=", "ENDITEM",
		"Name=date(deceasedDate)", "Value=", "ENDITEM",
		"Name=value(passportNumber)", "Value=", "ENDITEM",
		"Name=value(driverLicenseNbr)", "Value=", "ENDITEM",
		"Name=value(driverLicenseState)", "Value=", "ENDITEM",
		"Name=value(stateIDNbr)", "Value=", "ENDITEM",
		"Name=value(contactAddressPK*addressID)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*addressType)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*recipient)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*fullAddress)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*addressLine1)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*addressLine2)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*addressLine3)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*houseNumberStart)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*houseNumberEnd)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*houseNumberAlphaStart)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*houseNumberAlphaEnd)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*levelPrefix)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*levelNumberStart)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*levelNumberEnd)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*streetDirection)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*streetPrefix)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*streetName)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*streetSuffix)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*unitType)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*unitStart)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*unitEnd)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*streetSuffixDirection)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*countryCode)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*city)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*state)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*validateFlag)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*zip)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*phone)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*fax)", "Value=", "ENDITEM",
		"Name=value(genericTemplateAttribute*fieldName)", "Value=", "ENDITEM",
		"Name=value(genericTemplateAttribute*defaultValue)", "Value=", "ENDITEM",
		"Name=value(genericTemplateTableValue*fieldName)", "Value=", "ENDITEM",
		"Name=value(genericTemplateTableValue*defaultValue)", "Value=", "ENDITEM",
		"Name=value(middleName)", "Value= NAZARENO", "ENDITEM",
		"Name=value(lastName)", "Value=", "ENDITEM",
		"Name=value(namesuffix)", "Value=", "ENDITEM",
		"Name=value(socialSecurityNumber)", "Value=", "ENDITEM",
		"Name=value(maskformat_socialSecurityNumber)", "Value=###-##-####", "ENDITEM",
		"Name=date(birthDate)", "Value=", "ENDITEM",
		"Name=date(endBirthDate)", "Value=", "ENDITEM",
		"Name=value(contactSeqNumber)", "Value=", "ENDITEM",
		"Name=value(businessName)", "Value=", "ENDITEM",
		"Name=value(tradeName)", "Value=", "ENDITEM",
		"Name=value(fein)", "Value=", "ENDITEM",
		"Name=value(maskformat_fein)", "Value=", "ENDITEM",
		"Name=ACMask_21033_2_value(phone1_disp)", "Value=", "ENDITEM",
		"Name=ACMask_21033_2_value(phone1)", "Value=", "ENDITEM",
		"Name=value(email)", "Value=", "ENDITEM",
		"Name=value(preferredChannel)", "Value=", "ENDITEM",
		"Name=valuetextarea17", "Value=", "ENDITEM",
		"Name=sourcetextarea17", "Value=", "ENDITEM",
		"Name=layouttextarea17", "Value=", "ENDITEM",
		"Name=uiuid", "Value=17", "ENDITEM",
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(socialSecurityNumber)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"}}}", "ENDITEM",
		"LAST");

	web_submit_data("empty.jsp_10", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t246.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Enforcement&ID1=REC18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3"
		"C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Enforcement",
		"Snapshot=t247.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_url("session.do_18",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Enforcement",
		"Snapshot=t248.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("MILARA_TC3_11_Record_Contact_LookUpContact_SearchContact",2);
	web_add_header("AppD_Header", "MILARA_TC3_12_Record_Contact_LookUpContact_SelectContact");
	lr_start_transaction("MILARA_TC3_12_Record_Contact_LookUpContact_SelectContact");

	web_url("session.do_19",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Enforcement",
		"Snapshot=t249.inf",
		"Mode=HTML",
		"LAST");

	lr_think_time(5);

	web_url("session.do_20",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Enforcement",
		"Snapshot=t250.inf",
		"Mode=HTML",
		"LAST");

	web_custom_request("xrefContactAddressForm.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/address/xrefContactAddressForm.do?mode=associate&module=Enforcement",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Enforcement",
		"Snapshot=t251.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP=9a80743c3c0717ce811cefa0da01aca9&value(FirstEntryURL)=%2Fportlets%2Fcontact%2Fref%2FrefContactListForCap.do%3Fvalue(mode)%3Dsearch%26value(lookup)%3Dtrue%26lookupdirect%3Dtrue%26fromDaily%3DY%26isDisableRefContact%3Dfalse%26value(usedQueryInfo)%3DY%26value(actType)%3Dlookupdirect%26module%3DEnforcement&value(CurrentEntryURL)=%2Fportlets%2Fcontact%2Fref%2FrefContactListForCap.do%3Fmodule%3DEnforcement%26value(usedQueryInfo)%3DY&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=submit&modeName=list&module=Enforcement&accelasubmitbuttonname=&itemName=&CurrentViewID=11&exceptionLogID=&generalCAPSearch=&objectName=contactList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=11&sessionIdFromWindow={Param_Token_3_URL2}&listID=&printType=&checkBoxValue=&value(mode)=searchresult&value(lookup)=true&value(capcontactid)=&value(sync)=&value(isDisableRefContact)=&value(refContactSeqNumber)=&value(scheduleN"
		"br)=&value(locationNbr)=&value(refExamNbr)=&value(providerNbr)=&value(from)=&value(unDoAssign)=&value(providerEventBuilder)=&value(usedQueryInfo)=Y&value(actType)=lookupdirect&closeMatch=null&ac360_list_id_hiddenCheckbox=&chk_contactid=317382439&chk_contactid_hiddenCheckbox=317382439&entity_type_hidden=CONTACT&refContactId=317382439&isDynaPaging=true&startDate=&",
		"LAST");

	web_submit_data("refContactListForCap.do_3",
		"Action=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Enforcement",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Enforcement",
		"Snapshot=t252.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP", "Value=9a80743c3c0717ce811cefa0da01aca9", "ENDITEM",
		"Name=value(FirstEntryURL)", "Value=/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Enforcement", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/contact/ref/refContactListForCap.do?module=Enforcement&value(usedQueryInfo)=Y", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=capList", "ENDITEM",
		"Name=refresh_url", "Value=/portlets/cap/capList.do?mode=view&module=Enforcement", "ENDITEM",
		"Name=buttonName", "Value=submit", "ENDITEM",
		"Name=modeName", "Value=list", "ENDITEM",
		"Name=module", "Value=Enforcement", "ENDITEM",
		"Name=accelasubmitbuttonname", "Value=add", "ENDITEM",
		"Name=itemName", "Value=", "ENDITEM",
		"Name=CurrentViewID", "Value=11", "ENDITEM",
		"Name=exceptionLogID", "Value=", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=objectName", "Value=contactList", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value=11", "ENDITEM",
		"Name=sessionIdFromWindow", "Value={Param_Token_3}", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=value(mode)", "Value=searchresult", "ENDITEM",
		"Name=value(lookup)", "Value=true", "ENDITEM",
		"Name=value(capcontactid)", "Value=", "ENDITEM",
		"Name=value(sync)", "Value=", "ENDITEM",
		"Name=value(isDisableRefContact)", "Value=", "ENDITEM",
		"Name=value(refContactSeqNumber)", "Value=", "ENDITEM",
		"Name=value(scheduleNbr)", "Value=", "ENDITEM",
		"Name=value(locationNbr)", "Value=", "ENDITEM",
		"Name=value(refExamNbr)", "Value=", "ENDITEM",
		"Name=value(providerNbr)", "Value=", "ENDITEM",
		"Name=value(from)", "Value=", "ENDITEM",
		"Name=value(unDoAssign)", "Value=", "ENDITEM",
		"Name=value(providerEventBuilder)", "Value=", "ENDITEM",
		"Name=value(usedQueryInfo)", "Value=Y", "ENDITEM",
		"Name=value(actType)", "Value=lookupdirect", "ENDITEM",
		"Name=closeMatch", "Value=null", "ENDITEM",
		"Name=ac360_list_id_hiddenCheckbox", "Value=", "ENDITEM",
		"Name=chk_contactid", "Value=317382439", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=317382439", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=317382439", "ENDITEM",
		"Name=isDynaPaging", "Value=true", "ENDITEM",
		"Name=startDate", "Value=", "ENDITEM",
		"LAST");

	web_submit_data("empty.jsp_11", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t253.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_4",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Enforcement&ID1=REC18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3"
		"C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Enforcement",
		"Snapshot=t254.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("MILARA_TC3_12_Record_Contact_LookUpContact_SelectContact",2);

	lr_think_time(16);
	web_add_header("AppD_Header", "MILARA_TC3_13_Record_Click_DataField");
	lr_start_transaction("MILARA_TC3_13_Record_Click_DataField");

	web_url("session.do_21",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Enforcement",
		"Snapshot=t255.inf",
		"Mode=HTML",
		"LAST");

	web_url("appSpecInfoForm.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&module=Enforcement", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Enforcement", 
		"Snapshot=t256.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_12", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t257.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("appSpecInfoForm.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=buildDrillList&module=Enforcement&guideSheetSeq=&singleMode=", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&module=Enforcement", 
		"Snapshot=t258.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_5",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Enforcement&ID1=REC18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3"
		"C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&module=Enforcement",
		"Snapshot=t259.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("search.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&module=Enforcement", 
		"Snapshot=t260.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		"LAST");

	web_submit_data("expression.do_12", 
		"Action=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&module=Enforcement", 
		"Snapshot=t261.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=argumentPKs", "Value=[{\"portletID\":-1,\"viewKey1\":\"\",\"viewKey2\":\"\",\"viewKey3\":\"\"}]", "ENDITEM", 
		"Name=expressionPageType", "Value=SINGLEPORTLET", "ENDITEM", 
		"Name=isReload", "Value=false", "ENDITEM", 
		"Name=module", "Value=Enforcement", "ENDITEM", 
		"Name=capType", "Value=Enforcement/Complaint/NA/NA", "ENDITEM", 
		"LAST");

	web_custom_request("expression.do_13",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&module=Enforcement",
		"Snapshot=t262.inf",
		"Mode=HTML",
		"Body=value(FirstEntryURL)=%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26module%3DEnforcement&value(CurrentEntryURL)=%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26module%3DEnforcement&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Enforcement&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow={Param_Token_3_URL2}&listID=&printType=&checkBoxValue=&value(capID*ID1)=REC18&value(capID*ID2)=00000&value(capID*ID3)={Param_ID3}&singleModeName=COMPLAINT%2BINFORMATION&app_spec_info_COMPLAINT_INFORMATION_Profession=Nursing&app_spec_info_COMPLAINT_INFORMATION_Name_of_Licensee=performance&app_spec_info_COMPLAINT_INFORMATION_Address_of_Licensee=&app_spec_info_COMPLAINT_INFORMATION_License_Number=&app_spec_info_COMPLAINT_INFORMATION_Description_of_Complaint=performance&app_spec_info_COMPLAINT_INFORMATION_Is_this_drug_related%253F=No&singleModeName=WILLIN"
		"GNESS%2BTO%2BTESTIFY&app_spec_info_WILLINGNESS_TO_TESTIFY_Are_you_willing_to_testify_in_a_hearing=No&singleModeName=COMMUNICATION%2BCONSENT&app_spec_info_COMMUNICATION_CONSENT_I_authorize_the_Department_to_release_my_name_and_all_relevant_information_pertaining_to_this_allega=No&app_spec_info_COMMUNICATION_CONSENT_Do_you_authorize_another_person_to_communicate_with_the_department_regarding_your_complaint=No&app_spec_info_COMMUNICATION_CONSENT_Name=&app_spec_info_COMMUNICATION_CONSENT_Address=&app_spec_info_COMMUNICATION_CONSENT_Telephone_Number=&app_spec_info_COMMUNICATION_CONSENT_Email_Address=&app_spec_info_COMMUNICATION_CONSENT_Relationship_to_You=&singleModeName=PATIENT%2BMEDICAL%2BTREATMENT&app_spec_info_PATIENT_MEDICAL_TREATMENT_Is_your_complaint_regarding_the_medical_treatment_of_a_patient=No&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Name=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Date_of_Birth=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Last_4_Digit%2527s_of_Patient%2527s_SSN=0&"
		"app_spec_info_PATIENT_MEDICAL_TREATMENT_Date_of_Incident=&singleModeName=MEDICAL%2BSTAFF%2BPRIVILEGES&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Are_you_reporting_a_change_in_medical_staff_privileges=No&app_spec_info_MEDICAL_STAFF_PRIVILEGES_On_what_date_did_the_change_in_staff_privileges_occur=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_time_licensee_was_on_facility_staff=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Was_the_resignation_voluntary=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Suspension=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Probation=&singleModeName=POLICE%2BREPORT&app_spec_info_POLICE_REPORT_Is_there_a_police_report=No&app_spec_info_POLICE_REPORT_Police_Agency=&app_spec_info_POLICE_REPORT_Police_Report_Incident_Number=&singleModeName=CRIMINAL%2BCONVICTIONS&app_spec_info_CRIMINAL_CONVICTIONS_Are_you_reporting_a_criminal_conviction=No&app_spec_info_CRIMINAL_CONVICTIONS_Are_you_self_reporting_a_conviction_or_reporting_a_conviction_against_a_licensee=&singleModeName=SELF%2BREPORTIN"
		"G&app_spec_info_SELF_REPORTING_Are_you_self_reporting_disciplinary_action_taken_against_you_by_another_state_board=No&app_spec_info_SELF_REPORTING_State_Board_Name=&app_spec_info_SELF_REPORTING_Date_of_Action=&app_spec_info_SELF_REPORTING_Nature_of_Disciplinary_Action=&singleModeName=ENFORCEMENT%2BROUTING&app_spec_info_ENFORCEMENT_ROUTING_Complaint_Type=Public&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Drug_Monitoring_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints=on&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SINGLEPORTLET&expression_page_reload_after_submit_or_validate_failed=true&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3"
		"A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&mode=execute",
		"LAST");

	lr_end_transaction("MILARA_TC3_13_Record_Click_DataField",2);

	lr_think_time(5);
	web_add_header("AppD_Header", "MILARA_TC3_14_Record_DataField_Save");
	lr_start_transaction("MILARA_TC3_14_Record_DataField_Save");

	web_url("session.do_22",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&module=Enforcement",
		"Snapshot=t263.inf",
		"Mode=HTML",
		"LAST");

	web_custom_request("expression.do_14",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&module=Enforcement",
		"Snapshot=t264.inf",
		"Mode=HTML",
		"Body=value(FirstEntryURL)=%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26module%3DEnforcement&value(CurrentEntryURL)=%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26module%3DEnforcement&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Enforcement&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow={Param_Token_3_URL2}&listID=&printType=&checkBoxValue=&value(capID*ID1)=REC18&value(capID*ID2)=00000&value(capID*ID3)={Param_ID3}&singleModeName=COMPLAINT%2BINFORMATION&app_spec_info_COMPLAINT_INFORMATION_Profession=Nursing&app_spec_info_COMPLAINT_INFORMATION_Name_of_Licensee=performance&app_spec_info_COMPLAINT_INFORMATION_Address_of_Licensee=&app_spec_info_COMPLAINT_INFORMATION_License_Number=&app_spec_info_COMPLAINT_INFORMATION_Description_of_Complaint=performance&app_spec_info_COMPLAINT_INFORMATION_Is_this_drug_related%253F=No&singleModeName=WILLIN"
		"GNESS%2BTO%2BTESTIFY&app_spec_info_WILLINGNESS_TO_TESTIFY_Are_you_willing_to_testify_in_a_hearing=No&singleModeName=COMMUNICATION%2BCONSENT&app_spec_info_COMMUNICATION_CONSENT_I_authorize_the_Department_to_release_my_name_and_all_relevant_information_pertaining_to_this_allega=No&app_spec_info_COMMUNICATION_CONSENT_Do_you_authorize_another_person_to_communicate_with_the_department_regarding_your_complaint=No&app_spec_info_COMMUNICATION_CONSENT_Name=&app_spec_info_COMMUNICATION_CONSENT_Address=&app_spec_info_COMMUNICATION_CONSENT_Telephone_Number=&app_spec_info_COMMUNICATION_CONSENT_Email_Address=&app_spec_info_COMMUNICATION_CONSENT_Relationship_to_You=&singleModeName=PATIENT%2BMEDICAL%2BTREATMENT&app_spec_info_PATIENT_MEDICAL_TREATMENT_Is_your_complaint_regarding_the_medical_treatment_of_a_patient=No&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Name=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Date_of_Birth=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Last_4_Digit%2527s_of_Patient%2527s_SSN=0&"
		"app_spec_info_PATIENT_MEDICAL_TREATMENT_Date_of_Incident=&singleModeName=MEDICAL%2BSTAFF%2BPRIVILEGES&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Are_you_reporting_a_change_in_medical_staff_privileges=No&app_spec_info_MEDICAL_STAFF_PRIVILEGES_On_what_date_did_the_change_in_staff_privileges_occur=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_time_licensee_was_on_facility_staff=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Was_the_resignation_voluntary=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Suspension=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Probation=&singleModeName=POLICE%2BREPORT&app_spec_info_POLICE_REPORT_Is_there_a_police_report=No&app_spec_info_POLICE_REPORT_Police_Agency=&app_spec_info_POLICE_REPORT_Police_Report_Incident_Number=&singleModeName=CRIMINAL%2BCONVICTIONS&app_spec_info_CRIMINAL_CONVICTIONS_Are_you_reporting_a_criminal_conviction=No&app_spec_info_CRIMINAL_CONVICTIONS_Are_you_self_reporting_a_conviction_or_reporting_a_conviction_against_a_licensee=&singleModeName=SELF%2BREPORTIN"
		"G&app_spec_info_SELF_REPORTING_Are_you_self_reporting_disciplinary_action_taken_against_you_by_another_state_board=No&app_spec_info_SELF_REPORTING_State_Board_Name=&app_spec_info_SELF_REPORTING_Date_of_Action=&app_spec_info_SELF_REPORTING_Nature_of_Disciplinary_Action=&singleModeName=ENFORCEMENT%2BROUTING&app_spec_info_ENFORCEMENT_ROUTING_Complaint_Type=Public&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Drug_Monitoring_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints=on&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SINGLEPORTLET&expression_page_reload_after_submit_or_validate_failed=true&accelasubmitbuttonname=Previous&callBack=window.expression.__doExpressionSubmitCallBack(0)&variableKey=onSubmit&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A"
		"%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&mode=execute",
		"LAST");

	web_submit_data("appSpecInfoForm.do_4",
		"Action=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?module=Enforcement",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&module=Enforcement",
		"Snapshot=t265.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=value(FirstEntryURL)", "Value=/portlets/appspecinfo/appSpecInfoForm.do?mode=view&module=Enforcement", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/appspecinfo/appSpecInfoForm.do?mode=view&module=Enforcement", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=", "ENDITEM",
		"Name=refresh_url", "Value=", "ENDITEM",
		"Name=buttonName", "Value=", "ENDITEM",
		"Name=modeName", "Value=view", "ENDITEM",
		"Name=module", "Value=Enforcement", "ENDITEM",
		"Name=accelasubmitbuttonname", "Value=Save", "ENDITEM",
		"Name=itemName", "Value=", "ENDITEM",
		"Name=CurrentViewID", "Value=", "ENDITEM",
		"Name=exceptionLogID", "Value=", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=objectName", "Value=", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value=", "ENDITEM",
		"Name=sessionIdFromWindow", "Value={Param_Token_3}", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=value(capID*ID1)", "Value=REC18", "ENDITEM",
		"Name=value(capID*ID2)", "Value=00000", "ENDITEM",
		"Name=value(capID*ID3)", "Value={Param_ID3}", "ENDITEM",
		"Name=singleModeName", "Value=COMPLAINT+INFORMATION", "ENDITEM",
		"Name=app_spec_info_COMPLAINT_INFORMATION_Profession", "Value=Nursing", "ENDITEM",
		"Name=app_spec_info_COMPLAINT_INFORMATION_Name_of_Licensee", "Value=performance", "ENDITEM",
		"Name=app_spec_info_COMPLAINT_INFORMATION_Address_of_Licensee", "Value=", "ENDITEM",
		"Name=app_spec_info_COMPLAINT_INFORMATION_License_Number", "Value=", "ENDITEM",
		"Name=app_spec_info_COMPLAINT_INFORMATION_Description_of_Complaint", "Value=performance", "ENDITEM",
		"Name=app_spec_info_COMPLAINT_INFORMATION_Is_this_drug_related%3F", "Value=No", "ENDITEM",
		"Name=singleModeName", "Value=WILLINGNESS+TO+TESTIFY", "ENDITEM",
		"Name=app_spec_info_WILLINGNESS_TO_TESTIFY_Are_you_willing_to_testify_in_a_hearing", "Value=No", "ENDITEM",
		"Name=singleModeName", "Value=COMMUNICATION+CONSENT", "ENDITEM",
		"Name=app_spec_info_COMMUNICATION_CONSENT_I_authorize_the_Department_to_release_my_name_and_all_relevant_information_pertaining_to_this_allega", "Value=No", "ENDITEM",
		"Name=app_spec_info_COMMUNICATION_CONSENT_Do_you_authorize_another_person_to_communicate_with_the_department_regarding_your_complaint", "Value=No", "ENDITEM",
		"Name=app_spec_info_COMMUNICATION_CONSENT_Name", "Value=", "ENDITEM",
		"Name=app_spec_info_COMMUNICATION_CONSENT_Address", "Value=", "ENDITEM",
		"Name=app_spec_info_COMMUNICATION_CONSENT_Telephone_Number", "Value=", "ENDITEM",
		"Name=app_spec_info_COMMUNICATION_CONSENT_Email_Address", "Value=", "ENDITEM",
		"Name=app_spec_info_COMMUNICATION_CONSENT_Relationship_to_You", "Value=", "ENDITEM",
		"Name=singleModeName", "Value=PATIENT+MEDICAL+TREATMENT", "ENDITEM",
		"Name=app_spec_info_PATIENT_MEDICAL_TREATMENT_Is_your_complaint_regarding_the_medical_treatment_of_a_patient", "Value=No", "ENDITEM",
		"Name=app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%27s_Name", "Value=", "ENDITEM",
		"Name=app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%27s_Date_of_Birth", "Value=", "ENDITEM",
		"Name=app_spec_info_PATIENT_MEDICAL_TREATMENT_Last_4_Digit%27s_of_Patient%27s_SSN", "Value=0", "ENDITEM",
		"Name=app_spec_info_PATIENT_MEDICAL_TREATMENT_Date_of_Incident", "Value=", "ENDITEM",
		"Name=singleModeName", "Value=MEDICAL+STAFF+PRIVILEGES", "ENDITEM",
		"Name=app_spec_info_MEDICAL_STAFF_PRIVILEGES_Are_you_reporting_a_change_in_medical_staff_privileges", "Value=No", "ENDITEM",
		"Name=app_spec_info_MEDICAL_STAFF_PRIVILEGES_On_what_date_did_the_change_in_staff_privileges_occur", "Value=", "ENDITEM",
		"Name=app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_time_licensee_was_on_facility_staff", "Value=", "ENDITEM",
		"Name=app_spec_info_MEDICAL_STAFF_PRIVILEGES_Was_the_resignation_voluntary", "Value=", "ENDITEM",
		"Name=app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Suspension", "Value=", "ENDITEM",
		"Name=app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Probation", "Value=", "ENDITEM",
		"Name=singleModeName", "Value=POLICE+REPORT", "ENDITEM",
		"Name=app_spec_info_POLICE_REPORT_Is_there_a_police_report", "Value=No", "ENDITEM",
		"Name=app_spec_info_POLICE_REPORT_Police_Agency", "Value=", "ENDITEM",
		"Name=app_spec_info_POLICE_REPORT_Police_Report_Incident_Number", "Value=", "ENDITEM",
		"Name=singleModeName", "Value=CRIMINAL+CONVICTIONS", "ENDITEM",
		"Name=app_spec_info_CRIMINAL_CONVICTIONS_Are_you_reporting_a_criminal_conviction", "Value=No", "ENDITEM",
		"Name=app_spec_info_CRIMINAL_CONVICTIONS_Are_you_self_reporting_a_conviction_or_reporting_a_conviction_against_a_licensee", "Value=", "ENDITEM",
		"Name=singleModeName", "Value=SELF+REPORTING", "ENDITEM",
		"Name=app_spec_info_SELF_REPORTING_Are_you_self_reporting_disciplinary_action_taken_against_you_by_another_state_board", "Value=No", "ENDITEM",
		"Name=app_spec_info_SELF_REPORTING_State_Board_Name", "Value=", "ENDITEM",
		"Name=app_spec_info_SELF_REPORTING_Date_of_Action", "Value=", "ENDITEM",
		"Name=app_spec_info_SELF_REPORTING_Nature_of_Disciplinary_Action", "Value=", "ENDITEM",
		"Name=singleModeName", "Value=ENFORCEMENT+ROUTING", "ENDITEM",
		"Name=app_spec_info_ENFORCEMENT_ROUTING_Complaint_Type", "Value=Public", "ENDITEM",
		"Name=app_spec_info_ENFORCEMENT_ROUTING_Route_to_Drug_Monitoring_Value", "Value=Y", "ENDITEM",
		"Name=app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints_Value", "Value=Y", "ENDITEM",
		"Name=app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints", "Value=on", "ENDITEM",
		"Name=value(mode)", "Value=edit", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-1", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM",
		"Name=is_ASI_fields_displayed", "Value=true", "ENDITEM",
		"Name=expressionPageType", "Value=SINGLEPORTLET", "ENDITEM",
		"Name=expression_page_reload_after_submit_or_validate_failed", "Value=true", "ENDITEM",
		"LAST");

	web_submit_data("empty.jsp_13", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t266.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("EMSEMessage.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Enforcement", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?module=Enforcement", 
		"Snapshot=t267.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("appSpecInfoForm.do_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=buildDrillList&module=Enforcement&guideSheetSeq=&singleMode=", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?module=Enforcement", 
		"Snapshot=t268.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_6",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Enforcement&ID1=REC18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3"
		"C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?module=Enforcement",
		"Snapshot=t269.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("search.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?module=Enforcement", 
		"Snapshot=t270.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		"LAST");

	web_submit_data("expression.do_15", 
		"Action=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?module=Enforcement", 
		"Snapshot=t271.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=argumentPKs", "Value=[{\"portletID\":-1,\"viewKey1\":\"\",\"viewKey2\":\"\",\"viewKey3\":\"\"}]", "ENDITEM", 
		"Name=expressionPageType", "Value=SINGLEPORTLET", "ENDITEM", 
		"Name=isReload", "Value=true", "ENDITEM", 
		"Name=module", "Value=Enforcement", "ENDITEM", 
		"Name=capType", "Value=Enforcement/Complaint/NA/NA", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_14", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Enforcement", 
		"Snapshot=t272.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("expression.do_16",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?module=Enforcement",
		"Snapshot=t273.inf",
		"Mode=HTML",
		"Body=value(FirstEntryURL)=%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26module%3DEnforcement&value(CurrentEntryURL)=%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmodule%3DEnforcement&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=Save&modeName=&module=Enforcement&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow={Param_Token_3_URL2}&listID=&printType=&checkBoxValue=&value(capID*ID1)=REC18&value(capID*ID2)=00000&value(capID*ID3)={Param_ID3}&singleModeName=COMPLAINT%2BINFORMATION&app_spec_info_COMPLAINT_INFORMATION_Profession=Nursing&app_spec_info_COMPLAINT_INFORMATION_Name_of_Licensee=performance&app_spec_info_COMPLAINT_INFORMATION_Address_of_Licensee=&app_spec_info_COMPLAINT_INFORMATION_License_Number=&app_spec_info_COMPLAINT_INFORMATION_Description_of_Complaint=performance&app_spec_info_COMPLAINT_INFORMATION_Is_this_drug_related%253F=No&singleModeName=WILLINGNESS%2BTO%2BT"
		"ESTIFY&app_spec_info_WILLINGNESS_TO_TESTIFY_Are_you_willing_to_testify_in_a_hearing=No&singleModeName=COMMUNICATION%2BCONSENT&app_spec_info_COMMUNICATION_CONSENT_I_authorize_the_Department_to_release_my_name_and_all_relevant_information_pertaining_to_this_allega=No&app_spec_info_COMMUNICATION_CONSENT_Do_you_authorize_another_person_to_communicate_with_the_department_regarding_your_complaint=No&app_spec_info_COMMUNICATION_CONSENT_Name=&app_spec_info_COMMUNICATION_CONSENT_Address=&app_spec_info_COMMUNICATION_CONSENT_Telephone_Number=&app_spec_info_COMMUNICATION_CONSENT_Email_Address=&app_spec_info_COMMUNICATION_CONSENT_Relationship_to_You=&singleModeName=PATIENT%2BMEDICAL%2BTREATMENT&app_spec_info_PATIENT_MEDICAL_TREATMENT_Is_your_complaint_regarding_the_medical_treatment_of_a_patient=No&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Name=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Patient%2527s_Date_of_Birth=&app_spec_info_PATIENT_MEDICAL_TREATMENT_Last_4_Digit%2527s_of_Patient%2527s_SSN=0&app_spec_info_"
		"PATIENT_MEDICAL_TREATMENT_Date_of_Incident=&singleModeName=MEDICAL%2BSTAFF%2BPRIVILEGES&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Are_you_reporting_a_change_in_medical_staff_privileges=No&app_spec_info_MEDICAL_STAFF_PRIVILEGES_On_what_date_did_the_change_in_staff_privileges_occur=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_time_licensee_was_on_facility_staff=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Was_the_resignation_voluntary=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Suspension=&app_spec_info_MEDICAL_STAFF_PRIVILEGES_Period_of_Probation=&singleModeName=POLICE%2BREPORT&app_spec_info_POLICE_REPORT_Is_there_a_police_report=No&app_spec_info_POLICE_REPORT_Police_Agency=&app_spec_info_POLICE_REPORT_Police_Report_Incident_Number=&singleModeName=CRIMINAL%2BCONVICTIONS&app_spec_info_CRIMINAL_CONVICTIONS_Are_you_reporting_a_criminal_conviction=No&app_spec_info_CRIMINAL_CONVICTIONS_Are_you_self_reporting_a_conviction_or_reporting_a_conviction_against_a_licensee=&singleModeName=SELF%2BREPORTING&app_spec_inf"
		"o_SELF_REPORTING_Are_you_self_reporting_disciplinary_action_taken_against_you_by_another_state_board=No&app_spec_info_SELF_REPORTING_State_Board_Name=&app_spec_info_SELF_REPORTING_Date_of_Action=&app_spec_info_SELF_REPORTING_Nature_of_Disciplinary_Action=&singleModeName=ENFORCEMENT%2BROUTING&app_spec_info_ENFORCEMENT_ROUTING_Complaint_Type=Public&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Drug_Monitoring_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints_Value=Y&app_spec_info_ENFORCEMENT_ROUTING_Route_to_Complaints=on&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SINGLEPORTLET&expression_page_reload_after_submit_or_validate_failed=true&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&"
		"expressionPageType=SINGLEPORTLET&mode=execute",
		"LAST");

	web_url("session.do_23",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?module=Enforcement",
		"Snapshot=t274.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("MILARA_TC3_14_Record_DataField_Save",2);
	web_add_header("AppD_Header", "MILARA_TC3_15_Record_Click_Inspections");
	lr_start_transaction("MILARA_TC3_15_Record_Click_Inspections");

	web_url("session.do_24",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?module=Enforcement",
		"Snapshot=t275.inf",
		"Mode=HTML",
		"LAST");

 





	web_reg_save_param_ex(
		"ParamName=TokenInspectionList",
		"LB/IC=\"TRANSACTION_TOKEN_KEY_FOR_INSPECTIONLISTCAPSPECIFICFORM\" value=\"",
		"RB/IC=\"",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/inspectionListCapSpecific.do*",
		"LAST");

 





	web_reg_save_param_ex(
		"ParamName=CurrentViewID_1",
		"LB/IC=CurrentViewID=",
		"RB/IC=&",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/inspectionListCapSpecific.do*",
		"LAST");

	web_url("inspectionListCapSpecific.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Enforcement", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?module=Enforcement", 
		"Snapshot=t276.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_15", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t277.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_7",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Enforcement&ID1=REC18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3"
		"C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Enforcement",
		"Snapshot=t278.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("MILARA_TC3_15_Record_Click_Inspections",2);

	lr_think_time(7);
	web_add_header("AppD_Header", "MILARA_TC3_16_Record_Inspections_Click_ScheduleInspection");
	lr_start_transaction("MILARA_TC3_16_Record_Inspections_Click_ScheduleInspection");

	web_url("session.do_25",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Enforcement",
		"Snapshot=t279.inf",
		"Mode=HTML",
		"LAST");

	web_custom_request("workloadingInspectionList.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doValidate&mType=0&isFromCAP=Y&module=Enforcement",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Enforcement",
		"Snapshot=t280.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_INSPECTIONLISTCAPSPECIFICFORM=2e3a641264ccdb7f375bf9405c860079&value(FirstEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DEnforcement&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DEnforcement&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Enforcement&accelasubmitbuttonname=&itemName=&CurrentViewID=220&exceptionLogID=&generalCAPSearch=&objectName=inspectionList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=220&sessionIdFromWindow={Param_Token_3_URL2}&listID=&printType=&checkBoxValue=&value(mode)=view&value(CONFIRM_RESULT_WHEN_CANCEL)=&multipleResultType=&listType=recordInspectionList&errorShow=&noRight=&pageSizeR=null&",
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=ANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS",
		"RegExp=name=\"TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS\"\\ value=\"(.*?)\">\\\r\\\n\\\t\\\t<input\\ type",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/selectRequiredInspections.do*",
		"LAST");

	web_url("workloadingInspectionList.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Enforcement", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Enforcement", 
		"Snapshot=t281.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_26",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Enforcement",
		"Snapshot=t282.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("empty.jsp_16", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t283.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("MILARA_TC3_16_Record_Inspections_Click_ScheduleInspection",2);

	lr_think_time(5);
	web_add_header("AppD_Header", "MILARA_TC3_16_1_Record_Inspection_SelectInspectionType");
	lr_start_transaction("MILARA_TC3_16_1_Record_Inspection_SelectInspectionType");

	web_url("session.do_27",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Enforcement",
		"Snapshot=t284.inf",
		"Mode=HTML",
		"LAST");

	web_custom_request("selectRequiredInspections.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=loadInspTypeByGroup&InspGroup=Milara%20Agncy&CapId=REC18-00000-{Param_ID3}&CapIdIndex=0",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Enforcement",
		"Snapshot=t285.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS={ANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS}&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DEnforcement&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DEnforcement&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Enforcement&accelasubmitbuttonname=&itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow={Param_Token_3_URL2}&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS={ANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS}&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&pageSizeR=9999&",
		"LAST");

	web_custom_request("selectRequiredInspections.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=loadListTitles",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Enforcement",
		"Snapshot=t286.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS={ANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS}&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DEnforcement&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DEnforcement&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Enforcement&accelasubmitbuttonname=&itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow={Param_Token_3_URL2}&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS={ANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS}&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&pageSizeR=9999&",
		"LAST");

	lr_end_transaction("MILARA_TC3_16_1_Record_Inspection_SelectInspectionType",2);

	lr_think_time(7);
	web_add_header("AppD_Header", "MILARA_TC3_17_Records_Inspection_Click_PendingInspection");
	lr_start_transaction("MILARA_TC3_17_Records_Inspection_Click_PendingInspection");

	web_url("session.do_28",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Enforcement",
		"Snapshot=t287.inf",
		"Mode=HTML",
		"LAST");

	web_url("session.do_29",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Enforcement",
		"Snapshot=t288.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("MILARA_TC3_17_Records_Inspection_Click_PendingInspection",2);

 





	web_reg_save_param_ex(
		"ParamName=inspectionID",
		"LB/IC=success\",\"inspectionSeqNums\":[",
		"RB/IC=]",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

	web_custom_request("selectRequiredInspections.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=onlyPending",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Enforcement",
		"Snapshot=t289.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS={ANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS}&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DEnforcement&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DEnforcement&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Enforcement&accelasubmitbuttonname=&itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow={Param_Token_3_URL2}&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS={ANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS}&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&value(chk_inspType%2C0)=on&value(inspTypeID%2C0)=84033984&value(selectCapID%2C0)=REC18-00000-{Param_"
		"ID3}&value(isInAdvance%2C0)=N&value(requiredInspection%2C0)=N&value(autoassign%2C0)=N&value(scheduleOrder%2C0)=&pageSizeR=9999&",
		"LAST");

	lr_think_time(48);

	lr_start_transaction("MILARA_TC3_18_Records_Inspection_PendingInspection_ClickOK");

	lr_end_transaction("MILARA_TC3_18_Records_Inspection_PendingInspection_ClickOK",2);
	web_add_header("AppD_Header", "MILARA_TC3_18_Records_Inspection_ClickInspection");
	lr_start_transaction("MILARA_TC3_18_Records_Inspection_ClickInspection");

	web_url("session.do_30",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Enforcement",
		"Snapshot=t290.inf",
		"Mode=HTML",
		"LAST");

	web_url("inspectionListCapSpecific.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Enforcement", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Enforcement", 
		"Snapshot=t291.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_17", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t292.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_8",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Enforcement&ID1=REC18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3"
		"C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Enforcement",
		"Snapshot=t293.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_url("session.do_31",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Enforcement",
		"Snapshot=t294.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("MILARA_TC3_18_Records_Inspection_ClickInspection",2);
	web_add_header("AppD_Header", "MILARA_TC3_19_Record_Inspection_SelectIPendingInspection_ClickScheduleInspection");
	lr_start_transaction("MILARA_TC3_19_Record_Inspection_SelectIPendingInspection_ClickScheduleInspection");

	web_url("session.do_32",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Enforcement",
		"Snapshot=t295.inf",
		"Mode=HTML",
		"LAST");

	web_custom_request("workloadingInspectionList.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doValidate&mType=0&isFromCAP=Y&module=Enforcement",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Enforcement",
		"Snapshot=t296.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_INSPECTIONLISTCAPSPECIFICFORM=2e3a641264ccdb7f375bf9405c860079&value(FirstEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DEnforcement&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DEnforcement&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Enforcement&accelasubmitbuttonname=&itemName=&CurrentViewID={CurrentViewID_1}&exceptionLogID=&generalCAPSearch=&objectName=inspectionList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID={CurrentViewID_1}&sessionIdFromWindow={Param_Token_3_URL2}&listID=&printType=&checkBoxValue=&value(mode)=view&value(CONFIRM_RESULT_WHEN_CANCEL)=&multipleResultType=&listType=recordInspectionList&errorShow=&noRight=&value(chk_INSP%2C0)=0&value(ServProvCode%2C0)=MILARA&value(INSPID%2C0)={inspectionID}&value(CAPID1%2C0)=REC18&value(CAPID2%2C0)=00000&value(CAPID3%2C0)={Param_ID3}&value"
		"(INSPSEQ%2C0)=84033984&value(enabledCheck%2C0)=Y&documentDescription0=Insp%20Pending&inspectionCategory0=PENDING&pageSizeR=10&",
		"LAST");

	web_url("workloadingInspectionList.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Enforcement", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Enforcement", 
		"Snapshot=t297.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_18", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t298.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_33",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Enforcement",
		"Snapshot=t299.inf",
		"Mode=HTML",
		"LAST");

	web_url("inspectionDetail.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Enforcement", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Enforcement", 
		"Snapshot=t300.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("ajax.do_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Enforcement", 
		"Snapshot=t301.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_19", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t302.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_34",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Enforcement",
		"Snapshot=t303.inf",
		"Mode=HTML",
		"LAST");

	web_url("calendarInspectionWorkload.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/28/2018&hour=&ap=&module=Enforcement&capId=REC18-00000-{Param_ID3}&inspectionId={inspectionID}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Enforcement",
		"Snapshot=t304.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("MILARA_TC3_19_Record_Inspection_SelectIPendingInspection_ClickScheduleInspection",2);
	web_add_header("AppD_Header", "MILARA_TC3_21_Record_Inspection_ScheduleInspection_SelectUser");
	lr_start_transaction("MILARA_TC3_21_Record_Inspection_ScheduleInspection_SelectUser");

	web_url("session.do_35",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Enforcement",
		"Snapshot=t305.inf",
		"Mode=HTML",
		"LAST");

	web_url("session.do_36",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Enforcement",
		"Snapshot=t306.inf",
		"Mode=HTML",
		"LAST");

	web_url("calendarInspectionWorkload.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/28/2018&hour=&ap=&module=Enforcement&dept=MILARA%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&userId=ADMIN&capId=REC18-00000-{Param_ID3}&inspectionId={inspectionID}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Enforcement",
		"Snapshot=t307.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("MILARA_TC3_21_Record_Inspection_ScheduleInspection_SelectUser",2);

	lr_think_time(4);
	web_add_header("AppD_Header", "MILARA_TC3_22_Record_Inspection_ScheduleInspection_SubmitInspection");
	lr_start_transaction("MILARA_TC3_22_Record_Inspection_ScheduleInspection_SubmitInspection");

	web_url("session.do_37",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Enforcement",
		"Snapshot=t308.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("inspectionDetail.do_2",
		"Action=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Enforcement",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Enforcement",
		"Snapshot=t309.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=value(FirstEntryURL)", "Value=/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Enforcement", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Enforcement", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=", "ENDITEM",
		"Name=refresh_url", "Value=", "ENDITEM",
		"Name=buttonName", "Value=", "ENDITEM",
		"Name=modeName", "Value=pendingEditInit", "ENDITEM",
		"Name=module", "Value=Enforcement", "ENDITEM",
		"Name=accelasubmitbuttonname", "Value=", "ENDITEM",
		"Name=itemName", "Value=", "ENDITEM",
		"Name=CurrentViewID", "Value=266", "ENDITEM",
		"Name=exceptionLogID", "Value=", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=objectName", "Value=", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value=266", "ENDITEM",
		"Name=sessionIdFromWindow", "Value={Param_Token_3}", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=value(mode)", "Value=validate4Pending", "ENDITEM",
		"Name=value(contactNbr0)", "Value=", "ENDITEM",
		"Name=value(inspectionStatus0)", "Value=Scheduled", "ENDITEM",
		"Name=hiddenInspection0", "Value=true", "ENDITEM",
		"Name=value(contactPhoneNum)", "Value=", "ENDITEM",
		"Name=value(latitude)", "Value=", "ENDITEM",
		"Name=value(longitude)", "Value=", "ENDITEM",
		"Name=value(isRestrictView4ACA)", "Value=", "ENDITEM",
		"Name=value(restrictRole)", "Value=", "ENDITEM",
		"Name=value(requestor)", "Value=", "ENDITEM",
		"Name=value(contactName)", "Value=", "ENDITEM",
		"Name=value(recordComments)", "Value=", "ENDITEM",
		"Name=date(estimatedStartTime)", "Value=", "ENDITEM",
		"Name=date(estimatedEndTime)", "Value=", "ENDITEM",
		"Name=hiddenInspection0", "Value=true", "ENDITEM",
		"Name=hiddenInspection0", "Value=true", "ENDITEM",
		"Name=value(unitNBR0)", "Value=", "ENDITEM",
		"Name=hiddenInspection0", "Value=true", "ENDITEM",
		"Name=value(reqPhoneNum0)", "Value=", "ENDITEM",
		"Name=hiddenInspection0", "Value=true", "ENDITEM",
		"Name=value(displayinaca0)", "Value=", "ENDITEM",
		"Name=hiddenInspection0", "Value=true", "ENDITEM",
		"Name=value(requestCommentText0)", "Value=", "ENDITEM",
		"LAST");

	web_submit_data("empty.jsp_20", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t310.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_38",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Enforcement",
		"Snapshot=t311.inf",
		"Mode=HTML",
		"LAST");

	web_custom_request("inspectionDetail.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?value(mode)=validateAndGetNextAvailableTime",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Enforcement",
		"Snapshot=t312.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_MANAGEINSPECTIONLISTFORM=6f942af3feee0d2bbd4ee954a3b3c37b&value(FirstEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DEnforcement&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DEnforcement&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=pendingEditInit&module=Enforcement&accelasubmitbuttonname=&itemName=&CurrentViewID=265&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=265&sessionIdFromWindow={Param_Token_3_URL2}&listID=&printType=&checkBoxValue=&value(mode)=pendingEditSave&value(deptOfUserAll)=MILARA%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(gaUserIDAll)=ADMIN&date(scheduledDateAll)=&ac360_list_id=on0&value(pendingInspScheduleOrder%2C0)=&value(inspectionId%2C0)={inspectionID}&value(pendingCapID%2C0)=REC"
		"18-00000-{Param_ID3}&value(inspectionTypeId%2C0)=84033984&value(calendarIds%2C0)=&value(requiredInspection%2C0)=N&value(inspectionType%2C0)=To%20be%20Defined&value(actualUnits%2C0)=&value(inspectionStatus0)=Scheduled&value(requestCommentText0)=&value(gisArea0)=&value(reqPhoneNumIDD0)=&value(reqPhoneNum0)=&value(displayinaca0)=&value(latitude0)=&value(longitude0)=&value(unitNBR0)=&value(restrictRole0)=&value(activityModel*requestorFname0)=&value(activityModel*requestorMname0)=&value(activityModel*requestorLname0)=&value(scheduledStartTimeHourHidden%2C0)=&value(scheduledStartTimeMinuteHidden%2C0)=&value(scheduledStartTimeAMPMHidden%2C0)=&value(scheduledEndTimeHourHidden%2C0)=&value(scheduledEndTimeMinuteHidden%2C0)=&value(scheduledEndTimeAMPMHidden%2C0)=&value(activityModel*contactFname0)=&value(activityModel*contactMname0)=&value(activityModel*contactLname0)=&value(contactNbr0)=&value(contactPhoneNumIDD0)=&value(contactPhoneNum0)=&value(estimatedTimeHour0)=&value(estimatedTimeMinute0)=&value("
		"estimatedTimeAMPM0)=&value(estimatedEndTimeHour0)=&value(estimatedEndTimeMinute0)=&value(estimatedEndTimeAMPM0)=&date(activityModel*desiredDate0)=&value(desiredTimeHour0)=&value(desiredTimeMinute0)=&value(desiredTimeAMPM0)=&value(deptOfUser%2C0)=MILARA%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(isRestrictView4ACA0)=off&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&date(scheduleDate%2C0)=08%2F28%2F2018&value(scheduledStartTimeHour%2C0)=&value(sc"
		"heduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(initInspector%2C0)=&value(gaUserID%2C0)=ADMIN&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&pageSizeR=9999&",
		"LAST");

	web_url("viewValidationResultMsg.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/viewValidationResultMsg.do?mode=viewResultMsg&from=confirm&indexCount=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Enforcement", 
		"Snapshot=t313.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_21", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t314.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("MILARA_TC3_22_Record_Inspection_ScheduleInspection_SubmitInspection",2);

	lr_think_time(4);
	web_add_header("AppD_Header", "MILARA_TC3_23_Record_Inspection_ScheduleInspection_ClickOK");
	lr_start_transaction("MILARA_TC3_23_Record_Inspection_ScheduleInspection_ClickOK");

	web_url("session.do_39",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Enforcement",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Enforcement",
		"Snapshot=t315.inf",
		"Mode=HTML",
		"LAST");

	web_url("session.do_40",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.3bc92&module=Licenses",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/viewValidationResultMsg.do?mode=viewResultMsg&from=confirm&indexCount=0",
		"Snapshot=t316.inf",
		"Mode=HTML",
		"LAST");

	web_custom_request("workloadingInspectionList.do_5",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditSave&operateType=refresh&convertToJson=true",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Enforcement",
		"Snapshot=t317.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_MANAGEINSPECTIONLISTFORM=6f942af3feee0d2bbd4ee954a3b3c37b&value(FirstEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DEnforcement&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DEnforcement&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=pendingEditInit&module=Enforcement&accelasubmitbuttonname=&itemName=&CurrentViewID=265&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=265&sessionIdFromWindow={Param_Token_3_URL2}&listID=&printType=&checkBoxValue=&value(mode)=pendingEditSave&value(deptOfUserAll)=MILARA%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(gaUserIDAll)=ADMIN&date(scheduledDateAll)=&ac360_list_id=on0&value(pendingInspScheduleOrder%2C0)=&value(inspectionId%2C0)={inspectionID}&value(pendingCapID%2C0)=REC"
		"18-00000-{Param_ID3}&value(inspectionTypeId%2C0)=84033984&value(calendarIds%2C0)=&value(requiredInspection%2C0)=N&value(inspectionType%2C0)=To%20be%20Defined&value(actualUnits%2C0)=&value(inspectionStatus0)=Scheduled&value(requestCommentText0)=&value(gisArea0)=&value(reqPhoneNumIDD0)=&value(reqPhoneNum0)=&value(displayinaca0)=&value(latitude0)=&value(longitude0)=&value(unitNBR0)=&value(restrictRole0)=&value(activityModel*requestorFname0)=&value(activityModel*requestorMname0)=&value(activityModel*requestorLname0)=&value(scheduledStartTimeHourHidden%2C0)=&value(scheduledStartTimeMinuteHidden%2C0)=&value(scheduledStartTimeAMPMHidden%2C0)=&value(scheduledEndTimeHourHidden%2C0)=&value(scheduledEndTimeMinuteHidden%2C0)=&value(scheduledEndTimeAMPMHidden%2C0)=&value(activityModel*contactFname0)=&value(activityModel*contactMname0)=&value(activityModel*contactLname0)=&value(contactNbr0)=&value(contactPhoneNumIDD0)=&value(contactPhoneNum0)=&value(estimatedTimeHour0)=&value(estimatedTimeMinute0)=&value("
		"estimatedTimeAMPM0)=&value(estimatedEndTimeHour0)=&value(estimatedEndTimeMinute0)=&value(estimatedEndTimeAMPM0)=&date(activityModel*desiredDate0)=&value(desiredTimeHour0)=&value(desiredTimeMinute0)=&value(desiredTimeAMPM0)=&value(deptOfUser%2C0)=MILARA%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(isRestrictView4ACA0)=off&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&date(scheduleDate%2C0)=08%2F28%2F2018&value(scheduledStartTimeHour%2C0)=&value(sc"
		"heduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(initInspector%2C0)=&value(gaUserID%2C0)=ADMIN&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&pageSizeR=9999&",
		"LAST");

	lr_end_transaction("MILARA_TC3_23_Record_Inspection_ScheduleInspection_ClickOK",2);

	lr_start_transaction("MILARA_TC3_24_Record_inspection_ScheduleInspection_ClickOK_OK");

	lr_end_transaction("MILARA_TC3_24_Record_inspection_ScheduleInspection_ClickOK_OK",2);
	web_add_header("AppD_Header", "MILARA_SignOut");
	lr_start_transaction("MILARA_SignOut");

	web_url("signoff.do", 
		"URL=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t318.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("portal", 
		"Action=https://av-pt-ferrari.accela.com/jetspeed/portal?action=JClearCookie", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t319.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("logoutAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=MILARA&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t320.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("hostSignon.do_3", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=MILARA&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Snapshot=t321.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("MILARA_SignOut",2);

	return 0;
}
# 5 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\milara\\milara_tc3\\\\combined_MILARA_TC3.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\milara\\milara_tc3\\\\combined_MILARA_TC3.c" 2

