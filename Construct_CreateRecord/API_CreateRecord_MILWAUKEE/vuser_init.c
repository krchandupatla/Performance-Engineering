int status;
vuser_init()
{

/* Token Request - 6% transactions*/

	lr_start_transaction("Authentication_MILWAUKEE");

		web_set_max_html_param_len("58700");

	web_set_sockets_option("SSL_VERSION","TLS");
	
web_set_sockets_option("IGNORE_PREMATURE_SHUTDOWN", "1");

	web_reg_save_param("Token",
		"LB=,\"result\":\"",
		"RB=\"",
		"Search=All",
		LAST);
	
//lr_output_message( "TokenValue is #%s", lr_eval_string( "{Token}" ) ); 
//http://10.106.21.51:3080/apis/v4/auth/agency
////
//	 web_add_header("POST",	"http://10.106.21.51:3080/apis/v4/auth/LARA HTTP/1.1");


	 web_add_header("Accept-Encoding",
				"gzip,deflate");


	 web_add_header("Connection",
				"Keep-Alive");


	 web_add_header("User-Agent",
				"Apache-HttpClient/4.1.1 (java 1.5)");


	 web_reg_find("Search=Body",
		"Text=200",
		LAST);

	status=web_custom_request("web_custom_request",
		"URL=http://10.106.21.53:3080/apis/v4/auth/agency",
		"Method=POST",
		"Resource=0",
		"Referer=",
		"Body={\"agency\": \"MILWAUKEE\",\"userId\": \"admin\",\"password\": \"admin\"}",
		LAST);

	if(status==LR_PASS)
	{
		lr_output_message("Message: Get token successful!");
	}


	else
	{
		lr_error_message("Message: Can't get token from server, please check the request !");
		return -1;
	}

	lr_think_time(10);
	
lr_end_transaction("Authentication_MILWAUKEE", LR_PASS);
	
	
	return 0;
}
