# 1 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\pasco\\pasco_tc3\\\\combined_PASCO_TC3.c"
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







 
 



















# 1 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\pasco\\pasco_tc3\\\\combined_PASCO_TC3.c" 2

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

 
 
 

                               


 
 
 





















# 2 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\pasco\\pasco_tc3\\\\combined_PASCO_TC3.c" 2

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





 
 





# 3 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\pasco\\pasco_tc3\\\\combined_PASCO_TC3.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\pasco\\pasco_tc3\\\\combined_PASCO_TC3.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("dashboard.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t165.inf", 
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
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(19);
    web_add_header("AppD_Header", "PASCO_Login");
	lr_start_transaction("PASCO_Login");

	web_custom_request("loginAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?requestType=checkWebSSOAdapter&servProvCode=PASCO", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		"LAST");

	lr_think_time(4);

	web_submit_data("hostSignon.do_2",
		"Action=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true",
		"Snapshot=t168.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=action", "Value=signon", "ENDITEM",
		"Name=successUrl", "Value=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", "ENDITEM",
		"Name=cookieUserName", "Value=", "ENDITEM",
		"Name=cookieAgencyName", "Value=", "ENDITEM",
		"Name=requestToken", "Value={requestToken}", "ENDITEM",
		"Name=requestLanguageToken", "Value={requestLanguageToken}", "ENDITEM",
		"Name=password1", "Value=", "ENDITEM",
		"Name=servProvCode", "Value=PASCO", "ENDITEM",
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
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(4);

	web_custom_request("text.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t170.inf", 
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
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={}", 
		"LAST");

	web_url("session.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("PASCO_Login",2);

	lr_think_time(5);
	web_add_header("AppD_Header", "PASCO_TC3_01_ClickRecords");
	lr_start_transaction("PASCO_TC3_01_ClickRecords");

	web_url("session.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(4);

	web_url("session.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("myCAPDetailPortlet.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("PASCO_TC3_01_ClickRecords",2);

	lr_think_time(6);
    web_add_header("AppD_Header", "PASCO_TC3_02_Records_ClickNew");
	lr_start_transaction("PASCO_TC3_02_Records_ClickNew");

	web_url("session.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Permits&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("capTypePickerSelector.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Permits&isGeneralCAP=Y", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Permits&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t180.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Permits&isGeneralCAP=Y", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Permits&isGeneralCAP=Y", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("PASCO_TC3_02_Records_ClickNew",2);

	lr_think_time(6);
    web_add_header("AppD_Header", "PASCO_TC3_03_SelectRecordType_OpenSpearForm");
	lr_start_transaction("PASCO_TC3_03_SelectRecordType_OpenSpearForm");

	web_url("session.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Permits&isGeneralCAP=Y", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(6);

	web_url("session.do_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Permits&isGeneralCAP=Y", 
		"Snapshot=t184.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("capTypePicker.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=validateCapType&modelId=&module=Permits", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Permits&isGeneralCAP=Y", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fpicker%2FcapTypePicker.do%3FfromModel%3Dcap%26module%3DPermits%26isGeneralCAP%3DY&value(CurrentEntryURL)=%2Fportlets%2Fpicker%2FcapTypePicker.do%3FfromModel%3Dcap%26module%3DPermits%26isGeneralCAP%3DY&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=&module=Permits&accelasubmitbuttonname=&itemName=&CurrentViewID=119&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID"
		"=119&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(capTypeModel*type)=Residential&value(capTypeModel*subType)=Electrical&value(capTypeModel*category)=Elec%20Service%20Change-Upgrade&value(selectModuleName)=Permits&value(g1AssetGroup)=&value(g1AssetType)=&value(mode)=add&value(createCapForParcelType)=ALL&value(srLevel)=&value(capGroupIndex)=&value(capTypeModel*group)=Permits&value(capTypeModel)="
		"Permits%2FResidential%2FElectrical%2FElec%20Service%20Change-Upgrade&value(fromModel)=cap&value(modelId)=&value(formKey)=&value(GISCommand)=&", 
		"LAST");

	web_submit_data("capTypePicker.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Permits&isGeneralCAP=Y", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=value(FirstEntryURL)", "Value=/portlets/picker/capTypePicker.do?fromModel=cap&module=Permits&isGeneralCAP=Y", "ENDITEM", 
		"Name=value(CurrentEntryURL)", "Value=/portlets/picker/capTypePicker.do?fromModel=cap&module=Permits&isGeneralCAP=Y", "ENDITEM", 
		"Name=portlet_language", "Value=en_US", "ENDITEM", 
		"Name=refresh_target", "Value=", "ENDITEM", 
		"Name=refresh_url", "Value=", "ENDITEM", 
		"Name=buttonName", "Value=", "ENDITEM", 
		"Name=modeName", "Value=", "ENDITEM", 
		"Name=module", "Value=Permits", "ENDITEM", 
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
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=value(capTypeModel*type)", "Value=Residential", "ENDITEM", 
		"Name=value(capTypeModel*subType)", "Value=Electrical", "ENDITEM", 
		"Name=value(capTypeModel*category)", "Value=Elec Service Change-Upgrade", "ENDITEM", 
		"Name=value(selectModuleName)", "Value=Permits", "ENDITEM", 
		"Name=value(g1AssetGroup)", "Value=", "ENDITEM", 
		"Name=value(g1AssetType)", "Value=", "ENDITEM", 
		"Name=value(mode)", "Value=add", "ENDITEM", 
		"Name=value(createCapForParcelType)", "Value=ALL", "ENDITEM", 
		"Name=value(srLevel)", "Value=", "ENDITEM", 
		"Name=value(capGroupIndex)", "Value=", "ENDITEM", 
		"Name=value(capTypeModel*group)", "Value=Permits", "ENDITEM", 
		"Name=value(capTypeModel)", "Value=Permits/Residential/Electrical/Elec Service Change-Upgrade", "ENDITEM", 
		"Name=value(fromModel)", "Value=cap", "ENDITEM", 
		"Name=value(modelId)", "Value=", "ENDITEM", 
		"Name=value(formKey)", "Value=", "ENDITEM", 
		"Name=value(GISCommand)", "Value=", "ENDITEM", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=FL&stateProperty=value(addressesModel*state)&aaZoneId=aazone-country-state&stateReadOnly=false&country=US&tempModuleName=Permits&aaxmlrequest=true&aa_rand=0.5490611775312573&aazones=aazone-country-state&width=58px", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		"Body=aazone-country-state", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=FL&stateProperty=value(mailState)&aaZoneId=aazone-country-mailstate&stateReadOnly=false&country=US&tempModuleName=Permits&aaxmlrequest=true&aa_rand=0.14414824778214097&aazones=aazone-country-mailstate&width=59px", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		"Body=aazone-country-mailstate", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(professionalModel*state)&aaZoneId=professional-aazone-country-state&stateReadOnly=true&country=US&tempModuleName=Permits&aaxmlrequest=true&aa_rand=0.9232060802169144&aazones=professional-aazone-country-state&width=58px", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t189.inf", 
		"Mode=HTML", 
		"Body=professional-aazone-country-state", 
		"LAST");

	web_submit_data("ajax.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t190.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=FL&stateProperty=value(applicant*state)&aaZoneId=aazone-country-state-applicant&stateReadOnly=false&country=US&tempModuleName=Permits&aaxmlrequest=true&aa_rand=0.7197291278280318&aazones=aazone-country-state-applicant&width=58px", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		"Body=aazone-country-state-applicant", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(applicant*birthState)&aaZoneId=aazone-applicant-birth-state-contact&stateReadOnly=false&country=&tempModuleName=Permits&aaxmlrequest=true&aa_rand=0.08746583946049213&aazones=aazone-applicant-birth-state-contact&width=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		"Body=aazone-applicant-birth-state-contact", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(applicant*driverLicenseState)&aaZoneId=aazone-applicant-driver-license-state&stateReadOnly=false&country=US&tempModuleName=Permits&aaxmlrequest=true&aa_rand=0.8208833246026188&aazones=aazone-applicant-driver-license-state&width=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		"Body=aazone-applicant-driver-license-state", 
		"LAST");

	web_url("blank.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t194.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("blank.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t195.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("blank.jsp_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t196.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("getGISListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?module=Permits&mode=getGISListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t197.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("blank.jsp_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("blank.jsp_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t199.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t200.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("documentForm.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/document/documentForm.do?value(mode)=search&group=PMT", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("getGISListBySingle.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?mode=getGISListBySingle&module=Permits", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("genericTemplate.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/generictemplate/genericTemplate.do?mode=getTemplateByDocumentType&uiUID=14&module=Permits&docType=&docGroup=PMT", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		"Body=&docTemplateUIUID=14&valuetextarea14=&sourcetextarea14=&docGroup=PMT&docType=&docCategory=&documentSeq=&isFromDocDetail=N", 
		"LAST");

	web_submit_data("empty.jsp_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t204.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t205.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t206.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t207.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t208.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("search.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t209.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		"LAST");

	web_submit_data("appSpecInfoForm.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=buildDrillList&module=Permits&guideSheetSeq=&singleMode=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t210.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t211.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t212.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t213.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t214.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t215.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t216.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t217.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t218.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t219.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_10", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t220.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_11", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t221.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("expression.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t222.inf", 
		"Mode=HTML", 
		"Body=argumentPKs=%5B%7B%22portletID%22%3A20021%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A122%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A121%2C%22viewKey1%22%3A%22Applicant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&isReload=false"
		"&module=Permits&capType=Permits%2FResidential%2FElectrical%2FElec%20Service%20Change-Upgrade", 
		"LAST");

	web_custom_request("expression.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t223.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Permits&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&value(srTest)=&value(capType)="
		"Permits%2FResidential%2FElectrical%2FElec%20Service%20Change-Upgrade&value(capID)=&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&value(capType)=Permits%2FResidential%2FElectrical%2FElec%20Service%20Change-Upgrade&date(capModel*fileDate)=08%2F29%2F2018&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date"
		"(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capModel*capStatus)=Submitted&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value"
		"(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F29%2F2018&value(capModel*reportedTime)=&value"
		"(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value"
		"(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&value(capModel*altID)=&value(capModel*isManualAltID)=&originalCAPAltID=&value(capDetailModel*shortNotes)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow="
		"A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&validateFlagOriginalValue=&value(addressesModel*addressType)="
		"&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberStart)=&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value(addressesModel*streetDirection)=&value"
		"(addressesModel*streetSuffixdirection)=&value(addressesModel*unitEnd)=&value(addressesModel*sourceFlag)=&value(addressesModel*addressTypeFlag)=&value(addressesModel*validateFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*neighborhood)=&value(addressesModel*county)=&value"
		"(addressesModel*addressStatus)=&value(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine1)=&value(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*streetName)=&value(addressesModel*streetSuffix)=&value(addressesModel*unitType)=&value(addressesModel*unitStart)=&value(addressesModel*primaryFlag)=Y&value(addressesModel*city)=&value(addressesModel*state)=FL&value(addressesModel*zip_disp)=&value(addressesModel*zip)=&value"
		"(addressesModel*countryCode)=US&value(addressesModel*XCoordinator)=&value(addressesModel*YCoordinator)=&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=&value(l1addressnbr)=&value(l1addressnbr1)=&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=&isAddress=1&isAddressValidation=Y&isAddressRequired=Y&isShowParcel=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&"
		"sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=20021&"
		"expression_portlet_to_be_populate=-99999&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&value(unmaskedParcelNumber)=&value(parcelNo)=&value(book)=&value(page)=&value(parcel)=&value(landValue)=&value(improvedValue)=&value(exemptValue)=&value(tract)=&value(mapNo)=&value(censusTract)=&value(supervisorDistrict)=&value(councilDistrict)=&value(planArea)=&value(mapRef)=&value(gisSeqNo)=&value(unmaskedParcelNumber)=&value(parcelArea)=&value(unmaskedParcelNumber)=&"
		"value(section)=&value(unmaskedParcelNumber)=&value(township)=&value(unmaskedParcelNumber)=&value(range)=&value(unmaskedParcelNumber)=&value(primaryParcelFlagWithoutDealing)=&value(unmaskedParcelNumber)=&value(legalDesc)=&value(unmaskedParcelNumber)=&value(lot)=&value(unmaskedParcelNumber)=&value(block)=&value(unmaskedParcelNumber)=&template_CAP_PARCEL_ACTUAL_YEAR_BUILT=&template_CAP_PARCEL_ASSESSMENTNAME=&template_CAP_PARCEL_DIR_CARD_COUNT=&template_CAP_PARCEL_EVACZONES=&template_CAP_PARCEL_FEMA=&"
		"template_CAP_PARCEL_FUTURELANDUSE=&template_CAP_PARCEL_LEGAL_DESCRIPTION_CONTINUED=&template_CAP_PARCEL_MAF_BDG_REP_VAL=&template_CAP_PARCEL_MOBILITYFEEAREA=&template_CAP_PARCEL_MPUD=&template_CAP_PARCEL_NONADJUSTED=&template_CAP_PARCEL_PARKFEE=&template_CAP_PARCEL_STORMFLOODS=&template_CAP_PARCEL_TAZ=&template_CAP_PARCEL_TIF=&template_CAP_PARCEL_VAL_BLDG_DEPR_35_PERCENT=&template_CAP_PARCEL_VAL_BLDG_DEPR_50_PERCENT=&template_CAP_PARCEL_WASTEWATERSERVICEAREAS=&template_CAP_PARCEL_WATERSERVICEAREAS"
		"=&template_CAP_PARCEL_WETLANDS=&template_CAP_PARCEL_WINDCODE=&template_CAP_PARCEL_ZONEAREA=&template_CAP_PARCEL_VAL_APPR=&template_CAP_PARCEL_VAL_TAX_AREA=&template_CAP_PARCEL_VAL_EXEM_AMT=&value(templateGroup)=CAP&value(unmaskedParcelNumber)=&value(inspectionDistrict)=&value(unmaskedParcelNumber)=&value(subdivision)=&value(mode)=New&value(parcelModel*UID)=&value(l1ParcelNo)=&value(parcelNoBySearch1)=&value(parcelSearchType)=local&isParcel=1&parcelViewID=20021&value(parcelUID)=&value(parcelUID1)=&"
		"isParcelValidation=N&isParcelRequired=Y&isShowOwner=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&"
		"MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(mailAddress2)=&value(mailAddress3)=&value(fax)=&value(primaryOwner)=Y&value(mailAddress1)=&value(phone_disp)=&value(phone)=&value(mailCity)=&value(mailState)=FL&value(mailZip_disp)=&value(mailZip)=&value(mailCountry)=US&value(email)=&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value"
		"(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=N&isOwnerRequired=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&"
		"sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=122&expression_portlet_to_be_populate=-99999&isPartialCap=null&value(professionalModel*licensenbr)=&value(professionalModel*address3)=&value(professionalModel*phone3)=&value(professionalModel*fax"
		")=&value(professionalModel*gender)=&value(professionalModel*postOfficeBox)=&value(professionalModel*busName2)=&value(professionalModel*licenseBoard)=&date(professionalModel*birthDate)=&value(professionalModel*typeFlag)=&value(professionalModel*maskedSsn)=&value(professionalModel*fein)=&value(professionalModel*title)=&value(professionalModel*suffixName)=&value(professionalModel*licensetype)=&value(professionalModel*printFlag)=Y&value(professionalModel*salutation)=&value"
		"(professionalModel*contactfirstname)=&value(professionalModel*contactmiddlename)=&value(professionalModel*contactlastname)=&date(professionalModel*lastUpdateDate)=&value(professionalModel*businessname)=&value(professionalModel*businesslicense)=&value(professionalModel*address1)=&value(professionalModel*phone2_disp)=&value(professionalModel*phone2)=&value(professionalModel*phone1_disp)=&value(professionalModel*phone1)=&value(professionalModel*address2)=&value(professionalModel*city)=&value"
		"(professionalModel*zip_disp)=&value(professionalModel*zip)=&value(professionalModel*email)=&value(professionalModel*comment)=&value(templateGroup)=CAP_PROFESSIONAL&value(mode)=New&value(modePro)=add&valuetextarea13=&sourcetextarea13=&layouttextarea13=&professionalModel*uiuid=13&value(professionalSearchType)=&value(licSeqNbr)=&isProfessional=1&professionalViewID=122&isProfessionalValidation=N&isProfessionalRequired=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&"
		"ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*relation)=&value(applicant*title)=&value(applicant*addressId)=&value(applicant*addressLine2)=&value(applicant*addressLine3)=&value(applicant*confirmEmail)=&value"
		"(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(applicant*maskedSsn)=&value(applicant*fein)=&value(applicant*tradeName)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(applicant*salutation)=&value(applicant*gender)=&value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value(applicant*businessName2)=&value(applicant*birthCity)=&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&"
		"date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*flag)=Y&value(applicant*preferredChannel)=&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone1_disp)=&value(applicant*phone1)=&value(applicant*addressLine1)=&value(applicant*phone2_disp)=&value(applicant*phone2)=&value(applicant*city)=&value(applicant*state)=FL&value"
		"(applicant*zip_disp)=&value(applicant*zip)=&value(applicant*phone3_disp)=&value(applicant*phone3)=&value(applicant*businessName)=&value(applicant*countryCode)=US&value(applicant*email)=&displasy*applicant*email=Y&value(applicant*fullName)=&value(templateGroup)=CAP&valuetextarea12=&sourcetextarea12=%7B%22UIUID%22%3A12%7D&layouttextarea12=null&applicant*uiuid=12&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=Y&applicantAccessRight=F&applicantContactNumber=null&value"
		"(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&value(bValuatnModel*estimatedValue)=&value(capDetailModel*houseCount)=0&value(capDetailModel*buildingCount)=0&value(capDetailModel*publicOwned)=N&value(capDetailModel*constTypeCode)=&isAdditional=1&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=GENERAL%2BINFORMATION&app_spec_info_GENERAL_INFORMATION_Office_Location=NPR&app_spec_info_GENERAL_INFORMATION_Census_Code=System%20Generated&"
		"app_spec_info_GENERAL_INFORMATION_Name_of_Lessee=&app_spec_info_GENERAL_INFORMATION_Expiration_Date=&app_spec_info_GENERAL_INFORMATION_Expiration_Date=&singleModeName=PERMIT%2BINFORMATION&app_spec_info_PERMIT_INFORMATION_Number_of_Termination_Points=1&singleModeName=REQUIRED%2BTRADE&app_spec_info_REQUIRED_TRADE_Plumbing_Value=Y&app_spec_info_REQUIRED_TRADE_Electrical_Value=Y&app_spec_info_REQUIRED_TRADE_Electrical=on&app_spec_info_REQUIRED_TRADE_Mechanical_Value=Y&"
		"app_spec_info_REQUIRED_TRADE_LP_or_Natural_Gas_Value=Y&app_spec_info_REQUIRED_TRADE_Fire_Value=Y&app_spec_info_REQUIRED_TRADE_Temp_Underground_Electric_Value=Y&singleModeName=GIS%2BINFORMATION&app_spec_info_GIS_INFORMATION_Taxing_Authority=&app_spec_info_GIS_INFORMATION_Taxing_Authority=&app_spec_info_GIS_INFORMATION_FEMA=&app_spec_info_GIS_INFORMATION_FEMA=&app_spec_info_GIS_INFORMATION_Actual_Year_Built=&app_spec_info_GIS_INFORMATION_Actual_Year_Built=&app_spec_info_GIS_INFORMATION_Wind_Speed=&"
		"app_spec_info_GIS_INFORMATION_Wind_Speed=&app_spec_info_GIS_INFORMATION_Depreciated_Value_50%2525=&app_spec_info_GIS_INFORMATION_Depreciated_Value_50%2525=&singleModeName=UTILITY%2BINFORMATION&app_spec_info_UTILITY_INFORMATION_Power_Company=&app_spec_info_UTILITY_INFORMATION_Notes%253A=&singleModeName=PROPOSED%2BCONSTRUCTION%2BINFO&app_spec_info_PROPOSED_CONSTRUCTION_INFO_Replacement_Structure=&app_spec_info_PROPOSED_CONSTRUCTION_INFO_Substantial_Damage%252FImprovement_Document=&value(mode)=New&"
		"expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&"
		"isGisFeatureRequired=N&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&"
		"fileCount=0&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel"
		"=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError=No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc="
		"%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL=%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DPermits%252FResidential%252FElectrical%252FElec%2BService%2BChange-Upgrade%26module%3DPermits&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea14=&sourcetextarea14=&layouttextarea14=&docTemplateUIUID=14&value"
		"(docGroup)=PMT&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(alsoAttachTo)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)=NONE&documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&"
		"hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName"
		"=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&alsoattachto-00-doc=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&"
		"hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20021%2C20026%2C122%2C121%2C21031&viewGroup="
		"%2C225%2C117%2C20021%2C20026%2C122%2C121%2C21031&formGroup=%2CcapDetailForm%2CaddressForm%2CparcelForm%2CownerForm%2CrefProfessionalDetailActionForm%2CapplicantDetailForm%2CaddtInfoForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=ALL&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_="
		"%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(professionalModel*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(professionalModel*fein)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber=undefined&argumentPKs="
		"%5B%7B%22portletID%22%3A20021%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A122%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A121%2C%22viewKey1%22%3A%22Applicant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute", 
		"LAST");

	lr_end_transaction("PASCO_TC3_03_SelectRecordType_OpenSpearForm",2);

	lr_think_time(6);
    web_add_header("AppD_Header", "PASCO_TC3_04_Address_Clear");
	lr_start_transaction("PASCO_TC3_04_Address_Clear");

	web_url("session.do_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t224.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("refAddressListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingle.do?mode=clearAddress&module=Permits", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t225.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Permits&accelasubmitbuttonname=&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&value(mode)=add&value(srTest)=&value(capType)="
		"Permits%2FResidential%2FElectrical%2FElec%20Service%20Change-Upgrade&value(capID)=&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&value(capType)=Permits%2FResidential%2FElectrical%2FElec%20Service%20Change-Upgrade&date(capModel*fileDate)=08%2F29%2F2018&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date"
		"(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capModel*capStatus)=Submitted&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value"
		"(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F29%2F2018&value(capModel*reportedTime)=&value"
		"(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value"
		"(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&value(capModel*altID)=&value(capModel*isManualAltID)=&originalCAPAltID=&value(capDetailModel*shortNotes)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow="
		"A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&validateFlagOriginalValue=&value(addressesModel*addressType)="
		"&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberStart)=&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value(addressesModel*streetDirection)=&value"
		"(addressesModel*streetSuffixdirection)=&value(addressesModel*unitEnd)=&value(addressesModel*sourceFlag)=&value(addressesModel*addressTypeFlag)=&value(addressesModel*validateFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*neighborhood)=&value(addressesModel*county)=&value"
		"(addressesModel*addressStatus)=&value(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine1)=&value(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*streetName)=&value(addressesModel*streetSuffix)=&value(addressesModel*unitType)=&value(addressesModel*unitStart)=&value(addressesModel*primaryFlag)=Y&value(addressesModel*city)=&value(addressesModel*state)=FL&value(addressesModel*zip_disp)=&value(addressesModel*zip)=&value"
		"(addressesModel*countryCode)=US&value(addressesModel*XCoordinator)=&value(addressesModel*YCoordinator)=&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=&value(l1addressnbr)=&value(l1addressnbr1)=&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=&isAddress=1&isAddressValidation=Y&isAddressRequired=Y&isShowParcel=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&"
		"sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=20021&"
		"expression_portlet_to_be_populate=-99999&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&value(unmaskedParcelNumber)=&value(parcelNo)=&value(book)=&value(page)=&value(parcel)=&value(landValue)=&value(improvedValue)=&value(exemptValue)=&value(tract)=&value(mapNo)=&value(censusTract)=&value(supervisorDistrict)=&value(councilDistrict)=&value(planArea)=&value(mapRef)=&value(gisSeqNo)=&value(unmaskedParcelNumber)=&value(parcelArea)=&value(unmaskedParcelNumber)=&"
		"value(section)=&value(unmaskedParcelNumber)=&value(township)=&value(unmaskedParcelNumber)=&value(range)=&value(unmaskedParcelNumber)=&value(primaryParcelFlagWithoutDealing)=&value(unmaskedParcelNumber)=&value(legalDesc)=&value(unmaskedParcelNumber)=&value(lot)=&value(unmaskedParcelNumber)=&value(block)=&value(unmaskedParcelNumber)=&template_CAP_PARCEL_ACTUAL_YEAR_BUILT=&template_CAP_PARCEL_ASSESSMENTNAME=&template_CAP_PARCEL_DIR_CARD_COUNT=&template_CAP_PARCEL_EVACZONES=&template_CAP_PARCEL_FEMA=&"
		"template_CAP_PARCEL_FUTURELANDUSE=&template_CAP_PARCEL_LEGAL_DESCRIPTION_CONTINUED=&template_CAP_PARCEL_MAF_BDG_REP_VAL=&template_CAP_PARCEL_MOBILITYFEEAREA=&template_CAP_PARCEL_MPUD=&template_CAP_PARCEL_NONADJUSTED=&template_CAP_PARCEL_PARKFEE=&template_CAP_PARCEL_STORMFLOODS=&template_CAP_PARCEL_TAZ=&template_CAP_PARCEL_TIF=&template_CAP_PARCEL_VAL_BLDG_DEPR_35_PERCENT=&template_CAP_PARCEL_VAL_BLDG_DEPR_50_PERCENT=&template_CAP_PARCEL_WASTEWATERSERVICEAREAS=&template_CAP_PARCEL_WATERSERVICEAREAS"
		"=&template_CAP_PARCEL_WETLANDS=&template_CAP_PARCEL_WINDCODE=&template_CAP_PARCEL_ZONEAREA=&template_CAP_PARCEL_VAL_APPR=&template_CAP_PARCEL_VAL_TAX_AREA=&template_CAP_PARCEL_VAL_EXEM_AMT=&value(templateGroup)=CAP&value(unmaskedParcelNumber)=&value(inspectionDistrict)=&value(unmaskedParcelNumber)=&value(subdivision)=&value(mode)=New&value(parcelModel*UID)=&value(l1ParcelNo)=&value(parcelNoBySearch1)=&value(parcelSearchType)=local&isParcel=1&parcelViewID=20021&value(parcelUID)=&value(parcelUID1)=&"
		"isParcelValidation=N&isParcelRequired=Y&isShowOwner=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&"
		"MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(mailAddress2)=&value(mailAddress3)=&value(fax)=&value(primaryOwner)=Y&value(mailAddress1)=&value(phone_disp)=&value(phone)=&value(mailCity)=&value(mailState)=FL&value(mailZip_disp)=&value(mailZip)=&value(mailCountry)=US&value(email)=&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value"
		"(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=N&isOwnerRequired=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&"
		"sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=122&expression_portlet_to_be_populate=-99999&isPartialCap=null&value(professionalModel*licensenbr)=&value(professionalModel*address3)=&value(professionalModel*phone3)=&value(professionalModel*fax"
		")=&value(professionalModel*gender)=&value(professionalModel*postOfficeBox)=&value(professionalModel*busName2)=&value(professionalModel*licenseBoard)=&date(professionalModel*birthDate)=&value(professionalModel*typeFlag)=&value(professionalModel*maskedSsn)=&value(professionalModel*fein)=&value(professionalModel*title)=&value(professionalModel*suffixName)=&value(professionalModel*licensetype)=&value(professionalModel*printFlag)=Y&value(professionalModel*salutation)=&value"
		"(professionalModel*contactfirstname)=&value(professionalModel*contactmiddlename)=&value(professionalModel*contactlastname)=&date(professionalModel*lastUpdateDate)=&value(professionalModel*businessname)=&value(professionalModel*businesslicense)=&value(professionalModel*address1)=&value(professionalModel*phone2_disp)=&value(professionalModel*phone2)=&value(professionalModel*phone1_disp)=&value(professionalModel*phone1)=&value(professionalModel*address2)=&value(professionalModel*city)=&value"
		"(professionalModel*zip_disp)=&value(professionalModel*zip)=&value(professionalModel*email)=&value(professionalModel*comment)=&value(templateGroup)=CAP_PROFESSIONAL&value(mode)=New&value(modePro)=add&valuetextarea13=&sourcetextarea13=&layouttextarea13=&professionalModel*uiuid=13&value(professionalSearchType)=&value(licSeqNbr)=&isProfessional=1&professionalViewID=122&isProfessionalValidation=N&isProfessionalRequired=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&"
		"ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*relation)=&value(applicant*title)=&value(applicant*addressId)=&value(applicant*addressLine2)=&value(applicant*addressLine3)=&value(applicant*confirmEmail)=&value"
		"(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(applicant*maskedSsn)=&value(applicant*fein)=&value(applicant*tradeName)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(applicant*salutation)=&value(applicant*gender)=&value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value(applicant*businessName2)=&value(applicant*birthCity)=&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&"
		"date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*flag)=Y&value(applicant*preferredChannel)=&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone1_disp)=&value(applicant*phone1)=&value(applicant*addressLine1)=&value(applicant*phone2_disp)=&value(applicant*phone2)=&value(applicant*city)=&value(applicant*state)=FL&value"
		"(applicant*zip_disp)=&value(applicant*zip)=&value(applicant*phone3_disp)=&value(applicant*phone3)=&value(applicant*businessName)=&value(applicant*countryCode)=US&value(applicant*email)=&displasy*applicant*email=Y&value(applicant*fullName)=&value(templateGroup)=CAP&valuetextarea12=&sourcetextarea12=%7B%22UIUID%22%3A12%7D&layouttextarea12=null&applicant*uiuid=12&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=Y&applicantAccessRight=F&applicantContactNumber=null&value"
		"(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&value(bValuatnModel*estimatedValue)=&value(capDetailModel*houseCount)=0&value(capDetailModel*buildingCount)=0&value(capDetailModel*publicOwned)=N&value(capDetailModel*constTypeCode)=&isAdditional=1&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=GENERAL%2BINFORMATION&app_spec_info_GENERAL_INFORMATION_Office_Location=NPR&app_spec_info_GENERAL_INFORMATION_Census_Code=System%20Generated&"
		"app_spec_info_GENERAL_INFORMATION_Name_of_Lessee=&app_spec_info_GENERAL_INFORMATION_Expiration_Date=&app_spec_info_GENERAL_INFORMATION_Expiration_Date=&singleModeName=PERMIT%2BINFORMATION&app_spec_info_PERMIT_INFORMATION_Number_of_Termination_Points=1&singleModeName=REQUIRED%2BTRADE&app_spec_info_REQUIRED_TRADE_Plumbing_Value=Y&app_spec_info_REQUIRED_TRADE_Electrical_Value=Y&app_spec_info_REQUIRED_TRADE_Electrical=on&app_spec_info_REQUIRED_TRADE_Mechanical_Value=Y&"
		"app_spec_info_REQUIRED_TRADE_LP_or_Natural_Gas_Value=Y&app_spec_info_REQUIRED_TRADE_Fire_Value=Y&app_spec_info_REQUIRED_TRADE_Temp_Underground_Electric_Value=Y&singleModeName=GIS%2BINFORMATION&app_spec_info_GIS_INFORMATION_Taxing_Authority=&app_spec_info_GIS_INFORMATION_Taxing_Authority=&app_spec_info_GIS_INFORMATION_FEMA=&app_spec_info_GIS_INFORMATION_FEMA=&app_spec_info_GIS_INFORMATION_Actual_Year_Built=&app_spec_info_GIS_INFORMATION_Actual_Year_Built=&app_spec_info_GIS_INFORMATION_Wind_Speed=&"
		"app_spec_info_GIS_INFORMATION_Wind_Speed=&app_spec_info_GIS_INFORMATION_Depreciated_Value_50%2525=&app_spec_info_GIS_INFORMATION_Depreciated_Value_50%2525=&singleModeName=UTILITY%2BINFORMATION&app_spec_info_UTILITY_INFORMATION_Power_Company=&app_spec_info_UTILITY_INFORMATION_Notes%253A=&singleModeName=PROPOSED%2BCONSTRUCTION%2BINFO&app_spec_info_PROPOSED_CONSTRUCTION_INFO_Replacement_Structure=&app_spec_info_PROPOSED_CONSTRUCTION_INFO_Substantial_Damage%252FImprovement_Document=&value(mode)=New&"
		"expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&"
		"isGisFeatureRequired=N&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&"
		"fileCount=0&mode=upload&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&"
		"virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError=No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc="
		"%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL=%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DPermits%252FResidential%252FElectrical%252FElec%2BService%2BChange-Upgrade%26module%3DPermits&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea14=&sourcetextarea14=&layouttextarea14=&docTemplateUIUID=14&value"
		"(docGroup)=PMT&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(alsoAttachTo)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)=NONE&documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&"
		"hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName"
		"=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&alsoattachto-00-doc=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&"
		"hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20021%2C20026%2C122%2C121%2C21031&viewGroup="
		"%2C225%2C117%2C20021%2C20026%2C122%2C121%2C21031&formGroup=%2CcapDetailForm%2CaddressForm%2CparcelForm%2CownerForm%2CrefProfessionalDetailActionForm%2CapplicantDetailForm%2CaddtInfoForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=ALL&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_="
		"%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(professionalModel*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(professionalModel*fein)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?stateProperty=value(addressesModel*state)&aaZoneId=aazone-country-state&stateReadOnly=false&country=&tempModuleName=Permits&aaxmlrequest=true&aa_rand=0.4472147033084184&aazones=aazone-country-state", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t226.inf", 
		"Mode=HTML", 
		"Body=aazone-country-state", 
		"LAST");

	lr_end_transaction("PASCO_TC3_04_Address_Clear",2);

	web_url("session.do_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t227.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(6);

	web_url("session.do_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t228.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(13);
    web_add_header("AppD_Header", "PASCO_TC3_05_Address_Search");
	lr_start_transaction("PASCO_TC3_05_Address_Search");

	web_url("session.do_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t229.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("refAddressListBySingle.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingle.do?mode=directSearch&from=SPEAR&listBySingle=true&module=Permits", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t230.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Permits&accelasubmitbuttonname=&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&value(mode)=add&value(srTest)=&value(capType)="
		"Permits%2FResidential%2FElectrical%2FElec%20Service%20Change-Upgrade&value(capID)=&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&value(capType)=Permits%2FResidential%2FElectrical%2FElec%20Service%20Change-Upgrade&date(capModel*fileDate)=08%2F29%2F2018&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date"
		"(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capModel*capStatus)=Submitted&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value"
		"(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F29%2F2018&value(capModel*reportedTime)=&value"
		"(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value"
		"(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&value(capModel*altID)=&value(capModel*isManualAltID)=&originalCAPAltID=&value(capDetailModel*shortNotes)=performance&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&"
		"sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&validateFlagOriginalValue=&value"
		"(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberStart)=38359&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value"
		"(addressesModel*streetDirection)=&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitEnd)=&value(addressesModel*sourceFlag)=&value(addressesModel*addressTypeFlag)=&value(addressesModel*validateFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*neighborhood)=&"
		"value(addressesModel*county)=&value(addressesModel*addressStatus)=&value(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine1)=&value(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*streetName)=&value(addressesModel*streetSuffix)=&value(addressesModel*unitType)=&value(addressesModel*unitStart)=&value(addressesModel*primaryFlag)=Y&value(addressesModel*city)=&value(addressesModel*state)=&value(addressesModel*zip_disp)=&value"
		"(addressesModel*zip)=&value(addressesModel*countryCode)=&value(addressesModel*XCoordinator)=&value(addressesModel*YCoordinator)=&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=&value(l1addressnbr)=&value(l1addressnbr1)=&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=&isAddress=1&isAddressValidation=Y&isAddressRequired=Y&isShowParcel=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=117&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&"
		"expression_portlet_to_be_populate=20021&expression_portlet_to_be_populate=-99999&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&value(unmaskedParcelNumber)=&value(parcelNo)=&value(book)=&value(page)=&value(parcel)=&value(landValue)=&value(improvedValue)=&value(exemptValue)=&value(tract)=&value(mapNo)=&value(censusTract)=&value(supervisorDistrict)=&value(councilDistrict)=&value(planArea)=&value(mapRef)=&value(gisSeqNo)=&value(unmaskedParcelNumber)=&value"
		"(parcelArea)=&value(unmaskedParcelNumber)=&value(section)=&value(unmaskedParcelNumber)=&value(township)=&value(unmaskedParcelNumber)=&value(range)=&value(unmaskedParcelNumber)=&value(primaryParcelFlagWithoutDealing)=&value(unmaskedParcelNumber)=&value(legalDesc)=&value(unmaskedParcelNumber)=&value(lot)=&value(unmaskedParcelNumber)=&value(block)=&value(unmaskedParcelNumber)=&template_CAP_PARCEL_ACTUAL_YEAR_BUILT=&template_CAP_PARCEL_ASSESSMENTNAME=&template_CAP_PARCEL_DIR_CARD_COUNT=&"
		"template_CAP_PARCEL_EVACZONES=&template_CAP_PARCEL_FEMA=&template_CAP_PARCEL_FUTURELANDUSE=&template_CAP_PARCEL_LEGAL_DESCRIPTION_CONTINUED=&template_CAP_PARCEL_MAF_BDG_REP_VAL=&template_CAP_PARCEL_MOBILITYFEEAREA=&template_CAP_PARCEL_MPUD=&template_CAP_PARCEL_NONADJUSTED=&template_CAP_PARCEL_PARKFEE=&template_CAP_PARCEL_STORMFLOODS=&template_CAP_PARCEL_TAZ=&template_CAP_PARCEL_TIF=&template_CAP_PARCEL_VAL_BLDG_DEPR_35_PERCENT=&template_CAP_PARCEL_VAL_BLDG_DEPR_50_PERCENT=&"
		"template_CAP_PARCEL_WASTEWATERSERVICEAREAS=&template_CAP_PARCEL_WATERSERVICEAREAS=&template_CAP_PARCEL_WETLANDS=&template_CAP_PARCEL_WINDCODE=&template_CAP_PARCEL_ZONEAREA=&template_CAP_PARCEL_VAL_APPR=&template_CAP_PARCEL_VAL_TAX_AREA=&template_CAP_PARCEL_VAL_EXEM_AMT=&value(templateGroup)=CAP&value(unmaskedParcelNumber)=&value(inspectionDistrict)=&value(unmaskedParcelNumber)=&value(subdivision)=&value(mode)=New&value(parcelModel*UID)=&value(l1ParcelNo)=&value(parcelNoBySearch1)=&value"
		"(parcelSearchType)=local&isParcel=1&parcelViewID=20021&value(parcelUID)=&value(parcelUID1)=&isParcelValidation=N&isParcelRequired=Y&isShowOwner=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID"
		"=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(mailAddress2)=&value(mailAddress3)=&value(fax)=&value(primaryOwner)=Y&value(mailAddress1)=&value(phone_disp)=&value(phone)=&value(mailCity)=&value(mailState)=FL&value(mailZip_disp)=&value(mailZip)=&value(mailCountry)=US&value(email)=&"
		"value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=N&isOwnerRequired=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP"
		"=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=122&expression_portlet_to_be_populate=-99999&isPartialCap=null&value(professionalModel*licensenbr)=&value"
		"(professionalModel*address3)=&value(professionalModel*phone3)=&value(professionalModel*fax)=&value(professionalModel*gender)=&value(professionalModel*postOfficeBox)=&value(professionalModel*busName2)=&value(professionalModel*licenseBoard)=&date(professionalModel*birthDate)=&value(professionalModel*typeFlag)=&value(professionalModel*maskedSsn)=&value(professionalModel*fein)=&value(professionalModel*title)=&value(professionalModel*suffixName)=&value(professionalModel*licensetype)=&value"
		"(professionalModel*printFlag)=Y&value(professionalModel*salutation)=&value(professionalModel*contactfirstname)=&value(professionalModel*contactmiddlename)=&value(professionalModel*contactlastname)=&date(professionalModel*lastUpdateDate)=&value(professionalModel*businessname)=&value(professionalModel*businesslicense)=&value(professionalModel*address1)=&value(professionalModel*phone2_disp)=&value(professionalModel*phone2)=&value(professionalModel*phone1_disp)=&value(professionalModel*phone1)=&value"
		"(professionalModel*address2)=&value(professionalModel*city)=&value(professionalModel*zip_disp)=&value(professionalModel*zip)=&value(professionalModel*email)=&value(professionalModel*comment)=&value(templateGroup)=CAP_PROFESSIONAL&value(mode)=New&value(modePro)=add&valuetextarea13=&sourcetextarea13=&layouttextarea13=&professionalModel*uiuid=13&value(professionalSearchType)=&value(licSeqNbr)=&isProfessional=1&professionalViewID=122&isProfessionalValidation=N&isProfessionalRequired=Y&generalCAPSearch"
		"=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*relation)=&value(applicant*title)=&value(applicant*addressId)=&value(applicant*addressLine2)=&value"
		"(applicant*addressLine3)=&value(applicant*confirmEmail)=&value(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(applicant*maskedSsn)=&value(applicant*fein)=&value(applicant*tradeName)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(applicant*salutation)=&value(applicant*gender)=&value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value(applicant*businessName2)=&value(applicant*birthCity)=&value"
		"(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*flag)=Y&value(applicant*preferredChannel)=&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone1_disp)=&value(applicant*phone1)=&value(applicant*addressLine1)=&value(applicant*phone2_disp)=&"
		"value(applicant*phone2)=&value(applicant*city)=&value(applicant*state)=FL&value(applicant*zip_disp)=&value(applicant*zip)=&value(applicant*phone3_disp)=&value(applicant*phone3)=&value(applicant*businessName)=&value(applicant*countryCode)=US&value(applicant*email)=&displasy*applicant*email=Y&value(applicant*fullName)=&value(templateGroup)=CAP&valuetextarea12=&sourcetextarea12=%7B%22UIUID%22%3A12%7D&layouttextarea12=null&applicant*uiuid=12&isApplicant=1&applicantViewID=121&isApplicantValidation=N&"
		"isApplicantRequired=Y&applicantAccessRight=F&applicantContactNumber=null&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&value(bValuatnModel*estimatedValue)=&value(capDetailModel*houseCount)=0&value(capDetailModel*buildingCount)=0&value(capDetailModel*publicOwned)=N&value(capDetailModel*constTypeCode)=&isAdditional=1&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=GENERAL%2BINFORMATION&app_spec_info_GENERAL_INFORMATION_Office_Location=NPR&"
		"app_spec_info_GENERAL_INFORMATION_Census_Code=System%20Generated&app_spec_info_GENERAL_INFORMATION_Name_of_Lessee=&app_spec_info_GENERAL_INFORMATION_Expiration_Date=&app_spec_info_GENERAL_INFORMATION_Expiration_Date=&singleModeName=PERMIT%2BINFORMATION&app_spec_info_PERMIT_INFORMATION_Number_of_Termination_Points=1&singleModeName=REQUIRED%2BTRADE&app_spec_info_REQUIRED_TRADE_Plumbing_Value=Y&app_spec_info_REQUIRED_TRADE_Electrical_Value=Y&app_spec_info_REQUIRED_TRADE_Electrical=on&"
		"app_spec_info_REQUIRED_TRADE_Mechanical_Value=Y&app_spec_info_REQUIRED_TRADE_LP_or_Natural_Gas_Value=Y&app_spec_info_REQUIRED_TRADE_Fire_Value=Y&app_spec_info_REQUIRED_TRADE_Temp_Underground_Electric_Value=Y&singleModeName=GIS%2BINFORMATION&app_spec_info_GIS_INFORMATION_Taxing_Authority=&app_spec_info_GIS_INFORMATION_Taxing_Authority=&app_spec_info_GIS_INFORMATION_FEMA=&app_spec_info_GIS_INFORMATION_FEMA=&app_spec_info_GIS_INFORMATION_Actual_Year_Built=&"
		"app_spec_info_GIS_INFORMATION_Actual_Year_Built=&app_spec_info_GIS_INFORMATION_Wind_Speed=&app_spec_info_GIS_INFORMATION_Wind_Speed=&app_spec_info_GIS_INFORMATION_Depreciated_Value_50%2525=&app_spec_info_GIS_INFORMATION_Depreciated_Value_50%2525=&singleModeName=UTILITY%2BINFORMATION&app_spec_info_UTILITY_INFORMATION_Power_Company=&app_spec_info_UTILITY_INFORMATION_Notes%253A=&singleModeName=PROPOSED%2BCONSTRUCTION%2BINFO&app_spec_info_PROPOSED_CONSTRUCTION_INFO_Replacement_Structure=&"
		"app_spec_info_PROPOSED_CONSTRUCTION_INFO_Substantial_Damage%252FImprovement_Document=&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&isGisFeatureRequired=N&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID"
		"=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&mode=upload&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel="
		"ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError=No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError="
		"The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL=%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DPermits%252FResidential%252FElectrical%252FElec%2BService%2BChange-Upgrade%26module%3DPermits&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&"
		"valuetextarea14=&sourcetextarea14=&layouttextarea14=&docTemplateUIUID=14&value(docGroup)=PMT&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(alsoAttachTo)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)=NONE&documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&"
		"hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&"
		"hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&alsoattachto-00-doc=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&"
		"hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired"
		"=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20021%2C20026%2C122%2C121%2C21031&viewGroup=%2C225%2C117%2C20021%2C20026%2C122%2C121%2C21031&formGroup=%2CcapDetailForm%2CaddressForm%2CparcelForm%2CownerForm%2CrefProfessionalDetailActionForm%2CapplicantDetailForm%2CaddtInfoForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=ALL&SKIP_EMSE_FLAG=N&"
		"isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(professionalModel*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(professionalModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?stateProperty=value(addressesModel*state)&aaZoneId=aazone-country-state&stateReadOnly=false&country=&tempModuleName=Permits&aaxmlrequest=true&aa_rand=0.7938689733855426&aazones=aazone-country-state&statevalue=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t231.inf", 
		"Mode=HTML", 
		"Body=aazone-country-state", 
		"LAST");

	web_url("autoSyncAPOStrucEstabBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/autoSyncAPOStrucEstabBySingle.do?mode=listAssociatedObjs&module=Permits&value(typeOfSelectedObj)=ADDRESS&value(action)=Add", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t232.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("getAddressListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getAddressListBySingle.do?module=Permits&mode=getAddressListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t233.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("getParcelListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getParcelListBySingle.do?module=Permits&mode=getParcelListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t234.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("getOwnerListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getOwnerListBySingle.do?module=Permits&mode=getOwnerListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t235.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("getGISListBySingle.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?mode=getGISListBySingle&module=Permits", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t236.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_14", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t237.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t238.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_10", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t239.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_11", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t240.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("refOwnerForm.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerForm.do?mode=viewCondition&module=Permits&ownerUID=PASCO%24*%2402%2026%2021%20021A%2000M00%200040", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getOwnerListBySingle.do?module=Permits&mode=getOwnerListBySingle", 
		"Snapshot=t241.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fattachedgis%2FgetOwnerListBySingle.do%3Fmodule%3DPermits%26mode%3DgetOwnerListBySingle&value(CurrentEntryURL)=%2Fportlets%2Fattachedgis%2FgetOwnerListBySingle.do%3Fmodule%3DPermits%26mode%3DgetOwnerListBySingle&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=getOwnerListBySingle&module=Permits&accelasubmitbuttonname=&itemName=&CurrentViewID=20032&exceptionLogID=&ownerNum=null&primaryKey=PASCO%24*%2402%2026%2021%20021A%2000M00%200040&"
		"pageSizeR=999&", 
		"LAST");

	web_submit_data("empty.jsp_12", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t242.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("PASCO_TC3_05_Address_Search",2);

	lr_think_time(7);

	web_url("session.do_15", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t243.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("genericTemplate.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/generictemplate/genericTemplate.do?mode=getTemplateByLicenseType&uiUID=13&module=Permits&licenseType=CERT%20Building&elementName=value(professionalModel*licensetype)", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t244.inf", 
		"Mode=HTML", 
		"Body=&docTemplateUIUID=14&valuetextarea14=&sourcetextarea14=&docGroup=PMT&docType=&docCategory=&documentSeq=&isFromDocDetail=N", 
		"LAST");

	web_custom_request("expression.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t245.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Permits&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&value(srTest)=&value(capType)="
		"Permits%2FResidential%2FElectrical%2FElec%20Service%20Change-Upgrade&value(capID)=&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&value(capType)=Permits%2FResidential%2FElectrical%2FElec%20Service%20Change-Upgrade&date(capModel*fileDate)=08%2F29%2F2018&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date"
		"(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capModel*capStatus)=Submitted&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value"
		"(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F29%2F2018&value(capModel*reportedTime)=&value"
		"(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value"
		"(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&value(capModel*altID)=&value(capModel*isManualAltID)=&originalCAPAltID=&value(capDetailModel*shortNotes)=performance&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&"
		"sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&validateFlagOriginalValue=&value"
		"(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberStart)=38359&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value"
		"(addressesModel*streetDirection)=&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitEnd)=&value(addressesModel*sourceFlag)=&value(addressesModel*addressTypeFlag)=&value(addressesModel*validateFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*neighborhood)=&"
		"value(addressesModel*county)=&value(addressesModel*addressStatus)=&value(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine1)=&value(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*streetName)=&value(addressesModel*streetSuffix)=&value(addressesModel*unitType)=&value(addressesModel*unitStart)=&value(addressesModel*primaryFlag)=Y&value(addressesModel*city)=&value(addressesModel*state)=&value(addressesModel*zip_disp)=&value"
		"(addressesModel*zip)=&value(addressesModel*countryCode)=&value(addressesModel*XCoordinator)=&value(addressesModel*YCoordinator)=&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=&value(l1addressnbr)=&value(l1addressnbr1)=&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=&isAddress=1&isAddressValidation=&isAddressRequired=Y&isShowParcel=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=117&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&"
		"expression_portlet_to_be_populate=20021&expression_portlet_to_be_populate=-99999&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&value(unmaskedParcelNumber)=&value(parcelNo)=&value(book)=&value(page)=&value(parcel)=&value(landValue)=&value(improvedValue)=&value(exemptValue)=&value(tract)=&value(mapNo)=&value(censusTract)=&value(supervisorDistrict)=&value(councilDistrict)=&value(planArea)=&value(mapRef)=&value(gisSeqNo)=&value(unmaskedParcelNumber)=&value"
		"(parcelArea)=&value(unmaskedParcelNumber)=&value(section)=&value(unmaskedParcelNumber)=&value(township)=&value(unmaskedParcelNumber)=&value(range)=&value(unmaskedParcelNumber)=&value(primaryParcelFlagWithoutDealing)=&value(unmaskedParcelNumber)=&value(legalDesc)=&value(unmaskedParcelNumber)=&value(lot)=&value(unmaskedParcelNumber)=&value(block)=&value(unmaskedParcelNumber)=&template_CAP_PARCEL_ACTUAL_YEAR_BUILT=&template_CAP_PARCEL_ASSESSMENTNAME=&template_CAP_PARCEL_DIR_CARD_COUNT=&"
		"template_CAP_PARCEL_EVACZONES=&template_CAP_PARCEL_FEMA=&template_CAP_PARCEL_FUTURELANDUSE=&template_CAP_PARCEL_LEGAL_DESCRIPTION_CONTINUED=&template_CAP_PARCEL_MAF_BDG_REP_VAL=&template_CAP_PARCEL_MOBILITYFEEAREA=&template_CAP_PARCEL_MPUD=&template_CAP_PARCEL_NONADJUSTED=&template_CAP_PARCEL_PARKFEE=&template_CAP_PARCEL_STORMFLOODS=&template_CAP_PARCEL_TAZ=&template_CAP_PARCEL_TIF=&template_CAP_PARCEL_VAL_BLDG_DEPR_35_PERCENT=&template_CAP_PARCEL_VAL_BLDG_DEPR_50_PERCENT=&"
		"template_CAP_PARCEL_WASTEWATERSERVICEAREAS=&template_CAP_PARCEL_WATERSERVICEAREAS=&template_CAP_PARCEL_WETLANDS=&template_CAP_PARCEL_WINDCODE=&template_CAP_PARCEL_ZONEAREA=&template_CAP_PARCEL_VAL_APPR=&template_CAP_PARCEL_VAL_TAX_AREA=&template_CAP_PARCEL_VAL_EXEM_AMT=&value(templateGroup)=CAP&value(unmaskedParcelNumber)=&value(inspectionDistrict)=&value(unmaskedParcelNumber)=&value(subdivision)=&value(mode)=New&value(parcelModel*UID)=&value(l1ParcelNo)=&value(parcelNoBySearch1)=&value"
		"(parcelSearchType)=local&isParcel=1&parcelViewID=20021&value(parcelUID)=&value(parcelUID1)=&isParcelValidation=&isParcelRequired=Y&isShowOwner=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID="
		"&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(mailAddress2)=&value(mailAddress3)=&value(fax)=&value(primaryOwner)=Y&value(mailAddress1)=&value(phone_disp)=&value(phone)=&value(mailCity)=&value(mailState)=FL&value(mailZip_disp)=&value(mailZip)=&value(mailCountry)=US&value(email)=&value"
		"(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=&isOwnerRequired=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&"
		"objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=122&expression_portlet_to_be_populate=-99999&isPartialCap=null&value(professionalModel*licensenbr)=CAC056943&value"
		"(professionalModel*address3)=&value(professionalModel*phone3)=&value(professionalModel*fax)=&value(professionalModel*gender)=&value(professionalModel*postOfficeBox)=&value(professionalModel*busName2)=&value(professionalModel*licenseBoard)=&date(professionalModel*birthDate)=&value(professionalModel*typeFlag)=&value(professionalModel*maskedSsn)=&value(professionalModel*fein)=&value(professionalModel*title)=&value(professionalModel*suffixName)=&value(professionalModel*licensetype)=CERT%20Building&"
		"value(professionalModel*printFlag)=Y&value(professionalModel*salutation)=&value(professionalModel*contactfirstname)=&value(professionalModel*contactmiddlename)=&value(professionalModel*contactlastname)=&date(professionalModel*lastUpdateDate)=&value(professionalModel*businessname)=&value(professionalModel*businesslicense)=&value(professionalModel*address1)=&value(professionalModel*phone2_disp)=&value(professionalModel*phone2)=&value(professionalModel*phone1_disp)=&value(professionalModel*phone1)=&"
		"value(professionalModel*address2)=&value(professionalModel*city)=&value(professionalModel*zip_disp)=&value(professionalModel*zip)=&value(professionalModel*email)=&value(professionalModel*comment)=&value(templateGroup)=CAP_PROFESSIONAL&value(mode)=New&value(modePro)=add&valuetextarea13=&sourcetextarea13=&layouttextarea13=&professionalModel*uiuid=13&value(professionalSearchType)=&value(licSeqNbr)=&isProfessional=1&professionalViewID=122&isProfessionalValidation=N&isProfessionalRequired=Y&"
		"generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*relation)=&value(applicant*title)=&value(applicant*addressId)=&value(applicant*addressLine2)="
		"&value(applicant*addressLine3)=&value(applicant*confirmEmail)=&value(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(applicant*maskedSsn)=&value(applicant*fein)=&value(applicant*tradeName)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(applicant*salutation)=&value(applicant*gender)=&value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value(applicant*businessName2)=&value(applicant*birthCity)=&value"
		"(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*flag)=Y&value(applicant*preferredChannel)=&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone1_disp)=&value(applicant*phone1)=&value(applicant*addressLine1)=&value(applicant*phone2_disp)=&"
		"value(applicant*phone2)=&value(applicant*city)=&value(applicant*state)=FL&value(applicant*zip_disp)=&value(applicant*zip)=&value(applicant*phone3_disp)=&value(applicant*phone3)=&value(applicant*businessName)=&value(applicant*countryCode)=US&value(applicant*email)=&displasy*applicant*email=Y&value(applicant*fullName)=&value(templateGroup)=CAP&valuetextarea12=&sourcetextarea12=%7B%22UIUID%22%3A12%7D&layouttextarea12=null&applicant*uiuid=12&isApplicant=1&applicantViewID=121&isApplicantValidation=N&"
		"isApplicantRequired=Y&applicantAccessRight=F&applicantContactNumber=null&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&value(bValuatnModel*estimatedValue)=&value(capDetailModel*houseCount)=0&value(capDetailModel*buildingCount)=0&value(capDetailModel*publicOwned)=N&value(capDetailModel*constTypeCode)=&isAdditional=1&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=GENERAL%2BINFORMATION&app_spec_info_GENERAL_INFORMATION_Office_Location=NPR&"
		"app_spec_info_GENERAL_INFORMATION_Census_Code=System%20Generated&app_spec_info_GENERAL_INFORMATION_Name_of_Lessee=&app_spec_info_GENERAL_INFORMATION_Expiration_Date=&app_spec_info_GENERAL_INFORMATION_Expiration_Date=&singleModeName=PERMIT%2BINFORMATION&app_spec_info_PERMIT_INFORMATION_Number_of_Termination_Points=1&singleModeName=REQUIRED%2BTRADE&app_spec_info_REQUIRED_TRADE_Plumbing_Value=Y&app_spec_info_REQUIRED_TRADE_Electrical_Value=Y&app_spec_info_REQUIRED_TRADE_Electrical=on&"
		"app_spec_info_REQUIRED_TRADE_Mechanical_Value=Y&app_spec_info_REQUIRED_TRADE_LP_or_Natural_Gas_Value=Y&app_spec_info_REQUIRED_TRADE_Fire_Value=Y&app_spec_info_REQUIRED_TRADE_Temp_Underground_Electric_Value=Y&singleModeName=GIS%2BINFORMATION&app_spec_info_GIS_INFORMATION_Taxing_Authority=&app_spec_info_GIS_INFORMATION_Taxing_Authority=&app_spec_info_GIS_INFORMATION_FEMA=&app_spec_info_GIS_INFORMATION_FEMA=&app_spec_info_GIS_INFORMATION_Actual_Year_Built=&"
		"app_spec_info_GIS_INFORMATION_Actual_Year_Built=&app_spec_info_GIS_INFORMATION_Wind_Speed=&app_spec_info_GIS_INFORMATION_Wind_Speed=&app_spec_info_GIS_INFORMATION_Depreciated_Value_50%2525=&app_spec_info_GIS_INFORMATION_Depreciated_Value_50%2525=&singleModeName=UTILITY%2BINFORMATION&app_spec_info_UTILITY_INFORMATION_Power_Company=&app_spec_info_UTILITY_INFORMATION_Notes%253A=&singleModeName=PROPOSED%2BCONSTRUCTION%2BINFO&app_spec_info_PROPOSED_CONSTRUCTION_INFO_Replacement_Structure=&"
		"app_spec_info_PROPOSED_CONSTRUCTION_INFO_Substantial_Damage%252FImprovement_Document=&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&isGisFeatureRequired=N&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID"
		"=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel="
		"ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError=No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError="
		"The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL=%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DPermits%252FResidential%252FElectrical%252FElec%2BService%2BChange-Upgrade%26module%3DPermits&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&"
		"valuetextarea14=&sourcetextarea14=&layouttextarea14=&docTemplateUIUID=14&value(docGroup)=PMT&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(alsoAttachTo)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)=NONE&documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&"
		"hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&"
		"hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&alsoattachto-00-doc=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&"
		"hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired"
		"=N&editPar=2112&allViewIDGroup=225%2C122%2C121%2C21031&viewGroup=225%2C122%2C121%2C21031&formGroup=%2CcapDetailForm%2CaddressForm%2CparcelForm%2CownerForm%2CrefProfessionalDetailActionForm%2CapplicantDetailForm%2CaddtInfoForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=true&isParcelList=true&isOwnerList=true&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=ALL&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&"
		"isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(professionalModel*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value"
		"(professionalModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&accelasubmitbuttonname=Previous&callBack=&variableKey=LP%3A%3AprofessionalModel*licensetype&refAPONumber=undefined&argumentPKs="
		"%5B%7B%22portletID%22%3A20021%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A122%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A121%2C%22viewKey1%22%3A%22Applicant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute", 
		"LAST");

	web_custom_request("CapBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Permits", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t246.inf", 
		"Mode=HTML", 
		"Body=&aaxmlrequest=true&value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Permits&accelasubmitbuttonname=&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&value(mode)=add&value(srTest)=&value"
		"(capType)=Permits%2FResidential%2FElectrical%2FElec%20Service%20Change-Upgrade&value(capID)=&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&value(capType)=Permits%2FResidential%2FElectrical%2FElec%20Service%20Change-Upgrade&date(capModel*fileDate)=08%2F29%2F2018&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date"
		"(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capModel*capStatus)=Submitted&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value"
		"(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F29%2F2018&value(capModel*reportedTime)=&value"
		"(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value"
		"(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&value(capModel*altID)=&value(capModel*isManualAltID)=&originalCAPAltID=&value(capDetailModel*shortNotes)=performance&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&"
		"sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&validateFlagOriginalValue=&value"
		"(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberStart)=38359&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value"
		"(addressesModel*streetDirection)=&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitEnd)=&value(addressesModel*sourceFlag)=&value(addressesModel*addressTypeFlag)=&value(addressesModel*validateFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*neighborhood)=&"
		"value(addressesModel*county)=&value(addressesModel*addressStatus)=&value(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine1)=&value(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*streetName)=&value(addressesModel*streetSuffix)=&value(addressesModel*unitType)=&value(addressesModel*unitStart)=&value(addressesModel*primaryFlag)=Y&value(addressesModel*city)=&value(addressesModel*state)=&value(addressesModel*zip_disp)=&value"
		"(addressesModel*zip)=&value(addressesModel*countryCode)=&value(addressesModel*XCoordinator)=&value(addressesModel*YCoordinator)=&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=&value(l1addressnbr)=&value(l1addressnbr1)=&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=&isAddress=1&isAddressValidation=&isAddressRequired=Y&isShowParcel=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=117&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&"
		"expression_portlet_to_be_populate=20021&expression_portlet_to_be_populate=-99999&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&value(unmaskedParcelNumber)=&value(parcelNo)=&value(book)=&value(page)=&value(parcel)=&value(landValue)=&value(improvedValue)=&value(exemptValue)=&value(tract)=&value(mapNo)=&value(censusTract)=&value(supervisorDistrict)=&value(councilDistrict)=&value(planArea)=&value(mapRef)=&value(gisSeqNo)=&value(unmaskedParcelNumber)=&value"
		"(parcelArea)=&value(unmaskedParcelNumber)=&value(section)=&value(unmaskedParcelNumber)=&value(township)=&value(unmaskedParcelNumber)=&value(range)=&value(unmaskedParcelNumber)=&value(primaryParcelFlagWithoutDealing)=&value(unmaskedParcelNumber)=&value(legalDesc)=&value(unmaskedParcelNumber)=&value(lot)=&value(unmaskedParcelNumber)=&value(block)=&value(unmaskedParcelNumber)=&template_CAP_PARCEL_ACTUAL_YEAR_BUILT=&template_CAP_PARCEL_ASSESSMENTNAME=&template_CAP_PARCEL_DIR_CARD_COUNT=&"
		"template_CAP_PARCEL_EVACZONES=&template_CAP_PARCEL_FEMA=&template_CAP_PARCEL_FUTURELANDUSE=&template_CAP_PARCEL_LEGAL_DESCRIPTION_CONTINUED=&template_CAP_PARCEL_MAF_BDG_REP_VAL=&template_CAP_PARCEL_MOBILITYFEEAREA=&template_CAP_PARCEL_MPUD=&template_CAP_PARCEL_NONADJUSTED=&template_CAP_PARCEL_PARKFEE=&template_CAP_PARCEL_STORMFLOODS=&template_CAP_PARCEL_TAZ=&template_CAP_PARCEL_TIF=&template_CAP_PARCEL_VAL_BLDG_DEPR_35_PERCENT=&template_CAP_PARCEL_VAL_BLDG_DEPR_50_PERCENT=&"
		"template_CAP_PARCEL_WASTEWATERSERVICEAREAS=&template_CAP_PARCEL_WATERSERVICEAREAS=&template_CAP_PARCEL_WETLANDS=&template_CAP_PARCEL_WINDCODE=&template_CAP_PARCEL_ZONEAREA=&template_CAP_PARCEL_VAL_APPR=&template_CAP_PARCEL_VAL_TAX_AREA=&template_CAP_PARCEL_VAL_EXEM_AMT=&value(templateGroup)=CAP&value(unmaskedParcelNumber)=&value(inspectionDistrict)=&value(unmaskedParcelNumber)=&value(subdivision)=&value(mode)=New&value(parcelModel*UID)=&value(l1ParcelNo)=&value(parcelNoBySearch1)=&value"
		"(parcelSearchType)=local&isParcel=1&parcelViewID=20021&value(parcelUID)=&value(parcelUID1)=&isParcelValidation=&isParcelRequired=Y&isShowOwner=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID="
		"&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(mailAddress2)=&value(mailAddress3)=&value(fax)=&value(primaryOwner)=Y&value(mailAddress1)=&value(phone_disp)=&value(phone)=&value(mailCity)=&value(mailState)=FL&value(mailZip_disp)=&value(mailZip)=&value(mailCountry)=US&value(email)=&value"
		"(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=&isOwnerRequired=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&"
		"objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=122&expression_portlet_to_be_populate=-99999&isPartialCap=null&value(professionalModel*licensenbr)=CAC056943&value"
		"(professionalModel*address3)=&value(professionalModel*phone3)=&value(professionalModel*fax)=&value(professionalModel*gender)=&value(professionalModel*postOfficeBox)=&value(professionalModel*busName2)=&value(professionalModel*licenseBoard)=&date(professionalModel*birthDate)=&value(professionalModel*typeFlag)=&value(professionalModel*maskedSsn)=&value(professionalModel*fein)=&value(professionalModel*title)=&value(professionalModel*suffixName)=&value(professionalModel*licensetype)=CERT%20Building&"
		"value(professionalModel*printFlag)=Y&value(professionalModel*salutation)=&value(professionalModel*contactfirstname)=&value(professionalModel*contactmiddlename)=&value(professionalModel*contactlastname)=&date(professionalModel*lastUpdateDate)=&value(professionalModel*businessname)=&value(professionalModel*businesslicense)=&value(professionalModel*address1)=&value(professionalModel*phone2_disp)=&value(professionalModel*phone2)=&value(professionalModel*phone1_disp)=&value(professionalModel*phone1)=&"
		"value(professionalModel*address2)=&value(professionalModel*city)=&value(professionalModel*state)=&value(professionalModel*zip_disp)=&value(professionalModel*zip)=&value(professionalModel*email)=&value(professionalModel*countryCode)=US&value(professionalModel*comment)=&value(templateGroup)=CAP_PROFESSIONAL&value(mode)=New&value(modePro)=add&valuetextarea13=&sourcetextarea13=&layouttextarea13=&professionalModel*uiuid=13&sourcetextareaBak13=&layouttextareaBak13=&=&=&value(professionalSearchType)=&"
		"value(licSeqNbr)=&isProfessional=1&professionalViewID=122&isProfessionalValidation=N&isProfessionalRequired=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType_cur)="
		"Applicant&value(applicant*contactType)=Applicant&value(applicant*relation)=&value(applicant*title)=&value(applicant*addressId)=&value(applicant*addressLine2)=&value(applicant*addressLine3)=&value(applicant*confirmEmail)=&value(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(applicant*maskedSsn)=&value(applicant*fein)=&value(applicant*tradeName)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(applicant*salutation)=&value(applicant*gender)=&"
		"value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value(applicant*businessName2)=&value(applicant*birthCity)=&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*flag)=Y&value(applicant*preferredChannel)=&value(applicant*firstName)=&value"
		"(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone1_disp)=&value(applicant*phone1)=&value(applicant*addressLine1)=&value(applicant*phone2_disp)=&value(applicant*phone2)=&value(applicant*city)=&value(applicant*state)=FL&value(applicant*zip_disp)=&value(applicant*zip)=&value(applicant*phone3_disp)=&value(applicant*phone3)=&value(applicant*businessName)=&value(applicant*countryCode)=US&value(applicant*email)=&displasy*applicant*email=Y&value(applicant*fullName)=&value"
		"(templateGroup)=CAP&valuetextarea12=&sourcetextarea12=%7B%22UIUID%22%3A12%7D&layouttextarea12=null&applicant*uiuid=12&sourcetextareaBak12=%7B%22UIUID%22%3A12%7D&layouttextareaBak12=null&=&=&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=Y&applicantAccessRight=F&applicantContactNumber=null&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&value(bValuatnModel*estimatedValue)=&value(capDetailModel*houseCount)=0&value(capDetailModel*buildingCount)=0&value"
		"(capDetailModel*publicOwned)=N&value(capDetailModel*constTypeCode)=&isAdditional=1&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=GENERAL%2BINFORMATION&app_spec_info_GENERAL_INFORMATION_Office_Location=NPR&app_spec_info_GENERAL_INFORMATION_Census_Code=System%20Generated&app_spec_info_GENERAL_INFORMATION_Name_of_Lessee=&app_spec_info_GENERAL_INFORMATION_Expiration_Date=&app_spec_info_GENERAL_INFORMATION_Expiration_Date=&singleModeName=PERMIT%2BINFORMATION&"
		"app_spec_info_PERMIT_INFORMATION_Number_of_Termination_Points=1&singleModeName=REQUIRED%2BTRADE&app_spec_info_REQUIRED_TRADE_Plumbing_Value=Y&app_spec_info_REQUIRED_TRADE_Electrical_Value=Y&app_spec_info_REQUIRED_TRADE_Electrical=on&app_spec_info_REQUIRED_TRADE_Mechanical_Value=Y&app_spec_info_REQUIRED_TRADE_LP_or_Natural_Gas_Value=Y&app_spec_info_REQUIRED_TRADE_Fire_Value=Y&app_spec_info_REQUIRED_TRADE_Temp_Underground_Electric_Value=Y&singleModeName=GIS%2BINFORMATION&"
		"app_spec_info_GIS_INFORMATION_Taxing_Authority=&app_spec_info_GIS_INFORMATION_Taxing_Authority=&app_spec_info_GIS_INFORMATION_FEMA=&app_spec_info_GIS_INFORMATION_FEMA=&app_spec_info_GIS_INFORMATION_Actual_Year_Built=&app_spec_info_GIS_INFORMATION_Actual_Year_Built=&app_spec_info_GIS_INFORMATION_Wind_Speed=&app_spec_info_GIS_INFORMATION_Wind_Speed=&app_spec_info_GIS_INFORMATION_Depreciated_Value_50%2525=&app_spec_info_GIS_INFORMATION_Depreciated_Value_50%2525=&singleModeName=UTILITY%2BINFORMATION&"
		"app_spec_info_UTILITY_INFORMATION_Power_Company=&app_spec_info_UTILITY_INFORMATION_Notes%253A=&singleModeName=PROPOSED%2BCONSTRUCTION%2BINFO&app_spec_info_PROPOSED_CONSTRUCTION_INFO_Replacement_Structure=&app_spec_info_PROPOSED_CONSTRUCTION_INFO_Substantial_Damage%252FImprovement_Document=&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType="
		"print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&isGisFeatureRequired=N&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&"
		"listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=21031&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&mode=upload&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&"
		"docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError="
		"No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL="
		"%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DPermits%252FResidential%252FElectrical%252FElec%2BService%2BChange-Upgrade%26module%3DPermits&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea14=&sourcetextarea14=&layouttextarea14=&docTemplateUIUID=14&sourcetextareaBak14=&layouttextareaBak14=&=&=&=ADS&value(docGroup)=PMT&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value"
		"(alsoAttachTo)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)=NONE&documentSeq=&fileKey=&auth_username=&auth_password=&auth_rememberthis=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&"
		"hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-file=&upload-00-docCategory=&upload-00-docName=&upload-00-docDesc=&upload-00-userEmail=&"
		"alsoattachto-00-doc=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&"
		"hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-file=&upload-00-docCategory=&upload-00-docDesc=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=225%2C122%2C121%2C21031&viewGroup=225%2C122%2C121%2C21031&formGroup="
		"%2CcapDetailForm%2CaddressForm%2CparcelForm%2CownerForm%2CrefProfessionalDetailActionForm%2CapplicantDetailForm%2CaddtInfoForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=true&isParcelList=true&isOwnerList=true&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=ALL&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value"
		"(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(professionalModel*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(professionalModel*fein)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&setProfessionalType", 
		"LAST");

	lr_think_time(23);

	web_url("session.do_16", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t247.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(51);

	web_url("session.do_17", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t248.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(25);
    web_add_header("AppD_Header", "PASCO_TC3_08_SubmitApplication_AddNewApplication");
	lr_start_transaction("PASCO_TC3_08_SubmitApplication_AddNewApplication");

	web_url("session.do_18", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t249.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("getDocListBySingle.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/document/getDocListBySingle.do?mode=getDocSource4SPEAR&module=Permits&callbackJs=submitInNewCAP&module=Permits", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t250.inf", 
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

	web_submit_data("CapBySingle.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Permits", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Permits", 
		"Snapshot=t251.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=value(FirstEntryURL)", "Value=", "ENDITEM", 
		"Name=value(CurrentEntryURL)", "Value=", "ENDITEM", 
		"Name=portlet_language", "Value=en_US", "ENDITEM", 
		"Name=refresh_target", "Value=", "ENDITEM", 
		"Name=refresh_url", "Value=", "ENDITEM", 
		"Name=buttonName", "Value=", "ENDITEM", 
		"Name=modeName", "Value=new", "ENDITEM", 
		"Name=module", "Value=Permits", "ENDITEM", 
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
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=value(paLicenseId)", "Value=", "ENDITEM", 
		"Name=isRefreshPartialCondition", "Value=N", "ENDITEM", 
		"Name=value(mode)", "Value=add", "ENDITEM", 
		"Name=value(srTest)", "Value=", "ENDITEM", 
		"Name=value(capType)", "Value=Permits/Residential/Electrical/Elec Service Change-Upgrade", "ENDITEM", 
		"Name=value(capID)", "Value=", "ENDITEM", 
		"Name=value(capModel*specialText)", "Value=", "ENDITEM", 
		"Name=value(capWorkDescriptionModel*description)", "Value=", "ENDITEM", 
		"Name=value(capType)", "Value=Permits/Residential/Electrical/Elec Service Change-Upgrade", "ENDITEM", 
		"Name=date(capModel*fileDate)", "Value=08/29/2018", "ENDITEM", 
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
		"Name=value(capModel*altID)", "Value=", "ENDITEM", 
		"Name=value(capModel*isManualAltID)", "Value=", "ENDITEM", 
		"Name=originalCAPAltID", "Value=", "ENDITEM", 
		"Name=value(capDetailModel*shortNotes)", "Value=performance", "ENDITEM", 
		"Name=isShowAddress", "Value=Y", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=225", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
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
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
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
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=validateFlagOriginalValue", "Value=", "ENDITEM", 
		"Name=value(addressesModel*addressType)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*refAddressType)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*houseNumberStart)", "Value=38359", "ENDITEM", 
		"Name=value(addressesModel*houseNumberAlphaStart)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*houseNumberAlphaEnd)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*levelPrefix)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*levelNumberStart)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*levelNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*houseFractionStart)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*houseNumberEnd)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*houseFractionEnd)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*streetPrefix)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*streetDirection)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*streetSuffixdirection)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*unitEnd)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*sourceFlag)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*addressTypeFlag)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*validateFlag)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*distance)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*secondaryRoad)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*secondaryRoadNumber)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*inspectionDistrictPrefix)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*inspectionDistrict)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*neighberhoodPrefix)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*neighborhood)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*county)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*addressStatus)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*addressDescription)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*fullAddress)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*addressLine1)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*addressLine2)", "Value=", "ENDITEM", 
		"Name=value(templateData)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*streetName)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*streetSuffix)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*unitType)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*unitStart)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*primaryFlag)", "Value=Y", "ENDITEM", 
		"Name=value(addressesModel*city)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*state)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*zip_disp)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*zip)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*countryCode)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*XCoordinator)", "Value=", "ENDITEM", 
		"Name=value(addressesModel*YCoordinator)", "Value=", "ENDITEM", 
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
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
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
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
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
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=expression_portlet_to_be_populate", "Value=20021", "ENDITEM", 
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM", 
		"Name=expressionPageType", "Value=SPEAR", "ENDITEM", 
		"Name=expression_page_reload_after_submit_or_validate_failed", "Value=true", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(parcelNo)", "Value=", "ENDITEM", 
		"Name=value(book)", "Value=", "ENDITEM", 
		"Name=value(page)", "Value=", "ENDITEM", 
		"Name=value(parcel)", "Value=", "ENDITEM", 
		"Name=value(landValue)", "Value=", "ENDITEM", 
		"Name=value(improvedValue)", "Value=", "ENDITEM", 
		"Name=value(exemptValue)", "Value=", "ENDITEM", 
		"Name=value(tract)", "Value=", "ENDITEM", 
		"Name=value(mapNo)", "Value=", "ENDITEM", 
		"Name=value(censusTract)", "Value=", "ENDITEM", 
		"Name=value(supervisorDistrict)", "Value=", "ENDITEM", 
		"Name=value(councilDistrict)", "Value=", "ENDITEM", 
		"Name=value(planArea)", "Value=", "ENDITEM", 
		"Name=value(mapRef)", "Value=", "ENDITEM", 
		"Name=value(gisSeqNo)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(parcelArea)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(section)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(township)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(range)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(primaryParcelFlagWithoutDealing)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(legalDesc)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(lot)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(block)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_ACTUAL_YEAR_BUILT", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_ASSESSMENTNAME", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_DIR_CARD_COUNT", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_EVACZONES", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_FEMA", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_FUTURELANDUSE", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_LEGAL_DESCRIPTION_CONTINUED", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_MAF_BDG_REP_VAL", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_MOBILITYFEEAREA", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_MPUD", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_NONADJUSTED", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_PARKFEE", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_STORMFLOODS", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_TAZ", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_TIF", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_VAL_BLDG_DEPR_35_PERCENT", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_VAL_BLDG_DEPR_50_PERCENT", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_WASTEWATERSERVICEAREAS", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_WATERSERVICEAREAS", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_WETLANDS", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_WINDCODE", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_ZONEAREA", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_VAL_APPR", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_VAL_TAX_AREA", "Value=", "ENDITEM", 
		"Name=template_CAP_PARCEL_VAL_EXEM_AMT", "Value=", "ENDITEM", 
		"Name=value(templateGroup)", "Value=CAP", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(inspectionDistrict)", "Value=", "ENDITEM", 
		"Name=value(unmaskedParcelNumber)", "Value=", "ENDITEM", 
		"Name=value(subdivision)", "Value=", "ENDITEM", 
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
		"Name=isShowOwner", "Value=Y", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=20021", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
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
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
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
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=value(mode)", "Value=New", "ENDITEM", 
		"Name=value(ownerFullName)", "Value=", "ENDITEM", 
		"Name=value(mailAddress2)", "Value=", "ENDITEM", 
		"Name=value(mailAddress3)", "Value=", "ENDITEM", 
		"Name=value(fax)", "Value=", "ENDITEM", 
		"Name=value(primaryOwner)", "Value=Y", "ENDITEM", 
		"Name=value(mailAddress1)", "Value=", "ENDITEM", 
		"Name=value(phone_disp)", "Value=", "ENDITEM", 
		"Name=value(phone)", "Value=", "ENDITEM", 
		"Name=value(mailCity)", "Value=", "ENDITEM", 
		"Name=value(mailState)", "Value=FL", "ENDITEM", 
		"Name=value(mailZip_disp)", "Value=", "ENDITEM", 
		"Name=value(mailZip)", "Value=", "ENDITEM", 
		"Name=value(mailCountry)", "Value=US", "ENDITEM", 
		"Name=value(email)", "Value=", "ENDITEM", 
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
		"Name=isOwner", "Value=1", "ENDITEM", 
		"Name=ownerViewID", "Value=20026", "ENDITEM", 
		"Name=isOwnerValidation", "Value=", "ENDITEM", 
		"Name=isOwnerRequired", "Value=Y", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=20026", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
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
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
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
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=expression_portlet_to_be_populate", "Value=122", "ENDITEM", 
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM", 
		"Name=isPartialCap", "Value=null", "ENDITEM", 
		"Name=value(professionalModel*licensenbr)", "Value=CAC056943", "ENDITEM", 
		"Name=value(professionalModel*address3)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*phone3)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*fax)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*gender)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*postOfficeBox)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*busName2)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*licenseBoard)", "Value=", "ENDITEM", 
		"Name=date(professionalModel*birthDate)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*typeFlag)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*maskedSsn)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*fein)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*title)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*suffixName)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*licensetype)", "Value=CERT Building", "ENDITEM", 
		"Name=value(professionalModel*printFlag)", "Value=Y", "ENDITEM", 
		"Name=value(professionalModel*salutation)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*contactfirstname)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*contactmiddlename)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*contactlastname)", "Value=", "ENDITEM", 
		"Name=date(professionalModel*lastUpdateDate)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*businessname)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*businesslicense)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*address1)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*phone2_disp)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*phone2)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*phone1_disp)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*phone1)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*address2)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*city)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*state)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*zip_disp)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*zip)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*email)", "Value=", "ENDITEM", 
		"Name=value(professionalModel*countryCode)", "Value=US", "ENDITEM", 
		"Name=value(professionalModel*comment)", "Value=", "ENDITEM", 
		"Name=template_CAP_PROFESSIONAL_RESIDENTIAL_ADDRESS_1", "Value=", "ENDITEM", 
		"Name=template_CAP_PROFESSIONAL_RESIDENTIAL_ADDRESS_2", "Value=", "ENDITEM", 
		"Name=template_CAP_PROFESSIONAL_RESIDENTIAL_CITY", "Value=", "ENDITEM", 
		"Name=template_CAP_PROFESSIONAL_RESIDENTIAL_STATE", "Value=", "ENDITEM", 
		"Name=template_CAP_PROFESSIONAL_RESIDENTIAL_ZIP", "Value=", "ENDITEM", 
		"Name=template_CAP_PROFESSIONAL_BOND_CODE", "Value=", "ENDITEM", 
		"Name=template_CAP_PROFESSIONAL_BOND_COMPANY", "Value=", "ENDITEM", 
		"Name=template_CAP_PROFESSIONAL_BOND_DATE", "Value=", "ENDITEM", 
		"Name=template_CAP_PROFESSIONAL_ADDITIONAL_COMMENTS", "Value=", "ENDITEM", 
		"Name=value(templateGroup)", "Value=CAP_PROFESSIONAL", "ENDITEM", 
		"Name=value(mode)", "Value=New", "ENDITEM", 
		"Name=value(modePro)", "Value=add", "ENDITEM", 
		"Name=valuetextarea13", "Value=", "ENDITEM", 
		"Name=sourcetextarea13", "Value=", "ENDITEM", 
		"Name=layouttextarea13", "Value=", "ENDITEM", 
		"Name=professionalModel*uiuid", "Value=13", "ENDITEM", 
		"Name=value(professionalSearchType)", "Value=", "ENDITEM", 
		"Name=value(licSeqNbr)", "Value=", "ENDITEM", 
		"Name=isProfessional", "Value=1", "ENDITEM", 
		"Name=professionalViewID", "Value=122", "ENDITEM", 
		"Name=isProfessionalValidation", "Value=N", "ENDITEM", 
		"Name=isProfessionalRequired", "Value=Y", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=121", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=value(mode)", "Value=newsave", "ENDITEM", 
		"Name=value(contactSeqNumber)", "Value=", "ENDITEM", 
		"Name=value(refContactNumber)", "Value=", "ENDITEM", 
		"Name=value(applicant*refContactNumber)", "Value=", "ENDITEM", 
		"Name=value(serviceProviderCode)", "Value=", "ENDITEM", 
		"Name=value(applicant*contactType_cur)", "Value=Applicant", "ENDITEM", 
		"Name=value(applicant*contactType)", "Value=Applicant", "ENDITEM", 
		"Name=value(applicant*relation)", "Value=", "ENDITEM", 
		"Name=value(applicant*title)", "Value=", "ENDITEM", 
		"Name=value(applicant*addressId)", "Value=", "ENDITEM", 
		"Name=value(applicant*addressLine2)", "Value=", "ENDITEM", 
		"Name=value(applicant*addressLine3)", "Value=", "ENDITEM", 
		"Name=value(applicant*confirmEmail)", "Value=", "ENDITEM", 
		"Name=value(applicant*fax)", "Value=", "ENDITEM", 
		"Name=value(applicant*contactOnSRChange)", "Value=", "ENDITEM", 
		"Name=value(applicant*comment)", "Value=", "ENDITEM", 
		"Name=value(applicant*maskedSsn)", "Value=", "ENDITEM", 
		"Name=value(applicant*fein)", "Value=", "ENDITEM", 
		"Name=value(applicant*tradeName)", "Value=", "ENDITEM", 
		"Name=value(applicant*userID)", "Value=", "ENDITEM", 
		"Name=value(applicant*internalUserFlag)", "Value=", "ENDITEM", 
		"Name=value(applicant*salutation)", "Value=", "ENDITEM", 
		"Name=value(applicant*gender)", "Value=", "ENDITEM", 
		"Name=value(applicant*postOfficeBox)", "Value=", "ENDITEM", 
		"Name=date(applicant*birthDate)", "Value=", "ENDITEM", 
		"Name=value(applicant*namesuffix)", "Value=", "ENDITEM", 
		"Name=value(applicant*businessName2)", "Value=", "ENDITEM", 
		"Name=value(applicant*birthCity)", "Value=", "ENDITEM", 
		"Name=value(applicant*birthState)", "Value=", "ENDITEM", 
		"Name=value(applicant*birthRegion)", "Value=", "ENDITEM", 
		"Name=value(applicant*race)", "Value=", "ENDITEM", 
		"Name=date(applicant*deceasedDate)", "Value=", "ENDITEM", 
		"Name=value(applicant*passportNumber)", "Value=", "ENDITEM", 
		"Name=value(applicant*driverLicenseNbr)", "Value=", "ENDITEM", 
		"Name=value(applicant*driverLicenseState)", "Value=", "ENDITEM", 
		"Name=value(applicant*stateIDNbr)", "Value=", "ENDITEM", 
		"Name=value(applicant*flag)", "Value=Y", "ENDITEM", 
		"Name=value(applicant*preferredChannel)", "Value=", "ENDITEM", 
		"Name=value(applicant*firstName)", "Value=perf", "ENDITEM", 
		"Name=value(applicant*middleName)", "Value=", "ENDITEM", 
		"Name=value(applicant*lastName)", "Value=testing", "ENDITEM", 
		"Name=value(applicant*phone1_disp)", "Value=", "ENDITEM", 
		"Name=value(applicant*phone1)", "Value=", "ENDITEM", 
		"Name=value(applicant*addressLine1)", "Value=", "ENDITEM", 
		"Name=value(applicant*phone2_disp)", "Value=1234567890", "ENDITEM", 
		"Name=value(applicant*phone2)", "Value=1234567890", "ENDITEM", 
		"Name=value(applicant*city)", "Value=", "ENDITEM", 
		"Name=value(applicant*state)", "Value=FL", "ENDITEM", 
		"Name=value(applicant*zip_disp)", "Value=", "ENDITEM", 
		"Name=value(applicant*zip)", "Value=", "ENDITEM", 
		"Name=value(applicant*phone3_disp)", "Value=", "ENDITEM", 
		"Name=value(applicant*phone3)", "Value=", "ENDITEM", 
		"Name=value(applicant*businessName)", "Value=", "ENDITEM", 
		"Name=value(applicant*countryCode)", "Value=US", "ENDITEM", 
		"Name=value(applicant*email)", "Value=perf@accela.com", "ENDITEM", 
		"Name=displasy*applicant*email", "Value=Y", "ENDITEM", 
		"Name=value(applicant*fullName)", "Value=", "ENDITEM", 
		"Name=value(templateGroup)", "Value=CAP", "ENDITEM", 
		"Name=valuetextarea12", "Value=", "ENDITEM", 
		"Name=sourcetextarea12", "Value={\"UIUID\":12}", "ENDITEM", 
		"Name=layouttextarea12", "Value=null", "ENDITEM", 
		"Name=applicant*uiuid", "Value=12", "ENDITEM", 
		"Name=isApplicant", "Value=1", "ENDITEM", 
		"Name=applicantViewID", "Value=121", "ENDITEM", 
		"Name=isApplicantValidation", "Value=N", "ENDITEM", 
		"Name=isApplicantRequired", "Value=Y", "ENDITEM", 
		"Name=applicantAccessRight", "Value=F", "ENDITEM", 
		"Name=applicantContactNumber", "Value=null", "ENDITEM", 
		"Name=value(capID*ID1)", "Value=", "ENDITEM", 
		"Name=value(capID*ID2)", "Value=", "ENDITEM", 
		"Name=value(capID*ID3)", "Value=", "ENDITEM", 
		"Name=value(bValuatnModel*estimatedValue)", "Value=1000", "ENDITEM", 
		"Name=value(capDetailModel*houseCount)", "Value=0", "ENDITEM", 
		"Name=value(capDetailModel*buildingCount)", "Value=0", "ENDITEM", 
		"Name=value(capDetailModel*publicOwned)", "Value=N", "ENDITEM", 
		"Name=value(capDetailModel*constTypeCode)", "Value=", "ENDITEM", 
		"Name=isAdditional", "Value=1", "ENDITEM", 
		"Name=isAppSpecInfo", "Value=1", "ENDITEM", 
		"Name=value(capID*ID1)", "Value=", "ENDITEM", 
		"Name=value(capID*ID2)", "Value=", "ENDITEM", 
		"Name=value(capID*ID3)", "Value=", "ENDITEM", 
		"Name=singleModeName", "Value=GENERAL+INFORMATION", "ENDITEM", 
		"Name=app_spec_info_GENERAL_INFORMATION_Office_Location", "Value=NPR", "ENDITEM", 
		"Name=app_spec_info_GENERAL_INFORMATION_Census_Code", "Value=System Generated", "ENDITEM", 
		"Name=app_spec_info_GENERAL_INFORMATION_Name_of_Lessee", "Value=", "ENDITEM", 
		"Name=app_spec_info_GENERAL_INFORMATION_Expiration_Date", "Value=", "ENDITEM", 
		"Name=app_spec_info_GENERAL_INFORMATION_Expiration_Date", "Value=", "ENDITEM", 
		"Name=singleModeName", "Value=PERMIT+INFORMATION", "ENDITEM", 
		"Name=app_spec_info_PERMIT_INFORMATION_Number_of_Termination_Points", "Value=1", "ENDITEM", 
		"Name=singleModeName", "Value=REQUIRED+TRADE", "ENDITEM", 
		"Name=app_spec_info_REQUIRED_TRADE_Plumbing_Value", "Value=Y", "ENDITEM", 
		"Name=app_spec_info_REQUIRED_TRADE_Electrical_Value", "Value=Y", "ENDITEM", 
		"Name=app_spec_info_REQUIRED_TRADE_Electrical", "Value=on", "ENDITEM", 
		"Name=app_spec_info_REQUIRED_TRADE_Mechanical_Value", "Value=Y", "ENDITEM", 
		"Name=app_spec_info_REQUIRED_TRADE_LP_or_Natural_Gas_Value", "Value=Y", "ENDITEM", 
		"Name=app_spec_info_REQUIRED_TRADE_Fire_Value", "Value=Y", "ENDITEM", 
		"Name=app_spec_info_REQUIRED_TRADE_Temp_Underground_Electric_Value", "Value=Y", "ENDITEM", 
		"Name=singleModeName", "Value=GIS+INFORMATION", "ENDITEM", 
		"Name=app_spec_info_GIS_INFORMATION_Taxing_Authority", "Value=", "ENDITEM", 
		"Name=app_spec_info_GIS_INFORMATION_Taxing_Authority", "Value=", "ENDITEM", 
		"Name=app_spec_info_GIS_INFORMATION_FEMA", "Value=", "ENDITEM", 
		"Name=app_spec_info_GIS_INFORMATION_FEMA", "Value=", "ENDITEM", 
		"Name=app_spec_info_GIS_INFORMATION_Actual_Year_Built", "Value=", "ENDITEM", 
		"Name=app_spec_info_GIS_INFORMATION_Actual_Year_Built", "Value=", "ENDITEM", 
		"Name=app_spec_info_GIS_INFORMATION_Wind_Speed", "Value=", "ENDITEM", 
		"Name=app_spec_info_GIS_INFORMATION_Wind_Speed", "Value=", "ENDITEM", 
		"Name=app_spec_info_GIS_INFORMATION_Depreciated_Value_50%25", "Value=", "ENDITEM", 
		"Name=app_spec_info_GIS_INFORMATION_Depreciated_Value_50%25", "Value=", "ENDITEM", 
		"Name=singleModeName", "Value=UTILITY+INFORMATION", "ENDITEM", 
		"Name=app_spec_info_UTILITY_INFORMATION_Power_Company", "Value=Duke", "ENDITEM", 
		"Name=app_spec_info_UTILITY_INFORMATION_Notes%3A", "Value=", "ENDITEM", 
		"Name=singleModeName", "Value=PROPOSED+CONSTRUCTION+INFO", "ENDITEM", 
		"Name=app_spec_info_PROPOSED_CONSTRUCTION_INFO_Is_the_proposed_construction_attached_to_primary_structure%3F", "Value=No", "ENDITEM", 
		"Name=app_spec_info_PROPOSED_CONSTRUCTION_INFO_Replacement_Structure", "Value=", "ENDITEM", 
		"Name=app_spec_info_PROPOSED_CONSTRUCTION_INFO_Flood_Zone_A_or_V_Proposed_FF_matches_existing_Floor_Elevation", "Value=No", "ENDITEM", 
		"Name=app_spec_info_PROPOSED_CONSTRUCTION_INFO_Substantial_Damage%2FImprovement_Document", "Value=", "ENDITEM", 
		"Name=app_spec_info_PROPOSED_CONSTRUCTION_INFO_Are_you_constructing_building_to_meet_BFE_%2B_Freeboard%3F", "Value=No", "ENDITEM", 
		"Name=value(mode)", "Value=New", "ENDITEM", 
		"Name=expression_portlet_to_be_populate", "Value=-1", "ENDITEM", 
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM", 
		"Name=is_ASI_fields_displayed", "Value=true", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=21031", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=21031", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=isGisFeatureRequired", "Value=N", "ENDITEM", 
		"Name=value(entityType)", "Value=CAP", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=21031", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=generalCAPSearch", "Value=", "ENDITEM", 
		"Name=isGeneralCAP", "Value=Y", "ENDITEM", 
		"Name=objectName", "Value=", "ENDITEM", 
		"Name=CheckBoxName", "Value=", "ENDITEM", 
		"Name=MaxNumber", "Value=", "ENDITEM", 
		"Name=ExportFileType", "Value=print", "ENDITEM", 
		"Name=CurrentViewID", "Value=21031", "ENDITEM", 
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM", 
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
		"Name=virtualFoldersURL", "Value=/portlets/document/documentForm.do?mode=getVirtualFolders&capType=Permits%2FResidential%2FElectrical%2FElec+Service+Change-Upgrade&module=Permits", "ENDITEM", 
		"Name=required", "Value=* Required", "ENDITEM", 
		"Name=staticRequiredDocTypesMessage", "Value=", "ENDITEM", 
		"Name=edmsAdsStr", "Value=", "ENDITEM", 
		"Name=isCloneSingle", "Value=", "ENDITEM", 
		"Name=fromPartialCap", "Value=", "ENDITEM", 
		"Name=isPendingCap", "Value=", "ENDITEM", 
		"Name=valuetextarea14", "Value=", "ENDITEM", 
		"Name=sourcetextarea14", "Value=", "ENDITEM", 
		"Name=layouttextarea14", "Value=", "ENDITEM", 
		"Name=docTemplateUIUID", "Value=14", "ENDITEM", 
		"Name=value(docGroup)", "Value=PMT", "ENDITEM", 
		"Name=value(docCategory)", "Value=", "ENDITEM", 
		"Name=value(docDepartment)", "Value=", "ENDITEM", 
		"Name=value(docDescription)", "Value=", "ENDITEM", 
		"Name=value(alsoAttachTo)", "Value=", "ENDITEM", 
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
		"Name=alsoattachto-00-doc", "Value=", "ENDITEM", 
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
		"Name=editPar", "Value=2112", "ENDITEM", 
		"Name=allViewIDGroup", "Value=225,122,121,21031", "ENDITEM", 
		"Name=viewGroup", "Value=225,122,121,21031", "ENDITEM", 
		"Name=formGroup", "Value=,capDetailForm,addressForm,parcelForm,ownerForm,refProfessionalDetailActionForm,applicantDetailForm,addtInfoForm", "ENDITEM", 
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
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(applicant*fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(professionalModel*maskedSsn)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"},\"value(applicant*maskedSsn)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"},\"value(professionalModel*fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"}}}", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_13", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Permits", 
		"Snapshot=t252.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("EMSEMessage.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Permits", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Permits", 
		"Snapshot=t253.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_14", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Permits", 
		"Snapshot=t254.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_19", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Permits", 
		"Snapshot=t255.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(9);

	web_url("session.do_20", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Permits", 
		"Snapshot=t256.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("PASCO_TC3_08_SubmitApplication_AddNewApplication",2);

	lr_think_time(12);
    web_add_header("AppD_Header", "PASCO_TC3_08_SubmitApplication_ViewSummary");
	lr_start_transaction("PASCO_TC3_08_SubmitApplication_ViewSummary");

	web_url("session.do_21", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e81&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Permits", 
		"Snapshot=t257.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_22", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t258.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("CapTabSummary.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=PASCO&ID1=DUB18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Permits&isFromCapList=true",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do",
		"Snapshot=t259.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("empty.jsp_15", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t260.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Permits&ID1=DUB18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=PASCO&ID1=DUB18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Permits&isFromCapList=true",
		"Snapshot=t261.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Permits&ID1=DUB18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=PASCO&ID1=DUB18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Permits&isFromCapList=true",
		"Snapshot=t262.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("PASCO_TC3_08_SubmitApplication_ViewSummary",2);

	lr_think_time(9);
    web_add_header("AppD_Header", "PASCO_TC3_09_Record_ClickContact");
	lr_start_transaction("PASCO_TC3_09_Record_ClickContact");

	web_url("session.do_23",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=PASCO&ID1=DUB18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Permits&isFromCapList=true",
		"Snapshot=t263.inf",
		"Mode=HTML",
		"LAST");

 





 
 
 
 
 
 
 
 
 

 





 
 
 
 
 
 
 
 
 

 





 
 
 
 
 
 
 
 
 

	web_url("contactList.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Permits",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=PASCO&ID1=DUB18&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Permits&isFromCapList=true",
		"Snapshot=t264.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("empty.jsp_16", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t265.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Permits&ID1=DUB18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Permits",
		"Snapshot=t266.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_4",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Permits&ID1=DUB18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Permits",
		"Snapshot=t267.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("PASCO_TC3_09_Record_ClickContact",2);

	lr_think_time(8);
    web_add_header("AppD_Header", "PASCO_TC3_10_Record_Contact_LookUpContact");
	lr_start_transaction("PASCO_TC3_10_Record_Contact_LookUpContact");

	web_url("session.do_24", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Permits", 
		"Snapshot=t268.inf", 
		"Mode=HTML", 
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter",
		"RegExp=name=\"TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP\"\\ value=\"(.*?)\">\\\r\\\n\\\t\\\t<input\\ type",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/refContactListForCap.do*",
		"LAST");

	web_url("refContactListForCap.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Permits", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Permits", 
		"Snapshot=t269.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("ajax.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Permits", 
		"Snapshot=t270.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_17", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t271.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_12", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Permits", 
		"Snapshot=t272.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_13", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Permits", 
		"Snapshot=t273.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_14", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Permits", 
		"Snapshot=t274.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_15", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Permits", 
		"Snapshot=t275.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("PASCO_TC3_10_Record_Contact_LookUpContact",2);

	lr_think_time(5);
    web_add_header("AppD_Header", "PASCO_TC3_11_Record_Contact_LookUpContact_SearchContact");
	lr_start_transaction("PASCO_TC3_11_Record_Contact_LookUpContact_SearchContact");

	web_url("session.do_25", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Permits", 
		"Snapshot=t276.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_26", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Permits", 
		"Snapshot=t277.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("refContactListForCap.do_2",
		"Action=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Permits",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Permits",
		"Snapshot=t278.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP", "Value=b8c4ce622de12ecd4f6135e400b9d2cf", "ENDITEM",
		"Name=value(FirstEntryURL)", "Value=/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Permits", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Permits", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=", "ENDITEM",
		"Name=refresh_url", "Value=", "ENDITEM",
		"Name=buttonName", "Value=", "ENDITEM",
		"Name=modeName", "Value=search", "ENDITEM",
		"Name=module", "Value=Permits", "ENDITEM",
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
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM",
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
		"Name=value(socialSecurityNumber)", "Value=", "ENDITEM",
		"Name=value(fein)", "Value=", "ENDITEM",
		"Name=value(tradeName)", "Value=", "ENDITEM",
		"Name=value(activityModel*activityTemplate)", "Value=", "ENDITEM",
		"Name=value(salutation)", "Value=", "ENDITEM",
		"Name=value(gender)", "Value=", "ENDITEM",
		"Name=value(postOfficeBox)", "Value=", "ENDITEM",
		"Name=date(birthDate)", "Value=", "ENDITEM",
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
		"Name=value(countryCode)", "Value=", "ENDITEM",
		"Name=value(templateGroup)", "Value=G3CONTACT", "ENDITEM",
		"Name=valuetextarea15", "Value=", "ENDITEM",
		"Name=sourcetextarea15", "Value=", "ENDITEM",
		"Name=layouttextarea15", "Value=", "ENDITEM",
		"Name=uiuid", "Value=15", "ENDITEM",
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(socialSecurityNumber)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"}}}", "ENDITEM",
		"LAST");

	web_submit_data("empty.jsp_18", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t279.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_5",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Permits&ID1=DUB18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Permits",
		"Snapshot=t280.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_6",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Permits&ID1=DUB18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Permits",
		"Snapshot=t281.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("PASCO_TC3_11_Record_Contact_LookUpContact_SearchContact",2);
    web_add_header("AppD_Header", "PASCO_TC3_12_Record_Contact_LookUpContact_SelectContact");
	lr_start_transaction("PASCO_TC3_12_Record_Contact_LookUpContact_SelectContact");

	web_url("session.do_27", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Permits", 
		"Snapshot=t282.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("refContactListForCap.do_3",
		"Action=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Permits",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Permits",
		"Snapshot=t283.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP", "Value=b8c4ce622de12ecd4f6135e400b9d2cf", "ENDITEM",
		"Name=value(FirstEntryURL)", "Value=/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Permits", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/contact/ref/refContactListForCap.do?module=Permits&value(usedQueryInfo)=Y", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=capList", "ENDITEM",
		"Name=refresh_url", "Value=/portlets/cap/capList.do?mode=view&module=Permits", "ENDITEM",
		"Name=buttonName", "Value=submit", "ENDITEM",
		"Name=modeName", "Value=list", "ENDITEM",
		"Name=module", "Value=Permits", "ENDITEM",
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
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM",
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
		"Name=chk_contactid", "Value=318513246", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=318513246", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=318513246", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=318485800", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=318485800", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=318487514", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=318487514", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=318507113", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=318507113", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=318507486", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=318507486", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=318508370", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=318508370", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=318525899", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=318525899", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=318525913", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=318525913", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=318489774", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=318489774", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=318526889", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=318526889", "ENDITEM",
		"Name=isDynaPaging", "Value=true", "ENDITEM",
		"Name=startDate", "Value=", "ENDITEM",
		"LAST");

	web_submit_data("empty.jsp_19", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t284.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_7",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Permits&ID1=DUB18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Permits",
		"Snapshot=t285.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_8",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Permits&ID1=DUB18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Permits",
		"Snapshot=t286.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("PASCO_TC3_12_Record_Contact_LookUpContact_SelectContact",2);

	lr_think_time(29);
    web_add_header("AppD_Header", "PASCO_TC3_13_Record_Click_CustomList");
	lr_start_transaction("PASCO_TC3_13_Record_Click_CustomList");

	web_url("session.do_29", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Permits", 
		"Snapshot=t288.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("appSpecInfoTableForm.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Permits", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Permits", 
		"Snapshot=t289.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("search.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Permits", 
		"Snapshot=t290.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=categoryName", "Value=AppSpecInfoTableFilter", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_20", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t291.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("search.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Permits", 
		"Snapshot=t292.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		"LAST");

	web_custom_request("expression.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Permits", 
		"Snapshot=t293.inf", 
		"Mode=HTML", 
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22PLANS%20WAREHOUSE%20TRACKING%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&isReload=false&module=Permits&capType=Permits%2FResidential%2FElectrical%2FElec%20Service%20Change-Upgrade", 
		"LAST");

	web_custom_request("tabRecordCount.do_9",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Permits&ID1=DUB18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Permits",
		"Snapshot=t294.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_10",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Permits&ID1=DUB18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Permits",
		"Snapshot=t295.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("PASCO_TC3_13_Record_Click_CustomList",2);

	lr_think_time(6);
    web_add_header("AppD_Header", "PASCO_TC3_14_Records_CustomList_Save");
	lr_start_transaction("PASCO_TC3_14_Records_CustomList_Save");

	web_url("session.do_30", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Permits", 
		"Snapshot=t296.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("appSpecInfoTableForm.do_2",
		"Action=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Permits",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Permits",
		"Snapshot=t297.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=value(FirstEntryURL)", "Value=/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Permits", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Permits", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=", "ENDITEM",
		"Name=refresh_url", "Value=", "ENDITEM",
		"Name=buttonName", "Value=", "ENDITEM",
		"Name=modeName", "Value=list", "ENDITEM",
		"Name=module", "Value=Permits", "ENDITEM",
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
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-2", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM",
		"Name=expressionPageType", "Value=SINGLEPORTLET", "ENDITEM",
		"Name=expression_page_reload_after_submit_or_validate_failed", "Value=true", "ENDITEM",
		"Name=value(appSpecTable*tableName)", "Value=PMT_PLANS::PLANS+WAREHOUSE+TRACKING", "ENDITEM",
		"Name=value(capID*ID1)", "Value=DUB18", "ENDITEM",
		"Name=value(capID*ID2)", "Value=00000", "ENDITEM",
		"Name=value(capID*ID3)", "Value={Param_ID3}", "ENDITEM",
		"Name=tableName", "Value=PMT_PLANS::PLANS+WAREHOUSE+TRACKING", "ENDITEM",
		"Name=INTEGRITY_CHECK", "Value=0", "ENDITEM",
		"LAST");

	web_submit_data("search.do_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Permits", 
		"Snapshot=t298.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=categoryName", "Value=AppSpecInfoTableFilter", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_21", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t299.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("EMSEMessage.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Permits", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Permits", 
		"Snapshot=t300.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("search.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Permits", 
		"Snapshot=t301.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		"LAST");

	web_custom_request("expression.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Permits", 
		"Snapshot=t302.inf", 
		"Mode=HTML", 
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22PLANS%20WAREHOUSE%20TRACKING%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&isReload=true&module=Permits&capType=Permits%2FResidential%2FElectrical%2FElec%20Service%20Change-Upgrade", 
		"LAST");

	web_custom_request("tabRecordCount.do_11",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Permits&ID1=DUB18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Permits",
		"Snapshot=t303.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_12",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Permits&ID1=DUB18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Permits",
		"Snapshot=t304.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_submit_data("empty.jsp_22", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Permits", 
		"Snapshot=t305.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_31", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Permits", 
		"Snapshot=t306.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("PASCO_TC3_14_Records_CustomList_Save",2);

	lr_think_time(11);
    web_add_header("AppD_Header", "PASCO_TC3_15_Record_Click_Inspections");
	lr_start_transaction("PASCO_TC3_15_Record_Click_Inspections");

	web_url("session.do_32", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Permits", 
		"Snapshot=t307.inf", 
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

	web_url("inspectionListCapSpecific.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Permits", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Permits", 
		"Snapshot=t308.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_23", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t309.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_13",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Permits&ID1=DUB18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Permits",
		"Snapshot=t310.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_14",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Permits&ID1=DUB18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Permits",
		"Snapshot=t311.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("PASCO_TC3_15_Record_Click_Inspections",2);

	lr_think_time(13);
    web_add_header("AppD_Header", "PASCO_TC3_16_Record_Inspections_Click_ScheduleInspection");
	lr_start_transaction("PASCO_TC3_16_Record_Inspections_Click_ScheduleInspection");

	web_url("session.do_33", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Permits", 
		"Snapshot=t312.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("workloadingInspectionList.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doValidate&mType=0&isFromCAP=Y&module=Permits",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Permits",
		"Snapshot=t313.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_INSPECTIONLISTCAPSPECIFICFORM=c1484983b726dba08d1342d3292a3586&value(FirstEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DPermits&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DPermits&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Permits&accelasubmitbuttonname=&itemName=&CurrentViewID=220&exceptionLogID=&generalCAPSearch=&objectName=inspectionList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=220&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(mode)=view&value(CONFIRM_RESULT_WHEN_CANCEL)=&multipleResultType=&listType=recordInspectionList&errorShow=&noRight=&pageSizeR=null&",
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
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Permits", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Permits", 
		"Snapshot=t314.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("selectRequiredInspections.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=loadInspTypeByGroup&InspGroup=PMT_ELE_FO&CapId=DUB18-00000-{Param_ID3}&CapIdIndex=0",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Permits",
		"Snapshot=t315.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=f4787a0b00b74b4d150e99faacf77ca4&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DPermits&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DPermits&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Permits&accelasubmitbuttonname=&itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=f4787a0b00b74b4d150e99faacf77ca4&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&pageSizeR=9999&",
		"LAST");

	web_submit_data("empty.jsp_24", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t316.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_34", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Permits", 
		"Snapshot=t317.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("PASCO_TC3_16_Record_Inspections_Click_ScheduleInspection",2);

	web_url("session.do_35", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Permits", 
		"Snapshot=t318.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("selectRequiredInspections.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=loadListTitles",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Permits",
		"Snapshot=t319.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=f4787a0b00b74b4d150e99faacf77ca4&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DPermits&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DPermits&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Permits&accelasubmitbuttonname=&itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=f4787a0b00b74b4d150e99faacf77ca4&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&pageSizeR=9999&",
		"LAST");

	lr_think_time(10);
    web_add_header("AppD_Header", "PASCO_TC3_17_Record_SelectInspectionType_ClickPendingInspections");
	lr_start_transaction("PASCO_TC3_17_Record_SelectInspectionType_ClickPendingInspections");

	web_url("session.do_36", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Permits", 
		"Snapshot=t320.inf", 
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
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Permits",
		"Snapshot=t321.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=f4787a0b00b74b4d150e99faacf77ca4&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DPermits&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DPermits&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Permits&accelasubmitbuttonname=&itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=f4787a0b00b74b4d150e99faacf77ca4&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&value(chk_inspType%2C0)=on&value(inspTypeID%2C0)=84012029&value(select"
		"CapID%2C0)=DUB18-00000-{Param_ID3}&value(isInAdvance%2C0)=N&value(requiredInspection%2C0)=Y&value(autoassign%2C0)=N&value(scheduleOrder%2C0)=&value(unitNBR%2C0)=&pageSizeR=9999&",
		"LAST");

	lr_end_transaction("PASCO_TC3_17_Record_SelectInspectionType_ClickPendingInspections",2);

	lr_think_time(61);

	lr_start_transaction("PASCO_TC3_18_Record_Inspection_SelectInspectionType_ClickPendingInspections_ClickOK");

	lr_end_transaction("PASCO_TC3_18_Record_Inspection_SelectInspectionType_ClickPendingInspections_ClickOK",2);
    web_add_header("AppD_Header", "PASCO_TC3_18_Record_Inspection_Click_Inspection");
	lr_start_transaction("PASCO_TC3_18_Record_Inspection_Click_Inspection");

	web_url("session.do_37", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Permits", 
		"Snapshot=t322.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("inspectionListCapSpecific.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Permits", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Permits", 
		"Snapshot=t323.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_25", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t324.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_15",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Permits&ID1=DUB18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Permits",
		"Snapshot=t325.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_16",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Permits&ID1=DUB18&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Permits",
		"Snapshot=t326.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("PASCO_TC3_18_Record_Inspection_Click_Inspection",2);

	lr_think_time(9);
    web_add_header("AppD_Header", "PASCO_TC3_19_Record_Inspection_SelectIPendingInspection_ClickScheduleInspection");
	lr_start_transaction("PASCO_TC3_19_Record_Inspection_SelectIPendingInspection_ClickScheduleInspection");

	web_url("session.do_38", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Permits", 
		"Snapshot=t327.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("workloadingInspectionList.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doValidate&mType=0&isFromCAP=Y&module=Permits",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Permits",
		"Snapshot=t328.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_INSPECTIONLISTCAPSPECIFICFORM=c1484983b726dba08d1342d3292a3586&value(FirstEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DPermits&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DPermits&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Permits&accelasubmitbuttonname=&itemName=&CurrentViewID=220&exceptionLogID=&generalCAPSearch=&objectName=inspectionList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=220&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(mode)=view&value(CONFIRM_RESULT_WHEN_CANCEL)=&multipleResultType=&listType=recordInspectionList&errorShow=&noRight=&value(chk_INSP%2C0)=0&value(ServProvCode%2C0)=PASCO&value(INSPID%2C0)={inspectionID}&value(CAPID1%2C0)=DUB18&value(CAPID2%2C0)=00000&value(CAPID3%2C0)={Param_ID3}&value(INSPSEQ%2C0)=84012"
		"029&value(enabledCheck%2C0)=Y&documentDescription0=Insp%20Pending&inspectionCategory0=PENDING&pageSizeR=30&",
		"LAST");

	web_url("workloadingInspectionList.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Permits", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Permits", 
		"Snapshot=t329.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_26", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t330.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("inspectionDetail.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Permits", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Permits", 
		"Snapshot=t331.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_39", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Permits", 
		"Snapshot=t332.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_40", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Permits", 
		"Snapshot=t333.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("ajax.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Permits", 
		"Snapshot=t334.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_27", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t335.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_41", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Permits", 
		"Snapshot=t336.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("calendarInspectionWorkload.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/29/2018&hour=&ap=&module=Permits&capId=DUB18-00000-{Param_ID3}&inspectionId={inspectionID}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Permits",
		"Snapshot=t337.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("PASCO_TC3_19_Record_Inspection_SelectIPendingInspection_ClickScheduleInspection",2);

	lr_think_time(7);
    web_add_header("AppD_Header", "PASCO_TC3_20_Record_Inspection_ScheduleInspection_SelectDepartment");
	lr_start_transaction("PASCO_TC3_20_Record_Inspection_ScheduleInspection_SelectDepartment");

	web_url("session.do_42", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Permits", 
		"Snapshot=t338.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_43", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Permits", 
		"Snapshot=t339.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("calendarInspectionWorkload.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/29/2018&hour=&ap=&module=Permits&dept=PASCO%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&capId=DUB18-00000-{Param_ID3}&inspectionId={inspectionID}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Permits",
		"Snapshot=t340.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("PASCO_TC3_20_Record_Inspection_ScheduleInspection_SelectDepartment",2);

	lr_think_time(5);
    web_add_header("AppD_Header", "PASCO_TC3_21_Record_Inspection_ScheduleInspection_SelectUser");
	lr_start_transaction("PASCO_TC3_21_Record_Inspection_ScheduleInspection_SelectUser");

	web_url("session.do_44", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Permits", 
		"Snapshot=t341.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("calendarInspectionWorkload.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/29/2018&hour=&ap=&module=Permits&dept=PASCO%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&capId=DUB18-00000-{Param_ID3}&inspectionId={inspectionID}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Permits",
		"Snapshot=t342.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("PASCO_TC3_21_Record_Inspection_ScheduleInspection_SelectUser",2);

	lr_think_time(4);
    web_add_header("AppD_Header", "PASCO_TC3_22_Record_Inspection_ScheduleInspection_SubmitInspection");
	lr_start_transaction("PASCO_TC3_22_Record_Inspection_ScheduleInspection_SubmitInspection");

	web_url("session.do_45", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Permits", 
		"Snapshot=t343.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("inspectionDetail.do_2",
		"Action=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Permits",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Permits",
		"Snapshot=t344.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=value(FirstEntryURL)", "Value=/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Permits", "ENDITEM",
		"Name=value(CurrentEntryURL)", "Value=/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Permits", "ENDITEM",
		"Name=portlet_language", "Value=en_US", "ENDITEM",
		"Name=refresh_target", "Value=", "ENDITEM",
		"Name=refresh_url", "Value=", "ENDITEM",
		"Name=buttonName", "Value=", "ENDITEM",
		"Name=modeName", "Value=pendingEditInit", "ENDITEM",
		"Name=module", "Value=Permits", "ENDITEM",
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
		"Name=sessionIdFromWindow", "Value=A1VOpe+4yB0EYG5-mBINyZ8b", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=value(mode)", "Value=validate4Pending", "ENDITEM",
		"Name=value(contactNbr0)", "Value=", "ENDITEM",
		"Name=value(inspectionStatus0)", "Value=Scheduled", "ENDITEM",
		"Name=hiddenInspection0", "Value=true", "ENDITEM",
		"Name=value(gisArea)", "Value=", "ENDITEM",
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

	web_submit_data("empty.jsp_28", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t345.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_46", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Permits", 
		"Snapshot=t346.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("inspectionDetail.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?value(mode)=validateAndGetNextAvailableTime",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Permits",
		"Snapshot=t347.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_MANAGEINSPECTIONLISTFORM=f6d79c70c04e0845e744af5bc7b96580&value(FirstEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DPermits&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DPermits&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=pendingEditInit&module=Permits&accelasubmitbuttonname=&itemName=&CurrentViewID=265&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=265&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(mode)=pendingEditSave&value(deptOfUserAll)=PASCO%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(gaUserIDAll)=&date(scheduledDateAll)=&ac360_list_id=on0&value(pendingInspScheduleOrder%2C0)=&value(inspectionId%2C0)={inspectionID}&value(pendingCapID%2C0)"
		"=DUB18-00000-{Param_ID3}&value(inspectionTypeId%2C0)=84012029&value(calendarIds%2C0)=1792&value(requiredInspection%2C0)=Y&value(inspectionType%2C0)=215%20Electric%20Final&value(actualUnits%2C0)=&value(inspectionStatus0)=Scheduled&value(requestCommentText0)=&value(gisArea0)=&value(reqPhoneNumIDD0)=&value(reqPhoneNum0)=&value(displayinaca0)=Y&value(latitude0)=&value(longitude0)=&value(unitNBR0)=&value(restrictRole0)=&value(activityModel*requestorFname0)=&value(activityModel*requestorMname0)=&value(activityModel*requestorLname0)=&value(scheduledStartTimeHourHidden%2C0)=&value(scheduledStartTimeMinuteHidden%2C0)=&value(scheduledStartTimeAMPMHidden%2C0)=&value(scheduledEndTimeHourHidden%2C0)=&value(scheduledEndTimeMinuteHidden%2C0)=&value(scheduledEndTimeAMPMHidden%2C0)=&value(activityModel*contactFname0)=&value(activityModel*contactMname0)=&value(activityModel*contactLname0)=&value(contactNbr0)=&value(contactPhoneNumIDD0)=&value(contactPhoneNum0)=&value(estimatedTimeHour0)=&value(est"
		"imatedTimeMinute0)=&value(estimatedTimeAMPM0)=&value(estimatedEndTimeHour0)=&value(estimatedEndTimeMinute0)=&value(estimatedEndTimeAMPM0)=&date(activityModel*desiredDate0)=&value(desiredTimeHour0)=&value(desiredTimeMinute0)=&value(desiredTimeAMPM0)=&value(isRestrictView4ACA0)=off&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&date(scheduleDate%2C0)=08%2F29%2F2018&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(deptOfUser%2C0)=PASCO%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&valu"
		"e(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(initInspector%2C0)=&value(gaUserID%2C0)=&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&pageSizeR=9999&",
		"LAST");

	web_url("viewValidationResultMsg.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/viewValidationResultMsg.do?mode=viewResultMsg&from=confirm&indexCount=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Permits", 
		"Snapshot=t348.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_29", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t349.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("PASCO_TC3_22_Record_Inspection_ScheduleInspection_SubmitInspection",2);
    web_add_header("AppD_Header", "PASCO_TC3_23_Record_Inspection_ScheduleInspection_ClickOK");
	lr_start_transaction("PASCO_TC3_23_Record_Inspection_ScheduleInspection_ClickOK");

	web_url("session.do_47", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Permits", 
		"Snapshot=t350.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_48", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/viewValidationResultMsg.do?mode=viewResultMsg&from=confirm&indexCount=0", 
		"Snapshot=t351.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("workloadingInspectionList.do_5",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditSave&operateType=refresh&convertToJson=true",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Permits",
		"Snapshot=t352.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_MANAGEINSPECTIONLISTFORM=f6d79c70c04e0845e744af5bc7b96580&value(FirstEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DPermits&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DPermits&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=pendingEditInit&module=Permits&accelasubmitbuttonname=&itemName=&CurrentViewID=265&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=265&sessionIdFromWindow=A1VOpe%2B4yB0EYG5-mBINyZ8b&listID=&printType=&checkBoxValue=&value(mode)=pendingEditSave&value(deptOfUserAll)=PASCO%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(gaUserIDAll)=&date(scheduledDateAll)=&ac360_list_id=on0&value(pendingInspScheduleOrder%2C0)=&value(inspectionId%2C0)={inspectionID}&value(pendingCapID%2C0)"
		"=DUB18-00000-{Param_ID3}&value(inspectionTypeId%2C0)=84012029&value(calendarIds%2C0)=1792&value(requiredInspection%2C0)=Y&value(inspectionType%2C0)=215%20Electric%20Final&value(actualUnits%2C0)=&value(inspectionStatus0)=Scheduled&value(requestCommentText0)=&value(gisArea0)=&value(reqPhoneNumIDD0)=&value(reqPhoneNum0)=&value(displayinaca0)=Y&value(latitude0)=&value(longitude0)=&value(unitNBR0)=&value(restrictRole0)=&value(activityModel*requestorFname0)=&value(activityModel*requestorMname0)=&value(activityModel*requestorLname0)=&value(scheduledStartTimeHourHidden%2C0)=&value(scheduledStartTimeMinuteHidden%2C0)=&value(scheduledStartTimeAMPMHidden%2C0)=&value(scheduledEndTimeHourHidden%2C0)=&value(scheduledEndTimeMinuteHidden%2C0)=&value(scheduledEndTimeAMPMHidden%2C0)=&value(activityModel*contactFname0)=&value(activityModel*contactMname0)=&value(activityModel*contactLname0)=&value(contactNbr0)=&value(contactPhoneNumIDD0)=&value(contactPhoneNum0)=&value(estimatedTimeHour0)=&value(est"
		"imatedTimeMinute0)=&value(estimatedTimeAMPM0)=&value(estimatedEndTimeHour0)=&value(estimatedEndTimeMinute0)=&value(estimatedEndTimeAMPM0)=&date(activityModel*desiredDate0)=&value(desiredTimeHour0)=&value(desiredTimeMinute0)=&value(desiredTimeAMPM0)=&value(isRestrictView4ACA0)=off&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&date(scheduleDate%2C0)=08%2F29%2F2018&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(deptOfUser%2C0)=PASCO%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&valu"
		"e(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(initInspector%2C0)=&value(gaUserID%2C0)=&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&pageSizeR=9999&",
		"LAST");

	web_url("EMSEMessage.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Permits", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Permits", 
		"Snapshot=t353.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_30", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Permits", 
		"Snapshot=t354.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_49", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Permits", 
		"Snapshot=t355.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_50", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Permits", 
		"Snapshot=t356.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("MIPASCO_TC3_23_Record_Inspection_ScheduleInspection_ClickOK",2);

	web_url("session.do_51", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Permits", 
		"Snapshot=t357.inf", 
		"Mode=HTML", 
		"LAST");
    web_add_header("AppD_Header", "PASCO_SignOut");
	lr_start_transaction("PASCO_SignOut");

	web_url("session.do_52", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b0e82&module=Permits", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Permits", 
		"Snapshot=t358.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("signoff.do", 
		"URL=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t359.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("portal", 
		"Action=https://av-pt-ferrari.accela.com/jetspeed/portal?action=JClearCookie", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t360.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("logoutAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=PASCO&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t361.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("hostSignon.do_3", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=PASCO&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Snapshot=t362.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("PASCO_SignOut",2);

	return 0;
}
# 5 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\pasco\\pasco_tc3\\\\combined_PASCO_TC3.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\pasco\\pasco_tc3\\\\combined_PASCO_TC3.c" 2

