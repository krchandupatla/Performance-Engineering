# 1 "d:\\desktop_12182018\\pt-ferrari\\scripts\\milara\\milara_tc1\\\\combined_MILARA_TC1.c"
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







 
 



















# 1 "d:\\desktop_12182018\\pt-ferrari\\scripts\\milara\\milara_tc1\\\\combined_MILARA_TC1.c" 2

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

 
 
 

                               


 
 
 





















# 2 "d:\\desktop_12182018\\pt-ferrari\\scripts\\milara\\milara_tc1\\\\combined_MILARA_TC1.c" 2

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

# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2


 
 


# 3 "d:\\desktop_12182018\\pt-ferrari\\scripts\\milara\\milara_tc1\\\\combined_MILARA_TC1.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "d:\\desktop_12182018\\pt-ferrari\\scripts\\milara\\milara_tc1\\\\combined_MILARA_TC1.c" 2

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

	lr_think_time(23);

	web_url("plugins_win.json", 
		"URL=https://www.gstatic.com/chrome/config/plugins_2/plugins_win.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(49);
    web_add_header("AppD_Header", "MILARA_Login");
	lr_start_transaction("MILARA_Login");

	web_custom_request("loginAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?requestType=checkWebSSOAdapter&servProvCode=MILARA", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		"LAST");

	lr_think_time(6);

	web_submit_data("hostSignon.do_2",
		"Action=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true",
		"Snapshot=t5.inf",
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
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("text.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t8.inf", 
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
		"Snapshot=t9.inf", 
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
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("MILARA_Login",2);

	lr_think_time(17);
    web_add_header("AppD_Header", "MILARA_TC1_01_Click_Records");
	lr_start_transaction("MILARA_TC1_01_Click_Records");

	web_url("session.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b08e1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("myCAPDetailPortlet.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("View the content of this inline frame", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Licenses&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
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

	lr_end_transaction("MILARA_TC1_01_Click_Records",2);
    web_add_header("AppD_Header", "MILARA_TC1_02_Click_Search");
	lr_start_transaction("MILARA_TC1_02_Click_Search");

	web_url("session.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b08e1&module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Licenses&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("capSearch.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Licenses&isGeneralCAP=Y", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Licenses&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("blank.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Licenses&isGeneralCAP=Y", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("formAjaxUtil.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/formAjaxUtil.do?portlet_language=en_US&attriKey=capSearchForm&staffName=value(capDetailModel*asgnStaff)&userType=1&dept=&mode=getStaffsByDept", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Licenses&isGeneralCAP=Y", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Licenses&isGeneralCAP=Y", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&getMsg=Y", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Licenses&isGeneralCAP=Y", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("MILARA_TC1_02_Click_Search",2);
    web_add_header("AppD_Header", "MILARA_TC1_03_Search_Record");
	lr_start_transaction("MILARA_TC1_03_Search_Record");

	web_url("session.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b08e1&module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Licenses&isGeneralCAP=Y", 
		"Snapshot=t25.inf", 
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
		"Action=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Licenses", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Licenses&isGeneralCAP=Y", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=TRANSACTION_TOKEN_KEY_FOR_CAPSEARCHFORM", "Value=5f3cfd0928ee94b711639f3ae302be9a", "ENDITEM", 
		"Name=value(FirstEntryURL)", "Value=/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Licenses&isGeneralCAP=Y", "ENDITEM", 
		"Name=value(CurrentEntryURL)", "Value=/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Licenses&isGeneralCAP=Y", "ENDITEM", 
		"Name=portlet_language", "Value=en_US", "ENDITEM", 
		"Name=refresh_target", "Value=", "ENDITEM", 
		"Name=refresh_url", "Value=", "ENDITEM", 
		"Name=buttonName", "Value=", "ENDITEM", 
		"Name=modeName", "Value=search", "ENDITEM", 
		"Name=module", "Value=Licenses", "ENDITEM", 
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
		"Name=sessionIdFromWindow", "Value=lhOsuUEfqJyiZwzad17LYo1S", "ENDITEM", 
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
		"Name=value(capModel*altID)", "Value=4704342632", "ENDITEM", 
		"Name=value(capContactModel*userID)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*internalUserFlag)", "Value=", "ENDITEM", 
		"Name=value(setDetailsModel*setMemberStatus)", "Value=", "ENDITEM", 
		"Name=value(setDetailsModel*setMemberStatusDate)", "Value=", "ENDITEM", 
		"Name=value(srLevel)", "Value=", "ENDITEM", 
		"Name=value(capGroupIndex)", "Value=", "ENDITEM", 
		"Name=value(capTypeModel*group)", "Value=", "ENDITEM", 
		"Name=value(capTypeModel*type)", "Value=", "ENDITEM", 
		"Name=value(capTypeModel*subType)", "Value=", "ENDITEM", 
		"Name=value(capTypeModel*category)", "Value=", "ENDITEM", 
		"Name=value(capTypeModel)", "Value=null/null/null/null", "ENDITEM", 
		"Name=value(capModel*capStatus)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*asgnDept)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*asgnDept)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*asgnStaff)", "Value=", "ENDITEM", 
		"Name=date(capModel*fileDate)", "Value=08/28/2016", "ENDITEM", 
		"Name=date(capModel*endFileDate)", "Value=08/28/2018", "ENDITEM", 
		"Name=date(capDetailModel*firstIssuedDate)", "Value=", "ENDITEM", 
		"Name=date(capDetailModel*endFirstIssuedDate)", "Value=", "ENDITEM", 
		"Name=value(search_range_b1ExpirationModel*expDate)", "Value=", "ENDITEM", 
		"Name=date(search_range_from_b1ExpirationModel*expDate)", "Value=", "ENDITEM", 
		"Name=date(search_range_to_b1ExpirationModel*expDate)", "Value=", "ENDITEM", 
		"Name=value(b1ExpirationModel*expStatus)", "Value=", "ENDITEM", 
		"Name=value(historyTaskItemModel*taskDescription)", "Value=", "ENDITEM", 
		"Name=value(licenseProfessionalModel*licensetype)", "Value=", "ENDITEM", 
		"Name=value(licenseProfessionalModel*licensenbr)", "Value=", "ENDITEM", 
		"Name=value(licenseProfessionalModel*contactFirstName)", "Value=", "ENDITEM", 
		"Name=value(licenseProfessionalModel*contactLastName)", "Value=", "ENDITEM", 
		"Name=date(licenseProfessionalModel*birthDate)", "Value=", "ENDITEM", 
		"Name=date(licenseProfessionalModel*endBirthDate)", "Value=", "ENDITEM", 
		"Name=value(licenseProfessionalModel*businessName)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*contactType)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*firstName)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*lastName)", "Value=", "ENDITEM", 
		"Name=date(capContactModel*birthDate)", "Value=", "ENDITEM", 
		"Name=date(capContactModel*endBirthDate)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*businessName)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*email)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*addressLine1)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*countryCode)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*city)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*state)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*zip_disp)", "Value=", "ENDITEM", 
		"Name=value(capContactModel*zip)", "Value=", "ENDITEM", 
		"Name=value(taskItemModel*taskDescription)", "Value=", "ENDITEM", 
		"Name=value(taskItemModel*disposition)", "Value=", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("MILARA_TC1_03_Search_Record",2);

	lr_think_time(4);
    web_add_header("AppD_Header", "MILARA_TC1_04_Record_Details");
	lr_start_transaction("MILARA_TC1_04_Record_Details");

	web_url("session.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b08e1&module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Licenses", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("CapTabSummary.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Licenses&isFromCapList=true&isGeneralCAP=Y",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Licenses",
		"Snapshot=t29.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("ajax.do",
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Licenses&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t30.inf",
		"Mode=HTML",
		"ITEMDATA",
		"LAST");

	web_submit_data("empty.jsp_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("blank.jsp_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Licenses&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t32.inf",
		"Mode=HTML",
		"LAST");

	web_custom_request("tabRecordCount.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Licenses&ID1=REC18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3Ccount"
		"ID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Licenses&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t33.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("search.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/x-json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Licenses&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t34.inf",
		"Mode=HTML",
		"Body=categoryName=Portlet - Expression",
		"LAST");

	web_custom_request("expression.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Licenses&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t35.inf",
		"Mode=HTML",
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22NURSE%20SPECIALTY%20CERTIFICATION%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22NURSE%20SPECIALTY%20HISTORY%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22NOTIFICATION%20GENERATOR%20LIC%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=TABSUMMARY&isReload=false&module=Licenses&capType=Licenses%2FNursing%2FRegistered%20Nurse%2FLicense",
		"LAST");

	web_custom_request("expression.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Licenses&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t36.inf",
		"Mode=HTML",
		"Body=value(FirstEntryURL)=%2Fportlets%2Fcap%2Fcapsummary%2FCapTabSummary.do%3Fmode%3DtabSummary%26isRedirect%3Dfalse%26module%3DLicenses&value(CurrentEntryURL)=%2Fportlets%2Fcap%2Fcapsummary%2FCapTabSummary.do%3Fmode%3DtabSummary%26isRedirect%3Dfalse%26module%3DLicenses&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=tabSummary&module=Licenses&itemName=&CurrentViewID=30046&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=30046&sessionIdFromWindow=lhOsuUEfqJyiZwzad17LYo1S&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=TABSUMMARY&expression_page_reload_after_submit_or_validate_failed=true&expression_portlet_to_be_populate=-2&expression_portlet_to_be_populate=-99999&valuetextarea999=%5B%7B%22values%22%3A%5B%7B%22Notification%20Template%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22MWBC%20Letter%22%2C"
		"%22rowIndex%22%3A%221%22%7D%2C%22Contact%20Type%22%3A%7B%22valueSeq%22%3A1%2C%22value%22%3A%22Applicant%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Status%22%3A%7B%22valueSeq%22%3A2%2C%22value%22%3A%22Sent%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Date%20Sent%22%3A%7B%22valueSeq%22%3A3%2C%22value%22%3A%2204%2F11%2F2018%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Comments%22%3A%7B%22valueSeq%22%3A4%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22NUR_RN_L%22%2C%22subgroup%22%3A%22NOTIFICATION%20GENERATOR%20LIC%22%2C%22templateType%22%3A%22Table%22%7D%2C%7B%22values%22%3A%5B%7B%22Obtained%20by%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22Endorsement%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22NUR_RN_L%22%2C%22subgroup%22%3A%22OBTAINDED%20BY%20METHOD%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Print%20Audit%20Number%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22NCSBN%20ID%22%3A%7B%22valueSeq%22%3A%"
		"22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22NUR_RN_L%22%2C%22subgroup%22%3A%22INTERNAL%20USE%20ONLY%20L2K%20DATA%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Next%20Notification%20Date%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Next%20Notification%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22NUR_RN_L%22%2C%22subgroup%22%3A%22RENEWAL%20INFO%22%2C%22templateType%22%3A%22Form%22%7D%5D&sourcetextarea999=%7B%22templateForms%22%3A%5B%7B%22groupName%22%3A%22NUR_RN_L%22%2C%22subgroups%22%3A%5B%7B%22displayName%22%3A%22Obtained%20By%20Method%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Obtained%20by%22%2C%22subgroupName%22%3A%22OBTAINDED%20BY%20METHOD%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22defaultValue%22%3A%22Endorsement%22%2C%22displayFieldName%22%3A%22Obtained%20by%22%2C%22di"
		"splayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DLicenses%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Obtained%20by%22%2C%22checklistComment%22%3A%22Endorsement%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%5D%2C%22subgroupName%22%3A%22OBTAINDED%20BY%20METHOD%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Obtained%20by%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22RENEWAL%20INFO%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Next%20Notification%20Date%22%2C%22subgroupName%22%3A%22RENEWAL%20INFO%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Next%20Notification%20Date%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A"
		"10%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DLicenses%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Next%20Notification%20Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22Next%20Notification%22%2C%22subgroupName%22%3A%22RENEWAL%20INFO%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Next%20Notification%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DLicenses%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY"
		"%22%7D%2C%22checkboxDesc%22%3A%22Next%20Notification%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%5D%2C%22subgroupName%22%3A%22RENEWAL%20INFO%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Next%20Notification%20Date%22%2C%22Next%20Notification%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22Internal%20Use%20Only%20L2K%20Data%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Print%20Audit%20Number%22%2C%22subgroupName%22%3A%22INTERNAL%20USE%20ONLY%20L2K%20DATA%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Print%20Audit%20Number%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DLicenses%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%"
		"3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22Print%20Audit%20Number%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22NCSBN%20ID%22%2C%22subgroupName%22%3A%22INTERNAL%20USE%20ONLY%20L2K%20DATA%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22NCSBN%20ID%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DLicenses%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%22%7D%2C%22checkboxDesc%22%3A%22NCSBN%20ID%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%5D%2C%22subgroupName%22%3A%22INTERNAL%20USE%20ONLY%20L2K%20DATA%22%2C%22hasSelectCol%22%3Atru"
		"e%2C%22CSVData%22%3A%5B%5B%22Print%20Audit%20Number%22%2C%22NCSBN%20ID%22%5D%5D%2C%22rows%22%3Anull%7D%5D%2C%22templateType%22%3A%22Form%22%2C%22readOnly%22%3Atrue%7D%5D%2C%22templateTables%22%3A%5B%7B%22groupName%22%3A%22NUR_RN_L%22%2C%22subgroups%22%3A%5B%7B%22displayName%22%3A%22Nurse%20Specialty%20Certification%22%2C%22rows%22%3Anull%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Specialty%20Certification%22%2C%22subgroupName%22%3A%22NURSE%20SPECIALTY%20CERTIFICATION%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22displayFieldName%22%3A%22Specialty%20Certification%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A5%2C%22fieldTypeValue%22%3A5%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoTableForm.do%3Fmode%3Dlist%26module%3DLicenses%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%26tableName%3DNUR_RN_L%3A%3ANURSE%2BSPECIALTY%2BCERTIFICATION%22%2C%22target%22%3A%22_self%22%7D%2C%22check"
		"boxDesc%22%3A%22Specialty%20Certification%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Status%22%2C%22subgroupName%22%3A%22NURSE%20SPECIALTY%20CERTIFICATION%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22displayFieldName%22%3A%22Status%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A5%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Status%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Issue%20Date%22%2C%22subgroupName%22%3A%22NURSE%20SPECIALTY%20CERTIFICATION%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22displayFieldName%22%3A%22Issue%20Date%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A15%2C%22fieldTypeValue%22%3A2%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Issue%20Date%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22Expiration%20Date%22%2C%22subgroupName%22%3A%22NURSE%20SPECIALTY%20CERTIFICATION%22%2C%22groupName%"
		"22%3A%22NUR_RN_L%22%2C%22displayFieldName%22%3A%22Expiration%20Date%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A2%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Expiration%20Date%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%5D%2C%22subgroupName%22%3A%22NURSE%20SPECIALTY%20CERTIFICATION%22%2C%22hasSelectCol%22%3Afalse%2C%22CSVData%22%3A%5B%5B%22Specialty%20Certification%22%2C%22Status%22%2C%22Issue%20Date%22%2C%22Expiration%20Date%22%5D%5D%7D%2C%7B%22displayName%22%3A%22Nurse%20Specialty%20History%22%2C%22rows%22%3Anull%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Specialty%20Certification%22%2C%22subgroupName%22%3A%22NURSE%20SPECIALTY%20HISTORY%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22displayFieldName%22%3A%22Specialty%20Certification%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A5%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoTableForm"
		".do%3Fmode%3Dlist%26module%3DLicenses%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%26tableName%3DNUR_RN_L%3A%3ANURSE%2BSPECIALTY%2BHISTORY%22%2C%22target%22%3A%22_self%22%7D%2C%22checkboxDesc%22%3A%22Specialty%20Certification%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Date%22%2C%22subgroupName%22%3A%22NURSE%20SPECIALTY%20HISTORY%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22displayFieldName%22%3A%22Date%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A2%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Date%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22Specialty%20Status%22%2C%22subgroupName%22%3A%22NURSE%20SPECIALTY%20HISTORY%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22displayFieldName%22%3A%22Specialty%20Status%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A5%2C%22readOnly%22%3Atrue%2C%22che"
		"ckboxDesc%22%3A%22Specialty%20Status%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Change%20Reason%22%2C%22subgroupName%22%3A%22NURSE%20SPECIALTY%20HISTORY%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22displayFieldName%22%3A%22Change%20Reason%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A6%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Change%20Reason%22%2C%22checkboxInd%22%3A%226%22%2C%22fieldTypeEnum%22%3A%22Textarea%22%7D%5D%2C%22subgroupName%22%3A%22NURSE%20SPECIALTY%20HISTORY%22%2C%22hasSelectCol%22%3Afalse%2C%22CSVData%22%3A%5B%5B%22Specialty%20Certification%22%2C%22Date%22%2C%22Specialty%20Status%22%2C%22Change%20Reason%22%5D%5D%7D%2C%7B%22displayName%22%3A%22Notification%20Generator%22%2C%22rows%22%3Anull%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Notification%20Template%22%2C%22subgroupName%22%3A%22NOTIFICATION%20GENERATOR%20LIC%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22displayFieldName%"
		"22%3A%22Notification%20Template%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A5%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoTableForm.do%3Fmode%3Dlist%26module%3DLicenses%26serviceProviderCode%3DMILARA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D{Param_ID3}%26fromTreeGrid%3DY%26tableName%3DNUR_RN_L%3A%3ANOTIFICATION%2BGENERATOR%2BLIC%22%2C%22target%22%3A%22_self%22%7D%2C%22checkboxDesc%22%3A%22Notification%20Template%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Contact%20Type%22%2C%22subgroupName%22%3A%22NOTIFICATION%20GENERATOR%20LIC%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22displayFieldName%22%3A%22Contact%20Type%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A15%2C%22fieldTypeValue%22%3A5%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Contact%20Type%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Status%22%2C%22s"
		"ubgroupName%22%3A%22NOTIFICATION%20GENERATOR%20LIC%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22displayFieldName%22%3A%22Status%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A5%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Status%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Date%20Sent%22%2C%22subgroupName%22%3A%22NOTIFICATION%20GENERATOR%20LIC%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22displayFieldName%22%3A%22Date%20Sent%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A2%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Date%20Sent%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22Comments%22%2C%22subgroupName%22%3A%22NOTIFICATION%20GENERATOR%20LIC%22%2C%22groupName%22%3A%22NUR_RN_L%22%2C%22displayFieldName%22%3A%22Comments%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A6%2C%22readOnly%22%3Atrue%2C%22checkboxDesc"
		"%22%3A%22Comments%22%2C%22checkboxInd%22%3A%226%22%2C%22fieldTypeEnum%22%3A%22Textarea%22%7D%5D%2C%22subgroupName%22%3A%22NOTIFICATION%20GENERATOR%20LIC%22%2C%22hasSelectCol%22%3Afalse%2C%22CSVData%22%3A%5B%5B%22Notification%20Template%22%2C%22Contact%20Type%22%2C%22Status%22%2C%22Date%20Sent%22%2C%22Comments%22%5D%2C%5B%22MWBC%20Letter%22%2C%22Applicant%22%2C%22Sent%22%2C%2204%2F11%2F2018%22%2Cnull%5D%5D%7D%5D%2C%22templateType%22%3A%22Table%22%2C%22readOnly%22%3Atrue%7D%5D%2C%22readOnly%22%3Atrue%2C%22UIUID%22%3A999%7D&layouttextarea999=%7B%22map%22%3A%7B%7D%2C%22layouts%22%3A%5B%5D%2C%22layoutHtml%22%3A%22%22%7D&uiuid=999&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22NURSE%20SPECIALTY%20CERTIFICATION%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A"
		"%22NURSE%20SPECIALTY%20HISTORY%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22NOTIFICATION%20GENERATOR%20LIC%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=TABSUMMARY&mode=execute",
		"LAST");

	lr_end_transaction("MILARA_TC1_04_Record_Details",2);

	lr_think_time(4);
    web_add_header("AppD_Header", "MILARA_TC1_05_Click_Addtl_Info");
	lr_start_transaction("MILARA_TC1_05_Click_Addtl_Info");

	web_url("session.do_12",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b08e1&module=Licenses",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Licenses&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t40.inf",
		"Mode=HTML",
		"LAST");

	web_url("addtInfoForm.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/addtinfo/addtInfoForm.do?mode=view&module=Licenses",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILARA&ID1=REC18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Licenses&isFromCapList=true&isGeneralCAP=Y",
		"Snapshot=t41.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("empty.jsp_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Licenses&ID1=REC18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3Ccount"
		"ID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/addtinfo/addtInfoForm.do?mode=view&module=Licenses",
		"Snapshot=t43.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("MILARA_TC1_05_Click_Addtl_Info",2);

	lr_think_time(4);
    web_add_header("AppD_Header", "MILARA_TC1_06_Save_Addtl_Info");
	lr_start_transaction("MILARA_TC1_06_Save_Addtl_Info");

	web_url("session.do_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b08e1&module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/addtinfo/addtInfoForm.do?mode=view&module=Licenses", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("addtInfoForm.do_2",
		"Action=https://av-pt-ferrari.accela.com/portlets/addtinfo/addtInfoForm.do?module=Licenses",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/addtinfo/addtInfoForm.do?mode=view&module=Licenses",
		"Snapshot=t45.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=value(FirstEntryURL)", "Value=/portlets/addtinfo/addtInfoForm.do?mode=view&module=Licenses", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/addtinfo/addtInfoForm.do?mode=view&module=Licenses", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=", "ENDITEM",
		"Name=refresh_url", "Value=", "ENDITEM",
		"Name=buttonName", "Value=", "ENDITEM",
		"Name=modeName", "Value=view", "ENDITEM",
		"Name=module", "Value=Licenses", "ENDITEM",
		"Name=accelasubmitbuttonname", "Value=Save", "ENDITEM",
		"Name=itemName", "Value=", "ENDITEM",
		"Name=CurrentViewID", "Value=21031", "ENDITEM",
		"Name=exceptionLogID", "Value=", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=objectName", "Value=", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value=21031", "ENDITEM",
		"Name=sessionIdFromWindow", "Value=lhOsuUEfqJyiZwzad17LYo1S", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=value(capID*ID1)", "Value=REC18", "ENDITEM",
		"Name=value(capID*ID2)", "Value=00000", "ENDITEM",
		"Name=value(capID*ID3)", "Value={Param_ID3}", "ENDITEM",
		"Name=value(bValuatnModel*estimatedValue)", "Value=1", "ENDITEM",
		"Name=value(capDetailModel*buildingCount)", "Value=1", "ENDITEM",
		"Name=value(capDetailModel*houseCount)", "Value=1", "ENDITEM",
		"Name=value(capDetailModel*constTypeCode)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*publicOwned)", "Value=N", "ENDITEM",
		"LAST");

	web_url("EMSEMessage.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/addtinfo/addtInfoForm.do?module=Licenses", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Licenses&ID1=REC18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3Ccount"
		"ID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/addtinfo/addtInfoForm.do?module=Licenses",
		"Snapshot=t48.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_submit_data("empty.jsp_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Licenses", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_14", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b08e1&module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/addtinfo/addtInfoForm.do?module=Licenses", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("MILARA_TC1_06_Save_Addtl_Info",2);
    web_add_header("AppD_Header", "MILARA_TC1_07_Click_RecordHistory");
	lr_start_transaction("MILARA_TC1_07_Click_RecordHistory");

	web_url("session.do_15", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b08e1&module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/addtinfo/addtInfoForm.do?module=Licenses", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("recordActivityReport.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/communication/recordActivity/recordActivityReport.do?mode=list&module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/addtinfo/addtInfoForm.do?module=Licenses", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_4",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Licenses&ID1=REC18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3Ccount"
		"ID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/communication/recordActivity/recordActivityReport.do?mode=list&module=Licenses",
		"Snapshot=t54.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("MILARA_TC1_07_Click_RecordHistory",2);

	lr_think_time(4);
    web_add_header("AppD_Header", "MILARA_TC1_08_Click_WorkFlow");
	lr_start_transaction("MILARA_TC1_08_Click_WorkFlow");

	web_url("session.do_16", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b08e1&module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/communication/recordActivity/recordActivityReport.do?mode=list&module=Licenses", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("workflowStatusList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/communication/recordActivity/recordActivityReport.do?mode=list&module=Licenses", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("text.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Licenses", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"AANewUX_WorkFlow_Assigned\":\"\",\"AANewUX_WorkFlow_Started\":\"\",\"AANewUX_WorkFlow_Save\":\"\",\"AANewUX_WorkFlow_Cancel\":\"\",\"AANewUX_WorkFlow_ShowAll\":\"\",\"AANewUX_WorkFlow_By\":\"\",\"AANewUX_WorkFlow_Due\":\"\",\"AANewUX_WorkFlow_Subtask\":\"\",\"AANewUX_WorkFlow_NewAdhocTask\":\"\",\"AANewUX_WorkFlow_AdditionalAdhocTask\":\"\",\"AANewUX_WorkFlow_WorkflowTask\":\"\",\"AANewUX_WorkFlow_BucketCompleted\":\"\",\"AANewUX_WorkFlow_BucketInprogress\":\"\",\""
		"AANewUX_WorkFlow_BucketUpNext\":\"\",\"AANewUX_WorkFlow_TaskInactive\":\"\",\"AANewUX_WorkFlow_TaskInprogress\":\"\",\"AANewUX_WorkFlow_TaskComplete\":\"\",\"AANewUX_WorkFlow_ViewHistory\":\"\",\"AANewUX_WorkFlow_ViewWorkflowDesign\":\"\",\"AANewUX_WorkFlow_IncludeAddPage\":\"\",\"AANewUX_WorkFlow_PageOf\":\"\",\"AANewUX_WorkFlow_PageCompleted\":\"\",\"AANewUX_WorkFlow_WorkflowDesign\":\"\",\"AANewUX_Designer_NewDesigner\":\"\",\"AANewUX_Designer_OldDesigner\":\"\",\"AANewUX_Designer_Preview\":\""
		"\",\"AANewUX_Designer_Text\":\"\",\"AANewUX_Designer_Controls\":\"\",\"AANewUX_Designer_NoCtlAvailable\":\"\",\"AANewUX_Designer_Drag\":\"\",\"AANewUX_Designer_Select\":\"\",\"AANewUX_Designer_Properties\":\"\",\"AANewUX_Designer_Ok\":\"\",\"AANewUX_Designer_Label\":\"\",\"AANewUX_Designer_Url\":\"\",\"AANewUX_Designer_Save\":\"\",\"AANewUX_Designer_Cancel\":\"\",\"AANewUX_Designer_DynamicLabelText\":\"\",\"AANewUX_CheckList_SaveAll\":\"\"}", 
		"LAST");

	web_url("workflow.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/workflow.do?mode=getTasks&module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Licenses", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("workflow.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/workflow.do?mode=viewWorkFlowDesignPermission&module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Licenses", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_10", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_17", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b08e1&module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Licenses", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("tabRecordCount.do_5",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Licenses&ID1=REC18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3Ccount"
		"ID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Licenses",
		"Snapshot=t63.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("MILARA_TC1_08_Click_WorkFlow",2);

	lr_think_time(8);
    web_add_header("AppD_Header", "MILARA_SignOut");
	lr_start_transaction("MILARA_SignOut");

	web_url("session.do_18", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b08e1&module=Licenses", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Licenses", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(4);

	web_url("signoff.do", 
		"URL=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("portal", 
		"Action=https://av-pt-ferrari.accela.com/jetspeed/portal?action=JClearCookie", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("logoutAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=MILARA&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("hostSignon.do_3", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=MILARA&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("MILARA_SignOut",2);

	return 0;
}
# 5 "d:\\desktop_12182018\\pt-ferrari\\scripts\\milara\\milara_tc1\\\\combined_MILARA_TC1.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "d:\\desktop_12182018\\pt-ferrari\\scripts\\milara\\milara_tc1\\\\combined_MILARA_TC1.c" 2

