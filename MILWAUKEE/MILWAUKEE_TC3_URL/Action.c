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

	web_url("hostSignon.do", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?successURL=https%3A%2F%2Fav-pt-ferrari.accela.com%2Fportlets%2Fspa%2Fdashboard.do&SignOnModule=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("l", 
		"URL=https://translate.googleapis.com/translate_a/l?client=chrome&cb=sl&hl=en&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw&alpha=1", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("searchdomaincheck", 
		"URL=https://www.google.com/searchdomaincheck?format=url&type=chrome", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("host-signon.css", 
		"URL=https://av-pt-ferrari.accela.com/security/css/host-signon.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("spacer.gif", 
		"URL=https://av-pt-ferrari.accela.com/security/images/spacer.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("hostSignon.do_2", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t8.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("spacer.gif_3", 
		"URL=https://av-pt-ferrari.accela.com/security/images/spacer.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t14.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("aalogin_header.gif", 
		"URL=https://www.accela.com/ext/web/aa/assets/aalogin_header.gif", 
		"Resource=1", 
		"Referer=https://www.accela.com/ext/web/aa/header.htm", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("spacer.gif_2", 
		"URL=https://www.accela.com/ext/web/aa/assets/spacer.gif", 
		"Resource=1", 
		"Referer=https://www.accela.com/ext/web/aa/header.htm", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("login.css", 
		"URL=https://av-pt-ferrari.accela.com/security/includes/login.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("sso.js", 
		"URL=https://av-pt-ferrari.accela.com/security/javascript/sso.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("accela_logo_v2.jpg", 
		"URL=https://av-pt-ferrari.accela.com/security/images/accela_logo_v2.jpg", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("login-bar.gif", 
		"URL=https://av-pt-ferrari.accela.com/security/images/login-bar.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t15.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(17);

	web_url("client_model_v5.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t16.inf", 
		LAST);

	lr_think_time(8);

	lr_start_transaction("MILWAUKEE_Login");

	web_custom_request("loginAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?requestType=checkWebSSOAdapter&servProvCode=MILWAUKEE", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	lr_think_time(4);

	web_submit_data("hostSignon.do_3", 
		"Action=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=action", "Value=signon", ENDITEM, 
		"Name=successUrl", "Value=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", ENDITEM, 
		"Name=cookieUserName", "Value=", ENDITEM, 
		"Name=cookieAgencyName", "Value=", ENDITEM, 
		"Name=requestToken", "Value=272327a027af", ENDITEM, 
		"Name=requestLanguageToken", "Value=280ec53bef1", ENDITEM, 
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
		"Snapshot=t19.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("auth.do", 
		"URL=https://av-pt-ferrari.accela.com/security/auth.do?signOffScript=https://av-pt-ferrari.accela.com/portlets/security/signout.do&switchAgencyScript=https://av-pt-ferrari.accela.com/portlets/commons/sso/blank.jsp&CSRF_REQ_PARAM=", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("dashboard.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t21.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(5);

	web_url("zhy8lto.js", 
		"URL=https://use.typekit.net/zhy8lto.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t22.inf", 
		LAST);

	web_custom_request("text.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t23.inf", 
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
		"Snapshot=t24.inf", 
		LAST);

	web_url("pa.min.js", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("switchAgency.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/switchAgency.do?mode=list", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("p.gif", 
		"URL=https://p.typekit.net/p.gif?s=1&k=zhy8lto&ht=tk&h=av-pt-ferrari.accela.com&f=139.140.175.176&a=621408&js=1.19.2&app=typekit&e=js&_=1535587890171", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("userSecurityProfile.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/userSecurityProfile.do?mode=getSecurityProfileByModule&items=0375", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t28.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("userinfo.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/user/userinfo.do?mode=userInfo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t29.inf", 
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
		"Snapshot=t30.inf", 
		LAST);

	web_url("userSecurityProfile.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/userSecurityProfile.do?mode=getSecurityProfileByModule&items=0008,8488,8143,8400,8145,8144,8478,8213,8477,8487,8132", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("launchPad.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/launchPad.do?mode=getUserPages", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("userSecurityProfile.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/userSecurityProfile.do?mode=getSwitchLinkPermissionByDefaultModule", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t33.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("session.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t34.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("favoritePages.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/favoritePages.do?mode=list", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("switchAgency.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/switchAgency.do?mode=setAgency&serviceProviderCode=MILWAUKEE", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("getTaskFilterStatusList.json", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/mock-api/getTaskFilterStatusList.json", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("dashboardTaskQuickQueries.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboardTaskQuickQueries.do", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("dashboardTaskCards.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboardTaskCards.do?mode=multiAgencyTaskCounts&quickQueryId=", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("dashboardTaskCards.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboardTaskCards.do?end=6&mode=initTask&serviceProviderCode=MILWAUKEE&start=1", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("recentlyViewed.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t41.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("MILWAUKEE_Login",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("MILWAUKEE_TC3_01_ClickRecords");

	web_url("plugins_win.json", 
		"URL=https://www.gstatic.com/chrome/config/plugins_2/plugins_win.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t43.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t45.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("myCAPDetailPortlet.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t46.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("blank.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t47.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("capSearch.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t49.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t50.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("recentlyViewed.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("session.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("AAHELP.js", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("pa.min.js_2", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t54.inf", 
		LAST);

	web_url("blank.jsp_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("empty.jsp", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_01_ClickRecords",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("MILWAUKEE_TC3_02_Records_ClickNew");

	web_url("session.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("capTypePickerSelector.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_2", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t59.inf", 
		LAST);

	web_url("blank.jsp_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t61.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_3", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t60.inf", 
		LAST);

	web_submit_data("empty.jsp_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t62.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_02_Records_ClickNew",LR_AUTO);

	web_concurrent_start(NULL);

	web_url("ChVnb29nLWJhZGJpbnVybC1zaGF2YXI4AUACSgwIARDB9AkYx_QJIAFKDAgAEJ7OCRikzgkgAQ", 
		"URL=https://safebrowsing-cache.google.com/safebrowsing/rd/ChVnb29nLWJhZGJpbnVybC1zaGF2YXI4AUACSgwIARDB9AkYx_QJIAFKDAgAEJ7OCRikzgkgAQ", 
		"Resource=1", 
		"RecContentType=application/vnd.google.safebrowsing-chunk", 
		"Referer=", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("ChNnb29nLW1hbHdhcmUtc2hhdmFyOAFAAkoMCAEQnu4RGKPuESABSgwIABCjgRIYqYESIAE", 
		"URL=https://safebrowsing-cache.google.com/safebrowsing/rd/ChNnb29nLW1hbHdhcmUtc2hhdmFyOAFAAkoMCAEQnu4RGKPuESABSgwIABCjgRIYqYESIAE", 
		"Resource=1", 
		"RecContentType=application/vnd.google.safebrowsing-chunk", 
		"Referer=", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("ChFnb29nLXBoaXNoLXNoYXZhcjgBQAJKDAgBEIqOMxjalTMgAUoMCAAQ-9AfGILRHyAB", 
		"URL=https://safebrowsing-cache.google.com/safebrowsing/rd/ChFnb29nLXBoaXNoLXNoYXZhcjgBQAJKDAgBEIqOMxjalTMgAUoMCAAQ-9AfGILRHyAB", 
		"Resource=1", 
		"RecContentType=application/vnd.google.safebrowsing-chunk", 
		"Referer=", 
		"Snapshot=t65.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(7);

	web_url("session.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t66.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(14);

	web_custom_request("capTypePicker.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=validateCapType&modelId=&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t67.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fpicker%2FcapTypePicker.do%3FfromModel%3Dcap%26module%3DBuilding%26isGeneralCAP%3DY&value(CurrentEntryURL)=%2Fportlets%2Fpicker%2FcapTypePicker.do%3FfromModel%3Dcap%26module%3DBuilding%26isGeneralCAP%3DY&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=119&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=119&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(capTypeModel*type)=Plumbing&value(capTypeModel*subType)=Gas%20Piping&value(capTypeModel*category)=NA&value(selectModuleName)=Building&value(g1AssetGroup)=&value(g1AssetType)=&value(mode)=add&value(createCapForParcelType)=ALL&value(srLevel)=&value(capGroupIndex)=&value(capTypeModel*group)=Building&value(capTypeModel)=Building%2FPlumbing%2FGas%20Piping%2FNA&value(fromModel)=cap&value(modelId)=&"
		"value(formKey)=&value(GISCommand)=&", 
		LAST);

	web_submit_data("capTypePicker.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t68.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=value(FirstEntryURL)", "Value=/portlets/picker/capTypePicker.do?fromModel=cap&module=Building&isGeneralCAP=Y", ENDITEM, 
		"Name=value(CurrentEntryURL)", "Value=/portlets/picker/capTypePicker.do?fromModel=cap&module=Building&isGeneralCAP=Y", ENDITEM, 
		"Name=portlet_language", "Value=en_US", ENDITEM, 
		"Name=refresh_target", "Value=", ENDITEM, 
		"Name=refresh_url", "Value=", ENDITEM, 
		"Name=buttonName", "Value=", ENDITEM, 
		"Name=modeName", "Value=", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=accelasubmitbuttonname", "Value=", ENDITEM, 
		"Name=itemName", "Value=", ENDITEM, 
		"Name=CurrentViewID", "Value=119", ENDITEM, 
		"Name=exceptionLogID", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=119", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(capTypeModel*type)", "Value=Plumbing", ENDITEM, 
		"Name=value(capTypeModel*subType)", "Value=Gas Piping", ENDITEM, 
		"Name=value(capTypeModel*category)", "Value=NA", ENDITEM, 
		"Name=value(selectModuleName)", "Value=Building", ENDITEM, 
		"Name=value(g1AssetGroup)", "Value=", ENDITEM, 
		"Name=value(g1AssetType)", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=add", ENDITEM, 
		"Name=value(createCapForParcelType)", "Value=ALL", ENDITEM, 
		"Name=value(srLevel)", "Value=", ENDITEM, 
		"Name=value(capGroupIndex)", "Value=", ENDITEM, 
		"Name=value(capTypeModel*group)", "Value=Building", ENDITEM, 
		"Name=value(capTypeModel)", "Value=Building/Plumbing/Gas Piping/NA", ENDITEM, 
		"Name=value(fromModel)", "Value=cap", ENDITEM, 
		"Name=value(modelId)", "Value=", ENDITEM, 
		"Name=value(formKey)", "Value=", ENDITEM, 
		"Name=value(GISCommand)", "Value=", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_3", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t69.inf", 
		LAST);

	web_url("V360Button.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/widget/V360Button.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t70.inf", 
		LAST);

	web_url("timepicker.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/timepicker.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t71.inf", 
		LAST);

	web_url("spellchecker-caller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/spellchecker/spellchecker-caller.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t73.inf", 
		LAST);

	web_url("education.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/education/education.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t74.inf", 
		LAST);

	web_url("genericMask.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/taglib/genericMask/javascript/genericMask.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t75.inf", 
		LAST);

	web_url("blank.jsp_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t76.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ajaxAnyWhere.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ajaxAnyWhere.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t77.inf", 
		LAST);

	web_url("externalValidate4Address.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/externalValidate4Address.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t79.inf", 
		LAST);

	web_url("selectDate.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/selectDate.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t80.inf", 
		LAST);

	web_url("appSpecInfoForm.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/appSpecInfoForm.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t86.inf", 
		LAST);

	web_url("textMessageResources.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/textMessageResources.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t87.inf", 
		LAST);

	web_url("expression.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expression.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t88.inf", 
		LAST);

	web_url("expressionPageProcessor.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionPageProcessor.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t89.inf", 
		LAST);

	web_url("expressionASI.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionASI.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t90.inf", 
		LAST);

	web_url("expressionConstants.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionConstants.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t91.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_4", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t72.inf", 
		LAST);

	web_url("xhr.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/xhr.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t78.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("json.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/json.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t81.inf", 
		LAST);

	web_url("AdapterRegistry.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/AdapterRegistry.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t82.inf", 
		LAST);

	web_url("lang.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/lang.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t83.inf", 
		LAST);

	web_url("Queue.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/collections/Queue.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t84.inf", 
		LAST);

	web_url("Collections.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/collections/Collections.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t85.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_start_transaction("MILWAUKEE_TC3_03_SelectRecordType_OpenSpearForm");

	web_url("style.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/CSS/sky_blue/style.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t92.inf", 
		LAST);

	web_url("appSpecInfoTableFilter.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/CSS/sky_blue/appSpecInfoTableFilter.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t93.inf", 
		LAST);

	web_url("expressionGForm.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionGForm.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t94.inf", 
		LAST);

	web_url("expressionASIT.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionASIT.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t95.inf", 
		LAST);

	web_url("expressionGTable.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionGTable.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t96.inf", 
		LAST);

	web_url("blank.jsp_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("expressionLP.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionLP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t98.inf", 
		LAST);

	web_url("expressionContact.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionContact.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t99.inf", 
		LAST);

	web_url("expressionWorkflow.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionWorkflow.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t100.inf", 
		LAST);

	web_url("expressionAddress.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAddress.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t101.inf", 
		LAST);

	web_url("expressionContactAddress.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionContactAddress.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t102.inf", 
		LAST);

	web_url("expressionAsset.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAsset.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t103.inf", 
		LAST);

	web_url("expressionAssetAttrTable.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAssetAttrTable.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t104.inf", 
		LAST);

	web_url("getAddressListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getAddressListBySingle.do?module=Building&mode=getAddressListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("expressionAssetAttrTemplate.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAssetAttrTemplate.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t106.inf", 
		LAST);

	web_url("expressionAssetCA.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAssetCA.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t107.inf", 
		LAST);

	web_url("getParcelListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getParcelListBySingle.do?module=Building&mode=getParcelListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("SortedList.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/collections/SortedList.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t109.inf", 
		LAST);

	web_url("expressionAssetCATemplate.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAssetCATemplate.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t110.inf", 
		LAST);

	web_url("blank.jsp_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t111.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("expressionCondition.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionCondition.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("getOwnerListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getOwnerListBySingle.do?module=Building&mode=getOwnerListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t113.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("expressionTemplateForm.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionTemplateForm.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t114.inf", 
		LAST);

	web_url("expressionTemplateTable.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionTemplateTable.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t115.inf", 
		LAST);

	web_url("expressionParcel.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionParcel.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t116.inf", 
		LAST);

	web_url("expressionAddressTemplate.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAddressTemplate.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t117.inf", 
		LAST);

	web_url("expressionRecord.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionRecord.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t118.inf", 
		LAST);

	web_url("expressionParcelTemplate.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionParcelTemplate.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t119.inf", 
		LAST);

	web_url("expressionPay.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionPay.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t120.inf", 
		LAST);

	web_url("Dictionary.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/collections/Dictionary.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t121.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("blank.jsp_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t122.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("ext-all.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ext-2.0.2/ext-all.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t123.inf", 
		LAST);

	web_url("ext-base.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ext-2.0.2/adapter/ext/ext-base.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t124.inf", 
		LAST);

	web_url("appSpecInfoTable.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/appSpecInfoTable.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t125.inf", 
		LAST);

	web_url("cookie.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/cookie.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t126.inf", 
		LAST);

	web_url("ASITableFinder.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/ASITableFinder.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t127.inf", 
		LAST);

	web_url("tableExteedPatch.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/tableExteedPatch.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t128.inf", 
		LAST);

	web_url("tableOrder.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/tableOrder.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t129.inf", 
		LAST);

	web_url("docOnSpear.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/document/docOnSpear.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t130.inf", 
		LAST);

	web_url("documentEntity.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/document/documentEntity.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t131.inf", 
		LAST);

	web_url("documentEntityList.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/document/documentEntityList.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t132.inf", 
		LAST);

	web_url("documentUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/document/documentUtil.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t133.inf", 
		LAST);

	web_url("docUploadingUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/document/docUploadingUtil.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t134.inf", 
		LAST);

	web_url("docVirtualFolder.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/document/docVirtualFolder.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t135.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("blank.jsp_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t136.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("docSelectUIUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/document/docSelectUIUtil.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("docGViewUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/document/docGViewUtil.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t138.inf", 
		LAST);

	web_url("validateEmail.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/widget/validator/validateEmail.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t139.inf", 
		LAST);

	web_url("ext-core.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ext-2.0.2/ext-core.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t140.inf", 
		LAST);

	web_url("jquery.watermark.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/jquery.watermark.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t141.inf", 
		LAST);

	web_url("validate.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/validate.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t142.inf", 
		LAST);

	web_url("templateHelper.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/templateHelper.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t143.inf", 
		LAST);

	web_url("template.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/template.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t144.inf", 
		LAST);

	web_url("table.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/table.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t145.inf", 
		LAST);

	web_url("template_express.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/template_express.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t146.inf", 
		LAST);

	web_url("form.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/form.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t147.inf", 
		LAST);

	web_url("field.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/field.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t148.inf", 
		LAST);

	web_url("formlayout.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/formlayout.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t149.inf", 
		LAST);

	web_url("Date.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ext-2.0.2/source/util/Date.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t150.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("countryStateAJAX.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=WI&stateProperty=value(addressesModel*state)&aaZoneId=aazone-country-state&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.7915894051548094&aazones=aazone-country-state&width=94px", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		"Body=aazone-country-state", 
		LAST);

	web_url("blank.jsp_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t152.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("countryStateAJAX.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=WI&stateProperty=value(mailState)&aaZoneId=aazone-country-mailstate&stateReadOnly=false&country=US&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.7140471236780286&aazones=aazone-country-mailstate&width=70px", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		"Body=aazone-country-mailstate", 
		LAST);

	web_url("blank.jsp_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("edit_button.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/edit_button.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t155.inf", 
		LAST);

	web_url("delete_button.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/delete_button.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t156.inf", 
		LAST);

	web_url("calendar_medium.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/reskin/calendar_medium.png", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v2.css", 
		"Snapshot=t157.inf", 
		LAST);

	web_url("uploadWaiting.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/uploadWaiting.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t158.inf", 
		LAST);

	web_url("save_button.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/save_button.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t159.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("blank.jsp_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t160.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("reset_button.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/reset_button.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t161.inf", 
		LAST);

	web_url("cancel_button.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/cancel_button.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t162.inf", 
		LAST);

	web_url("help_button.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/help_button.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t163.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("blank.jsp_14", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t164.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("add_medium.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/reskin/add_medium.png", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v2.css", 
		"Snapshot=t165.inf", 
		LAST);

	web_url("blank.jsp_15", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t166.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("delete_small.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/reskin/delete_small.png", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v2.css", 
		"Snapshot=t167.inf", 
		LAST);

	web_url("AAHELP.js_4", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getAddressListBySingle.do?module=Building&mode=getAddressListBySingle", 
		"Snapshot=t168.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("blank.jsp_16", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t169.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ArrayList.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/collections/ArrayList.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t170.inf", 
		LAST);

	web_url("blank.jsp_17", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("validate.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/validate.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t172.inf", 
		LAST);

	web_url("common.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/validate/common.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t173.inf", 
		LAST);

	web_url("regexp.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/regexp.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t174.inf", 
		LAST);

	web_url("pa.min.js_5", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getParcelListBySingle.do?module=Building&mode=getParcelListBySingle", 
		"Snapshot=t175.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_submit_data("empty.jsp_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t176.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("empty.jsp_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t177.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("empty.jsp_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("ajax.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t179.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("blank.jsp_18", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t180.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_19", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t181.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("empty.jsp_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t182.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("getGISListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?mode=getGISListBySingle&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("appSpecInfoForm.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=buildDrillList&module=Building&guideSheetSeq=&singleMode=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_concurrent_start(NULL);

	web_url("console.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/debug/console.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t185.inf", 
		LAST);

	web_url("ConsoleLogger.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/logging/ConsoleLogger.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t186.inf", 
		LAST);

	web_url("Logger.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/logging/Logger.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t187.inf", 
		LAST);

	web_url("us.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/validate/us.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t188.inf", 
		LAST);

	web_url("datetime.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/validate/datetime.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t189.inf", 
		LAST);

	web_url("format.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/date/format.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t190.inf", 
		LAST);

	web_url("common.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/date/common.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t191.inf", 
		LAST);

	web_url("supplemental.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/date/supplemental.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t192.inf", 
		LAST);

	web_url("common.js_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/common.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t193.inf", 
		LAST);

	web_url("gregorian.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/calendar/nls/gregorian.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t194.inf", 
		LAST);

	web_url("gregorian.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/calendar/nls/en/gregorian.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t195.inf", 
		LAST);

	web_url("gregorian.js_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/calendar/nls/en-us/gregorian.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t196.inf", 
		LAST);

	web_url("gregorianExtras.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/calendar/nls/gregorianExtras.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t197.inf", 
		LAST);

	web_url("gregorianExtras.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/calendar/nls/en-us/gregorianExtras.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t198.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("search.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t199.inf", 
		"Mode=HTTP", 
		"Body=categoryName=Portlet - Expression", 
		LAST);

	web_submit_data("regionalSyncMask.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t200.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t202.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t203.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("getGISListBySingle.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?mode=getGISListBySingle&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t204.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("expression.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t205.inf", 
		"Mode=HTTP", 
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22PIPE%20FOOTAGE%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22EQUIPMENT%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&isReload=false&module=Building&capType=Building%2FPlumbing%2FGas%20Piping%2FNA", 
		LAST);

	web_url("AAHELP.js_5", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?mode=getGISListBySingle&module=Building", 
		"Snapshot=t206.inf", 
		LAST);

	web_url("pa.min.js_6", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?mode=getGISListBySingle&module=Building", 
		"Snapshot=t207.inf", 
		LAST);

	web_submit_data("empty.jsp_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t208.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("session.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t209.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_03_SelectRecordType_OpenSpearForm",LR_AUTO);

	lr_think_time(7);

	lr_start_transaction("MILWAUKEE_TC3_04_Address_Clear");

	web_url("session.do_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t210.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("refAddressListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingle.do?mode=clearAddress&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t211.inf", 
		"Mode=HTTP", 
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
		LAST);

	lr_think_time(4);

	lr_start_transaction("MILWAUKEE_TC3_05_Address_Search");

	web_url("session.do_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t212.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("refAddressListBySingle.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingle.do?mode=directSearch&from=SPEAR&listBySingle=true&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t213.inf", 
		"Mode=HTTP", 
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
		LAST);

	web_custom_request("countryStateAJAX.jsp_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?stateProperty=value(addressesModel*state)&aaZoneId=aazone-country-state&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.7828946153167635&aazones=aazone-country-state&statevalue=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t214.inf", 
		"Mode=HTTP", 
		"Body=aazone-country-state", 
		LAST);

	web_url("autoSyncAPOStrucEstabBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/autoSyncAPOStrucEstabBySingle.do?mode=listAssociatedObjs&module=Building&value(typeOfSelectedObj)=ADDRESS&value(action)=Add", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t215.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getAddressListBySingle.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getAddressListBySingle.do?module=Building&mode=getAddressListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t216.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getParcelListBySingle.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getParcelListBySingle.do?module=Building&mode=getParcelListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t217.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t218.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getOwnerListBySingle.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getOwnerListBySingle.do?module=Building&mode=getOwnerListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t219.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getGISListBySingle.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?mode=getGISListBySingle&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t220.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_6", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getAddressListBySingle.do?module=Building&mode=getAddressListBySingle", 
		"Snapshot=t221.inf", 
		LAST);

	web_url("AAHELP.js_7", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getOwnerListBySingle.do?module=Building&mode=getOwnerListBySingle", 
		"Snapshot=t222.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_7", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getAddressListBySingle.do?module=Building&mode=getAddressListBySingle", 
		"Snapshot=t223.inf", 
		LAST);

	web_submit_data("empty.jsp_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t224.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("empty.jsp_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t225.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("empty.jsp_10", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t226.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("empty.jsp_11", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t227.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_05_Address_Search",LR_AUTO);

	lr_end_transaction("MILWAUKEE_TC3_04_Address_Clear",LR_AUTO);

	lr_think_time(40);

	lr_start_transaction("MILWAUKEE_TC3_08_SubmitApplication_AddNewApplication");

	web_url("session.do_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t228.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(14);

	web_url("session.do_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t229.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("getDocListBySingle.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/document/getDocListBySingle.do?mode=getDocSource4SPEAR&module=Building&callbackJs=submitInNewCAP&module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t230.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_think_time(31);

	web_url("generate_204", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t231.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(5);

	web_url("4665_all_crl-set-6012918938181482732.data.crx2", 
		"URL=http://redirector.gvt1.com/edgedl/release2/chrome_component/KsGg7XiTN9s_4665/4665_all_crl-set-6012918938181482732.data.crx2", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t232.inf", 
		LAST);

	web_submit_data("CapBySingle.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t233.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=value(FirstEntryURL)", "Value=", ENDITEM, 
		"Name=value(CurrentEntryURL)", "Value=", ENDITEM, 
		"Name=portlet_language", "Value=en_US", ENDITEM, 
		"Name=refresh_target", "Value=", ENDITEM, 
		"Name=refresh_url", "Value=", ENDITEM, 
		"Name=buttonName", "Value=", ENDITEM, 
		"Name=modeName", "Value=new", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=accelasubmitbuttonname", "Value=newCap", ENDITEM, 
		"Name=itemName", "Value=", ENDITEM, 
		"Name=CurrentViewID", "Value=", ENDITEM, 
		"Name=exceptionLogID", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(paLicenseId)", "Value=", ENDITEM, 
		"Name=isRefreshPartialCondition", "Value=N", ENDITEM, 
		"Name=value(mode)", "Value=add", ENDITEM, 
		"Name=value(srTest)", "Value=", ENDITEM, 
		"Name=value(capType)", "Value=Building/Plumbing/Gas Piping/NA", ENDITEM, 
		"Name=value(capID)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*shortNotes)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*creatorDeptAlias)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*asgnDept)", "Value=", ENDITEM, 
		"Name=value(capModel*capSubType)", "Value=", ENDITEM, 
		"Name=date(capDetailModel*closedDate)", "Value=", ENDITEM, 
		"Name=date(capDetailModel*asgnDate)", "Value=", ENDITEM, 
		"Name=date(capDetailModel*completeDate)", "Value=", ENDITEM, 
		"Name=date(capDetailModel*scheduledDate)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*scheduledTime)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*completeDept)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*completeStaff)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*closedDept)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*closedBy)", "Value=", ENDITEM, 
		"Name=value(capModel*capStatus)", "Value=Open", ENDITEM, 
		"Name=value(capDetailModel*asgnStaff)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*priority)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*reportedChannel)", "Value=Call Center", ENDITEM, 
		"Name=value(capDetailModel*severity)", "Value=", ENDITEM, 
		"Name=value(capModel*altID)", "Value=", ENDITEM, 
		"Name=value(capModel*isManualAltID)", "Value=", ENDITEM, 
		"Name=originalCAPAltID", "Value=", ENDITEM, 
		"Name=value(jobValue)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*totalFee)", "Value=0.0", ENDITEM, 
		"Name=value(capDetailModel*totalPay)", "Value=0.0", ENDITEM, 
		"Name=value(capDetailModel*balance)", "Value=0.0", ENDITEM, 
		"Name=value(capDetailModel*estProdUnits)", "Value=0.0", ENDITEM, 
		"Name=value(capDetailModel*actualProdUnits)", "Value=0.0", ENDITEM, 
		"Name=value(capDetailModel*estCostPerUnit)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*costPerUnit)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*estJobCost)", "Value=", ENDITEM, 
		"Name=value(blank1)", "Value=", ENDITEM, 
		"Name=value(blank2)", "Value=", ENDITEM, 
		"Name=value(blank3)", "Value=", ENDITEM, 
		"Name=value(blank4)", "Value=", ENDITEM, 
		"Name=value(blank5)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*totalJobCost)", "Value=", ENDITEM, 
		"Name=value(b1ExpirationModel*expStatus)", "Value=", ENDITEM, 
		"Name=date(b1ExpirationModel*expDate)", "Value=", ENDITEM, 
		"Name=date(capModel*reportedDate)", "Value=08/29/2018", ENDITEM, 
		"Name=value(capModel*reportedTime)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*anonymousFlag)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*referenceType)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*enforceDept)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*enforceOfficerName)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*enforceOfficerId)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*inspectorDept)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*inspectorName)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*inspectorId)", "Value=", ENDITEM, 
		"Name=date(capDetailModel*appearanceDate)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*appearanceDayOfWeek)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*infractionFlag)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*misdemeanorFlag)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*offnWitnessedFlag)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*dfndtSignatureFlag)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*bookingFlag)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*statusReason)", "Value=", ENDITEM, 
		"Name=date(capDetailModel*firstIssuedDate)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*undistributedCost)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*url)", "Value=", ENDITEM, 
		"Name=value(capModel*pendingValidation)", "Value=", ENDITEM, 
		"Name=value(capType)", "Value=Building/Plumbing/Gas Piping/NA", ENDITEM, 
		"Name=date(capModel*fileDate)", "Value=08/29/2018", ENDITEM, 
		"Name=value(capModel*specialText)", "Value=", ENDITEM, 
		"Name=value(capWorkDescriptionModel*description)", "Value=", ENDITEM, 
		"Name=isShowAddress", "Value=Y", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=225", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=225", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=225", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=validateFlagOriginalValue", "Value=", ENDITEM, 
		"Name=value(addressesModel*addressType)", "Value=", ENDITEM, 
		"Name=value(addressesModel*refAddressType)", "Value=", ENDITEM, 
		"Name=value(addressesModel*houseNumberStart)", "Value=5928", ENDITEM, 
		"Name=value(addressesModel*houseNumberAlphaStart)", "Value=", ENDITEM, 
		"Name=value(addressesModel*houseNumberAlphaEnd)", "Value=", ENDITEM, 
		"Name=value(addressesModel*levelPrefix)", "Value=", ENDITEM, 
		"Name=value(addressesModel*levelNumberStart)", "Value=", ENDITEM, 
		"Name=value(addressesModel*levelNumberEnd)", "Value=", ENDITEM, 
		"Name=value(addressesModel*houseFractionStart)", "Value=", ENDITEM, 
		"Name=value(addressesModel*houseNumberEnd)", "Value=", ENDITEM, 
		"Name=value(addressesModel*houseFractionEnd)", "Value=", ENDITEM, 
		"Name=value(addressesModel*streetPrefix)", "Value=", ENDITEM, 
		"Name=value(addressesModel*streetSuffixdirection)", "Value=", ENDITEM, 
		"Name=value(addressesModel*unitEnd)", "Value=", ENDITEM, 
		"Name=value(addressesModel*countryCode)", "Value=", ENDITEM, 
		"Name=value(addressesModel*sourceFlag)", "Value=", ENDITEM, 
		"Name=value(addressesModel*addressTypeFlag)", "Value=", ENDITEM, 
		"Name=value(addressesModel*validateFlag)", "Value=", ENDITEM, 
		"Name=value(addressesModel*distance)", "Value=", ENDITEM, 
		"Name=value(addressesModel*secondaryRoad)", "Value=", ENDITEM, 
		"Name=value(addressesModel*secondaryRoadNumber)", "Value=", ENDITEM, 
		"Name=value(addressesModel*inspectionDistrictPrefix)", "Value=", ENDITEM, 
		"Name=value(addressesModel*neighberhoodPrefix)", "Value=", ENDITEM, 
		"Name=value(addressesModel*neighborhood)", "Value=", ENDITEM, 
		"Name=value(addressesModel*XCoordinator)", "Value=", ENDITEM, 
		"Name=value(addressesModel*YCoordinator)", "Value=", ENDITEM, 
		"Name=value(addressesModel*fullAddress)", "Value=", ENDITEM, 
		"Name=value(addressesModel*addressLine1)", "Value=", ENDITEM, 
		"Name=value(addressesModel*addressLine2)", "Value=", ENDITEM, 
		"Name=value(templateData)", "Value=", ENDITEM, 
		"Name=value(addressesModel*streetDirection)", "Value=", ENDITEM, 
		"Name=value(addressesModel*streetName)", "Value=state", ENDITEM, 
		"Name=value(addressesModel*streetSuffix)", "Value=", ENDITEM, 
		"Name=value(addressesModel*unitType)", "Value=", ENDITEM, 
		"Name=value(addressesModel*unitStart)", "Value=", ENDITEM, 
		"Name=value(addressesModel*primaryFlag)", "Value=Y", ENDITEM, 
		"Name=value(addressesModel*city)", "Value=MILWAUKEE", ENDITEM, 
		"Name=value(addressesModel*state)", "Value=", ENDITEM, 
		"Name=value(addressesModel*zip_disp)", "Value=", ENDITEM, 
		"Name=value(addressesModel*zip)", "Value=", ENDITEM, 
		"Name=value(addressesModel*county)", "Value=", ENDITEM, 
		"Name=value(addressesModel*addressDescription)", "Value=", ENDITEM, 
		"Name=value(addressesModel*inspectionDistrict)", "Value=", ENDITEM, 
		"Name=value(addressesModel*addressStatus)", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=New", ENDITEM, 
		"Name=value(addressesmodel*UID)", "Value=", ENDITEM, 
		"Name=value(addressesModel*refAddressId)", "Value=", ENDITEM, 
		"Name=value(l1addressnbr)", "Value=", ENDITEM, 
		"Name=value(l1addressnbr1)", "Value=", ENDITEM, 
		"Name=value(addressUID1)", "Value=", ENDITEM, 
		"Name=value(addressUID)", "Value=", ENDITEM, 
		"Name=addressViewID", "Value=117", ENDITEM, 
		"Name=value(addressSearchType)", "Value=", ENDITEM, 
		"Name=isAddress", "Value=1", ENDITEM, 
		"Name=isAddressValidation", "Value=", ENDITEM, 
		"Name=isAddressRequired", "Value=Y", ENDITEM, 
		"Name=isShowParcel", "Value=Y", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=117", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=117", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=117", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(parcelNo)", "Value=", ENDITEM, 
		"Name=value(page)", "Value=", ENDITEM, 
		"Name=value(block)", "Value=", ENDITEM, 
		"Name=value(mapNo)", "Value=", ENDITEM, 
		"Name=value(supervisorDistrict)", "Value=", ENDITEM, 
		"Name=value(inspectionDistrict)", "Value=", ENDITEM, 
		"Name=value(planArea)", "Value=", ENDITEM, 
		"Name=value(mapRef)", "Value=", ENDITEM, 
		"Name=value(gisSeqNo)", "Value=", ENDITEM, 
		"Name=value(subdivision)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(primaryParcelFlagWithoutDealing)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(section)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(tract)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(range)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(councilDistrict)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(parcelArea)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(censusTract)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(lot)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(book)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(landValue)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(improvedValue)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(exemptValue)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(township)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(legalDesc)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(parcel)", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=New", ENDITEM, 
		"Name=value(parcelModel*UID)", "Value=", ENDITEM, 
		"Name=value(l1ParcelNo)", "Value=", ENDITEM, 
		"Name=value(parcelNoBySearch1)", "Value=", ENDITEM, 
		"Name=value(parcelSearchType)", "Value=local", ENDITEM, 
		"Name=isParcel", "Value=1", ENDITEM, 
		"Name=parcelViewID", "Value=20021", ENDITEM, 
		"Name=value(parcelUID)", "Value=", ENDITEM, 
		"Name=value(parcelUID1)", "Value=", ENDITEM, 
		"Name=isParcelValidation", "Value=", ENDITEM, 
		"Name=isParcelRequired", "Value=Y", ENDITEM, 
		"Name=value(parcelExternalMode*parcelNo)", "Value=", ENDITEM, 
		"Name=value(parcelExternalMode*parcelArea)", "Value=", ENDITEM, 
		"Name=value(parcelExternalMode*book)", "Value=", ENDITEM, 
		"Name=value(parcelExternalMode*page)", "Value=", ENDITEM, 
		"Name=value(parcelExternalMode*lot)", "Value=", ENDITEM, 
		"Name=value(parcelExternalMode*legalDesc)", "Value=", ENDITEM, 
		"Name=value(parcelExternalMode*landValue)", "Value=", ENDITEM, 
		"Name=value(parcelExternalMode*improvedValue)", "Value=", ENDITEM, 
		"Name=value(parcelExternalMode*exemptValue)", "Value=", ENDITEM, 
		"Name=value(parcelExternalMode*tract)", "Value=", ENDITEM, 
		"Name=value(parcelExternalMode*block)", "Value=", ENDITEM, 
		"Name=isShowOwner", "Value=Y", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=20021", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=20021", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=20021", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=New", ENDITEM, 
		"Name=value(ownerFullName)", "Value=", ENDITEM, 
		"Name=value(templateData)", "Value=", ENDITEM, 
		"Name=value(fax)", "Value=", ENDITEM, 
		"Name=value(primaryOwner)", "Value=Y", ENDITEM, 
		"Name=value(mailAddress2)", "Value=", ENDITEM, 
		"Name=value(mailAddress3)", "Value=", ENDITEM, 
		"Name=value(mailAddress1)", "Value=", ENDITEM, 
		"Name=value(mailCity)", "Value=MILWAUKEE", ENDITEM, 
		"Name=value(mailState)", "Value=WI", ENDITEM, 
		"Name=value(mailZip_disp)", "Value=", ENDITEM, 
		"Name=value(mailZip)", "Value=", ENDITEM, 
		"Name=value(mailCountry)", "Value=US", ENDITEM, 
		"Name=value(email)", "Value=", ENDITEM, 
		"Name=value(phone_disp)", "Value=", ENDITEM, 
		"Name=value(phone)", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=New", ENDITEM, 
		"Name=value(ownerModel*UID)", "Value=", ENDITEM, 
		"Name=value(refOwnerNumber)", "Value=", ENDITEM, 
		"Name=value(ownerFname)", "Value=", ENDITEM, 
		"Name=value(ownerLname)", "Value=", ENDITEM, 
		"Name=value(ownerMname)", "Value=", ENDITEM, 
		"Name=value(UID)", "Value=", ENDITEM, 
		"Name=value(ownerSearchType)", "Value=", ENDITEM, 
		"Name=value(l1OwnerNumber)", "Value=", ENDITEM, 
		"Name=value(ownerNumber)", "Value=", ENDITEM, 
		"Name=value(ownerUID)", "Value=", ENDITEM, 
		"Name=value(ownerNoBySearch)", "Value=", ENDITEM, 
		"Name=value(ownerExternalMode*ownerFullName)", "Value=", ENDITEM, 
		"Name=value(ownerExternalMode*phone)", "Value=", ENDITEM, 
		"Name=value(ownerExternalMode*fax)", "Value=", ENDITEM, 
		"Name=value(ownerExternalMode*mailAddress1)", "Value=", ENDITEM, 
		"Name=value(ownerExternalMode*mailAddress2)", "Value=", ENDITEM, 
		"Name=value(ownerExternalMode*mailAddress3)", "Value=", ENDITEM, 
		"Name=value(ownerExternalMode*mailZip)", "Value=", ENDITEM, 
		"Name=value(ownerExternalMode*ownerFname)", "Value=", ENDITEM, 
		"Name=value(ownerExternalMode*ownerLname)", "Value=", ENDITEM, 
		"Name=value(ownerExternalMode*ownerMname)", "Value=", ENDITEM, 
		"Name=isOwner", "Value=1", ENDITEM, 
		"Name=ownerViewID", "Value=20026", ENDITEM, 
		"Name=isOwnerValidation", "Value=", ENDITEM, 
		"Name=isOwnerRequired", "Value=Y", ENDITEM, 
		"Name=isAppSpecInfo", "Value=1", ENDITEM, 
		"Name=value(capID*ID1)", "Value=", ENDITEM, 
		"Name=value(capID*ID2)", "Value=", ENDITEM, 
		"Name=value(capID*ID3)", "Value=", ENDITEM, 
		"Name=singleModeName", "Value=GENERAL", ENDITEM, 
		"Name=app_spec_info_GENERAL_Work_Type", "Value=", ENDITEM, 
		"Name=app_spec_info_GENERAL_Field_Gas_Type", "Value=", ENDITEM, 
		"Name=app_spec_info_GENERAL_Building_Type", "Value=1 Family", ENDITEM, 
		"Name=app_spec_info_GENERAL_Gas_Pressure", "Value=", ENDITEM, 
		"Name=app_spec_info_GENERAL_Cost_of_Job", "Value=", ENDITEM, 
		"Name=app_spec_info_GENERAL_Project_Name", "Value=", ENDITEM, 
		"Name=app_spec_info_GENERAL_Total_Fixtures", "Value=0", ENDITEM, 
		"Name=value(mode)", "Value=New", ENDITEM, 
		"Name=expression_portlet_to_be_populate", "Value=-1", ENDITEM, 
		"Name=expression_portlet_to_be_populate", "Value=-99999", ENDITEM, 
		"Name=is_ASI_fields_displayed", "Value=true", ENDITEM, 
		"Name=expressionPageType", "Value=SPEAR", ENDITEM, 
		"Name=expression_page_reload_after_submit_or_validate_failed", "Value=true", ENDITEM, 
		"Name=isAppSpecInfoTable", "Value=1", ENDITEM, 
		"Name=expression_portlet_to_be_populate", "Value=-2", ENDITEM, 
		"Name=expression_portlet_to_be_populate", "Value=-99999", ENDITEM, 
		"Name=value(appSpecTable*tableName)", "Value=", ENDITEM, 
		"Name=tableName", "Value=PIPE FOOTAGE", ENDITEM, 
		"Name=tableName", "Value=EQUIPMENT", ENDITEM, 
		"Name=value(entityType)", "Value=CAP", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=20026", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=20026", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(from)", "Value=", ENDITEM, 
		"Name=value(entityType)", "Value=CAP", ENDITEM, 
		"Name=newUpload", "Value=true", ENDITEM, 
		"Name=maxFileIndex", "Value=0", ENDITEM, 
		"Name=fileCount", "Value=0", ENDITEM, 
		"Name=mode", "Value=upload", ENDITEM, 
		"Name=asynchronousUpload", "Value=Y", ENDITEM, 
		"Name=value(from)", "Value=", ENDITEM, 
		"Name=value(entityID)", "Value=", ENDITEM, 
		"Name=value(entityType)", "Value=", ENDITEM, 
		"Name=value(maxFileSize)", "Value=", ENDITEM, 
		"Name=uploadMode", "Value=multiAccelaUpload", ENDITEM, 
		"Name=docName", "Value=this field(docName) is desperated", ENDITEM, 
		"Name=docDepartment", "Value=", ENDITEM, 
		"Name=docGroup", "Value=", ENDITEM, 
		"Name=docCategory", "Value=", ENDITEM, 
		"Name=alsoAttachTo", "Value=", ENDITEM, 
		"Name=docDescription", "Value=", ENDITEM, 
		"Name=chkLabel", "Value=Select", ENDITEM, 
		"Name=fileLabel", "Value=File", ENDITEM, 
		"Name=groupLabel", "Value=Document Group/Category", ENDITEM, 
		"Name=alsoAttachToLabel", "Value=Also Attach To", ENDITEM, 
		"Name=deptLabel", "Value=Department", ENDITEM, 
		"Name=acaPermissionsLabel", "Value=ACA Permissions", ENDITEM, 
		"Name=suffixMessage", "Value=The file of this type cannot be uploaded.", ENDITEM, 
		"Name=virtualFoldersLabel", "Value=Virtual Folders", ENDITEM, 
		"Name=addLabel", "Value=Add", ENDITEM, 
		"Name=OKLabel", "Value=OK", ENDITEM, 
		"Name=cancelLabel", "Value=Cancel", ENDITEM, 
		"Name=deleteAlt", "Value=Delete", ENDITEM, 
		"Name=selectAlt", "Value=Select", ENDITEM, 
		"Name=newFolderLabel", "Value=New Folder", ENDITEM, 
		"Name=showAddBtn", "Value=true", ENDITEM, 
		"Name=noFolderGroupError", "Value=No virtual folder options applicable to the current record type. Please contact the agency administrator for help.", ENDITEM, 
		"Name=newFolderDuplicateError", "Value=Duplicate folder name(s).", ENDITEM, 
		"Name=containSemicolonError", "Value=The folder name cannot contain semicolons.", ENDITEM, 
		"Name=closeVirtualFoldersImgSrc", "Value=/portlets/images/sky_blue/menu/delete.png", ENDITEM, 
		"Name=virtualFoldersImgSrc", "Value=/portlets/images/Select_SR_Type.gif", ENDITEM, 
		"Name=virtualFoldersURL", "Value=/portlets/document/documentForm.do?mode=getVirtualFolders&capType=Building%2FPlumbing%2FGas+Piping%2FNA&module=Building", ENDITEM, 
		"Name=required", "Value=* Required", ENDITEM, 
		"Name=staticRequiredDocTypesMessage", "Value=", ENDITEM, 
		"Name=edmsAdsStr", "Value=", ENDITEM, 
		"Name=isCloneSingle", "Value=", ENDITEM, 
		"Name=fromPartialCap", "Value=", ENDITEM, 
		"Name=isPendingCap", "Value=", ENDITEM, 
		"Name=valuetextarea38", "Value=", ENDITEM, 
		"Name=sourcetextarea38", "Value=", ENDITEM, 
		"Name=layouttextarea38", "Value=", ENDITEM, 
		"Name=docTemplateUIUID", "Value=38", ENDITEM, 
		"Name=value(docGroup)", "Value=", ENDITEM, 
		"Name=value(docCategory)", "Value=", ENDITEM, 
		"Name=value(docDepartment)", "Value=", ENDITEM, 
		"Name=value(docDescription)", "Value=", ENDITEM, 
		"Name=value(ac360_hidden_target)", "Value=NONE", ENDITEM, 
		"Name=value(ac360_hidden_download)", "Value=NONE", ENDITEM, 
		"Name=value(ac360_hidden_delete)", "Value=NONE", ENDITEM, 
		"Name=documentSeq", "Value=", ENDITEM, 
		"Name=fileKey", "Value=", ENDITEM, 
		"Name=canceled", "Value=", ENDITEM, 
		"Name=docRuleExpress", "Value=", ENDITEM, 
		"Name=hidden-00-docName", "Value=", ENDITEM, 
		"Name=hidden-00-entityID", "Value=", ENDITEM, 
		"Name=hidden-00-edmsName", "Value=", ENDITEM, 
		"Name=hidden-00-docDepartment", "Value=", ENDITEM, 
		"Name=hidden-00-docDescription", "Value=", ENDITEM, 
		"Name=hidden-00-docGroup", "Value=", ENDITEM, 
		"Name=hidden-00-docCategory", "Value=", ENDITEM, 
		"Name=hidden-00-docDispCategory", "Value=", ENDITEM, 
		"Name=hidden-00-userEmail", "Value=", ENDITEM, 
		"Name=hidden-00-fileSize", "Value=", ENDITEM, 
		"Name=hidden-00-documentSeq", "Value=", ENDITEM, 
		"Name=hidden-00-fileKey", "Value=", ENDITEM, 
		"Name=hidden-00-isUploaded", "Value=", ENDITEM, 
		"Name=hidden-00-downloadRight", "Value=", ENDITEM, 
		"Name=hidden-00-viewRight", "Value=", ENDITEM, 
		"Name=hidden-00-deleteRight", "Value=", ENDITEM, 
		"Name=hidden-00-itemRight", "Value=", ENDITEM, 
		"Name=hidden-00-isDeleted", "Value=", ENDITEM, 
		"Name=hidden-00-docType", "Value=", ENDITEM, 
		"Name=hidden-00-recFulName", "Value=", ENDITEM, 
		"Name=hidden-00-recDate", "Value=", ENDITEM, 
		"Name=hidden-00-maxSize", "Value=", ENDITEM, 
		"Name=hidden-00-isOverLarge", "Value=", ENDITEM, 
		"Name=hidden-00-isTempSaved", "Value=", ENDITEM, 
		"Name=hidden-00-tempDocName", "Value=", ENDITEM, 
		"Name=hidden-00-prefileSize", "Value=", ENDITEM, 
		"Name=hidden-00-isInvalidFile", "Value=", ENDITEM, 
		"Name=hidden-00-docDispDepartment", "Value=", ENDITEM, 
		"Name=hidden-00-contentType", "Value=", ENDITEM, 
		"Name=hidden-00-fileName", "Value=", ENDITEM, 
		"Name=hidden-00-typeFailed", "Value=", ENDITEM, 
		"Name=upload-00-file", "Value=", "File=Yes", ENDITEM, 
		"Name=upload-00-docCategory", "Value=", ENDITEM, 
		"Name=upload-00-docName", "Value=", ENDITEM, 
		"Name=upload-00-docDesc", "Value=", ENDITEM, 
		"Name=upload-00-userEmail", "Value=", ENDITEM, 
		"Name=hidden-00-docName", "Value=", ENDITEM, 
		"Name=hidden-00-entityID", "Value=", ENDITEM, 
		"Name=hidden-00-edmsName", "Value=", ENDITEM, 
		"Name=hidden-00-docDepartment", "Value=", ENDITEM, 
		"Name=hidden-00-docDescription", "Value=", ENDITEM, 
		"Name=hidden-00-docGroup", "Value=", ENDITEM, 
		"Name=hidden-00-docCategory", "Value=", ENDITEM, 
		"Name=hidden-00-docDispCategory", "Value=", ENDITEM, 
		"Name=hidden-00-userEmail", "Value=", ENDITEM, 
		"Name=hidden-00-fileSize", "Value=", ENDITEM, 
		"Name=hidden-00-documentSeq", "Value=", ENDITEM, 
		"Name=hidden-00-fileKey", "Value=", ENDITEM, 
		"Name=hidden-00-isUploaded", "Value=", ENDITEM, 
		"Name=hidden-00-downloadRight", "Value=", ENDITEM, 
		"Name=hidden-00-viewRight", "Value=", ENDITEM, 
		"Name=hidden-00-deleteRight", "Value=", ENDITEM, 
		"Name=hidden-00-itemRight", "Value=", ENDITEM, 
		"Name=hidden-00-isDeleted", "Value=", ENDITEM, 
		"Name=hidden-00-docType", "Value=", ENDITEM, 
		"Name=hidden-00-recFulName", "Value=", ENDITEM, 
		"Name=hidden-00-recDate", "Value=", ENDITEM, 
		"Name=hidden-00-maxSize", "Value=", ENDITEM, 
		"Name=hidden-00-isOverLarge", "Value=", ENDITEM, 
		"Name=hidden-00-isTempSaved", "Value=", ENDITEM, 
		"Name=hidden-00-tempDocName", "Value=", ENDITEM, 
		"Name=hidden-00-prefileSize", "Value=", ENDITEM, 
		"Name=hidden-00-isInvalidFile", "Value=", ENDITEM, 
		"Name=hidden-00-docDispDepartment", "Value=", ENDITEM, 
		"Name=hidden-00-contentType", "Value=", ENDITEM, 
		"Name=hidden-00-fileName", "Value=", ENDITEM, 
		"Name=hidden-00-typeFailed", "Value=", ENDITEM, 
		"Name=upload-00-file", "Value=", "File=Yes", ENDITEM, 
		"Name=upload-00-docCategory", "Value=", ENDITEM, 
		"Name=upload-00-docDesc", "Value=", ENDITEM, 
		"Name=isDocument", "Value=1", ENDITEM, 
		"Name=isDocRequired", "Value=N", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=20026", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=20026", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=isGisFeatureRequired", "Value=N", ENDITEM, 
		"Name=editPar", "Value=2112", ENDITEM, 
		"Name=allViewIDGroup", "Value=225", ENDITEM, 
		"Name=viewGroup", "Value=225", ENDITEM, 
		"Name=formGroup", "Value=,capDetailForm,addressForm,parcelForm,ownerForm", ENDITEM, 
		"Name=fromModel", "Value=cap", ENDITEM, 
		"Name=modelId", "Value=", ENDITEM, 
		"Name=fromEditPartialCap", "Value=", ENDITEM, 
		"Name=fromMode", "Value=newSingle", ENDITEM, 
		"Name=GISCommand", "Value=null", ENDITEM, 
		"Name=isAddressList", "Value=true", ENDITEM, 
		"Name=isParcelList", "Value=true", ENDITEM, 
		"Name=isOwnerList", "Value=true", ENDITEM, 
		"Name=isProfessionalList", "Value=", ENDITEM, 
		"Name=value(contactValidatePassed)", "Value=true", ENDITEM, 
		"Name=value(createCapForParcelType)", "Value=ALL", ENDITEM, 
		"Name=SKIP_EMSE_FLAG", "Value=N", ENDITEM, 
		"Name=isFromAssetList", "Value=null ", ENDITEM, 
		"Name=isValidationFailed", "Value=null", ENDITEM, 
		"Name=isValidated", "Value=null", ENDITEM, 
		LAST);

	web_url("AAHELP.js_8", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t234.inf", 
		LAST);

	web_submit_data("empty.jsp_12", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t235.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("EMSEMessage.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t236.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("AAHELP.js_9", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Building", 
		"Snapshot=t237.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("pa.min.js_8", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t238.inf", 
		LAST);

	web_url("pa.min.js_9", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Building", 
		"Snapshot=t239.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_submit_data("empty.jsp_13", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Building", 
		"Snapshot=t240.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("blank.jsp_20", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Building", 
		"Snapshot=t241.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_14", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t242.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_08_SubmitApplication_AddNewApplication",LR_AUTO);

	lr_think_time(17);

	lr_start_transaction("MILWAUKEE_TC3_08_SubmitApplication_ViewSummary");

	web_url("session.do_15", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t243.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_16", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t244.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("CapTabSummary.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3=086L8&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t245.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("re-skin-v3.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v3.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3=086L8&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t246.inf", 
		LAST);

	web_url("AAHELP.js_10", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3=086L8&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t247.inf", 
		LAST);

	web_url("expressionConstants.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionConstants.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3=086L8&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t248.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_10", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3=086L8&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t249.inf", 
		LAST);

	web_url("blank.jsp_21", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3=086L8&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t250.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("ajax.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3=086L8&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t251.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("empty.jsp_14", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t252.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("tabRecordCount.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3=086L8&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3=086L8&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t253.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3=086L8&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/"
		"countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3=086L8&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t254.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("search.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3=086L8&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t255.inf", 
		"Mode=HTTP", 
		"Body=categoryName=Portlet - Expression", 
		LAST);

	web_custom_request("expression.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3=086L8&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t256.inf", 
		"Mode=HTTP", 
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22PIPE%20FOOTAGE%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22EQUIPMENT%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=TABSUMMARY&isReload=false&module=Building&capType=Building%2FPlumbing%2FGas%20Piping%2FNA", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_08_SubmitApplication_ViewSummary",LR_AUTO);

	lr_think_time(17);

	lr_start_transaction("MILWAUKEE_TC3_09_Record_ClickContact");

	web_url("session.do_17", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e771&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t257.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_18", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3=086L8&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t258.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("contactList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=MILWAUKEE&ID1=18CAP&ID2=00000&ID3=086L8&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t259.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_11", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t260.inf", 
		LAST);

	web_url("blank.jsp_22", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t262.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_11", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t261.inf", 
		LAST);

	web_submit_data("empty.jsp_15", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t263.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("tabRecordCount.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3=086L8&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t264.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3=086L8&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/"
		"countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t265.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_09_Record_ClickContact",LR_AUTO);

	lr_think_time(9);

	lr_start_transaction("MILWAUKEE_TC3_10_Record_Contact_LookUpContact");

	web_url("session.do_19", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t266.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("refContactListForCap.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t267.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_12", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t268.inf", 
		LAST);

	web_url("blank.jsp_23", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t270.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_12", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t269.inf", 
		LAST);

	web_submit_data("ajax.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t271.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("empty.jsp_16", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t272.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t273.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t274.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t275.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t276.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t277.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_10_Record_Contact_LookUpContact",LR_AUTO);

	lr_start_transaction("MILWAUKEE_TC3_11_Record_Contact_LookUpContact_SearchContact");

	web_url("session.do_20", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t278.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("refContactListForCap.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t279.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP", "Value=198e4ffa9334e3ad8a95d93684b39f9a", ENDITEM, 
		"Name=value(FirstEntryURL)", "Value=/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", ENDITEM, 
		"Name=value(CurrentEntryURL)", "Value=/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", ENDITEM, 
		"Name=portlet_language", "Value=en_US", ENDITEM, 
		"Name=refresh_target", "Value=", ENDITEM, 
		"Name=refresh_url", "Value=", ENDITEM, 
		"Name=buttonName", "Value=", ENDITEM, 
		"Name=modeName", "Value=search", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=accelasubmitbuttonname", "Value=submit", ENDITEM, 
		"Name=itemName", "Value=", ENDITEM, 
		"Name=CurrentViewID", "Value=21033", ENDITEM, 
		"Name=exceptionLogID", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=value(portlet_soundex)", "Value=off", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=21033", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=search", ENDITEM, 
		"Name=value(capcontactid)", "Value=", ENDITEM, 
		"Name=value(sync)", "Value=", ENDITEM, 
		"Name=value(isDisableRefContact)", "Value=", ENDITEM, 
		"Name=value(lookup)", "Value=true", ENDITEM, 
		"Name=value(type)", "Value=", ENDITEM, 
		"Name=value(actType)", "Value=lookupdirect", ENDITEM, 
		"Name=value(fromDaily)", "Value=Y", ENDITEM, 
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
		"Name=value(firstName)", "Value=a", ENDITEM, 
		"Name=value(fullName)", "Value=", ENDITEM, 
		"Name=value(addressLine1)", "Value=", ENDITEM, 
		"Name=value(addressLine2)", "Value=", ENDITEM, 
		"Name=value(addressLine3)", "Value=", ENDITEM, 
		"Name=value(city)", "Value=", ENDITEM, 
		"Name=value(state)", "Value=", ENDITEM, 
		"Name=value(zip)", "Value=", ENDITEM, 
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
		"Name=value(contactAddressModel*countryCode)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*validateFlag)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*phone)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*fax)", "Value=", ENDITEM, 
		"Name=value(genericTemplateAttribute*fieldName)", "Value=", ENDITEM, 
		"Name=value(genericTemplateAttribute*defaultValue)", "Value=", ENDITEM, 
		"Name=value(genericTemplateTableValue*fieldName)", "Value=", ENDITEM, 
		"Name=value(genericTemplateTableValue*defaultValue)", "Value=", ENDITEM, 
		"Name=value(middleName)", "Value=", ENDITEM, 
		"Name=value(lastName)", "Value=", ENDITEM, 
		"Name=ACMask_21033_2_value(phone1_disp)", "Value=", ENDITEM, 
		"Name=ACMask_21033_2_value(phone1)", "Value=", ENDITEM, 
		"Name=value(contactSeqNumber)", "Value=", ENDITEM, 
		"Name=value(businessName)", "Value=", ENDITEM, 
		"Name=ACMask_21033_5_value(phone2_disp)", "Value=", ENDITEM, 
		"Name=ACMask_21033_5_value(phone2)", "Value=", ENDITEM, 
		"Name=value(email)", "Value=", ENDITEM, 
		"Name=ACMask_21033_21_value(phone3_disp)", "Value=", ENDITEM, 
		"Name=ACMask_21033_21_value(phone3)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*addressLine1)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*city)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*state)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*zip_disp)", "Value=", ENDITEM, 
		"Name=value(contactAddressModel*zip)", "Value=", ENDITEM, 
		"Name=value(countryCode)", "Value=", ENDITEM, 
		"Name=value(socialSecurityNumber)", "Value=", ENDITEM, 
		"Name=value(maskformat_socialSecurityNumber)", "Value=AAA-AA-AAAA", ENDITEM, 
		"Name=value(fein)", "Value=", ENDITEM, 
		"Name=value(maskformat_fein)", "Value=", ENDITEM, 
		"Name=date(birthDate)", "Value=", ENDITEM, 
		"Name=date(endBirthDate)", "Value=", ENDITEM, 
		"Name=value(gender)", "Value=", ENDITEM, 
		"Name=value(templateGroup)", "Value=G3CONTACT", ENDITEM, 
		"Name=valuetextarea39", "Value=", ENDITEM, 
		"Name=sourcetextarea39", "Value=", ENDITEM, 
		"Name=layouttextarea39", "Value=", ENDITEM, 
		"Name=uiuid", "Value=39", ENDITEM, 
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(socialSecurityNumber)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"}}}", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_13", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t280.inf", 
		LAST);

	web_url("blank.jsp_24", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t282.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_13", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t281.inf", 
		LAST);

	web_submit_data("empty.jsp_17", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t283.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("tabRecordCount.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3=086L8&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t284.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3=086L8&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/"
		"countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t285.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_11_Record_Contact_LookUpContact_SearchContact",LR_AUTO);

	lr_start_transaction("MILWAUKEE_TC3_12_Record_Contact_LookUpContact_SelectContact");

	web_url("session.do_21", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t286.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("xrefContactAddressForm.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/address/xrefContactAddressForm.do?mode=associate&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t287.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP=198e4ffa9334e3ad8a95d93684b39f9a&value(FirstEntryURL)=%2Fportlets%2Fcontact%2Fref%2FrefContactListForCap.do%3Fvalue(mode)%3Dsearch%26value(lookup)%3Dtrue%26lookupdirect%3Dtrue%26fromDaily%3DY%26isDisableRefContact%3Dfalse%26value(usedQueryInfo)%3DY%26value(actType)%3Dlookupdirect%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcontact%2Fref%2FrefContactListForCap.do%3Fmodule%3DBuilding%26value(usedQueryInfo)%3DY&"
		"portlet_language=en_US&refresh_target=&refresh_url=&buttonName=submit&modeName=list&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=11&exceptionLogID=&generalCAPSearch=&objectName=contactList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=11&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(mode)=searchresult&value(lookup)=true&value(capcontactid)=&value(sync)=&value(isDisableRefContact)=&value(refContactSeqNumber)=&value(scheduleNbr)"
		"=&value(locationNbr)=&value(refExamNbr)=&value(providerNbr)=&value(from)=&value(unDoAssign)=&value(providerEventBuilder)=&value(usedQueryInfo)=Y&value(actType)=lookupdirect&closeMatch=null&ac360_list_id_hiddenCheckbox=&chk_contactid=907029&chk_contactid_hiddenCheckbox=907029&entity_type_hidden=CONTACT&refContactId=907029&chk_contactid_hiddenCheckbox=907031&entity_type_hidden=CONTACT&refContactId=907031&chk_contactid_hiddenCheckbox=912135&entity_type_hidden=CONTACT&refContactId=912135&"
		"chk_contactid_hiddenCheckbox=1002019&entity_type_hidden=CONTACT&refContactId=1002019&chk_contactid_hiddenCheckbox=1002157&entity_type_hidden=CONTACT&refContactId=1002157&isDynaPaging=true&startDate=&", 
		LAST);

	web_submit_data("refContactListForCap.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t288.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP", "Value=198e4ffa9334e3ad8a95d93684b39f9a", ENDITEM, 
		"Name=value(FirstEntryURL)", "Value=/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", ENDITEM, 
		"Name=value(CurrentEntryURL)", "Value=/portlets/contact/ref/refContactListForCap.do?module=Building&value(usedQueryInfo)=Y", ENDITEM, 
		"Name=portlet_language", "Value=en_US", ENDITEM, 
		"Name=refresh_target", "Value=capList", ENDITEM, 
		"Name=refresh_url", "Value=/portlets/cap/capList.do?mode=view&module=Building", ENDITEM, 
		"Name=buttonName", "Value=submit", ENDITEM, 
		"Name=modeName", "Value=list", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=accelasubmitbuttonname", "Value=add", ENDITEM, 
		"Name=itemName", "Value=", ENDITEM, 
		"Name=CurrentViewID", "Value=11", ENDITEM, 
		"Name=exceptionLogID", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=objectName", "Value=contactList", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=11", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=searchresult", ENDITEM, 
		"Name=value(lookup)", "Value=true", ENDITEM, 
		"Name=value(capcontactid)", "Value=", ENDITEM, 
		"Name=value(sync)", "Value=", ENDITEM, 
		"Name=value(isDisableRefContact)", "Value=", ENDITEM, 
		"Name=value(refContactSeqNumber)", "Value=", ENDITEM, 
		"Name=value(scheduleNbr)", "Value=", ENDITEM, 
		"Name=value(locationNbr)", "Value=", ENDITEM, 
		"Name=value(refExamNbr)", "Value=", ENDITEM, 
		"Name=value(providerNbr)", "Value=", ENDITEM, 
		"Name=value(from)", "Value=", ENDITEM, 
		"Name=value(unDoAssign)", "Value=", ENDITEM, 
		"Name=value(providerEventBuilder)", "Value=", ENDITEM, 
		"Name=value(usedQueryInfo)", "Value=Y", ENDITEM, 
		"Name=value(actType)", "Value=lookupdirect", ENDITEM, 
		"Name=closeMatch", "Value=null", ENDITEM, 
		"Name=ac360_list_id_hiddenCheckbox", "Value=", ENDITEM, 
		"Name=chk_contactid", "Value=907029", ENDITEM, 
		"Name=chk_contactid_hiddenCheckbox", "Value=907029", ENDITEM, 
		"Name=entity_type_hidden", "Value=CONTACT", ENDITEM, 
		"Name=refContactId", "Value=907029", ENDITEM, 
		"Name=chk_contactid_hiddenCheckbox", "Value=907031", ENDITEM, 
		"Name=entity_type_hidden", "Value=CONTACT", ENDITEM, 
		"Name=refContactId", "Value=907031", ENDITEM, 
		"Name=chk_contactid_hiddenCheckbox", "Value=912135", ENDITEM, 
		"Name=entity_type_hidden", "Value=CONTACT", ENDITEM, 
		"Name=refContactId", "Value=912135", ENDITEM, 
		"Name=chk_contactid_hiddenCheckbox", "Value=1002019", ENDITEM, 
		"Name=entity_type_hidden", "Value=CONTACT", ENDITEM, 
		"Name=refContactId", "Value=1002019", ENDITEM, 
		"Name=chk_contactid_hiddenCheckbox", "Value=1002157", ENDITEM, 
		"Name=entity_type_hidden", "Value=CONTACT", ENDITEM, 
		"Name=refContactId", "Value=1002157", ENDITEM, 
		"Name=isDynaPaging", "Value=true", ENDITEM, 
		"Name=startDate", "Value=", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_14", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t289.inf", 
		LAST);

	web_url("blank.jsp_25", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t291.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_14", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t290.inf", 
		LAST);

	web_submit_data("empty.jsp_18", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t292.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("tabRecordCount.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3=086L8&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t293.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3=086L8&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/"
		"countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t294.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_12_Record_Contact_LookUpContact_SelectContact",LR_AUTO);

	lr_think_time(6);

	lr_start_transaction("MILWAUKEE_TC3_13_Record_Click_CustomList");

	web_url("session.do_22", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t295.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("appSpecInfoTableForm.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t296.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_15", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t297.inf", 
		LAST);

	web_url("expressionConstants.jsp_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionConstants.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t298.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_15", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t299.inf", 
		LAST);

	web_url("blank.jsp_26", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t300.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("search.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t301.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=categoryName", "Value=AppSpecInfoTableFilter", ENDITEM, 
		LAST);

	web_submit_data("empty.jsp_19", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t302.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("appSpecInfoTableFilterTemplate.html", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/appSpecInfoTableFilterTemplate.html", 
		"Resource=0", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t303.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("search.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t304.inf", 
		"Mode=HTTP", 
		"Body=categoryName=Portlet - Expression", 
		LAST);

	web_custom_request("expression.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t305.inf", 
		"Mode=HTTP", 
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22PIPE%20FOOTAGE%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&isReload=false&module=Building&capType=Building%2FPlumbing%2FGas%20Piping%2FNA", 
		LAST);

	web_custom_request("tabRecordCount.do_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3=086L8&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t306.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3=086L8&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/"
		"countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t307.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_13_Record_Click_CustomList",LR_AUTO);

	lr_think_time(4);

	lr_start_transaction("MILWAUKEE_TC3_14_Records_CustomList_Save");

	web_url("session.do_23", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t308.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("appSpecInfoTableForm.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", 
		"Snapshot=t309.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=value(FirstEntryURL)", "Value=/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", ENDITEM, 
		"Name=value(CurrentEntryURL)", "Value=/portlets/appspecinfo/appSpecInfoTableForm.do?mode=list&module=Building", ENDITEM, 
		"Name=portlet_language", "Value=en_US", ENDITEM, 
		"Name=refresh_target", "Value=", ENDITEM, 
		"Name=refresh_url", "Value=", ENDITEM, 
		"Name=buttonName", "Value=", ENDITEM, 
		"Name=modeName", "Value=list", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=accelasubmitbuttonname", "Value=Save", ENDITEM, 
		"Name=itemName", "Value=", ENDITEM, 
		"Name=CurrentViewID", "Value=", ENDITEM, 
		"Name=exceptionLogID", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=expression_portlet_to_be_populate", "Value=-2", ENDITEM, 
		"Name=expression_portlet_to_be_populate", "Value=-99999", ENDITEM, 
		"Name=expressionPageType", "Value=SINGLEPORTLET", ENDITEM, 
		"Name=expression_page_reload_after_submit_or_validate_failed", "Value=true", ENDITEM, 
		"Name=value(appSpecTable*tableName)", "Value=DNS_GAS_LIST::PIPE+FOOTAGE", ENDITEM, 
		"Name=value(capID*ID1)", "Value=18CAP", ENDITEM, 
		"Name=value(capID*ID2)", "Value=00000", ENDITEM, 
		"Name=value(capID*ID3)", "Value=086L8", ENDITEM, 
		"Name=tableName", "Value=DNS_GAS_LIST::PIPE+FOOTAGE", ENDITEM, 
		"Name=INTEGRITY_CHECK", "Value=0", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("appSpecInfoTableFilter.css_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/CSS/sky_blue/appSpecInfoTableFilter.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t310.inf", 
		LAST);

	web_url("AAHELP.js_16", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t311.inf", 
		LAST);

	web_url("expressionConstants.jsp_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionConstants.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t312.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_16", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t313.inf", 
		LAST);

	web_url("blank.jsp_27", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t314.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("search.do_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t315.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=categoryName", "Value=AppSpecInfoTableFilter", ENDITEM, 
		LAST);

	web_submit_data("empty.jsp_20", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t316.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("appSpecInfoTableFilter.css_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/CSS/sky_blue/appSpecInfoTableFilter.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t317.inf", 
		LAST);

	web_url("appSpecInfoTableFilterTemplate.html_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/appSpecInfoTableFilterTemplate.html", 
		"Resource=0", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t318.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("search.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t319.inf", 
		"Mode=HTTP", 
		"Body=categoryName=Portlet - Expression", 
		LAST);

	web_custom_request("expression.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t320.inf", 
		"Mode=HTTP", 
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22PIPE%20FOOTAGE%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&isReload=true&module=Building&capType=Building%2FPlumbing%2FGas%20Piping%2FNA", 
		LAST);

	web_custom_request("tabRecordCount.do_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3=086L8&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t321.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3=086L8&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/"
		"countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t322.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_14_Records_CustomList_Save",LR_AUTO);

	lr_think_time(12);

	lr_start_transaction("MILWAUKEE_TC3_15_Record_Click_Inspections");

	web_url("session.do_24", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t323.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(9);

	web_url("inspectionListCapSpecific.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoTableForm.do?module=Building", 
		"Snapshot=t324.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_17", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t325.inf", 
		LAST);

	web_url("blank.jsp_28", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t327.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_17", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t326.inf", 
		LAST);

	web_submit_data("empty.jsp_21", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t328.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("tabRecordCount.do_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3=086L8&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t329.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_14", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3=086L8&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/"
		"countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t330.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_15_Record_Click_Inspections",LR_AUTO);

	lr_think_time(13);

	lr_start_transaction("MILWAUKEE_TC3_16_Record_Inspections_Click_ScheduleInspection");

	web_url("session.do_25", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t331.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("workloadingInspectionList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doValidate&mType=0&isFromCAP=Y&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t332.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_INSPECTIONLISTCAPSPECIFICFORM=d07fb36341ac47112e9f33d0ff833e76&value(FirstEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=220&exceptionLogID=&generalCAPSearch=&"
		"objectName=inspectionList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=220&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(mode)=view&value(CONFIRM_RESULT_WHEN_CANCEL)=&multipleResultType=&listType=recordInspectionList&errorShow=&noRight=&pageSizeR=null&", 
		LAST);

	web_url("workloadingInspectionList.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t333.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("selectRequiredInspections.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Building", 
		"Snapshot=t334.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_18", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t335.inf", 
		LAST);

	web_url("blank.jsp_29", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t337.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_18", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t336.inf", 
		LAST);

	web_custom_request("selectRequiredInspections.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=loadInspTypeByGroup&InspGroup=BLD_PLM&CapId=18CAP-00000-086L8&CapIdIndex=0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t338.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=4d715def0e1ecfaa7157d76659aa1f47&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Building&accelasubmitbuttonname=&"
		"itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=4d715def0e1ecfaa7157d76659aa1f47&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&pageSizeR=9999&", 
		LAST);

	web_submit_data("empty.jsp_22", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t339.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("session.do_26", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t340.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_16_Record_Inspections_Click_ScheduleInspection",LR_AUTO);

	web_url("session.do_27", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t341.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("selectRequiredInspections.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=loadListTitles", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t342.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=4d715def0e1ecfaa7157d76659aa1f47&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Building&accelasubmitbuttonname=&"
		"itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=4d715def0e1ecfaa7157d76659aa1f47&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&pageSizeR=9999&", 
		LAST);

	lr_start_transaction("MILWAUKEE_TC3_17_Record_SelectInspectionType_ClickPendingInspections");

	web_url("session.do_28", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t343.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("selectRequiredInspections.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=onlyPending", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t344.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=4d715def0e1ecfaa7157d76659aa1f47&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Building&accelasubmitbuttonname=&"
		"itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=4d715def0e1ecfaa7157d76659aa1f47&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&value(chk_inspType%2C0)=on&value(inspTypeID%2C0)=84010502&value(selectCapID%2C0)=18CAP-00000-086L8&value(isInAdvance%2C0)=N&value"
		"(requiredInspection%2C0)=N&value(autoassign%2C0)=N&value(scheduleOrder%2C0)=&value(unitNBR%2C0)=&pageSizeR=9999&", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_17_Record_SelectInspectionType_ClickPendingInspections",LR_AUTO);

	lr_think_time(56);

	lr_start_transaction("MILWAUKEE_TC3_18_Record_Inspection_SelectInspectionType_ClickPendingInspections_ClickOK");

	lr_end_transaction("MILWAUKEE_TC3_18_Record_Inspection_SelectInspectionType_ClickPendingInspections_ClickOK",LR_AUTO);

	lr_start_transaction("MILWAUKEE_TC3_18_Record_Inspection_ClickInspection");

	web_url("session.do_29", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t345.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("inspectionListCapSpecific.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t346.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_19", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t347.inf", 
		LAST);

	web_url("blank.jsp_30", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t349.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_19", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t348.inf", 
		LAST);

	web_submit_data("empty.jsp_23", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t350.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("tabRecordCount.do_15", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3=086L8&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t351.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_16", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18CAP&ID2=00000&ID3=086L8&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/"
		"countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t352.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_18_Record_Inspection_ClickInspection",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("MILWAUKEE_TC3_19_Record_Inspection_SelectIPendingInspection_ClickScheduleInspection");

	web_url("session.do_30", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t353.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("workloadingInspectionList.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doValidate&mType=0&isFromCAP=Y&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t354.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_INSPECTIONLISTCAPSPECIFICFORM=d07fb36341ac47112e9f33d0ff833e76&value(FirstEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=220&exceptionLogID=&generalCAPSearch=&"
		"objectName=inspectionList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=220&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(mode)=view&value(CONFIRM_RESULT_WHEN_CANCEL)=&multipleResultType=&listType=recordInspectionList&errorShow=&noRight=&value(chk_INSP%2C0)=0&value(ServProvCode%2C0)=MILWAUKEE&value(INSPID%2C0)=23573664&value(CAPID1%2C0)=18CAP&value(CAPID2%2C0)=00000&value(CAPID3%2C0)=086L8&value(INSPSEQ%2C0)=84010502&value(enabledCheck%2C0)=Y&"
		"documentDescription0=Insp%20Pending&inspectionCategory0=PENDING&pageSizeR=5&", 
		LAST);

	web_url("workloadingInspectionList.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t355.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("pendingInspectionEditMain.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Building", 
		"Snapshot=t356.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("blank.jsp_31", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t357.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("workloadingInspectionList.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t358.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_20", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t359.inf", 
		LAST);

	web_url("blank.jsp_32", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t361.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_20", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t360.inf", 
		LAST);

	web_submit_data("empty.jsp_24", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t362.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("inspectionDetail.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t363.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_31", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t364.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("AAHELP.js_21", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t365.inf", 
		LAST);

	web_url("pa.min.js_21", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t366.inf", 
		LAST);

	web_url("blank.jsp_33", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t367.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("ajax.do_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t368.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("empty.jsp_25", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t369.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("session.do_32", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t370.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("calendarInspectionWorkload.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/29/2018&hour=&ap=&module=Building&capId=18CAP-00000-086L8&inspectionId=23573664", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t371.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_19_Record_Inspection_SelectIPendingInspection_ClickScheduleInspection",LR_AUTO);

	lr_start_transaction("MILWAUKEE_TC3_20_Record_Inspection_ScheduleInspection_SelectDepartment");

	web_url("session.do_33", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t372.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_34", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t373.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("calendarInspectionWorkload.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/29/2018&hour=&ap=&module=Building&dept=MILWAUKEE%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&capId=18CAP-00000-086L8&inspectionId=23573664", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t374.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_20_Record_Inspection_ScheduleInspection_SelectDepartment",LR_AUTO);

	lr_start_transaction("MILWAUKEE_TC3_21_Record_Inspection_ScheduleInspection_SelectUser");

	web_url("session.do_35", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t375.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("calendarInspectionWorkload.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/29/2018&hour=&ap=&module=Building&dept=MILWAUKEE%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&userId=ADMIN&capId=18CAP-00000-086L8&inspectionId=23573664", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t376.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_21_Record_Inspection_ScheduleInspection_SelectUser",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("MILWAUKEE_TC3_22_Record_Inspection_ScheduleInspection_SubmitInpsection");

	web_url("session.do_36", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t377.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("inspectionDetail.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t378.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=value(FirstEntryURL)", "Value=/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", ENDITEM, 
		"Name=value(CurrentEntryURL)", "Value=/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", ENDITEM, 
		"Name=portlet_language", "Value=en_US", ENDITEM, 
		"Name=refresh_target", "Value=", ENDITEM, 
		"Name=refresh_url", "Value=", ENDITEM, 
		"Name=buttonName", "Value=", ENDITEM, 
		"Name=modeName", "Value=pendingEditInit", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=accelasubmitbuttonname", "Value=", ENDITEM, 
		"Name=itemName", "Value=", ENDITEM, 
		"Name=CurrentViewID", "Value=266", ENDITEM, 
		"Name=exceptionLogID", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=266", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=PqSvzpeQYx9--b5OQ0Z7M4BJ", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=validate4Pending", ENDITEM, 
		"Name=value(contactNbr0)", "Value=", ENDITEM, 
		"Name=value(inspectionStatus0)", "Value=Scheduled", ENDITEM, 
		"Name=hiddenInspection0", "Value=true", ENDITEM, 
		"Name=value(contactPhoneNum)", "Value=", ENDITEM, 
		"Name=value(latitude)", "Value=", ENDITEM, 
		"Name=value(longitude)", "Value=", ENDITEM, 
		"Name=value(isRestrictView4ACA)", "Value=", ENDITEM, 
		"Name=value(restrictRole)", "Value=", ENDITEM, 
		"Name=value(requestor)", "Value=", ENDITEM, 
		"Name=value(contactName)", "Value=", ENDITEM, 
		"Name=value(recordComments)", "Value=", ENDITEM, 
		"Name=date(estimatedStartTime)", "Value=", ENDITEM, 
		"Name=date(estimatedEndTime)", "Value=", ENDITEM, 
		"Name=hiddenInspection0", "Value=true", ENDITEM, 
		"Name=hiddenInspection0", "Value=true", ENDITEM, 
		"Name=value(unitNBR0)", "Value=", ENDITEM, 
		"Name=hiddenInspection0", "Value=true", ENDITEM, 
		"Name=value(reqPhoneNum0)", "Value=", ENDITEM, 
		"Name=hiddenInspection0", "Value=true", ENDITEM, 
		"Name=value(requestCommentText0)", "Value=", ENDITEM, 
		"Name=hiddenInspection0", "Value=true", ENDITEM, 
		"Name=value(displayinaca0)", "Value=Y", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_22", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building", 
		"Snapshot=t379.inf", 
		LAST);

	web_url("blank.jsp_34", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building", 
		"Snapshot=t381.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_22", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building", 
		"Snapshot=t380.inf", 
		LAST);

	web_submit_data("empty.jsp_26", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t382.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("session.do_37", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building", 
		"Snapshot=t383.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("inspectionDetail.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?value(mode)=validateAndGetNextAvailableTime", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t384.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_MANAGEINSPECTIONLISTFORM=4685cf0ca3bb45c79c530ff425c1ee55&value(FirstEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=pendingEditInit&module=Building&"
		"accelasubmitbuttonname=&itemName=&CurrentViewID=265&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=265&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(mode)=pendingEditSave&value(deptOfUserAll)=MILWAUKEE%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(gaUserIDAll)=ADMIN&date(scheduledDateAll)=&value(scheduledStartTimeHourAll)=&value(scheduledStartTimeMinuteAll)=&value(scheduledStartTimeAMPMAll)=&value"
		"(scheduledEndTimeHourAll)=&value(scheduledEndTimeMinuteAll)=&value(scheduledEndTimeAMPMAll)=&ac360_list_id=on0&value(pendingInspScheduleOrder%2C0)=&value(inspectionId%2C0)=23573664&value(pendingCapID%2C0)=18CAP-00000-086L8&value(inspectionTypeId%2C0)=84010502&value(calendarIds%2C0)=&value(requiredInspection%2C0)=N&value(inspectionType%2C0)=Pre-Inspections&value(actualUnits%2C0)=&value(inspectionStatus0)=Scheduled&value(requestCommentText0)=&value(gisArea0)=&value(reqPhoneNumIDD0)=&value"
		"(reqPhoneNum0)=&value(displayinaca0)=Y&value(latitude0)=&value(longitude0)=&value(unitNBR0)=&value(restrictRole0)=&value(activityModel*requestorFname0)=&value(activityModel*requestorMname0)=&value(activityModel*requestorLname0)=&value(scheduledStartTimeHourHidden%2C0)=&value(scheduledStartTimeMinuteHidden%2C0)=&value(scheduledStartTimeAMPMHidden%2C0)=&value(scheduledEndTimeHourHidden%2C0)=&value(scheduledEndTimeMinuteHidden%2C0)=&value(scheduledEndTimeAMPMHidden%2C0)=&value"
		"(activityModel*contactFname0)=&value(activityModel*contactMname0)=&value(activityModel*contactLname0)=&value(contactNbr0)=&value(contactPhoneNumIDD0)=&value(contactPhoneNum0)=&value(estimatedTimeHour0)=&value(estimatedTimeMinute0)=&value(estimatedTimeAMPM0)=&value(estimatedEndTimeHour0)=&value(estimatedEndTimeMinute0)=&value(estimatedEndTimeAMPM0)=&date(activityModel*desiredDate0)=&value(desiredTimeHour0)=&value(desiredTimeMinute0)=&value(desiredTimeAMPM0)=&value(isRestrictView4ACA0)=off&value"
		"(capId)=&value(groupCode)=&value(deptOfUser%2C0)=MILWAUKEE%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(initInspector%2C0)=&value(gaUserID%2C0)=ADMIN&date(scheduleDate%2C0)=08%2F29%2F2018&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&pageSizeR=9999&", 
		LAST);

	web_url("viewValidationResultMsg.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/viewValidationResultMsg.do?mode=viewResultMsg&from=confirm&indexCount=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t385.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("AAHELP.js_23", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/viewValidationResultMsg.do?mode=viewResultMsg&from=confirm&indexCount=0", 
		"Snapshot=t386.inf", 
		LAST);

	web_url("pa.min.js_23", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/viewValidationResultMsg.do?mode=viewResultMsg&from=confirm&indexCount=0", 
		"Snapshot=t387.inf", 
		LAST);

	web_submit_data("empty.jsp_27", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t388.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_22_Record_Inspection_ScheduleInspection_SubmitInpsection",LR_AUTO);

	lr_start_transaction("MILWAUKEE_TC3_23_Record_Inspection_ScheduleInspection_ClickOK");

	web_url("session.do_38", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.4e772&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building", 
		"Snapshot=t389.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("workloadingInspectionList.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditSave&operateType=refresh&convertToJson=true", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t390.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_MANAGEINSPECTIONLISTFORM=4685cf0ca3bb45c79c530ff425c1ee55&value(FirstEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=pendingEditInit&module=Building&"
		"accelasubmitbuttonname=&itemName=&CurrentViewID=265&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=265&sessionIdFromWindow=PqSvzpeQYx9--b5OQ0Z7M4BJ&listID=&printType=&checkBoxValue=&value(mode)=pendingEditSave&value(deptOfUserAll)=MILWAUKEE%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(gaUserIDAll)=ADMIN&date(scheduledDateAll)=&value(scheduledStartTimeHourAll)=&value(scheduledStartTimeMinuteAll)=&value(scheduledStartTimeAMPMAll)=&value"
		"(scheduledEndTimeHourAll)=&value(scheduledEndTimeMinuteAll)=&value(scheduledEndTimeAMPMAll)=&ac360_list_id=on0&value(pendingInspScheduleOrder%2C0)=&value(inspectionId%2C0)=23573664&value(pendingCapID%2C0)=18CAP-00000-086L8&value(inspectionTypeId%2C0)=84010502&value(calendarIds%2C0)=&value(requiredInspection%2C0)=N&value(inspectionType%2C0)=Pre-Inspections&value(actualUnits%2C0)=&value(inspectionStatus0)=Scheduled&value(requestCommentText0)=&value(gisArea0)=&value(reqPhoneNumIDD0)=&value"
		"(reqPhoneNum0)=&value(displayinaca0)=Y&value(latitude0)=&value(longitude0)=&value(unitNBR0)=&value(restrictRole0)=&value(activityModel*requestorFname0)=&value(activityModel*requestorMname0)=&value(activityModel*requestorLname0)=&value(scheduledStartTimeHourHidden%2C0)=&value(scheduledStartTimeMinuteHidden%2C0)=&value(scheduledStartTimeAMPMHidden%2C0)=&value(scheduledEndTimeHourHidden%2C0)=&value(scheduledEndTimeMinuteHidden%2C0)=&value(scheduledEndTimeAMPMHidden%2C0)=&value"
		"(activityModel*contactFname0)=&value(activityModel*contactMname0)=&value(activityModel*contactLname0)=&value(contactNbr0)=&value(contactPhoneNumIDD0)=&value(contactPhoneNum0)=&value(estimatedTimeHour0)=&value(estimatedTimeMinute0)=&value(estimatedTimeAMPM0)=&value(estimatedEndTimeHour0)=&value(estimatedEndTimeMinute0)=&value(estimatedEndTimeAMPM0)=&date(activityModel*desiredDate0)=&value(desiredTimeHour0)=&value(desiredTimeMinute0)=&value(desiredTimeAMPM0)=&value(isRestrictView4ACA0)=off&value"
		"(capId)=&value(groupCode)=&value(deptOfUser%2C0)=MILWAUKEE%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(initInspector%2C0)=&value(gaUserID%2C0)=ADMIN&date(scheduleDate%2C0)=08%2F29%2F2018&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&pageSizeR=9999&", 
		LAST);

	lr_end_transaction("MILWAUKEE_TC3_23_Record_Inspection_ScheduleInspection_ClickOK",LR_AUTO);

	lr_think_time(23);

	lr_start_transaction("MILWAUKEE_TC3_24_Record_inspection_ScheduleInspection_ClickOK_OK");

	lr_end_transaction("MILWAUKEE_TC3_24_Record_inspection_ScheduleInspection_ClickOK_OK",LR_AUTO);

	lr_start_transaction("MILWAUKEE_SignOut");

	web_url("signoff.do", 
		"URL=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t391.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("signout.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/security/signout.do", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t392.inf", 
		LAST);

	web_submit_data("portal", 
		"Action=https://av-pt-ferrari.accela.com/jetspeed/portal?action=JClearCookie", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t393.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("logoutAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=MILWAUKEE&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t394.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("hostSignon.do_4", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=MILWAUKEE&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Snapshot=t395.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("host-signon.css_2", 
		"URL=https://av-pt-ferrari.accela.com/security/css/host-signon.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Snapshot=t396.inf", 
		LAST);

	web_url("spacer.gif_4", 
		"URL=https://av-pt-ferrari.accela.com/security/images/spacer.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Snapshot=t397.inf", 
		LAST);

	web_url("hostSignon.do_5", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Snapshot=t398.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("spacer.gif_5", 
		"URL=https://av-pt-ferrari.accela.com/security/images/spacer.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t403.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("login.css_2", 
		"URL=https://av-pt-ferrari.accela.com/security/includes/login.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t399.inf", 
		LAST);

	web_url("sso.js_2", 
		"URL=https://av-pt-ferrari.accela.com/security/javascript/sso.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t400.inf", 
		LAST);

	web_url("accela_logo_v2.jpg_2", 
		"URL=https://av-pt-ferrari.accela.com/security/images/accela_logo_v2.jpg", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t401.inf", 
		LAST);

	web_url("login-bar.gif_2", 
		"URL=https://av-pt-ferrari.accela.com/security/images/login-bar.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t402.inf", 
		LAST);

	web_url("hook.png", 
		"URL=https://av-pt-ferrari.accela.com/security/images/hook.png", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t404.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("MILWAUKEE_SignOut",LR_AUTO);

	return 0;
}