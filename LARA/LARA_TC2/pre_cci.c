# 1 "d:\\desktop_12182018\\pt-ferrari\\scripts\\lara\\lara_tc2\\\\combined_LARA_TC2.c"
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







 
 



















# 1 "d:\\desktop_12182018\\pt-ferrari\\scripts\\lara\\lara_tc2\\\\combined_LARA_TC2.c" 2

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

 
 
 

                               


 
 
 





















# 2 "d:\\desktop_12182018\\pt-ferrari\\scripts\\lara\\lara_tc2\\\\combined_LARA_TC2.c" 2

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


 
 


# 3 "d:\\desktop_12182018\\pt-ferrari\\scripts\\lara\\lara_tc2\\\\combined_LARA_TC2.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "d:\\desktop_12182018\\pt-ferrari\\scripts\\lara\\lara_tc2\\\\combined_LARA_TC2.c" 2

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
		"Snapshot=t1.inf", 
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
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(44);
    web_add_header("AppD_Header", "LARA_Login");
	lr_start_transaction("LARA_Login");

	web_custom_request("loginAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?requestType=checkWebSSOAdapter&servProvCode=LARA", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		"LAST");

	lr_think_time(4);

	web_submit_data("hostSignon.do_2",
		"Action=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true",
		"Snapshot=t4.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=action", "Value=signon", "ENDITEM",
		"Name=successUrl", "Value=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", "ENDITEM",
		"Name=cookieUserName", "Value=", "ENDITEM",
		"Name=cookieAgencyName", "Value=", "ENDITEM",
		"Name=requestToken", "Value={requestToken}", "ENDITEM",
		"Name=requestLanguageToken", "Value={requestLanguageToken}", "ENDITEM",
		"Name=password1", "Value=", "ENDITEM",
		"Name=servProvCode", "Value=LARA", "ENDITEM",
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
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("text.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t6.inf", 
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
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={}", 
		"LAST");

	web_custom_request("performance.typekit.net", 
		"URL=https://performance.typekit.net/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"fonts\":[{\"id\":139,\"duration\":561,\"dynamic\":false,\"weight\":\"700\",\"variable\":false},{\"id\":140,\"duration\":565,\"dynamic\":false,\"weight\":\"700\",\"variable\":false},{\"id\":175,\"duration\":568,\"dynamic\":false,\"weight\":\"400\",\"variable\":false},{\"id\":176,\"duration\":571,\"dynamic\":false,\"weight\":\"400\",\"variable\":false}],\"augmentations\":[],\"font_loading\":\"native\",\"active_duration\":1780,\"javascript_version\":\"1.19.2\",\"kit_type\":\"configurable\",\""
		"ad_blocker\":false,\"test_group\":false}", 
		"LAST");

	web_url("session.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_Login",2);
    web_add_header("AppD_Header", "LARA_TC2_01_Click_Addresses");
	lr_start_transaction("LARA_TC2_01_Click_Addresses");

	web_url("session.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10181", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("refAddress.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/refAddress.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("refAddressList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/address/refAddress.jsp", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("blank.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10181&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("regionalSyncMask.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&getMsg=Y", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("LARA_TC2_01_Click_Addresses",2);

	lr_think_time(40);
    web_add_header("AppD_Header", "LARA_TC2_02_Search_Addresses");
	lr_start_transaction("LARA_TC2_02_Search_Addresses");

	web_url("session.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10181&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(13);

	web_submit_data("refAddressList.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?module=Building", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=value(FirstEntryURL)", "Value=/portlets/address/refAddressList.do?mode=Search", "ENDITEM", 
		"Name=value(CurrentEntryURL)", "Value=/portlets/address/refAddressList.do?mode=Search", "ENDITEM", 
		"Name=portlet_language", "Value=en_US", "ENDITEM", 
		"Name=refresh_target", "Value=", "ENDITEM", 
		"Name=refresh_url", "Value=", "ENDITEM", 
		"Name=buttonName", "Value=", "ENDITEM", 
		"Name=modeName", "Value=Search", "ENDITEM", 
		"Name=module", "Value=Building", "ENDITEM", 
		"Name=accelasubmitbuttonname", "Value=search", "ENDITEM", 
		"Name=itemName", "Value=", "ENDITEM", 
		"Name=CurrentViewID", "Value=31", "ENDITEM", 
		"Name=exceptionLogID", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=value(portlet_soundex)", "Value=off", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=31", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=a6ynTSYVBRcb0HA7u+vwuSJS", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=listBySingle", "Value=null", "ENDITEM", 
		"Name=value(mode)", "Value=SearchResult", "ENDITEM", 
		"Name=value(contactSeqNumber)", "Value=", "ENDITEM", 
		"Name=autoSelect", "Value=null", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(serviceProviderCode)", "Value=", "ENDITEM", 
		"Name=value(search_range_from_houseNumberStart)", "Value=", "ENDITEM", 
		"Name=value(search_range_to_houseNumberStart)", "Value=", "ENDITEM", 
		"Name=value(search_range_houseNumberStart)", "Value=", "ENDITEM", 
		"Name=value(search_range_from_houseNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(search_range_to_houseNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(search_range_houseNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(houseNumberAlphaStart)", "Value=", "ENDITEM", 
		"Name=value(houseNumberAlphaEnd)", "Value=", "ENDITEM", 
		"Name=value(levelPrefix)", "Value=", "ENDITEM", 
		"Name=value(levelNumberStart)", "Value=", "ENDITEM", 
		"Name=value(levelNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(unitStart)", "Value=", "ENDITEM", 
		"Name=value(unitEnd)", "Value=", "ENDITEM", 
		"Name=value(state)", "Value=", "ENDITEM", 
		"Name=value(countryCode)", "Value=", "ENDITEM", 
		"Name=value(auditStatus)", "Value=", "ENDITEM", 
		"Name=value(addressDescription)", "Value=", "ENDITEM", 
		"Name=value(XCoordinator)", "Value=", "ENDITEM", 
		"Name=value(YCoordinator)", "Value=", "ENDITEM", 
		"Name=value(distance)", "Value=", "ENDITEM", 
		"Name=value(secondaryRoadNumber)", "Value=", "ENDITEM", 
		"Name=value(streetSuffixdirection)", "Value=", "ENDITEM", 
		"Name=value(sourceNumber)", "Value=", "ENDITEM", 
		"Name=value(sourceFlag)", "Value=", "ENDITEM", 
		"Name=value(addressTypeFlag)", "Value=", "ENDITEM", 
		"Name=value(validateFlag)", "Value=", "ENDITEM", 
		"Name=value(unitType)", "Value=", "ENDITEM", 
		"Name=value(streetPrefix)", "Value=", "ENDITEM", 
		"Name=value(secondaryRoad)", "Value=", "ENDITEM", 
		"Name=value(inspectionDistrictPrefix)", "Value=", "ENDITEM", 
		"Name=value(inspectionDistrict)", "Value=", "ENDITEM", 
		"Name=value(neighberhoodPrefix)", "Value=", "ENDITEM", 
		"Name=value(neighborhood)", "Value=", "ENDITEM", 
		"Name=value(eventID)", "Value=", "ENDITEM", 
		"Name=value(houseFractionStart)", "Value=", "ENDITEM", 
		"Name=value(houseFractionEnd)", "Value=", "ENDITEM", 
		"Name=value(auditID)", "Value=", "ENDITEM", 
		"Name=date(auditDate)", "Value=", "ENDITEM", 
		"Name=value(fullAddress)", "Value=", "ENDITEM", 
		"Name=value(primaryFlag)", "Value=", "ENDITEM", 
		"Name=value(addressType)", "Value=", "ENDITEM", 
		"Name=value(addressLine2)", "Value=", "ENDITEM", 
		"Name=value(subdivision)", "Value=", "ENDITEM", 
		"Name=value(lot)", "Value=", "ENDITEM", 
		"Name=isNewSearch", "Value=true", "ENDITEM", 
		"Name=value(address template)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(streetDirection)", "Value=N", "ENDITEM", 
		"Name=value(address template)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(streetName)", "Value=", "ENDITEM", 
		"Name=value(address template)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(streetSuffix)", "Value=", "ENDITEM", 
		"Name=value(address template)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(city)", "Value=", "ENDITEM", 
		"Name=value(address template)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(addressLine1)", "Value=", "ENDITEM", 
		"Name=value(address template)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(zip_disp)", "Value=", "ENDITEM", 
		"Name=value(zip)", "Value=", "ENDITEM", 
		"Name=value(address template)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(county)", "Value=", "ENDITEM", 
		"Name=value(address template)", "Value=", "ENDITEM", 
		"Name=isDaily", "Value=false", "ENDITEM", 
		"Name=value(refAddressId)", "Value=", "ENDITEM", 
		"Name=value(address template)", "Value=", "ENDITEM", 
		"Name=value(refAddressId)", "Value=", "ENDITEM", 
		"Name=value(sourceNumber)", "Value=", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10181&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_TC2_02_Search_Addresses",2);

	lr_think_time(7);
    web_add_header("AppD_Header", "LARA_TC2_03_Click_Parcel");
	lr_start_transaction("LARA_TC2_03_Click_Parcel");

	web_url("session.do_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10181&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10181", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10182", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("refParcel.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/parcel/refParcel.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("refParcelList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/parcel/refParcel.jsp", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_14", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10182&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_TC2_03_Click_Parcel",2);

	lr_think_time(7);
    web_add_header("AppD_Header", "LARA_TC2_04_Search_Parcel");
	lr_start_transaction("LARA_TC2_04_Search_Parcel");

	web_url("session.do_15", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10182&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("refParcelList.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?module=Building", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=value(FirstEntryURL)", "Value=/portlets/parcel/refParcelList.do?mode=search&lookup=false", "ENDITEM", 
		"Name=value(CurrentEntryURL)", "Value=/portlets/parcel/refParcelList.do?mode=search&lookup=false", "ENDITEM", 
		"Name=portlet_language", "Value=en_US", "ENDITEM", 
		"Name=refresh_target", "Value=", "ENDITEM", 
		"Name=refresh_url", "Value=", "ENDITEM", 
		"Name=buttonName", "Value=", "ENDITEM", 
		"Name=modeName", "Value=search", "ENDITEM", 
		"Name=module", "Value=Building", "ENDITEM", 
		"Name=accelasubmitbuttonname", "Value=searchresult", "ENDITEM", 
		"Name=itemName", "Value=", "ENDITEM", 
		"Name=CurrentViewID", "Value=20037", "ENDITEM", 
		"Name=exceptionLogID", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=value(portlet_soundex)", "Value=off", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=20037", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=a6ynTSYVBRcb0HA7u+vwuSJS", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=fromCreateChild", "Value=null", "ENDITEM", 
		"Name=value(parcel*parcelNumber)", "Value=123456", "ENDITEM", 
		"Name=value(parcel*legalDesc)", "Value=", "ENDITEM", 
		"Name=value(parcel*parcelStatus)", "Value=", "ENDITEM", 
		"Name=value(parcel*primaryParcelFlagWithoutDealing)", "Value=", "ENDITEM", 
		"Name=value(address*houseNumberAlphaStart)", "Value=", "ENDITEM", 
		"Name=value(address*houseNumberAlphaEnd)", "Value=", "ENDITEM", 
		"Name=value(address*levelPrefix)", "Value=", "ENDITEM", 
		"Name=value(address*levelNumberStart)", "Value=", "ENDITEM", 
		"Name=value(address*levelNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(address*unitStart)", "Value=", "ENDITEM", 
		"Name=value(address*city)", "Value=", "ENDITEM", 
		"Name=value(address*streetDirection)", "Value=", "ENDITEM", 
		"Name=value(address*addressDescription)", "Value=", "ENDITEM", 
		"Name=value(address*streetSuffixdirection)", "Value=", "ENDITEM", 
		"Name=value(parcel*township)", "Value=", "ENDITEM", 
		"Name=value(parcel*range)", "Value=", "ENDITEM", 
		"Name=value(parcel*section)", "Value=", "ENDITEM", 
		"Name=isNewSearch", "Value=true", "ENDITEM", 
		"Name=value(parcel template)", "Value=", "ENDITEM", 
		"Name=value(parcel*lot)", "Value=", "ENDITEM", 
		"Name=value(parcel template)", "Value=", "ENDITEM", 
		"Name=value(parcel*subdivision)", "Value=", "ENDITEM", 
		"Name=value(parcel template)", "Value=", "ENDITEM", 
		"Name=value(owner*ownerFullName)", "Value=", "ENDITEM", 
		"Name=value(parcel template)", "Value=", "ENDITEM", 
		"Name=value(search_range_from_address*houseNumberStart)", "Value=", "ENDITEM", 
		"Name=value(search_range_to_address*houseNumberStart)", "Value=", "ENDITEM", 
		"Name=value(search_range_address*houseNumberStart)", "Value=", "ENDITEM", 
		"Name=value(parcel template)", "Value=", "ENDITEM", 
		"Name=value(address*streetName)", "Value=", "ENDITEM", 
		"Name=value(parcel template)", "Value=", "ENDITEM", 
		"Name=value(address*streetSuffix)", "Value=", "ENDITEM", 
		"Name=value(parcel template)", "Value=", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("LARA_TC2_04_Search_Parcel",2);
    web_add_header("AppD_Header", "LARA_TC2_05_Click_Owner");
	lr_start_transaction("LARA_TC2_05_Click_Owner");

	web_url("session.do_16", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10182&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_17", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_18", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10182", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(4);

	web_url("session.do_19", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_20", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10183", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("refOwner.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/owner/refOwner.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("refOwnerList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?mode=search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/owner/refOwner.jsp", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_21", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10183&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_TC2_05_Click_Owner",2);

	lr_think_time(11);
    web_add_header("AppD_Header", "LARA_TC2_06_Search_Owner");
	lr_start_transaction("LARA_TC2_06_Search_Owner");

	web_url("session.do_22", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10183&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_23", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10183&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("refOwnerList.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?module=Building", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST", "Value=de0ee9c71a8c8f053382b500b3664f1c", "ENDITEM", 
		"Name=value(FirstEntryURL)", "Value=/portlets/owner/refOwnerList.do?mode=search", "ENDITEM", 
		"Name=value(CurrentEntryURL)", "Value=/portlets/owner/refOwnerList.do?mode=search", "ENDITEM", 
		"Name=portlet_language", "Value=en_US", "ENDITEM", 
		"Name=refresh_target", "Value=", "ENDITEM", 
		"Name=refresh_url", "Value=", "ENDITEM", 
		"Name=buttonName", "Value=", "ENDITEM", 
		"Name=modeName", "Value=search", "ENDITEM", 
		"Name=module", "Value=Building", "ENDITEM", 
		"Name=accelasubmitbuttonname", "Value=submit", "ENDITEM", 
		"Name=itemName", "Value=", "ENDITEM", 
		"Name=CurrentViewID", "Value=20028", "ENDITEM", 
		"Name=exceptionLogID", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=20028", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=a6ynTSYVBRcb0HA7u+vwuSJS", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=value(refOwner*address1)", "Value=", "ENDITEM", 
		"Name=value(refOwner*city)", "Value=", "ENDITEM", 
		"Name=value(refOwner*country)", "Value=", "ENDITEM", 
		"Name=value(refOwner*state)", "Value=", "ENDITEM", 
		"Name=value(refOwner*zip)", "Value=", "ENDITEM", 
		"Name=value(refOwner*parcelNbr)", "Value=", "ENDITEM", 
		"Name=value(refOwner*structureType)", "Value=", "ENDITEM", 
		"Name=value(refOwner*structureName)", "Value=", "ENDITEM", 
		"Name=value(refOwner*ownerStatus)", "Value=", "ENDITEM", 
		"Name=value(refOwner*ownerLastName)", "Value=", "ENDITEM", 
		"Name=value(refOwner*email)", "Value=", "ENDITEM", 
		"Name=isNewSearch", "Value=true", "ENDITEM", 
		"Name=value(owner template)", "Value=", "ENDITEM", 
		"Name=value(refOwner*ownerFirstName)", "Value=Bruce", "ENDITEM", 
		"Name=value(owner template)", "Value=", "ENDITEM", 
		"Name=value(refOwner*ownerFullName)", "Value=", "ENDITEM", 
		"Name=value(owner template)", "Value=", "ENDITEM", 
		"Name=value(refOwner*mailAddress1)", "Value=", "ENDITEM", 
		"Name=value(owner template)", "Value=", "ENDITEM", 
		"Name=value(refOwner*mailCity)", "Value=", "ENDITEM", 
		"Name=value(owner template)", "Value=", "ENDITEM", 
		"Name=value(refOwner*mailState)", "Value=", "ENDITEM", 
		"Name=value(owner template)", "Value=", "ENDITEM", 
		"Name=value(refOwner*mailZip)", "Value=", "ENDITEM", 
		"Name=value(owner template)", "Value=", "ENDITEM", 
		"Name=value(mode)", "Value=list", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("refOwnerForm.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerForm.do?mode=viewCondition&module=Building&refOwnerNumber=925517020", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST=de0ee9c71a8c8f053382b500b3664f1c&value(FirstEntryURL)=%2Fportlets%2Fowner%2FrefOwnerList.do%3Fmode%3Dsearch&value(CurrentEntryURL)=%2Fportlets%2Fowner%2FrefOwnerList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=submit&modeName=searchresult&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20027&exceptionLogID=&generalCAPSearch=&objectName=owners&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=20027&sessionIdFromWindow=a6ynTSYVBRcb0HA7u%2BvwuSJS&listID=&printType=&checkBoxValue=&isDynaPaging=true&page-navigator-input-id=1&925517020=BRUCE%20WAYNE&pageSizeR=10&", 
		"LAST");

	lr_end_transaction("LARA_TC2_06_Search_Owner",2);

	lr_think_time(8);
    web_add_header("AppD_Header", "LARA_TC2_07_Click_LicenseProfessionals");
	lr_start_transaction("LARA_TC2_07_Click_LicenseProfessionals");

	web_url("session.do_24", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10183&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_25", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_26", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10183", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(4);

	web_url("session.do_27", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_28", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10184", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("refProfessional.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/professional/refProfessional.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("refProfessionalList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/professional/refProfessional.jsp", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("LARA_TC2_07_Click_LicenseProfessionals",2);

	lr_think_time(5);
    web_add_header("AppD_Header", "LARA_TC2_08_Click_LicenseProfessionals_SearchTab");
	lr_start_transaction("LARA_TC2_08_Click_LicenseProfessionals_SearchTab");

	web_url("session.do_29", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10184&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("refProfessionalList.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("ajax.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&getMsg=Y", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_think_time(5);

	web_url("session.do_30", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10184&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_TC2_08_Click_LicenseProfessionals_SearchTab",2);
    web_add_header("AppD_Header", "LARA_TC2_09_Search_LicenseProfessionals_Submit");
	lr_start_transaction("LARA_TC2_09_Search_LicenseProfessionals_Submit");

	web_url("session.do_31", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10184&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("refProfessionalList.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM", "Value=d709b1371545a57094e9d0467f33660c", "ENDITEM", 
		"Name=value(FirstEntryURL)", "Value=/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", "ENDITEM", 
		"Name=value(CurrentEntryURL)", "Value=/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", "ENDITEM", 
		"Name=portlet_language", "Value=en_US", "ENDITEM", 
		"Name=refresh_target", "Value=", "ENDITEM", 
		"Name=refresh_url", "Value=", "ENDITEM", 
		"Name=buttonName", "Value=", "ENDITEM", 
		"Name=modeName", "Value=search", "ENDITEM", 
		"Name=module", "Value=Building", "ENDITEM", 
		"Name=accelasubmitbuttonname", "Value=submit", "ENDITEM", 
		"Name=itemName", "Value=", "ENDITEM", 
		"Name=CurrentViewID", "Value=20042", "ENDITEM", 
		"Name=exceptionLogID", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=20042", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=a6ynTSYVBRcb0HA7u+vwuSJS", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM", 
		"Name=value(stateLicense)", "Value=7109835", "ENDITEM", 
		"Name=value(licState)", "Value=", "ENDITEM", 
		"Name=date(licenseissuedate)", "Value=", "ENDITEM", 
		"Name=date(licenselastrenewaldate)", "Value=", "ENDITEM", 
		"Name=date(licenseexpirationdate)", "Value=", "ENDITEM", 
		"Name=value(contactmiddlename)", "Value=", "ENDITEM", 
		"Name=value(address2)", "Value=", "ENDITEM", 
		"Name=value(phone1)", "Value=", "ENDITEM", 
		"Name=value(phone2)", "Value=", "ENDITEM", 
		"Name=value(phone3)", "Value=", "ENDITEM", 
		"Name=value(acaPermission)", "Value=", "ENDITEM", 
		"Name=value(fax)", "Value=", "ENDITEM", 
		"Name=value(comment)", "Value=", "ENDITEM", 
		"Name=value(insuranceco)", "Value=", "ENDITEM", 
		"Name=value(insuranceamount)", "Value=", "ENDITEM", 
		"Name=value(policy)", "Value=", "ENDITEM", 
		"Name=date(insuranceexpdate)", "Value=", "ENDITEM", 
		"Name=value(businesslicense)", "Value=", "ENDITEM", 
		"Name=date(businesslicexpdate)", "Value=", "ENDITEM", 
		"Name=value(salutation)", "Value=", "ENDITEM", 
		"Name=value(gender)", "Value=", "ENDITEM", 
		"Name=value(postOfficeBox)", "Value=", "ENDITEM", 
		"Name=date(birthDate)", "Value=", "ENDITEM", 
		"Name=value(countryCode)", "Value=", "ENDITEM", 
		"Name=value(contrLicNo)", "Value=", "ENDITEM", 
		"Name=value(contLicBusName)", "Value=", "ENDITEM", 
		"Name=value(address3)", "Value=", "ENDITEM", 
		"Name=value(wcExempt)", "Value=", "ENDITEM", 
		"Name=value(wcInsCoCode)", "Value=", "ENDITEM", 
		"Name=value(wcPolicyNo)", "Value=", "ENDITEM", 
		"Name=date(wcExpDate)", "Value=", "ENDITEM", 
		"Name=value(licSeqNbr)", "Value=", "ENDITEM", 
		"Name=value(providerName)", "Value=", "ENDITEM", 
		"Name=value(providerNo)", "Value=", "ENDITEM", 
		"Name=value(degree)", "Value=", "ENDITEM", 
		"Name=value(discipline)", "Value=", "ENDITEM", 
		"Name=value(licenseBoard)", "Value=", "ENDITEM", 
		"Name=value(maskformat_socialSecurityNumber)", "Value=AAA-AA-AAAA", "ENDITEM", 
		"Name=value(socialSecurityNumber)", "Value=", "ENDITEM", 
		"Name=value(maskformat_fein)", "Value=", "ENDITEM", 
		"Name=value(fein)", "Value=", "ENDITEM", 
		"Name=value(title)", "Value=", "ENDITEM", 
		"Name=value(suffixName)", "Value=", "ENDITEM", 
		"Name=value(genericTemplateAttribute*fieldName)", "Value=", "ENDITEM", 
		"Name=value(genericTemplateAttribute*defaultValue)", "Value=", "ENDITEM", 
		"Name=value(genericTemplateTableValue*fieldName)", "Value=", "ENDITEM", 
		"Name=value(genericTemplateTableValue*defaultValue)", "Value=", "ENDITEM", 
		"Name=none", "Value=", "ENDITEM", 
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM", 
		"Name=value(contactlastname)", "Value=", "ENDITEM", 
		"Name=none", "Value=", "ENDITEM", 
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM", 
		"Name=value(contactfirstname)", "Value=", "ENDITEM", 
		"Name=none", "Value=", "ENDITEM", 
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM", 
		"Name=value(typeFlag)", "Value=", "ENDITEM", 
		"Name=none", "Value=", "ENDITEM", 
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM", 
		"Name=value(licensetype)", "Value=", "ENDITEM", 
		"Name=none", "Value=", "ENDITEM", 
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM", 
		"Name=value(businessName)", "Value=", "ENDITEM", 
		"Name=none", "Value=", "ENDITEM", 
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM", 
		"Name=value(busName2)", "Value=", "ENDITEM", 
		"Name=none", "Value=", "ENDITEM", 
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM", 
		"Name=value(address1)", "Value=", "ENDITEM", 
		"Name=none", "Value=", "ENDITEM", 
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM", 
		"Name=value(EMailAddress)", "Value=", "ENDITEM", 
		"Name=none", "Value=", "ENDITEM", 
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM", 
		"Name=value(city)", "Value=", "ENDITEM", 
		"Name=none", "Value=", "ENDITEM", 
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM", 
		"Name=value(state)", "Value=", "ENDITEM", 
		"Name=none", "Value=", "ENDITEM", 
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM", 
		"Name=value(zip_disp)", "Value=", "ENDITEM", 
		"Name=value(zip)", "Value=", "ENDITEM", 
		"Name=none", "Value=", "ENDITEM", 
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM", 
		"Name=none", "Value=", "ENDITEM", 
		"Name=isFilterContactAssociatedLP", "Value=null", "ENDITEM", 
		"Name=value(auditstatus)", "Value=", "ENDITEM", 
		"Name=none", "Value=", "ENDITEM", 
		"Name=value(templateGroup)", "Value=G3PROFESSIONAL", "ENDITEM", 
		"Name=value(mode)", "Value=list", "ENDITEM", 
		"Name=valuetextarea0", "Value=", "ENDITEM", 
		"Name=sourcetextarea0", "Value=", "ENDITEM", 
		"Name=layouttextarea0", "Value=", "ENDITEM", 
		"Name=uiuid", "Value=0", "ENDITEM", 
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(socialSecurityNumber)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"}}}", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("LARA_TC2_09_Search_LicenseProfessionals_Submit",2);
    web_add_header("AppD_Header", "LARA_TC2_10_Click_Contacts");
	lr_start_transaction("LARA_TC2_10_Click_Contacts");

	web_url("session.do_32", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10184&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_33", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_34", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10184", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_35", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_36", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10185", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("refContact.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/contact/refContact.jsp?mode=search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("refContactList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=LARA", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/contact/refContact.jsp?mode=search", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_10", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("LARA_TC2_10_Click_Contacts",2);
    web_add_header("AppD_Header", "LARA_TC2_11_Click_Search_Contacts_Tab");
	lr_start_transaction("LARA_TC2_11_Click_Search_Contacts_Tab");

	web_url("session.do_37", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10185&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=LARA", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("refContactList.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=LARA", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("ajax.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_11", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&getMsg=Y", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("LARA_TC2_11_Click_Search_Contacts_Tab",2);

	lr_think_time(17);
    web_add_header("AppD_Header", "LARA_TC2_12_Search_Contacts_Submit");
	lr_start_transaction("LARA_TC2_12_Search_Contacts_Submit");

	web_url("session.do_38", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10185&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(5);

	web_url("session.do_39", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10185&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("refContactList.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?module=Building", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORM", "Value=2b6aa59734929dd9e2481ac4603d5f3b", "ENDITEM", 
		"Name=value(FirstEntryURL)", "Value=/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", "ENDITEM", 
		"Name=value(CurrentEntryURL)", "Value=/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", "ENDITEM", 
		"Name=portlet_language", "Value=en_US", "ENDITEM", 
		"Name=refresh_target", "Value=", "ENDITEM", 
		"Name=refresh_url", "Value=", "ENDITEM", 
		"Name=buttonName", "Value=", "ENDITEM", 
		"Name=modeName", "Value=search", "ENDITEM", 
		"Name=module", "Value=Building", "ENDITEM", 
		"Name=accelasubmitbuttonname", "Value=submit", "ENDITEM", 
		"Name=itemName", "Value=", "ENDITEM", 
		"Name=CurrentViewID", "Value=38", "ENDITEM", 
		"Name=exceptionLogID", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=value(portlet_soundex)", "Value=off", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=38", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=a6ynTSYVBRcb0HA7u+vwuSJS", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=value(mode)", "Value=search", "ENDITEM", 
		"Name=value(capcontactid)", "Value=", "ENDITEM", 
		"Name=value(sync)", "Value=", "ENDITEM", 
		"Name=value(isDisableRefContact)", "Value=", "ENDITEM", 
		"Name=value(lookup)", "Value=false", "ENDITEM", 
		"Name=value(type)", "Value=", "ENDITEM", 
		"Name=value(actType)", "Value=", "ENDITEM", 
		"Name=value(fromDaily)", "Value=", "ENDITEM", 
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
		"Name=value(fullName)", "Value=", "ENDITEM", 
		"Name=value(addressLine1)", "Value=", "ENDITEM", 
		"Name=value(addressLine2)", "Value=", "ENDITEM", 
		"Name=value(addressLine3)", "Value=", "ENDITEM", 
		"Name=value(city)", "Value=", "ENDITEM", 
		"Name=value(state)", "Value=", "ENDITEM", 
		"Name=value(zip)", "Value=", "ENDITEM", 
		"Name=value(countryCode)", "Value=", "ENDITEM", 
		"Name=value(phone3)", "Value=", "ENDITEM", 
		"Name=value(fax)", "Value=", "ENDITEM", 
		"Name=value(preferredChannel)", "Value=", "ENDITEM", 
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
		"Name=value(namesuffix)", "Value=", "ENDITEM", 
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
		"Name=value(auditModel*auditStatus)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(genericTemplateAttribute*fieldName)", "Value=", "ENDITEM", 
		"Name=value(genericTemplateAttribute*defaultValue)", "Value=", "ENDITEM", 
		"Name=value(genericTemplateTableValue*fieldName)", "Value=", "ENDITEM", 
		"Name=value(genericTemplateTableValue*defaultValue)", "Value=", "ENDITEM", 
		"Name=value(lastName)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(firstName)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(middleName)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=ACMask_38_2_value(phone1_disp)", "Value=", "ENDITEM", 
		"Name=ACMask_38_2_value(phone1)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(businessName)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=ACMask_38_5_value(phone2_disp)", "Value=", "ENDITEM", 
		"Name=ACMask_38_5_value(phone2)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(email)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(socialSecurityNumber)", "Value=", "ENDITEM", 
		"Name=value(maskformat_socialSecurityNumber)", "Value=AAA-AA-AAAA", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(fein)", "Value=", "ENDITEM", 
		"Name=value(maskformat_fein)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=date(birthDate)", "Value=", "ENDITEM", 
		"Name=date(endBirthDate)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(tradeName)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(contactSeqNumber)", "Value=317366352", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=value(auditStatus)", "Value=", "ENDITEM", 
		"Name=isShowContactAddressFields", "Value=Y", "ENDITEM", 
		"Name=valuetextarea1", "Value=", "ENDITEM", 
		"Name=sourcetextarea1", "Value=", "ENDITEM", 
		"Name=layouttextarea1", "Value=", "ENDITEM", 
		"Name=uiuid", "Value=1", "ENDITEM", 
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(socialSecurityNumber)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"}}}", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_12", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_40", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10185&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_TC2_12_Search_Contacts_Submit",2);

	lr_think_time(9);
    web_add_header("AppD_Header", "LARA_SignOut");
	lr_start_transaction("LARA_SignOut");

	web_url("session.do_41", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10185&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(6);

	web_url("session.do_42", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10185&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_43", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.10185&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("signoff.do", 
		"URL=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("portal", 
		"Action=https://av-pt-ferrari.accela.com/jetspeed/portal?action=JClearCookie", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("logoutAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=LARA&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("hostSignon.do_3", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=LARA&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_SignOut",2);

	return 0;
}
# 5 "d:\\desktop_12182018\\pt-ferrari\\scripts\\lara\\lara_tc2\\\\combined_LARA_TC2.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "d:\\desktop_12182018\\pt-ferrari\\scripts\\lara\\lara_tc2\\\\combined_LARA_TC2.c" 2
