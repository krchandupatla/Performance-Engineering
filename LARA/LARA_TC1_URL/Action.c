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
		LAST);

	web_url("hostSignon.do", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?successURL=https%3A%2F%2Fav-pt-ferrari.accela.com%2Fportlets%2Fspa%2Fdashboard.do&SignOnModule=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

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
		LAST);

	lr_think_time(7);

	lr_start_transaction("LARA_Login");

	web_submit_data("hostSignon.do_2", 
		"Action=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=action", "Value=signon", ENDITEM, 
		"Name=successUrl", "Value=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", ENDITEM, 
		"Name=cookieUserName", "Value=", ENDITEM, 
		"Name=cookieAgencyName", "Value=", ENDITEM, 
		"Name=requestToken", "Value=1037033cebd", ENDITEM, 
		"Name=requestLanguageToken", "Value=20983cfc15", ENDITEM, 
		"Name=password1", "Value=", ENDITEM, 
		"Name=servProvCode", "Value=LARA", ENDITEM, 
		"Name=username", "Value=admin", ENDITEM, 
		"Name=password", "Value=admin", ENDITEM, 
		"Name=accela_select_language", "Value=en_US", ENDITEM, 
		"Name=submit_", "Value=Login", ENDITEM, 
		LAST);

	web_url("dashboard.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("text.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"TargetFrame=", 
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
		LAST);

	web_custom_request("userinfo.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/user/userinfo.do?mode=userInfo", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={}", 
		LAST);

	web_url("session.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("LARA_Login",LR_AUTO);

	lr_think_time(13);

	lr_start_transaction("LARA_TC1_01_Click_Records");

	web_url("session.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("session.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_url("session.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("session.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("myCAPDetailPortlet.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("empty.jsp", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("LARA_TC1_01_Click_Records",LR_AUTO);

	lr_think_time(6);

	lr_start_transaction("LARA_TC1_02_Click_Search");

	web_url("session.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("capSearch.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("blank.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("empty.jsp_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_url("formAjaxUtil.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/formAjaxUtil.do?portlet_language=en_US&attriKey=capSearchForm&staffName=value(capDetailModel*asgnStaff)&userType=1&dept=&mode=getStaffsByDept", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("LARA_TC1_02_Click_Search",LR_AUTO);

	lr_think_time(4);

	lr_start_transaction("LARA_TC1_03_Search_Record");

	web_url("session.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("capSearch.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Building", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=TRANSACTION_TOKEN_KEY_FOR_CAPSEARCHFORM", "Value=97d1129c25bbe7d04bb8c251679d37a1", ENDITEM, 
		"Name=value(FirstEntryURL)", "Value=/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", ENDITEM, 
		"Name=value(CurrentEntryURL)", "Value=/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", ENDITEM, 
		"Name=portlet_language", "Value=en_US", ENDITEM, 
		"Name=refresh_target", "Value=", ENDITEM, 
		"Name=refresh_url", "Value=", ENDITEM, 
		"Name=buttonName", "Value=", ENDITEM, 
		"Name=modeName", "Value=search", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=accelasubmitbuttonname", "Value=submit", ENDITEM, 
		"Name=itemName", "Value=", ENDITEM, 
		"Name=CurrentViewID", "Value=115", ENDITEM, 
		"Name=exceptionLogID", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=value(portlet_soundex)", "Value=off", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=115", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=UK8ep-LgXN3oRWC2C7mt6rVY", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=action", "Value=", ENDITEM, 
		"Name=mode", "Value=submit", ENDITEM, 
		"Name=isSearchedFlag", "Value=Y", ENDITEM, 
		"Name=value(clear)", "Value=", ENDITEM, 
		"Name=value(isFromAdmin)", "Value=", ENDITEM, 
		"Name=formSearchPage", "Value=Y", ENDITEM, 
		"Name=value(supportMulAgencySearch)", "Value=Y", ENDITEM, 
		"Name=selectAgencies", "Value=", ENDITEM, 
		"Name=selectModules", "Value=", ENDITEM, 
		"Name=value(capModel*altID)", "Value=BLDG18-153945", ENDITEM, 
		"Name=value(capContactModel*internalUserFlag)", "Value=", ENDITEM, 
		"Name=value(setDetailsModel*setMemberStatus)", "Value=", ENDITEM, 
		"Name=value(setDetailsModel*setMemberStatusDate)", "Value=", ENDITEM, 
		"Name=value(capID)", "Value=", ENDITEM, 
		"Name=value(capModel*capStatus)", "Value=", ENDITEM, 
		"Name=value(b1ExpirationModel*expStatus)", "Value=", ENDITEM, 
		"Name=value(search_range_b1ExpirationModel*expDate)", "Value=", ENDITEM, 
		"Name=date(search_range_from_b1ExpirationModel*expDate)", "Value=", ENDITEM, 
		"Name=date(search_range_to_b1ExpirationModel*expDate)", "Value=", ENDITEM, 
		"Name=value(srLevel)", "Value=", ENDITEM, 
		"Name=value(capGroupIndex)", "Value=", ENDITEM, 
		"Name=value(capTypeModel*group)", "Value=", ENDITEM, 
		"Name=value(capTypeModel*type)", "Value=", ENDITEM, 
		"Name=value(capTypeModel*subType)", "Value=", ENDITEM, 
		"Name=value(capTypeModel*category)", "Value=", ENDITEM, 
		"Name=value(capTypeModel)", "Value=null/null/null/null", ENDITEM, 
		"Name=date(capModel*fileDate)", "Value=", ENDITEM, 
		"Name=date(capModel*endFileDate)", "Value=08/28/2018", ENDITEM, 
		"Name=value(capContactModel*email)", "Value=", ENDITEM, 
		"Name=value(addressModel*houseNumberRangeStart)", "Value=", ENDITEM, 
		"Name=value(addressModel*houseNumberRangeEnd)", "Value=", ENDITEM, 
		"Name=value(search_range_from_addressModel*houseNumberStart)", "Value=", ENDITEM, 
		"Name=value(search_range_to_addressModel*houseNumberStart)", "Value=", ENDITEM, 
		"Name=value(search_range_addressModel*houseNumberStart)", "Value=", ENDITEM, 
		"Name=value(addressModel*streetDirection)", "Value=", ENDITEM, 
		"Name=value(addressModel*streetName)", "Value=", ENDITEM, 
		"Name=value(addressModel*streetSuffix)", "Value=", ENDITEM, 
		"Name=date(capDetailModel*firstIssuedDate)", "Value=", ENDITEM, 
		"Name=date(capDetailModel*endFirstIssuedDate)", "Value=", ENDITEM, 
		"Name=value(capModel*createdByACA)", "Value=", ENDITEM, 
		"Name=value(capModel*specialText)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*asgnDept)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*asgnDept)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*asgnStaff)", "Value=", ENDITEM, 
		"Name=value(search_range_from_addressModel*houseNumberEnd)", "Value=", ENDITEM, 
		"Name=value(search_range_to_addressModel*houseNumberEnd)", "Value=", ENDITEM, 
		"Name=value(search_range_addressModel*houseNumberEnd)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*inspectorName)", "Value=", ENDITEM, 
		"Name=value(capContactModel*contactType)", "Value=", ENDITEM, 
		"Name=value(capContactModel*businessName)", "Value=", ENDITEM, 
		"Name=value(capContactModel*fullName)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*inspectorId)", "Value=", ENDITEM, 
		"Name=value(addressModel*city)", "Value=", ENDITEM, 
		"Name=value(capContactModel*firstName)", "Value=", ENDITEM, 
		"Name=value(capContactModel*lastName)", "Value=", ENDITEM, 
		"Name=value(licenseProfessionalModel*licensenbr)", "Value=", ENDITEM, 
		"Name=value(capContactModel*addressLine1)", "Value=", ENDITEM, 
		"Name=value(taskSpecInfoModel*checkboxDesc)", "Value=", ENDITEM, 
		"Name=value(capOwnerModel*ownerFullName)", "Value=", ENDITEM, 
		"Name=value(capParcelModel*parcelNumber)", "Value=", ENDITEM, 
		"Name=value(addressModel*addressLine1)", "Value=", ENDITEM, 
		"Name=value(taskSpecInfoModel*checklistComment)", "Value=", ENDITEM, 
		"Name=value(capContactModel*maskedSsn)", "Value=", ENDITEM, 
		"Name=value(maskformat_capContactModel*maskedSsn)", "Value=AAA-AA-AAAA", ENDITEM, 
		"Name=value(capContactModel*fein)", "Value=", ENDITEM, 
		"Name=value(maskformat_capContactModel*fein)", "Value=", ENDITEM, 
		"Name=value(licenseProfessionalModel*businessLicense)", "Value=", ENDITEM, 
		"Name=value(addressModel*zip)", "Value=", ENDITEM, 
		"Name=value(sectionTownShipRangeModel*townShip)", "Value=", ENDITEM, 
		"Name=value(capContactModel*city)", "Value=", ENDITEM, 
		"Name=value(taskItemModel*taskDescription)", "Value=", ENDITEM, 
		"Name=value(taskItemModel*disposition)", "Value=", ENDITEM, 
		"Name=date(taskItemModel*statusDate)", "Value=", ENDITEM, 
		"Name=date(taskItemModel*statusEndDate)", "Value=", ENDITEM, 
		"Name=value(capContactModel*userID)", "Value=", ENDITEM, 
		"Name=value(appSpecInfoModel*checkboxDesc)", "Value=", ENDITEM, 
		"Name=value(appSpecInfoModel*checklistComment)", "Value=", ENDITEM, 
		"Name=value(capModel*receiptNumber)", "Value=", ENDITEM, 
		"Name=value(capModel*checkNbr)", "Value=", ENDITEM, 
		"Name=date(capDetailModel*closedDate)", "Value=", ENDITEM, 
		"Name=date(capDetailModel*endClosedDate)", "Value=", ENDITEM, 
		"Name=isSearchASIForm", "Value=Y", ENDITEM, 
		"Name=value(mode)", "Value=search", ENDITEM, 
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(capContactModel*maskedSsn)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"},\"value(capContactModel*fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"}}}", ENDITEM, 
		LAST);

	web_submit_data("empty.jsp_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("LARA_TC1_03_Search_Record",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("LARA_TC1_04_Record_Details");

	web_url("session.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CapTabSummary.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3=K3989&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("ajax.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3=K3989&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_submit_data("empty.jsp_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_url("blank.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3=K3989&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("tabRecordCount.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3=K3989&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3=K3989&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3=K3989&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/"
		"countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3=K3989&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("search.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3=K3989&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		LAST);

	web_custom_request("expression.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3=K3989&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"Body=argumentPKs="
		"%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22ENVIRONMENTAL%20CONTROL%20APPROVAL%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22VIOLATIONS%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A-2%2C%22viewKey1%22%3A%22HISTORICAL%20DATA%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22port"
		"letID%22%3A-2%2C%22viewKey1%22%3A%22GENERAL%20INFORMATION%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=TABSUMMARY&isReload=false&module=Building&capType=Building%2FBuilding%2FNA%2FNA", 
		LAST);

	web_custom_request("expression.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3=K3989&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		body_variable_1, 
		LAST);

	lr_end_transaction("LARA_TC1_04_Record_Details",LR_AUTO);

	lr_think_time(7);

	lr_start_transaction("LARA_TC1_05_Record_Click_Record");

	web_url("session.do_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_url("session.do_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3=K3989&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_url("capDetail.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=LARA&ID1=18EST&ID2=00000&ID3=K3989&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("empty.jsp_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_custom_request("search.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		LAST);

	web_custom_request("tabRecordCount.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3=K3989&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3=K3989&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/"
		"countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=txt/xml", 
		LAST);

	web_submit_data("expression.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=argumentPKs", "Value=[{\"portletID\":112,\"viewKey1\":\"\",\"viewKey2\":\"\",\"viewKey3\":\"\"}]", ENDITEM, 
		"Name=expressionPageType", "Value=SINGLEPORTLET", ENDITEM, 
		"Name=isReload", "Value=false", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=capType", "Value=Building/Building/NA/NA", ENDITEM, 
		LAST);

	web_custom_request("expression.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmode%3Dview%26isRedirect%3Dfalse%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmode%3Dview%26isRedirect%3Dfalse%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Building&itemName=&CurrentViewID=112&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=112&sessionIdFromWindow=UK8ep-LgXN3oRWC2C7mt6rVY&"
		"listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=112&expression_portlet_to_be_populate=-99999&expressionPageType=SINGLEPORTLET&expression_page_reload_after_submit_or_validate_failed=true&value(capID*ID1)=18EST&value(capID*ID2)=00000&value(capID*ID3)=K3989&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capDetailModel*creatorDeptAlias)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&"
		"date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=BLDG18-153945&value(jobValue)=450%2C000.00&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)="
		"&value(capDetailModel*totalJobCost)=9992.0&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=&value(capModel*reportedTime)=&value(capDetailModel*pmScheduleSeq)=&value(capModel*createdByACA)=N&date(capDetailModel*trackStartDate)=&date(capDetailModel*estimatedDueDate)=&value(capDetailModel*inPossessionTime)=&value(capDetailModel*overallApplicationTime)=&value(capDetailModel*estProdUnits)=1.0&value(capDetailModel*actualProdUnits)=1.0&value"
		"(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=9992.0&value(capDetailModel*estJobCost)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value"
		"(capDetailModel*infractionFlag)=N&value(capDetailModel*misdemeanorFlag)=N&value(capDetailModel*offnWitnessedFlag)=N&value(capDetailModel*dfndtSignatureFlag)=N&value(capDetailModel*bookingFlag)=N&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capModel*initiatedProduct)=RESTAPI&value(capDetailModel*undistributedCost)=0.00&value(capDetailModel*url)=&value(capModel*certificationApplied)=&date(capModel*certificationDate)=&value(capDetailModel*generatedByCloning)=&value"
		"(capModel*pendingValidation)=&date(capModel*fileDate)=08%2F23%2F2018&value(capModel*capStatus)=Invoice&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=PT%20Regression%20Test%20Application&value(capWorkDescriptionModel*description)=PT%20Regression%20Test%20Application%20Description&value(capDetailModel*totalFee)=0.00&value(capDetailModel*totalFee)=0.00&value(capDetailModel*totalPay)=0.00&value(capDetailModel*totalPay)=0.00&value(capDetailModel*balance)=0.00&value"
		"(capDetailModel*balance)=0.00&value(capDetailModel*asgnDept)=&value(capDetailModel*asgnStaff)=&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A112%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&mode=execute", 
		LAST);

	lr_end_transaction("LARA_TC1_05_Record_Click_Record",LR_AUTO);

	lr_start_transaction("LARA_TC1_06_Record_SaveRecord");

	web_url("session.do_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("dataList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/ams/asset/dataList.do?mode=checkAssetStatus&from=capByEdit&module=Building", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmode%3Dview%26isRedirect%3Dfalse%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmode%3Dview%26isRedirect%3Dfalse%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=112&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=112&sessionIdFromWindow="
		"UK8ep-LgXN3oRWC2C7mt6rVY&listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=112&expression_portlet_to_be_populate=-99999&expressionPageType=SINGLEPORTLET&expression_page_reload_after_submit_or_validate_failed=true&value(mode)=edit&value(capID*ID1)=18EST&value(capID*ID2)=00000&value(capID*ID3)=K3989&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capDetailModel*creatorDeptAlias)=&value(capModel*capSubType)=&date"
		"(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=BLDG18-153945&value(jobValue)=450%2C000.00&value(blank1)="
		"&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=9992.0&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=&value(capModel*reportedTime)=&value(capDetailModel*pmScheduleSeq)=&value(capModel*createdByACA)=N&date(capDetailModel*trackStartDate)=&date(capDetailModel*estimatedDueDate)=&value(capDetailModel*inPossessionTime)=&value(capDetailModel*overallApplicationTime)=&value(capDetailModel*estProdUnits)=1.0&"
		"value(capDetailModel*actualProdUnits)=1.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=9992.0&value(capDetailModel*estJobCost)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value"
		"(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=N&value(capDetailModel*misdemeanorFlag)=N&value(capDetailModel*offnWitnessedFlag)=N&value(capDetailModel*dfndtSignatureFlag)=N&value(capDetailModel*bookingFlag)=N&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capModel*initiatedProduct)=RESTAPI&value(capDetailModel*undistributedCost)=0.00&value(capDetailModel*url)=&value(capModel*certificationApplied)=&date(capModel*certificationDate)=&value"
		"(capDetailModel*generatedByCloning)=&value(capModel*pendingValidation)=&date(capModel*fileDate)=08%2F23%2F2018&value(capModel*capStatus)=Invoice&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=PT%20Regression%20Test%20Application&value(capWorkDescriptionModel*description)=PT%20Regression%20Test%20Application%20Description&value(capDetailModel*totalFee)=0.00&value(capDetailModel*totalFee)=0.00&value(capDetailModel*totalPay)=0.00&value(capDetailModel*totalPay)=0.00&value"
		"(capDetailModel*balance)=0.00&value(capDetailModel*balance)=0.00&value(capDetailModel*asgnDept)=&value(capDetailModel*asgnStaff)=&", 
		LAST);

	web_custom_request("expression.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmode%3Dview%26isRedirect%3Dfalse%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmode%3Dview%26isRedirect%3Dfalse%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Building&itemName=&CurrentViewID=112&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=112&sessionIdFromWindow=UK8ep-LgXN3oRWC2C7mt6rVY&"
		"listID=&printType=&checkBoxValue=&expression_portlet_to_be_populate=112&expression_portlet_to_be_populate=-99999&expressionPageType=SINGLEPORTLET&expression_page_reload_after_submit_or_validate_failed=true&value(capID*ID1)=18EST&value(capID*ID2)=00000&value(capID*ID3)=K3989&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capDetailModel*creatorDeptAlias)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&"
		"date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=BLDG18-153945&value(jobValue)=450%2C000.00&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)="
		"&value(capDetailModel*totalJobCost)=9992.0&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=&value(capModel*reportedTime)=&value(capDetailModel*pmScheduleSeq)=&value(capModel*createdByACA)=N&date(capDetailModel*trackStartDate)=&date(capDetailModel*estimatedDueDate)=&value(capDetailModel*inPossessionTime)=&value(capDetailModel*overallApplicationTime)=&value(capDetailModel*estProdUnits)=1.0&value(capDetailModel*actualProdUnits)=1.0&value"
		"(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=9992.0&value(capDetailModel*estJobCost)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value"
		"(capDetailModel*infractionFlag)=N&value(capDetailModel*misdemeanorFlag)=N&value(capDetailModel*offnWitnessedFlag)=N&value(capDetailModel*dfndtSignatureFlag)=N&value(capDetailModel*bookingFlag)=N&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capModel*initiatedProduct)=RESTAPI&value(capDetailModel*undistributedCost)=0.00&value(capDetailModel*url)=&value(capModel*certificationApplied)=&date(capModel*certificationDate)=&value(capDetailModel*generatedByCloning)=&value"
		"(capModel*pendingValidation)=&date(capModel*fileDate)=08%2F23%2F2018&value(capModel*capStatus)=Invoice&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=PT%20Regression%20Test%20Application&value(capWorkDescriptionModel*description)=PT%20Regression%20Test%20Application%20Description&value(capDetailModel*totalFee)=0.00&value(capDetailModel*totalFee)=0.00&value(capDetailModel*totalPay)=0.00&value(capDetailModel*totalPay)=0.00&value(capDetailModel*balance)=0.00&value"
		"(capDetailModel*balance)=0.00&value(capDetailModel*asgnDept)=&value(capDetailModel*asgnStaff)=&accelasubmitbuttonname=Previous&callBack=window.expression.__doExpressionSubmitCallBack(0)&variableKey=onSubmit&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A112%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&mode=execute", 
		LAST);

	lr_think_time(9);

	web_url("session.do_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	web_url("session.do_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("LARA_TC1_06_Record_SaveRecord",LR_AUTO);

	web_submit_data("capDetail.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=value(FirstEntryURL)", "Value=/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", ENDITEM, 
		"Name=value(CurrentEntryURL)", "Value=/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", ENDITEM, 
		"Name=portlet_language", "Value=en_US", ENDITEM, 
		"Name=refresh_target", "Value=capList", ENDITEM, 
		"Name=refresh_url", "Value=", ENDITEM, 
		"Name=buttonName", "Value=", ENDITEM, 
		"Name=modeName", "Value=view", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=accelasubmitbuttonname", "Value=editSave", ENDITEM, 
		"Name=itemName", "Value=", ENDITEM, 
		"Name=CurrentViewID", "Value=112", ENDITEM, 
		"Name=exceptionLogID", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=112", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=UK8ep-LgXN3oRWC2C7mt6rVY", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=expression_portlet_to_be_populate", "Value=112", ENDITEM, 
		"Name=expression_portlet_to_be_populate", "Value=-99999", ENDITEM, 
		"Name=expressionPageType", "Value=SINGLEPORTLET", ENDITEM, 
		"Name=expression_page_reload_after_submit_or_validate_failed", "Value=true", ENDITEM, 
		"Name=value(mode)", "Value=edit", ENDITEM, 
		"Name=value(capID*ID1)", "Value=18EST", ENDITEM, 
		"Name=value(capID*ID2)", "Value=00000", ENDITEM, 
		"Name=value(capID*ID3)", "Value=K3989", ENDITEM, 
		"Name=value(capType)", "Value=Building/Building/NA/NA", ENDITEM, 
		"Name=value(capID)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*shortNotes)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*creatorDeptAlias)", "Value=", ENDITEM, 
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
		"Name=value(capDetailModel*priority)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*reportedChannel)", "Value=Call Center", ENDITEM, 
		"Name=value(capDetailModel*severity)", "Value=", ENDITEM, 
		"Name=value(capModel*altID)", "Value=BLDG18-153945", ENDITEM, 
		"Name=value(jobValue)", "Value=450,000.00", ENDITEM, 
		"Name=value(blank1)", "Value=", ENDITEM, 
		"Name=value(blank2)", "Value=", ENDITEM, 
		"Name=value(blank3)", "Value=", ENDITEM, 
		"Name=value(blank4)", "Value=", ENDITEM, 
		"Name=value(blank5)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*totalJobCost)", "Value=9992.0", ENDITEM, 
		"Name=value(b1ExpirationModel*expStatus)", "Value=", ENDITEM, 
		"Name=date(b1ExpirationModel*expDate)", "Value=", ENDITEM, 
		"Name=date(capModel*reportedDate)", "Value=", ENDITEM, 
		"Name=value(capModel*reportedTime)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*pmScheduleSeq)", "Value=", ENDITEM, 
		"Name=value(capModel*createdByACA)", "Value=N", ENDITEM, 
		"Name=date(capDetailModel*trackStartDate)", "Value=", ENDITEM, 
		"Name=date(capDetailModel*estimatedDueDate)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*inPossessionTime)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*overallApplicationTime)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*estProdUnits)", "Value=1.0", ENDITEM, 
		"Name=value(capDetailModel*actualProdUnits)", "Value=1.0", ENDITEM, 
		"Name=value(capDetailModel*estCostPerUnit)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*costPerUnit)", "Value=9992.0", ENDITEM, 
		"Name=value(capDetailModel*estJobCost)", "Value=", ENDITEM, 
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
		"Name=value(capDetailModel*infractionFlag)", "Value=N", ENDITEM, 
		"Name=value(capDetailModel*misdemeanorFlag)", "Value=N", ENDITEM, 
		"Name=value(capDetailModel*offnWitnessedFlag)", "Value=N", ENDITEM, 
		"Name=value(capDetailModel*dfndtSignatureFlag)", "Value=N", ENDITEM, 
		"Name=value(capDetailModel*bookingFlag)", "Value=N", ENDITEM, 
		"Name=value(capDetailModel*statusReason)", "Value=", ENDITEM, 
		"Name=date(capDetailModel*firstIssuedDate)", "Value=", ENDITEM, 
		"Name=value(capModel*initiatedProduct)", "Value=RESTAPI", ENDITEM, 
		"Name=value(capDetailModel*undistributedCost)", "Value=0.00", ENDITEM, 
		"Name=value(capDetailModel*url)", "Value=", ENDITEM, 
		"Name=value(capModel*certificationApplied)", "Value=", ENDITEM, 
		"Name=date(capModel*certificationDate)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*generatedByCloning)", "Value=", ENDITEM, 
		"Name=value(capModel*pendingValidation)", "Value=", ENDITEM, 
		"Name=date(capModel*fileDate)", "Value=08/23/2018", ENDITEM, 
		"Name=value(capModel*capStatus)", "Value=Invoice", ENDITEM, 
		"Name=value(capType)", "Value=Building/Building/NA/NA", ENDITEM, 
		"Name=value(capModel*specialText)", "Value=PT Regression Test Application", ENDITEM, 
		"Name=value(capWorkDescriptionModel*description)", "Value=PT Regression Test Application Description", ENDITEM, 
		"Name=value(capDetailModel*totalFee)", "Value=0.00", ENDITEM, 
		"Name=value(capDetailModel*totalFee)", "Value=0.00", ENDITEM, 
		"Name=value(capDetailModel*totalPay)", "Value=0.00", ENDITEM, 
		"Name=value(capDetailModel*totalPay)", "Value=0.00", ENDITEM, 
		"Name=value(capDetailModel*balance)", "Value=0.00", ENDITEM, 
		"Name=value(capDetailModel*balance)", "Value=0.00", ENDITEM, 
		"Name=value(capDetailModel*asgnDept)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*asgnStaff)", "Value=", ENDITEM, 
		LAST);

	web_submit_data("empty.jsp_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_custom_request("search.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"Body=categoryName=Portlet - Expression", 
		LAST);

	web_custom_request("tabRecordCount.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3=K3989&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3=K3989&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/"
		"countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=txt/xml", 
		LAST);

	web_submit_data("expression.do_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=argumentPKs", "Value=[{\"portletID\":112,\"viewKey1\":\"\",\"viewKey2\":\"\",\"viewKey3\":\"\"}]", ENDITEM, 
		"Name=expressionPageType", "Value=SINGLEPORTLET", ENDITEM, 
		"Name=isReload", "Value=true", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=capType", "Value=Building/Building/NA/NA", ENDITEM, 
		LAST);

	web_custom_request("expression.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmode%3Dview%26isRedirect%3Dfalse%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmodule%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=editSave&modeName=&module=Building&itemName=&CurrentViewID=112&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=112&sessionIdFromWindow=UK8ep-LgXN3oRWC2C7mt6rVY&listID=&printType=&"
		"checkBoxValue=&expression_portlet_to_be_populate=112&expression_portlet_to_be_populate=-99999&expressionPageType=SINGLEPORTLET&expression_page_reload_after_submit_or_validate_failed=true&value(capID*ID1)=18EST&value(capID*ID2)=00000&value(capID*ID3)=K3989&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capDetailModel*creatorDeptAlias)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date"
		"(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=BLDG18-153945&value(jobValue)=450%2C000.00&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&"
		"value(capDetailModel*totalJobCost)=9992.0&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=&value(capModel*reportedTime)=&value(capDetailModel*pmScheduleSeq)=&value(capModel*createdByACA)=N&date(capDetailModel*trackStartDate)=&date(capDetailModel*estimatedDueDate)=&value(capDetailModel*inPossessionTime)=&value(capDetailModel*overallApplicationTime)=&value(capDetailModel*estProdUnits)=1.0&value(capDetailModel*actualProdUnits)=1.0&value"
		"(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=9992.0&value(capDetailModel*estJobCost)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value"
		"(capDetailModel*infractionFlag)=N&value(capDetailModel*misdemeanorFlag)=N&value(capDetailModel*offnWitnessedFlag)=N&value(capDetailModel*dfndtSignatureFlag)=N&value(capDetailModel*bookingFlag)=N&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capModel*initiatedProduct)=RESTAPI&value(capDetailModel*undistributedCost)=0.00&value(capDetailModel*url)=&value(capModel*certificationApplied)=&date(capModel*certificationDate)=&value(capDetailModel*generatedByCloning)=&value"
		"(capModel*pendingValidation)=&date(capModel*fileDate)=08%2F23%2F2018&value(capModel*capStatus)=Invoice&value(capType)=Building%2FBuilding%2FNA%2FNA&value(capModel*specialText)=PT%20Regression%20Test%20Application&value(capWorkDescriptionModel*description)=PT%20Regression%20Test%20Application%20Description&value(capDetailModel*totalFee)=0.00&value(capDetailModel*totalFee)=0.00&value(capDetailModel*totalPay)=0.00&value(capDetailModel*totalPay)=0.00&value(capDetailModel*balance)=0.00&value"
		"(capDetailModel*balance)=0.00&value(capDetailModel*asgnDept)=&value(capDetailModel*asgnStaff)=&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A112%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&mode=execute", 
		LAST);

	web_url("session.do_14", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_url("session.do_15", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	lr_start_transaction("LARA_TC1_07_Click_AppHistory");

	web_url("session.do_16", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_url("capStatusHistory.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("empty.jsp_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_custom_request("tabRecordCount.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3=K3989&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3=K3989&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/"
		"countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=txt/xml", 
		LAST);

	web_url("session.do_17", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("LARA_TC1_07_Click_AppHistory",LR_AUTO);

	lr_start_transaction("LARA_TC1_08_Click_WorkFlow");

	web_url("session.do_18", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	web_url("workflowStatusList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capStatusHistory.do?mode=list&clearForm=clearForm&module=Building", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("empty.jsp_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_custom_request("text.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"AANewUX_WorkFlow_Assigned\":\"\",\"AANewUX_WorkFlow_Started\":\"\",\"AANewUX_WorkFlow_Save\":\"\",\"AANewUX_WorkFlow_Cancel\":\"\",\"AANewUX_WorkFlow_ShowAll\":\"\",\"AANewUX_WorkFlow_By\":\"\",\"AANewUX_WorkFlow_Due\":\"\",\"AANewUX_WorkFlow_Subtask\":\"\",\"AANewUX_WorkFlow_NewAdhocTask\":\"\",\"AANewUX_WorkFlow_AdditionalAdhocTask\":\"\",\"AANewUX_WorkFlow_WorkflowTask\":\"\",\"AANewUX_WorkFlow_BucketCompleted\":\"\",\"AANewUX_WorkFlow_BucketInprogress\":\"\",\""
		"AANewUX_WorkFlow_BucketUpNext\":\"\",\"AANewUX_WorkFlow_TaskInactive\":\"\",\"AANewUX_WorkFlow_TaskInprogress\":\"\",\"AANewUX_WorkFlow_TaskComplete\":\"\",\"AANewUX_WorkFlow_ViewHistory\":\"\",\"AANewUX_WorkFlow_ViewWorkflowDesign\":\"\",\"AANewUX_WorkFlow_IncludeAddPage\":\"\",\"AANewUX_WorkFlow_PageOf\":\"\",\"AANewUX_WorkFlow_PageCompleted\":\"\",\"AANewUX_WorkFlow_WorkflowDesign\":\"\",\"AANewUX_Designer_NewDesigner\":\"\",\"AANewUX_Designer_OldDesigner\":\"\",\"AANewUX_Designer_Preview\":\""
		"\",\"AANewUX_Designer_Text\":\"\",\"AANewUX_Designer_Controls\":\"\",\"AANewUX_Designer_NoCtlAvailable\":\"\",\"AANewUX_Designer_Drag\":\"\",\"AANewUX_Designer_Select\":\"\",\"AANewUX_Designer_Properties\":\"\",\"AANewUX_Designer_Ok\":\"\",\"AANewUX_Designer_Label\":\"\",\"AANewUX_Designer_Url\":\"\",\"AANewUX_Designer_Save\":\"\",\"AANewUX_Designer_Cancel\":\"\",\"AANewUX_Designer_DynamicLabelText\":\"\",\"AANewUX_CheckList_SaveAll\":\"\"}", 
		LAST);

	web_url("workflow.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/workflow.do?mode=viewWorkFlowDesignPermission&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		LAST);

	web_url("workflow.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/workflow.do?mode=getTasks&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("empty.jsp_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_url("session.do_19", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("tabRecordCount.do_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3=K3989&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=18EST&ID2=00000&ID3=K3989&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E21%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/"
		"countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"EncType=txt/xml", 
		LAST);

	lr_end_transaction("LARA_TC1_08_Click_WorkFlow",LR_AUTO);

	lr_think_time(7);

	lr_start_transaction("LARA_SignOut");

	web_url("session.do_20", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.52c11&module=Building", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		LAST);

	web_url("signoff.do", 
		"URL=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("portal", 
		"Action=https://av-pt-ferrari.accela.com/jetspeed/portal?action=JClearCookie", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_url("logoutAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=LARA&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	web_url("hostSignon.do_3", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=LARA&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("LARA_SignOut",LR_AUTO);

	return 0;
}