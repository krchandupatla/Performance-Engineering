# 1 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\milwaukee\\milwaukee_tc3\\\\combined_MILWAUKEE_TC3.c"
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







 
 



















# 1 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\milwaukee\\milwaukee_tc3\\\\combined_MILWAUKEE_TC3.c" 2

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

 
 
 

                               


 
 
 





















# 2 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\milwaukee\\milwaukee_tc3\\\\combined_MILWAUKEE_TC3.c" 2

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



 
 


# 3 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\milwaukee\\milwaukee_tc3\\\\combined_MILWAUKEE_TC3.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\milwaukee\\milwaukee_tc3\\\\combined_MILWAUKEE_TC3.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("dashboard.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
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
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?successURL=https%3A%2F%2Fav-pt-ferrari.accela.com%2Fportlets%2Fspa%2Fdashboard.do&SignOnModule=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(8);

	lr_start_transaction("MILWAUKEE_Login");
	web_add_header("AppD_Header", "MILWAUKEE_Login");
	web_custom_request("loginAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?requestType=checkWebSSOAdapter&servProvCode=MILWAUKEE", 
		"Method=GET", 
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
		"Name=servProvCode", "Value=MILWAUKEE", "ENDITEM",
		"Name=username", "Value=admin", "ENDITEM",
		"Name=password", "Value=admin", "ENDITEM",
		"Name=accela_select_language", "Value=en_US", "ENDITEM",
		"Name=submit_", "Value=Login", "ENDITEM",
		"LAST");

	web_url("dashboard.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("text.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
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
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("MILWAUKEE_Login",2);

	lr_think_time(5);
	web_add_header("AppD_Header", "MILWAUKEE_TC3_01_ClickRecords");
	lr_start_transaction("MILWAUKEE_TC3_01_ClickRecords");

	web_url("plugins_win.json", 
		"URL=https://www.gstatic.com/chrome/config/plugins_2/plugins_win.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("myCAPDetailPortlet.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_01_ClickRecords",2);

	lr_think_time(5);
    web_add_header("AppD_Header", "MILWAUKEE_TC3_02_Records_ClickNew");
	lr_start_transaction("MILWAUKEE_TC3_02_Records_ClickNew");

	web_url("session.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("capTypePickerSelector.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_02_Records_ClickNew",2);

	web_url("session.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(14);

	web_custom_request("capTypePicker.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=validateCapType&modelId=&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fpicker%2FcapTypePicker.do%3FfromModel%3Dcap%26module%3DBuilding%26isGeneralCAP%3DY&value(CurrentEntryURL)=%2Fportlets%2Fpicker%2FcapTypePicker.do%3FfromModel%3Dcap%26module%3DBuilding%26isGeneralCAP%3DY&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=119&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=119&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(capTypeModel*type)=Plumbing&value(capTypeModel*subType)=Gas%20Piping&value(capTypeModel*category)=NA&value(selectModuleName)=Building&value(g1AssetGroup)=&value(g1AssetType)=&value(mode)=add&value(createCapForParcelType)=ALL&value(srLevel)=&value(capGroupIndex)=&value(capTypeModel*group)=Building&value(capTypeModel)=Building%2FPlumbing%2FGas%20Piping%2FNA&value(fromModel)=cap&value(modelId)=&"
		"value(formKey)=&value(GISCommand)=&", 
		"LAST");

	web_submit_data("capTypePicker.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=value(FirstEntryURL)", "Value=/portlets/picker/capTypePicker.do?fromModel=cap&module=Building&isGeneralCAP=Y", "ENDITEM", 
		"Name=value(CurrentEntryURL)", "Value=/portlets/picker/capTypePicker.do?fromModel=cap&module=Building&isGeneralCAP=Y", "ENDITEM", 
		"Name=portlet_language", "Value=en_US", "ENDITEM", 
		"Name=refresh_target", "Value=", "ENDITEM", 
		"Name=refresh_url", "Value=", "ENDITEM", 
		"Name=buttonName", "Value=", "ENDITEM", 
		"Name=modeName", "Value=", "ENDITEM", 
		"Name=module", "Value=Building", "ENDITEM", 
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
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=value(capTypeModel*type)", "Value=Plumbing", "ENDITEM", 
		"Name=value(capTypeModel*subType)", "Value=Gas Piping", "ENDITEM", 
		"Name=value(capTypeModel*category)", "Value=NA", "ENDITEM", 
		"Name=value(selectModuleName)", "Value=Building", "ENDITEM", 
		"Name=value(g1AssetGroup)", "Value=", "ENDITEM", 
		"Name=value(g1AssetType)", "Value=", "ENDITEM", 
		"Name=value(mode)", "Value=add", "ENDITEM", 
		"Name=value(createCapForParcelType)", "Value=ALL", "ENDITEM", 
		"Name=value(srLevel)", "Value=", "ENDITEM", 
		"Name=value(capGroupIndex)", "Value=", "ENDITEM", 
		"Name=value(capTypeModel*group)", "Value=Building", "ENDITEM", 
		"Name=value(capTypeModel)", "Value=Building/Plumbing/Gas Piping/NA", "ENDITEM", 
		"Name=value(fromModel)", "Value=cap", "ENDITEM", 
		"Name=value(modelId)", "Value=", "ENDITEM", 
		"Name=value(formKey)", "Value=", "ENDITEM", 
		"Name=value(GISCommand)", "Value=", "ENDITEM", 
		"LAST");
	web_add_header("AppD_Header", "MILWAUKEE_TC3_03_SelectRecordType_OpenSpearForm");
	lr_start_transaction("MILWAUKEE_TC3_03_SelectRecordType_OpenSpearForm");

	web_custom_request("countryStateAJAX.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=WI&stateProperty=value(addressesModel*state)&aaZoneId=aazone-country-state&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.7915894051548094&aazones=aazone-country-state&width=94px", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"Body=aazone-country-state", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=WI&stateProperty=value(mailState)&aaZoneId=aazone-country-mailstate&stateReadOnly=false&country=US&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.7140471236780286&aazones=aazone-country-mailstate&width=70px", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"Body=aazone-country-mailstate", 
		"LAST");

	web_submit_data("empty.jsp_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("ajax.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("blank.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("blank.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("getGISListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?mode=getGISListBySingle&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("appSpecInfoForm.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=buildDrillList&module=Building&guideSheetSeq=&singleMode=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("search.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		"LAST");

	web_submit_data("regionalSyncMask.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("getGISListBySingle.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?mode=getGISListBySingle&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("expression.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22PIPE%20FOOTAGE%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22EQUIPMENT%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&isReload=false&module=Building&capType=Building%2FPlumbing%2FGas%20Piping%2FNA", 
		"LAST");

	web_submit_data("empty.jsp_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_03_SelectRecordType_OpenSpearForm",2);

	lr_think_time(7);
    web_add_header("AppD_Header", "MILWAUKEE_TC3_04_Address_Clear");
	lr_start_transaction("MILWAUKEE_TC3_04_Address_Clear");

	web_url("session.do_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("refAddressListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingle.do?mode=clearAddress&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&value(mode)=add&value(srTest)=&value(capType)="
		"Building%2FPlumbing%2FGas%20Piping%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&"
		"value(capModel*capStatus)=Open&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(capModel*isManualAltID)=&originalCAPAltID=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value"
		"(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F29%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value"
		"(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value"
		"(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&value(capType)=Building%2FPlumbing%2FGas%20Piping%2FNA&date(capModel*fileDate)=08%2F29%2F2018&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&"
		"objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&validateFlagOriginalValue=&value(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberStart)=&value"
		"(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitEnd)=&value(addressesModel*countryCode)=&value(addressesModel*sourceFlag)=&value"
		"(addressesModel*addressTypeFlag)=&value(addressesModel*validateFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*neighborhood)=&value(addressesModel*XCoordinator)=&value(addressesModel*YCoordinator)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine1)=&value(addressesModel*addressLine2)=&value"
		"(templateData)=&value(addressesModel*streetDirection)=&value(addressesModel*streetName)=&value(addressesModel*streetSuffix)=&value(addressesModel*unitType)=&value(addressesModel*unitStart)=&value(addressesModel*primaryFlag)=Y&value(addressesModel*city)=MILWAUKEE&value(addressesModel*state)=WI&value(addressesModel*zip_disp)=&value(addressesModel*zip)=&value(addressesModel*county)=&value(addressesModel*addressDescription)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*addressStatus)"
		"=&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=&value(l1addressnbr)=&value(l1addressnbr1)=&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=&isAddress=1&isAddressValidation=Y&isAddressRequired=Y&isShowParcel=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&"
		"objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(unmaskedParcelNumber)=&value(parcelNo)=&value(page)=&value(block)=&value(mapNo)=&value(supervisorDistrict)=&value(inspectionDistrict)=&value(planArea)=&"
		"value(mapRef)=&value(gisSeqNo)=&value(subdivision)=&value(unmaskedParcelNumber)=&value(primaryParcelFlagWithoutDealing)=&value(unmaskedParcelNumber)=&value(section)=&value(unmaskedParcelNumber)=&value(tract)=&value(unmaskedParcelNumber)=&value(range)=&value(unmaskedParcelNumber)=&value(councilDistrict)=&value(unmaskedParcelNumber)=&value(parcelArea)=&value(unmaskedParcelNumber)=&value(censusTract)=&value(unmaskedParcelNumber)=&value(lot)=&value(unmaskedParcelNumber)=&value(book)=&value"
		"(unmaskedParcelNumber)=&value(landValue)=&value(unmaskedParcelNumber)=&value(improvedValue)=&value(unmaskedParcelNumber)=&value(exemptValue)=&value(unmaskedParcelNumber)=&value(township)=&value(unmaskedParcelNumber)=&value(legalDesc)=&value(unmaskedParcelNumber)=&value(unmaskedParcelNumber)=&value(parcel)=&value(mode)=New&value(parcelModel*UID)=&value(l1ParcelNo)=&value(parcelNoBySearch1)=&value(parcelSearchType)=local&isParcel=1&parcelViewID=20021&value(parcelUID)=&value(parcelUID1)=&"
		"isParcelValidation=Y&isParcelRequired=Y&value(parcelExternalMode*parcelNo)=&value(parcelExternalMode*parcelArea)=&value(parcelExternalMode*book)=&value(parcelExternalMode*page)=&value(parcelExternalMode*lot)=&value(parcelExternalMode*legalDesc)=&value(parcelExternalMode*landValue)=&value(parcelExternalMode*improvedValue)=&value(parcelExternalMode*exemptValue)=&value(parcelExternalMode*tract)=&value(parcelExternalMode*block)=&isShowOwner=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&"
		"MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&"
		"checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(templateData)=&value(fax)=&value(primaryOwner)=Y&value(mailAddress2)=&value(mailAddress3)=&value(mailAddress1)=&value(mailCity)=MILWAUKEE&value(mailState)=WI&value(mailZip_disp)=&value(mailZip)=&value(mailCountry)=US&value(email)=&value(phone_disp)=&value(phone)=&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&"
		"value(ownerNumber)=&value(ownerUID)=&value(ownerNoBySearch)=&value(ownerExternalMode*ownerFullName)=&value(ownerExternalMode*phone)=&value(ownerExternalMode*fax)=&value(ownerExternalMode*mailAddress1)=&value(ownerExternalMode*mailAddress2)=&value(ownerExternalMode*mailAddress3)=&value(ownerExternalMode*mailZip)=&value(ownerExternalMode*ownerFname)=&value(ownerExternalMode*ownerLname)=&value(ownerExternalMode*ownerMname)=&isOwner=1&ownerViewID=20026&isOwnerValidation=Y&isOwnerRequired=Y&"
		"isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=GENERAL&app_spec_info_GENERAL_Work_Type=&app_spec_info_GENERAL_Field_Gas_Type=&app_spec_info_GENERAL_Building_Type=&app_spec_info_GENERAL_Gas_Pressure=&app_spec_info_GENERAL_Cost_of_Job=&app_spec_info_GENERAL_Project_Name=&app_spec_info_GENERAL_Total_Fixtures=0&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SPEAR&"
		"expression_page_reload_after_submit_or_validate_failed=true&isAppSpecInfoTable=1&expression_portlet_to_be_populate=-2&expression_portlet_to_be_populate=-99999&value(appSpecTable*tableName)=&tableName=PIPE%20FOOTAGE&tableName=EQUIPMENT&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&"
		"CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&mode=upload&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&"
		"groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError="
		"No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL="
		"%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DBuilding%252FPlumbing%252FGas%2BPiping%252FNA%26module%3DBuilding&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea38=&sourcetextarea38=&layouttextarea38=&docTemplateUIUID=38&value(docGroup)=&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete"
		")=NONE&documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&"
		"hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&"
		"hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&"
		"hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&"
		"sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&isGisFeatureRequired=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20021%2C20026&viewGroup=%2C225%2C117%2C20021%2C20026&formGroup=%2CcapDetailForm%2CaddressForm%2CparcelForm%2CownerForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=ALL&SKIP_EMSE_FLAG=N&"
		"isFromAssetList=null%20&isValidationFailed=null&isValidated=null&", 
		"LAST");

	lr_think_time(4);
	web_add_header("AppD_Header", "MILWAUKEE_TC3_05_Address_Search");
	lr_start_transaction("MILWAUKEE_TC3_05_Address_Search");
    	web_url("session.do_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("refAddressListBySingle.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingle.do?mode=directSearch&from=SPEAR&listBySingle=true&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&value(mode)=add&value(srTest)=&value(capType)="
		"Building%2FPlumbing%2FGas%20Piping%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&"
		"value(capModel*capStatus)=Open&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(capModel*isManualAltID)=&originalCAPAltID=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value"
		"(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F29%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value"
		"(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value"
		"(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&value(capType)=Building%2FPlumbing%2FGas%20Piping%2FNA&date(capModel*fileDate)=08%2F29%2F2018&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&"
		"objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&validateFlagOriginalValue=&value(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberStart)=5928&value"
		"(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitEnd)=&value(addressesModel*countryCode)=&value(addressesModel*sourceFlag)=&value"
		"(addressesModel*addressTypeFlag)=&value(addressesModel*validateFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*neighborhood)=&value(addressesModel*XCoordinator)=&value(addressesModel*YCoordinator)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine1)=&value(addressesModel*addressLine2)=&value"
		"(templateData)=&value(addressesModel*streetDirection)=&value(addressesModel*streetName)=state&value(addressesModel*streetSuffix)=&value(addressesModel*unitType)=&value(addressesModel*unitStart)=&value(addressesModel*primaryFlag)=Y&value(addressesModel*city)=MILWAUKEE&value(addressesModel*state)=&value(addressesModel*zip_disp)=&value(addressesModel*zip)=&value(addressesModel*county)=&value(addressesModel*addressDescription)=&value(addressesModel*inspectionDistrict)=&value"
		"(addressesModel*addressStatus)=&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=&value(l1addressnbr)=&value(l1addressnbr1)=&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=&isAddress=1&isAddressValidation=Y&isAddressRequired=Y&isShowParcel=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&"
		"generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(unmaskedParcelNumber)=&value(parcelNo)=&value(page)=&value(block)=&value(mapNo)=&value(supervisorDistrict)=&value"
		"(inspectionDistrict)=&value(planArea)=&value(mapRef)=&value(gisSeqNo)=&value(subdivision)=&value(unmaskedParcelNumber)=&value(primaryParcelFlagWithoutDealing)=&value(unmaskedParcelNumber)=&value(section)=&value(unmaskedParcelNumber)=&value(tract)=&value(unmaskedParcelNumber)=&value(range)=&value(unmaskedParcelNumber)=&value(councilDistrict)=&value(unmaskedParcelNumber)=&value(parcelArea)=&value(unmaskedParcelNumber)=&value(censusTract)=&value(unmaskedParcelNumber)=&value(lot)=&value"
		"(unmaskedParcelNumber)=&value(book)=&value(unmaskedParcelNumber)=&value(landValue)=&value(unmaskedParcelNumber)=&value(improvedValue)=&value(unmaskedParcelNumber)=&value(exemptValue)=&value(unmaskedParcelNumber)=&value(township)=&value(unmaskedParcelNumber)=&value(legalDesc)=&value(unmaskedParcelNumber)=&value(unmaskedParcelNumber)=&value(parcel)=&value(mode)=New&value(parcelModel*UID)=&value(l1ParcelNo)=&value(parcelNoBySearch1)=&value(parcelSearchType)=local&isParcel=1&parcelViewID=20021&value"
		"(parcelUID)=&value(parcelUID1)=&isParcelValidation=Y&isParcelRequired=Y&value(parcelExternalMode*parcelNo)=&value(parcelExternalMode*parcelArea)=&value(parcelExternalMode*book)=&value(parcelExternalMode*page)=&value(parcelExternalMode*lot)=&value(parcelExternalMode*legalDesc)=&value(parcelExternalMode*landValue)=&value(parcelExternalMode*improvedValue)=&value(parcelExternalMode*exemptValue)=&value(parcelExternalMode*tract)=&value(parcelExternalMode*block)=&isShowOwner=Y&generalCAPSearch=&"
		"isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow="
		"PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(templateData)=&value(fax)=&value(primaryOwner)=Y&value(mailAddress2)=&value(mailAddress3)=&value(mailAddress1)=&value(mailCity)=MILWAUKEE&value(mailState)=WI&value(mailZip_disp)=&value(mailZip)=&value(mailCountry)=US&value(email)=&value(phone_disp)=&value(phone)=&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value(ownerLname)=&value(ownerMname)=&value(UID)=&"
		"value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&value(ownerNoBySearch)=&value(ownerExternalMode*ownerFullName)=&value(ownerExternalMode*phone)=&value(ownerExternalMode*fax)=&value(ownerExternalMode*mailAddress1)=&value(ownerExternalMode*mailAddress2)=&value(ownerExternalMode*mailAddress3)=&value(ownerExternalMode*mailZip)=&value(ownerExternalMode*ownerFname)=&value(ownerExternalMode*ownerLname)=&value(ownerExternalMode*ownerMname)=&isOwner=1&ownerViewID=20026&"
		"isOwnerValidation=Y&isOwnerRequired=Y&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=GENERAL&app_spec_info_GENERAL_Work_Type=&app_spec_info_GENERAL_Field_Gas_Type=&app_spec_info_GENERAL_Building_Type=&app_spec_info_GENERAL_Gas_Pressure=&app_spec_info_GENERAL_Cost_of_Job=&app_spec_info_GENERAL_Project_Name=&app_spec_info_GENERAL_Total_Fixtures=0&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed"
		"=true&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&isAppSpecInfoTable=1&expression_portlet_to_be_populate=-2&expression_portlet_to_be_populate=-99999&value(appSpecTable*tableName)=&tableName=PIPE%20FOOTAGE&tableName=EQUIPMENT&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&generalCAPSearch=&"
		"isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&mode=upload&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&"
		"chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError="
		"No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL="
		"%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DBuilding%252FPlumbing%252FGas%2BPiping%252FNA%26module%3DBuilding&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea38=&sourcetextarea38=&layouttextarea38=&docTemplateUIUID=38&value(docGroup)=&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete"
		")=NONE&documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&"
		"hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&"
		"hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&"
		"hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&"
		"sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&isGisFeatureRequired=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20021%2C20026&viewGroup=%2C225%2C117%2C20021%2C20026&formGroup=%2CcapDetailForm%2CaddressForm%2CparcelForm%2CownerForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=ALL&SKIP_EMSE_FLAG=N&"
		"isFromAssetList=null%20&isValidationFailed=null&isValidated=null&", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?stateProperty=value(addressesModel*state)&aaZoneId=aazone-country-state&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.7828946153167635&aazones=aazone-country-state&statevalue=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"Body=aazone-country-state", 
		"LAST");

	web_url("autoSyncAPOStrucEstabBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/autoSyncAPOStrucEstabBySingle.do?mode=listAssociatedObjs&module=Building&value(typeOfSelectedObj)=ADDRESS&value(action)=Add", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("getAddressListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getAddressListBySingle.do?module=Building&mode=getAddressListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("getParcelListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getParcelListBySingle.do?module=Building&mode=getParcelListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("getOwnerListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getOwnerListBySingle.do?module=Building&mode=getOwnerListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("getGISListBySingle.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?mode=getGISListBySingle&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_10", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_11", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_05_Address_Search",2);

	lr_end_transaction("MILWAUKEE_TC3_04_Address_Clear",2);

	lr_think_time(40);    
    web_add_header("AppD_Header","MILWAUKEE_TC3_08_SubmitApplication_AddNewApplication");
	lr_start_transaction("MILWAUKEE_TC3_08_SubmitApplication_AddNewApplication");

	web_url("session.do_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(14);

	web_url("session.do_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("getDocListBySingle.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/document/getDocListBySingle.do?mode=getDocSource4SPEAR&module=Building&callbackJs=submitInNewCAP&module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
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
		"Action=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=value(FirstEntryURL)", "Value=", "ENDITEM", 
		"Name=value(CurrentEntryURL)", "Value=", "ENDITEM", 
		"Name=portlet_language", "Value=en_US", "ENDITEM", 
		"Name=refresh_target", "Value=", "ENDITEM", 
		"Name=refresh_url", "Value=", "ENDITEM", 
		"Name=buttonName", "Value=", "ENDITEM", 
		"Name=modeName", "Value=new", "ENDITEM", 
		"Name=module", "Value=Building", "ENDITEM", 
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
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=value(paLicenseId)", "Value=", "ENDITEM", 
		"Name=isRefreshPartialCondition", "Value=N", "ENDITEM", 
		"Name=value(mode)", "Value=add", "ENDITEM", 
		"Name=value(srTest)", "Value=", "ENDITEM", 
		"Name=value(capType)", "Value=Building/Plumbing/Gas Piping/NA", "ENDITEM", 
		"Name=value(capID)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*shortNotes)", "Value=", "ENDITEM", 
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
		"Name=value(capModel*capStatus)", "Value=Open", "ENDITEM", 
		"Name=value(capDetailModel*asgnStaff)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*priority)", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*reportedChannel)", "Value=Call Center", "ENDITEM", 
		"Name=value(capDetailModel*severity)", "Value=", "ENDITEM", 
		"Name=value(capModel*altID)", "Value=", "ENDITEM", 
		"Name=value(capModel*isManualAltID)", "Value=", "ENDITEM", 
		"Name=originalCAPAltID", "Value=", "ENDITEM", 
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
		"Name=date(capModel*reportedDate)", "Value=08/29/2018", "ENDITEM", 
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
		"Name=value(capType)", "Value=Building/Plumbing/Gas Piping/NA", "ENDITEM", 
		"Name=date(capModel*fileDate)", "Value=08/29/2018", "ENDITEM", 
		"Name=value(capModel*specialText)", "Value=", "ENDITEM", 
		"Name=value(capWorkDescriptionModel*description)", "Value=", "ENDITEM", 
		"Name=isShowAddress", "Value=Y", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=225", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=225", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=225", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=validateFlagOriginalValue", "Value=", "ENDITEM", 
		"Name=value(addressesModel*addressType)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*refAddressType)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*houseNumberStart)", "Value=5928", "ENDITEM", 
		"Name=value(addressesModel*houseNumberAlphaStart)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*houseNumberAlphaEnd)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*levelPrefix)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*levelNumberStart)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*levelNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*houseFractionStart)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*houseNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*houseFractionEnd)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*streetPrefix)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*streetSuffixdirection)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*unitEnd)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*countryCode)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*sourceFlag)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*addressTypeFlag)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*validateFlag)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*distance)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*secondaryRoad)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*secondaryRoadNumber)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*inspectionDistrictPrefix)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*neighberhoodPrefix)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*neighborhood)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*XCoordinator)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*YCoordinator)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*fullAddress)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*addressLine1)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*addressLine2)", "Value=", "ENDITEM", 
		"Name=value(templateData)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*streetDirection)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*streetName)", "Value=state", "ENDITEM", 
		"Name=value(addressesModel*streetSuffix)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*unitType)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*unitStart)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*primaryFlag)", "Value=Y", "ENDITEM", 
		"Name=value(addressesModel*city)", "Value=MILWAUKEE", "ENDITEM", 
		"Name=value(addressesModel*state)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*zip_disp)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*zip)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*county)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*addressDescription)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*inspectionDistrict)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*addressStatus)", "Value=", "ENDITEM", 
		"Name=value(mode)", "Value=New", "ENDITEM", 
		"Name=value(addressesmodel*UID)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*refAddressId)", "Value=", "ENDITEM", 
		"Name=value(l1addressnbr)", "Value=", "ENDITEM", 
		"Name=value(l1addressnbr1)", "Value=", "ENDITEM", 
		"Name=value(addressUID1)", "Value=", "ENDITEM", 
		"Name=value(addressUID)", "Value=", "ENDITEM", 
		"Name=addressViewID", "Value=117", "ENDITEM", 
		"Name=value(addressSearchType)", "Value=", "ENDITEM", 
		"Name=isAddress", "Value=1", "ENDITEM", 
		"Name=isAddressValidation", "Value=", "ENDITEM", 
		"Name=isAddressRequired", "Value=Y", "ENDITEM", 
		"Name=isShowParcel", "Value=Y", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=117", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=117", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=117", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(parcelNo)", "Value=", "ENDITEM", 
		"Name=value(page)", "Value=", "ENDITEM", 
		"Name=value(block)", "Value=", "ENDITEM", 
		"Name=value(mapNo)", "Value=", "ENDITEM", 
		"Name=value(supervisorDistrict)", "Value=", "ENDITEM", 
		"Name=value(inspectionDistrict)", "Value=", "ENDITEM", 
		"Name=value(planArea)", "Value=", "ENDITEM", 
		"Name=value(mapRef)", "Value=", "ENDITEM", 
		"Name=value(gisSeqNo)", "Value=", "ENDITEM", 
		"Name=value(subdivision)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(primaryParcelFlagWithoutDealing)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(section)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(tract)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(range)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(councilDistrict)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(parcelArea)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(censusTract)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(lot)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(book)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(landValue)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(improvedValue)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(exemptValue)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(township)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(legalDesc)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(parcel)", "Value=", "ENDITEM", 
		"Name=value(mode)", "Value=New", "ENDITEM", 
		"Name=value(parcelModel*UID)", "Value=", "ENDITEM", 
		"Name=value(l1ParcelNo)", "Value=", "ENDITEM", 
		"Name=value(parcelNoBySearch1)", "Value=", "ENDITEM", 
		"Name=value(parcelSearchType)", "Value=local", "ENDITEM", 
		"Name=isParcel", "Value=1", "ENDITEM", 
		"Name=parcelViewID", "Value=20021", "ENDITEM", 
		"Name=value(parcelUID)", "Value=", "ENDITEM", 
		"Name=value(parcelUID1)", "Value=", "ENDITEM", 
		"Name=isParcelValidation", "Value=", "ENDITEM", 
		"Name=isParcelRequired", "Value=Y", "ENDITEM", 
		"Name=value(parcelExternalMode*parcelNo)", "Value=", "ENDITEM", 
		"Name=value(parcelExternalMode*parcelArea)", "Value=", "ENDITEM", 
		"Name=value(parcelExternalMode*book)", "Value=", "ENDITEM", 
		"Name=value(parcelExternalMode*page)", "Value=", "ENDITEM", 
		"Name=value(parcelExternalMode*lot)", "Value=", "ENDITEM", 
		"Name=value(parcelExternalMode*legalDesc)", "Value=", "ENDITEM", 
		"Name=value(parcelExternalMode*landValue)", "Value=", "ENDITEM", 
		"Name=value(parcelExternalMode*improvedValue)", "Value=", "ENDITEM", 
		"Name=value(parcelExternalMode*exemptValue)", "Value=", "ENDITEM", 
		"Name=value(parcelExternalMode*tract)", "Value=", "ENDITEM", 
		"Name=value(parcelExternalMode*block)", "Value=", "ENDITEM", 
		"Name=isShowOwner", "Value=Y", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=20021", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=20021", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=20021", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=value(mode)", "Value=New", "ENDITEM", 
		"Name=value(ownerFullName)", "Value=", "ENDITEM", 
		"Name=value(templateData)", "Value=", "ENDITEM", 
		"Name=value(fax)", "Value=", "ENDITEM", 
		"Name=value(primaryOwner)", "Value=Y", "ENDITEM", 
		"Name=value(mailAddress2)", "Value=", "ENDITEM", 
		"Name=value(mailAddress3)", "Value=", "ENDITEM", 
		"Name=value(mailAddress1)", "Value=", "ENDITEM", 
		"Name=value(mailCity)", "Value=MILWAUKEE", "ENDITEM", 
		"Name=value(mailState)", "Value=WI", "ENDITEM", 
		"Name=value(mailZip_disp)", "Value=", "ENDITEM", 
		"Name=value(mailZip)", "Value=", "ENDITEM", 
		"Name=value(mailCountry)", "Value=US", "ENDITEM", 
		"Name=value(email)", "Value=", "ENDITEM", 
		"Name=value(phone_disp)", "Value=", "ENDITEM", 
		"Name=value(phone)", "Value=", "ENDITEM", 
		"Name=value(mode)", "Value=New", "ENDITEM", 
		"Name=value(ownerModel*UID)", "Value=", "ENDITEM", 
		"Name=value(refOwnerNumber)", "Value=", "ENDITEM", 
		"Name=value(ownerFname)", "Value=", "ENDITEM", 
		"Name=value(ownerLname)", "Value=", "ENDITEM", 
		"Name=value(ownerMname)", "Value=", "ENDITEM", 
		"Name=value(UID)", "Value=", "ENDITEM", 
		"Name=value(ownerSearchType)", "Value=", "ENDITEM", 
		"Name=value(l1OwnerNumber)", "Value=", "ENDITEM", 
		"Name=value(ownerNumber)", "Value=", "ENDITEM", 
		"Name=value(ownerUID)", "Value=", "ENDITEM", 
		"Name=value(ownerNoBySearch)", "Value=", "ENDITEM", 
		"Name=value(ownerExternalMode*ownerFullName)", "Value=", "ENDITEM", 
		"Name=value(ownerExternalMode*phone)", "Value=", "ENDITEM", 
		"Name=value(ownerExternalMode*fax)", "Value=", "ENDITEM", 
		"Name=value(ownerExternalMode*mailAddress1)", "Value=", "ENDITEM", 
		"Name=value(ownerExternalMode*mailAddress2)", "Value=", "ENDITEM", 
		"Name=value(ownerExternalMode*mailAddress3)", "Value=", "ENDITEM", 
		"Name=value(ownerExternalMode*mailZip)", "Value=", "ENDITEM", 
		"Name=value(ownerExternalMode*ownerFname)", "Value=", "ENDITEM", 
		"Name=value(ownerExternalMode*ownerLname)", "Value=", "ENDITEM", 
		"Name=value(ownerExternalMode*ownerMname)", "Value=", "ENDITEM", 
		"Name=isOwner", "Value=1", "ENDITEM", 
		"Name=ownerViewID", "Value=20026", "ENDITEM", 
		"Name=isOwnerValidation", "Value=", "ENDITEM", 
		"Name=isOwnerRequired", "Value=Y", "ENDITEM", 
		"Name=isAppSpecInfo", "Value=1", "ENDITEM", 
		"Name=value(capID*ID1)", "Value=", "ENDITEM", 
		"Name=value(capID*ID2)", "Value=", "ENDITEM", 
		"Name=value(capID*ID3)", "Value=", "ENDITEM", 
		"Name=singleModeName", "Value=GENERAL", "ENDITEM", 
		"Name=app_spec_info_GENERAL_Work_Type", "Value=", "ENDITEM", 
		"Name=app_spec_info_GENERAL_Field_Gas_Type", "Value=", "ENDITEM", 
		"Name=app_spec_info_GENERAL_Building_Type", "Value=1 Family", "ENDITEM", 
		"Name=app_spec_info_GENERAL_Gas_Pressure", "Value=", "ENDITEM", 
		"Name=app_spec_info_GENERAL_Cost_of_Job", "Value=", "ENDITEM", 
		"Name=app_spec_info_GENERAL_Project_Name", "Value=", "ENDITEM", 
		"Name=app_spec_info_GENERAL_Total_Fixtures", "Value=0", "ENDITEM", 
		"Name=value(mode)", "Value=New", "ENDITEM", 
		"Name=expression_portlet_to_be_populate", "Value=-1", "ENDITEM", 
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM", 
		"Name=is_ASI_fields_displayed", "Value=true", "ENDITEM", 
		"Name=expressionPageType", "Value=SPEAR", "ENDITEM", 
		"Name=expression_page_reload_after_submit_or_validate_failed", "Value=true", "ENDITEM", 
		"Name=isAppSpecInfoTable", "Value=1", "ENDITEM", 
		"Name=expression_portlet_to_be_populate", "Value=-2", "ENDITEM", 
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM", 
		"Name=value(appSpecTable*tableName)", "Value=", "ENDITEM", 
		"Name=tableName", "Value=PIPE FOOTAGE", "ENDITEM", 
		"Name=tableName", "Value=EQUIPMENT", "ENDITEM", 
		"Name=value(entityType)", "Value=CAP", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=20026", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=20026", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=value(from)", "Value=", "ENDITEM", 
		"Name=value(entityType)", "Value=CAP", "ENDITEM", 
		"Name=newUpload", "Value=true", "ENDITEM", 
		"Name=maxFileIndex", "Value=0", "ENDITEM", 
		"Name=fileCount", "Value=0", "ENDITEM", 
		"Name=mode", "Value=upload", "ENDITEM", 
		"Name=asynchronousUpload", "Value=Y", "ENDITEM", 
		"Name=value(from)", "Value=", "ENDITEM", 
		"Name=value(entityID)", "Value=", "ENDITEM", 
		"Name=value(entityType)", "Value=", "ENDITEM", 
		"Name=value(maxFileSize)", "Value=", "ENDITEM", 
		"Name=uploadMode", "Value=multiAccelaUpload", "ENDITEM", 
		"Name=docName", "Value=this field(docName) is desperated", "ENDITEM", 
		"Name=docDepartment", "Value=", "ENDITEM", 
		"Name=docGroup", "Value=", "ENDITEM", 
		"Name=docCategory", "Value=", "ENDITEM", 
		"Name=alsoAttachTo", "Value=", "ENDITEM", 
		"Name=docDescription", "Value=", "ENDITEM", 
		"Name=chkLabel", "Value=Select", "ENDITEM", 
		"Name=fileLabel", "Value=File", "ENDITEM", 
		"Name=groupLabel", "Value=Document Group/Category", "ENDITEM", 
		"Name=alsoAttachToLabel", "Value=Also Attach To", "ENDITEM", 
		"Name=deptLabel", "Value=Department", "ENDITEM", 
		"Name=acaPermissionsLabel", "Value=ACA Permissions", "ENDITEM", 
		"Name=suffixMessage", "Value=The file of this type cannot be uploaded.", "ENDITEM", 
		"Name=virtualFoldersLabel", "Value=Virtual Folders", "ENDITEM", 
		"Name=addLabel", "Value=Add", "ENDITEM", 
		"Name=OKLabel", "Value=OK", "ENDITEM", 
		"Name=cancelLabel", "Value=Cancel", "ENDITEM", 
		"Name=deleteAlt", "Value=Delete", "ENDITEM", 
		"Name=selectAlt", "Value=Select", "ENDITEM", 
		"Name=newFolderLabel", "Value=New Folder", "ENDITEM", 
		"Name=showAddBtn", "Value=true", "ENDITEM", 
		"Name=noFolderGroupError", "Value=No virtual folder options applicable to the current record type. Please contact the agency administrator for help.", "ENDITEM", 
		"Name=newFolderDuplicateError", "Value=Duplicate folder name(s).", "ENDITEM", 
		"Name=containSemicolonError", "Value=The folder name cannot contain semicolons.", "ENDITEM", 
		"Name=closeVirtualFoldersImgSrc", "Value=/portlets/images/sky_blue/menu/delete.png", "ENDITEM", 
		"Name=virtualFoldersImgSrc", "Value=/portlets/images/Select_SR_Type.gif", "ENDITEM", 
		"Name=virtualFoldersURL", "Value=/portlets/document/documentForm.do?mode=getVirtualFolders&capType=Building%2FPlumbing%2FGas+Piping%2FNA&module=Building", "ENDITEM", 
		"Name=required", "Value=* Required", "ENDITEM", 
		"Name=staticRequiredDocTypesMessage", "Value=", "ENDITEM", 
		"Name=edmsAdsStr", "Value=", "ENDITEM", 
		"Name=isCloneSingle", "Value=", "ENDITEM", 
		"Name=fromPartialCap", "Value=", "ENDITEM", 
		"Name=isPendingCap", "Value=", "ENDITEM", 
		"Name=valuetextarea38", "Value=", "ENDITEM", 
		"Name=sourcetextarea38", "Value=", "ENDITEM", 
		"Name=layouttextarea38", "Value=", "ENDITEM", 
		"Name=docTemplateUIUID", "Value=38", "ENDITEM", 
		"Name=value(docGroup)", "Value=", "ENDITEM", 
		"Name=value(docCategory)", "Value=", "ENDITEM", 
		"Name=value(docDepartment)", "Value=", "ENDITEM", 
		"Name=value(docDescription)", "Value=", "ENDITEM", 
		"Name=value(ac360_hidden_target)", "Value=NONE", "ENDITEM", 
		"Name=value(ac360_hidden_download)", "Value=NONE", "ENDITEM", 
		"Name=value(ac360_hidden_delete)", "Value=NONE", "ENDITEM", 
		"Name=documentSeq", "Value=", "ENDITEM", 
		"Name=fileKey", "Value=", "ENDITEM", 
		"Name=canceled", "Value=", "ENDITEM", 
		"Name=docRuleExpress", "Value=", "ENDITEM", 
		"Name=hidden-00-docName", "Value=", "ENDITEM", 
		"Name=hidden-00-entityID", "Value=", "ENDITEM", 
		"Name=hidden-00-edmsName", "Value=", "ENDITEM", 
		"Name=hidden-00-docDepartment", "Value=", "ENDITEM", 
		"Name=hidden-00-docDescription", "Value=", "ENDITEM", 
		"Name=hidden-00-docGroup", "Value=", "ENDITEM", 
		"Name=hidden-00-docCategory", "Value=", "ENDITEM", 
		"Name=hidden-00-docDispCategory", "Value=", "ENDITEM", 
		"Name=hidden-00-userEmail", "Value=", "ENDITEM", 
		"Name=hidden-00-fileSize", "Value=", "ENDITEM", 
		"Name=hidden-00-documentSeq", "Value=", "ENDITEM", 
		"Name=hidden-00-fileKey", "Value=", "ENDITEM", 
		"Name=hidden-00-isUploaded", "Value=", "ENDITEM", 
		"Name=hidden-00-downloadRight", "Value=", "ENDITEM", 
		"Name=hidden-00-viewRight", "Value=", "ENDITEM", 
		"Name=hidden-00-deleteRight", "Value=", "ENDITEM", 
		"Name=hidden-00-itemRight", "Value=", "ENDITEM", 
		"Name=hidden-00-isDeleted", "Value=", "ENDITEM", 
		"Name=hidden-00-docType", "Value=", "ENDITEM", 
		"Name=hidden-00-recFulName", "Value=", "ENDITEM", 
		"Name=hidden-00-recDate", "Value=", "ENDITEM", 
		"Name=hidden-00-maxSize", "Value=", "ENDITEM", 
		"Name=hidden-00-isOverLarge", "Value=", "ENDITEM", 
		"Name=hidden-00-isTempSaved", "Value=", "ENDITEM", 
		"Name=hidden-00-tempDocName", "Value=", "ENDITEM", 
		"Name=hidden-00-prefileSize", "Value=", "ENDITEM", 
		"Name=hidden-00-isInvalidFile", "Value=", "ENDITEM", 
		"Name=hidden-00-docDispDepartment", "Value=", "ENDITEM", 
		"Name=hidden-00-contentType", "Value=", "ENDITEM", 
		"Name=hidden-00-fileName", "Value=", "ENDITEM", 
		"Name=hidden-00-typeFailed", "Value=", "ENDITEM", 
		"Name=upload-00-file", "Value=", "File=Yes", "ENDITEM", 
		"Name=upload-00-docCategory", "Value=", "ENDITEM", 
		"Name=upload-00-docName", "Value=", "ENDITEM", 
		"Name=upload-00-docDesc", "Value=", "ENDITEM", 
		"Name=upload-00-userEmail", "Value=", "ENDITEM", 
		"Name=hidden-00-docName", "Value=", "ENDITEM", 
		"Name=hidden-00-entityID", "Value=", "ENDITEM", 
		"Name=hidden-00-edmsName", "Value=", "ENDITEM", 
		"Name=hidden-00-docDepartment", "Value=", "ENDITEM", 
		"Name=hidden-00-docDescription", "Value=", "ENDITEM", 
		"Name=hidden-00-docGroup", "Value=", "ENDITEM", 
		"Name=hidden-00-docCategory", "Value=", "ENDITEM", 
		"Name=hidden-00-docDispCategory", "Value=", "ENDITEM", 
		"Name=hidden-00-userEmail", "Value=", "ENDITEM", 
		"Name=hidden-00-fileSize", "Value=", "ENDITEM", 
		"Name=hidden-00-documentSeq", "Value=", "ENDITEM", 
		"Name=hidden-00-fileKey", "Value=", "ENDITEM", 
		"Name=hidden-00-isUploaded", "Value=", "ENDITEM", 
		"Name=hidden-00-downloadRight", "Value=", "ENDITEM", 
		"Name=hidden-00-viewRight", "Value=", "ENDITEM", 
		"Name=hidden-00-deleteRight", "Value=", "ENDITEM", 
		"Name=hidden-00-itemRight", "Value=", "ENDITEM", 
		"Name=hidden-00-isDeleted", "Value=", "ENDITEM", 
		"Name=hidden-00-docType", "Value=", "ENDITEM", 
		"Name=hidden-00-recFulName", "Value=", "ENDITEM", 
		"Name=hidden-00-recDate", "Value=", "ENDITEM", 
		"Name=hidden-00-maxSize", "Value=", "ENDITEM", 
		"Name=hidden-00-isOverLarge", "Value=", "ENDITEM", 
		"Name=hidden-00-isTempSaved", "Value=", "ENDITEM", 
		"Name=hidden-00-tempDocName", "Value=", "ENDITEM", 
		"Name=hidden-00-prefileSize", "Value=", "ENDITEM", 
		"Name=hidden-00-isInvalidFile", "Value=", "ENDITEM", 
		"Name=hidden-00-docDispDepartment", "Value=", "ENDITEM", 
		"Name=hidden-00-contentType", "Value=", "ENDITEM", 
		"Name=hidden-00-fileName", "Value=", "ENDITEM", 
		"Name=hidden-00-typeFailed", "Value=", "ENDITEM", 
		"Name=upload-00-file", "Value=", "File=Yes", "ENDITEM", 
		"Name=upload-00-docCategory", "Value=", "ENDITEM", 
		"Name=upload-00-docDesc", "Value=", "ENDITEM", 
		"Name=isDocument", "Value=1", "ENDITEM", 
		"Name=isDocRequired", "Value=N", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=20026", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=20026", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=isGisFeatureRequired", "Value=N", "ENDITEM", 
		"Name=editPar", "Value=2112", "ENDITEM", 
		"Name=allViewIDGroup", "Value=225", "ENDITEM", 
		"Name=viewGroup", "Value=225", "ENDITEM", 
		"Name=formGroup", "Value=,capDetailForm,addressForm,parcelForm,ownerForm", "ENDITEM", 
		"Name=fromModel", "Value=cap", "ENDITEM", 
		"Name=modelId", "Value=", "ENDITEM", 
		"Name=fromEditPartialCap", "Value=", "ENDITEM", 
		"Name=fromMode", "Value=newSingle", "ENDITEM", 
		"Name=GISCommand", "Value=null", "ENDITEM", 
		"Name=isAddressList", "Value=true", "ENDITEM", 
		"Name=isParcelList", "Value=true", "ENDITEM", 
		"Name=isOwnerList", "Value=true", "ENDITEM", 
		"Name=isProfessionalList", "Value=", "ENDITEM", 
		"Name=value(contactValidatePassed)", "Value=true", "ENDITEM", 
		"Name=value(createCapForParcelType)", "Value=ALL", "ENDITEM", 
		"Name=SKIP_EMSE_FLAG", "Value=N", "ENDITEM", 
		"Name=isFromAssetList", "Value=null ", "ENDITEM", 
		"Name=isValidationFailed", "Value=null", "ENDITEM", 
		"Name=isValidated", "Value=null", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_12", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("EMSEMessage.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_13", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Building", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_14", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_08_SubmitApplication_AddNewApplication",2);

	lr_think_time(17);
	web_add_header("AppD_Header", "MILWAUKEE_TC3_08_SubmitApplication_ViewSummary");
	lr_start_transaction("MILWAUKEE_TC3_08_SubmitApplication_ViewSummary");

	web_url("session.do_15", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_16", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("CapTabSummary.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do",
		"Snapshot=t67.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("ajax.do_2",
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Snapshot=t68.inf",
		"Mode=HTML",
		"ITEMDATA",
		"LAST");

	web_submit_data("empty.jsp_14", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Snapshot=t70.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Snapshot=t71.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("search.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/x-json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Snapshot=t72.inf",
		"Mode=HTML",
		"Body=categoryName=Portlet - Expression",
		"LAST");

	web_custom_request("expression.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Snapshot=t73.inf",
		"Mode=HTML",
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22PIPE%20FOOTAGE%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22EQUIPMENT%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=TABSUMMARY&isReload=false&module=Building&capType=Building%2FPlumbing%2FGas%20Piping%2FNA",
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_08_SubmitApplication_ViewSummary",2);

	lr_think_time(17);
	web_add_header("AppD_Header", "MILWAUKEE_TC3_09_Record_ClickContact");
	lr_start_transaction("MILWAUKEE_TC3_09_Record_ClickContact");

	web_url("session.do_17", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_18",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Snapshot=t75.inf",
		"Mode=HTML",
		"LAST");

 





 
 
 
 
 
 
 
 
 

 





 
 
 
 
 
 
 
 
 

 





 
 
 
 
 
 
 
 
 

	web_url("contactList.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Snapshot=t76.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("empty.jsp_15", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building",
		"Snapshot=t78.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_4",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building",
		"Snapshot=t79.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_09_Record_ClickContact",2);

	lr_think_time(9);
    web_add_header("AppD_Header", "MILWAUKEE_TC3_10_Record_Contact_LookUpContact");
	lr_start_transaction("MILWAUKEE_TC3_10_Record_Contact_LookUpContact");

	web_url("session.do_19", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t80.inf", 
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

	web_url("refContactListForCap.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("ajax.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_16", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_10_Record_Contact_LookUpContact",2);
	web_add_header("AppD_Header", "MILWAUKEE_TC3_11_Record_Contact_LookUpContact_SearchContact");
	lr_start_transaction("MILWAUKEE_TC3_11_Record_Contact_LookUpContact_SearchContact");

	web_url("session.do_20", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("refContactListForCap.do_2",
		"Action=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building",
		"Snapshot=t90.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP", "Value=198e4ffa9334e3ad8a95d93684b39f9a", "ENDITEM",
		"Name=value(FirstEntryURL)", "Value=/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=", "ENDITEM",
		"Name=refresh_url", "Value=", "ENDITEM",
		"Name=buttonName", "Value=", "ENDITEM",
		"Name=modeName", "Value=search", "ENDITEM",
		"Name=module", "Value=Building", "ENDITEM",
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
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM",
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
		"Name=value(firstName)", "Value=a", "ENDITEM",
		"Name=value(fullName)", "Value=", "ENDITEM",
		"Name=value(addressLine1)", "Value=", "ENDITEM",
		"Name=value(addressLine2)", "Value=", "ENDITEM",
		"Name=value(addressLine3)", "Value=", "ENDITEM",
		"Name=value(city)", "Value=", "ENDITEM",
		"Name=value(state)", "Value=", "ENDITEM",
		"Name=value(zip)", "Value=", "ENDITEM",
		"Name=value(fax)", "Value=", "ENDITEM",
		"Name=value(preferredChannel)", "Value=", "ENDITEM",
		"Name=value(auditStatus)", "Value=", "ENDITEM",
		"Name=value(contactTypeFlag)", "Value=", "ENDITEM",
		"Name=value(tradeName)", "Value=", "ENDITEM",
		"Name=value(activityModel*activityTemplate)", "Value=", "ENDITEM",
		"Name=value(salutation)", "Value=", "ENDITEM",
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
		"Name=value(contactAddressModel*validateFlag)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*phone)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*fax)", "Value=", "ENDITEM",
		"Name=value(genericTemplateAttribute*fieldName)", "Value=", "ENDITEM",
		"Name=value(genericTemplateAttribute*defaultValue)", "Value=", "ENDITEM",
		"Name=value(genericTemplateTableValue*fieldName)", "Value=", "ENDITEM",
		"Name=value(genericTemplateTableValue*defaultValue)", "Value=", "ENDITEM",
		"Name=value(middleName)", "Value=", "ENDITEM",
		"Name=value(lastName)", "Value=", "ENDITEM",
		"Name=ACMask_21033_2_value(phone1_disp)", "Value=", "ENDITEM",
		"Name=ACMask_21033_2_value(phone1)", "Value=", "ENDITEM",
		"Name=value(contactSeqNumber)", "Value=", "ENDITEM",
		"Name=value(businessName)", "Value=", "ENDITEM",
		"Name=ACMask_21033_5_value(phone2_disp)", "Value=", "ENDITEM",
		"Name=ACMask_21033_5_value(phone2)", "Value=", "ENDITEM",
		"Name=value(email)", "Value=", "ENDITEM",
		"Name=ACMask_21033_21_value(phone3_disp)", "Value=", "ENDITEM",
		"Name=ACMask_21033_21_value(phone3)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*addressLine1)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*city)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*state)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*zip_disp)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*zip)", "Value=", "ENDITEM",
		"Name=value(countryCode)", "Value=", "ENDITEM",
		"Name=value(socialSecurityNumber)", "Value=", "ENDITEM",
		"Name=value(maskformat_socialSecurityNumber)", "Value=AAA-AA-AAAA", "ENDITEM",
		"Name=value(fein)", "Value=", "ENDITEM",
		"Name=value(maskformat_fein)", "Value=", "ENDITEM",
		"Name=date(birthDate)", "Value=", "ENDITEM",
		"Name=date(endBirthDate)", "Value=", "ENDITEM",
		"Name=value(gender)", "Value=", "ENDITEM",
		"Name=value(templateGroup)", "Value=G3CONTACT", "ENDITEM",
		"Name=valuetextarea39", "Value=", "ENDITEM",
		"Name=sourcetextarea39", "Value=", "ENDITEM",
		"Name=layouttextarea39", "Value=", "ENDITEM",
		"Name=uiuid", "Value=39", "ENDITEM",
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(socialSecurityNumber)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"}}}", "ENDITEM",
		"LAST");

	web_submit_data("empty.jsp_17", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_5",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t92.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_6",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t93.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_11_Record_Contact_LookUpContact_SearchContact",2);
	web_add_header("AppD_Header", "MILWAUKEE_TC3_12_Record_Contact_LookUpContact_SelectContact");
	lr_start_transaction("MILWAUKEE_TC3_12_Record_Contact_LookUpContact_SelectContact");

	web_url("session.do_21", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("xrefContactAddressForm.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/address/xrefContactAddressForm.do?mode=associate&module=Building",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t95.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP=198e4ffa9334e3ad8a95d93684b39f9a&value(FirstEntryURL)=%2Fportlets%2Fcontact%2Fref%2FrefContactListForCap.do%3Fvalue(mode)%3Dsearch%26value(lookup)%3Dtrue%26lookupdirect%3Dtrue%26fromDaily%3DY%26isDisableRefContact%3Dfalse%26value(usedQueryInfo)%3DY%26value(actType)%3Dlookupdirect%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcontact%2Fref%2FrefContactListForCap.do%3Fmodule%3DBuilding%26value(usedQueryInfo)%3DY&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=submit&modeName=list&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=11&exceptionLogID=&generalCAPSearch=&objectName=contactList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=11&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(mode)=searchresult&value(lookup)=true&value(capcontactid)=&val"
		"ue(sync)=&value(isDisableRefContact)=&value(refContactSeqNumber)=&value(scheduleNbr)=&value(locationNbr)=&value(refExamNbr)=&value(providerNbr)=&value(from)=&value(unDoAssign)=&value(providerEventBuilder)=&value(usedQueryInfo)=Y&value(actType)=lookupdirect&closeMatch=null&ac360_list_id_hiddenCheckbox=&chk_contactid=907029&chk_contactid_hiddenCheckbox=907029&entity_type_hidden=CONTACT&refContactId=907029&chk_contactid_hiddenCheckbox=907031&entity_type_hidden=CONTACT&refContactId=907031&chk_contactid_hiddenCheckbox=912135&entity_type_hidden=CONTACT&refContactId=912135&chk_contactid_hiddenCheckbox=1002019&entity_type_hidden=CONTACT&refContactId=1002019&chk_contactid_hiddenCheckbox=1002157&entity_type_hidden=CONTACT&refContactId=1002157&isDynaPaging=true&startDate=&",
		"LAST");

	web_submit_data("refContactListForCap.do_3",
		"Action=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t96.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP", "Value=198e4ffa9334e3ad8a95d93684b39f9a", "ENDITEM",
		"Name=value(FirstEntryURL)", "Value=/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/contact/ref/refContactListForCap.do?module=Building&value(usedQueryInfo)=Y", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=capList", "ENDITEM",
		"Name=refresh_url", "Value=/portlets/cap/capList.do?mode=view&module=Building", "ENDITEM",
		"Name=buttonName", "Value=submit", "ENDITEM",
		"Name=modeName", "Value=list", "ENDITEM",
		"Name=module", "Value=Building", "ENDITEM",
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
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM",
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
		"Name=chk_contactid", "Value=907029", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=907029", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=907029", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=907031", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=907031", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=912135", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=912135", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=1002019", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=1002019", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=1002157", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=1002157", "ENDITEM",
		"Name=isDynaPaging", "Value=true", "ENDITEM",
		"Name=startDate", "Value=", "ENDITEM",
		"LAST");

	web_submit_data("empty.jsp_18", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_7",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t98.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_8",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t99.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_12_Record_Contact_LookUpContact_SelectContact",2);

	lr_think_time(6);
	web_add_header("AppD_Header", "MILWAUKEE_TC3_13_Record_Click_CustomList");
	lr_start_transaction("MILWAUKEE_TC3_13_Record_Click_CustomList");

	web_url("session.do_22", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("appSpecInfoTableForm.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("search.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=categoryName", "Value=AppSpecInfoTableFilter", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_19", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("search.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		"LAST");

	web_custom_request("expression.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22PIPE%20FOOTAGE%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&isReload=false&module=Building&capType=Building%2FPlumbing%2FGas%20Piping%2FNA", 
		"LAST");

	web_custom_request("tabRecordCount.do_9",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building",
		"Snapshot=t106.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_10",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building",
		"Snapshot=t107.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_13_Record_Click_CustomList",2);

	lr_think_time(4);
	web_add_header("AppD_Header", "MILWAUKEE_TC3_14_Records_CustomList_Save");
	lr_start_transaction("MILWAUKEE_TC3_14_Records_CustomList_Save");

	web_url("session.do_23", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("appSpecInfoTableForm.do_2",
		"Action=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building",
		"Snapshot=t109.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=value(FirstEntryURL)", "Value=/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=", "ENDITEM",
		"Name=refresh_url", "Value=", "ENDITEM",
		"Name=buttonName", "Value=", "ENDITEM",
		"Name=modeName", "Value=list", "ENDITEM",
		"Name=module", "Value=Building", "ENDITEM",
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
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-2", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM",
		"Name=expressionPageType", "Value=SINGLEPORTLET", "ENDITEM",
		"Name=expression_page_reload_after_submit_or_validate_failed", "Value=true", "ENDITEM",
		"Name=value(appSpecTable*tableName)", "Value=DNS_GAS_LIST::PIPE+FOOTAGE", "ENDITEM",
		"Name=value(capID*ID1)", "Value=18CAP", "ENDITEM",
		"Name=value(capID*ID2)", "Value=00000", "ENDITEM",
		"Name=value(capID*ID3)", "Value={Param_ID3}", "ENDITEM",
		"Name=tableName", "Value=DNS_GAS_LIST::PIPE+FOOTAGE", "ENDITEM",
		"Name=INTEGRITY_CHECK", "Value=0", "ENDITEM",
		"LAST");

	web_submit_data("search.do_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=categoryName", "Value=AppSpecInfoTableFilter", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_20", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("search.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		"LAST");

	web_custom_request("expression.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22PIPE%20FOOTAGE%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&isReload=true&module=Building&capType=Building%2FPlumbing%2FGas%20Piping%2FNA", 
		"LAST");

	web_custom_request("tabRecordCount.do_11",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building",
		"Snapshot=t114.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_12",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building",
		"Snapshot=t115.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_14_Records_CustomList_Save",2);

	lr_think_time(12);
    web_add_header("AppD_Header", "MILWAUKEE_TC3_15_Record_Click_Inspections");
	lr_start_transaction("MILWAUKEE_TC3_15_Record_Click_Inspections");

	web_url("session.do_24", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(9);

 





	web_reg_save_param_ex(
		"ParamName=TokenInspectionList",
		"LB/IC=\"TRANSACTION_TOKEN_KEY_FOR_INSPECTIONLISTCAPSPECIFICFORM\" value=\"",
		"RB/IC=\"",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/inspectionListCapSpecific.do*",
		"LAST");

	web_url("inspectionListCapSpecific.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_21", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_13",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t119.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_14",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t120.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_15_Record_Click_Inspections",2);

	lr_think_time(13);
	web_add_header("AppD_Header", "MILWAUKEE_TC3_16_Record_Inspections_Click_ScheduleInspection");
	lr_start_transaction("MILWAUKEE_TC3_16_Record_Inspections_Click_ScheduleInspection");

	web_url("session.do_25", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("workloadingInspectionList.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doValidate&mType=0&isFromCAP=Y&module=Building",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t122.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_INSPECTIONLISTCAPSPECIFICFORM=d07fb36341ac47112e9f33d0ff833e76&value(FirstEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=220&exceptionLogID=&generalCAPSearch=&objectName=inspectionList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=220&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(mode)=view&value(CONFIRM_RESULT_WHEN_CANCEL)=&multipleResultType=&listType=recordInspectionList&errorShow=&noRight=&pageSizeR=null&",
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
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("selectRequiredInspections.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=loadInspTypeByGroup&InspGroup=BLD_PLM&CapId=18CAP-00000-{Param_ID3}&CapIdIndex=0",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building",
		"Snapshot=t124.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=4d715def0e1ecfaa7157d76659aa1f47&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=4d715def0e1ecfaa7157d76659aa1f47&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&pageSizeR=9999&",
		"LAST");

	web_submit_data("empty.jsp_22", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_26", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_16_Record_Inspections_Click_ScheduleInspection",2);

	web_url("session.do_27", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("selectRequiredInspections.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=loadListTitles",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building",
		"Snapshot=t128.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=4d715def0e1ecfaa7157d76659aa1f47&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=4d715def0e1ecfaa7157d76659aa1f47&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&pageSizeR=9999&",
		"LAST");
	web_add_header("AppD_Header", "MILWAUKEE_TC3_17_Record_SelectInspectionType_ClickPendingInspections");
	lr_start_transaction("MILWAUKEE_TC3_17_Record_SelectInspectionType_ClickPendingInspections");

	web_url("session.do_28", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		"LAST");

 





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
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building",
		"Snapshot=t130.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=4d715def0e1ecfaa7157d76659aa1f47&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=4d715def0e1ecfaa7157d76659aa1f47&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&value(chk_inspType%2C0)=on&value(inspTypeID%2C0)=84010502&value(selectCapID%2C0)=18CAP-00000-{Par"
		"am_ID3}&value(isInAdvance%2C0)=N&value(requiredInspection%2C0)=N&value(autoassign%2C0)=N&value(scheduleOrder%2C0)=&value(unitNBR%2C0)=&pageSizeR=9999&",
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_17_Record_SelectInspectionType_ClickPendingInspections",2);

	lr_think_time(56);

	lr_start_transaction("MILWAUKEE_TC3_18_Record_Inspection_SelectInspectionType_ClickPendingInspections_ClickOK");

	lr_end_transaction("MILWAUKEE_TC3_18_Record_Inspection_SelectInspectionType_ClickPendingInspections_ClickOK",2);
	web_add_header("AppD_Header", "MILWAUKEE_TC3_18_Record_Inspection_ClickInspection");
	lr_start_transaction("MILWAUKEE_TC3_18_Record_Inspection_ClickInspection");

	web_url("session.do_29", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("inspectionListCapSpecific.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_23", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_15",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t134.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_16",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t135.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_18_Record_Inspection_ClickInspection",2);

	lr_think_time(5);
	web_add_header("AppD_Header", "MILWAUKEE_TC3_19_Record_Inspection_SelectIPendingInspection_ClickScheduleInspection");
	lr_start_transaction("MILWAUKEE_TC3_19_Record_Inspection_SelectIPendingInspection_ClickScheduleInspection");

	web_url("session.do_30", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("workloadingInspectionList.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doValidate&mType=0&isFromCAP=Y&module=Building",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t137.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_INSPECTIONLISTCAPSPECIFICFORM=d07fb36341ac47112e9f33d0ff833e76&value(FirstEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=220&exceptionLogID=&generalCAPSearch=&objectName=inspectionList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=220&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(mode)=view&value(CONFIRM_RESULT_WHEN_CANCEL)=&multipleResultType=&listType=recordInspectionList&errorShow=&noRight=&value(chk_INSP%2C0)=0&value(ServProvCode%2C0)=MILWAUKEE&value(INSPID%2C0)={inspectionID}&value(CAPID1%2C0)=18CAP&value(CAPID2%2C0)=00000&value(CAPID3%2C0)={Param_ID3}&value(INSPSEQ%2C0)="
		"84010502&value(enabledCheck%2C0)=Y&documentDescription0=Insp%20Pending&inspectionCategory0=PENDING&pageSizeR=5&",
		"LAST");

	web_url("workloadingInspectionList.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_24", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("inspectionDetail.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_31", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("ajax.do_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_25", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_32", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("calendarInspectionWorkload.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/29/2018&hour=&ap=&module=Building&capId=18CAP-00000-{Param_ID3}&inspectionId={inspectionID}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building",
		"Snapshot=t145.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_19_Record_Inspection_SelectIPendingInspection_ClickScheduleInspection",2);
	web_add_header("AppD_Header", "MILWAUKEE_TC3_20_Record_Inspection_ScheduleInspection_SelectDepartment");
	lr_start_transaction("MILWAUKEE_TC3_20_Record_Inspection_ScheduleInspection_SelectDepartment");

	web_url("session.do_33", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_34", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("calendarInspectionWorkload.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/29/2018&hour=&ap=&module=Building&dept=MILWAUKEE%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&capId=18CAP-00000-{Param_ID3}&inspectionId={inspectionID}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building",
		"Snapshot=t148.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_20_Record_Inspection_ScheduleInspection_SelectDepartment",2);
	web_add_header("AppD_Header", "MILWAUKEE_TC3_21_Record_Inspection_ScheduleInspection_SelectUser");
	lr_start_transaction("MILWAUKEE_TC3_21_Record_Inspection_ScheduleInspection_SelectUser");

	web_url("session.do_35", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("calendarInspectionWorkload.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/29/2018&hour=&ap=&module=Building&dept=MILWAUKEE%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&userId=ADMIN&capId=18CAP-00000-{Param_ID3}&inspectionId={inspectionID}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building",
		"Snapshot=t150.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_21_Record_Inspection_ScheduleInspection_SelectUser",2);

	lr_think_time(5);    
	web_add_header("AppD_Header", "MILWAUKEE_TC3_22_Record_Inspection_ScheduleInspection_SubmitInspection");
	lr_start_transaction("MILWAUKEE_TC3_22_Record_Inspection_ScheduleInspection_SubmitInspection");

	web_url("session.do_36", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("inspectionDetail.do_2",
		"Action=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building",
		"Snapshot=t152.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=value(FirstEntryURL)", "Value=/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=", "ENDITEM",
		"Name=refresh_url", "Value=", "ENDITEM",
		"Name=buttonName", "Value=", "ENDITEM",
		"Name=modeName", "Value=pendingEditInit", "ENDITEM",
		"Name=module", "Value=Building", "ENDITEM",
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
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", "ENDITEM",
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
		"Name=value(requestCommentText0)", "Value=", "ENDITEM",
		"Name=hiddenInspection0", "Value=true", "ENDITEM",
		"Name=value(displayinaca0)", "Value=Y", "ENDITEM",
		"LAST");

	web_submit_data("empty.jsp_26", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_37", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("inspectionDetail.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?value(mode)=validateAndGetNextAvailableTime",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building",
		"Snapshot=t155.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_MANAGEINSPECTIONLISTFORM=4685cf0ca3bb45c79c530ff425c1ee55&value(FirstEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=pendingEditInit&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=265&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=265&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(mode)=pendingEditSave&value(deptOfUserAll)=MILWAUKEE%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(gaUserIDAll)=ADMIN&date(scheduledDateAll)=&value(scheduledStartTimeHourAll)=&value(scheduledStartTimeMinuteAll)=&value(scheduledStartTimeAMPMAll)=&val"
		"ue(scheduledEndTimeHourAll)=&value(scheduledEndTimeMinuteAll)=&value(scheduledEndTimeAMPMAll)=&ac360_list_id=on0&value(pendingInspScheduleOrder%2C0)=&value(inspectionId%2C0)={inspectionID}&value(pendingCapID%2C0)=18CAP-00000-{Param_ID3}&value(inspectionTypeId%2C0)=84010502&value(calendarIds%2C0)=&value(requiredInspection%2C0)=N&value(inspectionType%2C0)=Pre-Inspections&value(actualUnits%2C0)=&value(inspectionStatus0)=Scheduled&value(requestCommentText0)=&value(gisArea0)=&value(reqPhoneNumIDD0)=&value(reqPhoneNum0)=&value(displayinaca0)=Y&value(latitude0)=&value(longitude0)=&value(unitNBR0)=&value(restrictRole0)=&value(activityModel*requestorFname0)=&value(activityModel*requestorMname0)=&value(activityModel*requestorLname0)=&value(scheduledStartTimeHourHidden%2C0)=&value(scheduledStartTimeMinuteHidden%2C0)=&value(scheduledStartTimeAMPMHidden%2C0)=&value(scheduledEndTimeHourHidden%2C0)=&value(scheduledEndTimeMinuteHidden%2C0)=&value(scheduledEndTimeAMPMHidden%2C0)=&value(activityModel*contactFname0)=&value(ac"
		"tivityModel*contactMname0)=&value(activityModel*contactLname0)=&value(contactNbr0)=&value(contactPhoneNumIDD0)=&value(contactPhoneNum0)=&value(estimatedTimeHour0)=&value(estimatedTimeMinute0)=&value(estimatedTimeAMPM0)=&value(estimatedEndTimeHour0)=&value(estimatedEndTimeMinute0)=&value(estimatedEndTimeAMPM0)=&date(activityModel*desiredDate0)=&value(desiredTimeHour0)=&value(desiredTimeMinute0)=&value(desiredTimeAMPM0)=&value(isRestrictView4ACA0)=off&value(capId)=&value(groupCode)=&value(deptOfUser%2C0)=MILWAUKEE%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(initInspector%2C0)=&value(gaUserID%2C0)=ADMIN&date(scheduleDate%2C0)=08%2F29%2F2018&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&pageSizeR=9999&",
		"LAST");

	web_url("viewValidationResultMsg.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/viewValidationResultMsg.do?mode=viewResultMsg&from=confirm&indexCount=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_27", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_22_Record_Inspection_ScheduleInspection_SubmitInspection",2);
	web_add_header("AppD_Header", "MILWAUKEE_TC3_23_Record_Inspection_ScheduleInspection_ClickOK");
	lr_start_transaction("MILWAUKEE_TC3_23_Record_Inspection_ScheduleInspection_ClickOK");

	web_url("session.do_38", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("workloadingInspectionList.do_5",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditSave&operateType=refresh&convertToJson=true",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building",
		"Snapshot=t159.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_MANAGEINSPECTIONLISTFORM=4685cf0ca3bb45c79c530ff425c1ee55&value(FirstEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=pendingEditInit&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=265&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=265&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(mode)=pendingEditSave&value(deptOfUserAll)=MILWAUKEE%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(gaUserIDAll)=ADMIN&date(scheduledDateAll)=&value(scheduledStartTimeHourAll)=&value(scheduledStartTimeMinuteAll)=&value(scheduledStartTimeAMPMAll)=&val"
		"ue(scheduledEndTimeHourAll)=&value(scheduledEndTimeMinuteAll)=&value(scheduledEndTimeAMPMAll)=&ac360_list_id=on0&value(pendingInspScheduleOrder%2C0)=&value(inspectionId%2C0)={inspectionID}&value(pendingCapID%2C0)=18CAP-00000-{Param_ID3}&value(inspectionTypeId%2C0)=84010502&value(calendarIds%2C0)=&value(requiredInspection%2C0)=N&value(inspectionType%2C0)=Pre-Inspections&value(actualUnits%2C0)=&value(inspectionStatus0)=Scheduled&value(requestCommentText0)=&value(gisArea0)=&value(reqPhoneNumIDD0)=&value(reqPhoneNum0)=&value(displayinaca0)=Y&value(latitude0)=&value(longitude0)=&value(unitNBR0)=&value(restrictRole0)=&value(activityModel*requestorFname0)=&value(activityModel*requestorMname0)=&value(activityModel*requestorLname0)=&value(scheduledStartTimeHourHidden%2C0)=&value(scheduledStartTimeMinuteHidden%2C0)=&value(scheduledStartTimeAMPMHidden%2C0)=&value(scheduledEndTimeHourHidden%2C0)=&value(scheduledEndTimeMinuteHidden%2C0)=&value(scheduledEndTimeAMPMHidden%2C0)=&value(activityModel*contactFname0)=&value(ac"
		"tivityModel*contactMname0)=&value(activityModel*contactLname0)=&value(contactNbr0)=&value(contactPhoneNumIDD0)=&value(contactPhoneNum0)=&value(estimatedTimeHour0)=&value(estimatedTimeMinute0)=&value(estimatedTimeAMPM0)=&value(estimatedEndTimeHour0)=&value(estimatedEndTimeMinute0)=&value(estimatedEndTimeAMPM0)=&date(activityModel*desiredDate0)=&value(desiredTimeHour0)=&value(desiredTimeMinute0)=&value(desiredTimeAMPM0)=&value(isRestrictView4ACA0)=off&value(capId)=&value(groupCode)=&value(deptOfUser%2C0)=MILWAUKEE%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(initInspector%2C0)=&value(gaUserID%2C0)=ADMIN&date(scheduleDate%2C0)=08%2F29%2F2018&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&pageSizeR=9999&",
		"LAST");

	lr_end_transaction("MILWAUKEE_TC3_23_Record_Inspection_ScheduleInspection_ClickOK",2);

	lr_think_time(23);
    
	lr_start_transaction("MILWAUKEE_TC3_24_Record_inspection_ScheduleInspection_ClickOK_OK");

	lr_end_transaction("MILWAUKEE_TC3_24_Record_inspection_ScheduleInspection_ClickOK_OK",2);
	web_add_header("AppD_Header", "MILWAUKEE_SignOut");
	lr_start_transaction("MILWAUKEE_SignOut");

	web_url("signoff.do", 
		"URL=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("portal", 
		"Action=https://av-pt-ferrari.accela.com/jetspeed/portal?action=JClearCookie", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("logoutAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=MILWAUKEE&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("hostSignon.do_3", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=MILWAUKEE&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("MILWAUKEE_SignOut",2);

	return 0;
}
# 5 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\milwaukee\\milwaukee_tc3\\\\combined_MILWAUKEE_TC3.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\milwaukee\\milwaukee_tc3\\\\combined_MILWAUKEE_TC3.c" 2

