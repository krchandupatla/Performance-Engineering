# 1 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\lara\\lara_tc3\\\\combined_LARA_TC3.c"
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







 
 



















# 1 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\lara\\lara_tc3\\\\combined_LARA_TC3.c" 2

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

 
 
 

                               


 
 
 





















# 2 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\lara\\lara_tc3\\\\combined_LARA_TC3.c" 2

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



 
const char * const body_variable_1 = "Body=value(FirstEntryURL)=%2Fportlets%2Fcap%2Fcapsummary%2FCapTabSummary.do%3Fmode%3DtabSummary%26isRedirect%3Dfalse%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcap%2Fcapsummary%2FCapTabSummary.do%3Fmode%3DtabSummary%26isRedirect%3Dfalse%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=tabSummary&module=Building&itemName=&CurrentViewID=30046&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=30046&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=TABSUMMARY&expression_page_reload_after_submit_or_validate_failed=true&expression_portlet_to_be_populate=-2&expression_portlet_to_be_populate=-99999&valuetextarea999=%5B%7B%22values%22%3A%5B%7B%22Plan%20Requirements%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22Plans%20not%20Required%22%2C%22rowInde"
		"x%22%3A%221%22%7D%2C%22BCC%20Plan%20Review%20Number%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Plan%20Review%20Name%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22undefined%22%2C%22rowIndex%22%3A%221%22%7D%2C%22School%20Site%20Plan%20Review%20Number%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Building%20Use%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22E%2C%20Education%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_BUILD%22%2C%22subgroup%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Payment%20Method%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22Credit%20Card%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Index%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22PCA%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22"
		"Object%20Code%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_BUILD%22%2C%22subgroup%22%3A%22PAYMENT%20METHOD%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Rough%2FAdditional%20Inspection%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Rough%2FAdditional%20Inspection%20Cost%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22100%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Rough%2FAdditional%20Inspection%20Fee%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%220%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Additional%20Inspection%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Additional%20Inspection%20Cost%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22100%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Additional%20Inspection%20Fee%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%220%22%2C%22rowIndex%22%3A%221%22%7D%2C%2"
		"2Certification%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Certification%20Cost%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%2250%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Certification%20Fee%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%220%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_BUILD%22%2C%22subgroup%22%3A%22EQUIPMENT%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Permit%20Expiration%20Date%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_BUILD%22%2C%22subgroup%22%3A%22PERMIT%20DATES%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Type%20of%20Improvement%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22Addition%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Estimated%20Project%20Cost%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Alterations%2C%20Repairs%20a"
		"nd%20Additions%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Buildings%20Regulated%20by%20the%20Michigan%20Residential%20Code%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Will%20there%20be%20fire%20supression%3F%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Construction%20Type%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%224%20-%20Heavy%20Timber%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Housing%20Units%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Public%20Owned%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Basement%20-%20Existing%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Basement%20-%20Alterations%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C"
		"%22Basement%20-%20New%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%221st%20and%202nd%20Floor%20-%20Existing%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%221st%20and%202nd%20Floor%20-%20Alterations%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%221st%20and%202nd%20Floor%20-%20New%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%223rd%20and%2010th%20Floor%20-%20Existing%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%223rd%20and%2010th%20Floor%20-%20Alterations%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%223rd%20and%2010th%20Floor%20-%20New%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%2211th%20Floor%20and%20Above%20-%20Existing%22%3A%7B%22"
		"valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%2211th%20Floor%20and%20Above%20-%20Alterations%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%2211th%20Floor%20and%20Above%20-%20New%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Porch%2FDeck%2FGarage%20SQFT%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Total%20Aboveground%20SQFT%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%220%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Total%20Basement%20SQFT%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%220%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_BUILD%22%2C%22subgroup%22%3A%22BUILDING%20DATA%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Builders%20License%20Number%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Expiration%"
		"20Date%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22FEIN%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Workers%20Comp%20Insurance%20Carrier%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Unemployment%20Insurance%20Agency%20Employer%20Account%20Number%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_BUILD%22%2C%22subgroup%22%3A%22CONTRACTOR%20INFO%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Are%20you%20applying%20as%20a%20homeowner%3F%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Are%20you%20applying%20as%20a%20licensed%20professional%3F%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Building%20Type%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22Other%22"
		"%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_BUILD%22%2C%22subgroup%22%3A%22GENERAL%20INFORMATION%22%2C%22templateType%22%3A%22Form%22%7D%5D&sourcetextarea999=%7B%22templateForms%22%3A%5B%7B%22groupName%22%3A%22BLD_BUILD%22%2C%22subgroups%22%3A%5B%7B%22displayName%22%3A%22GENERAL%20INFORMATION%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Are%20you%20applying%20as%20a%20homeowner%3F%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Are%20you%20applying%20as%20a%20homeowner%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A15%2C%22fieldTypeValue%22%3A9%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BIn"
		"formation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Are%20you%20applying%20as%20a%20homeowner%3F%22%2C%22checkboxInd%22%3A%229%22%2C%22fieldTypeEnum%22%3A%22Checkbox%22%7D%2C%7B%22fieldName%22%3A%22Are%20you%20applying%20as%20a%20licensed%20professional%3F%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Are%20you%20applying%20as%20a%20licensed%20professional%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A9%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Are%20you%20applying%20as%20a%20licensed%"
		"20professional%3F%22%2C%22checkboxInd%22%3A%229%22%2C%22fieldTypeEnum%22%3A%22Checkbox%22%7D%2C%7B%22fieldName%22%3A%22Building%20Type%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22Other%22%2C%22displayFieldName%22%3A%22Building%20Type%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Building%20Type%22%2C%22checklistComment%22%3A%22Other%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Builders%20License%20Number%22%2C%22subgroupNa"
		"me%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Builders%20License%20Number%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3D%22%7D%2C%22checkboxDesc%22%3A%22Builders%20License%20Number%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Expiration%20Date%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Expiration%20Date%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A60%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22"
		"target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3D%22%7D%2C%22checkboxDesc%22%3A%22Expiration%20Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22FEIN%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22FEIN%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A70%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3D%22%7D%2C%22checkboxDesc%22%3A%22FEIN%22%2C%22checklistComment%22%3A%"
		"22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Workers%20Comp%20Insurance%20Carrier%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Workers%20Comp%20Insurance%20Carrier%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A80%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3D%22%7D%2C%22checkboxDesc%22%3A%22Workers%20Comp%20Insurance%20Carrier%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Unemployment%20Insurance%20Agency%20Employer%20Account%20Number%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%2"
		"2%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Unemployment%20Insurance%20Agency%20Employer%20Account%20Number%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A90%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3D%22%7D%2C%22checkboxDesc%22%3A%22Unemployment%20Insurance%20Agency%20Employer%20Account%20Number%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%5D%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Are%20you%20applying%20as%20a%20homeowner%3F%22%2C%22Are%20you%20applying%20as%20a%20licensed%20professional%3F%22%2C%22Building%20Type%22%2C%22Builders%20License%20Number%22%2C%22"
		"Expiration%20Date%22%2C%22FEIN%22%2C%22Workers%20Comp%20Insurance%20Carrier%22%2C%22Unemployment%20Insurance%20Agency%20Employer%20Account%20Number%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Plan%20Requirements%22%2C%22subgroupName%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22Plans%20not%20Required%22%2C%22displayFieldName%22%3A%22Plan%20Requirements%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A5%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22check"
		"boxDesc%22%3A%22Plan%20Requirements%22%2C%22checklistComment%22%3A%22Plans%20not%20Required%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22BCC%20Plan%20Review%20Number%22%2C%22subgroupName%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22BCC%20Plan%20Review%20Number%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22BCC%20Plan%20Review%20Number%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkb"
		"oxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Plan%20Review%20Name%22%2C%22subgroupName%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22undefined%22%2C%22displayFieldName%22%3A%22Plan%20Review%20Name%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A15%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Plan%20Review%20Name%22%2C%22checklistComment%22%3A%22undefined%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22School%20Site%20Plan%20Review%20N"
		"umber%22%2C%22subgroupName%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22School%20Site%20Plan%20Review%20Number%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22School%20Site%20Plan%20Review%20Number%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Residential%20Building%20Type%22%2C%22subgroupName%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22groupName%22%3A%"
		"22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Residential%20Building%20Type%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3D%22%7D%2C%22checkboxDesc%22%3A%22Residential%20Building%20Type%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Building%20Use%22%2C%22subgroupName%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22E%2C%20Education%22%2C%22displayFieldName%22%3A%22Building%20Use%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2F"
		"portlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Building%20Use%22%2C%22checklistComment%22%3A%22E%2C%20Education%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%5D%2C%22subgroupName%22%3A%22PLAN%20REVIEW%20INFORMATION%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Plan%20Requirements%22%2C%22BCC%20Plan%20Review%20Number%22%2C%22Plan%20Review%20Name%22%2C%22School%20Site%20Plan%20Review%20Number%22%2C%22Residential%20Building%20Type%22%2C%22Building%20Use%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22BUILDING%20DATA%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Type%20of%20Improvement%22%2C%22subgroupName%22%3A%22BUILDIN"
		"G%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22Addition%22%2C%22displayFieldName%22%3A%22Type%20of%20Improvement%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Type%20of%20Improvement%22%2C%22checklistComment%22%3A%22Addition%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Estimated%20Project%20Cost%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Estimated%20Projec"
		"t%20Cost%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A11%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Estimated%20Project%20Cost%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Alterations%2C%20Repairs%20and%20Additions%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Alterations%2C%20Repairs%20and%20Additions%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A13%2C%22fieldTypeValue%22%3A6%2C%22o"
		"ptions%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Alterations%2C%20Repairs%20and%20Additions%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%226%22%2C%22fieldTypeEnum%22%3A%22Textarea%22%7D%2C%7B%22fieldName%22%3A%22Buildings%20Regulated%20by%20the%20Michigan%20Residential%20Code%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Buildings%20Regulated%20by%20the%20Michigan%20Residential%20Code%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A15%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%2"
		"2_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Buildings%20Regulated%20by%20the%20Michigan%20Residential%20Code%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Will%20there%20be%20fire%20supression%3F%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Will%20there%20be%20fire%20supression%3F%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A17%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3"
		"DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Will%20there%20be%20fire%20supression%3F%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22Construction%20Type%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%224%20-%20Heavy%20Timber%22%2C%22displayFieldName%22%3A%22Construction%20Type%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInfor"
		"mation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Construction%20Type%22%2C%22checklistComment%22%3A%224%20-%20Heavy%20Timber%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Housing%20Units%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Housing%20Units%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A22%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Housing%2"
		"0Units%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Public%20Owned%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Public%20Owned%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A24%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Public%20Owned%22%2C%22checkboxInd%22%3A%223%22%2C%22fieldTypeEnum%22%3A%22Radio%22%7D%2C%7B%22fieldName%22%3A%22Basement%20-%20Existing%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_"
		"BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Basement%20-%20Existing%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Basement%20-%20Existing%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Basement%20-%20Alterations%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Basement%20-%20Alterations%22%2C%22displayLen%22%3A"
		"0%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Basement%20-%20Alterations%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Basement%20-%20New%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Basement%20-%20New%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspec"
		"info%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Basement%20-%20New%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%221st%20and%202nd%20Floor%20-%20Existing%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%221st%20and%202nd%20Floor%20-%20Existing%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A60%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3"
		"D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%221st%20and%202nd%20Floor%20-%20Existing%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%221st%20and%202nd%20Floor%20-%20Alterations%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%221st%20and%202nd%20Floor%20-%20Alterations%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A70%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPerm"
		"it%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%221st%20and%202nd%20Floor%20-%20Alterations%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%221st%20and%202nd%20Floor%20-%20New%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%221st%20and%202nd%20Floor%20-%20New%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A80%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCRE"
		"EN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%221st%20and%202nd%20Floor%20-%20New%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%223rd%20and%2010th%20Floor%20-%20Existing%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%223rd%20and%2010th%20Floor%20-%20Existing%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A90%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%223rd%20and%2010th%20Floor%20-%20Exist"
		"ing%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%223rd%20and%2010th%20Floor%20-%20Alterations%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%223rd%20and%2010th%20Floor%20-%20Alterations%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A100%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%223rd%20and%2010th%20Floor%20-%20Alterations%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%2"
		"24%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%223rd%20and%2010th%20Floor%20-%20New%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%223rd%20and%2010th%20Floor%20-%20New%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A110%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%223rd%20and%2010th%20Floor%20-%20New%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%2211th%20Floor%20and%20Above%20"
		"-%20Existing%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%2211th%20Floor%20and%20Above%20-%20Existing%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A120%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%2211th%20Floor%20and%20Above%20-%20Existing%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%2211th%20Floor%20and%20Above%20-%20Alterations%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%2"
		"2%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%2211th%20Floor%20and%20Above%20-%20Alterations%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A130%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%2211th%20Floor%20and%20Above%20-%20Alterations%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%2211th%20Floor%20and%20Above%20-%20New%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayField"
		"Name%22%3A%2211th%20Floor%20and%20Above%20-%20New%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A140%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%2211th%20Floor%20and%20Above%20-%20New%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Porch%2FDeck%2FGarage%20SQFT%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Porch%2FDeck%2FGarage%20SQFT%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A145%2C%22fie"
		"ldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Porch%2FDeck%2FGarage%20SQFT%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Total%20Aboveground%20SQFT%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%220%22%2C%22displayFieldName%22%3A%22Total%20Aboveground%20SQFT%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A150%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3F"
		"mode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Total%20Aboveground%20SQFT%22%2C%22checklistComment%22%3A%220%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Total%20Basement%20SQFT%22%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%220%22%2C%22displayFieldName%22%3A%22Total%20Basement%20SQFT%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A155%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBu"
		"ilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Total%20Basement%20SQFT%22%2C%22checklistComment%22%3A%220%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%5D%2C%22subgroupName%22%3A%22BUILDING%20DATA%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Type%20of%20Improvement%22%2C%22Estimated%20Project%20Cost%22%2C%22Alterations%2C%20Repairs%20and%20Additions%22%2C%22Buildings%20Regulated%20by%20the%20Michigan%20Residential%20Code%22%2C%22Will%20there%20be%20fire%20supression%3F%22%2C%22Construction%20Type%22%2C%22Housing%20Units%22%2C%22Public%20Owned%22%2C%22Basement%20-%20Existing%22%2C%22Basement%20-%20Alterations%22%2C%22Basement%20-%20New%22%2C%221st%20and%202nd%20Floor%20-%20Existing%22%2C%221st%20and%202nd%20Floor%20-%20Alterations%22%2C%221st%20and%202nd%20Floor%20-%20New%22%2C%223rd%20and%2010th%20Floor%20-%20Existing%22%2C%223rd%20and%2010th%20Floor"
		"%20-%20Alterations%22%2C%223rd%20and%2010th%20Floor%20-%20New%22%2C%2211th%20Floor%20and%20Above%20-%20Existing%22%2C%2211th%20Floor%20and%20Above%20-%20Alterations%22%2C%2211th%20Floor%20and%20Above%20-%20New%22%2C%22Porch%2FDeck%2FGarage%20SQFT%22%2C%22Total%20Aboveground%20SQFT%22%2C%22Total%20Basement%20SQFT%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22CONTRACTOR%20INFO%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Builders%20License%20Number%22%2C%22subgroupName%22%3A%22CONTRACTOR%20INFO%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Builders%20License%20Number%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3D"
		"Building%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Builders%20License%20Number%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Expiration%20Date%22%2C%22subgroupName%22%3A%22CONTRACTOR%20INFO%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Expiration%20Date%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%"
		"2C%22checkboxDesc%22%3A%22Expiration%20Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22FEIN%22%2C%22subgroupName%22%3A%22CONTRACTOR%20INFO%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22FEIN%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22FEIN%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Worke"
		"rs%20Comp%20Insurance%20Carrier%22%2C%22subgroupName%22%3A%22CONTRACTOR%20INFO%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Workers%20Comp%20Insurance%20Carrier%20(or%20reason%20for%20exemption)%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Workers%20Comp%20Insurance%20Carrier%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Unemployment%20Insurance%20Agency%20Employer%20Account%20Number%22%"
		"2C%22subgroupName%22%3A%22CONTRACTOR%20INFO%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22UIA%20Number%20(or%20reason%20for%20exemption)%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Unemployment%20Insurance%20Agency%20Employer%20Account%20Number%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%5D%2C%22subgroupName%22%3A%22CONTRACTOR%20INFO%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Builders%20License%2"
		"0Number%22%2C%22Expiration%20Date%22%2C%22FEIN%22%2C%22Workers%20Comp%20Insurance%20Carrier%20(or%20reason%20for%20exemption)%22%2C%22UIA%20Number%20(or%20reason%20for%20exemption)%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22PERMIT%20DATES%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Permit%20Expiration%20Date%22%2C%22subgroupName%22%3A%22PERMIT%20DATES%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Permit%20Expiration%20Date%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A2%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LA"
		"BEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Permit%20Expiration%20Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%5D%2C%22subgroupName%22%3A%22PERMIT%20DATES%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Permit%20Expiration%20Date%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22EQUIPMENT%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Rough%2FAdditional%20Inspection%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22%23%20of%20Items%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BP"
		"ermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Rough%2FAdditional%20Inspection%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Rough%2FAdditional%20Inspection%20Cost%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22100%22%2C%22displayFieldName%22%3A%22Fee%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDes"
		"c%22%3A%22Rough%2FAdditional%20Inspection%20Cost%22%2C%22checklistComment%22%3A%22100%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Rough%2FAdditional%20Inspection%20Fee%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%220%22%2C%22displayFieldName%22%3A%22Total%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A60%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Rough%2FAdditional%20Inspection%20Fee%22%2C%22checklistComment%22%3A%220%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%"
		"22%7D%2C%7B%22fieldName%22%3A%22Additional%20Inspection%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22%23%20of%20Items%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A70%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Additional%20Inspection%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Additional%20Inspection%20Cost%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22de"
		"faultValue%22%3A%22100%22%2C%22displayFieldName%22%3A%22Fee%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A80%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Additional%20Inspection%20Cost%22%2C%22checklistComment%22%3A%22100%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Additional%20Inspection%20Fee%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%220%22%2C%22displayFieldName%22%3A%22Total%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A90%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22tar"
		"get%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Additional%20Inspection%20Fee%22%2C%22checklistComment%22%3A%220%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Certification%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22%23%20of%20Items%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A100%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA"
		"%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Certification%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Certification%20Cost%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%2250%22%2C%22displayFieldName%22%3A%22Fee%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A110%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAM"
		"E_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Certification%20Cost%22%2C%22checklistComment%22%3A%2250%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Certification%20Fee%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%220%22%2C%22displayFieldName%22%3A%22Total%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A120%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Certification%20Fee%22%2C%22checklistComment%22%3A%220%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%2"
		"2%7D%2C%7B%22fieldName%22%3A%22Total%22%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Equipment%20Total%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A500%2C%22fieldTypeValue%22%3A8%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3D%22%7D%2C%22checkboxDesc%22%3A%22Total%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%228%22%2C%22fieldTypeEnum%22%3A%22Money%22%7D%5D%2C%22subgroupName%22%3A%22EQUIPMENT%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22%23%20of%20Items%22%2C%22Fee%22%2C%22Total%22%2C%22%23%20of%20Items%22%2C%22Fee%22%2C%22Total%22%2C%22%23%20of%20Items%22%2C%22Fee%22%2C%22Total%22%2C%22Equipment%20Total%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displa"
		"yName%22%3A%22PAYMENT%20METHOD%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Payment%20Method%22%2C%22subgroupName%22%3A%22PAYMENT%20METHOD%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22Credit%20Card%22%2C%22displayFieldName%22%3A%22Payment%20Method%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Payment%20Method%22%2C%22checklistComment%22%3A%22Credit%20Card%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Index%22%2C%22subgroupName%22%3A%22PAYMENT%20METH"
		"OD%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Index%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Index%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22PCA%22%2C%22subgroupName%22%3A%22PAYMENT%20METHOD%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22PCA%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22"
		"%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22PCA%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Object%20Code%22%2C%22subgroupName%22%3A%22PAYMENT%20METHOD%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Object%20Code%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceP"
		"roviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD%22%7D%2C%22checkboxDesc%22%3A%22Object%20Code%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%5D%2C%22subgroupName%22%3A%22PAYMENT%20METHOD%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Payment%20Method%22%2C%22Index%22%2C%22PCA%22%2C%22Object%20Code%22%5D%5D%2C%22rows%22%3Anull%7D%5D%2C%22templateType%22%3A%22Form%22%2C%22readOnly%22%3Atrue%7D%5D%2C%22templateTables%22%3A%5B%7B%22groupName%22%3A%22BLD_BUILD%22%2C%22subgroups%22%3A%5B%7B%22displayName%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22rows%22%3Anull%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Environmental%20Control%22%2C%22subgroupName%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22groupName%22%3A%22BLD_B"
		"UILD%22%2C%22displayFieldName%22%3A%22Environmental%20Control%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A5%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoTableForm.do%3Fmode%3Dlist%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26tableName%3DBLD_BUILD%3A%3AENVIRONMENTAL%2BCONTROL%2BAPPROVAL%22%2C%22target%22%3A%22_self%22%7D%2C%22checkboxDesc%22%3A%22Environmental%20Control%22%2C%22checkboxInd%22%3A%225%22%2C%22fieldTypeEnum%22%3A%22Dropdown%22%7D%2C%7B%22fieldName%22%3A%22Approved%22%2C%22subgroupName%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Approved%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Approved%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Date%2"
		"2%2C%22subgroupName%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Date%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A2%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Date%22%2C%22checkboxInd%22%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22Number%22%2C%22subgroupName%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Number%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A4%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Number%22%2C%22checkboxInd%22%3A%224%22%2C%22fieldTypeEnum%22%3A%22Number%22%7D%2C%7B%22fieldName%22%3A%22Environmental%20Assessment%20Done%20By%22%2C%22subgroupName%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Environmental%20Assessment%20Done%20By%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A50%2C%22f"
		"ieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Environmental%20Assessment%20Done%20By%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%5D%2C%22subgroupName%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22hasSelectCol%22%3Afalse%2C%22CSVData%22%3A%5B%5B%22Environmental%20Control%22%2C%22Approved%22%2C%22Date%22%2C%22Number%22%2C%22Environmental%20Assessment%20Done%20By%22%5D%5D%7D%2C%7B%22displayName%22%3A%22VIOLATIONS%22%2C%22rows%22%3Anull%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Code%20Section%22%2C%22subgroupName%22%3A%22VIOLATIONS%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Code%20Section%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoTableForm.do%3Fmode%3Dlist%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26ta"
		"bleName%3DBLD_BUILD%3A%3AVIOLATIONS%22%2C%22target%22%3A%22_self%22%7D%2C%22checkboxDesc%22%3A%22Code%20Section%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Article%20Title%22%2C%22subgroupName%22%3A%22VIOLATIONS%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Article%20Title%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Article%20Title%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Inpector%20Notes%22%2C%22subgroupName%22%3A%22VIOLATIONS%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Inpector%20Notes%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Inpector%20Notes%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Location%201%22%2C%22subgroupName%22%3A%22"
		"VIOLATIONS%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Location%201%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Location%201%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Location%202%22%2C%22subgroupName%22%3A%22VIOLATIONS%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Location%202%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Location%202%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Inspection%20Date%22%2C%22subgroupName%22%3A%22VIOLATIONS%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Inspection%20Date%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A60%2C%22fieldTypeValue%22%3A2%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Inspection%20Date%22%2C%22checkboxInd%2"
		"2%3A%222%22%2C%22fieldTypeEnum%22%3A%22Date%22%7D%2C%7B%22fieldName%22%3A%22Inspector%20Name%22%2C%22subgroupName%22%3A%22VIOLATIONS%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Inspector%20Name%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A70%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Inspector%20Name%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%5D%2C%22subgroupName%22%3A%22VIOLATIONS%22%2C%22hasSelectCol%22%3Afalse%2C%22CSVData%22%3A%5B%5B%22Code%20Section%22%2C%22Article%20Title%22%2C%22Inpector%20Notes%22%2C%22Location%201%22%2C%22Location%202%22%2C%22Inspection%20Date%22%2C%22Inspector%20Name%22%5D%5D%7D%2C%7B%22displayName%22%3A%22HISTORICAL%20DATA%22%2C%22rows%22%3Anull%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Field%20Name%22%2C%22subgroupName%22%3A%22HISTORICAL%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Field%20Name%22%2C%22displayLen%22%3A-1%2C%22displa"
		"yOrder%22%3A10%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoTableForm.do%3Fmode%3Dlist%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26tableName%3DBLD_BUILD%3A%3AHISTORICAL%2BDATA%22%2C%22target%22%3A%22_self%22%7D%2C%22checkboxDesc%22%3A%22Field%20Name%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%2C%7B%22fieldName%22%3A%22Field%20Data%22%2C%22subgroupName%22%3A%22HISTORICAL%20DATA%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Field%20Data%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22checkboxDesc%22%3A%22Field%20Data%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%5D%2C%22subgroupName%22%3A%22HISTORICAL%20DATA%22%2C%22hasSelectCol%22%3Afalse%2C%22CSVData%22%3A%5B%5B%22Field%20Name%22%2C%22Field%20Data%22%5D%5D%7D%2C%7B%22displayNa"
		"me%22%3A%22GENERAL%20INFORMATION%22%2C%22rows%22%3Anull%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Related%20Records%22%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22groupName%22%3A%22BLD_BUILD%22%2C%22displayFieldName%22%3A%22Related%20Records%22%2C%22displayLen%22%3A-1%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A1%2C%22readOnly%22%3Atrue%2C%22options%22%3A%7B%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoTableForm.do%3Fmode%3Dlist%26module%3DBuilding%26serviceProviderCode%3DLARA%26ID1%3D18EST%26ID2%3D00000%26ID3%3DZ0523%26fromTreeGrid%3DY%26tableName%3DBLD_BUILD%3A%3AGENERAL%2BINFORMATION%22%2C%22target%22%3A%22_self%22%7D%2C%22checkboxDesc%22%3A%22Related%20Records%22%2C%22checkboxInd%22%3A%221%22%2C%22fieldTypeEnum%22%3A%22Text%22%7D%5D%2C%22subgroupName%22%3A%22GENERAL%20INFORMATION%22%2C%22hasSelectCol%22%3Afalse%2C%22CSVData%22%3A%5B%5B%22Related%20Records%22%5D%5D%7D%5D%2C%22templateType%22%3A%22Table%22%2C%22readOnly%22%3Atrue%7D%5D%2C%22readOnly%22"
		"%3Atrue%2C%22UIUID%22%3A999%7D&layouttextarea999=%7B%22map%22%3A%7B%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%401st%20and%202nd%20Floor%20-%20New%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%221st%20and%202nd%20Floor%20-%20New%22%2C%22spanId%22%3A%2225_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Housing%20Units%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Housing%20Units%22%2C%22spanId%22%3A%2219_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%403rd%20and%2010th%20Floor%20-%20New%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%223rd%20and%2010th%20Floor%20-%20New%22%2C%22spanId%22%3A%2228_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Will%20there%20be%20fire%20supression%3F%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Will%20there%20be%20fire%20supression%3F%22%2C%22spanId%22%3A%2212_"
		"layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PAYMENT%20METHOD%23%40%23%40Object%20Code%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Object%20Code%22%2C%22spanId%22%3A%2240_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Total%20Aboveground%20SQFT%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Total%20Aboveground%20SQFT%22%2C%22spanId%22%3A%2232_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Rough%2FAdditional%20Inspection%20Fee%22%3A%7B%22displayLen%22%3A82%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Total%22%2C%22spanId%22%3A%2243_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PAYMENT%20METHOD%23%40%23%40Index%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Index%22%2C%22spanId%22%3A%2238_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Basement%20-%20Alterations%22%3A%7B%22displayLen%22%3A190%2C%22styleHeight%22%3A17%2C"
		"%22styleLabel%22%3A%22Basement%20-%20Alterations%22%2C%22spanId%22%3A%2221_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40CONTRACTOR%20INFO%23%40%23%40FEIN%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22FEIN%22%2C%22spanId%22%3A%228_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Additional%20Inspection%20Cost%22%3A%7B%22displayLen%22%3A58%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Fee%22%2C%22spanId%22%3A%2245_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%4011th%20Floor%20and%20Above%20-%20Existing%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%2211th%20Floor%20and%20Above%20-%20Existing%22%2C%22spanId%22%3A%2229_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Type%20of%20Improvement%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Type%20of%20Improvement%22%2C%22spanId%22%3A%2213_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%4"
		"0BUILDING%20DATA%23%40%23%40Basement%20-%20Existing%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Basement%20-%20Existing%22%2C%22spanId%22%3A%2220_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Estimated%20Project%20Cost%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Estimated%20Project%20Cost%22%2C%22spanId%22%3A%2214_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%4011th%20Floor%20and%20Above%20-%20New%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%2211th%20Floor%20and%20Above%20-%20New%22%2C%22spanId%22%3A%2231_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%403rd%20and%2010th%20Floor%20-%20Existing%22%3A%7B%22displayLen%22%3A166%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%223rd%20and%2010th%20Floor%20-%20Existing%22%2C%22spanId%22%3A%2226_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Constructi"
		"on%20Type%22%3A%7B%22displayLen%22%3A310%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Construction%20Type%22%2C%22spanId%22%3A%2218_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%401st%20and%202nd%20Floor%20-%20Alterations%22%3A%7B%22displayLen%22%3A190%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%221st%20and%202nd%20Floor%20-%20Alterations%22%2C%22spanId%22%3A%2224_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Additional%20Inspection%20Fee%22%3A%7B%22displayLen%22%3A82%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Total%22%2C%22spanId%22%3A%2246_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%4011th%20Floor%20and%20Above%20-%20Alterations%22%3A%7B%22displayLen%22%3A190%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%2211th%20Floor%20and%20Above%20-%20Alterations%22%2C%22spanId%22%3A%2230_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Public%20Owned%22%3A%7B%22displayLen%22%3A154%2C%22styleHeigh"
		"t%22%3A17%2C%22styleLabel%22%3A%22Public%20Owned%22%2C%22spanId%22%3A%2216_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Rough%2FAdditional%20Inspection%20Cost%22%3A%7B%22displayLen%22%3A58%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Fee%22%2C%22spanId%22%3A%2242_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Certification%20Fee%22%3A%7B%22displayLen%22%3A82%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Total%22%2C%22spanId%22%3A%2249_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PERMIT%20DATES%23%40%23%40Permit%20Expiration%20Date%22%3A%7B%22displayLen%22%3A153%2C%22styleHeight%22%3A18%2C%22styleLabel%22%3A%22Permit%20Expiration%20Date%22%2C%22spanId%22%3A%2236_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40CONTRACTOR%20INFO%23%40%23%40Expiration%20Date%22%3A%7B%22displayLen%22%3A153%2C%22styleHeight%22%3A18%2C%22styleLabel%22%3A%22Expiration%20Date%22%2C%22spanId%22%3A%2210_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23"
		"%40Buildings%20Regulated%20by%20the%20Michigan%20Residential%20Code%22%3A%7B%22displayLen%22%3A310%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Buildings%20Regulated%20by%20the%20Michigan%20Residential%20Code%22%2C%22spanId%22%3A%2215_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Porch%2FDeck%2FGarage%20SQFT%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Porch%2FDeck%2FGarage%20SQFT%22%2C%22spanId%22%3A%2234_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Certification%22%3A%7B%22displayLen%22%3A58%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22%23%20of%20Items%22%2C%22spanId%22%3A%2247_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%403rd%20and%2010th%20Floor%20-%20Alterations%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%223rd%20and%2010th%20Floor%20-%20Alterations%22%2C%22spanId%22%3A%2227_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PLAN%20REVIEW%20INFO"
		"RMATION%23%40%23%40School%20Site%20Plan%20Review%20Number%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22School%20Site%20Plan%20Review%20Number%22%2C%22spanId%22%3A%221_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Alterations%2C%20Repairs%20and%20Additions%22%3A%7B%22displayLen%22%3A382%2C%22styleHeight%22%3A68%2C%22styleLabel%22%3A%22Alterations%2C%20Repairs%20and%20Additions%22%2C%22spanId%22%3A%2235_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Certification%20Cost%22%3A%7B%22displayLen%22%3A58%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Fee%22%2C%22spanId%22%3A%2248_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Total%20Basement%20SQFT%22%3A%7B%22displayLen%22%3A190%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Total%20Basement%20SQFT%22%2C%22spanId%22%3A%2233_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%401st%20and%202nd%20Floor%20-%20Existing%22%3A%7"
		"B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%221st%20and%202nd%20Floor%20-%20Existing%22%2C%22spanId%22%3A%2223_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40GENERAL%20INFORMATION%23%40%23%40Are%20you%20applying%20as%20a%20homeowner%3F%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Are%20you%20applying%20as%20a%20homeowner%3F%22%2C%22spanId%22%3A%224_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PAYMENT%20METHOD%23%40%23%40PCA%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22PCA%22%2C%22spanId%22%3A%2239_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PAYMENT%20METHOD%23%40%23%40Payment%20Method%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Payment%20Method%22%2C%22spanId%22%3A%2237_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PLAN%20REVIEW%20INFORMATION%23%40%23%40Plan%20Review%20Name%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Plan%20Rev"
		"iew%20Name%22%2C%22spanId%22%3A%223_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PLAN%20REVIEW%20INFORMATION%23%40%23%40BCC%20Plan%20Review%20Number%22%3A%7B%22displayLen%22%3A190%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22BCC%20Plan%20Review%20Number%22%2C%22spanId%22%3A%222_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40CONTRACTOR%20INFO%23%40%23%40Workers%20Comp%20Insurance%20Carrier%22%3A%7B%22displayLen%22%3A190%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Workers%20Comp%20Insurance%20Carrier%20(or%20reason%20for%20exemption)%22%2C%22spanId%22%3A%226_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Rough%2FAdditional%20Inspection%22%3A%7B%22displayLen%22%3A58%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22%23%20of%20Items%22%2C%22spanId%22%3A%2241_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PLAN%20REVIEW%20INFORMATION%23%40%23%40Plan%20Requirements%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Plan%20Requirements%22%2C%22span"
		"Id%22%3A%220_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40BUILDING%20DATA%23%40%23%40Basement%20-%20New%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Basement%20-%20New%22%2C%22spanId%22%3A%2222_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40EQUIPMENT%23%40%23%40Additional%20Inspection%22%3A%7B%22displayLen%22%3A58%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22%23%20of%20Items%22%2C%22spanId%22%3A%2244_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40GENERAL%20INFORMATION%23%40%23%40Building%20Type%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Building%20Type%22%2C%22spanId%22%3A%2211_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40GENERAL%20INFORMATION%23%40%23%40Are%20you%20applying%20as%20a%20licensed%20professional%3F%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Are%20you%20applying%20as%20a%20licensed%20professional%3F%22%2C%22spanId%22%3A%225_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%4"
		"0CONTRACTOR%20INFO%23%40%23%40Builders%20License%20Number%22%3A%7B%22displayLen%22%3A190%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Builders%20License%20Number%22%2C%22spanId%22%3A%229_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40CONTRACTOR%20INFO%23%40%23%40Unemployment%20Insurance%20Agency%20Employer%20Account%20Number%22%3A%7B%22displayLen%22%3A346%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22UIA%20Number%20(or%20reason%20for%20exemption)%22%2C%22spanId%22%3A%227_layout_mark_span%22%7D%2C%22BLD_BUILD%23%40%23%40PLAN%20REVIEW%20INFORMATION%23%40%23%40Building%20Use%22%3A%7B%22displayLen%22%3A166%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Building%20Use%22%2C%22spanId%22%3A%2217_layout_mark_span%22%7D%7D%2C%22layouts%22%3A%5B%5D%2C%22layoutHtml%22%3A%22%3Ctable%3E%3Ctr%3E%3Ctd%20class%3D'portlet-form-field-label'%3E%3Cstrong%3EBuilding%20Permit%20General%20Information%3C%2Fstrong%3E%3C%2Ftd%3E%3C%2Ftr%3E%3C%2Ftable%3E%3Ctable%20id%3D%5C%22customTaskSpecInfoTable%5C%22%20name%3D%5C%22cus"
		"tomTaskSpecInfoTable%5C%22%20class%3D%5C%22AccelaMainTableVariant%5C%22%3E%3Ctr%3E%3CTH%3E%3Ctable%20cellSpacing%3D0%20cellPadding%3D0%3E%3Ctbody%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3"
		"Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%"
		"2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C"
		"td%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width"
		"%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ct"
		"d%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%"
		"3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20hei"
		"ght%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3"
		"D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heig"
		"ht%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2247%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CTABLE%20width%3D%5C%22100%25%5C%22%3E%3CTOBYD%3E%3CTR%3E%3CTD%3E%3CHR%20class%3D'common-hr-border'%3E%3C%2FTD%3E%3C%2FTR%3E%3C%2FTBODY%3E%3C%2FTABLE%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%"
		"3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2211%5C%22%20rowspan%3D%"
		"5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3A%3Bfont-family%3AArial%5C%22%3EPlan%20Review%20Information%3C%2FLABEL%3E%3CLABEL%20style%3D%5C%22color%3A%235d5d5d%5C%22%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%2"
		"0height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D"
		"12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20"
		"height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D1"
		"2%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20h"
		"eight%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'0_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%2"
		"0width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%"
		"3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E"
		"%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%"
		"3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E"
		"%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'1_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2216%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'2_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspa"
		"n%20id%3D'3_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height"
		"%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2247%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CTABLE%20width%3D%5C%22100%25%5C%22%3E%3CTOBYD%3E%3CTR%3E%3CTD%3E%3CHR%20class%3D'common-hr-border'%3E%3C%2FTD%3E%3C%2FTR%3E%3C%2FTBODY%3E%3C%2FTABLE%3E%3C%2Ftd%3E%3Ctd%20wid"
		"th%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3"
		"C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2211%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3A%3Bfont-family%3AArial%5C%22%3EConstruction%20Information%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20w"
		"idth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%"
		"20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wi"
		"dth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%2"
		"0height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'4_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'5_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2F"
		"td%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2"
		"Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%"
		"3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20hei"
		"ght%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3"
		"E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%"
		"3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2216%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'6_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2229%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'7_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%"
		"20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3"
		"C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%"
		"3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'8_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%"
		"3E%3Ctd%20colspan%3D%5C%2216%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'9_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%224%5C%22%3E%3Cspan%20id%3D'10_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12"
		"%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%"
		"3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E"
		"%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2247%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CTABLE%20width%3D%5C%22100%2"
		"5%5C%22%3E%3CTOBYD%3E%3CTR%3E%3CTD%3E%3CHR%20class%3D'common-hr-border'%3E%3C%2FTD%3E%3C%2FTR%3E%3C%2FTBODY%3E%3C%2FTABLE%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2"
		"Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%229%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3A%3Bfont-family%3AArial%5C%22%3EBuilding%20Information%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%"
		"20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D"
		"12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%2"
		"0width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D1"
		"2%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'11_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan"
		"%20id%3D'12_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E"
		"%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3"
		"C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%"
		"3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3"
		"D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%"
		"2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C"
		"td%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'13_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'14_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2226%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'15_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%"
		"3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E"
		"%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'16_la"
		"yout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'17_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2226%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'18_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%"
		"2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2F"
		"td%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd"
		"%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'19_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wi"
		"dth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%2"
		"0height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wid"
		"th%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20"
		"height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20widt"
		"h%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20h"
		"eight%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width"
		"%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20he"
		"ight%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%"
		"3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'20_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2216%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'21_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'22_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%2"
		"0height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3"
		"D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%"
		"2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C"
		"td%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'23_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2216%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'24_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'25_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%"
		"3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20"
		"width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20w"
		"idth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%"
		"20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'26_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'27_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'28_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%"
		"20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20hei"
		"ght%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3"
		"D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heig"
		"ht%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E"
		"%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'29_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2216%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'30_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'31_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20h"
		"eight%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3"
		"Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D1"
		"2%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2F"
		"td%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd"
		"%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'32_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2216%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'33_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'34_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wi"
		"dth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%"
		"3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wid"
		"th%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20"
		"height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2232%5C%22%20rowspan%3D%5C%227%5C%22%3E%3Cspan%20id%3D'35_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heigh"
		"t%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D1"
		"2%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20"
		"width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20w"
		"idth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E"
		"%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3"
		"C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%"
		"3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2248%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CTABLE%20width%3D%5C%22100%25%5C%22%3E%3CTOBYD%3E%3CTR%3E%3CTD%3E%3CHR%20class%3D'common-hr-border'%3E%3C%2FTD%3E%3C%2FTR%3E%3C%2FTBODY%3E%3C%2FTABLE%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D1"
		"2%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2210%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3A%3Bfont-f"
		"amily%3AArial%5C%22%3EPermit%20Expiration%20Date%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3"
		"D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%"
		"2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D"
		"12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2"
		"Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%224%5C%22%3E%3Cspan%20id%3D'36_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20w"
		"idth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E"
		"%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wi"
		"dth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%"
		"3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wid"
		"th%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3"
		"Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20widt"
		"h%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2225%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CTABLE%20width%3D%5C%22100%25%5C%22%3E%3CTOBYD%3E%3CTR%3E%3CTD%3E%3CHR%20class%3D'common-hr-border'%3E%3C%2FTD%3E%3C%2FTR%3E%3C%2FTBODY%3E%3C%2FTABLE%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3"
		"D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heig"
		"ht%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D"
		"12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'37_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'38_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E"
		"%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%"
		"3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height"
		"%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3"
		"C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%"
		"3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'39_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd"
		"%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'40_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20"
		"height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20widt"
		"h%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20h"
		"eight%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width"
		"%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2248%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CTABLE%20width%3D%5C%22100%25%5C%22%3E%3CTOBYD%3E%3CTR%3E%3CTD%3E%3CHR%20class%3D'common-hr-border'%3E%3C%2FTD%3E%3C%2FTR%3E%3C%2FTBODY%3E%3C%2FTABLE%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D"
		"12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%225%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3Argb(102%2C%20102%2C%20102)%3Bfont-family%3AArial%5C%22%3EEquipment%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%"
		"20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D"
		"12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%2"
		"0width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D1"
		"2%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20"
		"width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12"
		"%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%"
		"3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%"
		"20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3"
		"D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%2"
		"0height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D"
		"12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2"
		"Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D1"
		"2%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%225%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'41_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%225%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'42_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%227%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'43_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2"
		"Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%228%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3Argb(51%2C%2051%2C%2051)%3Bfont-family%"
		"3AArial%5C%22%3ERough%20Inspection%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd"
		"%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3"
		"E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%"
		"3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E"
		"%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%"
		"3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%225%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'44_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%225%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'45_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%227%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'46_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfi"
		"eldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3Argb(51%2C%2051%2C%2051)%3Bfont-family%3AArial%5C%22%3EAdditional%20Inspection%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%"
		"3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20hei"
		"ght%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3"
		"E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%"
		"3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%225%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'47_la"
		"yout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%225%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'48_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%227%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'49_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%"
		"3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%228%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3Argb(51%2C%2051%2C%2051)%3Bfont-family%3AArial%5C%22%3ECertification%20Fee%3C%2FLABEL%3E%3CLABEL%20style%3D%5C%22color%3A%235d5d5d%5C%22%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D1"
		"2%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2F"
		"td%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12"
		"%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3C%2Ftbody%3E%3C%2Ftable%3E%3C%2FTH%3E%3C%2Ftr%3E%3C%2Ftable%3E%3C%2FLABEL%3E%22%7D&uiuid=999&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber="
		"undefined&argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22VIOLATIONS%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22HISTORICAL%20DATA%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22GENERAL%20INFORMATION%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=TABSUMMARY&mode=execute" ;


# 8 "globals.h" 2


 
 


# 3 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\lara\\lara_tc3\\\\combined_LARA_TC3.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\lara\\lara_tc3\\\\combined_LARA_TC3.c" 2

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

	lr_think_time(6);
    web_add_header("AppD_Header", "LARA_Login");
	lr_start_transaction("LARA_Login");

	web_custom_request("loginAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?requestType=checkWebSSOAdapter&servProvCode=lara", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		"LAST");

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
		"Name=servProvCode", "Value=lara", "ENDITEM",
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
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("text.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t7.inf", 
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
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={}", 
		"LAST");

	web_url("session.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_Login",2);

	lr_think_time(6);
    web_add_header("AppD_Header", "LARA_TC3_01_ClickRecords");
    lr_start_transaction("LARA_TC3_01_ClickRecords");

	web_url("session.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(4);

	web_url("session.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t13.inf", 
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

	lr_end_transaction("LARA_TC3_01_ClickRecords",2);
    web_add_header("AppD_Header", "LARA_TC3_02_Records_ClickNew");
	lr_start_transaction("LARA_TC3_02_Records_ClickNew");

	web_url("session.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b1&module=Building", 
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

	lr_end_transaction("LARA_TC3_02_Records_ClickNew",2);

	web_url("session.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(6);
    web_add_header("AppD_Header", "LARA_TC3_03_SelectRecordType_OpenSpearForm");
	lr_start_transaction("LARA_TC3_03_SelectRecordType_OpenSpearForm");

	web_url("session.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("capTypePicker.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=validateCapType&modelId=&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fpicker%2FcapTypePicker.do%3FfromModel%3Dcap%26module%3DBuilding%26isGeneralCAP%3DY&value(CurrentEntryURL)=%2Fportlets%2Fpicker%2FcapTypePicker.do%3FfromModel%3Dcap%26module%3DBuilding%26isGeneralCAP%3DY&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=119&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=119&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(capTypeModel*type)=Building&value(capTypeModel*subType)=NA&value(capTypeModel*category)=NA&value(selectModuleName)=Building&value(g1AssetGroup)=&value(g1AssetType)=&value(mode)=add&value(srLevel)=&value(capGroupIndex)=&value(capTypeModel*group)=Building&value(capTypeModel)=Building%2FBuilding%2FNA%2FNA&value(fromModel)=cap&value(modelId)=&value(formKey)=&value(GISCommand)=&", 
		"LAST");

	web_submit_data("capTypePicker.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t22.inf", 
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
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM", 
		"Name=listID", "Value=", "ENDITEM", 
		"Name=printType", "Value=", "ENDITEM", 
		"Name=checkBoxValue", "Value=", "ENDITEM", 
		"Name=value(capTypeModel*type)", "Value=Building", "ENDITEM", 
		"Name=value(capTypeModel*subType)", "Value=NA", "ENDITEM", 
		"Name=value(capTypeModel*category)", "Value=NA", "ENDITEM", 
		"Name=value(selectModuleName)", "Value=Building", "ENDITEM", 
		"Name=value(g1AssetGroup)", "Value=", "ENDITEM", 
		"Name=value(g1AssetType)", "Value=", "ENDITEM", 
		"Name=value(mode)", "Value=add", "ENDITEM", 
		"Name=value(srLevel)", "Value=", "ENDITEM", 
		"Name=value(capGroupIndex)", "Value=", "ENDITEM", 
		"Name=value(capTypeModel*group)", "Value=Building", "ENDITEM", 
		"Name=value(capTypeModel)", "Value=Building/Building/NA/NA", "ENDITEM", 
		"Name=value(fromModel)", "Value=cap", "ENDITEM", 
		"Name=value(modelId)", "Value=", "ENDITEM", 
		"Name=value(formKey)", "Value=", "ENDITEM", 
		"Name=value(GISCommand)", "Value=", "ENDITEM", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=MI&stateProperty=value(addressesModel*state)&aaZoneId=aazone-country-state&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.8514968217350543&aazones=aazone-country-state&width=70px", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"Body=aazone-country-state", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=MI&stateProperty=value(mailState)&aaZoneId=aazone-country-mailstate&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.21357765304856002&aazones=aazone-country-mailstate&width=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"Body=aazone-country-mailstate", 
		"LAST");

	web_submit_data("ajax.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=MI&stateProperty=value(contactsModel*state)&aaZoneId=aazone-country-state-contact&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.9348787281196564&aazones=aazone-country-state-contact&width=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"Body=aazone-country-state-contact", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(contactsModel*birthState)&aaZoneId=aazone-birth-state-contact&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.06856250273995101&aazones=aazone-birth-state-contact&width=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"Body=aazone-birth-state-contact", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(contactsModel*driverLicenseState)&aaZoneId=aazone-country-driverLicenseState&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.03934472473338246&aazones=aazone-country-driverLicenseState&width=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"Body=aazone-country-driverLicenseState", 
		"LAST");

	web_url("blank.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("blank.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("blank.jsp_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=MI&stateProperty=value(applicant*state)&aaZoneId=aazone-country-state-applicant&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.7665442822035402&aazones=aazone-country-state-applicant&width=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"Body=aazone-country-state-applicant", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(applicant*driverLicenseState)&aaZoneId=aazone-applicant-driver-license-state&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.014167050831019878&aazones=aazone-applicant-driver-license-state&width=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"Body=aazone-applicant-driver-license-state", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(applicant*birthState)&aaZoneId=aazone-applicant-birth-state-contact&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.9622700859326869&aazones=aazone-applicant-birth-state-contact&width=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"Body=aazone-applicant-birth-state-contact", 
		"LAST");

	web_url("blank.jsp_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("blank.jsp_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("blank.jsp_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("blank.jsp_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("blank.jsp_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("blank.jsp_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("getXRefContactAddressListBySingleApplicant.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getXRefContactAddressListBySingleApplicant.do?mode=list&type=applicant&currentContactType=&module=Building&showReadOnlyContactAddress=N&fromViewSummary=null", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("getXRefContactAddressListBySingleContact1.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getXRefContactAddressListBySingleContact1.do?mode=list&type=contact1&currentContactType=&module=Building&showReadOnlyContactAddress=N&fromViewSummary=null", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("search.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		"LAST");

	web_submit_data("appSpecInfoForm.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=buildDrillList&module=Building&guideSheetSeq=&singleMode=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("expression.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"Body=argumentPKs="
		"%5B%7B%22portletID%22%3A112%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A117%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A118%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22ENVIRONMENTAL%20CONTRO"
		"L%20APPROVAL%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22VIOLATIONS%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22HISTORICAL%20DATA%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22GENERAL%20INFORMATION%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A121%2C%22viewKey1%22%3A%22Applicant%22%"
		"2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A125%2C%22viewKey1%22%3A%22Homeowner%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&isReload=false&module=Building&capType=Building%2FBuilding%2FNA%2FNA", 
		"LAST");

	web_custom_request("expression.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Building&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&expression_portlet_to_be_populate=112&expression_portlet_to_be_populate=-99999&"
		"expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&value(srTest)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&date(capModel*fileDate)=08%2F28%2F2018&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)"
		"=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value"
		"(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value"
		"(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value"
		"(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&"
		"generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=117&expression_portlet_to_be_populate=-99999&expression_portlet_to_be_populate=-35&"
		"validateFlagOriginalValue=&value(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberStart)=&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value"
		"(addressesModel*unitType)=&value(addressesModel*unitEnd)=&value(addressesModel*countryCode)=&value(addressesModel*sourceFlag)=&value(addressesModel*addressTypeFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*addressStatus)=&value(addressesModel*addressDescription)=&value"
		"(addressesModel*fullAddress)=&value(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*streetDirection)=&value(addressesModel*streetName)=&value(addressesModel*streetSuffix)=&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitStart)=&value(addressesModel*validateFlag)=&value(addressesModel*city)=&value(addressesModel*state)=MI&value(addressesModel*zip_disp)=&value(addressesModel*zip)=&value(addressesModel*primaryFlag)=Y&value(addressesModel*county)=&value"
		"(addressesModel*neighborhood)=&value(addressesModel*addressLine1)=&value(addressesModel*XCoordinator)=&value(addressesModel*YCoordinator)=&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=&value(l1addressnbr)=&value(l1addressnbr1)=&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=&isAddress=1&isAddressValidation=N&isAddressRequired=N&isShowOwner=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print"
		"&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(mode)=New&value"
		"(ownerFullName)=&value(mailAddress1)=&value(mailAddress2)=&value(mailAddress3)=&value(mailCity)=&value(mailState)=MI&value(mailZip)=&value(mailCountry)=&value(phone)=&value(templateData)=&value(fax)=&value(email)=&value(primaryOwner)=Y&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=N&"
		"isOwnerRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=118&expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(contact*refContactNumber)=&value(contactsModel*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel*accessLevel)=N&value(contactsModel*contactType)="
		"Homeowner&value(contactsModel*relation)=&value(contactsModel*title)=&value(contactsModel*fullName)=&value(contactsModel*addressId)=&value(contactsModel*addressLine1)=&value(contactsModel*addressLine2)=&value(contactsModel*addressLine3)=&value(contactsModel*city)=&value(contactsModel*state)=MI&value(contactsModel*zip)=&value(contactsModel*countryCode)=&value(contactsModel*phone3)=&value(contactsModel*fax)=&value(contactsModel*contactOnSRChange)=&value(contactsModel*comment)=&value"
		"(maskformat_contactsModel*maskedSsn)=AAA-AA-AAAA&value(contactsModel*maskedSsn)=&value(maskformat_contactsModel*fein)=&value(contactsModel*fein)=&value(contactsModel*tradeName)=&value(contactsModel*userID)=&value(contactsModel*internalUserFlag)=&value(contactsModel*salutation)=&value(contactsModel*gender)=&value(contactsModel*postOfficeBox)=&date(contactsModel*birthDate)=&value(contactsModel*namesuffix)=&value(contactsModel*businessName2)=&value(contactsModel*birthCity)=&value"
		"(contactsModel*birthState)=&value(contactsModel*birthRegion)=&value(contactsModel*race)=&date(contactsModel*deceasedDate)=&value(contactsModel*passportNumber)=&value(contactsModel*driverLicenseNbr)=&value(contactsModel*driverLicenseState)=&value(contactsModel*stateIDNbr)=&value(contactsModel*flag)=N&value(contactsModel*lastName)=&value(contactsModel*firstName)=&value(contactsModel*middleName)=&ACMask_118_9_value(contactsModel*phone1_disp)=&ACMask_118_9_value(contactsModel*phone1)=&value"
		"(contactsModel*businessName)=&ACMask_118_10_value(contactsModel*phone2_disp)=&ACMask_118_10_value(contactsModel*phone2)=&value(contactsModel*email)=&value(contactsModel*preferredChannel)=&value(templateGroup)=CAP&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea0=&sourcetextarea0=&layouttextarea0=null&contactsModel*uiuid=0&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&"
		"sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isContact=1&contact1ViewID=118&isContact1Validation=N&isContact1Required=N&contact1AccessRight=F&contact1ContactNumber=null&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=121&expression_portlet_to_be_populate="
		"-99999&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*flag)=N&value(applicant*relation)=&value(applicant*title)=&value(applicant*fullName)=&value(applicant*addressId)=&value(applicant*addressLine1)=&value(applicant*addressLine2)=&value(applicant*addressLine3)=&value(applicant*city)=&value(applicant*state)=MI&value(applicant*zip)"
		"=&value(applicant*countryCode)=&value(applicant*confirmEmail)=&value(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(maskformat_applicant*maskedSsn)=AAA-AA-AAAA&value(applicant*maskedSsn)=&value(maskformat_applicant*fein)=&value(applicant*fein)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(templateData)=&value(applicant*salutation)=&value(applicant*gender)=&value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix"
		")=&value(applicant*businessName2)=&value(applicant*birthCity)=&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone1_disp)=&value(applicant*phone1)=&value(applicant*businessName)=&value"
		"(applicant*phone2_disp)=&value(applicant*phone2)=&value(applicant*email)=&displasy*applicant*email=Y&value(applicant*phone3_disp)=&value(applicant*phone3)=&value(applicant*tradeName)=&value(applicant*preferredChannel)=&valuetextarea1=&sourcetextarea1=%7B%22UIUID%22%3A1%7D&layouttextarea1=null&applicant*uiuid=1&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&"
		"endDate=&chooseItems=&effectiveDate=&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=N&applicantAccessRight=F&applicantContactNumber=null&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=Building%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Requirements=&"
		"app_spec_info_PLAN_REVIEW_INFORMATION_School_Site_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_BCC_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_homeowner%253F_Value=Y&app_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_licensed_professional%253F_Value=Y&app_spec_info_CONTRACTOR_INFO_Workers_Comp_Insurance_Carrier=&"
		"app_spec_info_CONTRACTOR_INFO_Unemployment_Insurance_Agency_Employer_Account_Number=&app_spec_info_CONTRACTOR_INFO_FEIN=&app_spec_info_CONTRACTOR_INFO_Builders_License_Number=&app_spec_info_CONTRACTOR_INFO_Expiration_Date=&app_spec_info_GENERAL_INFORMATION_Building_Type=&app_spec_info_BUILDING_DATA_Type_of_Improvement=&app_spec_info_BUILDING_DATA_Estimated_Project_Cost=&app_spec_info_BUILDING_DATA_Buildings_Regulated_by_the_Michigan_Residential_Code=&"
		"app_spec_info_PLAN_REVIEW_INFORMATION_Building_Use=&app_spec_info_BUILDING_DATA_Construction_Type=&app_spec_info_BUILDING_DATA_Housing_Units=&app_spec_info_BUILDING_DATA_Basement___Existing=&app_spec_info_BUILDING_DATA_Basement___Alterations=&app_spec_info_BUILDING_DATA_Basement___New=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Existing=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Alterations=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___New=&"
		"app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Existing=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Alterations=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___New=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Existing=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Alterations=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___New=&app_spec_info_BUILDING_DATA_Total_Aboveground_SQFT=&app_spec_info_BUILDING_DATA_Total_Basement_SQFT=&"
		"app_spec_info_BUILDING_DATA_Porch%252FDeck%252FGarage_SQFT=&app_spec_info_BUILDING_DATA_Alterations%252C_Repairs_and_Additions=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PAYMENT_METHOD_Payment_Method=Credit%20Card&app_spec_info_PAYMENT_METHOD_Index=&app_spec_info_PAYMENT_METHOD_PCA=&app_spec_info_PAYMENT_METHOD_Object_Code=&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection=&"
		"app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection_Cost=100&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection_Fee=&app_spec_info_EQUIPMENT_Additional_Inspection=&app_spec_info_EQUIPMENT_Additional_Inspection_Cost=100&app_spec_info_EQUIPMENT_Additional_Inspection_Fee=&app_spec_info_EQUIPMENT_Certification=&app_spec_info_EQUIPMENT_Certification_Cost=50&app_spec_info_EQUIPMENT_Certification_Fee=&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&"
		"is_ASI_fields_displayed=true&isAppSpecInfoTable=1&expression_portlet_to_be_populate=-2&expression_portlet_to_be_populate=-99999&value(appSpecTable*tableName)=&tableName=ENVIRONMENTAL%20CONTROL%20APPROVAL&tableName=VIOLATIONS&tableName=HISTORICAL%20DATA&tableName=GENERAL%20INFORMATION&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&"
		"generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&"
		"chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError="
		"No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL="
		"%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DBuilding%252FBuilding%252FNA%252FNA%26module%3DBuilding&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea2=&sourcetextarea2=&layouttextarea2=&docTemplateUIUID=2&value(docGroup)=&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)=NONE&"
		"documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate"
		"=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory="
		"&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&"
		"hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20026%2C118%2C121&viewGroup=%2C225&formGroup=%2CcapDetailForm%2CaddressForm%2CownerForm%2CcontactDetailForm%2CapplicantDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value"
		"(contactValidatePassed)=true&value(createCapForParcelType)=&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*maskedSsn)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%7D%7D&value(refContactNumber)=&expression-columnCount-distinct=0&expression-rowCount-distinct=NaN&expression-columnCount-del=0&expression-rowCount-del=NaN&expression-columnCount-remove=0&expression-rowCount-remove=NaN&expression-columnCount-GENERAL%2BINFORMATION=1&"
		"expression-rowCount-GENERAL%2BINFORMATION=0&expression-columnCount-HISTORICAL%2BDATA=2&expression-rowCount-HISTORICAL%2BDATA=0&expression-columnCount-VIOLATIONS=7&expression-rowCount-VIOLATIONS=0&expression-columnCount-ENVIRONMENTAL%2BCONTROL%2BAPPROVAL=5&expression-rowCount-ENVIRONMENTAL%2BCONTROL%2BAPPROVAL=0&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber=undefined&argumentPKs="
		"%5B%7B%22portletID%22%3A112%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A117%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A118%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22ENVIRONMENTAL%20CONTRO"
		"L%20APPROVAL%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22VIOLATIONS%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22HISTORICAL%20DATA%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22GENERAL%20INFORMATION%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A121%2C%22viewKey1%22%3A%22Applicant%22%"
		"2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A125%2C%22viewKey1%22%3A%22Homeowner%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute", 
		"LAST");

	web_submit_data("empty.jsp_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("ajax.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("ajax.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getBizDomainByName&domainName=DATE_THRESHOLD", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_TC3_03_SelectRecordType_OpenSpearForm",2);

	lr_think_time(14);
    web_add_header("AppD_Header", "LARA_TC3_04_Address_Clear");
	lr_start_transaction("LARA_TC3_04_Address_Clear");

	web_url("session.do_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("refAddressListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingle.do?mode=clearAddress&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&expression_portlet_to_be_populate=112&"
		"expression_portlet_to_be_populate=-99999&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&value(mode)=add&value(srTest)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&date(capModel*fileDate)=08%2F28%2F2018&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date"
		"(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&"
		"value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value"
		"(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&"
		"value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&"
		"listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=117&expression_portlet_to_be_populate=-99999&"
		"expression_portlet_to_be_populate=-35&validateFlagOriginalValue=&value(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberStart)=&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&"
		"value(addressesModel*streetPrefix)=&value(addressesModel*unitType)=&value(addressesModel*unitEnd)=&value(addressesModel*countryCode)=&value(addressesModel*sourceFlag)=&value(addressesModel*addressTypeFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*addressStatus)=&value"
		"(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*streetDirection)=&value(addressesModel*streetName)=&value(addressesModel*streetSuffix)=&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitStart)=&value(addressesModel*validateFlag)=&value(addressesModel*city)=&value(addressesModel*state)=MI&value(addressesModel*zip_disp)=&value(addressesModel*zip)=&value(addressesModel*primaryFlag"
		")=Y&value(addressesModel*county)=&value(addressesModel*neighborhood)=&value(addressesModel*addressLine1)=&value(addressesModel*XCoordinator)=&value(addressesModel*YCoordinator)=&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=&value(l1addressnbr)=&value(l1addressnbr1)=&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=&isAddress=1&isAddressValidation=N&isAddressRequired=N&isShowOwner=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&"
		"CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType"
		"=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(mailAddress1)=&value(mailAddress2)=&value(mailAddress3)=&value(mailCity)=&value(mailState)=MI&value(mailZip)=&value(mailCountry)=&value(phone)=&value(templateData)=&value(fax)=&value(email)=&value(primaryOwner)=Y&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&"
		"ownerViewID=20026&isOwnerValidation=N&isOwnerRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=118&expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(contact*refContactNumber)=&value(contactsModel*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel*accessLevel)=N"
		"&value(contactsModel*contactType)=Homeowner&value(contactsModel*relation)=&value(contactsModel*title)=&value(contactsModel*fullName)=&value(contactsModel*addressId)=&value(contactsModel*addressLine1)=&value(contactsModel*addressLine2)=&value(contactsModel*addressLine3)=&value(contactsModel*city)=&value(contactsModel*state)=MI&value(contactsModel*zip)=&value(contactsModel*countryCode)=&value(contactsModel*phone3)=&value(contactsModel*fax)=&value(contactsModel*contactOnSRChange)=&value"
		"(contactsModel*comment)=&value(maskformat_contactsModel*maskedSsn)=AAA-AA-AAAA&value(contactsModel*maskedSsn)=&value(maskformat_contactsModel*fein)=&value(contactsModel*fein)=&value(contactsModel*tradeName)=&value(contactsModel*userID)=&value(contactsModel*internalUserFlag)=&value(contactsModel*salutation)=&value(contactsModel*gender)=&value(contactsModel*postOfficeBox)=&date(contactsModel*birthDate)=&value(contactsModel*namesuffix)=&value(contactsModel*businessName2)=&value"
		"(contactsModel*birthCity)=&value(contactsModel*birthState)=&value(contactsModel*birthRegion)=&value(contactsModel*race)=&date(contactsModel*deceasedDate)=&value(contactsModel*passportNumber)=&value(contactsModel*driverLicenseNbr)=&value(contactsModel*driverLicenseState)=&value(contactsModel*stateIDNbr)=&value(contactsModel*flag)=N&value(contactsModel*lastName)=&value(contactsModel*firstName)=&value(contactsModel*middleName)=&ACMask_118_9_value(contactsModel*phone1_disp)=&ACMask_118_9_value"
		"(contactsModel*phone1)=&value(contactsModel*businessName)=&ACMask_118_10_value(contactsModel*phone2_disp)=&ACMask_118_10_value(contactsModel*phone2)=&value(contactsModel*email)=&value(contactsModel*preferredChannel)=&value(templateGroup)=CAP&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea0=&sourcetextarea0=&layouttextarea0=null&contactsModel*uiuid=0&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType="
		"print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isContact=1&contact1ViewID=118&isContact1Validation=N&isContact1Required=N&contact1AccessRight=F&contact1ContactNumber=null&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=121&"
		"expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*flag)=N&value(applicant*relation)=&value(applicant*title)=&value(applicant*fullName)=&value(applicant*addressId)=&value(applicant*addressLine1)=&value(applicant*addressLine2)=&value(applicant*addressLine3)=&value(applicant*city)=&value"
		"(applicant*state)=MI&value(applicant*zip)=&value(applicant*countryCode)=&value(applicant*confirmEmail)=&value(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(maskformat_applicant*maskedSsn)=AAA-AA-AAAA&value(applicant*maskedSsn)=&value(maskformat_applicant*fein)=&value(applicant*fein)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(templateData)=&value(applicant*salutation)=&value(applicant*gender)=&value(applicant*postOfficeBox)=&date"
		"(applicant*birthDate)=&value(applicant*namesuffix)=&value(applicant*businessName2)=&value(applicant*birthCity)=&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone1_disp)=&value(applicant*phone1)=&value"
		"(applicant*businessName)=&value(applicant*phone2_disp)=&value(applicant*phone2)=&value(applicant*email)=&displasy*applicant*email=Y&value(applicant*phone3_disp)=&value(applicant*phone3)=&value(applicant*tradeName)=&value(applicant*preferredChannel)=&valuetextarea1=&sourcetextarea1=%7B%22UIUID%22%3A1%7D&layouttextarea1=null&applicant*uiuid=1&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&"
		"listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=N&applicantAccessRight=F&applicantContactNumber=null&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=Building%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Requirements=&"
		"app_spec_info_PLAN_REVIEW_INFORMATION_School_Site_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_BCC_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_homeowner%253F_Value=Y&app_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_licensed_professional%253F_Value=Y&app_spec_info_CONTRACTOR_INFO_Workers_Comp_Insurance_Carrier=&"
		"app_spec_info_CONTRACTOR_INFO_Unemployment_Insurance_Agency_Employer_Account_Number=&app_spec_info_CONTRACTOR_INFO_FEIN=&app_spec_info_CONTRACTOR_INFO_Builders_License_Number=&app_spec_info_CONTRACTOR_INFO_Expiration_Date=&app_spec_info_GENERAL_INFORMATION_Building_Type=&app_spec_info_BUILDING_DATA_Type_of_Improvement=&app_spec_info_BUILDING_DATA_Estimated_Project_Cost=&app_spec_info_BUILDING_DATA_Buildings_Regulated_by_the_Michigan_Residential_Code=&"
		"app_spec_info_PLAN_REVIEW_INFORMATION_Building_Use=&app_spec_info_BUILDING_DATA_Construction_Type=&app_spec_info_BUILDING_DATA_Housing_Units=&app_spec_info_BUILDING_DATA_Basement___Existing=&app_spec_info_BUILDING_DATA_Basement___Alterations=&app_spec_info_BUILDING_DATA_Basement___New=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Existing=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Alterations=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___New=&"
		"app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Existing=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Alterations=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___New=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Existing=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Alterations=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___New=&app_spec_info_BUILDING_DATA_Total_Aboveground_SQFT=0&app_spec_info_BUILDING_DATA_Total_Basement_SQFT=0&"
		"app_spec_info_BUILDING_DATA_Porch%252FDeck%252FGarage_SQFT=&app_spec_info_BUILDING_DATA_Alterations%252C_Repairs_and_Additions=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PAYMENT_METHOD_Payment_Method=Credit%20Card&app_spec_info_PAYMENT_METHOD_Index=&app_spec_info_PAYMENT_METHOD_PCA=&app_spec_info_PAYMENT_METHOD_Object_Code=&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection=&"
		"app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection_Cost=100&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection_Fee=0&app_spec_info_EQUIPMENT_Additional_Inspection=&app_spec_info_EQUIPMENT_Additional_Inspection_Cost=100&app_spec_info_EQUIPMENT_Additional_Inspection_Fee=0&app_spec_info_EQUIPMENT_Certification=&app_spec_info_EQUIPMENT_Certification_Cost=50&app_spec_info_EQUIPMENT_Certification_Fee=0&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate="
		"-99999&is_ASI_fields_displayed=true&isAppSpecInfoTable=1&expression_portlet_to_be_populate=-2&expression_portlet_to_be_populate=-99999&value(appSpecTable*tableName)=&tableName=ENVIRONMENTAL%20CONTROL%20APPROVAL&tableName=VIOLATIONS&tableName=HISTORICAL%20DATA&tableName=GENERAL%20INFORMATION&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&"
		"generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&mode=upload&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&"
		"docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError="
		"No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL="
		"%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DBuilding%252FBuilding%252FNA%252FNA%26module%3DBuilding&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea2=&sourcetextarea2=&layouttextarea2=&docTemplateUIUID=2&value(docGroup)=&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)=NONE&"
		"documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate"
		"=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory="
		"&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&"
		"hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20026%2C118%2C121&viewGroup=%2C225&formGroup=%2CcapDetailForm%2CaddressForm%2CownerForm%2CcontactDetailForm%2CapplicantDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value"
		"(contactValidatePassed)=true&value(createCapForParcelType)=&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*maskedSsn)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%7D%7D&", 
		"LAST");

	lr_end_transaction("LARA_TC3_04_Address_Clear",2);

	lr_think_time(8);
    web_add_header("AppD_Header", "LARA_TC3_05_Address_Search");
	lr_start_transaction("LARA_TC3_05_Address_Search");

	web_url("session.do_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"LAST");

 
	web_reg_save_param_ex(
		"ParamName=CorrelationParameter",
		"LB=Model*unitEnd)\":\"\",\"value(addressesModel*city)\":\"LANSING\",\"value(addressesModel*state)\":\"MI\",\"value(addressesModel*zip_disp)\":\"",
		"RB=\",",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_custom_request("refAddressListBySingle.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingle.do?mode=directSearch&from=SPEAR&listBySingle=true&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&expression_portlet_to_be_populate=112&"
		"expression_portlet_to_be_populate=-99999&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&value(mode)=add&value(srTest)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&date(capModel*fileDate)=08%2F28%2F2018&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date"
		"(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&"
		"value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value"
		"(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&"
		"value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&"
		"listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=117&expression_portlet_to_be_populate=-99999&"
		"expression_portlet_to_be_populate=-35&validateFlagOriginalValue=&value(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberStart)=&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&"
		"value(addressesModel*streetPrefix)=&value(addressesModel*unitType)=&value(addressesModel*unitEnd)=&value(addressesModel*countryCode)=&value(addressesModel*sourceFlag)=&value(addressesModel*addressTypeFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*addressStatus)=&value"
		"(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*streetDirection)=&value(addressesModel*streetName)=avon&value(addressesModel*streetSuffix)=&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitStart)=&value(addressesModel*validateFlag)=&value(addressesModel*city)=&value(addressesModel*state)=&value(addressesModel*zip_disp)=&value(addressesModel*zip)=&value"
		"(addressesModel*primaryFlag)=Y&value(addressesModel*county)=&value(addressesModel*neighborhood)=&value(addressesModel*addressLine1)=&value(addressesModel*XCoordinator)=&value(addressesModel*YCoordinator)=&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=&value(l1addressnbr)=&value(l1addressnbr1)=&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=&isAddress=1&isAddressValidation=N&isAddressRequired=N&isShowOwner=Y&generalCAPSearch=&"
		"isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow="
		"L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(mailAddress1)=&value(mailAddress2)=&value(mailAddress3)=&value(mailCity)=&value(mailState)=MI&value(mailZip)=&value(mailCountry)=&value(phone)=&value(templateData)=&value(fax)=&value(email)=&value(primaryOwner)=Y&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value"
		"(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=N&isOwnerRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=118&expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(contact*refContactNumber)=&value(contactsModel*refContactNumber)=&value"
		"(serviceProviderCode)=&value(contactsModel*accessLevel)=N&value(contactsModel*contactType)=Homeowner&value(contactsModel*relation)=&value(contactsModel*title)=&value(contactsModel*fullName)=&value(contactsModel*addressId)=&value(contactsModel*addressLine1)=&value(contactsModel*addressLine2)=&value(contactsModel*addressLine3)=&value(contactsModel*city)=&value(contactsModel*state)=MI&value(contactsModel*zip)=&value(contactsModel*countryCode)=&value(contactsModel*phone3)=&value(contactsModel*fax)=&"
		"value(contactsModel*contactOnSRChange)=&value(contactsModel*comment)=&value(maskformat_contactsModel*maskedSsn)=AAA-AA-AAAA&value(contactsModel*maskedSsn)=&value(maskformat_contactsModel*fein)=&value(contactsModel*fein)=&value(contactsModel*tradeName)=&value(contactsModel*userID)=&value(contactsModel*internalUserFlag)=&value(contactsModel*salutation)=&value(contactsModel*gender)=&value(contactsModel*postOfficeBox)=&date(contactsModel*birthDate)=&value(contactsModel*namesuffix)=&value"
		"(contactsModel*businessName2)=&value(contactsModel*birthCity)=&value(contactsModel*birthState)=&value(contactsModel*birthRegion)=&value(contactsModel*race)=&date(contactsModel*deceasedDate)=&value(contactsModel*passportNumber)=&value(contactsModel*driverLicenseNbr)=&value(contactsModel*driverLicenseState)=&value(contactsModel*stateIDNbr)=&value(contactsModel*flag)=N&value(contactsModel*lastName)=&value(contactsModel*firstName)=&value(contactsModel*middleName)=&ACMask_118_9_value"
		"(contactsModel*phone1_disp)=&ACMask_118_9_value(contactsModel*phone1)=&value(contactsModel*businessName)=&ACMask_118_10_value(contactsModel*phone2_disp)=&ACMask_118_10_value(contactsModel*phone2)=&value(contactsModel*email)=&value(contactsModel*preferredChannel)=&value(templateGroup)=CAP&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea0=&sourcetextarea0=&layouttextarea0=null&contactsModel*uiuid=0&generalCAPSearch=&isGeneralCAP=Y&"
		"objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isContact=1&contact1ViewID=118&isContact1Validation=N&isContact1Required=N&contact1AccessRight=F&contact1ContactNumber=null&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue"
		"=&expression_portlet_to_be_populate=121&expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*flag)=N&value(applicant*relation)=&value(applicant*title)=&value(applicant*fullName)=&value(applicant*addressId)=&value(applicant*addressLine1)=&value(applicant*addressLine2)=&value"
		"(applicant*addressLine3)=&value(applicant*city)=&value(applicant*state)=MI&value(applicant*zip)=&value(applicant*countryCode)=&value(applicant*confirmEmail)=&value(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(maskformat_applicant*maskedSsn)=AAA-AA-AAAA&value(applicant*maskedSsn)=&value(maskformat_applicant*fein)=&value(applicant*fein)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(templateData)=&value(applicant*salutation)=&value"
		"(applicant*gender)=&value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value(applicant*businessName2)=&value(applicant*birthCity)=&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&"
		"value(applicant*phone1_disp)=&value(applicant*phone1)=&value(applicant*businessName)=&value(applicant*phone2_disp)=&value(applicant*phone2)=&value(applicant*email)=&displasy*applicant*email=Y&value(applicant*phone3_disp)=&value(applicant*phone3)=&value(applicant*tradeName)=&value(applicant*preferredChannel)=&valuetextarea1=&sourcetextarea1=%7B%22UIUID%22%3A1%7D&layouttextarea1=null&applicant*uiuid=1&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=N&applicantAccessRight=F&applicantContactNumber=null&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=Building%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD&"
		"app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Requirements=&app_spec_info_PLAN_REVIEW_INFORMATION_School_Site_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_BCC_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_homeowner%253F_Value=Y&app_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_licensed_professional%253F_Value=Y&"
		"app_spec_info_CONTRACTOR_INFO_Workers_Comp_Insurance_Carrier=&app_spec_info_CONTRACTOR_INFO_Unemployment_Insurance_Agency_Employer_Account_Number=&app_spec_info_CONTRACTOR_INFO_FEIN=&app_spec_info_CONTRACTOR_INFO_Builders_License_Number=&app_spec_info_CONTRACTOR_INFO_Expiration_Date=&app_spec_info_GENERAL_INFORMATION_Building_Type=&app_spec_info_BUILDING_DATA_Type_of_Improvement=&app_spec_info_BUILDING_DATA_Estimated_Project_Cost=&"
		"app_spec_info_BUILDING_DATA_Buildings_Regulated_by_the_Michigan_Residential_Code=&app_spec_info_PLAN_REVIEW_INFORMATION_Building_Use=&app_spec_info_BUILDING_DATA_Construction_Type=&app_spec_info_BUILDING_DATA_Housing_Units=&app_spec_info_BUILDING_DATA_Basement___Existing=&app_spec_info_BUILDING_DATA_Basement___Alterations=&app_spec_info_BUILDING_DATA_Basement___New=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Existing=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Alterations=&"
		"app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___New=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Existing=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Alterations=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___New=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Existing=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Alterations=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___New=&app_spec_info_BUILDING_DATA_Total_Aboveground_SQFT=0&"
		"app_spec_info_BUILDING_DATA_Total_Basement_SQFT=0&app_spec_info_BUILDING_DATA_Porch%252FDeck%252FGarage_SQFT=&app_spec_info_BUILDING_DATA_Alterations%252C_Repairs_and_Additions=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PAYMENT_METHOD_Payment_Method=Credit%20Card&app_spec_info_PAYMENT_METHOD_Index=&app_spec_info_PAYMENT_METHOD_PCA=&app_spec_info_PAYMENT_METHOD_Object_Code=&"
		"app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection=&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection_Cost=100&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection_Fee=0&app_spec_info_EQUIPMENT_Additional_Inspection=&app_spec_info_EQUIPMENT_Additional_Inspection_Cost=100&app_spec_info_EQUIPMENT_Additional_Inspection_Fee=0&app_spec_info_EQUIPMENT_Certification=&app_spec_info_EQUIPMENT_Certification_Cost=50&app_spec_info_EQUIPMENT_Certification_Fee=0&value(mode)=New&"
		"expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&isAppSpecInfoTable=1&expression_portlet_to_be_populate=-2&expression_portlet_to_be_populate=-99999&value(appSpecTable*tableName)=&tableName=ENVIRONMENTAL%20CONTROL%20APPROVAL&tableName=VIOLATIONS&tableName=HISTORICAL%20DATA&tableName=GENERAL%20INFORMATION&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&"
		"sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&mode=upload&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field"
		"(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&"
		"noFolderGroupError=No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL="
		"%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DBuilding%252FBuilding%252FNA%252FNA%26module%3DBuilding&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea2=&sourcetextarea2=&layouttextarea2=&docTemplateUIUID=2&value(docGroup)=&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)=NONE&"
		"documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate"
		"=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory="
		"&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&"
		"hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20026%2C118%2C121&viewGroup=%2C225&formGroup=%2CcapDetailForm%2CaddressForm%2CownerForm%2CcontactDetailForm%2CapplicantDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value"
		"(contactValidatePassed)=true&value(createCapForParcelType)=&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*maskedSsn)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%7D%7D&", 
		"LAST");

	web_custom_request("countryStateAJAX.jsp_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?stateProperty=value(addressesModel*state)&aaZoneId=aazone-country-state&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.4725641526747495&aazones=aazone-country-state&statevalue=MI", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"Body=aazone-country-state", 
		"LAST");

	web_url("session.do_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_TC3_05_Address_Search",2);

	lr_think_time(4);

	web_url("session.do_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(7);

	web_custom_request("expression.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building",
		"Snapshot=t67.inf",
		"Mode=HTML",
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Building&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&expression_portlet_to_be_populate=112&expression_portlet_to_be_populate=-99999&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&value(srTest)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&date(capModel*fileDate)=08%2F28%2F2018&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*c"
		"ompleteDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel"
		"*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdF"
		"romWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=117&expression_portlet_to_be_populate=-99999&expression_portlet_to_be_populate=-35&validateFlagOriginalValue=&value(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberStart)=617&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value(addressesModel*unitType)=&value(addressesModel*unitEnd)=&value(addressesModel*countryCode)=&value(addressesModel*sourceFlag)=&value(addressesM"
		"odel*addressTypeFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*addressStatus)=A&value(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*streetDirection)=&value(addressesModel*streetName)=AVON&value(addressesModel*streetSuffix)=ST&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitStart)=&value(addressesModel*validateFlag)=&value(addressesModel*city)=LANSING&value(addressesModel*state)=MI&value(addressesModel*zip_disp)={CorrelationParameter}&value(addressesModel*zip)={CorrelationParameter}&value(addressesModel*primaryFlag)=N&value(addressesModel*county)=&value(addressesModel*neighborhood)=&value(addressesModel*addressLine1)=&value(addressesModel*XCoordinator)=&value(addre"
		"ssesModel*YCoordinator)=&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=925341029&value(l1addressnbr)=&value(l1addressnbr1)=925341029&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=local&isAddress=1&isAddressValidation=N&isAddressRequired=N&isShowOwner=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(mailAddress1)=&value(mailAddress2)=&value(mailAddress3)=&value(mailCity)=&value(mailState)=MI"
		"&value(mailZip)=&value(mailCountry)=&value(phone)=&value(templateData)=&value(fax)=&value(email)=&value(primaryOwner)=Y&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=N&isOwnerRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=118&expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(contact*refContactNumber)=&value(contactsModel*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel*accessLevel)=N&value(contactsModel*contactType)=Homeowner&value(contactsModel*relation)=&value(contactsModel*title)=&value(contactsModel*fullName)=&value(contactsModel*addressId)=&value(cont"
		"actsModel*addressLine1)=&value(contactsModel*addressLine2)=&value(contactsModel*addressLine3)=&value(contactsModel*city)=&value(contactsModel*state)=MI&value(contactsModel*zip)=&value(contactsModel*countryCode)=&value(contactsModel*phone3)=&value(contactsModel*fax)=&value(contactsModel*contactOnSRChange)=&value(contactsModel*comment)=&value(maskformat_contactsModel*maskedSsn)=AAA-AA-AAAA&value(contactsModel*maskedSsn)=&value(maskformat_contactsModel*fein)=&value(contactsModel*fein)=&value(contactsModel*tradeName)=&value(contactsModel*userID)=&value(contactsModel*internalUserFlag)=&value(contactsModel*salutation)=&value(contactsModel*gender)=&value(contactsModel*postOfficeBox)=&date(contactsModel*birthDate)=&value(contactsModel*namesuffix)=&value(contactsModel*businessName2)=&value(contactsModel*birthCity)=&value(contactsModel*birthState)=&value(contactsModel*birthRegion)=&value(contactsModel*race)=&date(contactsModel*deceasedDate)=&value(contactsModel*passportNumber)=&value(contactsModel*driverLicenseNbr)=&"
		"value(contactsModel*driverLicenseState)=&value(contactsModel*stateIDNbr)=&value(contactsModel*flag)=N&value(contactsModel*lastName)=&value(contactsModel*firstName)=&value(contactsModel*middleName)=&ACMask_118_9_value(contactsModel*phone1_disp)=&ACMask_118_9_value(contactsModel*phone1)=&value(contactsModel*businessName)=&ACMask_118_10_value(contactsModel*phone2_disp)=&ACMask_118_10_value(contactsModel*phone2)=&value(contactsModel*email)=&value(contactsModel*preferredChannel)=&value(templateGroup)=CAP&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea0=&sourcetextarea0=&layouttextarea0=null&contactsModel*uiuid=0&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isContact=1&contact1ViewID=118&isContact1Validation=N&isContact1Required=N&contact1AccessRight=F&contact1ContactNumbe"
		"r=null&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=121&expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*flag)=N&value(applicant*relation)=&value(applicant*title)=&value(applicant*fullName)=&value(applicant*addressId)=&value(applicant*addressLine1)=&value(applicant*addressLine2)=&value(applicant*addressLine3)=&value(applicant*city)=&value(applicant*state)=MI&value(applicant*zip)=&value(applicant*countryCode)=&value(applicant*confirmEmail)=&value(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(maskformat_applicant*maskedSsn)=AAA-AA-AAAA&value(applicant*maskedSsn)=&value(maskformat_applicant*f"
		"ein)=&value(applicant*fein)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(templateData)=&value(applicant*salutation)=&value(applicant*gender)=&value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value(applicant*businessName2)=&value(applicant*birthCity)=&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone1_disp)=&value(applicant*phone1)=&value(applicant*businessName)=&value(applicant*phone2_disp)=&value(applicant*phone2)=&value(applicant*email)=&displasy*applicant*email=Y&value(applicant*phone3_disp)=&value(applicant*phone3)=&value(applicant*tradeName)=&value(applicant*preferredChannel)=&valuetextarea1=&sourcetextarea1=%7B%22UIUID%22%3A1%7D&layouttextarea1="
		"null&applicant*uiuid=1&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=N&applicantAccessRight=F&applicantContactNumber=null&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=Building%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Requirements=Plans%20not%20Required&app_spec_info_PLAN_REVIEW_INFORMATION_School_Site_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_BCC_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_homeowner%253F_Value=Y&a"
		"pp_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_licensed_professional%253F_Value=Y&app_spec_info_CONTRACTOR_INFO_Workers_Comp_Insurance_Carrier=&app_spec_info_CONTRACTOR_INFO_Unemployment_Insurance_Agency_Employer_Account_Number=&app_spec_info_CONTRACTOR_INFO_FEIN=&app_spec_info_CONTRACTOR_INFO_Builders_License_Number=&app_spec_info_CONTRACTOR_INFO_Expiration_Date=&app_spec_info_GENERAL_INFORMATION_Building_Type=&app_spec_info_BUILDING_DATA_Type_of_Improvement=&app_spec_info_BUILDING_DATA_Estimated_Project_Cost=&app_spec_info_BUILDING_DATA_Buildings_Regulated_by_the_Michigan_Residential_Code=&app_spec_info_PLAN_REVIEW_INFORMATION_Building_Use=&app_spec_info_BUILDING_DATA_Construction_Type=&app_spec_info_BUILDING_DATA_Housing_Units=&app_spec_info_BUILDING_DATA_Basement___Existing=&app_spec_info_BUILDING_DATA_Basement___Alterations=&app_spec_info_BUILDING_DATA_Basement___New=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Existing=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Alterations=&app_spec_"
		"info_BUILDING_DATA_1st_and_2nd_Floor___New=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Existing=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Alterations=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___New=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Existing=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Alterations=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___New=&app_spec_info_BUILDING_DATA_Total_Aboveground_SQFT=0&app_spec_info_BUILDING_DATA_Total_Basement_SQFT=0&app_spec_info_BUILDING_DATA_Porch%252FDeck%252FGarage_SQFT=&app_spec_info_BUILDING_DATA_Alterations%252C_Repairs_and_Additions=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PAYMENT_METHOD_Payment_Method=Credit%20Card&app_spec_info_PAYMENT_METHOD_Index=&app_spec_info_PAYMENT_METHOD_PCA=&app_spec_info_PAYMENT_METHOD_Object_Code=&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection=&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection_Cost=1"
		"00&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection_Fee=0&app_spec_info_EQUIPMENT_Additional_Inspection=&app_spec_info_EQUIPMENT_Additional_Inspection_Cost=100&app_spec_info_EQUIPMENT_Additional_Inspection_Fee=0&app_spec_info_EQUIPMENT_Certification=&app_spec_info_EQUIPMENT_Certification_Cost=50&app_spec_info_EQUIPMENT_Certification_Fee=0&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&isAppSpecInfoTable=1&expression_portlet_to_be_populate=-2&expression_portlet_to_be_populate=-99999&value(appSpecTable*tableName)=&tableName=ENVIRONMENTAL%20CONTROL%20APPROVAL&tableName=VIOLATIONS&tableName=HISTORICAL%20DATA&tableName=GENERAL%20INFORMATION&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType="
		"print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError=No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folder%20n"
		"ame(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL=%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DBuilding%252FBuilding%252FNA%252FNA%26module%3DBuilding&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea2=&sourcetextarea2=&layouttextarea2=&docTemplateUIUID=2&value(docGroup)=&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)=NONE&documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-docume"
		"ntSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate="
		"&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20026%2C118%2C121&viewGroup=%2C225&formGroup=%2CcapDetailForm%2CaddressForm%2CownerForm%2CcontactDetailForm%2CapplicantDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*"
		"fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%7D%7D&value(refContactNumber)=&expression-columnCount-distinct=0&expression-rowCount-distinct=NaN&expression-columnCount-del=0&expression-rowCount-del=NaN&expression-columnCount-remove=0&expression-rowCount-remove=NaN&expression-columnCount-GENERAL%2BINFORMATION=1&expression-rowCount-GENERAL%2BINFORMATION=0&expression-columnCount-HISTORICAL%2BDATA=2&expression-rowCount-HISTORICAL%2BDATA=0&expression-columnCount-VIOLATIONS=7&expression-rowCount-VIOLATIONS=0&expression-columnCount-ENVIRONMENTAL%2BCONTROL%2BAPPROVAL=5&expression-rowCount-ENVIRONMENTAL%2BCONTROL%2BAPPROVAL=0&accelasubmitbuttonname=Previous&callBack=&variableKey=ASI%3A%3APLAN%20REVIEW%20IN"
		"FORMATION%3A%3APlan%20Requirements&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A112%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A117%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A118%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22VIOLATIONS%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22HISTORICAL%20DATA%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22GENERAL%20INFORMATION%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22po"
		"rtletID%22%3A121%2C%22viewKey1%22%3A%22Applicant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A125%2C%22viewKey1%22%3A%22Homeowner%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute",
		"LAST");

	lr_think_time(5);

	web_url("session.do_14", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("expression.do_4",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building",
		"Snapshot=t69.inf",
		"Mode=HTML",
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Building&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&expression_portlet_to_be_populate=112&expression_portlet_to_be_populate=-99999&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&value(srTest)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&date(capModel*fileDate)=08%2F28%2F2018&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*c"
		"ompleteDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel"
		"*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdF"
		"romWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=117&expression_portlet_to_be_populate=-99999&expression_portlet_to_be_populate=-35&validateFlagOriginalValue=&value(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberStart)=617&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value(addressesModel*unitType)=&value(addressesModel*unitEnd)=&value(addressesModel*countryCode)=&value(addressesModel*sourceFlag)=&value(addressesM"
		"odel*addressTypeFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*addressStatus)=A&value(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*streetDirection)=&value(addressesModel*streetName)=AVON&value(addressesModel*streetSuffix)=ST&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitStart)=&value(addressesModel*validateFlag)=&value(addressesModel*city)=LANSING&value(addressesModel*state)=MI&value(addressesModel*zip_disp)={CorrelationParameter}&value(addressesModel*zip)={CorrelationParameter}&value(addressesModel*primaryFlag)=N&value(addressesModel*county)=&value(addressesModel*neighborhood)=&value(addressesModel*addressLine1)=&value(addressesModel*XCoordinator)=&value(addre"
		"ssesModel*YCoordinator)=&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=925341029&value(l1addressnbr)=&value(l1addressnbr1)=925341029&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=local&isAddress=1&isAddressValidation=N&isAddressRequired=N&isShowOwner=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(mailAddress1)=&value(mailAddress2)=&value(mailAddress3)=&value(mailCity)=&value(mailState)=MI"
		"&value(mailZip)=&value(mailCountry)=&value(phone)=&value(templateData)=&value(fax)=&value(email)=&value(primaryOwner)=Y&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=N&isOwnerRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=118&expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(contact*refContactNumber)=&value(contactsModel*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel*accessLevel)=N&value(contactsModel*contactType)=Homeowner&value(contactsModel*relation)=&value(contactsModel*title)=&value(contactsModel*fullName)=&value(contactsModel*addressId)=&value(cont"
		"actsModel*addressLine1)=&value(contactsModel*addressLine2)=&value(contactsModel*addressLine3)=&value(contactsModel*city)=&value(contactsModel*state)=MI&value(contactsModel*zip)=&value(contactsModel*countryCode)=&value(contactsModel*phone3)=&value(contactsModel*fax)=&value(contactsModel*contactOnSRChange)=&value(contactsModel*comment)=&value(maskformat_contactsModel*maskedSsn)=AAA-AA-AAAA&value(contactsModel*maskedSsn)=&value(maskformat_contactsModel*fein)=&value(contactsModel*fein)=&value(contactsModel*tradeName)=&value(contactsModel*userID)=&value(contactsModel*internalUserFlag)=&value(contactsModel*salutation)=&value(contactsModel*gender)=&value(contactsModel*postOfficeBox)=&date(contactsModel*birthDate)=&value(contactsModel*namesuffix)=&value(contactsModel*businessName2)=&value(contactsModel*birthCity)=&value(contactsModel*birthState)=&value(contactsModel*birthRegion)=&value(contactsModel*race)=&date(contactsModel*deceasedDate)=&value(contactsModel*passportNumber)=&value(contactsModel*driverLicenseNbr)=&"
		"value(contactsModel*driverLicenseState)=&value(contactsModel*stateIDNbr)=&value(contactsModel*flag)=N&value(contactsModel*lastName)=&value(contactsModel*firstName)=&value(contactsModel*middleName)=&ACMask_118_9_value(contactsModel*phone1_disp)=&ACMask_118_9_value(contactsModel*phone1)=&value(contactsModel*businessName)=&ACMask_118_10_value(contactsModel*phone2_disp)=&ACMask_118_10_value(contactsModel*phone2)=&value(contactsModel*email)=&value(contactsModel*preferredChannel)=&value(templateGroup)=CAP&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea0=&sourcetextarea0=&layouttextarea0=null&contactsModel*uiuid=0&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isContact=1&contact1ViewID=118&isContact1Validation=N&isContact1Required=N&contact1AccessRight=F&contact1ContactNumbe"
		"r=null&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=121&expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*flag)=N&value(applicant*relation)=&value(applicant*title)=&value(applicant*fullName)=&value(applicant*addressId)=&value(applicant*addressLine1)=&value(applicant*addressLine2)=&value(applicant*addressLine3)=&value(applicant*city)=&value(applicant*state)=MI&value(applicant*zip)=&value(applicant*countryCode)=&value(applicant*confirmEmail)=&value(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(maskformat_applicant*maskedSsn)=AAA-AA-AAAA&value(applicant*maskedSsn)=&value(maskformat_applicant*f"
		"ein)=&value(applicant*fein)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(templateData)=&value(applicant*salutation)=&value(applicant*gender)=&value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value(applicant*businessName2)=&value(applicant*birthCity)=&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone1_disp)=&value(applicant*phone1)=&value(applicant*businessName)=&value(applicant*phone2_disp)=&value(applicant*phone2)=&value(applicant*email)=&displasy*applicant*email=Y&value(applicant*phone3_disp)=&value(applicant*phone3)=&value(applicant*tradeName)=&value(applicant*preferredChannel)=&valuetextarea1=&sourcetextarea1=%7B%22UIUID%22%3A1%7D&layouttextarea1="
		"null&applicant*uiuid=1&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=N&applicantAccessRight=F&applicantContactNumber=null&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=Building%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Requirements=Plans%20not%20Required&app_spec_info_PLAN_REVIEW_INFORMATION_School_Site_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_BCC_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_homeowner%253F_Value=Y&a"
		"pp_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_licensed_professional%253F_Value=Y&app_spec_info_CONTRACTOR_INFO_Workers_Comp_Insurance_Carrier=&app_spec_info_CONTRACTOR_INFO_Unemployment_Insurance_Agency_Employer_Account_Number=&app_spec_info_CONTRACTOR_INFO_FEIN=&app_spec_info_CONTRACTOR_INFO_Builders_License_Number=&app_spec_info_CONTRACTOR_INFO_Expiration_Date=&app_spec_info_GENERAL_INFORMATION_Building_Type=Other&app_spec_info_BUILDING_DATA_Type_of_Improvement=&app_spec_info_BUILDING_DATA_Estimated_Project_Cost=&app_spec_info_BUILDING_DATA_Buildings_Regulated_by_the_Michigan_Residential_Code=&app_spec_info_PLAN_REVIEW_INFORMATION_Building_Use=&app_spec_info_BUILDING_DATA_Construction_Type=&app_spec_info_BUILDING_DATA_Housing_Units=&app_spec_info_BUILDING_DATA_Basement___Existing=&app_spec_info_BUILDING_DATA_Basement___Alterations=&app_spec_info_BUILDING_DATA_Basement___New=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Existing=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Alterations=&app_"
		"spec_info_BUILDING_DATA_1st_and_2nd_Floor___New=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Existing=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Alterations=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___New=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Existing=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Alterations=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___New=&app_spec_info_BUILDING_DATA_Total_Aboveground_SQFT=0&app_spec_info_BUILDING_DATA_Total_Basement_SQFT=0&app_spec_info_BUILDING_DATA_Porch%252FDeck%252FGarage_SQFT=&app_spec_info_BUILDING_DATA_Alterations%252C_Repairs_and_Additions=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PAYMENT_METHOD_Payment_Method=Credit%20Card&app_spec_info_PAYMENT_METHOD_Index=&app_spec_info_PAYMENT_METHOD_PCA=&app_spec_info_PAYMENT_METHOD_Object_Code=&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection=&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection_C"
		"ost=100&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection_Fee=0&app_spec_info_EQUIPMENT_Additional_Inspection=&app_spec_info_EQUIPMENT_Additional_Inspection_Cost=100&app_spec_info_EQUIPMENT_Additional_Inspection_Fee=0&app_spec_info_EQUIPMENT_Certification=&app_spec_info_EQUIPMENT_Certification_Cost=50&app_spec_info_EQUIPMENT_Certification_Fee=0&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&isAppSpecInfoTable=1&expression_portlet_to_be_populate=-2&expression_portlet_to_be_populate=-99999&value(appSpecTable*tableName)=&tableName=ENVIRONMENTAL%20CONTROL%20APPROVAL&tableName=VIOLATIONS&tableName=HISTORICAL%20DATA&tableName=GENERAL%20INFORMATION&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFile"
		"Type=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError=No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folde"
		"r%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL=%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DBuilding%252FBuilding%252FNA%252FNA%26module%3DBuilding&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea2=&sourcetextarea2=&layouttextarea2=&docTemplateUIUID=2&value(docGroup)=&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)=NONE&documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-d"
		"ocumentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-rec"
		"Date=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20026%2C118%2C121&viewGroup=%2C225&formGroup=%2CcapDetailForm%2CaddressForm%2CownerForm%2CcontactDetailForm%2CapplicantDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsM"
		"odel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%7D%7D&value(refContactNumber)=&expression-columnCount-distinct=0&expression-rowCount-distinct=NaN&expression-columnCount-del=0&expression-rowCount-del=NaN&expression-columnCount-remove=0&expression-rowCount-remove=NaN&expression-columnCount-GENERAL%2BINFORMATION=1&expression-rowCount-GENERAL%2BINFORMATION=0&expression-columnCount-HISTORICAL%2BDATA=2&expression-rowCount-HISTORICAL%2BDATA=0&expression-columnCount-VIOLATIONS=7&expression-rowCount-VIOLATIONS=0&expression-columnCount-ENVIRONMENTAL%2BCONTROL%2BAPPROVAL=5&expression-rowCount-ENVIRONMENTAL%2BCONTROL%2BAPPROVAL=0&accelasubmitbuttonname=Previous&callBack=&variableKey=ASI%3A%3AGENERAL%20INF"
		"ORMATION%3A%3ABuilding%20Type&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A112%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A117%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A118%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22VIOLATIONS%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22HISTORICAL%20DATA%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22GENERAL%20INFORMATION%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portlet"
		"ID%22%3A121%2C%22viewKey1%22%3A%22Applicant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A125%2C%22viewKey1%22%3A%22Homeowner%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute",
		"LAST");

	web_custom_request("expression.do_5",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building",
		"Snapshot=t70.inf",
		"Mode=HTML",
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Building&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&expression_portlet_to_be_populate=112&expression_portlet_to_be_populate=-99999&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&value(srTest)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&date(capModel*fileDate)=08%2F28%2F2018&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*c"
		"ompleteDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel"
		"*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdF"
		"romWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=117&expression_portlet_to_be_populate=-99999&expression_portlet_to_be_populate=-35&validateFlagOriginalValue=&value(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberStart)=617&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value(addressesModel*unitType)=&value(addressesModel*unitEnd)=&value(addressesModel*countryCode)=&value(addressesModel*sourceFlag)=&value(addressesM"
		"odel*addressTypeFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*addressStatus)=A&value(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*streetDirection)=&value(addressesModel*streetName)=AVON&value(addressesModel*streetSuffix)=ST&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitStart)=&value(addressesModel*validateFlag)=&value(addressesModel*city)=LANSING&value(addressesModel*state)=MI&value(addressesModel*zip_disp)={CorrelationParameter}&value(addressesModel*zip)={CorrelationParameter}&value(addressesModel*primaryFlag)=N&value(addressesModel*county)=&value(addressesModel*neighborhood)=&value(addressesModel*addressLine1)=&value(addressesModel*XCoordinator)=&value(addre"
		"ssesModel*YCoordinator)=&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=925341029&value(l1addressnbr)=&value(l1addressnbr1)=925341029&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=local&isAddress=1&isAddressValidation=N&isAddressRequired=N&isShowOwner=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(mailAddress1)=&value(mailAddress2)=&value(mailAddress3)=&value(mailCity)=&value(mailState)=MI"
		"&value(mailZip)=&value(mailCountry)=&value(phone)=&value(templateData)=&value(fax)=&value(email)=&value(primaryOwner)=Y&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=N&isOwnerRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=118&expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(contact*refContactNumber)=&value(contactsModel*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel*accessLevel)=N&value(contactsModel*contactType)=Homeowner&value(contactsModel*relation)=&value(contactsModel*title)=&value(contactsModel*fullName)=&value(contactsModel*addressId)=&value(cont"
		"actsModel*addressLine1)=&value(contactsModel*addressLine2)=&value(contactsModel*addressLine3)=&value(contactsModel*city)=&value(contactsModel*state)=MI&value(contactsModel*zip)=&value(contactsModel*countryCode)=&value(contactsModel*phone3)=&value(contactsModel*fax)=&value(contactsModel*contactOnSRChange)=&value(contactsModel*comment)=&value(maskformat_contactsModel*maskedSsn)=AAA-AA-AAAA&value(contactsModel*maskedSsn)=&value(maskformat_contactsModel*fein)=&value(contactsModel*fein)=&value(contactsModel*tradeName)=&value(contactsModel*userID)=&value(contactsModel*internalUserFlag)=&value(contactsModel*salutation)=&value(contactsModel*gender)=&value(contactsModel*postOfficeBox)=&date(contactsModel*birthDate)=&value(contactsModel*namesuffix)=&value(contactsModel*businessName2)=&value(contactsModel*birthCity)=&value(contactsModel*birthState)=&value(contactsModel*birthRegion)=&value(contactsModel*race)=&date(contactsModel*deceasedDate)=&value(contactsModel*passportNumber)=&value(contactsModel*driverLicenseNbr)=&"
		"value(contactsModel*driverLicenseState)=&value(contactsModel*stateIDNbr)=&value(contactsModel*flag)=N&value(contactsModel*lastName)=&value(contactsModel*firstName)=&value(contactsModel*middleName)=&ACMask_118_9_value(contactsModel*phone1_disp)=&ACMask_118_9_value(contactsModel*phone1)=&value(contactsModel*businessName)=&ACMask_118_10_value(contactsModel*phone2_disp)=&ACMask_118_10_value(contactsModel*phone2)=&value(contactsModel*email)=&value(contactsModel*preferredChannel)=&value(templateGroup)=CAP&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea0=&sourcetextarea0=&layouttextarea0=null&contactsModel*uiuid=0&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isContact=1&contact1ViewID=118&isContact1Validation=N&isContact1Required=N&contact1AccessRight=F&contact1ContactNumbe"
		"r=null&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=121&expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*flag)=N&value(applicant*relation)=&value(applicant*title)=&value(applicant*fullName)=&value(applicant*addressId)=&value(applicant*addressLine1)=&value(applicant*addressLine2)=&value(applicant*addressLine3)=&value(applicant*city)=&value(applicant*state)=MI&value(applicant*zip)=&value(applicant*countryCode)=&value(applicant*confirmEmail)=&value(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(maskformat_applicant*maskedSsn)=AAA-AA-AAAA&value(applicant*maskedSsn)=&value(maskformat_applicant*f"
		"ein)=&value(applicant*fein)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(templateData)=&value(applicant*salutation)=&value(applicant*gender)=&value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value(applicant*businessName2)=&value(applicant*birthCity)=&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone1_disp)=&value(applicant*phone1)=&value(applicant*businessName)=&value(applicant*phone2_disp)=&value(applicant*phone2)=&value(applicant*email)=&displasy*applicant*email=Y&value(applicant*phone3_disp)=&value(applicant*phone3)=&value(applicant*tradeName)=&value(applicant*preferredChannel)=&valuetextarea1=&sourcetextarea1=%7B%22UIUID%22%3A1%7D&layouttextarea1="
		"null&applicant*uiuid=1&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=N&applicantAccessRight=F&applicantContactNumber=null&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=Building%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Requirements=Plans%20not%20Required&app_spec_info_PLAN_REVIEW_INFORMATION_School_Site_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_BCC_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_homeowner%253F_Value=Y&a"
		"pp_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_licensed_professional%253F_Value=Y&app_spec_info_CONTRACTOR_INFO_Workers_Comp_Insurance_Carrier=&app_spec_info_CONTRACTOR_INFO_Unemployment_Insurance_Agency_Employer_Account_Number=&app_spec_info_CONTRACTOR_INFO_FEIN=&app_spec_info_CONTRACTOR_INFO_Builders_License_Number=&app_spec_info_CONTRACTOR_INFO_Expiration_Date=&app_spec_info_GENERAL_INFORMATION_Building_Type=Other&app_spec_info_BUILDING_DATA_Type_of_Improvement=Addition&app_spec_info_BUILDING_DATA_Estimated_Project_Cost=&app_spec_info_BUILDING_DATA_Buildings_Regulated_by_the_Michigan_Residential_Code=&app_spec_info_PLAN_REVIEW_INFORMATION_Building_Use=&app_spec_info_BUILDING_DATA_Construction_Type=&app_spec_info_BUILDING_DATA_Housing_Units=&app_spec_info_BUILDING_DATA_Basement___Existing=&app_spec_info_BUILDING_DATA_Basement___Alterations=&app_spec_info_BUILDING_DATA_Basement___New=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Existing=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Alteratio"
		"ns=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___New=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Existing=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Alterations=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___New=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Existing=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Alterations=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___New=&app_spec_info_BUILDING_DATA_Total_Aboveground_SQFT=0&app_spec_info_BUILDING_DATA_Total_Basement_SQFT=0&app_spec_info_BUILDING_DATA_Porch%252FDeck%252FGarage_SQFT=&app_spec_info_BUILDING_DATA_Alterations%252C_Repairs_and_Additions=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PAYMENT_METHOD_Payment_Method=Credit%20Card&app_spec_info_PAYMENT_METHOD_Index=&app_spec_info_PAYMENT_METHOD_PCA=&app_spec_info_PAYMENT_METHOD_Object_Code=&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection=&app_spec_info_EQUIPMENT_Rough%252FAdditional_Insp"
		"ection_Cost=100&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection_Fee=0&app_spec_info_EQUIPMENT_Additional_Inspection=&app_spec_info_EQUIPMENT_Additional_Inspection_Cost=100&app_spec_info_EQUIPMENT_Additional_Inspection_Fee=0&app_spec_info_EQUIPMENT_Certification=&app_spec_info_EQUIPMENT_Certification_Cost=50&app_spec_info_EQUIPMENT_Certification_Fee=0&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&isAppSpecInfoTable=1&expression_portlet_to_be_populate=-2&expression_portlet_to_be_populate=-99999&value(appSpecTable*tableName)=&tableName=ENVIRONMENTAL%20CONTROL%20APPROVAL&tableName=VIOLATIONS&tableName=HISTORICAL%20DATA&tableName=GENERAL%20INFORMATION&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&Ex"
		"portFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError=No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate"
		"%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL=%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DBuilding%252FBuilding%252FNA%252FNA%26module%3DBuilding&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea2=&sourcetextarea2=&layouttextarea2=&docTemplateUIUID=2&value(docGroup)=&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)=NONE&documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hid"
		"den-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidde"
		"n-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20026%2C118%2C121&viewGroup=%2C225&formGroup=%2CcapDetailForm%2CaddressForm%2CownerForm%2CcontactDetailForm%2CapplicantDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(c"
		"ontactsModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%7D%7D&value(refContactNumber)=&expression-columnCount-distinct=0&expression-rowCount-distinct=NaN&expression-columnCount-del=0&expression-rowCount-del=NaN&expression-columnCount-remove=0&expression-rowCount-remove=NaN&expression-columnCount-GENERAL%2BINFORMATION=1&expression-rowCount-GENERAL%2BINFORMATION=0&expression-columnCount-HISTORICAL%2BDATA=2&expression-rowCount-HISTORICAL%2BDATA=0&expression-columnCount-VIOLATIONS=7&expression-rowCount-VIOLATIONS=0&expression-columnCount-ENVIRONMENTAL%2BCONTROL%2BAPPROVAL=5&expression-rowCount-ENVIRONMENTAL%2BCONTROL%2BAPPROVAL=0&accelasubmitbuttonname=Previous&callBack=&variableKey=ASI%3A%3ABUILD"
		"ING%20DATA%3A%3AType%20of%20Improvement&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A112%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A117%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A118%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22VIOLATIONS%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22HISTORICAL%20DATA%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22GENERAL%20INFORMATION%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B"
		"%22portletID%22%3A121%2C%22viewKey1%22%3A%22Applicant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A125%2C%22viewKey1%22%3A%22Homeowner%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute",
		"LAST");

	web_custom_request("expression.do_6",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building",
		"Snapshot=t71.inf",
		"Mode=HTML",
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Building&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&expression_portlet_to_be_populate=112&expression_portlet_to_be_populate=-99999&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&value(srTest)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&date(capModel*fileDate)=08%2F28%2F2018&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*c"
		"ompleteDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel"
		"*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdF"
		"romWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=117&expression_portlet_to_be_populate=-99999&expression_portlet_to_be_populate=-35&validateFlagOriginalValue=&value(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberStart)=617&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value(addressesModel*unitType)=&value(addressesModel*unitEnd)=&value(addressesModel*countryCode)=&value(addressesModel*sourceFlag)=&value(addressesM"
		"odel*addressTypeFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*addressStatus)=A&value(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*streetDirection)=&value(addressesModel*streetName)=AVON&value(addressesModel*streetSuffix)=ST&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitStart)=&value(addressesModel*validateFlag)=&value(addressesModel*city)=LANSING&value(addressesModel*state)=MI&value(addressesModel*zip_disp)={CorrelationParameter}&value(addressesModel*zip)={CorrelationParameter}&value(addressesModel*primaryFlag)=N&value(addressesModel*county)=&value(addressesModel*neighborhood)=&value(addressesModel*addressLine1)=&value(addressesModel*XCoordinator)=&value(addre"
		"ssesModel*YCoordinator)=&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=925341029&value(l1addressnbr)=&value(l1addressnbr1)=925341029&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=local&isAddress=1&isAddressValidation=N&isAddressRequired=N&isShowOwner=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(mailAddress1)=&value(mailAddress2)=&value(mailAddress3)=&value(mailCity)=&value(mailState)=MI"
		"&value(mailZip)=&value(mailCountry)=&value(phone)=&value(templateData)=&value(fax)=&value(email)=&value(primaryOwner)=Y&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=N&isOwnerRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=118&expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(contact*refContactNumber)=&value(contactsModel*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel*accessLevel)=N&value(contactsModel*contactType)=Homeowner&value(contactsModel*relation)=&value(contactsModel*title)=&value(contactsModel*fullName)=&value(contactsModel*addressId)=&value(cont"
		"actsModel*addressLine1)=&value(contactsModel*addressLine2)=&value(contactsModel*addressLine3)=&value(contactsModel*city)=&value(contactsModel*state)=MI&value(contactsModel*zip)=&value(contactsModel*countryCode)=&value(contactsModel*phone3)=&value(contactsModel*fax)=&value(contactsModel*contactOnSRChange)=&value(contactsModel*comment)=&value(maskformat_contactsModel*maskedSsn)=AAA-AA-AAAA&value(contactsModel*maskedSsn)=&value(maskformat_contactsModel*fein)=&value(contactsModel*fein)=&value(contactsModel*tradeName)=&value(contactsModel*userID)=&value(contactsModel*internalUserFlag)=&value(contactsModel*salutation)=&value(contactsModel*gender)=&value(contactsModel*postOfficeBox)=&date(contactsModel*birthDate)=&value(contactsModel*namesuffix)=&value(contactsModel*businessName2)=&value(contactsModel*birthCity)=&value(contactsModel*birthState)=&value(contactsModel*birthRegion)=&value(contactsModel*race)=&date(contactsModel*deceasedDate)=&value(contactsModel*passportNumber)=&value(contactsModel*driverLicenseNbr)=&"
		"value(contactsModel*driverLicenseState)=&value(contactsModel*stateIDNbr)=&value(contactsModel*flag)=N&value(contactsModel*lastName)=&value(contactsModel*firstName)=&value(contactsModel*middleName)=&ACMask_118_9_value(contactsModel*phone1_disp)=&ACMask_118_9_value(contactsModel*phone1)=&value(contactsModel*businessName)=&ACMask_118_10_value(contactsModel*phone2_disp)=&ACMask_118_10_value(contactsModel*phone2)=&value(contactsModel*email)=&value(contactsModel*preferredChannel)=&value(templateGroup)=CAP&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea0=&sourcetextarea0=&layouttextarea0=null&contactsModel*uiuid=0&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isContact=1&contact1ViewID=118&isContact1Validation=N&isContact1Required=N&contact1AccessRight=F&contact1ContactNumbe"
		"r=null&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=121&expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*flag)=N&value(applicant*relation)=&value(applicant*title)=&value(applicant*fullName)=&value(applicant*addressId)=&value(applicant*addressLine1)=&value(applicant*addressLine2)=&value(applicant*addressLine3)=&value(applicant*city)=&value(applicant*state)=MI&value(applicant*zip)=&value(applicant*countryCode)=&value(applicant*confirmEmail)=&value(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(maskformat_applicant*maskedSsn)=AAA-AA-AAAA&value(applicant*maskedSsn)=&value(maskformat_applicant*f"
		"ein)=&value(applicant*fein)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(templateData)=&value(applicant*salutation)=&value(applicant*gender)=&value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value(applicant*businessName2)=&value(applicant*birthCity)=&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone1_disp)=&value(applicant*phone1)=&value(applicant*businessName)=&value(applicant*phone2_disp)=&value(applicant*phone2)=&value(applicant*email)=&displasy*applicant*email=Y&value(applicant*phone3_disp)=&value(applicant*phone3)=&value(applicant*tradeName)=&value(applicant*preferredChannel)=&valuetextarea1=&sourcetextarea1=%7B%22UIUID%22%3A1%7D&layouttextarea1="
		"null&applicant*uiuid=1&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=N&applicantAccessRight=F&applicantContactNumber=null&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=Building%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Requirements=Plans%20not%20Required&app_spec_info_PLAN_REVIEW_INFORMATION_School_Site_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_BCC_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_homeowner%253F_Value=Y&a"
		"pp_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_licensed_professional%253F_Value=Y&app_spec_info_CONTRACTOR_INFO_Workers_Comp_Insurance_Carrier=&app_spec_info_CONTRACTOR_INFO_Unemployment_Insurance_Agency_Employer_Account_Number=&app_spec_info_CONTRACTOR_INFO_FEIN=&app_spec_info_CONTRACTOR_INFO_Builders_License_Number=&app_spec_info_CONTRACTOR_INFO_Expiration_Date=&app_spec_info_GENERAL_INFORMATION_Building_Type=Other&app_spec_info_BUILDING_DATA_Type_of_Improvement=Addition&app_spec_info_BUILDING_DATA_Estimated_Project_Cost=&app_spec_info_BUILDING_DATA_Buildings_Regulated_by_the_Michigan_Residential_Code=&app_spec_info_PLAN_REVIEW_INFORMATION_Building_Use=E%2C%20Education&app_spec_info_BUILDING_DATA_Construction_Type=&app_spec_info_BUILDING_DATA_Housing_Units=&app_spec_info_BUILDING_DATA_Basement___Existing=&app_spec_info_BUILDING_DATA_Basement___Alterations=&app_spec_info_BUILDING_DATA_Basement___New=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Existing=&app_spec_info_BUILDING_DATA_1st_and_2nd_F"
		"loor___Alterations=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___New=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Existing=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Alterations=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___New=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Existing=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Alterations=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___New=&app_spec_info_BUILDING_DATA_Total_Aboveground_SQFT=0&app_spec_info_BUILDING_DATA_Total_Basement_SQFT=0&app_spec_info_BUILDING_DATA_Porch%252FDeck%252FGarage_SQFT=&app_spec_info_BUILDING_DATA_Alterations%252C_Repairs_and_Additions=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PAYMENT_METHOD_Payment_Method=Credit%20Card&app_spec_info_PAYMENT_METHOD_Index=&app_spec_info_PAYMENT_METHOD_PCA=&app_spec_info_PAYMENT_METHOD_Object_Code=&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection=&app_spec_info_EQUIPMENT_Rough%252"
		"FAdditional_Inspection_Cost=100&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection_Fee=0&app_spec_info_EQUIPMENT_Additional_Inspection=&app_spec_info_EQUIPMENT_Additional_Inspection_Cost=100&app_spec_info_EQUIPMENT_Additional_Inspection_Fee=0&app_spec_info_EQUIPMENT_Certification=&app_spec_info_EQUIPMENT_Certification_Cost=50&app_spec_info_EQUIPMENT_Certification_Fee=0&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&isAppSpecInfoTable=1&expression_portlet_to_be_populate=-2&expression_portlet_to_be_populate=-99999&value(appSpecTable*tableName)=&tableName=ENVIRONMENTAL%20CONTROL%20APPROVAL&tableName=VIOLATIONS&tableName=HISTORICAL%20DATA&tableName=GENERAL%20INFORMATION&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxNam"
		"e=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError=No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicat"
		"eError=Duplicate%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL=%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DBuilding%252FBuilding%252FNA%252FNA%26module%3DBuilding&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea2=&sourcetextarea2=&layouttextarea2=&docTemplateUIUID=2&value(docGroup)=&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)=NONE&documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-"
		"00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-r"
		"ecFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20026%2C118%2C121&viewGroup=%2C225&formGroup=%2CcapDetailForm%2CaddressForm%2CownerForm%2CcontactDetailForm%2CapplicantDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22"
		"%7D%2C%22value(contactsModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%7D%7D&value(refContactNumber)=&expression-columnCount-distinct=0&expression-rowCount-distinct=NaN&expression-columnCount-del=0&expression-rowCount-del=NaN&expression-columnCount-remove=0&expression-rowCount-remove=NaN&expression-columnCount-GENERAL%2BINFORMATION=1&expression-rowCount-GENERAL%2BINFORMATION=0&expression-columnCount-HISTORICAL%2BDATA=2&expression-rowCount-HISTORICAL%2BDATA=0&expression-columnCount-VIOLATIONS=7&expression-rowCount-VIOLATIONS=0&expression-columnCount-ENVIRONMENTAL%2BCONTROL%2BAPPROVAL=5&expression-rowCount-ENVIRONMENTAL%2BCONTROL%2BAPPROVAL=0&accelasubmitbuttonname=Previous&callBack=&variableKe"
		"y=ASI%3A%3APLAN%20REVIEW%20INFORMATION%3A%3ABuilding%20Use&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A112%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A117%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A118%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22VIOLATIONS%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22HISTORICAL%20DATA%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22GENERAL%20INFORMATION%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%2"
		"2%3A%22%22%7D%2C%7B%22portletID%22%3A121%2C%22viewKey1%22%3A%22Applicant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A125%2C%22viewKey1%22%3A%22Homeowner%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute",
		"LAST");

	web_custom_request("expression.do_7",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building",
		"Snapshot=t72.inf",
		"Mode=HTML",
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Building&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&expression_portlet_to_be_populate=112&expression_portlet_to_be_populate=-99999&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&value(srTest)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&date(capModel*fileDate)=08%2F28%2F2018&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*c"
		"ompleteDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel"
		"*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdF"
		"romWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=117&expression_portlet_to_be_populate=-99999&expression_portlet_to_be_populate=-35&validateFlagOriginalValue=&value(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberStart)=617&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value(addressesModel*unitType)=&value(addressesModel*unitEnd)=&value(addressesModel*countryCode)=&value(addressesModel*sourceFlag)=&value(addressesM"
		"odel*addressTypeFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*addressStatus)=A&value(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*streetDirection)=&value(addressesModel*streetName)=AVON&value(addressesModel*streetSuffix)=ST&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitStart)=&value(addressesModel*validateFlag)=&value(addressesModel*city)=LANSING&value(addressesModel*state)=MI&value(addressesModel*zip_disp)={CorrelationParameter}&value(addressesModel*zip)={CorrelationParameter}&value(addressesModel*primaryFlag)=N&value(addressesModel*county)=&value(addressesModel*neighborhood)=&value(addressesModel*addressLine1)=&value(addressesModel*XCoordinator)=&value(addre"
		"ssesModel*YCoordinator)=&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=925341029&value(l1addressnbr)=&value(l1addressnbr1)=925341029&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=local&isAddress=1&isAddressValidation=N&isAddressRequired=N&isShowOwner=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(mailAddress1)=&value(mailAddress2)=&value(mailAddress3)=&value(mailCity)=&value(mailState)=MI"
		"&value(mailZip)=&value(mailCountry)=&value(phone)=&value(templateData)=&value(fax)=&value(email)=&value(primaryOwner)=Y&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=N&isOwnerRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=118&expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(contact*refContactNumber)=&value(contactsModel*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel*accessLevel)=N&value(contactsModel*contactType)=Homeowner&value(contactsModel*relation)=&value(contactsModel*title)=&value(contactsModel*fullName)=&value(contactsModel*addressId)=&value(cont"
		"actsModel*addressLine1)=&value(contactsModel*addressLine2)=&value(contactsModel*addressLine3)=&value(contactsModel*city)=&value(contactsModel*state)=MI&value(contactsModel*zip)=&value(contactsModel*countryCode)=&value(contactsModel*phone3)=&value(contactsModel*fax)=&value(contactsModel*contactOnSRChange)=&value(contactsModel*comment)=&value(maskformat_contactsModel*maskedSsn)=AAA-AA-AAAA&value(contactsModel*maskedSsn)=&value(maskformat_contactsModel*fein)=&value(contactsModel*fein)=&value(contactsModel*tradeName)=&value(contactsModel*userID)=&value(contactsModel*internalUserFlag)=&value(contactsModel*salutation)=&value(contactsModel*gender)=&value(contactsModel*postOfficeBox)=&date(contactsModel*birthDate)=&value(contactsModel*namesuffix)=&value(contactsModel*businessName2)=&value(contactsModel*birthCity)=&value(contactsModel*birthState)=&value(contactsModel*birthRegion)=&value(contactsModel*race)=&date(contactsModel*deceasedDate)=&value(contactsModel*passportNumber)=&value(contactsModel*driverLicenseNbr)=&"
		"value(contactsModel*driverLicenseState)=&value(contactsModel*stateIDNbr)=&value(contactsModel*flag)=N&value(contactsModel*lastName)=&value(contactsModel*firstName)=&value(contactsModel*middleName)=&ACMask_118_9_value(contactsModel*phone1_disp)=&ACMask_118_9_value(contactsModel*phone1)=&value(contactsModel*businessName)=&ACMask_118_10_value(contactsModel*phone2_disp)=&ACMask_118_10_value(contactsModel*phone2)=&value(contactsModel*email)=&value(contactsModel*preferredChannel)=&value(templateGroup)=CAP&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea0=&sourcetextarea0=&layouttextarea0=null&contactsModel*uiuid=0&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isContact=1&contact1ViewID=118&isContact1Validation=N&isContact1Required=N&contact1AccessRight=F&contact1ContactNumbe"
		"r=null&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=121&expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*flag)=N&value(applicant*relation)=&value(applicant*title)=&value(applicant*fullName)=&value(applicant*addressId)=&value(applicant*addressLine1)=&value(applicant*addressLine2)=&value(applicant*addressLine3)=&value(applicant*city)=&value(applicant*state)=MI&value(applicant*zip)=&value(applicant*countryCode)=&value(applicant*confirmEmail)=&value(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(maskformat_applicant*maskedSsn)=AAA-AA-AAAA&value(applicant*maskedSsn)=&value(maskformat_applicant*f"
		"ein)=&value(applicant*fein)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(templateData)=&value(applicant*salutation)=&value(applicant*gender)=&value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value(applicant*businessName2)=&value(applicant*birthCity)=&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone1_disp)=&value(applicant*phone1)=&value(applicant*businessName)=&value(applicant*phone2_disp)=&value(applicant*phone2)=&value(applicant*email)=&displasy*applicant*email=Y&value(applicant*phone3_disp)=&value(applicant*phone3)=&value(applicant*tradeName)=&value(applicant*preferredChannel)=&valuetextarea1=&sourcetextarea1=%7B%22UIUID%22%3A1%7D&layouttextarea1="
		"null&applicant*uiuid=1&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=N&applicantAccessRight=F&applicantContactNumber=null&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=Building%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Requirements=Plans%20not%20Required&app_spec_info_PLAN_REVIEW_INFORMATION_School_Site_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_BCC_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_homeowner%253F_Value=Y&a"
		"pp_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_licensed_professional%253F_Value=Y&app_spec_info_CONTRACTOR_INFO_Workers_Comp_Insurance_Carrier=&app_spec_info_CONTRACTOR_INFO_Unemployment_Insurance_Agency_Employer_Account_Number=&app_spec_info_CONTRACTOR_INFO_FEIN=&app_spec_info_CONTRACTOR_INFO_Builders_License_Number=&app_spec_info_CONTRACTOR_INFO_Expiration_Date=&app_spec_info_GENERAL_INFORMATION_Building_Type=Other&app_spec_info_BUILDING_DATA_Type_of_Improvement=Addition&app_spec_info_BUILDING_DATA_Estimated_Project_Cost=&app_spec_info_BUILDING_DATA_Buildings_Regulated_by_the_Michigan_Residential_Code=&app_spec_info_PLAN_REVIEW_INFORMATION_Building_Use=E%2C%20Education&app_spec_info_BUILDING_DATA_Construction_Type=4%20-%20Heavy%20Timber&app_spec_info_BUILDING_DATA_Housing_Units=&app_spec_info_BUILDING_DATA_Basement___Existing=&app_spec_info_BUILDING_DATA_Basement___Alterations=&app_spec_info_BUILDING_DATA_Basement___New=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Existing=&app_spec_info_BUILD"
		"ING_DATA_1st_and_2nd_Floor___Alterations=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___New=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Existing=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Alterations=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___New=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Existing=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Alterations=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___New=&app_spec_info_BUILDING_DATA_Total_Aboveground_SQFT=0&app_spec_info_BUILDING_DATA_Total_Basement_SQFT=0&app_spec_info_BUILDING_DATA_Porch%252FDeck%252FGarage_SQFT=&app_spec_info_BUILDING_DATA_Alterations%252C_Repairs_and_Additions=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PAYMENT_METHOD_Payment_Method=Credit%20Card&app_spec_info_PAYMENT_METHOD_Index=&app_spec_info_PAYMENT_METHOD_PCA=&app_spec_info_PAYMENT_METHOD_Object_Code=&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection=&app_spec_in"
		"fo_EQUIPMENT_Rough%252FAdditional_Inspection_Cost=100&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection_Fee=0&app_spec_info_EQUIPMENT_Additional_Inspection=&app_spec_info_EQUIPMENT_Additional_Inspection_Cost=100&app_spec_info_EQUIPMENT_Additional_Inspection_Fee=0&app_spec_info_EQUIPMENT_Certification=&app_spec_info_EQUIPMENT_Certification_Cost=50&app_spec_info_EQUIPMENT_Certification_Fee=0&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&isAppSpecInfoTable=1&expression_portlet_to_be_populate=-2&expression_portlet_to_be_populate=-99999&value(appSpecTable*tableName)=&tableName=ENVIRONMENTAL%20CONTROL%20APPROVAL&tableName=VIOLATIONS&tableName=HISTORICAL%20DATA&tableName=GENERAL%20INFORMATION&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&o"
		"bjectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError=No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20h"
		"elp.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL=%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DBuilding%252FBuilding%252FNA%252FNA%26module%3DBuilding&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea2=&sourcetextarea2=&layouttextarea2=&docTemplateUIUID=2&value(docGroup)=&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)=NONE&documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden"
		"-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-0"
		"0-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20026%2C118%2C121&viewGroup=%2C225&formGroup=%2CcapDetailForm%2CaddressForm%2CownerForm%2CcontactDetailForm%2CapplicantDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22st"
		"rategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%7D%7D&value(refContactNumber)=&expression-columnCount-distinct=0&expression-rowCount-distinct=NaN&expression-columnCount-del=0&expression-rowCount-del=NaN&expression-columnCount-remove=0&expression-rowCount-remove=NaN&expression-columnCount-GENERAL%2BINFORMATION=1&expression-rowCount-GENERAL%2BINFORMATION=0&expression-columnCount-HISTORICAL%2BDATA=2&expression-rowCount-HISTORICAL%2BDATA=0&expression-columnCount-VIOLATIONS=7&expression-rowCount-VIOLATIONS=0&expression-columnCount-ENVIRONMENTAL%2BCONTROL%2BAPPROVAL=5&expression-rowCount-ENVIRONMENTAL%2BCONTROL%2BAPPROVAL=0&accelasubmitbuttonname=Previou"
		"s&callBack=&variableKey=ASI%3A%3ABUILDING%20DATA%3A%3AConstruction%20Type&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A112%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A117%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A118%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22VIOLATIONS%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22HISTORICAL%20DATA%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22GENERAL%20INFORMATION%22%2C%22viewKey2%22%3A%22%22%"
		"2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A121%2C%22viewKey1%22%3A%22Applicant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A125%2C%22viewKey1%22%3A%22Homeowner%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute",
		"LAST");

	lr_think_time(12);
	web_add_header("AppD_Header", "LARA_TC3_08_SubmitApplication_AddNewApplication");
	lr_start_transaction("LARA_TC3_08_SubmitApplication_AddNewApplication");

	web_url("session.do_15", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("getDocListBySingle.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/document/getDocListBySingle.do?mode=getDocSource4SPEAR&module=Building&callbackJs=submitInNewCAP&module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("expression.do_8",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building",
		"Snapshot=t75.inf",
		"Mode=HTML",
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Building&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&expression_portlet_to_be_populate=112&expression_portlet_to_be_populate=-99999&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&value(srTest)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&date(capModel*fileDate)=08%2F28%2F2018&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*c"
		"ompleteDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F28%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel"
		"*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdF"
		"romWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=117&expression_portlet_to_be_populate=-99999&expression_portlet_to_be_populate=-35&validateFlagOriginalValue=&value(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberStart)=617&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value(addressesModel*unitType)=&value(addressesModel*unitEnd)=&value(addressesModel*countryCode)=&value(addressesModel*sourceFlag)=&value(addressesM"
		"odel*addressTypeFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*addressStatus)=A&value(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*streetDirection)=&value(addressesModel*streetName)=AVON&value(addressesModel*streetSuffix)=ST&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitStart)=&value(addressesModel*validateFlag)=&value(addressesModel*city)=LANSING&value(addressesModel*state)=MI&value(addressesModel*zip_disp)={CorrelationParameter}&value(addressesModel*zip)={CorrelationParameter}&value(addressesModel*primaryFlag)=N&value(addressesModel*county)=&value(addressesModel*neighborhood)=&value(addressesModel*addressLine1)=&value(addressesModel*XCoordinator)=&value(addre"
		"ssesModel*YCoordinator)=&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=925341029&value(l1addressnbr)=&value(l1addressnbr1)=925341029&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=local&isAddress=1&isAddressValidation=N&isAddressRequired=N&isShowOwner=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(mailAddress1)=&value(mailAddress2)=&value(mailAddress3)=&value(mailCity)=&value(mailState)=MI"
		"&value(mailZip)=&value(mailCountry)=&value(phone)=&value(templateData)=&value(fax)=&value(email)=&value(primaryOwner)=Y&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=N&isOwnerRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=118&expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(contact*refContactNumber)=&value(contactsModel*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel*accessLevel)=N&value(contactsModel*contactType)=Homeowner&value(contactsModel*relation)=&value(contactsModel*title)=&value(contactsModel*fullName)=&value(contactsModel*addressId)=&value(cont"
		"actsModel*addressLine1)=&value(contactsModel*addressLine2)=&value(contactsModel*addressLine3)=&value(contactsModel*city)=&value(contactsModel*state)=MI&value(contactsModel*zip)=&value(contactsModel*countryCode)=&value(contactsModel*phone3)=&value(contactsModel*fax)=&value(contactsModel*contactOnSRChange)=&value(contactsModel*comment)=&value(maskformat_contactsModel*maskedSsn)=AAA-AA-AAAA&value(contactsModel*maskedSsn)=&value(maskformat_contactsModel*fein)=&value(contactsModel*fein)=&value(contactsModel*tradeName)=&value(contactsModel*userID)=&value(contactsModel*internalUserFlag)=&value(contactsModel*salutation)=&value(contactsModel*gender)=&value(contactsModel*postOfficeBox)=&date(contactsModel*birthDate)=&value(contactsModel*namesuffix)=&value(contactsModel*businessName2)=&value(contactsModel*birthCity)=&value(contactsModel*birthState)=&value(contactsModel*birthRegion)=&value(contactsModel*race)=&date(contactsModel*deceasedDate)=&value(contactsModel*passportNumber)=&value(contactsModel*driverLicenseNbr)=&"
		"value(contactsModel*driverLicenseState)=&value(contactsModel*stateIDNbr)=&value(contactsModel*flag)=N&value(contactsModel*lastName)=&value(contactsModel*firstName)=&value(contactsModel*middleName)=&ACMask_118_9_value(contactsModel*phone1_disp)=&ACMask_118_9_value(contactsModel*phone1)=&value(contactsModel*businessName)=&ACMask_118_10_value(contactsModel*phone2_disp)=&ACMask_118_10_value(contactsModel*phone2)=&value(contactsModel*email)=&value(contactsModel*preferredChannel)=&value(templateGroup)=CAP&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea0=&sourcetextarea0=&layouttextarea0=null&contactsModel*uiuid=0&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isContact=1&contact1ViewID=118&isContact1Validation=N&isContact1Required=N&contact1AccessRight=F&contact1ContactNumbe"
		"r=null&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=121&expression_portlet_to_be_populate=-99999&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*flag)=N&value(applicant*relation)=&value(applicant*title)=&value(applicant*fullName)=&value(applicant*addressId)=&value(applicant*addressLine1)=&value(applicant*addressLine2)=&value(applicant*addressLine3)=&value(applicant*city)=&value(applicant*state)=MI&value(applicant*zip)=&value(applicant*countryCode)=&value(applicant*confirmEmail)=&value(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(maskformat_applicant*maskedSsn)=AAA-AA-AAAA&value(applicant*maskedSsn)=&value(maskformat_applicant*f"
		"ein)=&value(applicant*fein)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(templateData)=&value(applicant*salutation)=&value(applicant*gender)=&value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value(applicant*businessName2)=&value(applicant*birthCity)=&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone1_disp)=&value(applicant*phone1)=&value(applicant*businessName)=&value(applicant*phone2_disp)=&value(applicant*phone2)=&value(applicant*email)=&displasy*applicant*email=Y&value(applicant*phone3_disp)=&value(applicant*phone3)=&value(applicant*tradeName)=&value(applicant*preferredChannel)=&valuetextarea1=&sourcetextarea1=%7B%22UIUID%22%3A1%7D&layouttextarea1="
		"null&applicant*uiuid=1&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&endDate=&chooseItems=&effectiveDate=&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=N&applicantAccessRight=F&applicantContactNumber=null&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=Building%2BPermit%2BGeneral%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Requirements=Plans%20not%20Required&app_spec_info_PLAN_REVIEW_INFORMATION_School_Site_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_BCC_Plan_Review_Number=&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name=undefined&app_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_homeowner%253F_Value=Y&a"
		"pp_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_licensed_professional%253F_Value=Y&app_spec_info_CONTRACTOR_INFO_Workers_Comp_Insurance_Carrier=&app_spec_info_CONTRACTOR_INFO_Unemployment_Insurance_Agency_Employer_Account_Number=&app_spec_info_CONTRACTOR_INFO_FEIN=&app_spec_info_CONTRACTOR_INFO_Builders_License_Number=&app_spec_info_CONTRACTOR_INFO_Expiration_Date=&app_spec_info_GENERAL_INFORMATION_Building_Type=Other&app_spec_info_BUILDING_DATA_Type_of_Improvement=Addition&app_spec_info_BUILDING_DATA_Estimated_Project_Cost=&app_spec_info_BUILDING_DATA_Buildings_Regulated_by_the_Michigan_Residential_Code=&app_spec_info_PLAN_REVIEW_INFORMATION_Building_Use=E%2C%20Education&app_spec_info_BUILDING_DATA_Construction_Type=4%20-%20Heavy%20Timber&app_spec_info_BUILDING_DATA_Housing_Units=&app_spec_info_BUILDING_DATA_Basement___Existing=&app_spec_info_BUILDING_DATA_Basement___Alterations=&app_spec_info_BUILDING_DATA_Basement___New=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Existing=&app_spec_info_BUILD"
		"ING_DATA_1st_and_2nd_Floor___Alterations=&app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___New=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Existing=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Alterations=&app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___New=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Existing=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Alterations=&app_spec_info_BUILDING_DATA_11th_Floor_and_Above___New=&app_spec_info_BUILDING_DATA_Total_Aboveground_SQFT=0&app_spec_info_BUILDING_DATA_Total_Basement_SQFT=0&app_spec_info_BUILDING_DATA_Porch%252FDeck%252FGarage_SQFT=&app_spec_info_BUILDING_DATA_Alterations%252C_Repairs_and_Additions=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PERMIT_DATES_Permit_Expiration_Date=&app_spec_info_PAYMENT_METHOD_Payment_Method=Credit%20Card&app_spec_info_PAYMENT_METHOD_Index=&app_spec_info_PAYMENT_METHOD_PCA=&app_spec_info_PAYMENT_METHOD_Object_Code=&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection=&app_spec_in"
		"fo_EQUIPMENT_Rough%252FAdditional_Inspection_Cost=100&app_spec_info_EQUIPMENT_Rough%252FAdditional_Inspection_Fee=0&app_spec_info_EQUIPMENT_Additional_Inspection=&app_spec_info_EQUIPMENT_Additional_Inspection_Cost=100&app_spec_info_EQUIPMENT_Additional_Inspection_Fee=0&app_spec_info_EQUIPMENT_Certification=&app_spec_info_EQUIPMENT_Certification_Cost=50&app_spec_info_EQUIPMENT_Certification_Fee=0&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&isAppSpecInfoTable=1&expression_portlet_to_be_populate=-2&expression_portlet_to_be_populate=-99999&value(appSpecTable*tableName)=&tableName=ENVIRONMENTAL%20CONTROL%20APPROVAL&tableName=VIOLATIONS&tableName=HISTORICAL%20DATA&tableName=GENERAL%20INFORMATION&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&o"
		"bjectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError=No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20h"
		"elp.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL=%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DBuilding%252FBuilding%252FNA%252FNA%26module%3DBuilding&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea2=&sourcetextarea2=&layouttextarea2=&docTemplateUIUID=2&value(docGroup)=&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)=NONE&documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden"
		"-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-0"
		"0-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20026%2C118%2C121&viewGroup=%2C225&formGroup=%2CcapDetailForm%2CaddressForm%2CownerForm%2CcontactDetailForm%2CapplicantDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22st"
		"rategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%7D%7D&value(refContactNumber)=&expression-columnCount-distinct=0&expression-rowCount-distinct=NaN&expression-columnCount-del=0&expression-rowCount-del=NaN&expression-columnCount-remove=0&expression-rowCount-remove=NaN&expression-columnCount-GENERAL%2BINFORMATION=1&expression-rowCount-GENERAL%2BINFORMATION=0&expression-columnCount-HISTORICAL%2BDATA=2&expression-rowCount-HISTORICAL%2BDATA=0&expression-columnCount-VIOLATIONS=7&expression-rowCount-VIOLATIONS=0&expression-columnCount-ENVIRONMENTAL%2BCONTROL%2BAPPROVAL=5&expression-rowCount-ENVIRONMENTAL%2BCONTROL%2BAPPROVAL=0&accelasubmitbuttonname=Previou"
		"s&callBack=window.expression.__doExpressionSubmitCallBack(0)&variableKey=onSubmit&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A112%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A117%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A118%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22VIOLATIONS%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22HISTORICAL%20DATA%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22GENERAL%20INFORMATION%22%2C%22viewKey2%22%3"
		"A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A121%2C%22viewKey1%22%3A%22Applicant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A125%2C%22viewKey1%22%3A%22Homeowner%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute",
		"LAST");

	web_url("session.do_16", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_17", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
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
		"Snapshot=t78.inf",
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
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=value(paLicenseId)", "Value=", "ENDITEM",
		"Name=isRefreshPartialCondition", "Value=N", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=112", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM",
		"Name=expressionPageType", "Value=SPEAR", "ENDITEM",
		"Name=expression_page_reload_after_submit_or_validate_failed", "Value=true", "ENDITEM",
		"Name=value(mode)", "Value=add", "ENDITEM",
		"Name=value(srTest)", "Value=", "ENDITEM",
		"Name=value(capType)", "Value=Building/Building/NA/NA", "ENDITEM",
		"Name=value(capID)", "Value=", "ENDITEM",
		"Name=value(capDetailModel*shortNotes)", "Value=", "ENDITEM",
		"Name=date(capModel*fileDate)", "Value=08/28/2018", "ENDITEM",
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
		"Name=value(capModel*capStatus)", "Value=Received", "ENDITEM",
		"Name=value(capType)", "Value=Building/Building/NA/NA", "ENDITEM",
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
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
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
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
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
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=117", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-35", "ENDITEM",
		"Name=validateFlagOriginalValue", "Value=", "ENDITEM",
		"Name=value(addressesModel*addressType)", "Value=", "ENDITEM",
		"Name=value(addressesModel*refAddressType)", "Value=", "ENDITEM",
		"Name=value(addressesModel*houseNumberStart)", "Value=617", "ENDITEM",
		"Name=value(addressesModel*houseNumberAlphaStart)", "Value=", "ENDITEM",
		"Name=value(addressesModel*houseNumberAlphaEnd)", "Value=", "ENDITEM",
		"Name=value(addressesModel*levelPrefix)", "Value=", "ENDITEM",
		"Name=value(addressesModel*levelNumberStart)", "Value=", "ENDITEM",
		"Name=value(addressesModel*levelNumberEnd)", "Value=", "ENDITEM",
		"Name=value(addressesModel*houseFractionStart)", "Value=", "ENDITEM",
		"Name=value(addressesModel*houseNumberEnd)", "Value=", "ENDITEM",
		"Name=value(addressesModel*houseFractionEnd)", "Value=", "ENDITEM",
		"Name=value(addressesModel*streetPrefix)", "Value=", "ENDITEM",
		"Name=value(addressesModel*unitType)", "Value=", "ENDITEM",
		"Name=value(addressesModel*unitEnd)", "Value=", "ENDITEM",
		"Name=value(addressesModel*countryCode)", "Value=", "ENDITEM",
		"Name=value(addressesModel*sourceFlag)", "Value=", "ENDITEM",
		"Name=value(addressesModel*addressTypeFlag)", "Value=", "ENDITEM",
		"Name=value(addressesModel*distance)", "Value=", "ENDITEM",
		"Name=value(addressesModel*secondaryRoad)", "Value=", "ENDITEM",
		"Name=value(addressesModel*secondaryRoadNumber)", "Value=", "ENDITEM",
		"Name=value(addressesModel*inspectionDistrictPrefix)", "Value=", "ENDITEM",
		"Name=value(addressesModel*inspectionDistrict)", "Value=", "ENDITEM",
		"Name=value(addressesModel*neighberhoodPrefix)", "Value=", "ENDITEM",
		"Name=value(addressesModel*addressStatus)", "Value=A", "ENDITEM",
		"Name=value(addressesModel*addressDescription)", "Value=", "ENDITEM",
		"Name=value(addressesModel*fullAddress)", "Value=", "ENDITEM",
		"Name=value(addressesModel*addressLine2)", "Value=", "ENDITEM",
		"Name=value(templateData)", "Value=", "ENDITEM",
		"Name=value(addressesModel*streetDirection)", "Value=", "ENDITEM",
		"Name=value(addressesModel*streetName)", "Value=AVON", "ENDITEM",
		"Name=value(addressesModel*streetSuffix)", "Value=ST", "ENDITEM",
		"Name=value(addressesModel*streetSuffixdirection)", "Value=", "ENDITEM",
		"Name=value(addressesModel*unitStart)", "Value=", "ENDITEM",
		"Name=value(addressesModel*validateFlag)", "Value=", "ENDITEM",
		"Name=value(addressesModel*city)", "Value=LANSING", "ENDITEM",
		"Name=value(addressesModel*state)", "Value=MI", "ENDITEM",
		"Name=value(addressesModel*zip_disp)", "Value={CorrelationParameter}", "ENDITEM",
		"Name=value(addressesModel*zip)", "Value={CorrelationParameter}", "ENDITEM",
		"Name=value(addressesModel*primaryFlag)", "Value=N", "ENDITEM",
		"Name=value(addressesModel*county)", "Value=", "ENDITEM",
		"Name=value(addressesModel*neighborhood)", "Value=", "ENDITEM",
		"Name=value(addressesModel*addressLine1)", "Value=", "ENDITEM",
		"Name=value(addressesModel*XCoordinator)", "Value=", "ENDITEM",
		"Name=value(addressesModel*YCoordinator)", "Value=", "ENDITEM",
		"Name=value(mode)", "Value=New", "ENDITEM",
		"Name=value(addressesmodel*UID)", "Value=", "ENDITEM",
		"Name=value(addressesModel*refAddressId)", "Value=925341029", "ENDITEM",
		"Name=value(l1addressnbr)", "Value=", "ENDITEM",
		"Name=value(l1addressnbr1)", "Value=925341029", "ENDITEM",
		"Name=value(addressUID1)", "Value=", "ENDITEM",
		"Name=value(addressUID)", "Value=", "ENDITEM",
		"Name=addressViewID", "Value=117", "ENDITEM",
		"Name=value(addressSearchType)", "Value=local", "ENDITEM",
		"Name=isAddress", "Value=1", "ENDITEM",
		"Name=isAddressValidation", "Value=N", "ENDITEM",
		"Name=isAddressRequired", "Value=N", "ENDITEM",
		"Name=isShowOwner", "Value=Y", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=isGeneralCAP", "Value=Y", "ENDITEM",
		"Name=objectName", "Value=", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value=117", "ENDITEM",
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
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
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
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
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=value(mode)", "Value=New", "ENDITEM",
		"Name=value(ownerFullName)", "Value=", "ENDITEM",
		"Name=value(mailAddress1)", "Value=", "ENDITEM",
		"Name=value(mailAddress2)", "Value=", "ENDITEM",
		"Name=value(mailAddress3)", "Value=", "ENDITEM",
		"Name=value(mailCity)", "Value=", "ENDITEM",
		"Name=value(mailState)", "Value=MI", "ENDITEM",
		"Name=value(mailZip)", "Value=", "ENDITEM",
		"Name=value(mailCountry)", "Value=", "ENDITEM",
		"Name=value(phone)", "Value=", "ENDITEM",
		"Name=value(templateData)", "Value=", "ENDITEM",
		"Name=value(fax)", "Value=", "ENDITEM",
		"Name=value(email)", "Value=", "ENDITEM",
		"Name=value(primaryOwner)", "Value=Y", "ENDITEM",
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
		"Name=isOwnerValidation", "Value=N", "ENDITEM",
		"Name=isOwnerRequired", "Value=N", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=isGeneralCAP", "Value=Y", "ENDITEM",
		"Name=objectName", "Value=", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value=118", "ENDITEM",
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=118", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM",
		"Name=value(mode)", "Value=newsave", "ENDITEM",
		"Name=value(contactSeqNumber)", "Value=", "ENDITEM",
		"Name=value(contact*refContactNumber)", "Value=", "ENDITEM",
		"Name=value(contactsModel*refContactNumber)", "Value=", "ENDITEM",
		"Name=value(serviceProviderCode)", "Value=", "ENDITEM",
		"Name=value(contactsModel*contactType_cur)", "Value=Homeowner", "ENDITEM",
		"Name=value(contactsModel*contactType)", "Value=Homeowner", "ENDITEM",
		"Name=value(contactsModel*relation)", "Value=", "ENDITEM",
		"Name=value(contactsModel*title)", "Value=", "ENDITEM",
		"Name=value(contactsModel*fullName)", "Value=", "ENDITEM",
		"Name=value(contactsModel*addressId)", "Value=", "ENDITEM",
		"Name=value(contactsModel*addressLine1)", "Value=", "ENDITEM",
		"Name=value(contactsModel*addressLine2)", "Value=", "ENDITEM",
		"Name=value(contactsModel*addressLine3)", "Value=", "ENDITEM",
		"Name=value(contactsModel*city)", "Value=", "ENDITEM",
		"Name=value(contactsModel*state)", "Value=MI", "ENDITEM",
		"Name=value(contactsModel*zip)", "Value=", "ENDITEM",
		"Name=value(contactsModel*countryCode)", "Value=", "ENDITEM",
		"Name=value(contactsModel*phone3)", "Value=", "ENDITEM",
		"Name=value(contactsModel*fax)", "Value=", "ENDITEM",
		"Name=value(contactsModel*contactOnSRChange)", "Value=", "ENDITEM",
		"Name=value(contactsModel*comment)", "Value=", "ENDITEM",
		"Name=value(maskformat_contactsModel*maskedSsn)", "Value=AAA-AA-AAAA", "ENDITEM",
		"Name=value(contactsModel*maskedSsn)", "Value=", "ENDITEM",
		"Name=value(maskformat_contactsModel*fein)", "Value=", "ENDITEM",
		"Name=value(contactsModel*fein)", "Value=", "ENDITEM",
		"Name=value(contactsModel*tradeName)", "Value=", "ENDITEM",
		"Name=value(contactsModel*userID)", "Value=", "ENDITEM",
		"Name=value(contactsModel*internalUserFlag)", "Value=", "ENDITEM",
		"Name=value(contactsModel*salutation)", "Value=", "ENDITEM",
		"Name=value(contactsModel*gender)", "Value=", "ENDITEM",
		"Name=value(contactsModel*postOfficeBox)", "Value=", "ENDITEM",
		"Name=date(contactsModel*birthDate)", "Value=", "ENDITEM",
		"Name=value(contactsModel*namesuffix)", "Value=", "ENDITEM",
		"Name=value(contactsModel*businessName2)", "Value=", "ENDITEM",
		"Name=value(contactsModel*birthCity)", "Value=", "ENDITEM",
		"Name=value(contactsModel*birthState)", "Value=", "ENDITEM",
		"Name=value(contactsModel*birthRegion)", "Value=", "ENDITEM",
		"Name=value(contactsModel*race)", "Value=", "ENDITEM",
		"Name=date(contactsModel*deceasedDate)", "Value=", "ENDITEM",
		"Name=value(contactsModel*passportNumber)", "Value=", "ENDITEM",
		"Name=value(contactsModel*driverLicenseNbr)", "Value=", "ENDITEM",
		"Name=value(contactsModel*driverLicenseState)", "Value=", "ENDITEM",
		"Name=value(contactsModel*stateIDNbr)", "Value=", "ENDITEM",
		"Name=value(contactsModel*flag)", "Value=N", "ENDITEM",
		"Name=value(contactsModel*lastName)", "Value=", "ENDITEM",
		"Name=value(contactsModel*firstName)", "Value=", "ENDITEM",
		"Name=value(contactsModel*middleName)", "Value=", "ENDITEM",
		"Name=ACMask_118_9_value(contactsModel*phone1_disp)", "Value=", "ENDITEM",
		"Name=ACMask_118_9_value(contactsModel*phone1)", "Value=", "ENDITEM",
		"Name=value(contactsModel*businessName)", "Value=", "ENDITEM",
		"Name=ACMask_118_10_value(contactsModel*phone2_disp)", "Value=", "ENDITEM",
		"Name=ACMask_118_10_value(contactsModel*phone2)", "Value=", "ENDITEM",
		"Name=value(contactsModel*email)", "Value=", "ENDITEM",
		"Name=value(contactsModel*preferredChannel)", "Value=", "ENDITEM",
		"Name=value(templateGroup)", "Value=CAP", "ENDITEM",
		"Name=value(serviceProviderCode)", "Value=", "ENDITEM",
		"Name=value(ID1)", "Value=", "ENDITEM",
		"Name=value(ID2)", "Value=", "ENDITEM",
		"Name=value(ID3)", "Value=", "ENDITEM",
		"Name=value(mode)", "Value=New", "ENDITEM",
		"Name=value(modePro)", "Value=add", "ENDITEM",
		"Name=valuetextarea0", "Value=", "ENDITEM",
		"Name=sourcetextarea0", "Value=", "ENDITEM",
		"Name=layouttextarea0", "Value=null", "ENDITEM",
		"Name=contactsModel*uiuid", "Value=0", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=isGeneralCAP", "Value=Y", "ENDITEM",
		"Name=objectName", "Value=", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value=118", "ENDITEM",
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=endDate", "Value=", "ENDITEM",
		"Name=chooseItems", "Value=", "ENDITEM",
		"Name=effectiveDate", "Value=", "ENDITEM",
		"Name=isContact", "Value=1", "ENDITEM",
		"Name=contact1ViewID", "Value=118", "ENDITEM",
		"Name=isContact1Validation", "Value=N", "ENDITEM",
		"Name=isContact1Required", "Value=N", "ENDITEM",
		"Name=contact1AccessRight", "Value=F", "ENDITEM",
		"Name=contact1ContactNumber", "Value=null", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=isGeneralCAP", "Value=Y", "ENDITEM",
		"Name=objectName", "Value=", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value=121", "ENDITEM",
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=121", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM",
		"Name=value(mode)", "Value=newsave", "ENDITEM",
		"Name=value(contactSeqNumber)", "Value=", "ENDITEM",
		"Name=value(refContactNumber)", "Value=", "ENDITEM",
		"Name=value(applicant*refContactNumber)", "Value=", "ENDITEM",
		"Name=value(serviceProviderCode)", "Value=", "ENDITEM",
		"Name=value(applicant*contactType_cur)", "Value=Applicant", "ENDITEM",
		"Name=value(applicant*contactType)", "Value=Applicant", "ENDITEM",
		"Name=value(applicant*flag)", "Value=N", "ENDITEM",
		"Name=value(applicant*relation)", "Value=", "ENDITEM",
		"Name=value(applicant*title)", "Value=", "ENDITEM",
		"Name=value(applicant*fullName)", "Value=", "ENDITEM",
		"Name=value(applicant*addressId)", "Value=", "ENDITEM",
		"Name=value(applicant*addressLine1)", "Value=", "ENDITEM",
		"Name=value(applicant*addressLine2)", "Value=", "ENDITEM",
		"Name=value(applicant*addressLine3)", "Value=", "ENDITEM",
		"Name=value(applicant*city)", "Value=", "ENDITEM",
		"Name=value(applicant*state)", "Value=MI", "ENDITEM",
		"Name=value(applicant*zip)", "Value=", "ENDITEM",
		"Name=value(applicant*countryCode)", "Value=", "ENDITEM",
		"Name=value(applicant*confirmEmail)", "Value=", "ENDITEM",
		"Name=value(applicant*fax)", "Value=", "ENDITEM",
		"Name=value(applicant*contactOnSRChange)", "Value=", "ENDITEM",
		"Name=value(applicant*comment)", "Value=", "ENDITEM",
		"Name=value(maskformat_applicant*maskedSsn)", "Value=AAA-AA-AAAA", "ENDITEM",
		"Name=value(applicant*maskedSsn)", "Value=", "ENDITEM",
		"Name=value(maskformat_applicant*fein)", "Value=", "ENDITEM",
		"Name=value(applicant*fein)", "Value=", "ENDITEM",
		"Name=value(applicant*userID)", "Value=", "ENDITEM",
		"Name=value(applicant*internalUserFlag)", "Value=", "ENDITEM",
		"Name=value(templateData)", "Value=", "ENDITEM",
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
		"Name=value(applicant*firstName)", "Value=", "ENDITEM",
		"Name=value(applicant*middleName)", "Value=", "ENDITEM",
		"Name=value(applicant*lastName)", "Value=", "ENDITEM",
		"Name=value(applicant*phone1_disp)", "Value=", "ENDITEM",
		"Name=value(applicant*phone1)", "Value=", "ENDITEM",
		"Name=value(applicant*businessName)", "Value=", "ENDITEM",
		"Name=value(applicant*phone2_disp)", "Value=", "ENDITEM",
		"Name=value(applicant*phone2)", "Value=", "ENDITEM",
		"Name=value(applicant*email)", "Value=", "ENDITEM",
		"Name=displasy*applicant*email", "Value=Y", "ENDITEM",
		"Name=value(applicant*phone3_disp)", "Value=", "ENDITEM",
		"Name=value(applicant*phone3)", "Value=", "ENDITEM",
		"Name=value(applicant*tradeName)", "Value=", "ENDITEM",
		"Name=value(applicant*preferredChannel)", "Value=", "ENDITEM",
		"Name=valuetextarea1", "Value=", "ENDITEM",
		"Name=sourcetextarea1", "Value={\"UIUID\":1}", "ENDITEM",
		"Name=layouttextarea1", "Value=null", "ENDITEM",
		"Name=applicant*uiuid", "Value=1", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=isGeneralCAP", "Value=Y", "ENDITEM",
		"Name=objectName", "Value=", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value=121", "ENDITEM",
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=endDate", "Value=", "ENDITEM",
		"Name=chooseItems", "Value=", "ENDITEM",
		"Name=effectiveDate", "Value=", "ENDITEM",
		"Name=isApplicant", "Value=1", "ENDITEM",
		"Name=applicantViewID", "Value=121", "ENDITEM",
		"Name=isApplicantValidation", "Value=N", "ENDITEM",
		"Name=isApplicantRequired", "Value=N", "ENDITEM",
		"Name=applicantAccessRight", "Value=F", "ENDITEM",
		"Name=applicantContactNumber", "Value=null", "ENDITEM",
		"Name=isAppSpecInfo", "Value=1", "ENDITEM",
		"Name=value(capID*ID1)", "Value=", "ENDITEM",
		"Name=value(capID*ID2)", "Value=", "ENDITEM",
		"Name=value(capID*ID3)", "Value=", "ENDITEM",
		"Name=singleModeName", "Value=Building+Permit+General+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_Building+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_BUILD", "ENDITEM",
		"Name=app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Requirements", "Value=Plans not Required", "ENDITEM",
		"Name=app_spec_info_PLAN_REVIEW_INFORMATION_School_Site_Plan_Review_Number", "Value=", "ENDITEM",
		"Name=app_spec_info_PLAN_REVIEW_INFORMATION_BCC_Plan_Review_Number", "Value=", "ENDITEM",
		"Name=app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name", "Value=undefined", "ENDITEM",
		"Name=app_spec_info_PLAN_REVIEW_INFORMATION_Plan_Review_Name", "Value=undefined", "ENDITEM",
		"Name=app_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_homeowner%3F_Value", "Value=Y", "ENDITEM",
		"Name=app_spec_info_GENERAL_INFORMATION_Are_you_applying_as_a_licensed_professional%3F_Value", "Value=Y", "ENDITEM",
		"Name=app_spec_info_CONTRACTOR_INFO_Workers_Comp_Insurance_Carrier", "Value=", "ENDITEM",
		"Name=app_spec_info_CONTRACTOR_INFO_Unemployment_Insurance_Agency_Employer_Account_Number", "Value=", "ENDITEM",
		"Name=app_spec_info_CONTRACTOR_INFO_FEIN", "Value=", "ENDITEM",
		"Name=app_spec_info_CONTRACTOR_INFO_Builders_License_Number", "Value=", "ENDITEM",
		"Name=app_spec_info_CONTRACTOR_INFO_Expiration_Date", "Value=", "ENDITEM",
		"Name=app_spec_info_GENERAL_INFORMATION_Building_Type", "Value=Other", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_Type_of_Improvement", "Value=Addition", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_Estimated_Project_Cost", "Value=", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_Buildings_Regulated_by_the_Michigan_Residential_Code", "Value=", "ENDITEM",
		"Name=app_spec_info_PLAN_REVIEW_INFORMATION_Building_Use", "Value=E, Education", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_Construction_Type", "Value=4 - Heavy Timber", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_Housing_Units", "Value=", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_Basement___Existing", "Value=", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_Basement___Alterations", "Value=", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_Basement___New", "Value=", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Existing", "Value=", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___Alterations", "Value=", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_1st_and_2nd_Floor___New", "Value=", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Existing", "Value=", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___Alterations", "Value=", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_3rd_and_10th_Floor___New", "Value=", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Existing", "Value=", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_11th_Floor_and_Above___Alterations", "Value=", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_11th_Floor_and_Above___New", "Value=", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_Total_Aboveground_SQFT", "Value=0", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_Total_Basement_SQFT", "Value=0", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_Porch%2FDeck%2FGarage_SQFT", "Value=", "ENDITEM",
		"Name=app_spec_info_BUILDING_DATA_Alterations%2C_Repairs_and_Additions", "Value=", "ENDITEM",
		"Name=app_spec_info_PERMIT_DATES_Permit_Expiration_Date", "Value=", "ENDITEM",
		"Name=app_spec_info_PERMIT_DATES_Permit_Expiration_Date", "Value=", "ENDITEM",
		"Name=app_spec_info_PAYMENT_METHOD_Payment_Method", "Value=Credit Card", "ENDITEM",
		"Name=app_spec_info_PAYMENT_METHOD_Index", "Value=", "ENDITEM",
		"Name=app_spec_info_PAYMENT_METHOD_PCA", "Value=", "ENDITEM",
		"Name=app_spec_info_PAYMENT_METHOD_Object_Code", "Value=", "ENDITEM",
		"Name=app_spec_info_EQUIPMENT_Rough%2FAdditional_Inspection", "Value=", "ENDITEM",
		"Name=app_spec_info_EQUIPMENT_Rough%2FAdditional_Inspection_Cost", "Value=100", "ENDITEM",
		"Name=app_spec_info_EQUIPMENT_Rough%2FAdditional_Inspection_Fee", "Value=0", "ENDITEM",
		"Name=app_spec_info_EQUIPMENT_Additional_Inspection", "Value=", "ENDITEM",
		"Name=app_spec_info_EQUIPMENT_Additional_Inspection_Cost", "Value=100", "ENDITEM",
		"Name=app_spec_info_EQUIPMENT_Additional_Inspection_Fee", "Value=0", "ENDITEM",
		"Name=app_spec_info_EQUIPMENT_Certification", "Value=", "ENDITEM",
		"Name=app_spec_info_EQUIPMENT_Certification_Cost", "Value=50", "ENDITEM",
		"Name=app_spec_info_EQUIPMENT_Certification_Fee", "Value=0", "ENDITEM",
		"Name=value(mode)", "Value=New", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-1", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM",
		"Name=is_ASI_fields_displayed", "Value=true", "ENDITEM",
		"Name=isAppSpecInfoTable", "Value=1", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-2", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM",
		"Name=value(appSpecTable*tableName)", "Value=", "ENDITEM",
		"Name=tableName", "Value=ENVIRONMENTAL CONTROL APPROVAL", "ENDITEM",
		"Name=tableName", "Value=VIOLATIONS", "ENDITEM",
		"Name=tableName", "Value=HISTORICAL DATA", "ENDITEM",
		"Name=tableName", "Value=GENERAL INFORMATION", "ENDITEM",
		"Name=value(entityType)", "Value=CAP", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=isGeneralCAP", "Value=Y", "ENDITEM",
		"Name=objectName", "Value=", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value=121", "ENDITEM",
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=isGeneralCAP", "Value=Y", "ENDITEM",
		"Name=objectName", "Value=", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value=121", "ENDITEM",
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
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
		"Name=virtualFoldersURL", "Value=/portlets/document/documentForm.do?mode=getVirtualFolders&capType=Building%2FBuilding%2FNA%2FNA&module=Building", "ENDITEM",
		"Name=required", "Value=* Required", "ENDITEM",
		"Name=staticRequiredDocTypesMessage", "Value=", "ENDITEM",
		"Name=edmsAdsStr", "Value=", "ENDITEM",
		"Name=isCloneSingle", "Value=", "ENDITEM",
		"Name=fromPartialCap", "Value=", "ENDITEM",
		"Name=isPendingCap", "Value=", "ENDITEM",
		"Name=valuetextarea2", "Value=", "ENDITEM",
		"Name=sourcetextarea2", "Value=", "ENDITEM",
		"Name=layouttextarea2", "Value=", "ENDITEM",
		"Name=docTemplateUIUID", "Value=2", "ENDITEM",
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
		"Name=upload-00-file", "Value=", "File=yes", "ENDITEM",
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
		"Name=upload-00-file", "Value=", "File=yes", "ENDITEM",
		"Name=upload-00-docCategory", "Value=", "ENDITEM",
		"Name=upload-00-docDesc", "Value=", "ENDITEM",
		"Name=isDocument", "Value=1", "ENDITEM",
		"Name=isDocRequired", "Value=N", "ENDITEM",
		"Name=editPar", "Value=2112", "ENDITEM",
		"Name=allViewIDGroup", "Value=,225,117,20026,118,121", "ENDITEM",
		"Name=viewGroup", "Value=,225", "ENDITEM",
		"Name=formGroup", "Value=,capDetailForm,addressForm,ownerForm,contactDetailForm,applicantDetailForm", "ENDITEM",
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
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(applicant*fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(contactsModel*fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(contactsModel*maskedSsn)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"},\"value(applicant*maskedSsn)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"}}}", "ENDITEM",
		"LAST");

	web_submit_data("empty.jsp_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_18", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_TC3_08_SubmitApplication_AddNewApplication",2);
	web_add_header("AppD_Header", "LARA_TC3_08_SubmitApplication_ViewSummary");
	lr_start_transaction("LARA_TC3_08_SubmitApplication_ViewSummary");

	web_url("session.do_19", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_20", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("CapTabSummary.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do",
		"Snapshot=t83.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("ajax.do_4",
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Snapshot=t84.inf",
		"Mode=HTML",
		"ITEMDATA",
		"LAST");

	web_submit_data("empty.jsp_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Snapshot=t86.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("search.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/x-json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Snapshot=t87.inf",
		"Mode=HTML",
		"Body=categoryName=Portlet - Expression",
		"LAST");

	web_custom_request("tabRecordCount.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Snapshot=t88.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("expression.do_9",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Snapshot=t89.inf",
		"Mode=HTML",
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22VIOLATIONS%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22HISTORICAL%20DATA%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22GENERAL%20INFORMATION%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=TABSUMMARY&isReload=false&module=Building&capType=Building%2FBuilding%2FNA%2FNA",
		"LAST");

	web_custom_request("expression.do_10",
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Snapshot=t90.inf",
		"Mode=HTML",
		body_variable_1,
		"LAST");

	lr_end_transaction("LARA_TC3_08_SubmitApplication_ViewSummary",2);

	lr_think_time(10);
    web_add_header("AppD_Header", "LARA_TC3_09_Record_ClickContact");
	lr_start_transaction("LARA_TC3_09_Record_ClickContact");

	web_url("session.do_21", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("session.do_22",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Snapshot=t92.inf",
		"Mode=HTML",
		"LAST");

 
	web_reg_save_param_attrib(
		"ParamName=TRANSACTION_TOKEN_KEY_FOR_CONTACTLISTACTIONFORM",
		"TagName=input",
		"Extract=value",
		"Name=TRANSACTION_TOKEN_KEY_FOR_CONTACTLISTACTIONFORM",
		"Type=hidden",
		"SEARCH_FILTERS",
		"RequestUrl=*/contactList.do*",
		"LAST");

	web_url("contactList.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3={Param_ID3}&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true",
		"Snapshot=t93.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("empty.jsp_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building",
		"Snapshot=t95.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_4",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building",
		"Snapshot=t96.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("LARA_TC3_09_Record_ClickContact",2);
	web_add_header("AppD_Header", "LARA_TC3_10_Record_Contact_LookUpContact");
	lr_start_transaction("LARA_TC3_10_Record_Contact_LookUpContact");

	web_url("session.do_23",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building",
		"Snapshot=t97.inf",
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
		"URL=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("ajax.do_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_10", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("regionalSyncMask.do_11", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("LARA_TC3_10_Record_Contact_LookUpContact",2);

	lr_think_time(4);
	web_add_header("AppD_Header", "LARA_TC3_11_Record_Contact_LookUpContact_SearchContact");
	lr_start_transaction("LARA_TC3_11_Record_Contact_LookUpContact_SearchContact");

	web_url("session.do_24",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building",
		"Snapshot=t105.inf",
		"Mode=HTML",
		"LAST");

 
	web_reg_save_param_ex(
		"ParamName=_hiddenCheckbox",
		"LB=st_id-1\",\"name\":\"chk_contactid\",\"required\":false,\"elementId\":\"chk_contactid\",\"title\":\"menubar.common.select.label\",\"disValue\":\"",
		"RB=\",",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/refContactListForCap.do*",
		"LAST");

 
	web_reg_save_param_ex(
		"ParamName=_hiddenCheckbox_1",
		"LB=st_id-2\",\"name\":\"chk_contactid\",\"required\":false,\"elementId\":\"chk_contactid\",\"title\":\"menubar.common.select.label\",\"disValue\":\"",
		"RB=\",",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/refContactListForCap.do*",
		"LAST");

 
	web_reg_save_param_ex(
		"ParamName=_hiddenCheckbox_2",
		"LB=st_id-4\",\"name\":\"chk_contactid\",\"required\":false,\"elementId\":\"chk_contactid\",\"title\":\"menubar.common.select.label\",\"disValue\":\"",
		"RB=\",",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/refContactListForCap.do*",
		"LAST");

 
	web_reg_save_param_ex(
		"ParamName=chk_contactid_hiddenCheckbox",
		"LB=st_id-0\",\"name\":\"chk_contactid\",\"required\":false,\"elementId\":\"chk_contactid\",\"title\":\"menubar.common.select.label\",\"disValue\":\"",
		"RB=\",",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/refContactListForCap.do*",
		"LAST");

	web_submit_data("refContactListForCap.do_2",
		"Action=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building",
		"Snapshot=t106.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP", "Value=8e8a548703796f9332df265bb05c846d", "ENDITEM",
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
		"Name=CurrentViewID", "Value={CurrentViewID}", "ENDITEM",
		"Name=exceptionLogID", "Value=", "ENDITEM",
		"Name=generalCAPSearch", "Value=", "ENDITEM",
		"Name=value(portlet_soundex)", "Value=off", "ENDITEM",
		"Name=objectName", "Value=", "ENDITEM",
		"Name=CheckBoxName", "Value=", "ENDITEM",
		"Name=MaxNumber", "Value=", "ENDITEM",
		"Name=ExportFileType", "Value=print", "ENDITEM",
		"Name=CurrentViewID", "Value={CurrentViewID}", "ENDITEM",
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
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
		"Name=value(lastName)", "Value=cesar", "ENDITEM",
		"Name=value(fullName)", "Value=", "ENDITEM",
		"Name=value(addressLine1)", "Value=", "ENDITEM",
		"Name=value(addressLine2)", "Value=", "ENDITEM",
		"Name=value(addressLine3)", "Value=", "ENDITEM",
		"Name=value(city)", "Value=", "ENDITEM",
		"Name=value(zip)", "Value=", "ENDITEM",
		"Name=value(countryCode)", "Value=", "ENDITEM",
		"Name=value(phone3)", "Value=", "ENDITEM",
		"Name=value(fax)", "Value=", "ENDITEM",
		"Name=value(auditStatus)", "Value=", "ENDITEM",
		"Name=value(tradeName)", "Value=", "ENDITEM",
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
		"Name=value(contactAddressModel*state)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*validateFlag)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*phone)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*fax)", "Value=", "ENDITEM",
		"Name=value(genericTemplateAttribute*fieldName)", "Value=", "ENDITEM",
		"Name=value(genericTemplateAttribute*defaultValue)", "Value=", "ENDITEM",
		"Name=value(genericTemplateTableValue*fieldName)", "Value=", "ENDITEM",
		"Name=value(genericTemplateTableValue*defaultValue)", "Value=", "ENDITEM",
		"Name=value(firstName)", "Value=", "ENDITEM",
		"Name=value(middleName)", "Value=", "ENDITEM",
		"Name=ACMask_{CurrentViewID}_2_value(phone1_disp)", "Value=", "ENDITEM",
		"Name=ACMask_{CurrentViewID}_2_value(phone1)", "Value=", "ENDITEM",
		"Name=value(businessName)", "Value=", "ENDITEM",
		"Name=ACMask_{CurrentViewID}_5_value(phone2_disp)", "Value=", "ENDITEM",
		"Name=ACMask_{CurrentViewID}_5_value(phone2)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*addressLine1)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*city)", "Value=", "ENDITEM",
		"Name=value(state)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*zip_disp)", "Value=", "ENDITEM",
		"Name=value(contactAddressModel*zip)", "Value=", "ENDITEM",
		"Name=value(email)", "Value=", "ENDITEM",
		"Name=value(preferredChannel)", "Value=", "ENDITEM",
		"Name=value(socialSecurityNumber)", "Value=", "ENDITEM",
		"Name=value(maskformat_socialSecurityNumber)", "Value=AAA-AA-AAAA", "ENDITEM",
		"Name=value(fein)", "Value=", "ENDITEM",
		"Name=value(maskformat_fein)", "Value=", "ENDITEM",
		"Name=date(birthDate)", "Value=", "ENDITEM",
		"Name=date(endBirthDate)", "Value=", "ENDITEM",
		"Name=value(templateGroup)", "Value=G3CONTACT", "ENDITEM",
		"Name=value(contactSeqNumber)", "Value=", "ENDITEM",
		"Name=valuetextarea3", "Value=", "ENDITEM",
		"Name=sourcetextarea3", "Value=", "ENDITEM",
		"Name=layouttextarea3", "Value=", "ENDITEM",
		"Name=uiuid", "Value=3", "ENDITEM",
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(socialSecurityNumber)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"}}}", "ENDITEM",
		"LAST");

	web_submit_data("empty.jsp_10", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_5",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t108.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_6",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t109.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("LARA_TC3_11_Record_Contact_LookUpContact_SearchContact",2);
	web_add_header("AppD_Header", "LARA_TC3_12_Record_Contact_LookUpContact_SelectContact");
	lr_start_transaction("LARA_TC3_12_Record_Contact_LookUpContact_SelectContact");

	web_url("session.do_25",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t110.inf",
		"Mode=HTML",
		"LAST");

	web_url("session.do_26",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t111.inf",
		"Mode=HTML",
		"LAST");

	web_url("session.do_27",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t112.inf",
		"Mode=HTML",
		"LAST");

	web_custom_request("xrefContactAddressForm.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/address/xrefContactAddressForm.do?mode=associate&module=Building",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t113.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP=8e8a548703796f9332df265bb05c846d&value(FirstEntryURL)=%2Fportlets%2Fcontact%2Fref%2FrefContactListForCap.do%3Fvalue(mode)%3Dsearch%26value(lookup)%3Dtrue%26lookupdirect%3Dtrue%26fromDaily%3DY%26isDisableRefContact%3Dfalse%26value(usedQueryInfo)%3DY%26value(actType)%3Dlookupdirect%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcontact%2Fref%2FrefContactListForCap.do%3Fmodule%3DBuilding%26value(usedQueryInfo)%3DY&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=submit&modeName=list&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=11&exceptionLogID=&generalCAPSearch=&objectName=contactList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=11&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(mode)=searchresult&value(lookup)=true&value(capcontactid)=&value(sync)=&value(isDisableRefContact)=&value(refContactSeqNumber)=&value(scheduleNbr)=&value(locationNbr)=&value(refExa"
		"mNbr)=&value(providerNbr)=&value(from)=&value(unDoAssign)=&value(providerEventBuilder)=&value(usedQueryInfo)=Y&value(actType)=lookupdirect&closeMatch=null&ac360_list_id_hiddenCheckbox=&chk_contactid_hiddenCheckbox={chk_contactid_hiddenCheckbox}&entity_type_hidden=CONTACT&refContactId={chk_contactid_hiddenCheckbox}&chk_contactid={_hiddenCheckbox}&chk_contactid_hiddenCheckbox={_hiddenCheckbox}&entity_type_hidden=CONTACT&refContactId={_hiddenCheckbox}&chk_contactid_hiddenCheckbox={_hiddenCheckbox_1}&entity_type_hidden=CONTACT&refContactId={_hiddenCheckbox_1}&chk_contactid_hiddenCheckbox=127951&entity_type_hidden=CONTACT&refContactId=127951&chk_contactid_hiddenCheckbox={_hiddenCheckbox_2}&entity_type_hidden=CONTACT&refContactId={_hiddenCheckbox_2}&isDynaPaging=true&startDate=&",
		"LAST");

	web_submit_data("refContactListForCap.do_3",
		"Action=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t114.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP", "Value=8e8a548703796f9332df265bb05c846d", "ENDITEM",
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
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
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
		"Name=chk_contactid_hiddenCheckbox", "Value={chk_contactid_hiddenCheckbox}", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value={chk_contactid_hiddenCheckbox}", "ENDITEM",
		"Name=chk_contactid", "Value={_hiddenCheckbox}", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value={_hiddenCheckbox}", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value={_hiddenCheckbox}", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value={_hiddenCheckbox_1}", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value={_hiddenCheckbox_1}", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value=127951", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value=127951", "ENDITEM",
		"Name=chk_contactid_hiddenCheckbox", "Value={_hiddenCheckbox_2}", "ENDITEM",
		"Name=entity_type_hidden", "Value=CONTACT", "ENDITEM",
		"Name=refContactId", "Value={_hiddenCheckbox_2}", "ENDITEM",
		"Name=isDynaPaging", "Value=true", "ENDITEM",
		"Name=startDate", "Value=", "ENDITEM",
		"LAST");

	web_custom_request("contactCondition.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/condition/contactCondition.do?mode=viewCondition&module=Building&entityType=CONTACT&entityID={_hiddenCheckbox}",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t115.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_CONTACTLISTACTIONFORM={TRANSACTION_TOKEN_KEY_FOR_CONTACTLISTACTIONFORM}&value(FirstEntryURL)=%2Fportlets%2Fcontact%2Fref%2FrefContactListForCap.do%3Fvalue(mode)%3Dsearch%26value(lookup)%3Dtrue%26lookupdirect%3Dtrue%26fromDaily%3DY%26isDisableRefContact%3Dfalse%26value(usedQueryInfo)%3DY%26value(actType)%3Dlookupdirect%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcontact%2FcontactList.do%3Fvalue(mode)%3Dlist&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=add&modeName=&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=9&exceptionLogID=&generalCAPSearch=&objectName=contactList&CheckBoxName=chk_contactid&MaxNumber=7-3&ExportFileType=print&CurrentViewID=9&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=people.contactSeqNumber&printType=printList&checkBoxValue=chk_contactid&capContactsStr=&sync7383387656=No&refContactId7383387656={_hiddenCheckbox}&entity_type_hidden=CONTACT&refContactId={_hiddenCheckbox}&value(contactType)=contactType&val"
		"ue(people.salutation)=&value(people.gender)=&value(people.postOfficeBox)=&date(people.birthDate)=&pageSizeR=5&endDate=&chooseItems=&effectiveDate=&",
		"LAST");

	web_submit_data("empty.jsp_11", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_7",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t117.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_8",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t118.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("LARA_TC3_12_Record_Contact_LookUpContact_SelectContact",2);

	lr_think_time(4);
	web_add_header("AppD_Header", "LARA_TC3_13_Record_Click_CustomList");
	lr_start_transaction("LARA_TC3_13_Record_Click_CustomList");

	web_url("session.do_28",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building",
		"Snapshot=t119.inf",
		"Mode=HTML",
		"LAST");

	web_url("appSpecInfoTableForm.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("search.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=categoryName", "Value=AppSpecInfoTableFilter", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_12", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("appSpecInfoTableFilterTemplate.html", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/appSpecInfoTableFilterTemplate.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("search.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		"LAST");

	web_custom_request("expression.do_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&isReload=false&module=Building&capType=Building%2FBuilding%2FNA%2FNA", 
		"LAST");

	web_custom_request("tabRecordCount.do_9",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building",
		"Snapshot=t126.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_10",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building",
		"Snapshot=t127.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("LARA_TC3_13_Record_Click_CustomList",2);

	lr_think_time(9);
	web_add_header("AppD_Header", "LARA_TC3_14_Records_CustomList_Save");
	lr_start_transaction("LARA_TC3_14_Records_CustomList_Save");

	web_url("session.do_29",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building",
		"Snapshot=t128.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("appSpecInfoTableForm.do_2",
		"Action=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building",
		"Snapshot=t129.inf",
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
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
		"Name=listID", "Value=", "ENDITEM",
		"Name=printType", "Value=", "ENDITEM",
		"Name=checkBoxValue", "Value=", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-2", "ENDITEM",
		"Name=expression_portlet_to_be_populate", "Value=-99999", "ENDITEM",
		"Name=expressionPageType", "Value=SINGLEPORTLET", "ENDITEM",
		"Name=expression_page_reload_after_submit_or_validate_failed", "Value=true", "ENDITEM",
		"Name=value(appSpecTable*tableName)", "Value=BLD_BUILD::ENVIRONMENTAL+CONTROL+APPROVAL", "ENDITEM",
		"Name=value(capID*ID1)", "Value=18EST", "ENDITEM",
		"Name=value(capID*ID2)", "Value=00000", "ENDITEM",
		"Name=value(capID*ID3)", "Value={Param_ID3}", "ENDITEM",
		"Name=tableName", "Value=BLD_BUILD::ENVIRONMENTAL+CONTROL+APPROVAL", "ENDITEM",
		"Name=INTEGRITY_CHECK", "Value=0", "ENDITEM",
		"LAST");

	web_submit_data("search.do_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=categoryName", "Value=AppSpecInfoTableFilter", "ENDITEM", 
		"LAST");

	web_submit_data("empty.jsp_13", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("appSpecInfoTableFilterTemplate.html_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/appSpecInfoTableFilterTemplate.html", 
		"Resource=0", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("search.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		"LAST");

	web_custom_request("expression.do_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&isReload=true&module=Building&capType=Building%2FBuilding%2FNA%2FNA", 
		"LAST");

	web_custom_request("tabRecordCount.do_11",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building",
		"Snapshot=t136.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_12",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building",
		"Snapshot=t137.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("LARA_TC3_14_Records_CustomList_Save",2);

	lr_think_time(13);
	web_add_header("AppD_Header", "LARA_TC3_15_Record_Click_Inspections");
	lr_start_transaction("LARA_TC3_15_Record_Click_Inspections");

	web_url("session.do_30",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building",
		"Snapshot=t138.inf",
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
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_14", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_13",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t141.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_14",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t142.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("LARA_TC3_15_Record_Click_Inspections",2);

	lr_think_time(4);
	web_add_header("AppD_Header", "LARA_TC3_16_Record_Inspections_Click_ScheduleInspection");
	lr_start_transaction("LARA_TC3_16_Record_Inspections_Click_ScheduleInspection");

	web_url("session.do_31",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t143.inf",
		"Mode=HTML",
		"LAST");

	web_custom_request("workloadingInspectionList.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doValidate&mType=0&isFromCAP=Y&module=Building",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t144.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_INSPECTIONLISTCAPSPECIFICFORM=64ce0c32f01bd79155be29bef5facfed&value(FirstEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=220&exceptionLogID=&generalCAPSearch=&objectName=inspectionList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=220&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(mode)=view&value(CONFIRM_RESULT_WHEN_CANCEL)=&multipleResultType=&listType=recordInspectionList&errorShow=&noRight=&pageSizeR=null&",
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=ANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS",
		"RegExp=name=\"TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS\"\\ value=\"(.*?)\">\\\r\\\n\\\t\\\t<input\\ type",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/selectRequiredInspections.do*",
		"LAST");

 





	web_reg_save_param_ex(
		"ParamName=CapId",
		"LB/IC=[{\"bal\":\"$0.00\",\"CapId\":\"",
		"RB/IC=\",",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/selectRequiredInspections.do*",
		"LAST");

	web_url("workloadingInspectionList.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("selectRequiredInspections.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=loadInspTypeByGroup&InspGroup=BLD_BUILD&CapId=18EST-00000-{Param_ID3}&CapIdIndex=0",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building",
		"Snapshot=t146.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=01e22b3923c16211dee07595717a4faa&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=01e22b3923c16211dee07595717a4faa&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&pageSizeR=9999&",
		"LAST");

	web_submit_data("empty.jsp_15", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_32",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building",
		"Snapshot=t148.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("LARA_TC3_16_Record_Inspections_Click_ScheduleInspection",2);

	lr_think_time(42);
	web_add_header("AppD_Header", "LARA_TC3_16_Record_Inspections_Click_ScheduleInspection_SelectInspectionType");
	lr_start_transaction("LARA_TC3_16_Record_Inspections_Click_ScheduleInspection_SelectInspectionType");

	web_url("session.do_33",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building",
		"Snapshot=t149.inf",
		"Mode=HTML",
		"LAST");

	web_custom_request("selectRequiredInspections.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=loadListTitles",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building",
		"Snapshot=t150.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=01e22b3923c16211dee07595717a4faa&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=01e22b3923c16211dee07595717a4faa&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&pageSizeR=9999&",
		"LAST");

	lr_end_transaction("LARA_TC3_16_Record_Inspections_Click_ScheduleInspection_SelectInspectionType",2);
	web_add_header("AppD_Header", "LARA_TC3_17_Record_SelectInspectionType_ClickPendingInspections");
	lr_start_transaction("LARA_TC3_17_Record_SelectInspectionType_ClickPendingInspections");

	web_url("session.do_34",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building",
		"Snapshot=t151.inf",
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
		"Snapshot=t152.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=01e22b3923c16211dee07595717a4faa&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=01e22b3923c16211dee07595717a4faa&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&value(chk_inspType%2C0)=on&value(inspTypeID%2C0)=84010391&value(selectCapID%2C0)=18EST-00000-{Param_ID3}&value(isInAdvance%2C0)=N&value(requiredInspection%2C0)"
		"=N&value(autoassign%2C0)=N&value(scheduleOrder%2C0)=&value(unitNBR%2C0)=&pageSizeR=9999&",
		"LAST");

	lr_end_transaction("LARA_TC3_17_Record_SelectInspectionType_ClickPendingInspections",2);

	lr_start_transaction("LARA_TC3_18_Record_Inspection_SelectInspectionType_ClickPendingInspections_ClickOK");

	lr_end_transaction("LARA_TC3_18_Record_Inspection_SelectInspectionType_ClickPendingInspections_ClickOK",2);
    web_add_header("AppD_Header", "LARA_TC3_18_Record_Inspection_ClickInspection");
	lr_start_transaction("LARA_TC3_18_Record_Inspection_ClickInspection");

	web_url("session.do_35",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t153.inf",
		"Mode=HTML",
		"LAST");

	web_url("inspectionListCapSpecific.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_16", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_custom_request("tabRecordCount.do_15",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t156.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	web_custom_request("tabRecordCount.do_16",
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3={Param_ID3}&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t157.inf",
		"Mode=HTML",
		"EncType=txt/xml",
		"LAST");

	lr_end_transaction("LARA_TC3_18_Record_Inspection_ClickInspection",2);

	lr_think_time(4);

	lr_start_transaction("LARA_TC3_18_Record_Inspection_ClickInspection");

	web_url("session.do_36",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t158.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("LARA_TC3_18_Record_Inspection_ClickInspection",2);

	lr_think_time(7);

	web_url("session.do_37",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t159.inf",
		"Mode=HTML",
		"LAST");

	lr_think_time(9);
	web_add_header("AppD_Header", "LARA_TC3_19_Record_Inspection_SelectIPendingInspection_ClickScheduleInspection");
	lr_start_transaction("LARA_TC3_19_Record_Inspection_SelectIPendingInspection_ClickScheduleInspection");

	web_url("session.do_38",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t160.inf",
		"Mode=HTML",
		"LAST");

	web_custom_request("workloadingInspectionList.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doValidate&mType=0&isFromCAP=Y&module=Building",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building",
		"Snapshot=t161.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_INSPECTIONLISTCAPSPECIFICFORM=64ce0c32f01bd79155be29bef5facfed&value(FirstEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=220&exceptionLogID=&generalCAPSearch=&objectName=inspectionList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=220&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(mode)=view&value(CONFIRM_RESULT_WHEN_CANCEL)=&multipleResultType=&listType=recordInspectionList&errorShow=&noRight=&value(chk_INSP%2C0)=0&value(ServProvCode%2C0)=LARA&value(INSPID%2C0)={inspectionID}&value(CAPID1%2C0)=18EST&value(CAPID2%2C0)=00000&value(CAPID3%2C0)={Param_ID3}&value(INSPSEQ%2C0)=84010391&value(enabledCheck%2C0)=Y&documentDescriptio"
		"n0=Insp%20Pending&inspectionCategory0=PENDING&pageSizeR=5&",
		"LAST");

	web_url("workloadingInspectionList.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_17", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_39",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building",
		"Snapshot=t164.inf",
		"Mode=HTML",
		"LAST");

	web_url("inspectionDetail.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("ajax.do_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_submit_data("empty.jsp_18", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_40",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building",
		"Snapshot=t168.inf",
		"Mode=HTML",
		"LAST");

	web_url("calendarInspectionWorkload.do",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/28/2018&hour=&ap=&module=Building&capId=18EST-00000-{Param_ID3}&inspectionId={inspectionID}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building",
		"Snapshot=t169.inf",
		"Mode=HTML",
		"LAST");

	web_url("session.do_41",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building",
		"Snapshot=t170.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("LARA_TC3_19_Record_Inspection_SelectIPendingInspection_ClickScheduleInspection",2);
    web_add_header("AppD_Header", "LARA_TC3_20_Record_Inspection_ScheduleInspection_SelectDepartment");
	lr_start_transaction("LARA_TC3_20_Record_Inspection_ScheduleInspection_SelectDepartment");

	web_url("session.do_42",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building",
		"Snapshot=t171.inf",
		"Mode=HTML",
		"LAST");

	web_url("session.do_43",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building",
		"Snapshot=t172.inf",
		"Mode=HTML",
		"LAST");

	web_url("calendarInspectionWorkload.do_2",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/28/2018&hour=&ap=&module=Building&dept=LARA%2FBUILDING%2FNA%2FNA%2FNA%2FNA%2FSPRVSR&capId=18EST-00000-{Param_ID3}&inspectionId={inspectionID}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building",
		"Snapshot=t173.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("LARA_TC3_20_Record_Inspection_ScheduleInspection_SelectDepartment",2);
    web_add_header("AppD_Header", "LARA_TC3_21_Record_Inspection_ScheduleInspection_SelectUser");
	lr_start_transaction("LARA_TC3_21_Record_Inspection_ScheduleInspection_SelectUser");

	web_url("session.do_44",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building",
		"Snapshot=t174.inf",
		"Mode=HTML",
		"LAST");

	web_url("calendarInspectionWorkload.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/28/2018&hour=&ap=&module=Building&dept=LARA%2FBUILDING%2FNA%2FNA%2FNA%2FNA%2FSPRVSR&userId=ADMIN&capId=18EST-00000-{Param_ID3}&inspectionId={inspectionID}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building",
		"Snapshot=t175.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("LARA_TC3_21_Record_Inspection_ScheduleInspection_SelectUser",2);

	lr_think_time(5);
    web_add_header("AppD_Header", "LARA_TC3_22_Record_Inspection_ScheduleInspection_SubmitInspection");
	lr_start_transaction("LARA_TC3_22_Record_Inspection_ScheduleInspection_SubmitInspection");

	web_url("session.do_45",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building",
		"Snapshot=t176.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("inspectionDetail.do_2",
		"Action=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building",
		"Snapshot=t177.inf",
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
		"Name=sessionIdFromWindow", "Value=L9ZpiaB5qWu5ESAz9nacbsLj", "ENDITEM",
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

	web_submit_data("empty.jsp_19", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("session.do_46",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building",
		"Snapshot=t179.inf",
		"Mode=HTML",
		"LAST");

	web_custom_request("inspectionDetail.do_3",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?value(mode)=validateAndGetNextAvailableTime",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building",
		"Snapshot=t180.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_MANAGEINSPECTIONLISTFORM=6a5ccd38dd552248927537bc1b2ce0de&value(FirstEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=pendingEditInit&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=265&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=265&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(mode)=pendingEditSave&value(deptOfUserAll)=LARA%2FBUILDING%2FNA%2FNA%2FNA%2FNA%2FSPRVSR&value(gaUserIDAll)=ADMIN&date(scheduledDateAll)=&value(scheduledStartTimeHourAll)=&value(scheduledStartTimeMinuteAll)=&value(scheduledStartTimeAMPMAll)=&value(scheduledEndTimeHourAll)=&value(scheduledEn"
		"dTimeMinuteAll)=&value(scheduledEndTimeAMPMAll)=&ac360_list_id=on0&value(pendingInspScheduleOrder%2C0)=&value(inspectionId%2C0)={inspectionID}&value(pendingCapID%2C0)=18EST-00000-{Param_ID3}&value(inspectionTypeId%2C0)=84010391&value(calendarIds%2C0)=1605&value(requiredInspection%2C0)=N&value(inspectionType%2C0)=Backfill&value(actualUnits%2C0)=&value(inspectionStatus0)=Scheduled&value(requestCommentText0)=&value(gisArea0)=&value(reqPhoneNumIDD0)=&value(reqPhoneNum0)=&value(displayinaca0)=Y&value(latitude0)=&value(longitude0)=&value(unitNBR0)=&value(restrictRole0)=&value(activityModel*requestorFname0)=&value(activityModel*requestorMname0)=&value(activityModel*requestorLname0)=&value(scheduledStartTimeHourHidden%2C0)=&value(scheduledStartTimeMinuteHidden%2C0)=&value(scheduledStartTimeAMPMHidden%2C0)=&value(scheduledEndTimeHourHidden%2C0)=&value(scheduledEndTimeMinuteHidden%2C0)=&value(scheduledEndTimeAMPMHidden%2C0)=&value(activityModel*contactFname0)=&value(activityModel*contactMname0)=&value(activityModel*c"
		"ontactLname0)=&value(contactNbr0)=&value(contactPhoneNumIDD0)=&value(contactPhoneNum0)=&value(estimatedTimeHour0)=&value(estimatedTimeMinute0)=&value(estimatedTimeAMPM0)=&value(estimatedEndTimeHour0)=&value(estimatedEndTimeMinute0)=&value(estimatedEndTimeAMPM0)=&date(activityModel*desiredDate0)=&value(desiredTimeHour0)=&value(desiredTimeMinute0)=&value(desiredTimeAMPM0)=&value(isRestrictView4ACA0)=off&value(capId)=&value(groupCode)=&value(deptOfUser%2C0)=LARA%2FBUILDING%2FNA%2FNA%2FNA%2FNA%2FSPRVSR&value(initInspector%2C0)=&value(gaUserID%2C0)=ADMIN&date(scheduleDate%2C0)=08%2F28%2F2018&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&pageSizeR=9999&",
		"LAST");

	web_url("viewValidationResultMsg.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/viewValidationResultMsg.do?mode=viewResultMsg&from=confirm&indexCount=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("empty.jsp_20", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	lr_end_transaction("LARA_TC3_22_Record_Inspection_ScheduleInspection_SubmitInspection",2);
	web_add_header("AppD_Header", "LARA_TC3_23_Record_Inspection_ScheduleInspection_ClickOK");
	lr_start_transaction("LARA_TC3_23_Record_Inspection_ScheduleInspection_ClickOK");

	web_url("session.do_47",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building",
		"Snapshot=t183.inf",
		"Mode=HTML",
		"LAST");

	web_url("session.do_48",
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.819b2&module=Building",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/viewValidationResultMsg.do?mode=viewResultMsg&from=confirm&indexCount=0",
		"Snapshot=t184.inf",
		"Mode=HTML",
		"LAST");

	web_custom_request("workloadingInspectionList.do_5",
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditSave&operateType=refresh&convertToJson=true",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building",
		"Snapshot=t185.inf",
		"Mode=HTML",
		"Body=TRANSACTION_TOKEN_KEY_FOR_MANAGEINSPECTIONLISTFORM=6a5ccd38dd552248927537bc1b2ce0de&value(FirstEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=pendingEditInit&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=265&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=265&sessionIdFromWindow=L9ZpiaB5qWu5ESAz9nacbsLj&listID=&printType=&checkBoxValue=&value(mode)=pendingEditSave&value(deptOfUserAll)=LARA%2FBUILDING%2FNA%2FNA%2FNA%2FNA%2FSPRVSR&value(gaUserIDAll)=ADMIN&date(scheduledDateAll)=&value(scheduledStartTimeHourAll)=&value(scheduledStartTimeMinuteAll)=&value(scheduledStartTimeAMPMAll)=&value(scheduledEndTimeHourAll)=&value(scheduledEn"
		"dTimeMinuteAll)=&value(scheduledEndTimeAMPMAll)=&ac360_list_id=on0&value(pendingInspScheduleOrder%2C0)=&value(inspectionId%2C0)={inspectionID}&value(pendingCapID%2C0)=18EST-00000-{Param_ID3}&value(inspectionTypeId%2C0)=84010391&value(calendarIds%2C0)=1605&value(requiredInspection%2C0)=N&value(inspectionType%2C0)=Backfill&value(actualUnits%2C0)=&value(inspectionStatus0)=Scheduled&value(requestCommentText0)=&value(gisArea0)=&value(reqPhoneNumIDD0)=&value(reqPhoneNum0)=&value(displayinaca0)=Y&value(latitude0)=&value(longitude0)=&value(unitNBR0)=&value(restrictRole0)=&value(activityModel*requestorFname0)=&value(activityModel*requestorMname0)=&value(activityModel*requestorLname0)=&value(scheduledStartTimeHourHidden%2C0)=&value(scheduledStartTimeMinuteHidden%2C0)=&value(scheduledStartTimeAMPMHidden%2C0)=&value(scheduledEndTimeHourHidden%2C0)=&value(scheduledEndTimeMinuteHidden%2C0)=&value(scheduledEndTimeAMPMHidden%2C0)=&value(activityModel*contactFname0)=&value(activityModel*contactMname0)=&value(activityModel*c"
		"ontactLname0)=&value(contactNbr0)=&value(contactPhoneNumIDD0)=&value(contactPhoneNum0)=&value(estimatedTimeHour0)=&value(estimatedTimeMinute0)=&value(estimatedTimeAMPM0)=&value(estimatedEndTimeHour0)=&value(estimatedEndTimeMinute0)=&value(estimatedEndTimeAMPM0)=&date(activityModel*desiredDate0)=&value(desiredTimeHour0)=&value(desiredTimeMinute0)=&value(desiredTimeAMPM0)=&value(isRestrictView4ACA0)=off&value(capId)=&value(groupCode)=&value(deptOfUser%2C0)=LARA%2FBUILDING%2FNA%2FNA%2FNA%2FNA%2FSPRVSR&value(initInspector%2C0)=&value(gaUserID%2C0)=ADMIN&date(scheduleDate%2C0)=08%2F28%2F2018&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&pageSizeR=9999&",
		"LAST");

	lr_end_transaction("LARA_TC3_23_Record_Inspection_ScheduleInspection_ClickOK",2);

	lr_think_time(29);

	lr_start_transaction("LARA_TC3_24_Record_inspection_ScheduleInspection_ClickOK_OK");

	lr_end_transaction("LARA_TC3_24_Record_inspection_ScheduleInspection_ClickOK_OK",2);
	web_add_header("AppD_Header", "LARA_SignOut");
	lr_start_transaction("LARA_SignOut");

	web_url("signoff.do", 
		"URL=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("portal", 
		"Action=https://av-pt-ferrari.accela.com/jetspeed/portal?action=JClearCookie", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_url("logoutAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=LARA&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("hostSignon.do_3", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=LARA&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Snapshot=t189.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("LARA_SignOut",2);

	return 0;
}
# 5 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\lara\\lara_tc3\\\\combined_LARA_TC3.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\hboyina.accelaops\\desktop\\pt-ferrari\\scripts\\lara\\lara_tc3\\\\combined_LARA_TC3.c" 2
