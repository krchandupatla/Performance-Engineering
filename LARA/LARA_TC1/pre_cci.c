# 1 "d:\\desktop_12182018\\pt-ferrari\\scripts\\lara\\lara_tc1\\\\combined_LARA_TC1.c"
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







 
 



















# 1 "d:\\desktop_12182018\\pt-ferrari\\scripts\\lara\\lara_tc1\\\\combined_LARA_TC1.c" 2

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

 
 
 

                               


 
 
 





















# 2 "d:\\desktop_12182018\\pt-ferrari\\scripts\\lara\\lara_tc1\\\\combined_LARA_TC1.c" 2

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



 
const char * const body_variable_1 = "Body=value(FirstEntryURL)=%2Fportlets%2Fcap%2Fcapsummary%2FCapTabSummary.do%3Fmode%3DtabSummary%26isRedirect%3Dfalse%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcap%2Fcapsummary%2FCapTabSummary.do%3Fmode%3DtabSummary%26isRedirect%3Dfalse%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=tabSummary&module=Building&itemName=&CurrentViewID=30046&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=30046&sessionIdFromWindow=UK8ep-LgXN3oRWC2C7mt6rVY&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=TABSUMMARY&expression_page_reload_after_submit_or_validate_failed=true&expression_portlet_to_be_populate=-2&expression_portlet_to_be_populate=-99999&valuetextarea999=%5B%7B%22values%22%3A%5B%7B%22Plan%20Requirements%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22ro"
		"wIndex%22%3A%221%22%7D%2C%22BCC%20Plan%20Review%20Number%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Plan%20Review%20Name%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22undefined%22%2C%22rowIndex%22%3A%221%22%7D%2C%22School%20Site%20Plan%20Review%20Number%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Building%20Use%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_BUILD%22%2C%22subgroup%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Payment%20Method%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22Credit%20Card%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Index%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22PCA%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%2"
		"2Object%20Code%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_BUILD%22%2C%22subgroup%22%3A%22PAYMENT%20METHOD%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Rough%2FAdditional%20Inspection%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Rough%2FAdditional%20Inspection%20Cost%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22100%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Rough%2FAdditional%20Inspection%20Fee%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Additional%20Inspection%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Additional%20Inspection%20Cost%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22100%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Additional%20Inspection%20Fee%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowInd"
		"ex%22%3A%221%22%7D%2C%22Certification%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Certification%20Cost%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%2250%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Certification%20Fee%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_BUILD%22%2C%22subgroup%22%3A%22EQUIPMENT%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Permit%20Expiration%20Date%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_BUILD%22%2C%22subgroup%22%3A%22PERMIT%20DATES%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Type%20of%20Improvement%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Estimated%20Project%20Cost%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%2"
		"2%7D%2C%22Alterations%2C%20Repairs%20and%20Additions%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Buildings%20Regulated%20by%20the%20Michigan%20Residential%20Code%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Will%20there%20be%20fire%20supression%3F%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Construction%20Type%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Housing%20Units%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Public%20Owned%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Basement%20-%20Existing%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Basement%20-%20Alterations%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%2"
		"2rowIndex%22%3A%221%22%7D%2C%22Basement%20-%20New%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%221st%20and%202nd%20Floor%20-%20Existing%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%221st%20and%202nd%20Floor%20-%20Alterations%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%221st%20and%202nd%20Floor%20-%20New%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%223rd%20and%2010th%20Floor%20-%20Existing%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%223rd%20and%2010th%20Floor%20-%20Alterations%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%223rd%20and%2010th%20Floor%20-%20New%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%2211th%20Floor%20and%20Abov"
		"e%20-%20Existing%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%2211th%20Floor%20and%20Above%20-%20Alterations%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%2211th%20Floor%20and%20Above%20-%20New%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Porch%2FDeck%2FGarage%20SQFT%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Total%20Aboveground%20SQFT%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Total%20Basement%20SQFT%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_BUILD%22%2C%22subgroup%22%3A%22BUILDING%20DATA%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Builders%20License%20Number%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0"
		"%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Expiration%20Date%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22FEIN%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Workers%20Comp%20Insurance%20Carrier%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Unemployment%20Insurance%20Agency%20Employer%20Account%20Number%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_BUILD%22%2C%22subgroup%22%3A%22CONTRACTOR%20INFO%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Are%20you%20applying%20as%20a%20homeowner%3F%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Are%20you%20applying%20as%20a%20licensed%20professional%3F%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Building%20Type%22%3A%7B%"
		"22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_BUILD%22%2C%22subgroup%22%3A%22GENERAL%20INFORMATION%22%2C%22templateType%22%3A%22Form%22%7D%5D&sourcetextarea999=%7B%22templateForms%22%3A%5B%7B%22groupName%22%3A%22BLD_BUILD%22%2C%22subgroups%22%3A%5B%7B%22displayName%22%3A%22GENERAL%20INFORMATION%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Are%20you%20applying%20as%20a%20homeowner%3F%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Are%20you%20applying%20as%20a%20homeowner%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A15%2C%22fieldTypeValue%22%3A9%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2"
		"BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Are%20you%20applying%20as%20a%20homeowner%3F%22%2C%22checkboxInd%22%3A%229%22%2C%22fieldTypeEnum%22%3A%22Checkbox%22%7D%2C%7B%22fieldName%22%3A%22Are%20you%20applying%20as%20a%20licensed%20professional%3F%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Are%20you%20applying%20as%20a%20licensed%20professional%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A9%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22check"
		"boxDesc%22%3A%22Are%20you%20applying%20as%20a%20licensed%20professional%3F%22%2C%22checkboxInd%22%3A%229%22%2C%22fieldTypeEnum%22%3A%22Checkbox%22%7D%2C%7B%22fieldName%22%3A%22Building%20Type%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Building%20Type%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Building%20Type%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2"
		"C%7B%22fieldName%22%3A%22Builders%20License%20Number%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Builders%20License%20Number%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3D%22%7D%2C%22checkboxDesc%22%3A%22Builders%20License%20Number%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Expiration%20Date%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Expiration%20Date%22%2C%22displayLen%22%3A0%2C%22d"
		"isplayOrder%22%3A60%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3D%22%7D%2C%22checkboxDesc%22%3A%22Expiration%20Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22FEIN%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22FEIN%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A70%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%"
		"3D%22%7D%2C%22checkboxDesc%22%3A%22FEIN%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Workers%20Comp%20Insurance%20Carrier%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Workers%20Comp%20Insurance%20Carrier%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A80%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3D%22%7D%2C%22checkboxDesc%22%3A%22Workers%20Comp%20Insurance%20Carrier%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Unemployment%20Insurance%20Agency%20Employer%"
		"20Account%20Number%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Unemployment%20Insurance%20Agency%20Employer%20Account%20Number%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A90%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3D%22%7D%2C%22checkboxDesc%22%3A%22Unemployment%20Insurance%20Agency%20Employer%20Account%20Number%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%5D%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Are%20you%20applying%20as%20a%20homeowner%3F%22%2C%22Are%20you%20applying%20as%20a%20licensed%20professional%"
		"3F%22%2C%22Building%20Type%22%2C%22Builders%20License%20Number%22%2C%22Expiration%20Date%22%2C%22FEIN%22%2C%22Workers%20Comp%20Insurance%20Carrier%22%2C%22Unemployment%20Insurance%20Agency%20Employer%20Account%20Number%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Plan%20Requirements%22%2C%22subgroupName%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Plan%20Requirements%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A5%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformat"
		"ion_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Plan%20Requirements%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22BCC%20Plan%20Review%20Number%22%2C%22subgroupName%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22BCC%20Plan%20Review%20Number%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22BCC%20Plan%20Review%20Number%22%2C%22c"
		"hecklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Plan%20Review%20Name%22%2C%22subgroupName%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22undefined%22%2C%22displayFieldName%22%3A%22Plan%20Review%20Name%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A15%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Plan%20Review%20Name%22%2C%22checklistComment%22%3A%22undefined%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22"
		"fieldName%22%3A%22School%20Site%20Plan%20Review%20Number%22%2C%22subgroupName%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22School%20Site%20Plan%20Review%20Number%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22School%20Site%20Plan%20Review%20Number%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Residential%20Building%20Type%22%2C%22subgroupName%22%3A%22P"
		"LAN%20REVIEW%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Residential%20Building%20Type%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3D%22%7D%2C%22checkboxDesc%22%3A%22Residential%20Building%20Type%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Building%20Use%22%2C%22subgroupName%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Building%20Use%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%"
		"22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Building%20Use%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%5D%2C%22subgroupName%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Plan%20Requirements%22%2C%22BCC%20Plan%20Review%20Number%22%2C%22Plan%20Review%20Name%22%2C%22School%20Site%20Plan%20Review%20Number%22%2C%22Residential%20Building%20Type%22%2C%22Building%20Use%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22BUILDING%20DATA%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Type%20of%20Impro"
		"vement%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Type%20of%20Improvement%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Type%20of%20Improvement%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Estimated%20Project%20Cost%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%"
		"22%2C%22displayFieldName%22%3A%22Estimated%20Project%20Cost%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A11%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Estimated%20Project%20Cost%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Alterations%2C%20Repairs%20and%20Additions%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Alterations%2C%20Repairs%20and%20Additions%22%2C%22displayLen%22%3A0%2C%22dis"
		"playOrder%22%3A13%2C%22fieldTypeValue%22%3A6%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Alterations%2C%20Repairs%20and%20Additions%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%226%22%2C%22fieldTypeEnum%22%3A%22Textarea%22%7D%2C%7B%22fieldName%22%3A%22Buildings%20Regulated%20by%20the%20Michigan%20Residential%20Code%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Buildings%20Regulated%20by%20the%20Michigan%20Residential%20Code%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A15%2C%22fieldType"
		"Value%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Buildings%20Regulated%20by%20the%20Michigan%20Residential%20Code%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Will%20there%20be%20fire%20supression%3F%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Will%20there%20be%20fire%20supression%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A17%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspec"
		"info%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Will%20there%20be%20fire%20supression%3F%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22Construction%20Type%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Construction%20Type%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleM"
		"ode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Construction%20Type%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Housing%20Units%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Housing%20Units%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A22%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%2"
		"2checkboxDesc%22%3A%22Housing%20Units%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Public%20Owned%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Public%20Owned%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A24%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Public%20Owned%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22Basement%20-%20Existing%22%2C%22subgroupName%22%3A%22BUILDING%20DATA"
		"%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Basement%20-%20Existing%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Basement%20-%20Existing%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Basement%20-%20Alterations%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Basement%20-%20Alter"
		"ations%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Basement%20-%20Alterations%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Basement%20-%20New%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Basement%20-%20New%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22lin"
		"k%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Basement%20-%20New%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%221st%20and%202nd%20Floor%20-%20Existing%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%221st%20and%202nd%20Floor%20-%20Existing%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A60%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26ser"
		"viceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%221st%20and%202nd%20Floor%20-%20Existing%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%221st%20and%202nd%20Floor%20-%20Alterations%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%221st%20and%202nd%20Floor%20-%20Alterations%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A70%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY"
		"%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%221st%20and%202nd%20Floor%20-%20Alterations%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%221st%20and%202nd%20Floor%20-%20New%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%221st%20and%202nd%20Floor%20-%20New%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A80%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building"
		"%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%221st%20and%202nd%20Floor%20-%20New%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%223rd%20and%2010th%20Floor%20-%20Existing%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%223rd%20and%2010th%20Floor%20-%20Existing%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A90%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%223rd%2"
		"0and%2010th%20Floor%20-%20Existing%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%223rd%20and%2010th%20Floor%20-%20Alterations%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%223rd%20and%2010th%20Floor%20-%20Alterations%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A100%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%223rd%20and%2010th%20Floor%20-%20Alterations%22%2C%22checklistComment%22%3A%22%C2%A0%C2"
		"%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%223rd%20and%2010th%20Floor%20-%20New%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%223rd%20and%2010th%20Floor%20-%20New%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A110%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%223rd%20and%2010th%20Floor%20-%20New%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%"
		"2211th%20Floor%20and%20Above%20-%20Existing%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%2211th%20Floor%20and%20Above%20-%20Existing%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A120%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%2211th%20Floor%20and%20Above%20-%20Existing%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%2211th%20Floor%20and%20Above%20-%20Alterations%22%2C%22subgroupName%22%3A%22BUIL"
		"DING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%2211th%20Floor%20and%20Above%20-%20Alterations%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A130%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%2211th%20Floor%20and%20Above%20-%20Alterations%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%2211th%20Floor%20and%20Above%20-%20New%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C"
		"2%A0%C2%A0%22%2C%22displayFieldName%22%3A%2211th%20Floor%20and%20Above%20-%20New%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A140%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%2211th%20Floor%20and%20Above%20-%20New%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Porch%2FDeck%2FGarage%20SQFT%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Porch%2FDeck%2FGarage%20SQFT%22%2C%22displayLen%22%3A0%2C%2"
		"2displayOrder%22%3A145%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Porch%2FDeck%2FGarage%20SQFT%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Total%20Aboveground%20SQFT%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Total%20Aboveground%20SQFT%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A150%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fport"
		"lets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Total%20Aboveground%20SQFT%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Total%20Basement%20SQFT%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Total%20Basement%20SQFT%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A155%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%"
		"26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Total%20Basement%20SQFT%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%5D%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Type%20of%20Improvement%22%2C%22Estimated%20Project%20Cost%22%2C%22Alterations%2C%20Repairs%20and%20Additions%22%2C%22Buildings%20Regulated%20by%20the%20Michigan%20Residential%20Code%22%2C%22Will%20there%20be%20fire%20supression%3F%22%2C%22Construction%20Type%22%2C%22Housing%20Units%22%2C%22Public%20Owned%22%2C%22Basement%20-%20Existing%22%2C%22Basement%20-%20Alterations%22%2C%22Basement%20-%20New%22%2C%221st%20and%202nd%20Floor%20-%20Existing%22%2C%221st%20and%202nd%20Floor%20-%20Alterations%22%2C%221st%20and%202nd%20Floor%20-%20New%22%2C"
		"%223rd%20and%2010th%20Floor%20-%20Existing%22%2C%223rd%20and%2010th%20Floor%20-%20Alterations%22%2C%223rd%20and%2010th%20Floor%20-%20New%22%2C%2211th%20Floor%20and%20Above%20-%20Existing%22%2C%2211th%20Floor%20and%20Above%20-%20Alterations%22%2C%2211th%20Floor%20and%20Above%20-%20New%22%2C%22Porch%2FDeck%2FGarage%20SQFT%22%2C%22Total%20Aboveground%20SQFT%22%2C%22Total%20Basement%20SQFT%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22CONTRACTOR%20INFO%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Builders%20License%20Number%22%2C%22subgroupName%22%3A%22CONTRACTOR%20INFO%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Builders%20License%20Number%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%2"
		"6ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Builders%20License%20Number%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Expiration%20Date%22%2C%22subgroupName%22%3A%22CONTRACTOR%20INFO%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Expiration%20Date%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_S"
		"PLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Expiration%20Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22FEIN%22%2C%22subgroupName%22%3A%22CONTRACTOR%20INFO%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22FEIN%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22FEIN%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%2"
		"21%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Workers%20Comp%20Insurance%20Carrier%22%2C%22subgroupName%22%3A%22CONTRACTOR%20INFO%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Workers%20Comp%20Insurance%20Carrier%20(or%20reason%20for%20exemption)%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Workers%20Comp%20Insurance%20Carrier%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%"
		"22%3A%22Unemployment%20Insurance%20Agency%20Employer%20Account%20Number%22%2C%22subgroupName%22%3A%22CONTRACTOR%20INFO%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22UIA%20Number%20(or%20reason%20for%20exemption)%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Unemployment%20Insurance%20Agency%20Employer%20Account%20Number%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%5D%2C%22subgroupName%22%3A%22CONTRACTOR%20INFO%22%"
		"2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Builders%20License%20Number%22%2C%22Expiration%20Date%22%2C%22FEIN%22%2C%22Workers%20Comp%20Insurance%20Carrier%20(or%20reason%20for%20exemption)%22%2C%22UIA%20Number%20(or%20reason%20for%20exemption)%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22PERMIT%20DATES%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Permit%20Expiration%20Date%22%2C%22subgroupName%22%3A%22PERMIT%20DATES%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Permit%20Expiration%20Date%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A2%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_"
		"SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Permit%20Expiration%20Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%5D%2C%22subgroupName%22%3A%22PERMIT%20DATES%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Permit%20Expiration%20Date%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22EQUIPMENT%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Rough%2FAdditional%20Inspection%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22%23%20of%20Items%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST"
		"%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Rough%2FAdditional%20Inspection%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Rough%2FAdditional%20Inspection%20Cost%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22100%22%2C%22displayFieldName%22%3A%22Fee%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2B"
		"Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Rough%2FAdditional%20Inspection%20Cost%22%2C%22checklistComment%22%3A%22100%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Rough%2FAdditional%20Inspection%20Fee%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Total%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A60%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Rough%2FAdditional%20Inspection%20Fee%22%2C%22checklis"
		"tComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Additional%20Inspection%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22%23%20of%20Items%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A70%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Additional%20Inspection%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Additional%20Inspec"
		"tion%20Cost%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22100%22%2C%22displayFieldName%22%3A%22Fee%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A80%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Additional%20Inspection%20Cost%22%2C%22checklistComment%22%3A%22100%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Additional%20Inspection%20Fee%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Tota"
		"l%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A90%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Additional%20Inspection%20Fee%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Certification%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22%23%20of%20Items%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A100%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fp"
		"ortlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Certification%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Certification%20Cost%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%2250%22%2C%22displayFieldName%22%3A%22Fee%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A110%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26"
		"singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Certification%20Cost%22%2C%22checklistComment%22%3A%2250%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Certification%20Fee%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Total%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A120%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%2"
		"2%3A%22Certification%20Fee%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Total%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Equipment%20Total%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A500%2C%22fieldTypeValue%22%3A8%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3D%22%7D%2C%22checkboxDesc%22%3A%22Total%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%228%22%2C%22fieldTypeEnum%22%3A%22Money%22%7D%5D%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22%23%20of%20Items%22%2C%22Fee%22%2C%22Total%22%2C%22%23%20of%20Items%22%2C%22"
		"Fee%22%2C%22Total%22%2C%22%23%20of%20Items%22%2C%22Fee%22%2C%22Total%22%2C%22Equipment%20Total%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22PAYMENT%20METHOD%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Payment%20Method%22%2C%22subgroupName%22%3A%22PAYMENT%20METHOD%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22Credit%20Card%22%2C%22displayFieldName%22%3A%22Payment%20Method%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Payment%20Method%22%2C%22checklistComment%22%3A%22Credit%20Card%22%2C%22c"
		"heckboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Index%22%2C%22subgroupName%22%3A%22PAYMENT%20METHOD%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Index%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Index%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22PCA%22%2C%22subgroupName%22%3A%22PAYMENT%20METHOD%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defa"
		"ultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22PCA%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22PCA%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Object%20Code%22%2C%22subgroupName%22%3A%22PAYMENT%20METHOD%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Object%20Code%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target"
		"%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Object%20Code%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%5D%2C%22subgroupName%22%3A%22PAYMENT%20METHOD%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Payment%20Method%22%2C%22Index%22%2C%22PCA%22%2C%22Object%20Code%22%5D%5D%2C%22rows%22%3Anull%7D%5D%2C%22templateType%22%3A%22Form%22%2C%22readOnly%22%3Atrue%7D%5D%2C%22templateTables%22%3A%5B%7B%22groupName%22%3A%22BLD_BUILD%22%2C%22subgroups%22%3A%5B%7B%22displayName%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22rows%22%3Anull%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7"
		"B%22fieldName%22%3A%22Environmental%20Control%22%2C%22subgroupName%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Environmental%20Control%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A5%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoTableForm.do%3Fmode%3Dlist%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26tableName%3DBLD_BUILD%3A%3AENVIRONMENTAL%2BCONTROL%2BAPPROVAL%22%2C%22target%22%3A%22_self%22%7D%2C%22checkboxDesc%22%3A%22Environmental%20Control%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Approved%22%2C%22subgroupName%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Approved%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atr"
		"ue%2C%22checkboxDesc%22%3A%22Approved%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Date%22%2C%22subgroupName%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Date%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A2%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Date%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22Number%22%2C%22subgroupName%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Number%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A4%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Number%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Environmental%20Assessment%20Done%20By%22%2C%22subgroupName%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22groupName%22%3A%22"
		"BLD_BUILD%22%2C%22displayFieldName%22%3A%22Environmental%20Assessment%20Done%20By%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Environmental%20Assessment%20Done%20By%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%5D%2C%22subgroupName%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22hasSelectCol%22%3Afalse%2C%22CSVData%22%3A%5B%5B%22Environmental%20Control%22%2C%22Approved%22%2C%22Date%22%2C%22Number%22%2C%22Environmental%20Assessment%20Done%20By%22%5D%5D%7D%2C%7B%22displayName%22%3A%22VIOLATIONS%22%2C%22rows%22%3Anull%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Code%20Section%22%2C%22subgroupName%22%3A%22VIOLATIONS%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Code%20Section%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfo"
		"TableForm.do%3Fmode%3Dlist%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26tableName%3DBLD_BUILD%3A%3AVIOLATIONS%22%2C%22target%22%3A%22_self%22%7D%2C%22checkboxDesc%22%3A%22Code%20Section%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Article%20Title%22%2C%22subgroupName%22%3A%22VIOLATIONS%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Article%20Title%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Article%20Title%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Inpector%20Notes%22%2C%22subgroupName%22%3A%22VIOLATIONS%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Inpector%20Notes%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Inpector%20Note"
		"s%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Location%201%22%2C%22subgroupName%22%3A%22VIOLATIONS%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Location%201%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Location%201%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Location%202%22%2C%22subgroupName%22%3A%22VIOLATIONS%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Location%202%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Location%202%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Inspection%20Date%22%2C%22subgroupName%22%3A%22VIOLATIONS%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Inspection%20Date%22%2C%22displayLen%22%3A-1%2"
		"C%22displayOrder%22%3A60%2C%22fieldTypeValue%22%3A2%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Inspection%20Date%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22Inspector%20Name%22%2C%22subgroupName%22%3A%22VIOLATIONS%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Inspector%20Name%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A70%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Inspector%20Name%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%5D%2C%22subgroupName%22%3A%22VIOLATIONS%22%2C%22hasSelectCol%22%3Afalse%2C%22CSVData%22%3A%5B%5B%22Code%20Section%22%2C%22Article%20Title%22%2C%22Inpector%20Notes%22%2C%22Location%201%22%2C%22Location%202%22%2C%22Inspection%20Date%22%2C%22Inspector%20Name%22%5D%5D%7D%2C%7B%22displayName%22%3A%22HISTORICAL%20DATA%22%2C%22rows%22%3Anull%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Field%20Name%22%2C%22subgroupName%22%3A"
		"%22HISTORICAL%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Field%20Name%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoTableForm.do%3Fmode%3Dlist%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26tableName%3DBLD_BUILD%3A%3AHISTORICAL%2BDATA%22%2C%22target%22%3A%22_self%22%7D%2C%22checkboxDesc%22%3A%22Field%20Name%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Field%20Data%22%2C%22subgroupName%22%3A%22HISTORICAL%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Field%20Data%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Field%20Data%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%5D%2C%22subgroupName%22%3A%2"
		"2HISTORICAL%20DATA%22%2C%22hasSelectCol%22%3Afalse%2C%22CSVData%22%3A%5B%5B%22Field%20Name%22%2C%22Field%20Data%22%5D%5D%7D%2C%7B%22displayName%22%3A%22GENERAL%20INFORMATION%22%2C%22rows%22%3Anull%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Related%20Records%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Related%20Records%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoTableForm.do%3Fmode%3Dlist%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DK3989%26fromTreeGrid%3DY%26tableName%3DBLD_BUILD%3A%3AGENERAL%2BINFORMATION%22%2C%22target%22%3A%22_self%22%7D%2C%22checkboxDesc%22%3A%22Related%20Records%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%5D%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22hasSelectCol%22%3Afalse%"
		"2C%22CSVData%22%3A%5B%5B%22Related%20Records%22%5D%5D%7D%5D%2C%22templateType%22%3A%22Table%22%2C%22readOnly%22%3Atrue%7D%5D%2C%22readOnly%22%3Atrue%2C%22UIUID%22%3A999%7D&layouttextarea999=%7B%22map%22%3A%7B%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%401st%20and%202nd%20Floor%20-%20New%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%221st%20and%202nd%20Floor%20-%20New%22%2C%22spanId%22%3A%2225_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Housing%20Units%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Housing%20Units%22%2C%22spanId%22%3A%2219_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%403rd%20and%2010th%20Floor%20-%20New%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%223rd%20and%2010th%20Floor%20-%20New%22%2C%22spanId%22%3A%2228_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Will%20there%20be%20fire%20supression%3F%22%3A%"
		"7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Will%20there%20be%20fire%20supression%3F%22%2C%22spanId%22%3A%2212_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PAYMENT%20METHOD%23%40%23%40Object%20Code%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Object%20Code%22%2C%22spanId%22%3A%2240_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Total%20Aboveground%20SQFT%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Total%20Aboveground%20SQFT%22%2C%22spanId%22%3A%2232_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Rough%2FAdditional%20Inspection%20Fee%22%3A%7B%22displayLen%22%3A82%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Total%22%2C%22spanId%22%3A%2243_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PAYMENT%20METHOD%23%40%23%40Index%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Index%22%2C%22spanId%22%3A%2238_layout_mark_span%22%"
		"7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Basement%20-%20Alterations%22%3A%7B%22displayLen%22%3A190%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Basement%20-%20Alterations%22%2C%22spanId%22%3A%2221_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40CONTRACTOR%20INFO%23%40%23%40FEIN%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22FEIN%22%2C%22spanId%22%3A%228_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Additional%20Inspection%20Cost%22%3A%7B%22displayLen%22%3A58%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Fee%22%2C%22spanId%22%3A%2245_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%4011th%20Floor%20and%20Above%20-%20Existing%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%2211th%20Floor%20and%20Above%20-%20Existing%22%2C%22spanId%22%3A%2229_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Type%20of%20Improvement%22%3A%7B%22displayLen%22%3A154%2C%22s"
		"tyleHeight%22%3A17%2C%22styleLabel%22%3A%22Type%20of%20Improvement%22%2C%22spanId%22%3A%2213_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Basement%20-%20Existing%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Basement%20-%20Existing%22%2C%22spanId%22%3A%2220_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Estimated%20Project%20Cost%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Estimated%20Project%20Cost%22%2C%22spanId%22%3A%2214_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%4011th%20Floor%20and%20Above%20-%20New%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%2211th%20Floor%20and%20Above%20-%20New%22%2C%22spanId%22%3A%2231_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%403rd%20and%2010th%20Floor%20-%20Existing%22%3A%7B%22displayLen%22%3A166%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%223rd%20and%2"
		"010th%20Floor%20-%20Existing%22%2C%22spanId%22%3A%2226_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Construction%20Type%22%3A%7B%22displayLen%22%3A310%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Construction%20Type%22%2C%22spanId%22%3A%2218_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%401st%20and%202nd%20Floor%20-%20Alterations%22%3A%7B%22displayLen%22%3A190%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%221st%20and%202nd%20Floor%20-%20Alterations%22%2C%22spanId%22%3A%2224_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Additional%20Inspection%20Fee%22%3A%7B%22displayLen%22%3A82%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Total%22%2C%22spanId%22%3A%2246_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%4011th%20Floor%20and%20Above%20-%20Alterations%22%3A%7B%22displayLen%22%3A190%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%2211th%20Floor%20and%20Above%20-%20Alterations%22%2C%22spanId%22%3A%2"
		"230_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Public%20Owned%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Public%20Owned%22%2C%22spanId%22%3A%2216_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Rough%2FAdditional%20Inspection%20Cost%22%3A%7B%22displayLen%22%3A58%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Fee%22%2C%22spanId%22%3A%2242_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Certification%20Fee%22%3A%7B%22displayLen%22%3A82%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Total%22%2C%22spanId%22%3A%2249_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PERMIT%20DATES%23%40%23%40Permit%20Expiration%20Date%22%3A%7B%22displayLen%22%3A153%2C%22styleHeight%22%3A18%2C%22styleLabel%22%3A%22Permit%20Expiration%20Date%22%2C%22spanId%22%3A%2236_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40CONTRACTOR%20INFO%23%40%23%40Expiration%20Date%22%3A%7B%22displayLen%22%3A153%2C%22styleHeight%22%3A18%"
		"2C%22styleLabel%22%3A%22Expiration%20Date%22%2C%22spanId%22%3A%2210_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Buildings%20Regulated%20by%20the%20Michigan%20Residential%20Code%22%3A%7B%22displayLen%22%3A310%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Buildings%20Regulated%20by%20the%20Michigan%20Residential%20Code%22%2C%22spanId%22%3A%2215_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Porch%2FDeck%2FGarage%20SQFT%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Porch%2FDeck%2FGarage%20SQFT%22%2C%22spanId%22%3A%2234_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Certification%22%3A%7B%22displayLen%22%3A58%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22%23%20of%20Items%22%2C%22spanId%22%3A%2247_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%403rd%20and%2010th%20Floor%20-%20Alterations%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A"
		"%223rd%20and%2010th%20Floor%20-%20Alterations%22%2C%22spanId%22%3A%2227_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PLAN%20REVIEW%20INFORMATION%23%40%23%40School%20Site%20Plan%20Review%20Number%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22School%20Site%20Plan%20Review%20Number%22%2C%22spanId%22%3A%221_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Alterations%2C%20Repairs%20and%20Additions%22%3A%7B%22displayLen%22%3A382%2C%22styleHeight%22%3A68%2C%22styleLabel%22%3A%22Alterations%2C%20Repairs%20and%20Additions%22%2C%22spanId%22%3A%2235_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Certification%20Cost%22%3A%7B%22displayLen%22%3A58%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Fee%22%2C%22spanId%22%3A%2248_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Total%20Basement%20SQFT%22%3A%7B%22displayLen%22%3A190%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Total%20Basement%20SQFT%22%2C%2"
		"2spanId%22%3A%2233_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%401st%20and%202nd%20Floor%20-%20Existing%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%221st%20and%202nd%20Floor%20-%20Existing%22%2C%22spanId%22%3A%2223_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40GENERAL%20INFORMATION%23%40%23%40Are%20you%20applying%20as%20a%20homeowner%3F%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Are%20you%20applying%20as%20a%20homeowner%3F%22%2C%22spanId%22%3A%224_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PAYMENT%20METHOD%23%40%23%40PCA%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22PCA%22%2C%22spanId%22%3A%2239_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PAYMENT%20METHOD%23%40%23%40Payment%20Method%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Payment%20Method%22%2C%22spanId%22%3A%2237_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PLAN%20RE"
		"VIEW%20INFORMATION%23%40%23%40Plan%20Review%20Name%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Plan%20Review%20Name%22%2C%22spanId%22%3A%223_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PLAN%20REVIEW%20INFORMATION%23%40%23%40BCC%20Plan%20Review%20Number%22%3A%7B%22displayLen%22%3A190%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22BCC%20Plan%20Review%20Number%22%2C%22spanId%22%3A%222_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40CONTRACTOR%20INFO%23%40%23%40Workers%20Comp%20Insurance%20Carrier%22%3A%7B%22displayLen%22%3A190%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Workers%20Comp%20Insurance%20Carrier%20(or%20reason%20for%20exemption)%22%2C%22spanId%22%3A%226_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Rough%2FAdditional%20Inspection%22%3A%7B%22displayLen%22%3A58%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22%23%20of%20Items%22%2C%22spanId%22%3A%2241_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PLAN%20REVIEW%20INFORMATION%23"
		"%40%23%40Plan%20Requirements%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Plan%20Requirements%22%2C%22spanId%22%3A%220_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Basement%20-%20New%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Basement%20-%20New%22%2C%22spanId%22%3A%2222_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Additional%20Inspection%22%3A%7B%22displayLen%22%3A58%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22%23%20of%20Items%22%2C%22spanId%22%3A%2244_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40GENERAL%20INFORMATION%23%40%23%40Building%20Type%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Building%20Type%22%2C%22spanId%22%3A%2211_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40GENERAL%20INFORMATION%23%40%23%40Are%20you%20applying%20as%20a%20licensed%20professional%3F%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel"
		"%22%3A%22Are%20you%20applying%20as%20a%20licensed%20professional%3F%22%2C%22spanId%22%3A%225_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40CONTRACTOR%20INFO%23%40%23%40Builders%20License%20Number%22%3A%7B%22displayLen%22%3A190%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Builders%20License%20Number%22%2C%22spanId%22%3A%229_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40CONTRACTOR%20INFO%23%40%23%40Unemployment%20Insurance%20Agency%20Employer%20Account%20Number%22%3A%7B%22displayLen%22%3A346%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22UIA%20Number%20(or%20reason%20for%20exemption)%22%2C%22spanId%22%3A%227_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PLAN%20REVIEW%20INFORMATION%23%40%23%40Building%20Use%22%3A%7B%22displayLen%22%3A166%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Building%20Use%22%2C%22spanId%22%3A%2217_layout_mark_span%22%7D%7D%2C%22layouts%22%3A%5B%5D%2C%22layoutHtml%22%3A%22%3Ctable%3E%3Ctr%3E%3Ctd%20class%3D'portlet-form-field-label'%3E%3Cstrong%3EBuilding%20Permit%20G"
		"eneral%20Information%3C%2Fstrong%3E%3C%2Ftd%3E%3C%2Ftr%3E%3C%2Ftable%3E%3Ctable%20id%3D%5C%22customTaskSpecInfoTable%5C%22%20name%3D%5C%22customTaskSpecInfoTable%5C%22%20class%3D%5C%22AccelaMainTableVariant%5C%22%3E%3Ctr%3E%3CTH%3E%3Ctable%20cellSpacing%3D0%20cellPadding%3D0%3E%3Ctbody%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E"
		"%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%"
		"3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E"
		"%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wi"
		"dth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%"
		"3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wid"
		"th%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20"
		"height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20widt"
		"h%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20h"
		"eight%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2247%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CTABLE%20width%3D%5C%22100%25%5C%22%3E%3CTOBYD%3E%3CTR%3E%3CTD%3E%3CHR%20class%3D'common-hr-bord"
		"er'%3E%3C%2FTD%3E%3C%2FTR%3E%3C%2FTBODY%3E%3C%2FTABLE%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D"
		"12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2211%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3A%3Bfont-family%3AArial%5C%22%3EPlan%20Review%20Information%3C%2FLABEL%3E%3CLABEL%20style%3D%5C%22color%3A%235d5d5d%5C%22%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D1"
		"2%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height"
		"%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12"
		"%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%"
		"3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%"
		"20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'0_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ct"
		"d%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2F"
		"td%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12"
		"%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%"
		"3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd"
		"%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'1_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2216%5C%22%20rowspan%3D%5C%"
		"223%5C%22%3E%3Cspan%20id%3D'2_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'3_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20hei"
		"ght%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2247%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CTABLE%20width%3D%5C%22100%25%5C%"
		"22%3E%3CTOBYD%3E%3CTR%3E%3CTD%3E%3CHR%20class%3D'common-hr-border'%3E%3C%2FTD%3E%3C%2FTR%3E%3C%2FTBODY%3E%3C%2FTABLE%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2211%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3A%3Bfont-family%3AArial%5C%22%3EConstruction%20Information%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%"
		"20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D"
		"12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%2"
		"0width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D1"
		"2%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'4_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'5_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3"
		"Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%"
		"2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D"
		"12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20"
		"height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D1"
		"2%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2F"
		"td%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2216%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'6_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2229%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'7_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D"
		"12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3"
		"E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heig"
		"ht%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E"
		"%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'8_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2216%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'9_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%224%5C%22%3E%3Cspan%20id%3D'10_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3"
		"D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%"
		"20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd"
		"%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ft"
		"r%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2247%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CTABLE%20width%3D%5C%22100%25%5C%22%3E%3CTOBYD%3E%3CTR%3E%3CTD%3E%3CHR%20class%3D'common-hr-border'%3E%3C%2FTD%3E%3C%2FTR%3E%3C%2FTBODY%3E%3C%2FTABLE%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3"
		"C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%229%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3A%3Bfont-family%3AArial%5C%22%3EBuilding%20Information%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C"
		"td%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width"
		"%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ct"
		"d%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%"
		"3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%22"
		"3%5C%22%3E%3Cspan%20id%3D'11_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'12_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd"
		"%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3"
		"E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%"
		"3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E"
		"%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heigh"
		"t%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%"
		"3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E"
		"%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'13_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'14_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2226%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'15_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%"
		"3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12"
		"%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%"
		"20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'16_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'17_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2226%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'18_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%"
		"3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3"
		"Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'19_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%2"
		"0width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D1"
		"2%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20"
		"width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12"
		"%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20w"
		"idth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%"
		"20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wi"
		"dth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%2"
		"0height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D"
		"12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'20_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2216%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'21_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'22_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D1"
		"2%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20"
		"width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heigh"
		"t%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%"
		"3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E"
		"%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'23_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2216%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'24_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'25_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%"
		"3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd"
		"%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%"
		"20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D"
		"12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'26_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'27_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'28_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C"
		"td%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2"
		"Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20widt"
		"h%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20h"
		"eight%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12"
		"%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'29_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2216%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'30_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'31_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%"
		"20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wi"
		"dth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%"
		"3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3"
		"Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'32_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2216%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'33_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'34_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E"
		"%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heigh"
		"t%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%"
		"3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20"
		"width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12"
		"%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2232%5C%22%20rowspan%3D%5C%227%5C%22%3E%3Cspan%20id%3D'35_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20he"
		"ight%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%"
		"3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd"
		"%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3"
		"D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%"
		"20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd"
		"%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3"
		"E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heig"
		"ht%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2248%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CTABLE%20width%3D%5C%22100%25%5C%22%3E%3CTOBYD%3E%3CTR%3E%3CTD%3E%3CHR%20class%3D'common-hr-border'"
		"%3E%3C%2FTD%3E%3C%2FTR%3E%3C%2FTBODY%3E%3C%2FTABLE%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E"
		"%3Ctd%20colspan%3D%5C%2210%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3A%3Bfont-family%3AArial%5C%22%3EPermit%20Expiration%20Date%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heigh"
		"t%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%"
		"3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height"
		"%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3"
		"C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%224%5C%22%3E%3Cspan%20id%3D'36_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%"
		"20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd"
		"%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%2"
		"0width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%"
		"3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20"
		"width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20w"
		"idth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2225%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CTABLE%20width%3D%5C%22100%25%5C%22%3E%3CTOBYD%3E%3CTR%3E%3CTD%3E%3CHR%20class%3D'common-hr-border'%3E%3C%2FTD%3E%3C%2FTR%3E%3C%2FTBODY%3E%3C%2FTABLE%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20widt"
		"h%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20h"
		"eight%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width"
		"%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'37_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'38_layout_mark_span'%3E%3C%2Fapsn"
		"%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%"
		"3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20hei"
		"ght%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3"
		"E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heig"
		"ht%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E"
		"%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'39_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'40_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12"
		"%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20w"
		"idth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%"
		"20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wi"
		"dth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2248%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CTABLE%20width%3D%5C%22100%25%5C%22%3E%3CTOBYD%3E%3CTR%3E%3CTD%3E%3CHR%20class%3D'common-hr-border'%3E%3C%2FTD%3E%3C%2FTR%3E%3C%2FTBODY%3E%3C%2FTABLE%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width"
		"%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%225%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3Argb(102%2C%20102%2C%20102)%3Bfont-fami"
		"ly%3AArial%5C%22%3EEquipment%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C"
		"td%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width"
		"%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ct"
		"d%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%"
		"3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd"
		"%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3"
		"D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heig"
		"ht%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D"
		"12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heigh"
		"t%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%"
		"3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height"
		"%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3"
		"C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%"
		"3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%225%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'41_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%225%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'42_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%227%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'43_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3"
		"C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%228%5C"
		"%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3Argb(51%2C%2051%2C%2051)%3Bfont-family%3AArial%5C%22%3ERough%20Inspection%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2"
		"Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D1"
		"2%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2F"
		"td%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12"
		"%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%"
		"3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%225%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'44_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%225%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'45_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%227%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'46_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%"
		"20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3Argb(51%2C%2051%2C%2051)%3Bfont-family%3AArial%5C%22%3EAdditional%20Inspection%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%"
		"2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D"
		"12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20"
		"height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D1"
		"2%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2F"
		"td%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12"
		"%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%225%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'47_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%225%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'48_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%227%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'49_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2F"
		"td%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%228%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3Argb(51%2C%2051%2C%2051)%3Bfont-family%3AArial%5C%22%3ECertification%20Fee%3C%2FLABEL%3E%3CLABEL%20style%3D%5C%22color%3A%235d5d5d%5C%22%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%"
		"3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3"
		"D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3C%2Ftbody%3E%3C%2Ftable%3E"
		"%3C%2FTH%3E%3C%2Ftr%3E%3C%2Ftable%3E%3C%2FLABEL%3E%22%7D&uiuid=999&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22VIOLATIONS%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22HISTORICAL%20DATA%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22GENERAL%20INFORMATION%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=TABSUMMARY&mode=execute" ;


# 8 "globals.h" 2



 
 


# 3 "d:\\desktop_12182018\\pt-ferrari\\scripts\\lara\\lara_tc1\\\\combined_LARA_TC1.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "d:\\desktop_12182018\\pt-ferrari\\scripts\\lara\\lara_tc1\\\\combined_LARA_TC1.c" 2

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

	lr_think_time(13);

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

	lr_think_time(7);
    web_add_header("AppD_Header", "LARA_Login");
	lr_start_transaction("LARA_Login");

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

	web_url("session.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_Login",2);

	lr_think_time(13);
	web_add_header("AppD_Header", "LARA_TC1_01_Click_Records");
	lr_start_transaction("LARA_TC1_01_Click_Records");

	web_url("session.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(4);

	web_url("session.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("myCAPDetailPortlet.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("LARA_TC1_01_Click_Records",2);

	lr_think_time(6);
    web_add_header("AppD_Header", "LARA_TC1_02_Click_Search");
	lr_start_transaction("LARA_TC1_02_Click_Search");

	web_url("session.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("capSearch.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("blank.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("formAjaxUtil.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/formAjaxUtil.do?portlet_language=en_US&attriKey=capSearchForm&staffName=value(capDetailModel*asgnStaff)&userType=1&dept=&mode=getStaffsByDept", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_TC1_02_Click_Search",2);

	lr_think_time(4);
   
	lr_start_transaction("LARA_TC1_03_Search_Record");
    web_add_header("AppD_Header", "LARA_TC1_03_Search_Record");
	web_url("session.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"LAST");

 





	web_reg_save_param_ex(
		"ParamName=Param_ID3",
		"LB/IC=ID3=",
		"RB/IC=&requireNotice",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/capSearch.do*",
		"LAST");

	web_submit_data("capSearch.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Building", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=TRANSACTION_TOKEN_KEY_FOR_CAPSEARCHFORM", "Value=97d1129c25bbe7d04bb8c251679d37a1", "ENDITEM", 
		"Name=value(FirstEntryURL)", "Value=/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", "ENDITEM", 
		"Name=value(CurrentEntryURL)", "Value=/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", "ENDITEM", 
		"Name=portlet_language", "Value=en_US", "ENDITEM", 
		"Name=refresh_target", "Value=", "ENDITEM", 
		"Name=refresh_url", "Value=", "ENDITEM", 
		"Name=buttonName", "Value=", "ENDITEM", 
		"Name=modeName", "Value=search", "ENDITEM", 
		"Name=module", "Value=Building", "ENDITEM", 
		"Name=accelasubmitbuttonname", "Value=submit", "ENDITEM", 
		"Name=itemName", "Value=", "ENDITEM", 
		"Name=CurrentViewID", "Value=115", "ENDITEM", 
		"Name=exceptionLogID", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=value(portlet_soundex)", "Value=off", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=115", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=UK8ep-LgXN3oRWC2C7mt6rVY", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=action", "Value=", "ENDITEM", 
		"Name=mode", "Value=submit", "ENDITEM", 
		"Name=isSearchedFlag", "Value=Y", "ENDITEM", 
		"Name=value(clear)", "Value=", "ENDITEM", 
		"Name=value(isFromAdmin)", "Value=", "ENDITEM", 
		"Name=formSearchPage", "Value=Y", "ENDITEM", 
		"Name=value(supportMulAgencySearch)", "Value=Y", "ENDITEM", 
		"Name=selectAgencies", "Value=", "ENDITEM", 
		"Name=selectModules", "Value=", "ENDITEM", 
		"Name=value(capModel*altID)", "Value=BLDG18-153945", "ENDITEM", 
		"Name=value(capContactModel*internalUserFlag)", "Value=", "ENDITEM", 
		"Name=value(setDetailsModel*setMemberStatus)", "Value=", "ENDITEM", 
		"Name=value(setDetailsModel*setMemberStatusDate)", "Value=", "ENDITEM", 
		"Name=value(capID)", "Value=", "ENDITEM", 
		"Name=value(capModel*capStatus)", "Value=", "ENDITEM", 
		"Name=value(b1ExpirationModel*expStatus)", "Value=", "ENDITEM", 
		"Name=value(search_range_b1ExpirationModel*expDate)", "Value=", "ENDITEM", 
		"Name=date(search_range_from_b1ExpirationModel*expDate)", "Value=", "ENDITEM", 
		"Name=date(search_range_to_b1ExpirationModel*expDate)", "Value=", "ENDITEM", 
		"Name=value(srLevel)", "Value=", "ENDITEM", 
		"Name=value(capGroupIndex)", "Value=", "ENDITEM", 
		"Name=value(capTypeModel*group)", "Value=", "ENDITEM", 
		"Name=value(capTypeModel*type)", "Value=", "ENDITEM", 
		"Name=value(capTypeModel*subType)", "Value=", "ENDITEM", 
		"Name=value(capTypeModel*category)", "Value=", "ENDITEM", 
		"Name=value(capTypeModel)", "Value=null/null/null/null", "ENDITEM", 
		"Name=date(capModel*fileDate)", "Value=", "ENDITEM", 
		"Name=date(capModel*endFileDate)", "Value={Date}", "ENDITEM", 
		"Name=value(capContactModel*email)", "Value=", "ENDITEM", 
		"Name=value(addressModel*houseNumberRangeStart)", "Value=", "ENDITEM", 
		"Name=value(addressModel*houseNumberRangeEnd)", "Value=", "ENDITEM", 
		"Name=value(search_range_from_addressModel*houseNumberStart)", "Value=", "ENDITEM", 
		"Name=value(search_range_to_addressModel*houseNumberStart)", "Value=", "ENDITEM", 
		"Name=value(search_range_addressModel*houseNumberStart)", "Value=", "ENDITEM", 
		"Name=value(addressModel*streetDirection)", "Value=", "ENDITEM", 
		"Name=value(addressModel*streetName)", "Value=", "ENDITEM", 
		"Name=value(addressModel*streetSuffix)", "Value=", "ENDITEM", 
		"Name=date(capDetailModel*firstIssuedDate)", "Value=", "ENDITEM", 
		"Name=date(capDetailModel*endFirstIssuedDate)", "Value=", "ENDITEM", 
		"Name=value(capModel*createdByACA)", "Value=", "ENDITEM", 
		"Name=value(capModel*specialText)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*asgnDept)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*asgnDept)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*asgnStaff)", "Value=", "ENDITEM", 
		"Name=value(search_range_from_addressModel*houseNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(search_range_to_addressModel*houseNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(search_range_addressModel*houseNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*inspectorName)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*contactType)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*businessName)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*fullName)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*inspectorId)", "Value=", "ENDITEM", 
		"Name=value(addressModel*city)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*firstName)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*lastName)", "Value=", "ENDITEM", 
		"Name=value(licenseProfessionalModel*licensenbr)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*addressLine1)", "Value=", "ENDITEM", 
		"Name=value(taskSpecInfoModel*checkboxDesc)", "Value=", "ENDITEM", 
		"Name=value(capOwnerModel*ownerFullName)", "Value=", "ENDITEM", 
		"Name=value(capParcelModel*parcelNumber)", "Value=", "ENDITEM", 
		"Name=value(addressModel*addressLine1)", "Value=", "ENDITEM", 
		"Name=value(taskSpecInfoModel*checklistComment)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*maskedSsn)", "Value=", "ENDITEM", 
		"Name=value(maskformat_capContactModel*maskedSsn)", "Value=AAA-AA-AAAA", "ENDITEM", 
		"Name=value(capContactModel*fein)", "Value=", "ENDITEM", 
		"Name=value(maskformat_capContactModel*fein)", "Value=", "ENDITEM", 
		"Name=value(licenseProfessionalModel*businessLicense)", "Value=", "ENDITEM", 
		"Name=value(addressModel*zip)", "Value=", "ENDITEM", 
		"Name=value(sectionTownShipRangeModel*townShip)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*city)", "Value=", "ENDITEM", 
		"Name=value(taskItemModel*taskDescription)", "Value=", "ENDITEM", 
		"Name=value(taskItemModel*disposition)", "Value=", "ENDITEM", 
		"Name=date(taskItemModel*statusDate)", "Value=", "ENDITEM", 
		"Name=date(taskItemModel*statusEndDate)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*userID)", "Value=", "ENDITEM", 
		"Name=value(appSpecInfoModel*checkboxDesc)", "Value=", "ENDITEM", 
		"Name=value(appSpecInfoModel*checklistComment)", "Value=", "ENDITEM", 
		"Name=value(capModel*receiptNumber)", "Value=", "ENDITEM", 
		"Name=value(capModel*checkNbr)", "Value=", "ENDITEM", 
		"Name=date(capDetailModel*closedDate)", "Value=", "ENDITEM", 
		"Name=date(capDetailModel*endClosedDate)", "Value=", "ENDITEM", 
		"Name=isSearchASIForm", "Value=Y", "ENDITEM", 
		"Name=value(mode)", "Value=search", "ENDITEM", 
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(capContactModel*maskedSsn)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"},\"value(capContactModel*fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"}}}", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("LARA_TC1_03_Search_Record",2);

	lr_think_time(5);
    web_add_header("AppD_Header", "LARA_TC1_04_Record_Details");
	lr_start_transaction("LARA_TC1_04_Record_Details");

	web_url("session.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("CapTabSummary.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Building",
		"Snapshot=t24.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("ajax.do",
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t25.inf",
		"Mode=HTML",
		"ITEMDATA",
		"LAST");

	web_submit_data("empty.jsp_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("blank.jsp_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t27.inf",
		"Mode=HTML",
		"LAST");

	web_custom_request("tabRecordCount.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t28.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t29.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("search.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/x-json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t30.inf",
		"Mode=HTML",
		"Body=categoryName=Portlet - Expression",
		"LAST");

	web_custom_request("expression.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t31.inf",
		"Mode=HTML",
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22VIOLATIONS%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22HISTORICAL%20DATA%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22GENERAL%20INFORMATION%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=TABSUMMARY&isReload=false&module=Building&capType=Building%2FBuilding%2FNA%2FNA",
		"LAST");

	web_custom_request("expression.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t32.inf",
		"Mode=HTML",
		body_variable_1,
		"LAST");

	lr_end_transaction("LARA_TC1_04_Record_Details",2);

	lr_think_time(7);
    web_add_header("AppD_Header", "LARA_TC1_05_Record_Click_Record");
	lr_start_transaction("LARA_TC1_05_Record_Click_Record");

	web_url("session.do_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_10",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t34.inf",
		"Mode=HTML",
		"LAST");

	web_url("capDetail.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t35.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("empty.jsp_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("search.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		"LAST");

	web_custom_request("tabRecordCount.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building",
		"Snapshot=t38.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_4",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building",
		"Snapshot=t39.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_submit_data("expression.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=argumentPKs", "Value=[{\"portletID\":112,\"viewKey1\":\"\",\"viewKey2\":\"\",\"viewKey3\":\"\"}]", "ENDITEM", 
		"Name=expressionPageType", "Value=SINGLEPORTLET", "ENDITEM", 
		"Name=isReload", "Value=false", "ENDITEM", 
		"Name=module", "Value=Building", "ENDITEM", 
		"Name=capType", "Value=Building/Building/NA/NA", "ENDITEM", 
		"LAST");

	web_custom_request("expression.do_4",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building",
		"Snapshot=t41.inf",
		"Mode=HTML",
		"Body=value(FirstEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmode%3Dview%26isRedirect%3Dfalse%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmode%3Dview%26isRedirect%3Dfalse%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Building&itemName=&CurrentViewID=112&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=112&sessionIdFromWindow=UK8ep-LgXN3oRWC2C7mt6rVY&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=112&expression_portlet_to_be_populate=-99999&expressionPageType=SINGLEPORTLET&expression_page_reload_after_submit_or_validate_failed=true&value(capID*ID1)=18EST&value(capID*ID2)=00000&value(capID*ID3)={Param_ID3}&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capDetailModel*creatorDeptAlias)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailM"
		"odel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=BLDG18-153945&value(jobValue)=450%2C000.00&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=9992.0&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=&value(capModel*reportedTime)=&value(capDetailModel*pmScheduleSeq)=&value(capModel*createdByACA)=N&date(capDetailModel*trackStartDate)=&date(capDetailModel*estimatedDueDate)=&value(capDetailModel*inPossessionTime)=&value(capDetailModel*overallApplicationTime)=&value(capDetailModel*estProdUnits)=1.0&value(capDetailModel*actualProdUnits)=1.0&value(capDetailModel*estCostPerUnit)=&value(capDetail"
		"Model*costPerUnit)=9992.0&value(capDetailModel*estJobCost)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=N&value(capDetailModel*misdemeanorFlag)=N&value(capDetailModel*offnWitnessedFlag)=N&value(capDetailModel*dfndtSignatureFlag)=N&value(capDetailModel*bookingFlag)=N&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capModel*initiatedProduct)=RESTAPI&value(capDetailModel*undistributedCost)=0.00&value(capDetailModel*url)=&value(capModel*certificationApplied)=&date(capModel*certificationDate)=&value(capDetailModel*generatedByCloning)=&value(capModel*pendingValidation)=&date(capModel*fileDate)={Date_URL}&value(c"
		"apModel*capStatus)=Invoice&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=PT%20Regression%20Test%20Application&value(capWorkDescriptionModel*description)=PT%20Regression%20Test%20Application%20Description&value(capDetailModel*totalFee)=0.00&value(capDetailModel*totalFee)=0.00&value(capDetailModel*totalPay)=0.00&value(capDetailModel*totalPay)=0.00&value(capDetailModel*balance)=0.00&value(capDetailModel*balance)=0.00&value(capDetailModel*asgnDept)=&value(capDetailModel*asgnStaff)=&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A112%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&mode=execute",
		"LAST");

	lr_end_transaction("LARA_TC1_05_Record_Click_Record",2);
    web_add_header("AppD_Header", "LARA_TC1_06_Record_SaveRecord");
	lr_start_transaction("LARA_TC1_06_Record_SaveRecord");

	web_url("session.do_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("dataList.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/ams/asset/dataList.do?mode=checkAssetStatus&from=capByEdit&module=Building",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building",
		"Snapshot=t43.inf",
		"Mode=HTML",
		"Body=value(FirstEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmode%3Dview%26isRedirect%3Dfalse%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmode%3Dview%26isRedirect%3Dfalse%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=112&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=112&sessionIdFromWindow=UK8ep-LgXN3oRWC2C7mt6rVY&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=112&expression_portlet_to_be_populate=-99999&expressionPageType=SINGLEPORTLET&expression_page_reload_after_submit_or_validate_failed=true&value(mode)=edit&value(capID*ID1)=18EST&value(capID*ID2)=00000&value(capID*ID3)={Param_ID3}&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capDetailModel*creatorDeptAlias)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date("
		"capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=BLDG18-153945&value(jobValue)=450%2C000.00&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=9992.0&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=&value(capModel*reportedTime)=&value(capDetailModel*pmScheduleSeq)=&value(capModel*createdByACA)=N&date(capDetailModel*trackStartDate)=&date(capDetailModel*estimatedDueDate)=&value(capDetailModel*inPossessionTime)=&value(capDetailModel*overallApplicationTime)=&value(capDetailModel*estProdUnits)=1.0&value(capDetailModel*actualProdUnits)=1.0&value(capDet"
		"ailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=9992.0&value(capDetailModel*estJobCost)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=N&value(capDetailModel*misdemeanorFlag)=N&value(capDetailModel*offnWitnessedFlag)=N&value(capDetailModel*dfndtSignatureFlag)=N&value(capDetailModel*bookingFlag)=N&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capModel*initiatedProduct)=RESTAPI&value(capDetailModel*undistributedCost)=0.00&value(capDetailModel*url)=&value(capModel*certificationApplied)=&date(capModel*certificationDate)=&value(capDetailModel*generatedByCloning)=&value(capModel*pendingValidation)=&date("
		"capModel*fileDate)={Date_URL}&value(capModel*capStatus)=Invoice&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=PT%20Regression%20Test%20Application&value(capWorkDescriptionModel*description)=PT%20Regression%20Test%20Application%20Description&value(capDetailModel*totalFee)=0.00&value(capDetailModel*totalFee)=0.00&value(capDetailModel*totalPay)=0.00&value(capDetailModel*totalPay)=0.00&value(capDetailModel*balance)=0.00&value(capDetailModel*balance)=0.00&value(capDetailModel*asgnDept)=&value(capDetailModel*asgnStaff)=&",
		"LAST");

	web_custom_request("expression.do_5",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building",
		"Snapshot=t44.inf",
		"Mode=HTML",
		"Body=value(FirstEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmode%3Dview%26isRedirect%3Dfalse%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmode%3Dview%26isRedirect%3Dfalse%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Building&itemName=&CurrentViewID=112&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=112&sessionIdFromWindow=UK8ep-LgXN3oRWC2C7mt6rVY&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=112&expression_portlet_to_be_populate=-99999&expressionPageType=SINGLEPORTLET&expression_page_reload_after_submit_or_validate_failed=true&value(capID*ID1)=18EST&value(capID*ID2)=00000&value(capID*ID3)={Param_ID3}&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capDetailModel*creatorDeptAlias)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailM"
		"odel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=BLDG18-153945&value(jobValue)=450%2C000.00&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=9992.0&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=&value(capModel*reportedTime)=&value(capDetailModel*pmScheduleSeq)=&value(capModel*createdByACA)=N&date(capDetailModel*trackStartDate)=&date(capDetailModel*estimatedDueDate)=&value(capDetailModel*inPossessionTime)=&value(capDetailModel*overallApplicationTime)=&value(capDetailModel*estProdUnits)=1.0&value(capDetailModel*actualProdUnits)=1.0&value(capDetailModel*estCostPerUnit)=&value(capDetail"
		"Model*costPerUnit)=9992.0&value(capDetailModel*estJobCost)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=N&value(capDetailModel*misdemeanorFlag)=N&value(capDetailModel*offnWitnessedFlag)=N&value(capDetailModel*dfndtSignatureFlag)=N&value(capDetailModel*bookingFlag)=N&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capModel*initiatedProduct)=RESTAPI&value(capDetailModel*undistributedCost)=0.00&value(capDetailModel*url)=&value(capModel*certificationApplied)=&date(capModel*certificationDate)=&value(capDetailModel*generatedByCloning)=&value(capModel*pendingValidation)=&date(capModel*fileDate)={Date_URL}&value(c"
		"apModel*capStatus)=Invoice&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=PT%20Regression%20Test%20Application&value(capWorkDescriptionModel*description)=PT%20Regression%20Test%20Application%20Description&value(capDetailModel*totalFee)=0.00&value(capDetailModel*totalFee)=0.00&value(capDetailModel*totalPay)=0.00&value(capDetailModel*totalPay)=0.00&value(capDetailModel*balance)=0.00&value(capDetailModel*balance)=0.00&value(capDetailModel*asgnDept)=&value(capDetailModel*asgnStaff)=&accelasubmitbuttonname=Previous&callBack=window.expression.__doExpressionSubmitCallBack(0)&variableKey=onSubmit&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A112%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&mode=execute",
		"LAST");

	lr_think_time(9);

	web_url("session.do_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_TC1_06_Record_SaveRecord",2);

	web_submit_data("capDetail.do_2",
		"Action=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building",
		"Snapshot=t47.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=value(FirstEntryURL)", "Value=/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=capList", "ENDITEM",
		"Name=refresh_url", "Value=", "ENDITEM",
		"Name=buttonName", "Value=", "ENDITEM",
		"Name=modeName", "Value=view", "ENDITEM",
		"Name=module", "Value=Building", "ENDITEM",
		"Name=accelasubmitbuttonname", "Value=editSave", "ENDITEM",
		"Name=itemName", "Value=", "ENDITEM",
		"Name=CurrentViewID", "Value=112", "ENDITEM",
		"Name=exceptionLogID", "Value=", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=objectName", "Value=", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value=112", "ENDITEM",
		"Name=sessionIdFromWindow", "Value=UK8ep-LgXN3oRWC2C7mt6rVY", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=112", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM",
		"Name=expressionPageType", "Value=SINGLEPORTLET", "ENDITEM",
		"Name=expression_page_reload_after_submit_or_validate_failed", "Value=true", "ENDITEM",
		"Name=value(mode)", "Value=edit", "ENDITEM",
		"Name=value(capID*ID1)", "Value=18EST", "ENDITEM",
		"Name=value(capID*ID2)", "Value=00000", "ENDITEM",
		"Name=value(capID*ID3)", "Value={Param_ID3}", "ENDITEM",
		"Name=value(capType)", "Value=Building/Building/NA/NA", "ENDITEM",
		"Name=value(capID)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*shortNotes)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*creatorDeptAlias)", "Value=", "ENDITEM",
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
		"Name=value(capDetailModel*priority)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*reportedChannel)", "Value=Call Center", "ENDITEM",
		"Name=value(capDetailModel*severity)", "Value=", "ENDITEM",
		"Name=value(capModel*altID)", "Value=BLDG18-153945", "ENDITEM",
		"Name=value(jobValue)", "Value=450,000.00", "ENDITEM",
		"Name=value(blank1)", "Value=", "ENDITEM",
		"Name=value(blank2)", "Value=", "ENDITEM",
		"Name=value(blank3)", "Value=", "ENDITEM",
		"Name=value(blank4)", "Value=", "ENDITEM",
		"Name=value(blank5)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*totalJobCost)", "Value=9992.0", "ENDITEM",
		"Name=value(b1ExpirationModel*expStatus)", "Value=", "ENDITEM",
		"Name=date(b1ExpirationModel*expDate)", "Value=", "ENDITEM",
		"Name=date(capModel*reportedDate)", "Value=", "ENDITEM",
		"Name=value(capModel*reportedTime)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*pmScheduleSeq)", "Value=", "ENDITEM",
		"Name=value(capModel*createdByACA)", "Value=N", "ENDITEM",
		"Name=date(capDetailModel*trackStartDate)", "Value=", "ENDITEM",
		"Name=date(capDetailModel*estimatedDueDate)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*inPossessionTime)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*overallApplicationTime)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*estProdUnits)", "Value=1.0", "ENDITEM",
		"Name=value(capDetailModel*actualProdUnits)", "Value=1.0", "ENDITEM",
		"Name=value(capDetailModel*estCostPerUnit)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*costPerUnit)", "Value=9992.0", "ENDITEM",
		"Name=value(capDetailModel*estJobCost)", "Value=", "ENDITEM",
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
		"Name=value(capDetailModel*infractionFlag)", "Value=N", "ENDITEM",
		"Name=value(capDetailModel*misdemeanorFlag)", "Value=N", "ENDITEM",
		"Name=value(capDetailModel*offnWitnessedFlag)", "Value=N", "ENDITEM",
		"Name=value(capDetailModel*dfndtSignatureFlag)", "Value=N", "ENDITEM",
		"Name=value(capDetailModel*bookingFlag)", "Value=N", "ENDITEM",
		"Name=value(capDetailModel*statusReason)", "Value=", "ENDITEM",
		"Name=date(capDetailModel*firstIssuedDate)", "Value=", "ENDITEM",
		"Name=value(capModel*initiatedProduct)", "Value=RESTAPI", "ENDITEM",
		"Name=value(capDetailModel*undistributedCost)", "Value=0.00", "ENDITEM",
		"Name=value(capDetailModel*url)", "Value=", "ENDITEM",
		"Name=value(capModel*certificationApplied)", "Value=", "ENDITEM",
		"Name=date(capModel*certificationDate)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*generatedByCloning)", "Value=", "ENDITEM",
		"Name=value(capModel*pendingValidation)", "Value=", "ENDITEM",
		"Name=date(capModel*fileDate)", "Value=08/23/2018", "ENDITEM",
		"Name=value(capModel*capStatus)", "Value=Invoice", "ENDITEM",
		"Name=value(capType)", "Value=Building/Building/NA/NA", "ENDITEM",
		"Name=value(capModel*specialText)", "Value=PT Regression Test Application", "ENDITEM",
		"Name=value(capWorkDescriptionModel*description)", "Value=PT Regression Test Application Description", "ENDITEM",
		"Name=value(capDetailModel*totalFee)", "Value=0.00", "ENDITEM",
		"Name=value(capDetailModel*totalFee)", "Value=0.00", "ENDITEM",
		"Name=value(capDetailModel*totalPay)", "Value=0.00", "ENDITEM",
		"Name=value(capDetailModel*totalPay)", "Value=0.00", "ENDITEM",
		"Name=value(capDetailModel*balance)", "Value=0.00", "ENDITEM",
		"Name=value(capDetailModel*balance)", "Value=0.00", "ENDITEM",
		"Name=value(capDetailModel*asgnDept)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*asgnStaff)", "Value=", "ENDITEM",
		"LAST");

	web_submit_data("empty.jsp_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("search.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		"LAST");

	web_custom_request("tabRecordCount.do_5",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building",
		"Snapshot=t50.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_6",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building",
		"Snapshot=t51.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_submit_data("expression.do_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=argumentPKs", "Value=[{\"portletID\":112,\"viewKey1\":\"\",\"viewKey2\":\"\",\"viewKey3\":\"\"}]", "ENDITEM", 
		"Name=expressionPageType", "Value=SINGLEPORTLET", "ENDITEM", 
		"Name=isReload", "Value=true", "ENDITEM", 
		"Name=module", "Value=Building", "ENDITEM", 
		"Name=capType", "Value=Building/Building/NA/NA", "ENDITEM", 
		"LAST");

	web_custom_request("expression.do_7",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building",
		"Snapshot=t53.inf",
		"Mode=HTML",
		"Body=value(FirstEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmode%3Dview%26isRedirect%3Dfalse%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=editSave&modeName=&module=Building&itemName=&CurrentViewID=112&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=112&sessionIdFromWindow=UK8ep-LgXN3oRWC2C7mt6rVY&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=112&expression_portlet_to_be_populate=-99999&expressionPageType=SINGLEPORTLET&expression_page_reload_after_submit_or_validate_failed=true&value(capID*ID1)=18EST&value(capID*ID2)=00000&value(capID*ID3)={Param_ID3}&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capDetailModel*creatorDeptAlias)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDet"
		"ailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=BLDG18-153945&value(jobValue)=450%2C000.00&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=9992.0&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=&value(capModel*reportedTime)=&value(capDetailModel*pmScheduleSeq)=&value(capModel*createdByACA)=N&date(capDetailModel*trackStartDate)=&date(capDetailModel*estimatedDueDate)=&value(capDetailModel*inPossessionTime)=&value(capDetailModel*overallApplicationTime)=&value(capDetailModel*estProdUnits)=1.0&value(capDetailModel*actualProdUnits)=1.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=9992.0&value"
		"(capDetailModel*estJobCost)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=N&value(capDetailModel*misdemeanorFlag)=N&value(capDetailModel*offnWitnessedFlag)=N&value(capDetailModel*dfndtSignatureFlag)=N&value(capDetailModel*bookingFlag)=N&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capModel*initiatedProduct)=RESTAPI&value(capDetailModel*undistributedCost)=0.00&value(capDetailModel*url)=&value(capModel*certificationApplied)=&date(capModel*certificationDate)=&value(capDetailModel*generatedByCloning)=&value(capModel*pendingValidation)=&date(capModel*fileDate)={Date_URL}&value(capModel*capStatus)=Invoice&valu"
		"e(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=PT%20Regression%20Test%20Application&value(capWorkDescriptionModel*description)=PT%20Regression%20Test%20Application%20Description&value(capDetailModel*totalFee)=0.00&value(capDetailModel*totalFee)=0.00&value(capDetailModel*totalPay)=0.00&value(capDetailModel*totalPay)=0.00&value(capDetailModel*balance)=0.00&value(capDetailModel*balance)=0.00&value(capDetailModel*asgnDept)=&value(capDetailModel*asgnStaff)=&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A112%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&mode=execute",
		"LAST");

	web_url("session.do_14", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(4);

	web_url("session.do_15", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(4);
    web_add_header("AppD_Header", "LARA_TC1_07_Click_AppHistory");
	lr_start_transaction("LARA_TC1_07_Click_AppHistory");

	web_url("session.do_16", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("capStatusHistory.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
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

	web_custom_request("tabRecordCount.do_7",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building",
		"Snapshot=t59.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_8",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building",
		"Snapshot=t60.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_url("session.do_17", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_TC1_07_Click_AppHistory",2);
    web_add_header("AppD_Header", "LARA_TC1_08_Click_WorkFlow");
	lr_start_transaction("LARA_TC1_08_Click_WorkFlow");

	web_url("session.do_18", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("workflowStatusList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("text.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"AANewUX_WorkFlow_Assigned\":\"\",\"AANewUX_WorkFlow_Started\":\"\",\"AANewUX_WorkFlow_Save\":\"\",\"AANewUX_WorkFlow_Cancel\":\"\",\"AANewUX_WorkFlow_ShowAll\":\"\",\"AANewUX_WorkFlow_By\":\"\",\"AANewUX_WorkFlow_Due\":\"\",\"AANewUX_WorkFlow_Subtask\":\"\",\"AANewUX_WorkFlow_NewAdhocTask\":\"\",\"AANewUX_WorkFlow_AdditionalAdhocTask\":\"\",\"AANewUX_WorkFlow_WorkflowTask\":\"\",\"AANewUX_WorkFlow_BucketCompleted\":\"\",\"AANewUX_WorkFlow_BucketInprogress\":\"\",\""
		"AANewUX_WorkFlow_BucketUpNext\":\"\",\"AANewUX_WorkFlow_TaskInactive\":\"\",\"AANewUX_WorkFlow_TaskInprogress\":\"\",\"AANewUX_WorkFlow_TaskComplete\":\"\",\"AANewUX_WorkFlow_ViewHistory\":\"\",\"AANewUX_WorkFlow_ViewWorkflowDesign\":\"\",\"AANewUX_WorkFlow_IncludeAddPage\":\"\",\"AANewUX_WorkFlow_PageOf\":\"\",\"AANewUX_WorkFlow_PageCompleted\":\"\",\"AANewUX_WorkFlow_WorkflowDesign\":\"\",\"AANewUX_Designer_NewDesigner\":\"\",\"AANewUX_Designer_OldDesigner\":\"\",\"AANewUX_Designer_Preview\":\""
		"\",\"AANewUX_Designer_Text\":\"\",\"AANewUX_Designer_Controls\":\"\",\"AANewUX_Designer_NoCtlAvailable\":\"\",\"AANewUX_Designer_Drag\":\"\",\"AANewUX_Designer_Select\":\"\",\"AANewUX_Designer_Properties\":\"\",\"AANewUX_Designer_Ok\":\"\",\"AANewUX_Designer_Label\":\"\",\"AANewUX_Designer_Url\":\"\",\"AANewUX_Designer_Save\":\"\",\"AANewUX_Designer_Cancel\":\"\",\"AANewUX_Designer_DynamicLabelText\":\"\",\"AANewUX_CheckList_SaveAll\":\"\"}", 
		"LAST");

	web_url("workflow.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/workflow.do?mode=viewWorkFlowDesignPermission&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("workflow.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/workflow.do?mode=getTasks&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
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

	web_url("session.do_19", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("tabRecordCount.do_9",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building",
		"Snapshot=t70.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_10",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building",
		"Snapshot=t71.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("LARA_TC1_08_Click_WorkFlow",2);

	lr_think_time(7);
    web_add_header("AppD_Header", "LARA_SignOut");
	lr_start_transaction("LARA_SignOut");

	web_url("session.do_20", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("signoff.do", 
		"URL=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("portal", 
		"Action=https://av-pt-ferrari.accela.com/jetspeed/portal?action=JClearCookie", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("logoutAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=LARA&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("hostSignon.do_3", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=LARA&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_SignOut",2);

	return 0;
}
# 5 "d:\\desktop_12182018\\pt-ferrari\\scripts\\lara\\lara_tc1\\\\combined_LARA_TC1.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "d:\\desktop_12182018\\pt-ferrari\\scripts\\lara\\lara_tc1\\\\combined_LARA_TC1.c" 2

