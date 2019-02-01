Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("dashboard.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("l", 
		"URL=https://translate.googleapis.com/translate_a/l?client=chrome&cb=sl&hl=en&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw&alpha=1", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("hostSignon.do", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?successURL=https%3A%2F%2Fav-pt-ferrari.accela.com%2Fportlets%2Fspa%2Fdashboard.do&SignOnModule=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("host-signon.css", 
		"URL=https://av-pt-ferrari.accela.com/security/css/host-signon.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("spacer.gif", 
		"URL=https://av-pt-ferrari.accela.com/security/images/spacer.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("hostSignon.do_2", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t8.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("searchdomaincheck", 
		"URL=https://www.google.com/searchdomaincheck?format=url&type=chrome", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t7.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("login.css", 
		"URL=https://av-pt-ferrari.accela.com/security/includes/login.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("accela_logo_v2.jpg", 
		"URL=https://av-pt-ferrari.accela.com/security/images/accela_logo_v2.jpg", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("sso.js", 
		"URL=https://av-pt-ferrari.accela.com/security/javascript/sso.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("login-bar.gif", 
		"URL=https://av-pt-ferrari.accela.com/security/images/login-bar.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t12.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("client_model_v5.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t13.inf", 
		LAST);

	lr_think_time(14);

	lr_start_transaction("MILWAUKEE_Login");

	web_custom_request("loginAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?requestType=checkWebSSOAdapter&servProvCode=MILWAUKEE", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_submit_data("hostSignon.do_3", 
		"Action=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=action", "Value=signon", ENDITEM, 
		"Name=successUrl", "Value=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", ENDITEM, 
		"Name=cookieUserName", "Value=", ENDITEM, 
		"Name=cookieAgencyName", "Value=", ENDITEM, 
		"Name=requestToken", "Value=1532e1b6b6a", ENDITEM, 
		"Name=requestLanguageToken", "Value=163c66739f8", ENDITEM, 
		"Name=password1", "Value=", ENDITEM, 
		"Name=servProvCode", "Value=MILWAUKEE", ENDITEM, 
		"Name=username", "Value=admin", ENDITEM, 
		"Name=password", "Value=admin", ENDITEM, 
		"Name=accela_select_language", "Value=en_US", ENDITEM, 
		"Name=submit_", "Value=Login", ENDITEM, 
		LAST);

	web_url("dashboard.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("auth.do", 
		"URL=https://av-pt-ferrari.accela.com/security/auth.do?signOffScript=https://av-pt-ferrari.accela.com/portlets/security/signout.do&switchAgencyScript=https://av-pt-ferrari.accela.com/portlets/commons/sso/blank.jsp&CSRF_REQ_PARAM=", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("dashboard.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("zhy8lto.js", 
		"URL=https://use.typekit.net/zhy8lto.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t19.inf", 
		LAST);

	web_custom_request("text.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
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
		LAST);

	web_concurrent_start(NULL);

	web_url("switchAgency.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/switchAgency.do?mode=init", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("switchAgency.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/switchAgency.do?mode=list", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("pa.min.js", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("p.gif", 
		"URL=https://p.typekit.net/p.gif?s=1&k=zhy8lto&ht=tk&h=av-pt-ferrari.accela.com&f=139.140.175.176&a=621408&js=1.19.2&app=typekit&e=js&_=1536083019390", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("userSecurityProfile.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/userSecurityProfile.do?mode=getSecurityProfileByModule&items=0375", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t25.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("userinfo.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/user/userinfo.do?mode=userInfo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t26.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("spacesMenu.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/spacesMenu.do?mode=list", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("userSecurityProfile.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/userSecurityProfile.do?mode=getSecurityProfileByModule&items=0008,8488,8143,8400,8145,8144,8478,8213,8477,8487,8132", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("launchPad.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/launchPad.do?mode=getUserPages", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("userSecurityProfile.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/userSecurityProfile.do?mode=getSwitchLinkPermissionByDefaultModule", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t30.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("session.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("favoritePages.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/favoritePages.do?mode=list", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("switchAgency.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/switchAgency.do?mode=setAgency&serviceProviderCode=MILWAUKEE", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("getTaskFilterStatusList.json", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/mock-api/getTaskFilterStatusList.json", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("dashboardTaskQuickQueries.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboardTaskQuickQueries.do", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("dashboardTaskCards.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboardTaskCards.do?mode=multiAgencyTaskCounts&quickQueryId=", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("dashboardTaskCards.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboardTaskCards.do?end=6&mode=initTask&serviceProviderCode=MILWAUKEE&start=1", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("recentlyViewed.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t38.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("MILWAUKEE_Login",LR_AUTO);

	lr_think_time(31);

	lr_start_transaction("MILWAUKEE_TC2_01_Click_Addresses");

	web_url("session.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t39.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("recentlyViewed.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("session.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6771", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t43.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("refAddress.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/refAddress.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("blank.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/address/refAddress.jsp", 
		"Snapshot=t45.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/address/refAddress.jsp", 
		"Snapshot=t46.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/address/refAddress.jsp", 
		"Snapshot=t47.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/address/refAddress.jsp", 
		"Snapshot=t48.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("refAddressList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/address/refAddress.jsp", 
		"Snapshot=t49.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/address/refAddress.jsp", 
		"Snapshot=t50.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("AAHELP.js", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t51.inf", 
		LAST);

	web_url("ajaxAnyWhere.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ajaxAnyWhere.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("genericMask.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/taglib/genericMask/javascript/genericMask.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("pa.min.js_2", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t54.inf", 
		LAST);

	web_url("blank.jsp_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("empty.jsp", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("session.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t59.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("regionalSyncMask.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t60.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("MILWAUKEE_TC2_01_Click_Addresses",LR_AUTO);

	lr_start_transaction("MILWAUKEE_TC2_02_Search_Addresses");

	web_url("session.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t61.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("refAddressList.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?mode=Search", 
		"Snapshot=t62.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=value(FirstEntryURL)", "Value=/portlets/address/refAddressList.do?mode=Search", ENDITEM, 
		"Name=value(CurrentEntryURL)", "Value=/portlets/address/refAddressList.do?mode=Search", ENDITEM, 
		"Name=portlet_language", "Value=en_US", ENDITEM, 
		"Name=refresh_target", "Value=", ENDITEM, 
		"Name=refresh_url", "Value=", ENDITEM, 
		"Name=buttonName", "Value=", ENDITEM, 
		"Name=modeName", "Value=Search", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=accelasubmitbuttonname", "Value=search", ENDITEM, 
		"Name=itemName", "Value=", ENDITEM, 
		"Name=CurrentViewID", "Value=31", ENDITEM, 
		"Name=exceptionLogID", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=value(portlet_soundex)", "Value=off", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=31", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=GoCZVlB2ESOljt01glsGuFk5", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=listBySingle", "Value=null", ENDITEM, 
		"Name=value(mode)", "Value=SearchResult", ENDITEM, 
		"Name=value(contactSeqNumber)", "Value=", ENDITEM, 
		"Name=autoSelect", "Value=null", ENDITEM, 
		"Name=isDaily", "Value=false", ENDITEM, 
		"Name=value(serviceProviderCode)", "Value=", ENDITEM, 
		"Name=value(search_range_from_houseNumberStart)", "Value=", ENDITEM, 
		"Name=value(search_range_to_houseNumberStart)", "Value=", ENDITEM, 
		"Name=value(search_range_houseNumberStart)", "Value=333", ENDITEM, 
		"Name=value(search_range_from_houseNumberEnd)", "Value=", ENDITEM, 
		"Name=value(search_range_to_houseNumberEnd)", "Value=", ENDITEM, 
		"Name=value(search_range_houseNumberEnd)", "Value=", ENDITEM, 
		"Name=value(houseNumberAlphaStart)", "Value=", ENDITEM, 
		"Name=value(houseNumberAlphaEnd)", "Value=", ENDITEM, 
		"Name=value(levelNumberStart)", "Value=", ENDITEM, 
		"Name=value(levelNumberEnd)", "Value=", ENDITEM, 
		"Name=value(unitEnd)", "Value=", ENDITEM, 
		"Name=value(countryCode)", "Value=", ENDITEM, 
		"Name=value(auditStatus)", "Value=", ENDITEM, 
		"Name=value(addressDescription)", "Value=", ENDITEM, 
		"Name=value(XCoordinator)", "Value=", ENDITEM, 
		"Name=value(YCoordinator)", "Value=", ENDITEM, 
		"Name=value(distance)", "Value=", ENDITEM, 
		"Name=value(secondaryRoadNumber)", "Value=", ENDITEM, 
		"Name=value(streetSuffixdirection)", "Value=", ENDITEM, 
		"Name=value(sourceNumber)", "Value=", ENDITEM, 
		"Name=value(sourceFlag)", "Value=", ENDITEM, 
		"Name=value(addressTypeFlag)", "Value=", ENDITEM, 
		"Name=value(validateFlag)", "Value=", ENDITEM, 
		"Name=value(streetPrefix)", "Value=", ENDITEM, 
		"Name=value(secondaryRoad)", "Value=", ENDITEM, 
		"Name=value(inspectionDistrictPrefix)", "Value=", ENDITEM, 
		"Name=value(neighberhoodPrefix)", "Value=", ENDITEM, 
		"Name=value(neighborhood)", "Value=", ENDITEM, 
		"Name=value(eventID)", "Value=", ENDITEM, 
		"Name=value(houseFractionStart)", "Value=", ENDITEM, 
		"Name=value(houseFractionEnd)", "Value=", ENDITEM, 
		"Name=value(auditID)", "Value=", ENDITEM, 
		"Name=date(auditDate)", "Value=", ENDITEM, 
		"Name=value(fullAddress)", "Value=", ENDITEM, 
		"Name=value(primaryFlag)", "Value=", ENDITEM, 
		"Name=value(addressType)", "Value=", ENDITEM, 
		"Name=value(addressLine1)", "Value=", ENDITEM, 
		"Name=value(addressLine2)", "Value=", ENDITEM, 
		"Name=value(subdivision)", "Value=", ENDITEM, 
		"Name=value(lot)", "Value=", ENDITEM, 
		"Name=isNewSearch", "Value=true", ENDITEM, 
		"Name=value(address template)", "Value=", ENDITEM, 
		"Name=isDaily", "Value=false", ENDITEM, 
		"Name=value(levelPrefix)", "Value=", ENDITEM, 
		"Name=value(address template)", "Value=", ENDITEM, 
		"Name=isDaily", "Value=false", ENDITEM, 
		"Name=value(streetDirection)", "Value=", ENDITEM, 
		"Name=value(address template)", "Value=", ENDITEM, 
		"Name=isDaily", "Value=false", ENDITEM, 
		"Name=value(streetName)", "Value=", ENDITEM, 
		"Name=value(address template)", "Value=", ENDITEM, 
		"Name=isDaily", "Value=false", ENDITEM, 
		"Name=value(streetSuffix)", "Value=", ENDITEM, 
		"Name=value(address template)", "Value=", ENDITEM, 
		"Name=isDaily", "Value=false", ENDITEM, 
		"Name=value(unitType)", "Value=", ENDITEM, 
		"Name=value(address template)", "Value=", ENDITEM, 
		"Name=isDaily", "Value=false", ENDITEM, 
		"Name=value(unitStart)", "Value=", ENDITEM, 
		"Name=value(address template)", "Value=", ENDITEM, 
		"Name=isDaily", "Value=false", ENDITEM, 
		"Name=value(city)", "Value=", ENDITEM, 
		"Name=value(address template)", "Value=", ENDITEM, 
		"Name=isDaily", "Value=false", ENDITEM, 
		"Name=value(state)", "Value=", ENDITEM, 
		"Name=value(address template)", "Value=", ENDITEM, 
		"Name=isDaily", "Value=false", ENDITEM, 
		"Name=value(zip_disp)", "Value=", ENDITEM, 
		"Name=value(zip)", "Value=", ENDITEM, 
		"Name=value(address template)", "Value=", ENDITEM, 
		"Name=isDaily", "Value=false", ENDITEM, 
		"Name=value(county)", "Value=", ENDITEM, 
		"Name=value(address template)", "Value=", ENDITEM, 
		"Name=isDaily", "Value=false", ENDITEM, 
		"Name=value(refAddressId)", "Value=", ENDITEM, 
		"Name=value(address template)", "Value=", ENDITEM, 
		"Name=isDaily", "Value=false", ENDITEM, 
		"Name=value(inspectionDistrict)", "Value=", ENDITEM, 
		"Name=value(address template)", "Value=", ENDITEM, 
		"Name=value(refAddressId)", "Value=", ENDITEM, 
		"Name=value(sourceNumber)", "Value=", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("Previous_Button_Grayed_Out.jpg", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/Previous_Button_Grayed_Out.jpg", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("AAHELP.js_2", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("commonConditionUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/condition/commonConditionUtil.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t65.inf", 
		LAST);

	web_url("Next_Button_Default.jpg", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/Next_Button_Default.jpg", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t66.inf", 
		LAST);

	web_url("blank.jsp_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t68.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_3", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t67.inf", 
		LAST);

	web_submit_data("empty.jsp_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t69.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_concurrent_start(NULL);

	web_url("table-footer-left-bottom-200-12.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/table-footer-left-bottom-200-12.png", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t70.inf", 
		LAST);

	web_url("table-header-left-top-200-8.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/table-header-left-top-200-8.png", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t71.inf", 
		LAST);

	web_url("table-footer-right-bottom-400-12.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/table-footer-right-bottom-400-12.png", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t72.inf", 
		LAST);

	web_url("table-header-right-top-400-8.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/table-header-right-top-400-8.png", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t73.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("MILWAUKEE_TC2_02_Search_Addresses",LR_AUTO);

	lr_think_time(14);

	lr_start_transaction("MILWAUKEE_TC2_03_Click_Parcel");

	web_url("session.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressList.do?module=Building", 
		"Snapshot=t74.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t75.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("recentlyViewed.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t76.inf", 
		LAST);

	web_url("session.do_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6771", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t77.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t78.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6772", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t79.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("refParcel.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/parcel/refParcel.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t80.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("blank.jsp_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/parcel/refParcel.jsp", 
		"Snapshot=t81.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/parcel/refParcel.jsp", 
		"Snapshot=t82.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("refParcelList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/parcel/refParcel.jsp", 
		"Snapshot=t83.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("AAHELP.js_3", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t84.inf", 
		LAST);

	web_url("pa.min.js_4", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t85.inf", 
		LAST);

	web_submit_data("empty.jsp_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t86.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("blank.jsp_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t87.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC2_03_Click_Parcel",LR_AUTO);

	lr_think_time(13);

	lr_start_transaction("MILWAUKEE_TC2_04_Search_Parcel");

	web_url("session.do_14", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t89.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("ChVnb29nLWJhZGJpbnVybC1zaGF2YXI4AUACSgwIARDh9gkY4fYJIAFKDAgAEL3QCRi90AkgAQ", 
		"URL=https://safebrowsing-cache.google.com/safebrowsing/rd/ChVnb29nLWJhZGJpbnVybC1zaGF2YXI4AUACSgwIARDh9gkY4fYJIAFKDAgAEL3QCRi90AkgAQ", 
		"Resource=1", 
		"RecContentType=application/vnd.google.safebrowsing-chunk", 
		"Referer=", 
		"Snapshot=t90.inf", 
		LAST);

	web_url("Chhnb29nLWJhZGNyeGlkcy1kaWdlc3R2YXI4AUACSgoIABCYHhiYHiAB", 
		"URL=https://safebrowsing-cache.google.com/safebrowsing/rd/Chhnb29nLWJhZGNyeGlkcy1kaWdlc3R2YXI4AUACSgoIABCYHhiYHiAB", 
		"Resource=1", 
		"RecContentType=application/vnd.google.safebrowsing-chunk", 
		"Referer=", 
		"Snapshot=t91.inf", 
		LAST);

	web_url("ChNnb29nLW1hbHdhcmUtc2hhdmFyOAFAAkoMCAEQzPARGMzwESABSgwIABDCgxIYwoMSIAE", 
		"URL=https://safebrowsing-cache.google.com/safebrowsing/rd/ChNnb29nLW1hbHdhcmUtc2hhdmFyOAFAAkoMCAEQzPARGMzwESABSgwIABDCgxIYwoMSIAE", 
		"Resource=1", 
		"RecContentType=application/vnd.google.safebrowsing-chunk", 
		"Referer=", 
		"Snapshot=t92.inf", 
		LAST);

	web_url("ChFnb29nLXBoaXNoLXNoYXZhcjgBQAJKDAgBEIKbMxiDmzMgAUoMCAAQx9MfGMjTHyAB", 
		"URL=https://safebrowsing-cache.google.com/safebrowsing/rd/ChFnb29nLXBoaXNoLXNoYXZhcjgBQAJKDAgBEIKbMxiDmzMgAUoMCAAQx9MfGMjTHyAB", 
		"Resource=1", 
		"RecContentType=application/vnd.google.safebrowsing-chunk", 
		"Referer=", 
		"Snapshot=t93.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(4);

	web_url("session.do_15", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t94.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("refParcelList.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?mode=search&lookup=false", 
		"Snapshot=t95.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=value(FirstEntryURL)", "Value=/portlets/parcel/refParcelList.do?mode=search&lookup=false", ENDITEM, 
		"Name=value(CurrentEntryURL)", "Value=/portlets/parcel/refParcelList.do?mode=search&lookup=false", ENDITEM, 
		"Name=portlet_language", "Value=en_US", ENDITEM, 
		"Name=refresh_target", "Value=", ENDITEM, 
		"Name=refresh_url", "Value=", ENDITEM, 
		"Name=buttonName", "Value=", ENDITEM, 
		"Name=modeName", "Value=search", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=accelasubmitbuttonname", "Value=searchresult", ENDITEM, 
		"Name=itemName", "Value=", ENDITEM, 
		"Name=CurrentViewID", "Value=20037", ENDITEM, 
		"Name=exceptionLogID", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=value(portlet_soundex)", "Value=off", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=20037", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=GoCZVlB2ESOljt01glsGuFk5", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=fromCreateChild", "Value=null", ENDITEM, 
		"Name=value(parcel*parcelNumber)", "Value=4229997100", ENDITEM, 
		"Name=value(owner*ownerFullName)", "Value=", ENDITEM, 
		"Name=value(parcel*legalDesc)", "Value=", ENDITEM, 
		"Name=value(parcel*subdivision)", "Value=", ENDITEM, 
		"Name=value(parcel*lot)", "Value=", ENDITEM, 
		"Name=value(parcel*parcelStatus)", "Value=", ENDITEM, 
		"Name=value(parcel*primaryParcelFlagWithoutDealing)", "Value=", ENDITEM, 
		"Name=value(address*houseNumberAlphaStart)", "Value=", ENDITEM, 
		"Name=value(address*houseNumberAlphaEnd)", "Value=", ENDITEM, 
		"Name=value(address*levelPrefix)", "Value=", ENDITEM, 
		"Name=value(address*levelNumberStart)", "Value=", ENDITEM, 
		"Name=value(address*levelNumberEnd)", "Value=", ENDITEM, 
		"Name=value(address*unitStart)", "Value=", ENDITEM, 
		"Name=value(address*city)", "Value=", ENDITEM, 
		"Name=value(address*addressDescription)", "Value=", ENDITEM, 
		"Name=value(address*streetSuffixdirection)", "Value=", ENDITEM, 
		"Name=value(parcel*township)", "Value=", ENDITEM, 
		"Name=value(parcel*range)", "Value=", ENDITEM, 
		"Name=value(parcel*section)", "Value=", ENDITEM, 
		"Name=isNewSearch", "Value=true", ENDITEM, 
		"Name=value(parcel template)", "Value=", ENDITEM, 
		"Name=value(search_range_from_address*houseNumberStart)", "Value=", ENDITEM, 
		"Name=value(search_range_to_address*houseNumberStart)", "Value=", ENDITEM, 
		"Name=value(search_range_address*houseNumberStart)", "Value=", ENDITEM, 
		"Name=value(parcel template)", "Value=", ENDITEM, 
		"Name=value(address*streetDirection)", "Value=", ENDITEM, 
		"Name=value(parcel template)", "Value=", ENDITEM, 
		"Name=value(address*streetName)", "Value=", ENDITEM, 
		"Name=value(parcel template)", "Value=", ENDITEM, 
		"Name=value(address*streetSuffix)", "Value=", ENDITEM, 
		"Name=value(parcel template)", "Value=", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("Next_Button_Grayed_Out.jpg", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/Next_Button_Grayed_Out.jpg", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t96.inf", 
		LAST);

	web_url("AAHELP.js_4", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t97.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_5", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t98.inf", 
		LAST);

	web_submit_data("empty.jsp_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("blank.jsp_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC2_04_Search_Parcel",LR_AUTO);

	lr_start_transaction("MILWAUKEE_TC2_05_Click_Owner");

	web_url("session.do_16", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/parcel/refParcelList.do?module=Building", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_17", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("recentlyViewed.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t103.inf", 
		LAST);

	web_url("session.do_18", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6772", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t104.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_19", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_20", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6773", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t106.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("refOwner.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/owner/refOwner.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t107.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/owner/refOwner.jsp", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("refOwnerList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?mode=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/owner/refOwner.jsp", 
		"Snapshot=t109.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("AAHELP.js_5", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t110.inf", 
		LAST);

	web_url("pa.min.js_6", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t111.inf", 
		LAST);

	web_submit_data("empty.jsp_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t112.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("blank.jsp_14", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t113.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_21", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6773&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t114.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC2_05_Click_Owner",LR_AUTO);

	lr_think_time(8);

	lr_start_transaction("MILWAUKEE_TC2_06_Search_Owner");

	web_url("session.do_22", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6773&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t115.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(12);

	web_url("session.do_23", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6773&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t116.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("refOwnerList.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?mode=search", 
		"Snapshot=t117.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST", "Value=096aced51dffd0b4254bdf90eed1fef8", ENDITEM, 
		"Name=value(FirstEntryURL)", "Value=/portlets/owner/refOwnerList.do?mode=search", ENDITEM, 
		"Name=value(CurrentEntryURL)", "Value=/portlets/owner/refOwnerList.do?mode=search", ENDITEM, 
		"Name=portlet_language", "Value=en_US", ENDITEM, 
		"Name=refresh_target", "Value=", ENDITEM, 
		"Name=refresh_url", "Value=", ENDITEM, 
		"Name=buttonName", "Value=", ENDITEM, 
		"Name=modeName", "Value=search", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=accelasubmitbuttonname", "Value=submit", ENDITEM, 
		"Name=itemName", "Value=", ENDITEM, 
		"Name=CurrentViewID", "Value=20028", ENDITEM, 
		"Name=exceptionLogID", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=20028", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=GoCZVlB2ESOljt01glsGuFk5", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(refOwner*ownerFullName)", "Value=SANDRA A JONES", ENDITEM, 
		"Name=value(refOwner*address1)", "Value=", ENDITEM, 
		"Name=value(refOwner*country)", "Value=", ENDITEM, 
		"Name=value(refOwner*state)", "Value=", ENDITEM, 
		"Name=value(refOwner*zip)", "Value=", ENDITEM, 
		"Name=value(refOwner*structureType)", "Value=", ENDITEM, 
		"Name=value(refOwner*structureName)", "Value=", ENDITEM, 
		"Name=value(refOwner*ownerStatus)", "Value=", ENDITEM, 
		"Name=value(refOwner*email)", "Value=", ENDITEM, 
		"Name=isNewSearch", "Value=true", ENDITEM, 
		"Name=value(refOwner*parcelNbr)", "Value=", ENDITEM, 
		"Name=value(refOwner*ownerFirstName)", "Value=", ENDITEM, 
		"Name=value(refOwner*ownerLastName)", "Value=", ENDITEM, 
		"Name=value(refOwner*city)", "Value=", ENDITEM, 
		"Name=value(refOwner*mailAddress1)", "Value=", ENDITEM, 
		"Name=value(refOwner*mailCity)", "Value=", ENDITEM, 
		"Name=value(refOwner*mailState)", "Value=", ENDITEM, 
		"Name=value(refOwner*mailZip)", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=list", ENDITEM, 
		LAST);

	web_url("AAHELP.js_6", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t118.inf", 
		LAST);

	web_url("pa.min.js_7", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t119.inf", 
		LAST);

	web_custom_request("refOwnerForm.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerForm.do?mode=viewCondition&module=Building&ownerUID=MILWAUKEE%24*%242310904000", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST=096aced51dffd0b4254bdf90eed1fef8&value(FirstEntryURL)=%2Fportlets%2Fowner%2FrefOwnerList.do%3Fmode%3Dsearch&value(CurrentEntryURL)=%2Fportlets%2Fowner%2FrefOwnerList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=submit&modeName=searchresult&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20027&exceptionLogID=&generalCAPSearch=&objectName=owners&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=20027&sessionIdFromWindow=GoCZVlB2ESOljt01glsGuFk5&listID=&printType=&checkBoxValue=&isDynaPaging=true&page-navigator-input-id=1&MILWAUKEE%24*%242310904000=SANDRA%20A%20JONES&MILWAUKEE%24*%240340725000=SANDRA%20A%20JONES&pageSizeR=5&", 
		LAST);

	web_submit_data("empty.jsp_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t121.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("refOwnerForm.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerForm.do?mode=viewCondition&module=Building&ownerUID=MILWAUKEE%24*%240340725000", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t122.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFOWNERLIST=096aced51dffd0b4254bdf90eed1fef8&value(FirstEntryURL)=%2Fportlets%2Fowner%2FrefOwnerList.do%3Fmode%3Dsearch&value(CurrentEntryURL)=%2Fportlets%2Fowner%2FrefOwnerList.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=submit&modeName=searchresult&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20027&exceptionLogID=&generalCAPSearch=&objectName=owners&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=20027&sessionIdFromWindow=GoCZVlB2ESOljt01glsGuFk5&listID=&printType=&checkBoxValue=&isDynaPaging=true&page-navigator-input-id=1&MILWAUKEE%24*%242310904000=SANDRA%20A%20JONES&MILWAUKEE%24*%240340725000=SANDRA%20A%20JONES&pageSizeR=5&", 
		LAST);

	web_url("blank.jsp_15", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC2_06_Search_Owner",LR_AUTO);

	lr_start_transaction("MILWAUKEE_TC2_07_Click_LicenseProfessionals");

	web_url("session.do_24", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6773&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerList.do?module=Building", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_25", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("recentlyViewed.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t126.inf", 
		LAST);

	web_url("session.do_26", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6773", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_27", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_28", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6774", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("refProfessional.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/professional/refProfessional.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_16", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/professional/refProfessional.jsp", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("refProfessionalList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/professional/refProfessional.jsp", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_7", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t133.inf", 
		LAST);

	web_url("ext-all.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ext-2.0.2/ext-all.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t134.inf", 
		LAST);

	web_url("education.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/education/education.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t135.inf", 
		LAST);

	web_url("blank.jsp_17", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t137.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_8", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t136.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("__package__.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/widget/__package__.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t138.inf", 
		LAST);

	web_url("Parse.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/xml/Parse.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t139.inf", 
		LAST);

	web_url("Widget.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/widget/Widget.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t140.inf", 
		LAST);

	web_url("declare.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/lang/declare.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t141.inf", 
		LAST);

	web_url("ns.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/ns.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t142.inf", 
		LAST);

	web_url("Manager.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/widget/Manager.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t143.inf", 
		LAST);

	web_url("a11y.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/a11y.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t144.inf", 
		LAST);

	web_url("__package__.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/uri/__package__.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t145.inf", 
		LAST);

	web_url("Parse.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/widget/Parse.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t146.inf", 
		LAST);

	web_url("DomWidget.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/widget/DomWidget.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t147.inf", 
		LAST);

	web_url("HtmlWidget.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/widget/HtmlWidget.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t148.inf", 
		LAST);

	web_url("util.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/html/util.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t149.inf", 
		LAST);

	web_url("toggle.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/lfx/toggle.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t150.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_submit_data("empty.jsp_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("MILWAUKEE_TC2_07_Click_LicenseProfessionals",LR_AUTO);

	lr_think_time(14);

	lr_start_transaction("MILWAUKEE_TC2_08_Click_LicenseProfessionals_SearchTab");

	web_url("session.do_29", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6774&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t152.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("refProfessionalList.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?mode=quickQuery&lookup=false", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_8", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t154.inf", 
		LAST);

	web_url("blank.jsp_18", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t156.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_9", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t155.inf", 
		LAST);

	web_submit_data("ajax.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t157.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("empty.jsp_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t160.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("MILWAUKEE_TC2_08_Click_LicenseProfessionals_SearchTab",LR_AUTO);

	lr_think_time(7);

	lr_start_transaction("MILWAUKEE_TC2_09_Search_LicenseProfessionals_Submit");

	web_url("session.do_30", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6774&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_31", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6774&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("refProfessionalList.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFPROFESSIONALLISTACTIONFORM", "Value=3e1ad12f3fa9e2ebe31d86f312fcd5a7", ENDITEM, 
		"Name=value(FirstEntryURL)", "Value=/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", ENDITEM, 
		"Name=value(CurrentEntryURL)", "Value=/portlets/professional/ref/refProfessionalList.do?value(mode)=search&module=Building", ENDITEM, 
		"Name=portlet_language", "Value=en_US", ENDITEM, 
		"Name=refresh_target", "Value=", ENDITEM, 
		"Name=refresh_url", "Value=", ENDITEM, 
		"Name=buttonName", "Value=", ENDITEM, 
		"Name=modeName", "Value=search", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=accelasubmitbuttonname", "Value=submit", ENDITEM, 
		"Name=itemName", "Value=", ENDITEM, 
		"Name=CurrentViewID", "Value=20042", ENDITEM, 
		"Name=exceptionLogID", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=20042", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=GoCZVlB2ESOljt01glsGuFk5", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=isFilterContactAssociatedLP", "Value=null", ENDITEM, 
		"Name=value(stateLicense)", "Value=5902", ENDITEM, 
		"Name=value(licState)", "Value=", ENDITEM, 
		"Name=date(licenseissuedate)", "Value=", ENDITEM, 
		"Name=date(licenselastrenewaldate)", "Value=", ENDITEM, 
		"Name=date(licenseexpirationdate)", "Value=", ENDITEM, 
		"Name=value(address2)", "Value=", ENDITEM, 
		"Name=value(phone1)", "Value=", ENDITEM, 
		"Name=value(phone2)", "Value=", ENDITEM, 
		"Name=value(phone3)", "Value=", ENDITEM, 
		"Name=value(acaPermission)", "Value=", ENDITEM, 
		"Name=value(fax)", "Value=", ENDITEM, 
		"Name=value(EMailAddress)", "Value=", ENDITEM, 
		"Name=value(comment)", "Value=", ENDITEM, 
		"Name=value(insuranceco)", "Value=", ENDITEM, 
		"Name=value(insuranceamount)", "Value=", ENDITEM, 
		"Name=value(policy)", "Value=", ENDITEM, 
		"Name=date(insuranceexpdate)", "Value=", ENDITEM, 
		"Name=value(businesslicense)", "Value=", ENDITEM, 
		"Name=date(businesslicexpdate)", "Value=", ENDITEM, 
		"Name=value(auditstatus)", "Value=", ENDITEM, 
		"Name=value(salutation)", "Value=", ENDITEM, 
		"Name=value(gender)", "Value=", ENDITEM, 
		"Name=value(postOfficeBox)", "Value=", ENDITEM, 
		"Name=value(busName2)", "Value=", ENDITEM, 
		"Name=date(birthDate)", "Value=", ENDITEM, 
		"Name=value(contrLicNo)", "Value=", ENDITEM, 
		"Name=value(contLicBusName)", "Value=", ENDITEM, 
		"Name=value(address3)", "Value=", ENDITEM, 
		"Name=value(wcExempt)", "Value=", ENDITEM, 
		"Name=value(wcInsCoCode)", "Value=", ENDITEM, 
		"Name=value(wcPolicyNo)", "Value=", ENDITEM, 
		"Name=date(wcExpDate)", "Value=", ENDITEM, 
		"Name=value(licSeqNbr)", "Value=", ENDITEM, 
		"Name=value(providerName)", "Value=", ENDITEM, 
		"Name=value(providerNo)", "Value=", ENDITEM, 
		"Name=value(degree)", "Value=", ENDITEM, 
		"Name=value(discipline)", "Value=", ENDITEM, 
		"Name=value(typeFlag)", "Value=", ENDITEM, 
		"Name=value(maskformat_socialSecurityNumber)", "Value=AAA-AA-AAAA", ENDITEM, 
		"Name=value(socialSecurityNumber)", "Value=", ENDITEM, 
		"Name=value(maskformat_fein)", "Value=", ENDITEM, 
		"Name=value(fein)", "Value=", ENDITEM, 
		"Name=value(title)", "Value=", ENDITEM, 
		"Name=value(suffixName)", "Value=", ENDITEM, 
		"Name=value(genericTemplateAttribute*fieldName)", "Value=", ENDITEM, 
		"Name=value(genericTemplateAttribute*defaultValue)", "Value=", ENDITEM, 
		"Name=value(genericTemplateTableValue*fieldName)", "Value=", ENDITEM, 
		"Name=value(genericTemplateTableValue*defaultValue)", "Value=", ENDITEM, 
		"Name=none", "Value=", ENDITEM, 
		"Name=isFilterContactAssociatedLP", "Value=null", ENDITEM, 
		"Name=value(contactfirstname)", "Value=", ENDITEM, 
		"Name=none", "Value=", ENDITEM, 
		"Name=isFilterContactAssociatedLP", "Value=null", ENDITEM, 
		"Name=value(contactmiddlename)", "Value=", ENDITEM, 
		"Name=none", "Value=", ENDITEM, 
		"Name=isFilterContactAssociatedLP", "Value=null", ENDITEM, 
		"Name=value(contactlastname)", "Value=", ENDITEM, 
		"Name=none", "Value=", ENDITEM, 
		"Name=isFilterContactAssociatedLP", "Value=null", ENDITEM, 
		"Name=value(licensetype)", "Value=", ENDITEM, 
		"Name=none", "Value=", ENDITEM, 
		"Name=isFilterContactAssociatedLP", "Value=null", ENDITEM, 
		"Name=value(businessName)", "Value=", ENDITEM, 
		"Name=none", "Value=", ENDITEM, 
		"Name=isFilterContactAssociatedLP", "Value=null", ENDITEM, 
		"Name=value(licenseBoard)", "Value=", ENDITEM, 
		"Name=none", "Value=", ENDITEM, 
		"Name=isFilterContactAssociatedLP", "Value=null", ENDITEM, 
		"Name=value(address1)", "Value=", ENDITEM, 
		"Name=none", "Value=", ENDITEM, 
		"Name=isFilterContactAssociatedLP", "Value=null", ENDITEM, 
		"Name=value(city)", "Value=", ENDITEM, 
		"Name=none", "Value=", ENDITEM, 
		"Name=isFilterContactAssociatedLP", "Value=null", ENDITEM, 
		"Name=value(state)", "Value=", ENDITEM, 
		"Name=none", "Value=", ENDITEM, 
		"Name=isFilterContactAssociatedLP", "Value=null", ENDITEM, 
		"Name=value(zip_disp)", "Value=", ENDITEM, 
		"Name=value(zip)", "Value=", ENDITEM, 
		"Name=none", "Value=", ENDITEM, 
		"Name=isFilterContactAssociatedLP", "Value=null", ENDITEM, 
		"Name=value(countryCode)", "Value=", ENDITEM, 
		"Name=none", "Value=", ENDITEM, 
		"Name=isFilterContactAssociatedLP", "Value=null", ENDITEM, 
		"Name=none", "Value=", ENDITEM, 
		"Name=value(templateGroup)", "Value=G3PROFESSIONAL", ENDITEM, 
		"Name=value(mode)", "Value=list", ENDITEM, 
		"Name=valuetextarea15", "Value=", ENDITEM, 
		"Name=sourcetextarea15", "Value=", ENDITEM, 
		"Name=layouttextarea15", "Value=", ENDITEM, 
		"Name=uiuid", "Value=15", ENDITEM, 
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(socialSecurityNumber)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"}}}", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_9", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t164.inf", 
		LAST);

	web_url("blank.jsp_19", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t166.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_10", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t165.inf", 
		LAST);

	web_submit_data("empty.jsp_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t167.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("MILWAUKEE_TC2_09_Search_LicenseProfessionals_Submit",LR_AUTO);

	lr_think_time(6);

	lr_start_transaction("MILWAUKEE_TC2_10_Click_Contacts");

	web_url("session.do_32", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6774&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/professional/ref/refProfessionalList.do?module=Building", 
		"Snapshot=t168.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_33", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t169.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("recentlyViewed.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t170.inf", 
		LAST);

	web_url("session.do_34", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6774", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_35", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t172.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_36", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6775", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("refContact.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/contact/refContact.jsp?mode=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t174.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("blank.jsp_20", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/contact/refContact.jsp?mode=search", 
		"Snapshot=t175.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_21", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/contact/refContact.jsp?mode=search", 
		"Snapshot=t176.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_22", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/contact/refContact.jsp?mode=search", 
		"Snapshot=t177.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("refContactList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=MILWAUKEE", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/contact/refContact.jsp?mode=search", 
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_10", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=MILWAUKEE", 
		"Snapshot=t179.inf", 
		LAST);

	web_url("Link.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/widget/Link.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=MILWAUKEE", 
		"Snapshot=t180.inf", 
		LAST);

	web_url("blank.jsp_23", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=MILWAUKEE", 
		"Snapshot=t182.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_11", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=MILWAUKEE", 
		"Snapshot=t181.inf", 
		LAST);

	web_submit_data("empty.jsp_10", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("MILWAUKEE_TC2_10_Click_Contacts",LR_AUTO);

	lr_think_time(8);

	lr_start_transaction("MILWAUKEE_TC2_11_Click_Search_Contacts_Tab");

	web_url("session.do_37", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6775&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=MILWAUKEE", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("refContactList.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?mode=quickQuery&lookup=false&value(usedQueryInfo)=Y&serviceProviderCode=MILWAUKEE", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_11", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t186.inf", 
		LAST);

	web_url("blank.jsp_24", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_12", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t187.inf", 
		LAST);

	web_submit_data("ajax.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("empty.jsp_11", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("base64.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/base64.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t191.inf", 
		LAST);

	web_submit_data("regionalSyncMask.do_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t193.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t194.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t195.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("session.do_38", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6775&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t197.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC2_11_Click_Search_Contacts_Tab",LR_AUTO);

	lr_think_time(8);

	lr_start_transaction("MILWAUKEE_TC2_12_Search_Contacts_Submit");

	web_url("session.do_39", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6775&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t198.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(6);

	web_url("session.do_40", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6775&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t199.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("refContactList.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", 
		"Snapshot=t200.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORM", "Value=d40ffc077e0a0c2a56fc767d0c20aa85", ENDITEM, 
		"Name=value(FirstEntryURL)", "Value=/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", ENDITEM, 
		"Name=value(CurrentEntryURL)", "Value=/portlets/contact/ref/refContactList.do?value(mode)=search&value(lookup)=false&value(usedQueryInfo)=Y&module=Building", ENDITEM, 
		"Name=portlet_language", "Value=en_US", ENDITEM, 
		"Name=refresh_target", "Value=", ENDITEM, 
		"Name=refresh_url", "Value=", ENDITEM, 
		"Name=buttonName", "Value=", ENDITEM, 
		"Name=modeName", "Value=search", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=accelasubmitbuttonname", "Value=submit", ENDITEM, 
		"Name=itemName", "Value=", ENDITEM, 
		"Name=CurrentViewID", "Value=38", ENDITEM, 
		"Name=exceptionLogID", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=value(portlet_soundex)", "Value=off", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=38", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=GoCZVlB2ESOljt01glsGuFk5", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=search", ENDITEM, 
		"Name=value(capcontactid)", "Value=", ENDITEM, 
		"Name=value(sync)", "Value=", ENDITEM, 
		"Name=value(isDisableRefContact)", "Value=", ENDITEM, 
		"Name=value(lookup)", "Value=false", ENDITEM, 
		"Name=value(type)", "Value=", ENDITEM, 
		"Name=value(actType)", "Value=", ENDITEM, 
		"Name=value(fromDaily)", "Value=", ENDITEM, 
		"Name=value(scheduleNbr)", "Value=", ENDITEM, 
		"Name=value(locationNbr)", "Value=", ENDITEM, 
		"Name=value(refExamNbr)", "Value=", ENDITEM, 
		"Name=value(providerNbr)", "Value=", ENDITEM, 
		"Name=value(from)", "Value=", ENDITEM, 
		"Name=value(unDoAssign)", "Value=", ENDITEM, 
		"Name=value(providerEventBuilder)", "Value=", ENDITEM, 
		"Name=value(usedQueryInfo)", "Value=Y", ENDITEM, 
		"Name=value(contactType)", "Value=", ENDITEM, 
		"Name=value(relation)", "Value=", ENDITEM, 
		"Name=value(title)", "Value=", ENDITEM, 
		"Name=value(firstName)", "Value=Mike", ENDITEM, 
		"Name=value(fullName)", "Value=", ENDITEM, 
		"Name=value(addressLine1)", "Value=", ENDITEM, 
		"Name=value(addressLine2)", "Value=", ENDITEM, 
		"Name=value(addressLine3)", "Value=", ENDITEM, 
		"Name=value(city)", "Value=", ENDITEM, 
		"Name=value(state)", "Value=", ENDITEM, 
		"Name=value(zip)", "Value=", ENDITEM, 
		"Name=value(countryCode)", "Value=", ENDITEM, 
		"Name=value(fax)", "Value=", ENDITEM, 
		"Name=value(preferredChannel)", "Value=", ENDITEM, 
		"Name=value(auditStatus)", "Value=", ENDITEM, 
		"Name=value(contactTypeFlag)", "Value=", ENDITEM, 
		"Name=value(tradeName)", "Value=", ENDITEM, 
		"Name=value(activityModel*activityTemplate)", "Value=", ENDITEM, 
		"Name=value(salutation)", "Value=", ENDITEM, 
		"Name=value(postOfficeBox)", "Value=", ENDITEM, 
		"Name=value(activityModel*activityName)", "Value=", ENDITEM, 
		"Name=value(activityModel*activityType)", "Value=", ENDITEM, 
		"Name=value(activityModel*activityDescription)", "Value=", ENDITEM, 
		"Name=value(activityModel*activityAttributeLabel)", "Value=", ENDITEM, 
		"Name=value(activityModel*activityAttributeValue)", "Value=", ENDITEM, 
		"Name=value(namesuffix)", "Value=", ENDITEM, 
		"Name=value(businessName2)", "Value=", ENDITEM, 
		"Name=value(birthCity)", "Value=", ENDITEM, 
		"Name=value(birthState)", "Value=", ENDITEM, 
		"Name=value(birthRegion)", "Value=", ENDITEM, 
		"Name=value(race)", "Value=", ENDITEM, 
		"Name=date(deceasedDate)", "Value=", ENDITEM, 
		"Name=value(passportNumber)", "Value=", ENDITEM, 
		"Name=value(driverLicenseNbr)", "Value=", ENDITEM, 
		"Name=value(driverLicenseState)", "Value=", ENDITEM, 
		"Name=value(stateIDNbr)", "Value=", ENDITEM, 
		"Name=value(contactAddressPK*addressID)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*addressType)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*recipient)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*fullAddress)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*addressLine2)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*addressLine3)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*houseNumberStart)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*houseNumberEnd)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*houseNumberAlphaStart)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*houseNumberAlphaEnd)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*levelPrefix)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*levelNumberStart)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*levelNumberEnd)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*streetDirection)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*streetPrefix)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*streetName)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*streetSuffix)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*unitType)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*unitStart)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*unitEnd)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*streetSuffixDirection)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*validateFlag)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*phone)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*fax)", "Value=", ENDITEM, 
		"Name=value(auditModel*auditStatus)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=value(genericTemplateAttribute*fieldName)", "Value=", ENDITEM, 
		"Name=value(genericTemplateAttribute*defaultValue)", "Value=", ENDITEM, 
		"Name=value(genericTemplateTableValue*fieldName)", "Value=", ENDITEM, 
		"Name=value(genericTemplateTableValue*defaultValue)", "Value=", ENDITEM, 
		"Name=value(middleName)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=value(lastName)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=ACMask_38_2_value(phone1_disp)", "Value=", ENDITEM, 
		"Name=ACMask_38_2_value(phone1)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=value(contactSeqNumber)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=value(businessName)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=ACMask_38_5_value(phone2_disp)", "Value=", ENDITEM, 
		"Name=ACMask_38_5_value(phone2)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=value(email)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=ACMask_38_22_value(phone3_disp)", "Value=", ENDITEM, 
		"Name=ACMask_38_22_value(phone3)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=value(contactAddressModel*addressLine1)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=value(contactAddressModel*city)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=value(contactAddressModel*state)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=value(contactAddressModel*zip_disp)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*zip)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=value(contactAddressModel*countryCode)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=value(socialSecurityNumber)", "Value=", ENDITEM, 
		"Name=value(maskformat_socialSecurityNumber)", "Value=AAA-AA-AAAA", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=value(fein)", "Value=", ENDITEM, 
		"Name=value(maskformat_fein)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=date(birthDate)", "Value=", ENDITEM, 
		"Name=date(endBirthDate)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=value(gender)", "Value=", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=value(templateGroup)", "Value=G3CONTACT", ENDITEM, 
		"Name=isShowContactAddressFields", "Value=Y", ENDITEM, 
		"Name=valuetextarea16", "Value=", ENDITEM, 
		"Name=sourcetextarea16", "Value=", ENDITEM, 
		"Name=layouttextarea16", "Value=", ENDITEM, 
		"Name=uiuid", "Value=16", ENDITEM, 
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(socialSecurityNumber)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"}}}", ENDITEM, 
		LAST);

	web_url("AAHELP.js_12", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t201.inf", 
		LAST);

	web_url("pa.min.js_13", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t202.inf", 
		LAST);

	web_submit_data("empty.jsp_12", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t203.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("blank.jsp_25", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t204.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC2_12_Search_Contacts_Submit",LR_AUTO);

	lr_think_time(14);

	lr_start_transaction("MILWAUKEE_SignOut");

	web_url("session.do_41", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.d6775&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactList.do?module=Building", 
		"Snapshot=t205.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(4);

	web_url("signoff.do", 
		"URL=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t206.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("signout.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/security/signout.do", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t207.inf", 
		LAST);

	web_submit_data("portal", 
		"Action=https://av-pt-ferrari.accela.com/jetspeed/portal?action=JClearCookie", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t208.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("logoutAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=MILWAUKEE&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t209.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("hostSignon.do_4", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=MILWAUKEE&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Snapshot=t210.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("host-signon.css_2", 
		"URL=https://av-pt-ferrari.accela.com/security/css/host-signon.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Snapshot=t211.inf", 
		LAST);

	web_url("spacer.gif_2", 
		"URL=https://av-pt-ferrari.accela.com/security/images/spacer.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Snapshot=t212.inf", 
		LAST);

	web_url("hostSignon.do_5", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Snapshot=t213.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("spacer.gif_3", 
		"URL=https://av-pt-ferrari.accela.com/security/images/spacer.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t218.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("sso.js_2", 
		"URL=https://av-pt-ferrari.accela.com/security/javascript/sso.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t214.inf", 
		LAST);

	web_url("login.css_2", 
		"URL=https://av-pt-ferrari.accela.com/security/includes/login.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t215.inf", 
		LAST);

	web_url("accela_logo_v2.jpg_2", 
		"URL=https://av-pt-ferrari.accela.com/security/images/accela_logo_v2.jpg", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t216.inf", 
		LAST);

	web_url("hook.png", 
		"URL=https://av-pt-ferrari.accela.com/security/images/hook.png", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t217.inf", 
		LAST);

	web_url("login-bar.gif_2", 
		"URL=https://av-pt-ferrari.accela.com/security/images/login-bar.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t219.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("MILWAUKEE_SignOut",LR_AUTO);

	return 0;
}