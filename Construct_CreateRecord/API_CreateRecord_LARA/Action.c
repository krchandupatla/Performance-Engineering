int status;
Action()
{
	
		
	//CreateRecord

lr_start_transaction("CreateRecord_Lara");


	web_add_header("Accept-Encoding",   "gzip,deflate");

	web_add_header("Connection",             "Keep-Alive");
	
	web_add_header("Content-Type","application/json");

	web_add_header("User-Agent","Apache-HttpClient/4.1.1 (java 1.5)");

	
	// modify this for each agency
//	web_add_header("AccessKey",   "A51BBA7E01F541C58EDC31DA74404F9A");

	//x-accela-environment. DEV
	
//	web_add_header("x-accela-environment",   "DEV");
	


	web_reg_find("Search=Body",	"Text=200",	LAST);

	status=web_custom_request("web_custom_request",
	   "URL=http://10.106.21.50:3080/apis/v4/records?token={Token}&serviceProviderCode=LARA",
	   "Method=POST",
	   "Resource=0",
 	"Referer=","Body={ \"name\": \"PerformanceTesting\", " 
	   "\"type\": {\"module\": \"Building\","
	   "\"value\": \"Building/Elevator/Installation/Manwalk or Escelator\"," 
	   "\"type\": \"Elevator\"," 
	   "\"text\": \"Elevator Installation\"," 
	   "\"group\": \"Building\"," 
	   "\"alias\": \"Elevator Installation\"," 
	   "\"subType\": \"Periodic\"," 
	   "\"category\": \"Manwalk or Escelator\"," 
	   "\"id\": \"Building-Elevator-Installation-Manwalk or Escelator\"}," 
		"\"description\": \"PerformanceTesting\", "
	   "\"module\": \"Building\",  " 
	   "\"initiatedProduct\": \"RESTAPI\", " 
	   "\"housingUnits\": 1," 
		"\"totalJobCost\": 9992, " 
		"\"reportedChannel\": { \"value\": \"Call Center\", "
	   "\"text\": \"Call Center\" }, " 
	   "\"numberOfBuildings\": 1, " 
	   "\"estimatedProductionUnit\": 1, " 
	   "\"actualProductionUnit\": 1, "
	   "\"serviceProviderCode\": \"LARA\", "
	   "\"undistributedCost\": 88, " 
	   "\"jobValue\": 450000, " 
	   "\"assignedUser\": \"ADMIN\", "
	   "\"constructionType\": { \"value\": \"101\", " 
	   "\"text\": \"Single Family Houses Detached\" }, " 
	   "\"totalFee\": 200, " 
	   "\"totalPay\": 200, " 
	   "\"balance\": 0, " 
	   "\"booking\": false, " 
	   "\"infraction\": false, " 
	   "\"misdemeanor\": false, " 
	   "\"offenseWitnessed\": false, " 
	   "\"defendantSignature\": false, " 
	   "\"publicOwned\": false }",
	LAST);
	

	if(status==LR_PASS)
	{
		lr_end_transaction("CreateRecord_Lara", LR_PASS);
		lr_output_message("Message: CreateRecord successful!");
	}
	else
	{
		lr_end_transaction("CreateRecord_Lara", LR_FAIL);
		lr_error_message("Message: Failed to CreateRecord!");
		return 0;
	}

	return 0;
}
