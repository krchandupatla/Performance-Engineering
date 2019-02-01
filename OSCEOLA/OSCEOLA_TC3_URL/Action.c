Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("l", 
		"URL=https://translate.googleapis.com/translate_a/l?client=chrome&cb=sl&hl=en&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw&alpha=1", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("dashboard.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("searchdomaincheck", 
		"URL=https://www.google.com/searchdomaincheck?format=url&type=chrome", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("hostSignon.do", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?successURL=https%3A%2F%2Fav-pt-ferrari.accela.com%2Fportlets%2Fspa%2Fdashboard.do&SignOnModule=", 
		"Snapshot=t4.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("host-signon.css", 
		"URL=https://av-pt-ferrari.accela.com/security/css/host-signon.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("ac360.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ac360.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("memoryLeakPatch.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("spacer.gif", 
		"URL=https://av-pt-ferrari.accela.com/security/images/spacer.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("hostSignon.do_2", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("header.htm", 
		"URL=https://www.accela.com/ext/web/aa/header.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t22.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("I18N.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("checkTextAreaLength.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/checkTextAreaLength.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("Util.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/widget/Util.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("jsMessageResoruce.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/jsMessageResoruce.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t13.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("login.css", 
		"URL=https://av-pt-ferrari.accela.com/security/includes/login.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("dojo.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/dojo.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("sso.js", 
		"URL=https://av-pt-ferrari.accela.com/security/javascript/sso.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("spacer.gif_2", 
		"URL=https://av-pt-ferrari.accela.com/security/images/spacer.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("accela_logo_v2.jpg", 
		"URL=https://av-pt-ferrari.accela.com/security/images/accela_logo_v2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("login-bar.gif", 
		"URL=https://av-pt-ferrari.accela.com/security/images/login-bar.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t20.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(15);

	web_url("json.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/json.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t21.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AdapterRegistry.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/AdapterRegistry.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("aalogin_header.gif", 
		"URL=https://www.accela.com/ext/web/aa/assets/aalogin_header.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.accela.com/ext/web/aa/header.htm", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("spacer.gif_3", 
		"URL=https://www.accela.com/ext/web/aa/assets/spacer.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.accela.com/ext/web/aa/header.htm", 
		"Snapshot=t25.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("favicon.ico", 
		"URL=https://av-pt-ferrari.accela.com/favicon.ico", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t26.inf", 
		LAST);

	lr_think_time(49);

	lr_start_transaction("OSCEOLA_Login");

	web_custom_request("loginAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?requestType=checkWebSSOAdapter&servProvCode=OSCEOLA", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	lr_think_time(4);

	web_submit_data("hostSignon.do_3", 
		"Action=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t28.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=action", "Value=signon", ENDITEM, 
		"Name=successUrl", "Value=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", ENDITEM, 
		"Name=cookieUserName", "Value=", ENDITEM, 
		"Name=cookieAgencyName", "Value=", ENDITEM, 
		"Name=requestToken", "Value=272427a6c87d", ENDITEM, 
		"Name=requestLanguageToken", "Value=280ec694fdf", ENDITEM, 
		"Name=password1", "Value=", ENDITEM, 
		"Name=servProvCode", "Value=OSCEOLA", ENDITEM, 
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
		"Snapshot=t29.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("auth.do", 
		"URL=https://av-pt-ferrari.accela.com/security/auth.do?signOffScript=https://av-pt-ferrari.accela.com/portlets/security/signout.do&switchAgencyScript=https://av-pt-ferrari.accela.com/portlets/commons/sso/blank.jsp&CSRF_REQ_PARAM=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("dashboard.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("bootstrap.min.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/bootstrap/bootstrap.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("app.min.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("ng-sortable.min.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/ng-sortable.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("modernizr.2.8.3.custom.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/lib/modernizr.2.8.3.custom.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("zhy8lto.js", 
		"URL=https://use.typekit.net/zhy8lto.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("chrome-iframe-issue-fix.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/chrome-iframe-issue-fix.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("angular.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/angular/angular.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("en-us.min.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/en-us.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("angular-sanitize.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/angular-sanitize/angular-sanitize.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("ui-bootstrap-tpls.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/angular-bootstrap/ui-bootstrap-tpls.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("angular-ui-router.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/angular-ui-router/release/angular-ui-router.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("stacktrace.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/stacktrace-js/dist/stacktrace.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("sprintf.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/sprintf/dist/sprintf.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("angular-touch.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/angular-touch/angular-touch.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("smart-table.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/angular-smart-table/dist/smart-table.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("angular-slider.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/venturocket-angular-slider/build/angular-slider.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("ng-csv.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/ng-csv/build/ng-csv.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("lodash.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/lodash/lodash.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("ct-ui-router-extras.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/ui-router-extras/release/ct-ui-router-extras.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("angular-deferred-bootstrap.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/angular-deferred-bootstrap/angular-deferred-bootstrap.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t51.inf", 
		LAST);

	web_url("handlebars.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/handlebars/handlebars.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("angular-locale_en-us.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/angular-i18n/angular-locale_en-us.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("config.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/config.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t54.inf", 
		LAST);

	web_url("accela.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/accela.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("i18n-keys.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/data/i18n-keys.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("module.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/module.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("stacktrace-wrapper.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/stacktrace-wrapper.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t58.inf", 
		LAST);

	web_url("sliderbar-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/controllers/sliderbar-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t59.inf", 
		LAST);

	web_url("autofocus.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/autofocus.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t60.inf", 
		LAST);

	web_url("click-outside.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/click-outside.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("content-limit-to.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/content-limit-to.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("ng-repeat-finish.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/ng-repeat-finish.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("on-load.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/on-load.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("select-on-focus.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/select-on-focus.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t65.inf", 
		LAST);

	web_url("table-height-sync.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/table-height-sync.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t66.inf", 
		LAST);

	web_url("typeahead-filter.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/typeahead-filter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t67.inf", 
		LAST);

	web_url("styled-checkbox.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/styled-checkbox.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t68.inf", 
		LAST);

	web_url("launchpad-page.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/entities/launchpad-page.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t69.inf", 
		LAST);

	web_url("task.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/entities/task.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t70.inf", 
		LAST);

	web_url("user-profile.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/entities/user-profile.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t71.inf", 
		LAST);

	web_url("custom-date-filter.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/filters/custom-date-filter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t72.inf", 
		LAST);

	web_url("work-space.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/entities/work-space.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t73.inf", 
		LAST);

	web_url("base-filter.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/filters/base-filter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t74.inf", 
		LAST);

	web_url("highlight.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/filters/highlight.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t75.inf", 
		LAST);

	web_url("translate-filter.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/filters/translate-filter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t76.inf", 
		LAST);

	web_url("overflow.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/filters/overflow.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t77.inf", 
		LAST);

	web_url("reverse.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/filters/reverse.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t78.inf", 
		LAST);

	web_url("dashboard-model.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/models/dashboard-model.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t79.inf", 
		LAST);

	web_url("user-model.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/models/user-model.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t80.inf", 
		LAST);

	web_url("agency-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/agency-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t81.inf", 
		LAST);

	web_url("data-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/data-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t82.inf", 
		LAST);

	web_url("http-interceptor.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/http-interceptor.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t83.inf", 
		LAST);

	web_url("modal-dialog-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/modal-dialog-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t84.inf", 
		LAST);

	web_url("logging-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/logging-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t85.inf", 
		LAST);

	web_url("i18n-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/i18n-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t86.inf", 
		LAST);

	web_url("overlay-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/overlay-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t87.inf", 
		LAST);

	web_url("safe-apply.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/safe-apply.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t88.inf", 
		LAST);

	web_url("slideout-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/slideout-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t89.inf", 
		LAST);

	web_url("user-manager.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/user-manager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t90.inf", 
		LAST);

	web_url("keepalive-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/controllers/keepalive-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t91.inf", 
		LAST);

	web_url("module.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/module.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t92.inf", 
		LAST);

	web_url("classic-admin-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/admin/classic-admin-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t93.inf", 
		LAST);

	web_url("spaces-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/controllers/spaces-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t94.inf", 
		LAST);

	web_url("automation-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/automation-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t95.inf", 
		LAST);

	web_url("space-portlet-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/controllers/space-portlet-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t96.inf", 
		LAST);

	web_url("space-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/controllers/space-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t97.inf", 
		LAST);

	web_url("main-menu-flyout.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/directives/main-menu-flyout.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t98.inf", 
		LAST);

	web_url("space-context-menu.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/directives/space-context-menu.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t99.inf", 
		LAST);

	web_url("space-list.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/directives/space-list.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t100.inf", 
		LAST);

	web_url("space-manager.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/services/space-manager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t101.inf", 
		LAST);

	web_url("space-icon-factory.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/services/space-icon-factory.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t102.inf", 
		LAST);

	web_url("space-repository.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/services/space-repository.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t103.inf", 
		LAST);

	web_url("portlet-session-state.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/services/portlet-session-state.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t104.inf", 
		LAST);

	web_url("server-session-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/services/server-session-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t105.inf", 
		LAST);

	web_url("module.js_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/module.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t106.inf", 
		LAST);

	web_url("agency-switch.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/directives/agency-switch.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t107.inf", 
		LAST);

	web_url("launchpad-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/launchpad/controllers/launchpad-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t108.inf", 
		LAST);

	web_url("favorite-pages-toggle.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/launchpad/directives/favorite-pages-toggle.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t109.inf", 
		LAST);

	web_url("launchpad-manager.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/launchpad/services/launchpad-manager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t110.inf", 
		LAST);

	web_url("task-card-condition.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/task/directives/task-card-condition.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("task-dashboard-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/task/controllers/task-dashboard-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t113.inf", 
		LAST);

	web_url("task-card-menu.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/task/directives/task-card-menu.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t114.inf", 
		LAST);

	web_url("task-flyout-toggle.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/task/directives/task-flyout-toggle.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t115.inf", 
		LAST);

	web_url("task-filter.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/task/directives/task-filter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t116.inf", 
		LAST);

	web_url("task-manager.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/task/services/task-manager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t117.inf", 
		LAST);

	web_url("module.js_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/module.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t118.inf", 
		LAST);

	web_url("globalsearch-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/controllers/globalsearch-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t119.inf", 
		LAST);

	web_url("asset-pagination-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/controllers/asset-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t120.inf", 
		LAST);

	web_url("contact-pagination-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/controllers/contact-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t121.inf", 
		LAST);

	web_url("location-pagination-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/controllers/location-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t122.inf", 
		LAST);

	web_url("document-pagination-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/controllers/document-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t123.inf", 
		LAST);

	web_url("parcel-pagination-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/controllers/parcel-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t124.inf", 
		LAST);

	web_url("professional-pagination-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/controllers/professional-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t125.inf", 
		LAST);

	web_url("record-pagination-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/controllers/record-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t126.inf", 
		LAST);

	web_url("alt-hilite.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/directives/alt-hilite.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t127.inf", 
		LAST);

	web_url("globalsearch-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/services/globalsearch-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t128.inf", 
		LAST);

	web_url("RoboHelp_CSH.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/lib/RoboHelp_CSH.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t129.inf", 
		LAST);

	web_url("portlet-iframe-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/portlet/portlet-iframe-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t130.inf", 
		LAST);

	web_url("dirPagination.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/lib/custom/dirPagination.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t131.inf", 
		LAST);

	web_url("ng-sortable.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/lib/custom/ng-sortable.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t132.inf", 
		LAST);

	web_url("sessionmonitor.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/lib/sessionmonitor.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t133.inf", 
		LAST);

	web_url("showModalDialog.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/lib/showModalDialog.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t134.inf", 
		LAST);

	web_url("popover.tpl.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/templates/popover.tpl.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t135.inf", 
		LAST);

	web_url("compiled.tpl.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/templates/compiled.tpl.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t136.inf", 
		LAST);

	web_url("keepalive.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/controllers/keepalive.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t138.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(7);

	web_url("pa.min.js", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t111.inf", 
		LAST);

	web_url("ajax-loader.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/reskin/ajax-loader.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t137.inf", 
		LAST);

	web_custom_request("text.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t139.inf", 
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

	web_url("l_2", 
		"URL=https://use.typekit.net/af/7d485b/00000000000000003b9ad1b1/27/l?subset_id=2&fvd=n7&v=3", 
		"Resource=1", 
		"RecContentType=application/font-woff2", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t140.inf", 
		LAST);

	web_url("switchAgency.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/switchAgency.do?mode=init", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t141.inf", 
		LAST);

	web_url("l_3", 
		"URL=https://use.typekit.net/af/347aea/00000000000000003b9ad1b2/27/l?subset_id=2&fvd=i7&v=3", 
		"Resource=1", 
		"RecContentType=application/font-woff2", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t142.inf", 
		LAST);

	web_url("l_4", 
		"URL=https://use.typekit.net/af/c9cde8/00000000000000003b9ad1b9/27/l?subset_id=2&fvd=n4&v=3", 
		"Resource=1", 
		"RecContentType=application/font-woff2", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t143.inf", 
		LAST);

	web_url("switchAgency.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/switchAgency.do?mode=list", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t144.inf", 
		LAST);

	web_url("l_5", 
		"URL=https://use.typekit.net/af/4ba64f/00000000000000003b9ad1ba/27/l?subset_id=2&fvd=i4&v=3", 
		"Resource=1", 
		"RecContentType=application/font-woff2", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t145.inf", 
		LAST);

	web_url("p.gif", 
		"URL=https://p.typekit.net/p.gif?s=1&k=zhy8lto&ht=tk&h=av-pt-ferrari.accela.com&f=139.140.175.176&a=621408&js=1.19.2&app=typekit&e=js&_=1535589069628", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t146.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("userinfo.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/user/userinfo.do?mode=userInfo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t147.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=UTF-8", 
		"Body={}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("userSecurityProfile.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/userSecurityProfile.do?mode=getSecurityProfileByModule&items=0375", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t148.inf", 
		LAST);

	web_url("icon-space-pin.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/menubar/icon-space-pin.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t149.inf", 
		LAST);

	web_url("icon-space-pin-dark.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/menubar/icon-space-pin-dark.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t150.inf", 
		LAST);

	web_url("icon-search-inactive.svg", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/menubar/icon-search-inactive.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t151.inf", 
		LAST);

	web_url("glyphicons-halflings-regular.woff2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/fonts/glyphicons-halflings-regular.woff2", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/bootstrap/bootstrap.min.css", 
		"Snapshot=t152.inf", 
		LAST);

	web_url("icon-space-grey.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/menubar/icon-space-grey.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t153.inf", 
		LAST);

	web_url("icon-alert.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/icon-alert.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t154.inf", 
		LAST);

	web_url("icon-settings.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/icon-settings.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t155.inf", 
		LAST);

	web_url("spacesMenu.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/spacesMenu.do?mode=list", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t157.inf", 
		LAST);

	web_url("userSecurityProfile.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/userSecurityProfile.do?mode=getSecurityProfileByModule&items=0008,8488,8143,8400,8145,8144,8478,8213,8477,8487,8132", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t158.inf", 
		LAST);

	web_url("launchPad.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/launchPad.do?mode=getUserPages", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t159.inf", 
		LAST);

	web_url("icon-add.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/launchpad/icon-add.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t160.inf", 
		LAST);

	web_url("menu_location_icon.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/space-icons/menu_location_icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t161.inf", 
		LAST);

	web_url("menu_people_icon_dark.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/space-icons/menu_people_icon_dark.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t162.inf", 
		LAST);

	web_url("menu_assets_icon.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/space-icons/menu_assets_icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t163.inf", 
		LAST);

	web_url("icon-dashboard-tasks-inactive.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/menubar/icon-dashboard-tasks-inactive.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t164.inf", 
		LAST);

	web_url("icon-dashboard-map-active.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/menubar/icon-dashboard-map-active.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t165.inf", 
		LAST);

	web_url("icon-dashboard-tasks-active.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/menubar/icon-dashboard-tasks-active.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t166.inf", 
		LAST);

	web_url("userSecurityProfile.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/userSecurityProfile.do?mode=getSwitchLinkPermissionByDefaultModule", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t167.inf", 
		LAST);

	web_url("no-tasks.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/task/no-tasks.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t168.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("session.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t169.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("favoritePages.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/favoritePages.do?mode=list", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t170.inf", 
		LAST);

	web_url("switchAgency.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/switchAgency.do?mode=setAgency&serviceProviderCode=OSCEOLA", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t171.inf", 
		LAST);

	web_url("icon-favorite.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/launchpad/icon-favorite.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t172.inf", 
		LAST);

	web_url("icon-grabber.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/launchpad/icon-grabber.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t173.inf", 
		LAST);

	web_url("getTaskFilterStatusList.json", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/mock-api/getTaskFilterStatusList.json", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t174.inf", 
		LAST);

	web_url("dashboardTaskQuickQueries.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboardTaskQuickQueries.do", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t175.inf", 
		LAST);

	web_url("dashboardTaskCards.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboardTaskCards.do?mode=multiAgencyTaskCounts&quickQueryId=", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t176.inf", 
		LAST);

	web_url("recentlyViewed.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t177.inf", 
		LAST);

	web_url("dashboardTaskCards.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboardTaskCards.do?end=6&mode=initTask&serviceProviderCode=OSCEOLA&start=1", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t178.inf", 
		LAST);

	web_url("icon-menu-arrow-down.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/icon-menu-arrow-down.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t179.inf", 
		LAST);

	web_url("icon-cardview-active.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/menubar/icon-cardview-active.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t180.inf", 
		LAST);

	web_url("icon-listview-inactive.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/menubar/icon-listview-inactive.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t181.inf", 
		LAST);

	web_url("icon-toggle.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/task/icon-toggle.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t182.inf", 
		LAST);

	web_url("icon-notice.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/task/icon-notice.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t183.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("OSCEOLA_Login",LR_AUTO);

	lr_think_time(8);

	lr_start_transaction("OSCEOLA_TC3_01_ClickRecords");

	web_url("session.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("icon-space-expanded.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/menubar/icon-space-expanded.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t185.inf", 
		LAST);

	web_url("recentlyViewed.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t186.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("session.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.mytask-list", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("icon-record.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/space-icons/icon-record.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t190.inf", 
		LAST);

	web_url("icon-space-context-menu.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/menubar/icon-space-context-menu.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t191.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("myCAPDetailPortlet.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("portlet-iframe-content.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/portlet-iframe-content.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t193.inf", 
		LAST);

	web_url("blank.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t194.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t195.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ac360base.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t196.inf", 
		LAST);

	web_url("blank.jsp_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t197.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("capSearch.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t198.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("jquery-1.11.0.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t199.inf", 
		LAST);

	web_url("Ac360ToolManager.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t201.inf", 
		LAST);

	web_url("windowCloseOverride.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/lib/windowCloseOverride.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t204.inf", 
		LAST);

	web_url("widget.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t205.inf", 
		LAST);

	web_url("ac360InputBoxHotKey.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t206.inf", 
		LAST);

	web_url("popup.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t207.inf", 
		LAST);

	web_url("bootstrap.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/bootstrap/bootstrap.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t208.inf", 
		LAST);

	web_url("styles.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t209.inf", 
		LAST);

	web_url("re-skin-v2.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t210.inf", 
		LAST);

	web_url("opos.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/opos.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t211.inf", 
		LAST);

	web_url("masked.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t212.inf", 
		LAST);

	web_url("myTask.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/myTask.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t213.inf", 
		LAST);

	web_url("menubar.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t214.inf", 
		LAST);

	web_url("AAHELP.js", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t215.inf", 
		LAST);

	web_url("watermark.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t216.inf", 
		LAST);

	web_url("jquery.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ext-2.0.2/adapter/jquery/jquery.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t217.inf", 
		LAST);

	web_url("relatedCAPsPopupBox.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/relatedCAPsPopupBox.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t218.inf", 
		LAST);

	web_url("permitPlus.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/permitPlus.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t219.inf", 
		LAST);

	web_url("dojo.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/dojo.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t220.inf", 
		LAST);

	web_url("dojo412.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/datapicker/treePicker/js/dojo412.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t221.inf", 
		LAST);

	web_url("layoutPublic.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t222.inf", 
		LAST);

	web_url("Previous_Button_Grayed_Out.jpg", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/Previous_Button_Grayed_Out.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t223.inf", 
		LAST);

	web_url("Next_Button_Default.jpg", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/Next_Button_Default.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t224.inf", 
		LAST);

	web_url("print-styles.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/print-styles.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t226.inf", 
		LAST);

	web_url("blank.jsp_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t228.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("hashMap.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t200.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("ac360ui.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t202.inf", 
		LAST);

	web_url("ac360ScrollBar.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Snapshot=t203.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("popUp.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/popUp.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t225.inf", 
		LAST);

	web_url("pa.min.js_2", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t227.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("refresh.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/reskin/refresh.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v2.css", 
		"Snapshot=t229.inf", 
		LAST);

	web_url("Drop_Menu_Button_Default.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/reskin/Drop_Menu_Button_Default.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v2.css", 
		"Snapshot=t230.inf", 
		LAST);

	web_url("Tree.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/Tree.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t231.inf", 
		LAST);

	web_url("fx.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/fx.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t232.inf", 
		LAST);

	web_url("Toggler.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/fx/Toggler.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t233.inf", 
		LAST);

	web_url("DeferredList.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/DeferredList.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t234.inf", 
		LAST);

	web_url("_Widget.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Widget.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t235.inf", 
		LAST);

	web_url("_base.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t236.inf", 
		LAST);

	web_url("focus.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/focus.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t237.inf", 
		LAST);

	web_url("manager.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/manager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t238.inf", 
		LAST);

	web_url("place.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/place.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t239.inf", 
		LAST);

	web_url("AdapterRegistry.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/AdapterRegistry.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t240.inf", 
		LAST);

	web_url("popup.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/popup.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t241.inf", 
		LAST);

	web_url("window.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/window.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t242.inf", 
		LAST);

	web_url("scroll.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/scroll.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t243.inf", 
		LAST);

	web_url("sniff.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/sniff.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t244.inf", 
		LAST);

	web_url("typematic.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/typematic.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t245.inf", 
		LAST);

	web_url("wai.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/wai.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t246.inf", 
		LAST);

	web_url("_Templated.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Templated.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t247.inf", 
		LAST);

	web_url("string.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/string.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t248.inf", 
		LAST);

	web_url("parser.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/parser.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t249.inf", 
		LAST);

	web_url("stamp.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/date/stamp.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t250.inf", 
		LAST);

	web_url("cache.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/cache.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t251.inf", 
		LAST);

	web_url("_Container.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Container.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t252.inf", 
		LAST);

	web_url("_Contained.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Contained.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t253.inf", 
		LAST);

	web_url("cookie.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/cookie.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t254.inf", 
		LAST);

	web_url("regexp.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/regexp.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t255.inf", 
		LAST);

	web_url("TreeStoreModel.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/tree/TreeStoreModel.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t256.inf", 
		LAST);

	web_url("ForestStoreModel.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/tree/ForestStoreModel.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t257.inf", 
		LAST);

	web_url("QueryReadStore.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojox/data/QueryReadStore.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t258.inf", 
		LAST);

	web_url("sorter.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/data/util/sorter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t259.inf", 
		LAST);

	web_url("ArrayList.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojox/collections/ArrayList.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t260.inf", 
		LAST);

	web_url("_base.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojox/collections/_base.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t261.inf", 
		LAST);

	web_url("Map.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t262.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_submit_data("empty.jsp", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t263.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_concurrent_start(NULL);

	web_url("table-footer-left-bottom-200-12.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/table-footer-left-bottom-200-12.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t264.inf", 
		LAST);

	web_url("table-footer-right-bottom-400-12.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/table-footer-right-bottom-400-12.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t265.inf", 
		LAST);

	web_url("table-header-right-top-400-8.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/table-header-right-top-400-8.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t266.inf", 
		LAST);

	web_url("table-header-left-top-200-8.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/table-header-left-top-200-8.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t267.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("OSCEOLA_TC3_01_ClickRecords",LR_AUTO);

	lr_think_time(8);

	lr_start_transaction("OSCEOLA_TC3_02_Records_ClickNew");

	web_url("session.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t268.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("capTypePickerSelector.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t269.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_2", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t270.inf", 
		LAST);

	web_url("recordfilter.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/datapicker/treePicker/js/recordfilter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t271.inf", 
		LAST);

	web_url("handlebars.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/node_modules/handlebars/dist/handlebars.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t272.inf", 
		LAST);

	web_url("blank.jsp_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t274.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_3", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t273.inf", 
		LAST);

	web_submit_data("empty.jsp_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t275.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("accelicons.woff", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/fonts/accelicons.woff", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v2.css", 
		"Snapshot=t276.inf", 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_02_Records_ClickNew",LR_AUTO);

	lr_think_time(1237);

	lr_start_transaction("OSCEOLA_TC3_03_SelectRecordType_OpenSpearForm");

	web_url("session.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t281.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t282.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("capTypePicker.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=validateCapType&modelId=&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t283.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fpicker%2FcapTypePicker.do%3FfromModel%3Dcap%26module%3DBuilding%26isGeneralCAP%3DY&value(CurrentEntryURL)=%2Fportlets%2Fpicker%2FcapTypePicker.do%3FfromModel%3Dcap%26module%3DBuilding%26isGeneralCAP%3DY&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=119&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=119&sessionIdFromWindow=1nDdhdH%2BoUVpZvTRG7xI0gjY&listID=&printType=&checkBoxValue=&value(capTypeModel*type)=Permit&value(capTypeModel*subType)=Gas&value(capTypeModel*category)=NA&value(selectModuleName)=Building&value(g1AssetGroup)=&value(g1AssetType)=&value(mode)=add&value(createCapForParcelType)=ALL&value(srLevel)=&value(capGroupIndex)=&value(capTypeModel*group)=Building&value(capTypeModel)=Building%2FPermit%2FGas%2FNA&value(fromModel)=cap&value(modelId)=&value(formKey)=&value"
		"(GISCommand)=&", 
		LAST);

	web_submit_data("capTypePicker.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePickerSelector.do?fromModel=cap&module=Building&isGeneralCAP=Y", 
		"Snapshot=t284.inf", 
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
		"Name=sessionIdFromWindow", "Value=1nDdhdH+oUVpZvTRG7xI0gjY", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(capTypeModel*type)", "Value=Permit", ENDITEM, 
		"Name=value(capTypeModel*subType)", "Value=Gas", ENDITEM, 
		"Name=value(capTypeModel*category)", "Value=NA", ENDITEM, 
		"Name=value(selectModuleName)", "Value=Building", ENDITEM, 
		"Name=value(g1AssetGroup)", "Value=", ENDITEM, 
		"Name=value(g1AssetType)", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=add", ENDITEM, 
		"Name=value(createCapForParcelType)", "Value=ALL", ENDITEM, 
		"Name=value(srLevel)", "Value=", ENDITEM, 
		"Name=value(capGroupIndex)", "Value=", ENDITEM, 
		"Name=value(capTypeModel*group)", "Value=Building", ENDITEM, 
		"Name=value(capTypeModel)", "Value=Building/Permit/Gas/NA", ENDITEM, 
		"Name=value(fromModel)", "Value=cap", ENDITEM, 
		"Name=value(modelId)", "Value=", ENDITEM, 
		"Name=value(formKey)", "Value=", ENDITEM, 
		"Name=value(GISCommand)", "Value=", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("V360Button.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/widget/V360Button.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t285.inf", 
		LAST);

	web_url("AAHELP.js_3", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t286.inf", 
		LAST);

	web_url("spellchecker-caller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/spellchecker/spellchecker-caller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t287.inf", 
		LAST);

	web_url("education.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/education/education.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t288.inf", 
		LAST);

	web_url("genericMask.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/taglib/genericMask/javascript/genericMask.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t289.inf", 
		LAST);

	web_url("timepicker.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/timepicker.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t290.inf", 
		LAST);

	web_url("ajaxAnyWhere.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ajaxAnyWhere.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t291.inf", 
		LAST);

	web_url("externalValidate4Address.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/externalValidate4Address.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t292.inf", 
		LAST);

	web_url("selectDate.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/selectDate.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t293.inf", 
		LAST);

	web_url("blank.jsp_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t294.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t302.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t303.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t304.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("xhr.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/xhr.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t295.inf", 
		LAST);

	web_url("json.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/json.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t296.inf", 
		LAST);

	web_url("pa.min.js_4", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t297.inf", 
		LAST);

	web_url("AdapterRegistry.js_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/AdapterRegistry.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t298.inf", 
		LAST);

	web_url("lang.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/lang.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t299.inf", 
		LAST);

	web_url("Queue.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/collections/Queue.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t300.inf", 
		LAST);

	web_url("Collections.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/collections/Collections.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t301.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("calendar_medium.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/reskin/calendar_medium.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v2.css", 
		"Snapshot=t305.inf", 
		LAST);

	web_custom_request("countryStateAJAX.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(addressesModel*state)&aaZoneId=aazone-country-state&stateReadOnly=false&country=US&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.9744288451038301&aazones=aazone-country-state&width=58px", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t306.inf", 
		"Mode=HTTP", 
		"Body=aazone-country-state", 
		LAST);

	web_url("getAddressListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getAddressListBySingle.do?module=Building&mode=getAddressListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t307.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t308.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t309.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t310.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getParcelListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getParcelListBySingle.do?module=Building&mode=getParcelListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t311.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t312.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_14", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t313.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_15", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t314.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("countryStateAJAX.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(mailState)&aaZoneId=aazone-country-mailstate&stateReadOnly=false&country=US&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.864557022228837&aazones=aazone-country-mailstate&width=82px", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t315.inf", 
		"Mode=HTTP", 
		"Body=aazone-country-mailstate", 
		LAST);

	web_url("getOwnerListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getOwnerListBySingle.do?module=Building&mode=getOwnerListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t316.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_16", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t317.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_17", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t318.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("countryStateAJAX.jsp_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(professionalModel*state)&aaZoneId=professional-aazone-country-state&stateReadOnly=false&country=US&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.15235200710594654&aazones=professional-aazone-country-state&width=94px", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t319.inf", 
		"Mode=HTTP", 
		"Body=professional-aazone-country-state", 
		LAST);

	web_url("blank.jsp_18", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t320.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("style.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/CSS/sky_blue/style.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t321.inf", 
		LAST);

	web_url("appSpecInfoTableFilter.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/CSS/sky_blue/appSpecInfoTableFilter.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t322.inf", 
		LAST);

	web_url("ext-base.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ext-2.0.2/adapter/ext/ext-base.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t323.inf", 
		LAST);

	web_url("jquery.watermark.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/jquery.watermark.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t324.inf", 
		LAST);

	web_url("validate.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/validate.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t325.inf", 
		LAST);

	web_url("templateHelper.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/templateHelper.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t326.inf", 
		LAST);

	web_url("ext-core.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ext-2.0.2/ext-core.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t327.inf", 
		LAST);

	web_url("template.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/template.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t328.inf", 
		LAST);

	web_url("table.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/table.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t329.inf", 
		LAST);

	web_url("form.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/form.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t330.inf", 
		LAST);

	web_url("template_express.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/template_express.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t331.inf", 
		LAST);

	web_url("field.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/field.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t332.inf", 
		LAST);

	web_url("formlayout.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/formlayout.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t333.inf", 
		LAST);

	web_url("Date.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ext-2.0.2/source/util/Date.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t334.inf", 
		LAST);

	web_url("appSpecInfoForm.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/appSpecInfoForm.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t335.inf", 
		LAST);

	web_url("textMessageResources.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/textMessageResources.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t336.inf", 
		LAST);

	web_url("expression.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expression.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t337.inf", 
		LAST);

	web_url("expressionPageProcessor.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionPageProcessor.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t338.inf", 
		LAST);

	web_url("expressionASI.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionASI.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t339.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("expressionConstants.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionConstants.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t340.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("expressionASIT.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionASIT.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t341.inf", 
		LAST);

	web_url("expressionGForm.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionGForm.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t342.inf", 
		LAST);

	web_url("expressionGTable.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionGTable.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t343.inf", 
		LAST);

	web_url("expressionWorkflow.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionWorkflow.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t344.inf", 
		LAST);

	web_url("expressionLP.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionLP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t345.inf", 
		LAST);

	web_url("expressionContact.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionContact.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t346.inf", 
		LAST);

	web_url("expressionAddress.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAddress.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t347.inf", 
		LAST);

	web_url("expressionAssetAttrTable.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAssetAttrTable.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t348.inf", 
		LAST);

	web_url("expressionAsset.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAsset.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t349.inf", 
		LAST);

	web_url("expressionAssetAttrTemplate.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAssetAttrTemplate.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t350.inf", 
		LAST);

	web_url("expressionContactAddress.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionContactAddress.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t351.inf", 
		LAST);

	web_url("expressionAssetCA.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAssetCA.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t352.inf", 
		LAST);

	web_url("expressionAssetCATemplate.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAssetCATemplate.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t353.inf", 
		LAST);

	web_url("expressionCondition.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionCondition.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t354.inf", 
		LAST);

	web_url("expressionTemplateForm.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionTemplateForm.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t355.inf", 
		LAST);

	web_url("expressionTemplateTable.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionTemplateTable.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t356.inf", 
		LAST);

	web_url("expressionParcel.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionParcel.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t357.inf", 
		LAST);

	web_url("expressionParcelTemplate.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionParcelTemplate.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t358.inf", 
		LAST);

	web_url("expressionAddressTemplate.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAddressTemplate.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t359.inf", 
		LAST);

	web_url("expressionRecord.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionRecord.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t360.inf", 
		LAST);

	web_url("expressionPay.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionPay.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t361.inf", 
		LAST);

	web_url("documentEntity.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/document/documentEntity.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t362.inf", 
		LAST);

	web_url("docOnSpear.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/document/docOnSpear.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t363.inf", 
		LAST);

	web_url("documentEntityList.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/document/documentEntityList.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t364.inf", 
		LAST);

	web_url("docVirtualFolder.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/document/docVirtualFolder.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t365.inf", 
		LAST);

	web_url("documentUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/document/documentUtil.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t366.inf", 
		LAST);

	web_url("docUploadingUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/document/docUploadingUtil.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t367.inf", 
		LAST);

	web_url("docSelectUIUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/document/docSelectUIUtil.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t368.inf", 
		LAST);

	web_url("docGViewUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/document/docGViewUtil.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t369.inf", 
		LAST);

	web_url("validateEmail.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/widget/validator/validateEmail.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t370.inf", 
		LAST);

	web_url("uploadWaiting.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/uploadWaiting.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t371.inf", 
		LAST);

	web_url("save_button.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/save_button.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t372.inf", 
		LAST);

	web_url("reset_button.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/reset_button.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t373.inf", 
		LAST);

	web_url("cancel_button.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/cancel_button.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t374.inf", 
		LAST);

	web_url("help_button.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/help_button.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t375.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_submit_data("ajax.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t376.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("getProfessionalListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getProfessionalListBySingle.do?module=Building&mode=getProfessionalListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t377.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_19", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t378.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("countryStateAJAX.jsp_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(applicant*state)&aaZoneId=aazone-country-state-applicant&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.01841221610084176&aazones=aazone-country-state-applicant&width=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t379.inf", 
		"Mode=HTTP", 
		"Body=aazone-country-state-applicant", 
		LAST);

	web_custom_request("countryStateAJAX.jsp_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(applicant*driverLicenseState)&aaZoneId=aazone-applicant-driver-license-state&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.3040549417492002&aazones=aazone-applicant-driver-license-state&width=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t380.inf", 
		"Mode=HTTP", 
		"Body=aazone-applicant-driver-license-state", 
		LAST);

	web_custom_request("countryStateAJAX.jsp_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(applicant*birthState)&aaZoneId=aazone-applicant-birth-state-contact&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.8492126625496894&aazones=aazone-applicant-birth-state-contact&width=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t381.inf", 
		"Mode=HTTP", 
		"Body=aazone-applicant-birth-state-contact", 
		LAST);

	web_url("blank.jsp_20", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t382.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("countryStateAJAX.jsp_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(contactsModel*state)&aaZoneId=aazone-country-state-contact&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.7474552963394672&aazones=aazone-country-state-contact&width=46px", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t383.inf", 
		"Mode=HTTP", 
		"Body=aazone-country-state-contact", 
		LAST);

	web_custom_request("countryStateAJAX.jsp_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(contactsModel*driverLicenseState)&aaZoneId=aazone-country-driverLicenseState&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.4232024336233735&aazones=aazone-country-driverLicenseState&width=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t384.inf", 
		"Mode=HTTP", 
		"Body=aazone-country-driverLicenseState", 
		LAST);

	web_url("SortedList.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/collections/SortedList.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t385.inf", 
		LAST);

	web_custom_request("countryStateAJAX.jsp_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?statevalue=&stateProperty=value(contactsModel*birthState)&aaZoneId=aazone-birth-state-contact&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.10914340731687844&aazones=aazone-birth-state-contact&width=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t386.inf", 
		"Mode=HTTP", 
		"Body=aazone-birth-state-contact", 
		LAST);

	web_url("Dictionary.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/collections/Dictionary.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t387.inf", 
		LAST);

	web_url("blank.jsp_21", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t388.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_22", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t389.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getGISListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?module=Building&mode=getGISListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t390.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_23", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t391.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ArrayList.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/collections/ArrayList.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t392.inf", 
		LAST);

	web_url("blank.jsp_24", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t393.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("validate.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/validate.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t394.inf", 
		LAST);

	web_url("common.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/validate/common.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t395.inf", 
		LAST);

	web_url("regexp.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/regexp.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t396.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("documentForm.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/document/documentForm.do?value(mode)=search&group=GEN_DOC", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t397.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("empty.jsp_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t398.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("AAHELP.js_4", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getAddressListBySingle.do?module=Building&mode=getAddressListBySingle", 
		"Snapshot=t399.inf", 
		LAST);

	web_url("commonConditionUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/condition/commonConditionUtil.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getAddressListBySingle.do?module=Building&mode=getAddressListBySingle", 
		"Snapshot=t400.inf", 
		LAST);

	web_url("getGISListBySingle.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?mode=getGISListBySingle&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t401.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("pa.min.js_5", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getAddressListBySingle.do?module=Building&mode=getAddressListBySingle", 
		"Snapshot=t402.inf", 
		LAST);

	web_url("getGISListBySingle.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?mode=getGISListBySingle&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t403.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("genericTemplate.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/generictemplate/genericTemplate.do?mode=getTemplateByDocumentType&uiUID=29&module=Building&docType=&docGroup=GEN_DOC", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t404.inf", 
		"Mode=HTTP", 
		"Body=&docTemplateUIUID=29&valuetextarea29=&sourcetextarea29=&docGroup=GEN_DOC&docType=&docCategory=&documentSeq=&isFromDocDetail=N", 
		LAST);

	web_submit_data("empty.jsp_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t405.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("empty.jsp_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t406.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("empty.jsp_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t407.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("AAHELP.js_5", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getProfessionalListBySingle.do?module=Building&mode=getProfessionalListBySingle", 
		"Snapshot=t408.inf", 
		LAST);

	web_url("pa.min.js_6", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getProfessionalListBySingle.do?module=Building&mode=getProfessionalListBySingle", 
		"Snapshot=t409.inf", 
		LAST);

	web_submit_data("empty.jsp_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t410.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("AAHELP.js_6", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?mode=getGISListBySingle&module=Building", 
		"Snapshot=t411.inf", 
		LAST);

	web_url("pa.min.js_7", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?mode=getGISListBySingle&module=Building", 
		"Snapshot=t412.inf", 
		LAST);

	web_submit_data("empty.jsp_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t413.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("appSpecInfoForm.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=buildDrillList&module=Building&guideSheetSeq=&singleMode=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t414.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_concurrent_start(NULL);

	web_url("console.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/debug/console.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t415.inf", 
		LAST);

	web_url("ConsoleLogger.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/logging/ConsoleLogger.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t416.inf", 
		LAST);

	web_url("Logger.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/logging/Logger.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t417.inf", 
		LAST);

	web_url("us.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/validate/us.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t418.inf", 
		LAST);

	web_url("datetime.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/validate/datetime.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t419.inf", 
		LAST);

	web_url("format.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/date/format.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t420.inf", 
		LAST);

	web_url("common.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/date/common.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t421.inf", 
		LAST);

	web_url("supplemental.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/date/supplemental.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t422.inf", 
		LAST);

	web_url("common.js_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/common.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t423.inf", 
		LAST);

	web_url("gregorian.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/calendar/nls/gregorian.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t424.inf", 
		LAST);

	web_url("gregorian.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/calendar/nls/en/gregorian.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t425.inf", 
		LAST);

	web_url("gregorian.js_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/calendar/nls/en-us/gregorian.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t426.inf", 
		LAST);

	web_url("gregorianExtras.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/calendar/nls/gregorianExtras.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t427.inf", 
		LAST);

	web_url("gregorianExtras.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/calendar/nls/en-us/gregorianExtras.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t428.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("search.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t429.inf", 
		"Mode=HTTP", 
		"Body=categoryName=Portlet - Expression", 
		LAST);

	web_submit_data("regionalSyncMask.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t430.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t431.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t432.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t433.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t434.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t435.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t436.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t437.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=US", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t438.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_10", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t439.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_11", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t440.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_12", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t441.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_13", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t442.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_14", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t443.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_15", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=postalCode&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t444.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("expression.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t445.inf", 
		"Mode=HTTP", 
		"Body=argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A121%2C%22viewKey1%22%3A%22Applicant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A125%2C%22viewKey1%22%3A%22Owner%20Builder%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&isReload=false&module=Building&capType=Building%2FPermit%2FGas%2FNA", 
		LAST);

	web_custom_request("expression.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t446.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Building&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&value(srTest)=&value(capType)=Building%2FPermit%2FGas%2FNA&value(capID)=&value"
		"(capDetailModel*shortNotes)=&value(capType)=Building%2FPermit%2FGas%2FNA&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value"
		"(capModel*capStatus)=&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)="
		"&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F29%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value"
		"(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value"
		"(capModel*pendingValidation)=&date(capModel*fileDate)=08%2F29%2F2018&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow="
		"hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&validateFlagOriginalValue=&value(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value"
		"(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitEnd)=&value(addressesModel*sourceFlag)=&value(addressesModel*addressTypeFlag)=&value(addressesModel*validateFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value"
		"(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*neighborhood)=&value(addressesModel*county)=&value(addressesModel*XCoordinator)=&value(addressesModel*YCoordinator)=&value(addressesModel*addressStatus)=&value(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine1)=&value(addressesModel*addressLine2)=&value"
		"(templateData)=&value(addressesModel*houseNumberStart)=&value(addressesModel*streetName)=&value(addressesModel*streetSuffix)=&value(addressesModel*streetDirection)=&value(addressesModel*unitType)=&value(addressesModel*unitStart)=&value(addressesModel*city)=&value(addressesModel*state)=&value(addressesModel*zip_disp)=&value(addressesModel*zip)=&value(addressesModel*countryCode)=US&value(addressesModel*primaryFlag)=Y&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)=&"
		"value(l1addressnbr)=&value(l1addressnbr1)=&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=&isAddress=1&isAddressValidation=Y&isAddressRequired=Y&isShowParcel=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&"
		"sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(unmaskedParcelNumber)=&value(parcelNo)=&value(book)=&value(page)=&value(parcel)=&value(parcelArea)=&value(landValue)=&value(improvedValue)=&value(exemptValue)=&value(tract)=&value(block)=&value(mapNo)=&value(censusTract)="
		"&value(supervisorDistrict)=&value(councilDistrict)=&value(inspectionDistrict)=&value(planArea)=&value(mapRef)=&value(gisSeqNo)=&value(lot)=&value(templateData)=&value(township)=&value(range)=&value(section)=&value(unmaskedParcelNumber)=&value(legalDesc)=&value(unmaskedParcelNumber)=&value(primaryParcelFlagWithoutDealing)=&value(mode)=New&value(parcelModel*UID)=&value(l1ParcelNo)=&value(parcelNoBySearch1)=&value(parcelSearchType)=local&isParcel=1&parcelViewID=20021&value(parcelUID)=&value"
		"(parcelUID1)=&isParcelValidation=Y&isParcelRequired=Y&value(parcelExternalMode*parcelNo)=&value(parcelExternalMode*parcelArea)=&value(parcelExternalMode*book)=&value(parcelExternalMode*page)=&value(parcelExternalMode*lot)=&value(parcelExternalMode*legalDesc)=&value(parcelExternalMode*landValue)=&value(parcelExternalMode*improvedValue)=&value(parcelExternalMode*exemptValue)=&value(parcelExternalMode*tract)=&value(parcelExternalMode*block)=&isShowOwner=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&"
		"CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI"
		"&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(templateData)=&value(fax)=&value(primaryOwner)=Y&value(mailAddress1)=&value(phoneCountryCode)=001&value(phone_disp)=&value(phone)=&value(mailAddress2)=&value(mailAddress3)=&value(mailCity)=&value(mailState)=&value(mailZip_disp)=&value(mailZip)=&value(mailCountry)=US&value(email)=&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value(ownerLname)=&value(ownerMname)=&value(UID)=&value"
		"(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=N&isOwnerRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&"
		"listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&isPartialCap=null&value(professionalModel*licensetype)=&value(professionalModel*businessLicense)=&value(professionalModel*salutation)=&value(professionalModel*gender)=&value(professionalModel*postOfficeBox)=&value(professionalModel*busName2)=&value"
		"(professionalModel*licenseBoard)=&date(professionalModel*birthDate)=&value(professionalModel*typeFlag)=&value(maskformat_professionalModel*maskedSsn)=AAA-AA-AAAA&value(professionalModel*maskedSsn)=&value(maskformat_professionalModel*fein)=&value(professionalModel*fein)=&value(professionalModel*title)=&value(professionalModel*comment)=&date(professionalModel*lastUpdateDate)=&value(professionalModel*suffixName)=&value(professionalModel*licensenbr)=&value(professionalModel*printFlag)=Y&value"
		"(professionalModel*contactfirstname)=&value(professionalModel*contactmiddlename)=&value(professionalModel*contactlastname)=&value(professionalModel*phone1CountryCode)=001&value(professionalModel*phone1_disp)=&value(professionalModel*phone1)=&value(professionalModel*businessname)=&value(professionalModel*phone2CountryCode)=001&value(professionalModel*phone2_disp)=&value(professionalModel*phone2)=&value(professionalModel*address1)=&value(professionalModel*phone3CountryCode)=001&value"
		"(professionalModel*phone3_disp)=&value(professionalModel*phone3)=&value(professionalModel*address2)=&value(professionalModel*faxCountryCode)=001&value(professionalModel*fax_disp)=&value(professionalModel*fax)=&value(professionalModel*address3)=&value(professionalModel*city)=&value(professionalModel*state)=&value(professionalModel*zip_disp)=&value(professionalModel*zip)=&value(professionalModel*countryCode)=US&value(professionalModel*email)=&value(templateGroup)=CAP_PROFESSIONAL&value(mode)=New&"
		"value(modePro)=add&valuetextarea28=&sourcetextarea28=&layouttextarea28=&professionalModel*uiuid=28&value(professionalSearchType)=&value(licSeqNbr)=&isProfessional=1&professionalViewID=122&isProfessionalValidation=N&isProfessionalRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&"
		"value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*relation)=&value(applicant*title)=&value(applicant*addressId)=&value(applicant*addressLine1)=&value(applicant*addressLine2)=&value(applicant*addressLine3)=&value(applicant*city)=&value(applicant*state)=&value(applicant*zip)=&value(applicant*countryCode)=&value(applicant*phone1)=&value(applicant*confirmEmail)=&value(applicant*fax)=&value"
		"(applicant*contactOnSRChange)=&value(applicant*comment)=&value(maskformat_applicant*maskedSsn)=AAA-AA-AAAA&value(applicant*maskedSsn)=&value(maskformat_applicant*fein)=&value(applicant*fein)=&value(applicant*tradeName)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(templateData)=&value(applicant*salutation)=&value(applicant*gender)=&value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value(applicant*businessName2)=&value(applicant*birthCity)="
		"&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*flag)=N&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone2CountryCode)=&ACMask_121_10_value(applicant*phone2_disp)=&ACMask_121_10_value(applicant*phone2)=&value(applicant*fullName)=&"
		"value(applicant*phone3CountryCode)=&ACMask_121_24_value(applicant*phone3_disp)=&ACMask_121_24_value(applicant*phone3)=&value(applicant*businessName)=&value(applicant*preferredChannel)=&value(applicant*email)=&displasy*applicant*email=Y&valuetextarea27=&sourcetextarea27=%7B%22UIUID%22%3A27%7D&layouttextarea27=null&applicant*uiuid=27&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=Y&applicantAccessRight=F&applicantContactNumber=null&generalCAPSearch=&isGeneralCAP=Y&"
		"objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(contact*refContactNumber)=&value(contactsModel*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel*accessLevel)=N&value(contactsModel*contactType)=Owner%20Builder&value(contactsModel*relation)=&value(contactsModel*title)=&value(contactsModel*addressId)=&value"
		"(contactsModel*countryCode)=&value(contactsModel*fax)=&value(contactsModel*contactOnSRChange)=&value(contactsModel*comment)=&value(maskformat_contactsModel*maskedSsn)=AAA-AA-AAAA&value(contactsModel*maskedSsn)=&value(maskformat_contactsModel*fein)=&value(contactsModel*fein)=&value(contactsModel*tradeName)=&value(contactsModel*userID)=&value(contactsModel*internalUserFlag)=&value(templateData)=&value(contactsModel*salutation)=&value(contactsModel*gender)=&value(contactsModel*postOfficeBox)=&date"
		"(contactsModel*birthDate)=&value(contactsModel*namesuffix)=&value(contactsModel*businessName2)=&value(contactsModel*birthCity)=&value(contactsModel*birthState)=&value(contactsModel*birthRegion)=&value(contactsModel*race)=&date(contactsModel*deceasedDate)=&value(contactsModel*passportNumber)=&value(contactsModel*driverLicenseNbr)=&value(contactsModel*driverLicenseState)=&value(contactsModel*stateIDNbr)=&value(contactsModel*flag)=N&value(contactsModel*firstName)=&value(contactsModel*middleName)=&"
		"value(contactsModel*lastName)=&value(contactsModel*phone1CountryCode)=&value(contactsModel*phone1_disp)=&value(contactsModel*phone1)=&value(contactsModel*fullName)=&value(contactsModel*phone3CountryCode)=&ACMask_118_23_value(contactsModel*phone3_disp)=&ACMask_118_23_value(contactsModel*phone3)=&value(contactsModel*businessName)=&value(contactsModel*phone2CountryCode)=&ACMask_118_10_value(contactsModel*phone2_disp)=&ACMask_118_10_value(contactsModel*phone2)=&value(contactsModel*addressLine1)=&value"
		"(contactsModel*addressLine2)=&value(contactsModel*addressLine3)=&value(contactsModel*city)=&value(contactsModel*state)=&value(contactsModel*zip_disp)=&value(contactsModel*zip)=&value(contactsModel*email)=&value(contactsModel*preferredChannel)=&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea26=&sourcetextarea26=%7B%22UIUID%22%3A26%7D&layouttextarea26=null&contactsModel*uiuid=26&isContact=1&contact1ViewID=118&isContact1Validation=N&"
		"isContact1Required=N&contact1AccessRight=F&contact1ContactNumber=null&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=Building%2BGas_View_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS&app_spec_info_TYPE_OF_PERMIT_Permit_for%253A=&app_spec_info_RECORD_INFORMATION_Title=&app_spec_info_RECORD_INFORMATION_Plan_submitted_digitally_Value=Y&app_spec_info_RECORD_INFORMATION_Issued=&"
		"app_spec_info_RECORD_INFORMATION_Approved=&app_spec_info_RECORD_INFORMATION_Expires=&app_spec_info_RECORD_INFORMATION_Inspect_By=&app_spec_info_RECORD_INFORMATION_Final_Date=&app_spec_info_RECORD_INFORMATION_Building_Number=&app_spec_info_RECORD_INFORMATION_Use_of_Building=&app_spec_info_RECORD_INFORMATION_Failure_to_obtain_Permit_Value=Y&app_spec_info_RECORD_INFORMATION_Waive_Building_Fees_Value=Y&app_spec_info_RECORD_INFORMATION_Construction_Value=&"
		"app_spec_info_RECORD_INFORMATION_Number_of_Buildings=&app_spec_info_INTERFACE_CALLS_Interface_Call_Do_Not_Display=&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&"
		"checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&isGisFeatureRequired=N&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName="
		"&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel="
		"Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError="
		"No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL="
		"%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DBuilding%252FPermit%252FGas%252FNA%26module%3DBuilding&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea29=&sourcetextarea29=&layouttextarea29=&docTemplateUIUID=29&value(docGroup)=GEN_DOC&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)="
		"NONE&documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&"
		"hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&"
		"hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&"
		"hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20021%2C20026%2C122%2C121%2C118&viewGroup=%2C225%2C117%2C20021%2C121&formGroup=%2CcapDetailForm%2CaddressForm%2CparcelForm%2CownerForm%2CrefProfessionalDetailActionForm%2CapplicantDetailForm%2CcontactDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode="
		"newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=ALL&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(professionalModel*maskedSsn)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(contactsModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value"
		"(professionalModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&value(refContactNumber)=&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber=undefined&argumentPKs="
		"%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A121%2C%22viewKey1%22%3A%22Applicant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A125%2C%22viewKey1%22%3A%22Owner%20Builder%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute", 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_03_SelectRecordType_OpenSpearForm",LR_AUTO);

	lr_think_time(19);

	lr_start_transaction("OSCEOLA_TC3_04_Address_Clear");

	web_url("session.do_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t447.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("refAddressListBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingle.do?mode=clearAddress&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t448.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&value(mode)=add&value(srTest)=&value(capType)="
		"Building%2FPermit%2FGas%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capType)=Building%2FPermit%2FGas%2FNA&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&"
		"value(capDetailModel*closedBy)=&value(capModel*capStatus)=&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value"
		"(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F29%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value"
		"(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value"
		"(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&date(capModel*fileDate)=08%2F29%2F2018&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType"
		"=print&CurrentViewID=225&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&validateFlagOriginalValue=&value(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value"
		"(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitEnd)=&value(addressesModel*sourceFlag)=&value(addressesModel*addressTypeFlag)=&value(addressesModel*validateFlag)=&value(addressesModel*distance)=&value"
		"(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*neighborhood)=&value(addressesModel*county)=&value(addressesModel*XCoordinator)=&value(addressesModel*YCoordinator)=&value(addressesModel*addressStatus)=&value(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine1)=&value"
		"(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*houseNumberStart)=&value(addressesModel*streetName)=&value(addressesModel*streetSuffix)=&value(addressesModel*streetDirection)=&value(addressesModel*unitType)=&value(addressesModel*unitStart)=&value(addressesModel*city)=&value(addressesModel*state)=&value(addressesModel*zip_disp)=&value(addressesModel*zip)=&value(addressesModel*countryCode)=US&value(addressesModel*primaryFlag)=Y&value(mode)=New&value(addressesmodel*UID)=&"
		"value(addressesModel*refAddressId)=&value(l1addressnbr)=&value(l1addressnbr1)=&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=&isAddress=1&isAddressValidation=Y&isAddressRequired=Y&isShowParcel=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&"
		"ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(unmaskedParcelNumber)=&value(parcelNo)=&value(book)=&value(page)=&value(parcel)=&value(parcelArea)=&value(landValue)=&value(improvedValue)=&value(exemptValue)=&value(tract)=&value"
		"(block)=&value(mapNo)=&value(censusTract)=&value(supervisorDistrict)=&value(councilDistrict)=&value(inspectionDistrict)=&value(planArea)=&value(mapRef)=&value(gisSeqNo)=&value(lot)=&value(templateData)=&value(township)=&value(range)=&value(section)=&value(unmaskedParcelNumber)=&value(legalDesc)=&value(unmaskedParcelNumber)=&value(primaryParcelFlagWithoutDealing)=&value(mode)=New&value(parcelModel*UID)=&value(l1ParcelNo)=&value(parcelNoBySearch1)=&value(parcelSearchType)=local&isParcel=1&"
		"parcelViewID=20021&value(parcelUID)=&value(parcelUID1)=&isParcelValidation=Y&isParcelRequired=Y&value(parcelExternalMode*parcelNo)=&value(parcelExternalMode*parcelArea)=&value(parcelExternalMode*book)=&value(parcelExternalMode*page)=&value(parcelExternalMode*lot)=&value(parcelExternalMode*legalDesc)=&value(parcelExternalMode*landValue)=&value(parcelExternalMode*improvedValue)=&value(parcelExternalMode*exemptValue)=&value(parcelExternalMode*tract)=&value(parcelExternalMode*block)=&isShowOwner=Y&"
		"generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&"
		"sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(templateData)=&value(fax)=&value(primaryOwner)=Y&value(mailAddress1)=&value(phoneCountryCode)=001&value(phone_disp)=&value(phone)=&value(mailAddress2)=&value(mailAddress3)=&value(mailCity)=&value(mailState)=&value(mailZip_disp)=&value(mailZip)=&value(mailCountry)=US&value(email)=&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value"
		"(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=N&isOwnerRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&"
		"sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&isPartialCap=null&value(professionalModel*licensetype)=&value(professionalModel*businessLicense)=&value(professionalModel*salutation)=&value(professionalModel*gender)=&value(professionalModel*postOfficeBox)=&value"
		"(professionalModel*busName2)=&value(professionalModel*licenseBoard)=&date(professionalModel*birthDate)=&value(professionalModel*typeFlag)=&value(maskformat_professionalModel*maskedSsn)=AAA-AA-AAAA&value(professionalModel*maskedSsn)=&value(maskformat_professionalModel*fein)=&value(professionalModel*fein)=&value(professionalModel*title)=&value(professionalModel*comment)=&date(professionalModel*lastUpdateDate)=&value(professionalModel*suffixName)=&value(professionalModel*licensenbr)=&value"
		"(professionalModel*printFlag)=Y&value(professionalModel*contactfirstname)=&value(professionalModel*contactmiddlename)=&value(professionalModel*contactlastname)=&value(professionalModel*phone1CountryCode)=001&value(professionalModel*phone1_disp)=&value(professionalModel*phone1)=&value(professionalModel*businessname)=&value(professionalModel*phone2CountryCode)=001&value(professionalModel*phone2_disp)=&value(professionalModel*phone2)=&value(professionalModel*address1)=&value"
		"(professionalModel*phone3CountryCode)=001&value(professionalModel*phone3_disp)=&value(professionalModel*phone3)=&value(professionalModel*address2)=&value(professionalModel*faxCountryCode)=001&value(professionalModel*fax_disp)=&value(professionalModel*fax)=&value(professionalModel*address3)=&value(professionalModel*city)=&value(professionalModel*state)=&value(professionalModel*zip_disp)=&value(professionalModel*zip)=&value(professionalModel*countryCode)=US&value(professionalModel*email)=&value"
		"(templateGroup)=CAP_PROFESSIONAL&value(mode)=New&value(modePro)=add&valuetextarea28=&sourcetextarea28=&layouttextarea28=&professionalModel*uiuid=28&value(professionalSearchType)=&value(licSeqNbr)=&isProfessional=1&professionalViewID=122&isProfessionalValidation=N&isProfessionalRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(mode)=newsave&"
		"value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*relation)=&value(applicant*title)=&value(applicant*addressId)=&value(applicant*addressLine1)=&value(applicant*addressLine2)=&value(applicant*addressLine3)=&value(applicant*city)=&value(applicant*state)=&value(applicant*zip)=&value(applicant*countryCode)=&value(applicant*phone1)=&value"
		"(applicant*confirmEmail)=&value(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(maskformat_applicant*maskedSsn)=AAA-AA-AAAA&value(applicant*maskedSsn)=&value(maskformat_applicant*fein)=&value(applicant*fein)=&value(applicant*tradeName)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(templateData)=&value(applicant*salutation)=&value(applicant*gender)=&value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value"
		"(applicant*businessName2)=&value(applicant*birthCity)=&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*flag)=N&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone2CountryCode)=&ACMask_121_10_value(applicant*phone2_disp)=&"
		"ACMask_121_10_value(applicant*phone2)=&value(applicant*fullName)=&value(applicant*phone3CountryCode)=&ACMask_121_24_value(applicant*phone3_disp)=&ACMask_121_24_value(applicant*phone3)=&value(applicant*businessName)=&value(applicant*preferredChannel)=&value(applicant*email)=&displasy*applicant*email=Y&valuetextarea27=&sourcetextarea27=%7B%22UIUID%22%3A27%7D&layouttextarea27=null&applicant*uiuid=27&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=Y&applicantAccessRight=F"
		"&applicantContactNumber=null&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(contact*refContactNumber)=&value(contactsModel*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel*accessLevel)=N&value(contactsModel*contactType)=Owner%20Builder&value(contactsModel*relation)=&value"
		"(contactsModel*title)=&value(contactsModel*addressId)=&value(contactsModel*countryCode)=&value(contactsModel*fax)=&value(contactsModel*contactOnSRChange)=&value(contactsModel*comment)=&value(maskformat_contactsModel*maskedSsn)=AAA-AA-AAAA&value(contactsModel*maskedSsn)=&value(maskformat_contactsModel*fein)=&value(contactsModel*fein)=&value(contactsModel*tradeName)=&value(contactsModel*userID)=&value(contactsModel*internalUserFlag)=&value(templateData)=&value(contactsModel*salutation)=&value"
		"(contactsModel*gender)=&value(contactsModel*postOfficeBox)=&date(contactsModel*birthDate)=&value(contactsModel*namesuffix)=&value(contactsModel*businessName2)=&value(contactsModel*birthCity)=&value(contactsModel*birthState)=&value(contactsModel*birthRegion)=&value(contactsModel*race)=&date(contactsModel*deceasedDate)=&value(contactsModel*passportNumber)=&value(contactsModel*driverLicenseNbr)=&value(contactsModel*driverLicenseState)=&value(contactsModel*stateIDNbr)=&value(contactsModel*flag)=N&"
		"value(contactsModel*firstName)=&value(contactsModel*middleName)=&value(contactsModel*lastName)=&value(contactsModel*phone1CountryCode)=&value(contactsModel*phone1_disp)=&value(contactsModel*phone1)=&value(contactsModel*fullName)=&value(contactsModel*phone3CountryCode)=&ACMask_118_23_value(contactsModel*phone3_disp)=&ACMask_118_23_value(contactsModel*phone3)=&value(contactsModel*businessName)=&value(contactsModel*phone2CountryCode)=&ACMask_118_10_value(contactsModel*phone2_disp)=&"
		"ACMask_118_10_value(contactsModel*phone2)=&value(contactsModel*addressLine1)=&value(contactsModel*addressLine2)=&value(contactsModel*addressLine3)=&value(contactsModel*city)=&value(contactsModel*state)=&value(contactsModel*zip_disp)=&value(contactsModel*zip)=&value(contactsModel*email)=&value(contactsModel*preferredChannel)=&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea26=&sourcetextarea26=%7B%22UIUID%22%3A26%7D&layouttextarea26="
		"null&contactsModel*uiuid=26&isContact=1&contact1ViewID=118&isContact1Validation=N&isContact1Required=N&contact1AccessRight=F&contact1ContactNumber=null&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=Building%2BGas_View_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS&app_spec_info_TYPE_OF_PERMIT_Permit_for%253A=&app_spec_info_RECORD_INFORMATION_Title=&"
		"app_spec_info_RECORD_INFORMATION_Plan_submitted_digitally_Value=Y&app_spec_info_RECORD_INFORMATION_Issued=&app_spec_info_RECORD_INFORMATION_Approved=&app_spec_info_RECORD_INFORMATION_Expires=&app_spec_info_RECORD_INFORMATION_Inspect_By=&app_spec_info_RECORD_INFORMATION_Final_Date=&app_spec_info_RECORD_INFORMATION_Building_Number=&app_spec_info_RECORD_INFORMATION_Use_of_Building=&app_spec_info_RECORD_INFORMATION_Failure_to_obtain_Permit_Value=Y&"
		"app_spec_info_RECORD_INFORMATION_Waive_Building_Fees_Value=Y&app_spec_info_RECORD_INFORMATION_Construction_Value=&app_spec_info_RECORD_INFORMATION_Number_of_Buildings=&app_spec_info_INTERFACE_CALLS_Interface_Call_Do_Not_Display=&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&"
		"MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&isGisFeatureRequired=N&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow="
		"hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&mode=upload&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)"
		"%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError="
		"No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL="
		"%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DBuilding%252FPermit%252FGas%252FNA%26module%3DBuilding&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea29=&sourcetextarea29=&layouttextarea29=&docTemplateUIUID=29&value(docGroup)=GEN_DOC&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)="
		"NONE&documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&"
		"hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&"
		"hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&"
		"hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20021%2C20026%2C122%2C121%2C118&viewGroup=%2C225%2C117%2C20021%2C121&formGroup=%2CcapDetailForm%2CaddressForm%2CparcelForm%2CownerForm%2CrefProfessionalDetailActionForm%2CapplicantDetailForm%2CcontactDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode="
		"newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=ALL&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(professionalModel*maskedSsn)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(contactsModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value"
		"(professionalModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&", 
		LAST);

	web_custom_request("countryStateAJAX.jsp_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?stateProperty=value(addressesModel*state)&aaZoneId=aazone-country-state&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.2662005538586527&aazones=aazone-country-state", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t449.inf", 
		"Mode=HTTP", 
		"Body=aazone-country-state", 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_04_Address_Clear",LR_AUTO);

	lr_think_time(9);

	lr_start_transaction("OSCEOLA_TC3_05_Address_Search");

	web_url("session.do_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t450.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(4);

	web_url("session.do_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t451.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("refAddressListBySingle.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingle.do?mode=directSearch&from=SPEAR&listBySingle=true&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t452.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&value(mode)=add&value(srTest)=&value(capType)="
		"Building%2FPermit%2FGas%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capType)=Building%2FPermit%2FGas%2FNA&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&"
		"value(capDetailModel*closedBy)=&value(capModel*capStatus)=&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value"
		"(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F29%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value"
		"(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value"
		"(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&date(capModel*fileDate)=08%2F29%2F2018&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType"
		"=print&CurrentViewID=225&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&validateFlagOriginalValue=&value(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value"
		"(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitEnd)=&value(addressesModel*sourceFlag)=&value(addressesModel*addressTypeFlag)=&value(addressesModel*validateFlag)=&value(addressesModel*distance)=&value"
		"(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*neighborhood)=&value(addressesModel*county)=&value(addressesModel*XCoordinator)=&value(addressesModel*YCoordinator)=&value(addressesModel*addressStatus)=&value(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine1)=&value"
		"(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*houseNumberStart)=1005&value(addressesModel*streetName)=vine&value(addressesModel*streetSuffix)=&value(addressesModel*streetDirection)=&value(addressesModel*unitType)=&value(addressesModel*unitStart)=&value(addressesModel*city)=&value(addressesModel*state)=&value(addressesModel*zip_disp)=&value(addressesModel*zip)=&value(addressesModel*countryCode)=&value(addressesModel*primaryFlag)=Y&value(mode)=New&value(addressesmodel*UID)"
		"=&value(addressesModel*refAddressId)=&value(l1addressnbr)=&value(l1addressnbr1)=&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=&isAddress=1&isAddressValidation=Y&isAddressRequired=Y&isShowParcel=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&"
		"ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(unmaskedParcelNumber)=&value(parcelNo)=&value(book)=&value(page)=&value(parcel)=&value(parcelArea)=&value(landValue)=&value(improvedValue)=&value(exemptValue)=&value(tract)=&value"
		"(block)=&value(mapNo)=&value(censusTract)=&value(supervisorDistrict)=&value(councilDistrict)=&value(inspectionDistrict)=&value(planArea)=&value(mapRef)=&value(gisSeqNo)=&value(lot)=&value(templateData)=&value(township)=&value(range)=&value(section)=&value(unmaskedParcelNumber)=&value(legalDesc)=&value(unmaskedParcelNumber)=&value(primaryParcelFlagWithoutDealing)=&value(mode)=New&value(parcelModel*UID)=&value(l1ParcelNo)=&value(parcelNoBySearch1)=&value(parcelSearchType)=local&isParcel=1&"
		"parcelViewID=20021&value(parcelUID)=&value(parcelUID1)=&isParcelValidation=Y&isParcelRequired=Y&value(parcelExternalMode*parcelNo)=&value(parcelExternalMode*parcelArea)=&value(parcelExternalMode*book)=&value(parcelExternalMode*page)=&value(parcelExternalMode*lot)=&value(parcelExternalMode*legalDesc)=&value(parcelExternalMode*landValue)=&value(parcelExternalMode*improvedValue)=&value(parcelExternalMode*exemptValue)=&value(parcelExternalMode*tract)=&value(parcelExternalMode*block)=&isShowOwner=Y&"
		"generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&"
		"sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(templateData)=&value(fax)=&value(primaryOwner)=Y&value(mailAddress1)=&value(phoneCountryCode)=001&value(phone_disp)=&value(phone)=&value(mailAddress2)=&value(mailAddress3)=&value(mailCity)=&value(mailState)=&value(mailZip_disp)=&value(mailZip)=&value(mailCountry)=US&value(email)=&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value"
		"(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=N&isOwnerRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&"
		"sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&isPartialCap=null&value(professionalModel*licensetype)=&value(professionalModel*businessLicense)=&value(professionalModel*salutation)=&value(professionalModel*gender)=&value(professionalModel*postOfficeBox)=&value"
		"(professionalModel*busName2)=&value(professionalModel*licenseBoard)=&date(professionalModel*birthDate)=&value(professionalModel*typeFlag)=&value(maskformat_professionalModel*maskedSsn)=AAA-AA-AAAA&value(professionalModel*maskedSsn)=&value(maskformat_professionalModel*fein)=&value(professionalModel*fein)=&value(professionalModel*title)=&value(professionalModel*comment)=&date(professionalModel*lastUpdateDate)=&value(professionalModel*suffixName)=&value(professionalModel*licensenbr)=&value"
		"(professionalModel*printFlag)=Y&value(professionalModel*contactfirstname)=&value(professionalModel*contactmiddlename)=&value(professionalModel*contactlastname)=&value(professionalModel*phone1CountryCode)=001&value(professionalModel*phone1_disp)=&value(professionalModel*phone1)=&value(professionalModel*businessname)=&value(professionalModel*phone2CountryCode)=001&value(professionalModel*phone2_disp)=&value(professionalModel*phone2)=&value(professionalModel*address1)=&value"
		"(professionalModel*phone3CountryCode)=001&value(professionalModel*phone3_disp)=&value(professionalModel*phone3)=&value(professionalModel*address2)=&value(professionalModel*faxCountryCode)=001&value(professionalModel*fax_disp)=&value(professionalModel*fax)=&value(professionalModel*address3)=&value(professionalModel*city)=&value(professionalModel*state)=&value(professionalModel*zip_disp)=&value(professionalModel*zip)=&value(professionalModel*countryCode)=US&value(professionalModel*email)=&value"
		"(templateGroup)=CAP_PROFESSIONAL&value(mode)=New&value(modePro)=add&valuetextarea28=&sourcetextarea28=&layouttextarea28=&professionalModel*uiuid=28&value(professionalSearchType)=&value(licSeqNbr)=&isProfessional=1&professionalViewID=122&isProfessionalValidation=N&isProfessionalRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(mode)=newsave&"
		"value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*relation)=&value(applicant*title)=&value(applicant*addressId)=&value(applicant*addressLine1)=&value(applicant*addressLine2)=&value(applicant*addressLine3)=&value(applicant*city)=&value(applicant*state)=&value(applicant*zip)=&value(applicant*countryCode)=&value(applicant*phone1)=&value"
		"(applicant*confirmEmail)=&value(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(maskformat_applicant*maskedSsn)=AAA-AA-AAAA&value(applicant*maskedSsn)=&value(maskformat_applicant*fein)=&value(applicant*fein)=&value(applicant*tradeName)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(templateData)=&value(applicant*salutation)=&value(applicant*gender)=&value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value"
		"(applicant*businessName2)=&value(applicant*birthCity)=&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*flag)=N&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone2CountryCode)=&ACMask_121_10_value(applicant*phone2_disp)=&"
		"ACMask_121_10_value(applicant*phone2)=&value(applicant*fullName)=&value(applicant*phone3CountryCode)=&ACMask_121_24_value(applicant*phone3_disp)=&ACMask_121_24_value(applicant*phone3)=&value(applicant*businessName)=&value(applicant*preferredChannel)=&value(applicant*email)=&displasy*applicant*email=Y&valuetextarea27=&sourcetextarea27=%7B%22UIUID%22%3A27%7D&layouttextarea27=null&applicant*uiuid=27&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=Y&applicantAccessRight=F"
		"&applicantContactNumber=null&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(contact*refContactNumber)=&value(contactsModel*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel*accessLevel)=N&value(contactsModel*contactType)=Owner%20Builder&value(contactsModel*relation)=&value"
		"(contactsModel*title)=&value(contactsModel*addressId)=&value(contactsModel*countryCode)=&value(contactsModel*fax)=&value(contactsModel*contactOnSRChange)=&value(contactsModel*comment)=&value(maskformat_contactsModel*maskedSsn)=AAA-AA-AAAA&value(contactsModel*maskedSsn)=&value(maskformat_contactsModel*fein)=&value(contactsModel*fein)=&value(contactsModel*tradeName)=&value(contactsModel*userID)=&value(contactsModel*internalUserFlag)=&value(templateData)=&value(contactsModel*salutation)=&value"
		"(contactsModel*gender)=&value(contactsModel*postOfficeBox)=&date(contactsModel*birthDate)=&value(contactsModel*namesuffix)=&value(contactsModel*businessName2)=&value(contactsModel*birthCity)=&value(contactsModel*birthState)=&value(contactsModel*birthRegion)=&value(contactsModel*race)=&date(contactsModel*deceasedDate)=&value(contactsModel*passportNumber)=&value(contactsModel*driverLicenseNbr)=&value(contactsModel*driverLicenseState)=&value(contactsModel*stateIDNbr)=&value(contactsModel*flag)=N&"
		"value(contactsModel*firstName)=&value(contactsModel*middleName)=&value(contactsModel*lastName)=&value(contactsModel*phone1CountryCode)=&value(contactsModel*phone1_disp)=&value(contactsModel*phone1)=&value(contactsModel*fullName)=&value(contactsModel*phone3CountryCode)=&ACMask_118_23_value(contactsModel*phone3_disp)=&ACMask_118_23_value(contactsModel*phone3)=&value(contactsModel*businessName)=&value(contactsModel*phone2CountryCode)=&ACMask_118_10_value(contactsModel*phone2_disp)=&"
		"ACMask_118_10_value(contactsModel*phone2)=&value(contactsModel*addressLine1)=&value(contactsModel*addressLine2)=&value(contactsModel*addressLine3)=&value(contactsModel*city)=&value(contactsModel*state)=&value(contactsModel*zip_disp)=&value(contactsModel*zip)=&value(contactsModel*email)=&value(contactsModel*preferredChannel)=&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea26=&sourcetextarea26=%7B%22UIUID%22%3A26%7D&layouttextarea26="
		"null&contactsModel*uiuid=26&isContact=1&contact1ViewID=118&isContact1Validation=N&isContact1Required=N&contact1AccessRight=F&contact1ContactNumber=null&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=Building%2BGas_View_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS&app_spec_info_TYPE_OF_PERMIT_Permit_for%253A=&app_spec_info_RECORD_INFORMATION_Title=&"
		"app_spec_info_RECORD_INFORMATION_Plan_submitted_digitally_Value=Y&app_spec_info_RECORD_INFORMATION_Issued=&app_spec_info_RECORD_INFORMATION_Approved=&app_spec_info_RECORD_INFORMATION_Expires=&app_spec_info_RECORD_INFORMATION_Inspect_By=&app_spec_info_RECORD_INFORMATION_Final_Date=&app_spec_info_RECORD_INFORMATION_Building_Number=&app_spec_info_RECORD_INFORMATION_Use_of_Building=&app_spec_info_RECORD_INFORMATION_Failure_to_obtain_Permit_Value=Y&"
		"app_spec_info_RECORD_INFORMATION_Waive_Building_Fees_Value=Y&app_spec_info_RECORD_INFORMATION_Construction_Value=&app_spec_info_RECORD_INFORMATION_Number_of_Buildings=&app_spec_info_INTERFACE_CALLS_Interface_Call_Do_Not_Display=&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&"
		"MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&isGisFeatureRequired=N&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow="
		"hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&mode=upload&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)"
		"%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError="
		"No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL="
		"%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DBuilding%252FPermit%252FGas%252FNA%26module%3DBuilding&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea29=&sourcetextarea29=&layouttextarea29=&docTemplateUIUID=29&value(docGroup)=GEN_DOC&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)="
		"NONE&documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&"
		"hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&"
		"hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&"
		"hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=%2C225%2C117%2C20021%2C20026%2C122%2C121%2C118&viewGroup=%2C225%2C117%2C20021%2C121&formGroup=%2CcapDetailForm%2CaddressForm%2CparcelForm%2CownerForm%2CrefProfessionalDetailActionForm%2CapplicantDetailForm%2CcontactDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode="
		"newSingle&GISCommand=null&isAddressList=&isParcelList=&isOwnerList=&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=ALL&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(professionalModel*maskedSsn)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(contactsModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value"
		"(professionalModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&", 
		LAST);

	web_url("refAddressListBySingleForMultiple.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?alreadySearch=yes&mode=directSearchResult&module=Building&from=SPEAR&listBySingle=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t453.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("countryStateAJAX.jsp_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/address/countryStateAJAX.jsp?stateProperty=value(addressesModel*state)&aaZoneId=aazone-country-state&stateReadOnly=false&country=&tempModuleName=Building&aaxmlrequest=true&aa_rand=0.11254232237115502&aazones=aazone-country-state&statevalue=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t454.inf", 
		"Mode=HTTP", 
		"Body=aazone-country-state", 
		LAST);

	web_url("AAHELP.js_7", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?alreadySearch=yes&mode=directSearchResult&module=Building&from=SPEAR&listBySingle=true", 
		"Snapshot=t455.inf", 
		LAST);

	web_url("Next_Button_Grayed_Out.jpg", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/Next_Button_Grayed_Out.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?alreadySearch=yes&mode=directSearchResult&module=Building&from=SPEAR&listBySingle=true", 
		"Snapshot=t456.inf", 
		LAST);

	web_url("pa.min.js_8", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?alreadySearch=yes&mode=directSearchResult&module=Building&from=SPEAR&listBySingle=true", 
		"Snapshot=t457.inf", 
		LAST);

	web_url("blank.jsp_25", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?alreadySearch=yes&mode=directSearchResult&module=Building&from=SPEAR&listBySingle=true", 
		"Snapshot=t458.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("empty.jsp_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?alreadySearch=yes&mode=directSearchResult&module=Building&from=SPEAR&listBySingle=true", 
		"Snapshot=t459.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_05_Address_Search",LR_AUTO);

	lr_think_time(6);

	lr_start_transaction("OSCEOLA_TC3_06_SelectAddress");

	web_url("session.do_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?alreadySearch=yes&mode=directSearchResult&module=Building&from=SPEAR&listBySingle=true", 
		"Snapshot=t460.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("refAddressListBySingleForMultiple.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?alreadySearch=yes&mode=directSearchResult&module=Building&from=SPEAR&listBySingle=true", 
		"Snapshot=t461.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=value(FirstEntryURL)", "Value=/portlets/address/refAddressListBySingleForMultiple.do?alreadySearch=yes&mode=directSearchResult&module=Building&from=SPEAR&listBySingle=true", ENDITEM, 
		"Name=value(CurrentEntryURL)", "Value=/portlets/address/refAddressListBySingleForMultiple.do?alreadySearch=yes&mode=directSearchResult&module=Building&from=SPEAR&listBySingle=true", ENDITEM, 
		"Name=portlet_language", "Value=en_US", ENDITEM, 
		"Name=refresh_target", "Value=", ENDITEM, 
		"Name=refresh_url", "Value=", ENDITEM, 
		"Name=buttonName", "Value=", ENDITEM, 
		"Name=modeName", "Value=directSearchResult", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=accelasubmitbuttonname", "Value=select4Single", ENDITEM, 
		"Name=itemName", "Value=select4Single", ENDITEM, 
		"Name=CurrentViewID", "Value=7", ENDITEM, 
		"Name=exceptionLogID", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=objectName", "Value=refAddresses", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=7", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=isShowParcel", "Value=Y", ENDITEM, 
		"Name=isShowOwner", "Value=Y", ENDITEM, 
		"Name=disableRefSearchBtn", "Value=null", ENDITEM, 
		"Name=fromGis", "Value=true", ENDITEM, 
		"Name=gisFromPage", "Value=", ENDITEM, 
		"Name=isDynaPaging", "Value=true", ENDITEM, 
		"Name=uid", "Value=OSCEOLA$*$41858", ENDITEM, 
		"Name=addId", "Value=null", ENDITEM, 
		"Name=value(chk_RefAddress,0)", "Value=OSCEOLA$*$41858", ENDITEM, 
		"Name=uid", "Value=OSCEOLA$*$18676", ENDITEM, 
		"Name=addId", "Value=null", ENDITEM, 
		"Name=page-navigator-input-id", "Value=1", ENDITEM, 
		"Name=pageSizeR", "Value=5", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_8", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?module=Building", 
		"Snapshot=t462.inf", 
		LAST);

	web_url("util.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/util.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?module=Building", 
		"Snapshot=t463.inf", 
		LAST);

	web_url("blank.jsp_26", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?module=Building", 
		"Snapshot=t465.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_9", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?module=Building", 
		"Snapshot=t464.inf", 
		LAST);

	web_submit_data("empty.jsp_10", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?module=Building", 
		"Snapshot=t466.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("selectAPOBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/selectAPOBySingle.do?mode=selectParcel&module=Building&parcels=OSCEOLA%24*%2416252900U002500000", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?module=Building", 
		"Snapshot=t467.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("selectAPOBySingle.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/selectAPOBySingle.do?mode=selectOwner&module=Building&owners=OSCEOLA%24*%24148221", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?module=Building", 
		"Snapshot=t468.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_06_SelectAddress",LR_AUTO);

	web_url("gisPickAPOAppSpec.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/gis/gisPickAPOAppSpec.do?mode=pickGISPrimaryGISObject&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/address/refAddressListBySingleForMultiple.do?module=Building", 
		"Snapshot=t469.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getAddressListBySingle.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getAddressListBySingle.do?module=Building&mode=getAddressListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t470.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getParcelListBySingle.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getParcelListBySingle.do?module=Building&mode=getParcelListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t471.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getOwnerListBySingle.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getOwnerListBySingle.do?module=Building&mode=getOwnerListBySingle", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t472.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getGISListBySingle.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?mode=getGISListBySingle&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t473.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("AAHELP.js_9", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getAddressListBySingle.do?module=Building&mode=getAddressListBySingle", 
		"Snapshot=t474.inf", 
		LAST);

	web_url("pa.min.js_10", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getParcelListBySingle.do?module=Building&mode=getParcelListBySingle", 
		"Snapshot=t475.inf", 
		LAST);

	web_submit_data("empty.jsp_11", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t476.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("refAddressForm.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/address/refAddressForm.do?mode=viewCondition&module=Building&uid=OSCEOLA%24*%2441858", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getAddressListBySingle.do?module=Building&mode=getAddressListBySingle", 
		"Snapshot=t477.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fattachedgis%2FgetAddressListBySingle.do%3Fmodule%3DBuilding%26mode%3DgetAddressListBySingle&value(CurrentEntryURL)=%2Fportlets%2Fattachedgis%2FgetAddressListBySingle.do%3Fmodule%3DBuilding%26mode%3DgetAddressListBySingle&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=getAddressListBySingle&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=151&exceptionLogID=&refAddressId=null&uid=OSCEOLA%24*%2441858&value(addressLine1)"
		"=&value(addressLine2)=&pageSizeR=999&", 
		LAST);

	web_submit_data("empty.jsp_12", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t478.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("AAHELP.js_10", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getOwnerListBySingle.do?module=Building&mode=getOwnerListBySingle", 
		"Snapshot=t479.inf", 
		LAST);

	web_url("pa.min.js_11", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getGISListBySingle.do?mode=getGISListBySingle&module=Building", 
		"Snapshot=t480.inf", 
		LAST);

	web_submit_data("empty.jsp_13", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t481.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("refOwnerForm.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/owner/refOwnerForm.do?mode=viewCondition&module=Building&ownerUID=OSCEOLA%24*%24148221", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/attachedgis/getOwnerListBySingle.do?module=Building&mode=getOwnerListBySingle", 
		"Snapshot=t482.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fattachedgis%2FgetOwnerListBySingle.do%3Fmodule%3DBuilding%26mode%3DgetOwnerListBySingle&value(CurrentEntryURL)=%2Fportlets%2Fattachedgis%2FgetOwnerListBySingle.do%3Fmodule%3DBuilding%26mode%3DgetOwnerListBySingle&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=getOwnerListBySingle&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=20032&exceptionLogID=&ownerNum=null&pageSizeR=999&", 
		LAST);

	web_submit_data("empty.jsp_14", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t483.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_think_time(9);

	web_url("session.do_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t484.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(6);

	web_custom_request("genericTemplate.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/generictemplate/genericTemplate.do?mode=getTemplateByLicenseType&uiUID=28&module=Building&licenseType=CONTRACTOR&elementName=value(professionalModel*licensetype)", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t485.inf", 
		"Mode=HTTP", 
		"Body=&docTemplateUIUID=29&valuetextarea29=&sourcetextarea29=&docGroup=GEN_DOC&docType=&docCategory=&documentSeq=&isFromDocDetail=N", 
		LAST);

	web_custom_request("CapBySingle.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t486.inf", 
		"Mode=HTTP", 
		"Body=&aaxmlrequest=true&value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&value(mode)=add&value(srTest)=&value"
		"(capType)=Building%2FPermit%2FGas%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capType)=Building%2FPermit%2FGas%2FNA&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value"
		"(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capModel*capStatus)=&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&"
		"value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F29%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value"
		"(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value"
		"(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value(capModel*pendingValidation)=&date(capModel*fileDate)=08%2F29%2F2018&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType"
		"=print&CurrentViewID=225&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&validateFlagOriginalValue=&value(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value"
		"(addressesModel*levelPrefix)=&value(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitEnd)=&value(addressesModel*sourceFlag)=&value(addressesModel*addressTypeFlag)=&value(addressesModel*validateFlag)=&value(addressesModel*distance)=&value"
		"(addressesModel*secondaryRoad)=&value(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*neighborhood)=&value(addressesModel*county)=&value(addressesModel*XCoordinator)=&value(addressesModel*YCoordinator)=&value(addressesModel*addressStatus)=&value(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine1)=&value"
		"(addressesModel*addressLine2)=&value(templateData)=&value(addressesModel*houseNumberStart)=1005&value(addressesModel*streetName)=vine&value(addressesModel*streetSuffix)=&value(addressesModel*streetDirection)=&value(addressesModel*unitType)=&value(addressesModel*unitStart)=&value(addressesModel*city)=&value(addressesModel*state)=&value(addressesModel*zip_disp)=&value(addressesModel*zip)=&value(addressesModel*countryCode)=&value(addressesModel*primaryFlag)=Y&value(mode)=New&value(addressesmodel*UID)"
		"=&value(addressesModel*refAddressId)=&value(l1addressnbr)=&value(l1addressnbr1)=&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=&isAddress=1&isAddressValidation=&isAddressRequired=Y&isShowParcel=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&"
		"ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(unmaskedParcelNumber)=&value(parcelNo)=&value(book)=&value(page)=&value(parcel)=&value(parcelArea)=&value(landValue)=&value(improvedValue)=&value(exemptValue)=&value(tract)=&value"
		"(block)=&value(mapNo)=&value(censusTract)=&value(supervisorDistrict)=&value(councilDistrict)=&value(inspectionDistrict)=&value(planArea)=&value(mapRef)=&value(gisSeqNo)=&value(lot)=&value(templateData)=&value(township)=&value(range)=&value(section)=&value(unmaskedParcelNumber)=&value(legalDesc)=&value(unmaskedParcelNumber)=&value(primaryParcelFlagWithoutDealing)=&value(mode)=New&value(parcelModel*UID)=&value(l1ParcelNo)=&value(parcelNoBySearch1)=&value(parcelSearchType)=local&isParcel=1&"
		"parcelViewID=20021&value(parcelUID)=&value(parcelUID1)=&isParcelValidation=&isParcelRequired=Y&value(parcelExternalMode*parcelNo)=&value(parcelExternalMode*parcelArea)=&value(parcelExternalMode*book)=&value(parcelExternalMode*page)=&value(parcelExternalMode*lot)=&value(parcelExternalMode*legalDesc)=&value(parcelExternalMode*landValue)=&value(parcelExternalMode*improvedValue)=&value(parcelExternalMode*exemptValue)=&value(parcelExternalMode*tract)=&value(parcelExternalMode*block)=&isShowOwner=Y&"
		"generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&"
		"sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(templateData)=&value(fax)=&value(primaryOwner)=Y&value(mailAddress1)=&value(phoneCountryCode)=001&value(phone_disp)=&value(phone)=&value(mailAddress2)=&value(mailAddress3)=&value(mailCity)=&value(mailState)=&value(mailZip_disp)=&value(mailZip)=&value(mailCountry)=US&value(email)=&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value"
		"(ownerLname)=&value(ownerMname)=&value(UID)=&value(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=&isOwnerRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&"
		"sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&isPartialCap=null&value(professionalModel*licensetype)=CONTRACTOR&value(professionalModel*businessLicense)=&value(professionalModel*salutation)=&value(professionalModel*gender)=&value(professionalModel*postOfficeBox)=&value"
		"(professionalModel*busName2)=&value(professionalModel*licenseBoard)=&date(professionalModel*birthDate)=&value(professionalModel*typeFlag)=&value(maskformat_professionalModel*maskedSsn)=AAA-AA-AAAA&value(professionalModel*maskedSsn)=&value(maskformat_professionalModel*fein)=&value(professionalModel*fein)=&value(professionalModel*title)=&value(professionalModel*comment)=&date(professionalModel*lastUpdateDate)=&value(professionalModel*suffixName)=&value(professionalModel*licensenbr)=&value"
		"(professionalModel*printFlag)=Y&value(professionalModel*contactfirstname)=&value(professionalModel*contactmiddlename)=&value(professionalModel*contactlastname)=&value(professionalModel*phone1CountryCode)=001&value(professionalModel*phone1_disp)=&value(professionalModel*phone1)=&value(professionalModel*businessname)=&value(professionalModel*phone2CountryCode)=001&value(professionalModel*phone2_disp)=&value(professionalModel*phone2)=&value(professionalModel*address1)=&value"
		"(professionalModel*phone3CountryCode)=001&value(professionalModel*phone3_disp)=&value(professionalModel*phone3)=&value(professionalModel*address2)=&value(professionalModel*faxCountryCode)=001&value(professionalModel*fax_disp)=&value(professionalModel*fax)=&value(professionalModel*address3)=&value(professionalModel*city)=&value(professionalModel*state)=&value(professionalModel*zip_disp)=&value(professionalModel*zip)=&value(professionalModel*countryCode)=US&value(professionalModel*email)=&value"
		"(templateGroup)=CAP_PROFESSIONAL&value(mode)=New&value(modePro)=add&valuetextarea28=&sourcetextarea28=&layouttextarea28=&professionalModel*uiuid=28&sourcetextareaBak28=&layouttextareaBak28=&=&=&value(professionalSearchType)=&value(licSeqNbr)=&isProfessional=1&professionalViewID=122&isProfessionalValidation=N&isProfessionalRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&"
		"printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType_cur)=Applicant&value(applicant*contactType)=Applicant&value(applicant*relation)=&value(applicant*title)=&value(applicant*addressId)=&value(applicant*addressLine1)=&value(applicant*addressLine2)=&value(applicant*addressLine3)=&value(applicant*city)=&value(applicant*state)=&value"
		"(applicant*zip)=&value(applicant*countryCode)=&value(applicant*phone1)=&value(applicant*confirmEmail)=&value(applicant*fax)=&value(applicant*contactOnSRChange)=&value(applicant*comment)=&value(maskformat_applicant*maskedSsn)=AAA-AA-AAAA&value(applicant*maskedSsn)=&value(maskformat_applicant*fein)=&value(applicant*fein)=&value(applicant*tradeName)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(templateData)=&value(applicant*salutation)=&value(applicant*gender)=&value"
		"(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value(applicant*businessName2)=&value(applicant*birthCity)=&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*flag)=N&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value"
		"(applicant*phone2CountryCode)=&ACMask_121_10_value(applicant*phone2_disp)=&ACMask_121_10_value(applicant*phone2)=&value(applicant*fullName)=&value(applicant*phone3CountryCode)=&ACMask_121_24_value(applicant*phone3_disp)=&ACMask_121_24_value(applicant*phone3)=&value(applicant*businessName)=&value(applicant*preferredChannel)=&value(applicant*email)=&displasy*applicant*email=Y&valuetextarea27=&sourcetextarea27=%7B%22UIUID%22%3A27%7D&layouttextarea27=null&applicant*uiuid=27&sourcetextareaBak27="
		"%7B%22UIUID%22%3A27%7D&layouttextareaBak27=null&=&=&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=Y&applicantAccessRight=F&applicantContactNumber=null&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(contact*refContactNumber)=&value(contactsModel*refContactNumber)=&value"
		"(serviceProviderCode)=&value(contactsModel*accessLevel)=N&value(contactsModel*contactType_cur)=Owner%20Builder&value(contactsModel*contactType)=Owner%20Builder&value(contactsModel*relation)=&value(contactsModel*title)=&value(contactsModel*addressId)=&value(contactsModel*countryCode)=&value(contactsModel*fax)=&value(contactsModel*contactOnSRChange)=&value(contactsModel*comment)=&value(maskformat_contactsModel*maskedSsn)=AAA-AA-AAAA&value(contactsModel*maskedSsn)=&value(maskformat_contactsModel*fein"
		")=&value(contactsModel*fein)=&value(contactsModel*tradeName)=&value(contactsModel*userID)=&value(contactsModel*internalUserFlag)=&value(templateData)=&value(contactsModel*salutation)=&value(contactsModel*gender)=&value(contactsModel*postOfficeBox)=&date(contactsModel*birthDate)=&value(contactsModel*namesuffix)=&value(contactsModel*businessName2)=&value(contactsModel*birthCity)=&value(contactsModel*birthState)=&value(contactsModel*birthRegion)=&value(contactsModel*race)=&date"
		"(contactsModel*deceasedDate)=&value(contactsModel*passportNumber)=&value(contactsModel*driverLicenseNbr)=&value(contactsModel*driverLicenseState)=&value(contactsModel*stateIDNbr)=&value(contactsModel*flag)=N&value(contactsModel*firstName)=&value(contactsModel*middleName)=&value(contactsModel*lastName)=&value(contactsModel*phone1CountryCode)=&value(contactsModel*phone1_disp)=&value(contactsModel*phone1)=&value(contactsModel*fullName)=&value(contactsModel*phone3CountryCode)=&ACMask_118_23_value"
		"(contactsModel*phone3_disp)=&ACMask_118_23_value(contactsModel*phone3)=&value(contactsModel*businessName)=&value(contactsModel*phone2CountryCode)=&ACMask_118_10_value(contactsModel*phone2_disp)=&ACMask_118_10_value(contactsModel*phone2)=&value(contactsModel*addressLine1)=&value(contactsModel*addressLine2)=&value(contactsModel*addressLine3)=&value(contactsModel*city)=&value(contactsModel*state)=&value(contactsModel*zip_disp)=&value(contactsModel*zip)=&value(contactsModel*email)=&value"
		"(contactsModel*preferredChannel)=&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea26=&sourcetextarea26=%7B%22UIUID%22%3A26%7D&layouttextarea26=null&contactsModel*uiuid=26&sourcetextareaBak26=%7B%22UIUID%22%3A26%7D&layouttextareaBak26=null&=&=&isContact=1&contact1ViewID=118&isContact1Validation=N&isContact1Required=N&contact1AccessRight=F&contact1ContactNumber=null&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&"
		"singleModeName=Building%2BGas_View_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS&app_spec_info_TYPE_OF_PERMIT_Permit_for%253A=&app_spec_info_RECORD_INFORMATION_Title=&app_spec_info_RECORD_INFORMATION_Plan_submitted_digitally_Value=Y&app_spec_info_RECORD_INFORMATION_Issued=&app_spec_info_RECORD_INFORMATION_Approved=&app_spec_info_RECORD_INFORMATION_Expires=&app_spec_info_RECORD_INFORMATION_Inspect_By=&app_spec_info_RECORD_INFORMATION_Final_Date="
		"&app_spec_info_RECORD_INFORMATION_Building_Number=&app_spec_info_RECORD_INFORMATION_Use_of_Building=&app_spec_info_RECORD_INFORMATION_Failure_to_obtain_Permit_Value=Y&app_spec_info_RECORD_INFORMATION_Waive_Building_Fees_Value=Y&app_spec_info_RECORD_INFORMATION_Construction_Value=&app_spec_info_RECORD_INFORMATION_Number_of_Buildings=&app_spec_info_INTERFACE_CALLS_Interface_Call_Do_Not_Display=&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&"
		"is_ASI_fields_displayed=true&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&"
		"isGisFeatureRequired=N&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&"
		"fileCount=0&mode=upload&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&"
		"virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError=No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc="
		"%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL=%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DBuilding%252FPermit%252FGas%252FNA%26module%3DBuilding&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea29=&sourcetextarea29=&layouttextarea29=&docTemplateUIUID=29&sourcetextareaBak29=&layouttextareaBak29=&=&=&="
		"ONBASE&value(docGroup)=GEN_DOC&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)=NONE&documentSeq=&fileKey=&auth_username=&auth_password=&auth_rememberthis=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&"
		"hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-file=&"
		"upload-00-docCategory=&upload-00-docName=&upload-00-docDesc=&upload-00-userEmail=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&"
		"hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-file=&upload-00-docCategory=&upload-00-docDesc=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=225%2C122%2C121%2C118&viewGroup=225%2C121&formGroup="
		"%2CcapDetailForm%2CaddressForm%2CparcelForm%2CownerForm%2CrefProfessionalDetailActionForm%2CapplicantDetailForm%2CcontactDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=true&isParcelList=true&isOwnerList=true&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=ALL&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value"
		"(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(professionalModel*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(contactsModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*maskedSsn)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(professionalModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&setProfessionalType", 
		LAST);

	lr_think_time(10);

	web_url("session.do_14", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t487.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(10);

	web_custom_request("expression.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t488.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=&value(CurrentEntryURL)=&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=new&module=Building&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(paLicenseId)=&isRefreshPartialCondition=N&value(srTest)=&value(capType)=Building%2FPermit%2FGas%2FNA&value(capID)=&value"
		"(capDetailModel*shortNotes)=&value(capType)=Building%2FPermit%2FGas%2FNA&value(capDetailModel*creatorDeptAlias)=&value(capDetailModel*asgnDept)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value"
		"(capModel*capStatus)=&value(capDetailModel*asgnStaff)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=Call%20Center&value(capDetailModel*severity)=&value(capModel*altID)=&value(jobValue)=&value(capDetailModel*totalFee)=0.0&value(capDetailModel*totalPay)=0.0&value(capDetailModel*balance)=0.0&value(capDetailModel*estProdUnits)=0.0&value(capDetailModel*actualProdUnits)=0.0&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)="
		"&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)=08%2F29%2F2018&value(capModel*reportedTime)=&value(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value"
		"(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capDetailModel*undistributedCost)=&value(capDetailModel*url)=&value"
		"(capModel*pendingValidation)=&date(capModel*fileDate)=08%2F29%2F2018&value(capModel*specialText)=&value(capWorkDescriptionModel*description)=&isShowAddress=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow="
		"hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=225&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&validateFlagOriginalValue=&value(addressesModel*addressType)=&value(addressesModel*refAddressType)=&value(addressesModel*houseNumberAlphaStart)=&value(addressesModel*houseNumberAlphaEnd)=&value(addressesModel*levelPrefix)=&value"
		"(addressesModel*levelNumberStart)=&value(addressesModel*levelNumberEnd)=&value(addressesModel*houseFractionStart)=&value(addressesModel*houseNumberEnd)=&value(addressesModel*houseFractionEnd)=&value(addressesModel*streetPrefix)=&value(addressesModel*streetSuffixdirection)=&value(addressesModel*unitEnd)=&value(addressesModel*sourceFlag)=&value(addressesModel*addressTypeFlag)=&value(addressesModel*validateFlag)=&value(addressesModel*distance)=&value(addressesModel*secondaryRoad)=&value"
		"(addressesModel*secondaryRoadNumber)=&value(addressesModel*inspectionDistrictPrefix)=&value(addressesModel*inspectionDistrict)=&value(addressesModel*neighberhoodPrefix)=&value(addressesModel*neighborhood)=&value(addressesModel*county)=&value(addressesModel*XCoordinator)=&value(addressesModel*YCoordinator)=&value(addressesModel*addressStatus)=&value(addressesModel*addressDescription)=&value(addressesModel*fullAddress)=&value(addressesModel*addressLine1)=&value(addressesModel*addressLine2)=&value"
		"(templateData)=&value(addressesModel*houseNumberStart)=1005&value(addressesModel*streetName)=vine&value(addressesModel*streetSuffix)=&value(addressesModel*streetDirection)=&value(addressesModel*unitType)=&value(addressesModel*unitStart)=&value(addressesModel*city)=&value(addressesModel*state)=&value(addressesModel*zip_disp)=&value(addressesModel*zip)=&value(addressesModel*countryCode)=&value(addressesModel*primaryFlag)=Y&value(mode)=New&value(addressesmodel*UID)=&value(addressesModel*refAddressId)"
		"=&value(l1addressnbr)=&value(l1addressnbr1)=&value(addressUID1)=&value(addressUID)=&addressViewID=117&value(addressSearchType)=&isAddress=1&isAddressValidation=&isAddressRequired=Y&isShowParcel=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&"
		"sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=117&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(unmaskedParcelNumber)=&value(parcelNo)=&value(book)=&value(page)=&value(parcel)=&value(parcelArea)=&value(landValue)=&value(improvedValue)=&value(exemptValue)=&value(tract)=&value(block)=&value(mapNo)=&value(censusTract)="
		"&value(supervisorDistrict)=&value(councilDistrict)=&value(inspectionDistrict)=&value(planArea)=&value(mapRef)=&value(gisSeqNo)=&value(lot)=&value(templateData)=&value(township)=&value(range)=&value(section)=&value(unmaskedParcelNumber)=&value(legalDesc)=&value(unmaskedParcelNumber)=&value(primaryParcelFlagWithoutDealing)=&value(mode)=New&value(parcelModel*UID)=&value(l1ParcelNo)=&value(parcelNoBySearch1)=&value(parcelSearchType)=local&isParcel=1&parcelViewID=20021&value(parcelUID)=&value"
		"(parcelUID1)=&isParcelValidation=&isParcelRequired=Y&value(parcelExternalMode*parcelNo)=&value(parcelExternalMode*parcelArea)=&value(parcelExternalMode*book)=&value(parcelExternalMode*page)=&value(parcelExternalMode*lot)=&value(parcelExternalMode*legalDesc)=&value(parcelExternalMode*landValue)=&value(parcelExternalMode*improvedValue)=&value(parcelExternalMode*exemptValue)=&value(parcelExternalMode*tract)=&value(parcelExternalMode*block)=&isShowOwner=Y&generalCAPSearch=&isGeneralCAP=Y&objectName=&"
		"CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20021&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI"
		"&listID=&printType=&checkBoxValue=&value(mode)=New&value(ownerFullName)=&value(templateData)=&value(fax)=&value(primaryOwner)=Y&value(mailAddress1)=&value(phoneCountryCode)=001&value(phone_disp)=&value(phone)=&value(mailAddress2)=&value(mailAddress3)=&value(mailCity)=&value(mailState)=&value(mailZip_disp)=&value(mailZip)=&value(mailCountry)=US&value(email)=&value(mode)=New&value(ownerModel*UID)=&value(refOwnerNumber)=&value(ownerFname)=&value(ownerLname)=&value(ownerMname)=&value(UID)=&value"
		"(ownerSearchType)=&value(l1OwnerNumber)=&value(ownerNumber)=&value(ownerUID)=&isOwner=1&ownerViewID=20026&isOwnerValidation=&isOwnerRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&"
		"listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=20026&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&isPartialCap=null&value(professionalModel*licensetype)=CONTRACTOR&value(professionalModel*businessLicense)=&value(professionalModel*salutation)=&value(professionalModel*gender)=&value(professionalModel*postOfficeBox)=&value(professionalModel*busName2)=&value"
		"(professionalModel*licenseBoard)=&date(professionalModel*birthDate)=&value(professionalModel*typeFlag)=&value(maskformat_professionalModel*maskedSsn)=AAA-AA-AAAA&value(professionalModel*maskedSsn)=&value(maskformat_professionalModel*fein)=&value(professionalModel*fein)=&value(professionalModel*title)=&value(professionalModel*comment)=&date(professionalModel*lastUpdateDate)=&value(professionalModel*suffixName)=&value(professionalModel*licensenbr)=123456789&value(professionalModel*printFlag)=Y&value"
		"(professionalModel*contactfirstname)=&value(professionalModel*contactmiddlename)=&value(professionalModel*contactlastname)=&value(professionalModel*phone1CountryCode)=001&value(professionalModel*phone1_disp)=&value(professionalModel*phone1)=&value(professionalModel*businessname)=&value(professionalModel*phone2CountryCode)=001&value(professionalModel*phone2_disp)=&value(professionalModel*phone2)=&value(professionalModel*address1)=&value(professionalModel*phone3CountryCode)=001&value"
		"(professionalModel*phone3_disp)=&value(professionalModel*phone3)=&value(professionalModel*address2)=&value(professionalModel*faxCountryCode)=001&value(professionalModel*fax_disp)=&value(professionalModel*fax)=&value(professionalModel*address3)=&value(professionalModel*city)=&value(professionalModel*state)=&value(professionalModel*zip_disp)=&value(professionalModel*zip)=&value(professionalModel*countryCode)=US&value(professionalModel*email)=&value(templateGroup)=CAP_PROFESSIONAL&value(mode)=New&"
		"value(modePro)=add&valuetextarea28=&sourcetextarea28=&layouttextarea28=&professionalModel*uiuid=28&value(professionalSearchType)=&value(licSeqNbr)=&isProfessional=1&professionalViewID=122&isProfessionalValidation=N&isProfessionalRequired=N&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=121&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(refContactNumber)=&"
		"value(applicant*refContactNumber)=&value(serviceProviderCode)=&value(applicant*accessLevel)=N&value(applicant*contactType)=Applicant&value(applicant*relation)=&value(applicant*title)=&value(applicant*addressId)=&value(applicant*addressLine1)=&value(applicant*addressLine2)=&value(applicant*addressLine3)=&value(applicant*city)=&value(applicant*state)=&value(applicant*zip)=&value(applicant*countryCode)=&value(applicant*phone1)=&value(applicant*confirmEmail)=&value(applicant*fax)=&value"
		"(applicant*contactOnSRChange)=&value(applicant*comment)=&value(maskformat_applicant*maskedSsn)=AAA-AA-AAAA&value(applicant*maskedSsn)=&value(maskformat_applicant*fein)=&value(applicant*fein)=&value(applicant*tradeName)=&value(applicant*userID)=&value(applicant*internalUserFlag)=&value(templateData)=&value(applicant*salutation)=&value(applicant*gender)=&value(applicant*postOfficeBox)=&date(applicant*birthDate)=&value(applicant*namesuffix)=&value(applicant*businessName2)=&value(applicant*birthCity)="
		"&value(applicant*birthState)=&value(applicant*birthRegion)=&value(applicant*race)=&date(applicant*deceasedDate)=&value(applicant*passportNumber)=&value(applicant*driverLicenseNbr)=&value(applicant*driverLicenseState)=&value(applicant*stateIDNbr)=&value(applicant*flag)=N&value(applicant*firstName)=&value(applicant*middleName)=&value(applicant*lastName)=&value(applicant*phone2CountryCode)=&ACMask_121_10_value(applicant*phone2_disp)=1234567890&ACMask_121_10_value(applicant*phone2)=1234567890&value"
		"(applicant*fullName)=&value(applicant*phone3CountryCode)=&ACMask_121_24_value(applicant*phone3_disp)=2345678901&ACMask_121_24_value(applicant*phone3)=2345678901&value(applicant*businessName)=&value(applicant*preferredChannel)=&value(applicant*email)=perf%40accela.com&displasy*applicant*email=Y&valuetextarea27=&sourcetextarea27=%7B%22UIUID%22%3A27%7D&layouttextarea27=null&applicant*uiuid=27&isApplicant=1&applicantViewID=121&isApplicantValidation=N&isApplicantRequired=Y&applicantAccessRight=F&"
		"applicantContactNumber=null&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(mode)=newsave&value(contactSeqNumber)=&value(contact*refContactNumber)=&value(contactsModel*refContactNumber)=&value(serviceProviderCode)=&value(contactsModel*accessLevel)=N&value(contactsModel*contactType)=Owner%20Builder&value(contactsModel*relation)=&value"
		"(contactsModel*title)=&value(contactsModel*addressId)=&value(contactsModel*countryCode)=&value(contactsModel*fax)=&value(contactsModel*contactOnSRChange)=&value(contactsModel*comment)=&value(maskformat_contactsModel*maskedSsn)=AAA-AA-AAAA&value(contactsModel*maskedSsn)=&value(maskformat_contactsModel*fein)=&value(contactsModel*fein)=&value(contactsModel*tradeName)=&value(contactsModel*userID)=&value(contactsModel*internalUserFlag)=&value(templateData)=&value(contactsModel*salutation)=&value"
		"(contactsModel*gender)=&value(contactsModel*postOfficeBox)=&date(contactsModel*birthDate)=&value(contactsModel*namesuffix)=&value(contactsModel*businessName2)=&value(contactsModel*birthCity)=&value(contactsModel*birthState)=&value(contactsModel*birthRegion)=&value(contactsModel*race)=&date(contactsModel*deceasedDate)=&value(contactsModel*passportNumber)=&value(contactsModel*driverLicenseNbr)=&value(contactsModel*driverLicenseState)=&value(contactsModel*stateIDNbr)=&value(contactsModel*flag)=N&"
		"value(contactsModel*firstName)=&value(contactsModel*middleName)=&value(contactsModel*lastName)=&value(contactsModel*phone1CountryCode)=&value(contactsModel*phone1_disp)=&value(contactsModel*phone1)=&value(contactsModel*fullName)=&value(contactsModel*phone3CountryCode)=&ACMask_118_23_value(contactsModel*phone3_disp)=1234567890&ACMask_118_23_value(contactsModel*phone3)=1234567890&value(contactsModel*businessName)=&value(contactsModel*phone2CountryCode)=&ACMask_118_10_value(contactsModel*phone2_disp)"
		"=9876543210&ACMask_118_10_value(contactsModel*phone2)=9876543210&value(contactsModel*addressLine1)=&value(contactsModel*addressLine2)=&value(contactsModel*addressLine3)=&value(contactsModel*city)=&value(contactsModel*state)=&value(contactsModel*zip_disp)=&value(contactsModel*zip)=&value(contactsModel*email)=&value(contactsModel*preferredChannel)=&value(serviceProviderCode)=&value(ID1)=&value(ID2)=&value(ID3)=&value(mode)=New&value(modePro)=add&valuetextarea26=&sourcetextarea26="
		"%7B%22UIUID%22%3A26%7D&layouttextarea26=null&contactsModel*uiuid=26&isContact=1&contact1ViewID=118&isContact1Validation=N&isContact1Required=N&contact1AccessRight=F&contact1ContactNumber=null&isAppSpecInfo=1&value(capID*ID1)=&value(capID*ID2)=&value(capID*ID3)=&singleModeName=Building%2BGas_View_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS&app_spec_info_TYPE_OF_PERMIT_Permit_for%253A=Residential&app_spec_info_RECORD_INFORMATION_Title=&"
		"app_spec_info_RECORD_INFORMATION_Plan_submitted_digitally_Value=Y&app_spec_info_RECORD_INFORMATION_Issued=&app_spec_info_RECORD_INFORMATION_Approved=&app_spec_info_RECORD_INFORMATION_Expires=&app_spec_info_RECORD_INFORMATION_Inspect_By=&app_spec_info_RECORD_INFORMATION_Final_Date=&app_spec_info_RECORD_INFORMATION_Building_Number=&app_spec_info_RECORD_INFORMATION_Use_of_Building=&app_spec_info_RECORD_INFORMATION_Failure_to_obtain_Permit_Value=Y&"
		"app_spec_info_RECORD_INFORMATION_Waive_Building_Fees_Value=Y&app_spec_info_RECORD_INFORMATION_Construction_Value=&app_spec_info_RECORD_INFORMATION_Number_of_Buildings=&app_spec_info_INTERFACE_CALLS_Interface_Call_Do_Not_Display=&value(mode)=New&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SPEAR&expression_page_reload_after_submit_or_validate_failed=true&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&"
		"MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&isGisFeatureRequired=N&value(entityType)=CAP&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow="
		"hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=118&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(from)=&value(entityType)=CAP&newUpload=true&maxFileIndex=0&fileCount=0&asynchronousUpload=Y&value(from)=&value(entityID)=&value(entityType)=&value(maxFileSize)=&uploadMode=multiAccelaUpload&docName=this%20field(docName)%20is%20desperated&"
		"docDepartment=&docGroup=&docCategory=&alsoAttachTo=&docDescription=&chkLabel=Select&fileLabel=File&groupLabel=Document%20Group%2FCategory&alsoAttachToLabel=Also%20Attach%20To&deptLabel=Department&acaPermissionsLabel=ACA%20Permissions&suffixMessage=The%20file%20of%20this%20type%20cannot%20be%20uploaded.&virtualFoldersLabel=Virtual%20Folders&addLabel=Add&OKLabel=OK&cancelLabel=Cancel&deleteAlt=Delete&selectAlt=Select&newFolderLabel=New%20Folder&showAddBtn=true&noFolderGroupError="
		"No%20virtual%20folder%20options%20applicable%20to%20the%20current%20record%20type.%20Please%20contact%20the%20agency%20administrator%20for%20help.&newFolderDuplicateError=Duplicate%20folder%20name(s).&containSemicolonError=The%20folder%20name%20cannot%20contain%20semicolons.&closeVirtualFoldersImgSrc=%2Fportlets%2Fimages%2Fsky_blue%2Fmenu%2Fdelete.png&virtualFoldersImgSrc=%2Fportlets%2Fimages%2FSelect_SR_Type.gif&virtualFoldersURL="
		"%2Fportlets%2Fdocument%2FdocumentForm.do%3Fmode%3DgetVirtualFolders%26capType%3DBuilding%252FPermit%252FGas%252FNA%26module%3DBuilding&required=*%20Required&staticRequiredDocTypesMessage=&edmsAdsStr=&isCloneSingle=&fromPartialCap=&isPendingCap=&valuetextarea29=&sourcetextarea29=&layouttextarea29=&docTemplateUIUID=29&value(docGroup)=GEN_DOC&value(docCategory)=&value(docDepartment)=&value(docDescription)=&value(ac360_hidden_target)=NONE&value(ac360_hidden_download)=NONE&value(ac360_hidden_delete)="
		"NONE&documentSeq=&fileKey=&canceled=&docRuleExpress=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&"
		"hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docName=&upload-00-edms=&upload-00-docDesc=&upload-00-userEmail=&hidden-00-docName=&hidden-00-entityID=&hidden-00-edmsName=&hidden-00-docDepartment=&hidden-00-docDescription=&hidden-00-docGroup=&"
		"hidden-00-docCategory=&hidden-00-docDispCategory=&hidden-00-userEmail=&hidden-00-fileSize=&hidden-00-documentSeq=&hidden-00-fileKey=&hidden-00-isUploaded=&hidden-00-downloadRight=&hidden-00-viewRight=&hidden-00-deleteRight=&hidden-00-itemRight=&hidden-00-isDeleted=&hidden-00-docType=&hidden-00-recFulName=&hidden-00-recDate=&hidden-00-maxSize=&hidden-00-isOverLarge=&hidden-00-isTempSaved=&hidden-00-tempDocName=&hidden-00-prefileSize=&hidden-00-isInvalidFile=&hidden-00-docDispDepartment=&"
		"hidden-00-contentType=&hidden-00-fileName=&hidden-00-typeFailed=&upload-00-docGroup=&upload-00-docCategory=&upload-00-docDesc=&upload-00-department=&upload-00-edms=&isDocument=1&isDocRequired=N&editPar=2112&allViewIDGroup=225%2C122%2C121%2C118&viewGroup=225%2C121&formGroup=%2CcapDetailForm%2CaddressForm%2CparcelForm%2CownerForm%2CrefProfessionalDetailActionForm%2CapplicantDetailForm%2CcontactDetailForm&fromModel=cap&modelId=&fromEditPartialCap=&fromMode=newSingle&GISCommand=null&isAddressList=true"
		"&isParcelList=true&isOwnerList=true&isProfessionalList=&value(contactValidatePassed)=true&value(createCapForParcelType)=ALL&SKIP_EMSE_FLAG=N&isFromAssetList=null%20&isValidationFailed=null&isValidated=null&_viewstate_=%7B%22empty%22%3Afalse%2C%22fields%22%3A%7B%22value(applicant*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(professionalModel*maskedSsn)"
		"%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(contactsModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%2C%22value(contactsModel*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value(applicant*maskedSsn)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22SSN%22%7D%2C%22value"
		"(professionalModel*fein)%22%3A%7B%22maskValue%22%3A%22%22%2C%22originalValue%22%3A%22%22%2C%22strategy%22%3A%22FEIN%22%7D%7D%7D&value(refContactNumber)=&accelasubmitbuttonname=Previous&callBack=&variableKey=ASI%3A%3ATYPE%20OF%20PERMIT%3A%3APermit%20for%3A&refAPONumber=undefined&argumentPKs="
		"%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A121%2C%22viewKey1%22%3A%22Applicant%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%2C%7B%22portletID%22%3A125%2C%22viewKey1%22%3A%22Owner%20Builder%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SPEAR&mode=execute", 
		LAST);

	lr_think_time(29);

	web_url("session.do_15", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t489.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(25);

	web_url("session.do_16", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t490.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(38);

	lr_start_transaction("OSCEOLA_TC3_08_SubmitApplication_AddNewApplication");

	web_url("session.do_17", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t491.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("getDocListBySingle.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/document/getDocListBySingle.do?mode=getDocSource4SPEAR&module=Building&callbackJs=submitInNewCAP&module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t492.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_think_time(15);

	web_url("generate_204", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t493.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(17);

	web_url("session.do_18", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t494.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_19", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t495.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_20", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t496.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("CapBySingle.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/picker/capTypePicker.do?mode=submit&modelId=&module=Building", 
		"Snapshot=t497.inf", 
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
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(paLicenseId)", "Value=", ENDITEM, 
		"Name=isRefreshPartialCondition", "Value=N", ENDITEM, 
		"Name=value(mode)", "Value=add", ENDITEM, 
		"Name=value(srTest)", "Value=", ENDITEM, 
		"Name=value(capType)", "Value=Building/Permit/Gas/NA", ENDITEM, 
		"Name=value(capID)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*shortNotes)", "Value=", ENDITEM, 
		"Name=value(capType)", "Value=Building/Permit/Gas/NA", ENDITEM, 
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
		"Name=value(capModel*capStatus)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*asgnStaff)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*priority)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*reportedChannel)", "Value=Call Center", ENDITEM, 
		"Name=value(capDetailModel*severity)", "Value=", ENDITEM, 
		"Name=value(capModel*altID)", "Value=", ENDITEM, 
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
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
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
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
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
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=validateFlagOriginalValue", "Value=", ENDITEM, 
		"Name=value(addressesModel*addressType)", "Value=", ENDITEM, 
		"Name=value(addressesModel*refAddressType)", "Value=", ENDITEM, 
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
		"Name=value(addressesModel*sourceFlag)", "Value=", ENDITEM, 
		"Name=value(addressesModel*addressTypeFlag)", "Value=", ENDITEM, 
		"Name=value(addressesModel*validateFlag)", "Value=", ENDITEM, 
		"Name=value(addressesModel*distance)", "Value=", ENDITEM, 
		"Name=value(addressesModel*secondaryRoad)", "Value=", ENDITEM, 
		"Name=value(addressesModel*secondaryRoadNumber)", "Value=", ENDITEM, 
		"Name=value(addressesModel*inspectionDistrictPrefix)", "Value=", ENDITEM, 
		"Name=value(addressesModel*inspectionDistrict)", "Value=", ENDITEM, 
		"Name=value(addressesModel*neighberhoodPrefix)", "Value=", ENDITEM, 
		"Name=value(addressesModel*neighborhood)", "Value=", ENDITEM, 
		"Name=value(addressesModel*county)", "Value=", ENDITEM, 
		"Name=value(addressesModel*XCoordinator)", "Value=", ENDITEM, 
		"Name=value(addressesModel*YCoordinator)", "Value=", ENDITEM, 
		"Name=value(addressesModel*addressStatus)", "Value=", ENDITEM, 
		"Name=value(addressesModel*addressDescription)", "Value=", ENDITEM, 
		"Name=value(addressesModel*fullAddress)", "Value=", ENDITEM, 
		"Name=value(addressesModel*addressLine1)", "Value=", ENDITEM, 
		"Name=value(addressesModel*addressLine2)", "Value=", ENDITEM, 
		"Name=value(templateData)", "Value=", ENDITEM, 
		"Name=value(addressesModel*houseNumberStart)", "Value=1005", ENDITEM, 
		"Name=value(addressesModel*streetName)", "Value=vine", ENDITEM, 
		"Name=value(addressesModel*streetSuffix)", "Value=", ENDITEM, 
		"Name=value(addressesModel*streetDirection)", "Value=", ENDITEM, 
		"Name=value(addressesModel*unitType)", "Value=", ENDITEM, 
		"Name=value(addressesModel*unitStart)", "Value=", ENDITEM, 
		"Name=value(addressesModel*city)", "Value=", ENDITEM, 
		"Name=value(addressesModel*state)", "Value=", ENDITEM, 
		"Name=value(addressesModel*zip_disp)", "Value=", ENDITEM, 
		"Name=value(addressesModel*zip)", "Value=", ENDITEM, 
		"Name=value(addressesModel*countryCode)", "Value=", ENDITEM, 
		"Name=value(addressesModel*primaryFlag)", "Value=Y", ENDITEM, 
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
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
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
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
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
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(parcelNo)", "Value=", ENDITEM, 
		"Name=value(book)", "Value=", ENDITEM, 
		"Name=value(page)", "Value=", ENDITEM, 
		"Name=value(parcel)", "Value=", ENDITEM, 
		"Name=value(parcelArea)", "Value=", ENDITEM, 
		"Name=value(landValue)", "Value=", ENDITEM, 
		"Name=value(improvedValue)", "Value=", ENDITEM, 
		"Name=value(exemptValue)", "Value=", ENDITEM, 
		"Name=value(tract)", "Value=", ENDITEM, 
		"Name=value(block)", "Value=", ENDITEM, 
		"Name=value(mapNo)", "Value=", ENDITEM, 
		"Name=value(censusTract)", "Value=", ENDITEM, 
		"Name=value(supervisorDistrict)", "Value=", ENDITEM, 
		"Name=value(councilDistrict)", "Value=", ENDITEM, 
		"Name=value(inspectionDistrict)", "Value=", ENDITEM, 
		"Name=value(planArea)", "Value=", ENDITEM, 
		"Name=value(mapRef)", "Value=", ENDITEM, 
		"Name=value(gisSeqNo)", "Value=", ENDITEM, 
		"Name=value(lot)", "Value=", ENDITEM, 
		"Name=value(templateData)", "Value=", ENDITEM, 
		"Name=value(township)", "Value=", ENDITEM, 
		"Name=value(range)", "Value=", ENDITEM, 
		"Name=value(section)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(legalDesc)", "Value=", ENDITEM, 
		"Name=value(unmaskedParcelNumber)", "Value=", ENDITEM, 
		"Name=value(primaryParcelFlagWithoutDealing)", "Value=", ENDITEM, 
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
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
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
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
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
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=New", ENDITEM, 
		"Name=value(ownerFullName)", "Value=", ENDITEM, 
		"Name=value(templateData)", "Value=", ENDITEM, 
		"Name=value(fax)", "Value=", ENDITEM, 
		"Name=value(primaryOwner)", "Value=Y", ENDITEM, 
		"Name=value(mailAddress1)", "Value=", ENDITEM, 
		"Name=value(phoneCountryCode)", "Value=001", ENDITEM, 
		"Name=value(phone_disp)", "Value=", ENDITEM, 
		"Name=value(phone)", "Value=", ENDITEM, 
		"Name=value(mailAddress2)", "Value=", ENDITEM, 
		"Name=value(mailAddress3)", "Value=", ENDITEM, 
		"Name=value(mailCity)", "Value=", ENDITEM, 
		"Name=value(mailState)", "Value=", ENDITEM, 
		"Name=value(mailZip_disp)", "Value=", ENDITEM, 
		"Name=value(mailZip)", "Value=", ENDITEM, 
		"Name=value(mailCountry)", "Value=US", ENDITEM, 
		"Name=value(email)", "Value=", ENDITEM, 
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
		"Name=isOwner", "Value=1", ENDITEM, 
		"Name=ownerViewID", "Value=20026", ENDITEM, 
		"Name=isOwnerValidation", "Value=", ENDITEM, 
		"Name=isOwnerRequired", "Value=N", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=20026", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
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
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
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
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=isPartialCap", "Value=null", ENDITEM, 
		"Name=value(professionalModel*licensetype)", "Value=CONTRACTOR", ENDITEM, 
		"Name=value(professionalModel*businessLicense)", "Value=", ENDITEM, 
		"Name=value(professionalModel*salutation)", "Value=", ENDITEM, 
		"Name=value(professionalModel*gender)", "Value=", ENDITEM, 
		"Name=value(professionalModel*postOfficeBox)", "Value=", ENDITEM, 
		"Name=value(professionalModel*busName2)", "Value=", ENDITEM, 
		"Name=value(professionalModel*licenseBoard)", "Value=", ENDITEM, 
		"Name=date(professionalModel*birthDate)", "Value=", ENDITEM, 
		"Name=value(professionalModel*typeFlag)", "Value=", ENDITEM, 
		"Name=value(maskformat_professionalModel*maskedSsn)", "Value=AAA-AA-AAAA", ENDITEM, 
		"Name=value(professionalModel*maskedSsn)", "Value=", ENDITEM, 
		"Name=value(maskformat_professionalModel*fein)", "Value=", ENDITEM, 
		"Name=value(professionalModel*fein)", "Value=", ENDITEM, 
		"Name=value(professionalModel*title)", "Value=", ENDITEM, 
		"Name=value(professionalModel*comment)", "Value=", ENDITEM, 
		"Name=date(professionalModel*lastUpdateDate)", "Value=", ENDITEM, 
		"Name=value(professionalModel*suffixName)", "Value=", ENDITEM, 
		"Name=value(professionalModel*licensenbr)", "Value=123456789", ENDITEM, 
		"Name=value(professionalModel*printFlag)", "Value=Y", ENDITEM, 
		"Name=value(professionalModel*contactfirstname)", "Value=", ENDITEM, 
		"Name=value(professionalModel*contactmiddlename)", "Value=", ENDITEM, 
		"Name=value(professionalModel*contactlastname)", "Value=", ENDITEM, 
		"Name=value(professionalModel*phone1CountryCode)", "Value=001", ENDITEM, 
		"Name=value(professionalModel*phone1_disp)", "Value=", ENDITEM, 
		"Name=value(professionalModel*phone1)", "Value=", ENDITEM, 
		"Name=value(professionalModel*businessname)", "Value=", ENDITEM, 
		"Name=value(professionalModel*phone2CountryCode)", "Value=001", ENDITEM, 
		"Name=value(professionalModel*phone2_disp)", "Value=", ENDITEM, 
		"Name=value(professionalModel*phone2)", "Value=", ENDITEM, 
		"Name=value(professionalModel*address1)", "Value=", ENDITEM, 
		"Name=value(professionalModel*phone3CountryCode)", "Value=001", ENDITEM, 
		"Name=value(professionalModel*phone3_disp)", "Value=", ENDITEM, 
		"Name=value(professionalModel*phone3)", "Value=", ENDITEM, 
		"Name=value(professionalModel*address2)", "Value=", ENDITEM, 
		"Name=value(professionalModel*faxCountryCode)", "Value=001", ENDITEM, 
		"Name=value(professionalModel*fax_disp)", "Value=", ENDITEM, 
		"Name=value(professionalModel*fax)", "Value=", ENDITEM, 
		"Name=value(professionalModel*address3)", "Value=", ENDITEM, 
		"Name=value(professionalModel*city)", "Value=", ENDITEM, 
		"Name=value(professionalModel*state)", "Value=", ENDITEM, 
		"Name=value(professionalModel*zip_disp)", "Value=", ENDITEM, 
		"Name=value(professionalModel*zip)", "Value=", ENDITEM, 
		"Name=value(professionalModel*countryCode)", "Value=US", ENDITEM, 
		"Name=value(professionalModel*email)", "Value=", ENDITEM, 
		"Name=value(templateGroup)", "Value=CAP_PROFESSIONAL", ENDITEM, 
		"Name=value(mode)", "Value=New", ENDITEM, 
		"Name=value(modePro)", "Value=add", ENDITEM, 
		"Name=valuetextarea28", "Value=", ENDITEM, 
		"Name=sourcetextarea28", "Value=", ENDITEM, 
		"Name=layouttextarea28", "Value=", ENDITEM, 
		"Name=professionalModel*uiuid", "Value=28", ENDITEM, 
		"Name=value(professionalSearchType)", "Value=", ENDITEM, 
		"Name=value(licSeqNbr)", "Value=", ENDITEM, 
		"Name=isProfessional", "Value=1", ENDITEM, 
		"Name=professionalViewID", "Value=122", ENDITEM, 
		"Name=isProfessionalValidation", "Value=N", ENDITEM, 
		"Name=isProfessionalRequired", "Value=N", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=121", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=newsave", ENDITEM, 
		"Name=value(contactSeqNumber)", "Value=", ENDITEM, 
		"Name=value(refContactNumber)", "Value=", ENDITEM, 
		"Name=value(applicant*refContactNumber)", "Value=", ENDITEM, 
		"Name=value(serviceProviderCode)", "Value=", ENDITEM, 
		"Name=value(applicant*contactType_cur)", "Value=Applicant", ENDITEM, 
		"Name=value(applicant*contactType)", "Value=Applicant", ENDITEM, 
		"Name=value(applicant*relation)", "Value=", ENDITEM, 
		"Name=value(applicant*title)", "Value=", ENDITEM, 
		"Name=value(applicant*addressId)", "Value=", ENDITEM, 
		"Name=value(applicant*addressLine1)", "Value=", ENDITEM, 
		"Name=value(applicant*addressLine2)", "Value=", ENDITEM, 
		"Name=value(applicant*addressLine3)", "Value=", ENDITEM, 
		"Name=value(applicant*city)", "Value=", ENDITEM, 
		"Name=value(applicant*state)", "Value=", ENDITEM, 
		"Name=value(applicant*zip)", "Value=", ENDITEM, 
		"Name=value(applicant*countryCode)", "Value=", ENDITEM, 
		"Name=value(applicant*phone1)", "Value=", ENDITEM, 
		"Name=value(applicant*confirmEmail)", "Value=", ENDITEM, 
		"Name=value(applicant*fax)", "Value=", ENDITEM, 
		"Name=value(applicant*contactOnSRChange)", "Value=", ENDITEM, 
		"Name=value(applicant*comment)", "Value=", ENDITEM, 
		"Name=value(maskformat_applicant*maskedSsn)", "Value=AAA-AA-AAAA", ENDITEM, 
		"Name=value(applicant*maskedSsn)", "Value=", ENDITEM, 
		"Name=value(maskformat_applicant*fein)", "Value=", ENDITEM, 
		"Name=value(applicant*fein)", "Value=", ENDITEM, 
		"Name=value(applicant*tradeName)", "Value=", ENDITEM, 
		"Name=value(applicant*userID)", "Value=", ENDITEM, 
		"Name=value(applicant*internalUserFlag)", "Value=", ENDITEM, 
		"Name=value(templateData)", "Value=", ENDITEM, 
		"Name=value(applicant*salutation)", "Value=", ENDITEM, 
		"Name=value(applicant*gender)", "Value=", ENDITEM, 
		"Name=value(applicant*postOfficeBox)", "Value=", ENDITEM, 
		"Name=date(applicant*birthDate)", "Value=", ENDITEM, 
		"Name=value(applicant*namesuffix)", "Value=", ENDITEM, 
		"Name=value(applicant*businessName2)", "Value=", ENDITEM, 
		"Name=value(applicant*birthCity)", "Value=", ENDITEM, 
		"Name=value(applicant*birthState)", "Value=", ENDITEM, 
		"Name=value(applicant*birthRegion)", "Value=", ENDITEM, 
		"Name=value(applicant*race)", "Value=", ENDITEM, 
		"Name=date(applicant*deceasedDate)", "Value=", ENDITEM, 
		"Name=value(applicant*passportNumber)", "Value=", ENDITEM, 
		"Name=value(applicant*driverLicenseNbr)", "Value=", ENDITEM, 
		"Name=value(applicant*driverLicenseState)", "Value=", ENDITEM, 
		"Name=value(applicant*stateIDNbr)", "Value=", ENDITEM, 
		"Name=value(applicant*flag)", "Value=N", ENDITEM, 
		"Name=value(applicant*firstName)", "Value=", ENDITEM, 
		"Name=value(applicant*middleName)", "Value=", ENDITEM, 
		"Name=value(applicant*lastName)", "Value=", ENDITEM, 
		"Name=value(applicant*phone2CountryCode)", "Value=", ENDITEM, 
		"Name=ACMask_121_10_value(applicant*phone2_disp)", "Value=1234567890", ENDITEM, 
		"Name=ACMask_121_10_value(applicant*phone2)", "Value=1234567890", ENDITEM, 
		"Name=value(applicant*fullName)", "Value=", ENDITEM, 
		"Name=value(applicant*phone3CountryCode)", "Value=", ENDITEM, 
		"Name=ACMask_121_24_value(applicant*phone3_disp)", "Value=2345678901", ENDITEM, 
		"Name=ACMask_121_24_value(applicant*phone3)", "Value=2345678901", ENDITEM, 
		"Name=value(applicant*businessName)", "Value=", ENDITEM, 
		"Name=value(applicant*preferredChannel)", "Value=", ENDITEM, 
		"Name=value(applicant*email)", "Value=perf@accela.com", ENDITEM, 
		"Name=displasy*applicant*email", "Value=Y", ENDITEM, 
		"Name=valuetextarea27", "Value=", ENDITEM, 
		"Name=sourcetextarea27", "Value={\"UIUID\":27}", ENDITEM, 
		"Name=layouttextarea27", "Value=null", ENDITEM, 
		"Name=applicant*uiuid", "Value=27", ENDITEM, 
		"Name=isApplicant", "Value=1", ENDITEM, 
		"Name=applicantViewID", "Value=121", ENDITEM, 
		"Name=isApplicantValidation", "Value=N", ENDITEM, 
		"Name=isApplicantRequired", "Value=Y", ENDITEM, 
		"Name=applicantAccessRight", "Value=F", ENDITEM, 
		"Name=applicantContactNumber", "Value=null", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=118", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=newsave", ENDITEM, 
		"Name=value(contactSeqNumber)", "Value=", ENDITEM, 
		"Name=value(contact*refContactNumber)", "Value=", ENDITEM, 
		"Name=value(contactsModel*refContactNumber)", "Value=", ENDITEM, 
		"Name=value(serviceProviderCode)", "Value=", ENDITEM, 
		"Name=value(contactsModel*contactType_cur)", "Value=Owner Builder", ENDITEM, 
		"Name=value(contactsModel*contactType)", "Value=Owner Builder", ENDITEM, 
		"Name=value(contactsModel*relation)", "Value=", ENDITEM, 
		"Name=value(contactsModel*title)", "Value=", ENDITEM, 
		"Name=value(contactsModel*addressId)", "Value=", ENDITEM, 
		"Name=value(contactsModel*countryCode)", "Value=", ENDITEM, 
		"Name=value(contactsModel*fax)", "Value=", ENDITEM, 
		"Name=value(contactsModel*contactOnSRChange)", "Value=", ENDITEM, 
		"Name=value(contactsModel*comment)", "Value=", ENDITEM, 
		"Name=value(maskformat_contactsModel*maskedSsn)", "Value=AAA-AA-AAAA", ENDITEM, 
		"Name=value(contactsModel*maskedSsn)", "Value=", ENDITEM, 
		"Name=value(maskformat_contactsModel*fein)", "Value=", ENDITEM, 
		"Name=value(contactsModel*fein)", "Value=", ENDITEM, 
		"Name=value(contactsModel*tradeName)", "Value=", ENDITEM, 
		"Name=value(contactsModel*userID)", "Value=", ENDITEM, 
		"Name=value(contactsModel*internalUserFlag)", "Value=", ENDITEM, 
		"Name=value(templateData)", "Value=", ENDITEM, 
		"Name=value(contactsModel*salutation)", "Value=", ENDITEM, 
		"Name=value(contactsModel*gender)", "Value=", ENDITEM, 
		"Name=value(contactsModel*postOfficeBox)", "Value=", ENDITEM, 
		"Name=date(contactsModel*birthDate)", "Value=", ENDITEM, 
		"Name=value(contactsModel*namesuffix)", "Value=", ENDITEM, 
		"Name=value(contactsModel*businessName2)", "Value=", ENDITEM, 
		"Name=value(contactsModel*birthCity)", "Value=", ENDITEM, 
		"Name=value(contactsModel*birthState)", "Value=", ENDITEM, 
		"Name=value(contactsModel*birthRegion)", "Value=", ENDITEM, 
		"Name=value(contactsModel*race)", "Value=", ENDITEM, 
		"Name=date(contactsModel*deceasedDate)", "Value=", ENDITEM, 
		"Name=value(contactsModel*passportNumber)", "Value=", ENDITEM, 
		"Name=value(contactsModel*driverLicenseNbr)", "Value=", ENDITEM, 
		"Name=value(contactsModel*driverLicenseState)", "Value=", ENDITEM, 
		"Name=value(contactsModel*stateIDNbr)", "Value=", ENDITEM, 
		"Name=value(contactsModel*flag)", "Value=N", ENDITEM, 
		"Name=value(contactsModel*firstName)", "Value=", ENDITEM, 
		"Name=value(contactsModel*middleName)", "Value=", ENDITEM, 
		"Name=value(contactsModel*lastName)", "Value=", ENDITEM, 
		"Name=value(contactsModel*phone1CountryCode)", "Value=", ENDITEM, 
		"Name=value(contactsModel*phone1_disp)", "Value=", ENDITEM, 
		"Name=value(contactsModel*phone1)", "Value=", ENDITEM, 
		"Name=value(contactsModel*fullName)", "Value=", ENDITEM, 
		"Name=value(contactsModel*phone3CountryCode)", "Value=", ENDITEM, 
		"Name=ACMask_118_23_value(contactsModel*phone3_disp)", "Value=1234567890", ENDITEM, 
		"Name=ACMask_118_23_value(contactsModel*phone3)", "Value=1234567890", ENDITEM, 
		"Name=value(contactsModel*businessName)", "Value=", ENDITEM, 
		"Name=value(contactsModel*phone2CountryCode)", "Value=", ENDITEM, 
		"Name=ACMask_118_10_value(contactsModel*phone2_disp)", "Value=9876543210", ENDITEM, 
		"Name=ACMask_118_10_value(contactsModel*phone2)", "Value=9876543210", ENDITEM, 
		"Name=value(contactsModel*addressLine1)", "Value=", ENDITEM, 
		"Name=value(contactsModel*addressLine2)", "Value=", ENDITEM, 
		"Name=value(contactsModel*addressLine3)", "Value=", ENDITEM, 
		"Name=value(contactsModel*city)", "Value=", ENDITEM, 
		"Name=value(contactsModel*state)", "Value=", ENDITEM, 
		"Name=value(contactsModel*zip_disp)", "Value=", ENDITEM, 
		"Name=value(contactsModel*zip)", "Value=", ENDITEM, 
		"Name=value(contactsModel*email)", "Value=", ENDITEM, 
		"Name=value(contactsModel*preferredChannel)", "Value=", ENDITEM, 
		"Name=value(serviceProviderCode)", "Value=", ENDITEM, 
		"Name=value(ID1)", "Value=", ENDITEM, 
		"Name=value(ID2)", "Value=", ENDITEM, 
		"Name=value(ID3)", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=New", ENDITEM, 
		"Name=value(modePro)", "Value=add", ENDITEM, 
		"Name=valuetextarea26", "Value=", ENDITEM, 
		"Name=sourcetextarea26", "Value={\"UIUID\":26}", ENDITEM, 
		"Name=layouttextarea26", "Value=null", ENDITEM, 
		"Name=contactsModel*uiuid", "Value=26", ENDITEM, 
		"Name=isContact", "Value=1", ENDITEM, 
		"Name=contact1ViewID", "Value=118", ENDITEM, 
		"Name=isContact1Validation", "Value=N", ENDITEM, 
		"Name=isContact1Required", "Value=N", ENDITEM, 
		"Name=contact1AccessRight", "Value=F", ENDITEM, 
		"Name=contact1ContactNumber", "Value=null", ENDITEM, 
		"Name=isAppSpecInfo", "Value=1", ENDITEM, 
		"Name=value(capID*ID1)", "Value=", ENDITEM, 
		"Name=value(capID*ID2)", "Value=", ENDITEM, 
		"Name=value(capID*ID3)", "Value=", ENDITEM, 
		"Name=singleModeName", "Value=Building+Gas_View_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS", ENDITEM, 
		"Name=app_spec_info_TYPE_OF_PERMIT_Permit_for%3A", "Value=Residential", ENDITEM, 
		"Name=app_spec_info_RECORD_INFORMATION_Title", "Value=", ENDITEM, 
		"Name=app_spec_info_RECORD_INFORMATION_Plan_submitted_digitally_Value", "Value=Y", ENDITEM, 
		"Name=app_spec_info_RECORD_INFORMATION_Hurricane_Related", "Value=No", ENDITEM, 
		"Name=app_spec_info_RECORD_INFORMATION_Issued", "Value=", ENDITEM, 
		"Name=app_spec_info_RECORD_INFORMATION_Approved", "Value=", ENDITEM, 
		"Name=app_spec_info_RECORD_INFORMATION_Expires", "Value=", ENDITEM, 
		"Name=app_spec_info_RECORD_INFORMATION_Inspect_By", "Value=", ENDITEM, 
		"Name=app_spec_info_RECORD_INFORMATION_Final_Date", "Value=", ENDITEM, 
		"Name=app_spec_info_RECORD_INFORMATION_Building_Number", "Value=", ENDITEM, 
		"Name=app_spec_info_RECORD_INFORMATION_Use_of_Building", "Value=", ENDITEM, 
		"Name=app_spec_info_RECORD_INFORMATION_Failure_to_obtain_Permit_Value", "Value=Y", ENDITEM, 
		"Name=app_spec_info_RECORD_INFORMATION_Waive_Building_Fees_Value", "Value=Y", ENDITEM, 
		"Name=app_spec_info_RECORD_INFORMATION_Construction_Value", "Value=1000", ENDITEM, 
		"Name=app_spec_info_RECORD_INFORMATION_Number_of_Buildings", "Value=", ENDITEM, 
		"Name=app_spec_info_INTERFACE_CALLS_Interface_Call_Do_Not_Display", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=New", ENDITEM, 
		"Name=expression_portlet_to_be_populate", "Value=-1", ENDITEM, 
		"Name=expression_portlet_to_be_populate", "Value=-99999", ENDITEM, 
		"Name=is_ASI_fields_displayed", "Value=true", ENDITEM, 
		"Name=expressionPageType", "Value=SPEAR", ENDITEM, 
		"Name=expression_page_reload_after_submit_or_validate_failed", "Value=true", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=118", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=118", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=isGisFeatureRequired", "Value=N", ENDITEM, 
		"Name=value(entityType)", "Value=CAP", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=118", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=generalCAPSearch", "Value=", ENDITEM, 
		"Name=isGeneralCAP", "Value=Y", ENDITEM, 
		"Name=objectName", "Value=", ENDITEM, 
		"Name=CheckBoxName", "Value=", ENDITEM, 
		"Name=MaxNumber", "Value=", ENDITEM, 
		"Name=ExportFileType", "Value=print", ENDITEM, 
		"Name=CurrentViewID", "Value=118", ENDITEM, 
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
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
		"Name=virtualFoldersURL", "Value=/portlets/document/documentForm.do?mode=getVirtualFolders&capType=Building%2FPermit%2FGas%2FNA&module=Building", ENDITEM, 
		"Name=required", "Value=* Required", ENDITEM, 
		"Name=staticRequiredDocTypesMessage", "Value=", ENDITEM, 
		"Name=edmsAdsStr", "Value=", ENDITEM, 
		"Name=isCloneSingle", "Value=", ENDITEM, 
		"Name=fromPartialCap", "Value=", ENDITEM, 
		"Name=isPendingCap", "Value=", ENDITEM, 
		"Name=valuetextarea29", "Value=", ENDITEM, 
		"Name=sourcetextarea29", "Value=", ENDITEM, 
		"Name=layouttextarea29", "Value=", ENDITEM, 
		"Name=docTemplateUIUID", "Value=29", ENDITEM, 
		"Name=value(docGroup)", "Value=GEN_DOC", ENDITEM, 
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
		"Name=editPar", "Value=2112", ENDITEM, 
		"Name=allViewIDGroup", "Value=225,122,121,118", ENDITEM, 
		"Name=viewGroup", "Value=225,121", ENDITEM, 
		"Name=formGroup", "Value=,capDetailForm,addressForm,parcelForm,ownerForm,refProfessionalDetailActionForm,applicantDetailForm,contactDetailForm", ENDITEM, 
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
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(applicant*fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(professionalModel*maskedSsn)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"},\"value(contactsModel*fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(contactsModel*maskedSsn)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"},\"value(applicant*maskedSsn)\":{\"maskValue\":\"\",\""
		"originalValue\":\"\",\"strategy\":\"SSN\"},\"value(professionalModel*fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"}}}", ENDITEM, 
		LAST);

	web_url("AAHELP.js_11", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t498.inf", 
		LAST);

	web_submit_data("empty.jsp_15", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t499.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("pa.min.js_12", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t500.inf", 
		LAST);

	lr_think_time(31);

	web_url("session.do_21", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t501.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_08_SubmitApplication_AddNewApplication",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("OSCEOLA_TC3_08_SubmitApplication_ViewSummary");

	web_url("session.do_22", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/CapBySingle.do?module=Building", 
		"Snapshot=t502.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_23", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t503.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("CapTabSummary.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=04PBH&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t504.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("re-skin-v3.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v3.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=04PBH&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t505.inf", 
		LAST);

	web_url("AAHELP.js_12", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=04PBH&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t506.inf", 
		LAST);

	web_url("portletInterface.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/portletInterface.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=04PBH&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t507.inf", 
		LAST);

	web_url("expressionConstants.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionConstants.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=04PBH&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t508.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_13", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=04PBH&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t509.inf", 
		LAST);

	web_url("blank.jsp_27", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=04PBH&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t510.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("ajax.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=04PBH&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t511.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("empty.jsp_16", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t512.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_concurrent_start(NULL);

	web_url("content-left-bottom.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/tab/content-left-bottom.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t513.inf", 
		LAST);

	web_url("content-left-top.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/tab/content-left-top.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t514.inf", 
		LAST);

	web_url("content-right-bottom.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/tab/content-right-bottom.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t515.inf", 
		LAST);

	web_url("content-right-top.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/tab/content-right-top.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t516.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("tabRecordCount.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=04PBH&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/"
		"countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/"
		"countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=04PBH&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t517.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("search.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=04PBH&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t518.inf", 
		"Mode=HTTP", 
		"Body=categoryName=Portlet - Expression", 
		LAST);

	web_submit_data("expression.do_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=04PBH&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t519.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=argumentPKs", "Value=[{\"portletID\":-1,\"viewKey1\":\"\",\"viewKey2\":\"\",\"viewKey3\":\"\"}]", ENDITEM, 
		"Name=expressionPageType", "Value=SINGLEPORTLET", ENDITEM, 
		"Name=isReload", "Value=false", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=capType", "Value=Building/Permit/Gas/NA", ENDITEM, 
		LAST);

	web_custom_request("tabRecordCount.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=04PBH&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=04PBH&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t520.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("expression.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=04PBH&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t521.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fcap%2Fcapsummary%2FCapTabSummary.do%3Fmode%3DtabSummary%26isRedirect%3Dfalse%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcap%2Fcapsummary%2FCapTabSummary.do%3Fmode%3DtabSummary%26isRedirect%3Dfalse%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=tabSummary&module=Building&itemName=&CurrentViewID=30046&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&"
		"CurrentViewID=30046&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&isFromSummaryLink=&clickSummaryDocId=&canceled=&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SINGLEPORTLET&expression_page_reload_after_submit_or_validate_failed=true&valuetextarea999="
		"%5B%7B%22values%22%3A%5B%7B%22Sunguard_Call_Date%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Fire_RMS_Call_Date%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_COM_GAS%22%2C%22subgroup%22%3A%22INTERFACE%20CALLS%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Permit%20for%3A%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22Residential%22%2C%2"
		"2rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_COM_GAS%22%2C%22subgroup%22%3A%22TYPE%20OF%20PERMIT%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Hurricane%20Related%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22No%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Plan%20submitted%20digitally%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Issued%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%2"
		"21%22%7D%2C%22Approved%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Expires%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Inspect%20By%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Final%20Date%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Building%20Number%22%3A%7B%22valueSeq"
		"%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Use%20of%20Building%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Failure%20to%20obtain%20Permit%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Waive%20Building%20Fees%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Construction%20Value%22%3A%7B%22valueSeq%22%3A%22%22%2C%22valu"
		"e%22%3A%221000%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Title%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Number%20of%20Buildings%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_COM_GAS%22%2C%22subgroup%22%3A%22RECORD%20INFORMATION%22%2C%22templateType%22%3A%22Form%22%7D%5D&sourcetextarea999="
		"%7B%22templateForms%22%3A%5B%7B%22groupName%22%3A%22BLD_COM_GAS%22%2C%22subgroups%22%3A%5B%7B%22displayName%22%3A%22TYPE%20OF%20PERMIT%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Permit%20for%3A%22%2C%22subgroupName%22%3A%22TYPE%20OF%20PERMIT%22%2C%22groupName%22%3A%22BLD_COM_GAS%22%2C%22defaultValue%22%3A%22Residential%22%2C%22displayFieldName%22%3A%22Permit%20for%3A%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A5%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22ta"
		"rget%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BGas_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22%7D%2C%22fieldTypeEnum%22%3A%22Dropdown%22%2C%22checklistComment%22%3A%22Residential%22%2C%22checkboxInd%22%3A%225%22%2C%22checkboxDesc%22%3A%"
		"22Permit%20for%3A%22%7D%5D%2C%22subgroupName%22%3A%22TYPE%20OF%20PERMIT%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Permit%20for%3A%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22RECORD%20INFORMATION%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Hurricane%20Related%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_GAS%22%2C%22defaultValue%22%3A%22No%22%2C%22displayFieldName%22%3A%22Hurricane%20Related%22%2C%22dis"
		"playLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BGas_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22%7D%2C%22fieldTypeEnum%22%3A%22Radio%22%2C%22che"
		"cklistComment%22%3A%22No%22%2C%22checkboxInd%22%3A%223%22%2C%22checkboxDesc%22%3A%22Hurricane%20Related%22%7D%2C%7B%22fieldName%22%3A%22Plan%20submitted%20digitally%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_GAS%22%2C%22displayFieldName%22%3A%22Plan%20submitted%20digitally%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A9%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoFor"
		"m.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BGas_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22%7D%2C%22fieldTypeEnum%22%3A%22Checkbox%22%2C%22checkboxInd%22%3A%229%22%2C%22checkboxDesc%22%3A%22Plan%20submitted%20digitally%22%7D%2C%7B%22fieldName%22%3A%22Issued%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%2"
		"2groupName%22%3A%22BLD_COM_GAS%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Issued%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BGas_SCREEN_NAME_SCREEN_LABEL_S"
		"PLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22%7D%2C%22fieldTypeEnum%22%3A%22Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22checkboxDesc%22%3A%22Issued%22%7D%2C%7B%22fieldName%22%3A%22Approved%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_GAS%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Approved%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A40%2C%22fieldTyp"
		"eValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BGas_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22%7D%2C%22fieldTypeEnum%22%3A%22Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%"
		"22%3A%222%22%2C%22checkboxDesc%22%3A%22Approved%22%7D%2C%7B%22fieldName%22%3A%22Expires%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_GAS%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Expires%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A60%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26s"
		"erviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BGas_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22%7D%2C%22fieldTypeEnum%22%3A%22Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22checkboxDesc%22%3A%22Expires%22%7D%2C%7B%22fieldName%22%3A%22Inspect%20By%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_GA"
		"S%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Inspect%20By%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A70%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BGas_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInfo"
		"rmation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22%7D%2C%22fieldTypeEnum%22%3A%22Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22checkboxDesc%22%3A%22Inspect%20By%22%7D%2C%7B%22fieldName%22%3A%22Final%20Date%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_GAS%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Final%20Date%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A80%2C%22fieldTypeValue%22"
		"%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BGas_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22%7D%2C%22fieldTypeEnum%22%3A%22Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222"
		"%22%2C%22checkboxDesc%22%3A%22Final%20Date%22%7D%2C%7B%22fieldName%22%3A%22Building%20Number%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_GAS%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Building%20Number%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A90%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module"
		"%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BGas_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22%7D%2C%22fieldTypeEnum%22%3A%22Text%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22checkboxDesc%22%3A%22Building%20Number%22%7D%2C%7B%22fieldName%22%3A%22Use%20of%20Building%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2"
		"C%22groupName%22%3A%22BLD_COM_GAS%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Use%20of%20Building%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A110%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BGas_SCREEN_NA"
		"ME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22%7D%2C%22fieldTypeEnum%22%3A%22Text%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22checkboxDesc%22%3A%22Use%20of%20Building%22%7D%2C%7B%22fieldName%22%3A%22Failure%20to%20obtain%20Permit%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_GAS%22%2C%22displayFieldName%22%3A%22Failure%20to%20obtain%20Permit%22%2C%22displayLen%22%3A0%2C%22di"
		"splayOrder%22%3A120%2C%22fieldTypeValue%22%3A9%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BGas_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22%7D%2C%22fieldTypeEnum%22%3A%22Checkbox%22%2C%22checkboxInd%22%3A%229"
		"%22%2C%22checkboxDesc%22%3A%22Failure%20to%20obtain%20Permit%22%7D%2C%7B%22fieldName%22%3A%22Waive%20Building%20Fees%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_GAS%22%2C%22displayFieldName%22%3A%22Waive%20Building%20Fees%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A130%2C%22fieldTypeValue%22%3A9%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding"
		"%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BGas_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22%7D%2C%22fieldTypeEnum%22%3A%22Checkbox%22%2C%22checkboxInd%22%3A%229%22%2C%22checkboxDesc%22%3A%22Waive%20Building%20Fees%22%7D%2C%7B%22fieldName%22%3A%22Construction%20Value%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_GAS%22%2C%22defa"
		"ultValue%22%3A%221000%22%2C%22displayFieldName%22%3A%22Construction%20Value%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A140%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BGas_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREE"
		"N_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22%7D%2C%22fieldTypeEnum%22%3A%22Number%22%2C%22checklistComment%22%3A%221000%22%2C%22checkboxInd%22%3A%224%22%2C%22checkboxDesc%22%3A%22Construction%20Value%22%7D%2C%7B%22fieldName%22%3A%22Title%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_GAS%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Title%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A160%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%"
		"7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BGas_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22%7D%2C%22fieldTypeEnum%22%3A%22Text%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22checkboxDesc%22"
		"%3A%22Title%22%7D%2C%7B%22fieldName%22%3A%22Number%20of%20Buildings%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_GAS%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Number%20of%20Buildings%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A170%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serv"
		"iceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BGas_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22%7D%2C%22fieldTypeEnum%22%3A%22Text%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22checkboxDesc%22%3A%22Number%20of%20Buildings%22%7D%5D%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Hurr"
		"icane%20Related%22%2C%22Plan%20submitted%20digitally%22%2C%22Issued%22%2C%22Approved%22%2C%22Expires%22%2C%22Inspect%20By%22%2C%22Final%20Date%22%2C%22Building%20Number%22%2C%22Use%20of%20Building%22%2C%22Failure%20to%20obtain%20Permit%22%2C%22Waive%20Building%20Fees%22%2C%22Construction%20Value%22%2C%22Title%22%2C%22Number%20of%20Buildings%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22INTERFACE%20CALLS%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Sunguard_C"
		"all_Date%22%2C%22subgroupName%22%3A%22INTERFACE%20CALLS%22%2C%22groupName%22%3A%22BLD_COM_GAS%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Sunguard_Call_Date%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%"
		"26fromTreeGrid%3DY%26singleMode%3DInterface%2BCall%2BGas_SCREEN_NAME_SCREEN_LABEL_SPLIT_Interface%2BCall_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22%7D%2C%22fieldTypeEnum%22%3A%22Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22checkboxDesc%22%3A%22Sunguard_Call_Date%22%7D%2C%7B%22fieldName%22%3A%22Fire_RMS_Call_Date%22%2C%22subgroupName%22%3A%22INTERFACE%20CALLS%22%2C%22groupName%22%3A%22BLD_COM_GAS%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displa"
		"yFieldName%22%3A%22Fire_RMS_Call_Date%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D04PBH%26fromTreeGrid%3DY%26singleMode%3DInterface%2BCall%2BGas_SCREEN_NAME_SCREEN_LABEL_SPLIT_Interface%2BCall_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_GAS%22"
		"%7D%2C%22fieldTypeEnum%22%3A%22Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22checkboxDesc%22%3A%22Fire_RMS_Call_Date%22%7D%5D%2C%22subgroupName%22%3A%22INTERFACE%20CALLS%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Sunguard_Call_Date%22%2C%22Fire_RMS_Call_Date%22%5D%5D%2C%22rows%22%3Anull%7D%5D%2C%22templateType%22%3A%22Form%22%2C%22readOnly%22%3Atrue%7D%5D%2C%22templateTables%22%3A%5B%5D%2C%22readOnly%22%3Atrue%2C%22UIUID%22%3A999%7D&"
		"layouttextarea999="
		"%7B%22map%22%3A%7B%22BLD_COM_GAS%23%40%23%40RECORD%20INFORMATION%23%40%23%40Construction%20Value%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Construction%20Value%22%2C%22spanId%22%3A%2247_layout_mark_span%22%7D%2C%22BLD_COM_GAS%23%40%23%40RECORD%20INFORMATION%23%40%23%40Issued%22%3A%7B%22displayLen%22%3A141%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Issued%22%2C%22spanId%22%3A%2238_layout_mark_span%22%7D%2C%22BLD_COM_GAS%23%40%23%40INTERFACE%20CALLS%23%40%"
		"23%40Fire_RMS_Call_Date%22%3A%7B%22displayLen%22%3A141%2C%22styleHeight%22%3A18%2C%22styleLabel%22%3A%22Fire_RMS_Call_Date%22%2C%22spanId%22%3A%2250_layout_mark_span%22%7D%2C%22BLD_COM_GAS%23%40%23%40TYPE%20OF%20PERMIT%23%40%23%40Permit%20for%3A%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Permit%20for%3A%22%2C%22spanId%22%3A%2234_layout_mark_span%22%7D%2C%22BLD_COM_GAS%23%40%23%40RECORD%20INFORMATION%23%40%23%40Plan%20submitted%20digitally%22%3A%7B%22displayLen%"
		"22%3A166%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Plan%20submitted%20digitally%22%2C%22spanId%22%3A%2236_layout_mark_span%22%7D%2C%22BLD_COM_GAS%23%40%23%40RECORD%20INFORMATION%23%40%23%40Waive%20Building%20Fees%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Waive%20Building%20Fees%22%2C%22spanId%22%3A%2246_layout_mark_span%22%7D%2C%22BLD_COM_GAS%23%40%23%40RECORD%20INFORMATION%23%40%23%40Expires%22%3A%7B%22displayLen%22%3A141%2C%22styleHeight%22%3A17%2C%22"
		"styleLabel%22%3A%22Expires%22%2C%22spanId%22%3A%2240_layout_mark_span%22%7D%2C%22BLD_COM_GAS%23%40%23%40RECORD%20INFORMATION%23%40%23%40Inspect%20By%22%3A%7B%22displayLen%22%3A141%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Inspect%20By%22%2C%22spanId%22%3A%2241_layout_mark_span%22%7D%2C%22BLD_COM_GAS%23%40%23%40RECORD%20INFORMATION%23%40%23%40Hurricane%20Related%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Hurricane%20Related%22%2C%22spanId%22%3A%2237_layou"
		"t_mark_span%22%7D%2C%22BLD_COM_GAS%23%40%23%40RECORD%20INFORMATION%23%40%23%40Final%20Date%22%3A%7B%22displayLen%22%3A141%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Final%20Date%22%2C%22spanId%22%3A%2242_layout_mark_span%22%7D%2C%22BLD_COM_GAS%23%40%23%40RECORD%20INFORMATION%23%40%23%40Failure%20to%20obtain%20Permit%22%3A%7B%22displayLen%22%3A166%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Failure%20to%20obtain%20Permit%22%2C%22spanId%22%3A%2245_layout_mark_span%22%7D%2C%22BLD_COM_GAS%2"
		"3%40%23%40RECORD%20INFORMATION%23%40%23%40Title%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Title%22%2C%22spanId%22%3A%2235_layout_mark_span%22%7D%2C%22BLD_COM_GAS%23%40%23%40RECORD%20INFORMATION%23%40%23%40Use%20of%20Building%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Use%20of%20Building%22%2C%22watermark%22%3A%22Text%22%2C%22spanId%22%3A%2244_layout_mark_span%22%7D%2C%22BLD_COM_GAS%23%40%23%40RECORD%20INFORMATION%23%40%23%4"
		"0Approved%22%3A%7B%22displayLen%22%3A141%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Approved%22%2C%22spanId%22%3A%2239_layout_mark_span%22%7D%2C%22BLD_COM_GAS%23%40%23%40INTERFACE%20CALLS%23%40%23%40Sunguard_Call_Date%22%3A%7B%22displayLen%22%3A141%2C%22styleHeight%22%3A18%2C%22styleLabel%22%3A%22Sunguard_Call_Date%22%2C%22spanId%22%3A%2249_layout_mark_span%22%7D%2C%22BLD_COM_GAS%23%40%23%40RECORD%20INFORMATION%23%40%23%40Building%20Number%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3"
		"A17%2C%22styleLabel%22%3A%22Building%20Number%22%2C%22watermark%22%3A%22Text%22%2C%22spanId%22%3A%2243_layout_mark_span%22%7D%2C%22BLD_COM_GAS%23%40%23%40RECORD%20INFORMATION%23%40%23%40Number%20of%20Buildings%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Number%20of%20Buildings%22%2C%22spanId%22%3A%2248_layout_mark_span%22%7D%7D%2C%22layouts%22%3A%5B%5D%2C%22layoutHtml%22%3A%22%3Ctable%3E%3Ctr%3E%3Ctd%20class%3D'portlet-form-field-label'%3E%3Cstrong%3EBuilding%20"
		"Gas%3C%2Fstrong%3E%3C%2Ftd%3E%3C%2Ftr%3E%3C%2Ftable%3E%3Ctable%20id%3D%5C%22customTaskSpecInfoTable%5C%22%20name%3D%5C%22customTaskSpecInfoTable%5C%22%20class%3D%5C%22AccelaMainTableVariant%5C%22%3E%3Ctr%3E%3CTH%3E%3Ctable%20cellSpacing%3D0%20cellPadding%3D0%3E%3Ctbody%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3"
		"E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D"
		"12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heigh"
		"t%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2210%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3Argb(93%2C%2093%2C%2093)"
		"%3Bfont-family%3A%5C%22%3E%20%20%20%20%20%20%20TYPE%20OF%20PERMIT%20%20%20%20%20%3C%2FLABEL%3E%3CLABEL%20style%3D%5C%22color%3A%235d5d5d%5C%22%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20hei"
		"ght%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%2"
		"0height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D"
		"12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%"
		"2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E"
		"%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D1"
		"2%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20"
		"width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ct"
		"d%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E"
		"%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'34_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'35_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%"
		"3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E"
		"%3Ctr%3E%3Ctd%20colspan%3D%5C%2234%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CTABLE%20width%3D%5C%22100%25%5C%22%3E%3CTOBYD%3E%3CTR%3E%3CTD%3E%3CHR%20class%3D'common-hr-border'%3E%3C%2FTD%3E%3C%2FTR%3E%3C%2FTBODY%3E%3C%2FTABLE%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E"
		"%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20he"
		"ight%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E"
		"%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3"
		"E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3Argb(93%2C%2093%2C%2093)"
		"%3Bfont-family%3A%5C%22%3E%20%20%20%20%20%20%20RECORD%20INFORMATION%20%20%20%20%20%20%20%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20"
		"height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D1"
		"2%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2"
		"Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%"
		"3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12"
		"%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20w"
		"idth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd"
		"%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%"
		"3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd"
		"%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'36_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3"
		"E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'37_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%"
		"3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20"
		"height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D1"
		"2%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2"
		"Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D1"
		"2%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width"
		"%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20w"
		"idth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd"
		"%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'38_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'39_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%"
		"20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3"
		"D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%"
		"20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3"
		"Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heig"
		"ht%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20"
		"height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D1"
		"2%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width"
		"%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'40_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'41_layout_mark_span"
		"'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%"
		"3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3"
		"C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%"
		"3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3"
		"E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%"
		"3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3"
		"D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heig"
		"ht%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3"
		"Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'42_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'43_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heigh"
		"t%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3C"
		"td%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20h"
		"eight%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3"
		"E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2F"
		"td%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3"
		"C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%"
		"3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20co"
		"lspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'44_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'45_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3"
		"E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20wid"
		"th%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%2"
		"0width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D"
		"12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%2"
		"0width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C"
		"td%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2F"
		"td%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D"
		"%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'46_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'47_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3"
		"D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3"
		"E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wid"
		"th%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%2"
		"0width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C"
		"td%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'48_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%"
		"3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12"
		"%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%"
		"3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd"
		"%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%"
		"3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd"
		"%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%2"
		"0height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D"
		"12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%"
		"2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E"
		"%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D1"
		"2%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height"
		"%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2234%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22"
		"%3E%3CTABLE%20width%3D%5C%22100%25%5C%22%3E%3CTOBYD%3E%3CTR%3E%3CTD%3E%3CHR%20class%3D'common-hr-border'%3E%3C%2FTD%3E%3C%2FTR%3E%3C%2FTBODY%3E%3C%2FTABLE%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20widt"
		"h%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E"
		"%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2211%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3Argb(93%2C%2093%2C%2093)"
		"%3Bfont-family%3A%5C%22%3E%20%20%20%20%20%20%20GIS%20INFORMATION%20%20%20%20%20%20%3C%2FLABEL%3E%3CLABEL%20style%3D%5C%22color%3A%235d5d5d%5C%22%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20h"
		"eight%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12"
		"%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%"
		"3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3"
		"C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%"
		"3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3"
		"D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3C%2Ftbody%3E%3C%2Ftable%3E%3C%2FTH%3E%3C%2Ftr%3E%3C%2Ftable%3E%3C%2FLABEL%3E%3Ctable%3E%3Ctr%3E%3Ctd%20class%3D'portlet-form-field-label'%3E%3Cstrong%3EInterface%20Call%20Gas%3C%2Fstrong%3E%3C%2Ftd%3E%3C%2Ftr%3E%3C%2Ftable%3E%3Ctable%20id%3D%5C%22customTaskSpecInfoTable%5C%22%20name%3D%5C%22customTaskSpecInfoTable%5C%22%20class%3D%5C%22AccelaMainTableVariant%5C%22%3E%3Ctr%3E%3C"
		"TH%3E%3Ctable%20cellSpacing%3D0%20cellPadding%3D0%3E%3Ctbody%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'49_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%2"
		"0height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D"
		"12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%"
		"2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'50_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20wid"
		"th%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3C%2Ftbody%3E%3C%2Ftable%3E%3C%2FTH%3E%3C%2Ftr%3E%3C%2Ftable%3E%22%7D&uiuid=999&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber=undefined&argumentPKs=%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&mode=execute", 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_08_SubmitApplication_ViewSummary",LR_AUTO);

	lr_think_time(8);

	lr_start_transaction("OSCEOLA_TC3_09_Record_ClickContact");

	web_url("session.do_24", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9431&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t522.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_25", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=04PBH&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t523.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("contactList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=04PBH&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true", 
		"Snapshot=t524.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_13", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t525.inf", 
		LAST);

	web_url("related.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/Recurring/related.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t526.inf", 
		LAST);

	web_url("blank.jsp_28", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t528.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_14", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t527.inf", 
		LAST);

	web_submit_data("empty.jsp_17", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t529.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("tabRecordCount.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=04PBH&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/"
		"countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/"
		"countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t530.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=04PBH&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t531.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_09_Record_ClickContact",LR_AUTO);

	lr_start_transaction("OSCEOLA_TC3_10_Record_Contact_LookUpContact");

	web_concurrent_start(NULL);

	web_url("left-hover.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/left-hover.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t532.inf", 
		LAST);

	web_url("Drop_Menu_Button_Hover.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/reskin/Drop_Menu_Button_Hover.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v2.css", 
		"Snapshot=t533.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(5);

	web_url("session.do_26", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t534.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("refContactListForCap.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/contactList.do?mode=list&module=Building", 
		"Snapshot=t535.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_14", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t536.inf", 
		LAST);

	web_url("soundex.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/soundex.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t537.inf", 
		LAST);

	web_url("blank.jsp_29", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t539.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_15", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t538.inf", 
		LAST);

	web_submit_data("ajax.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t540.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("empty.jsp_18", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t541.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("base64.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/base64.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t542.inf", 
		LAST);

	web_submit_data("regionalSyncMask.do_16", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t543.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_17", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&getMsg=Y", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t544.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_18", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t545.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("regionalSyncMask.do_19", 
		"Action=https://av-pt-ferrari.accela.com/portlets/regional/regionalSyncMask.do?mode=syncMask&maskType=phoneNumber&referValue=", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t546.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_10_Record_Contact_LookUpContact",LR_AUTO);

	web_url("session.do_27", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t547.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("OSCEOLA_TC3_11_Record_Contact_LookUpContact_SearchContact");

	web_url("session.do_28", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t548.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("refContactListForCap.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?value(mode)=search&value(lookup)=true&lookupdirect=true&fromDaily=Y&isDisableRefContact=false&value(usedQueryInfo)=Y&value(actType)=lookupdirect&module=Building", 
		"Snapshot=t549.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP", "Value=8653448eedb17cc03acd3096432968ee", ENDITEM, 
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
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
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
		"Name=value(firstName)", "Value=john", ENDITEM, 
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
		"Name=value(genericTemplateAttribute*fieldName)", "Value=", ENDITEM, 
		"Name=value(genericTemplateAttribute*defaultValue)", "Value=", ENDITEM, 
		"Name=value(genericTemplateTableValue*fieldName)", "Value=", ENDITEM, 
		"Name=value(genericTemplateTableValue*defaultValue)", "Value=", ENDITEM, 
		"Name=value(middleName)", "Value=", ENDITEM, 
		"Name=value(lastName)", "Value=", ENDITEM, 
		"Name=value(phone1CountryCode)", "Value=", ENDITEM, 
		"Name=ACMask_21033_2_value(phone1_disp)", "Value=", ENDITEM, 
		"Name=ACMask_21033_2_value(phone1)", "Value=", ENDITEM, 
		"Name=value(contactSeqNumber)", "Value=", ENDITEM, 
		"Name=value(businessName)", "Value=", ENDITEM, 
		"Name=value(phone2CountryCode)", "Value=", ENDITEM, 
		"Name=ACMask_21033_5_value(phone2_disp)", "Value=", ENDITEM, 
		"Name=ACMask_21033_5_value(phone2)", "Value=", ENDITEM, 
		"Name=value(email)", "Value=", ENDITEM, 
		"Name=value(phone3CountryCode)", "Value=", ENDITEM, 
		"Name=ACMask_21033_21_value(phone3_disp)", "Value=", ENDITEM, 
		"Name=ACMask_21033_21_value(phone3)", "Value=", ENDITEM, 
		"Name=value(countryCode)", "Value=", ENDITEM, 
		"Name=value(socialSecurityNumber)", "Value=", ENDITEM, 
		"Name=value(maskformat_socialSecurityNumber)", "Value=AAA-AA-AAAA", ENDITEM, 
		"Name=value(fein)", "Value=", ENDITEM, 
		"Name=value(maskformat_fein)", "Value=", ENDITEM, 
		"Name=date(birthDate)", "Value=", ENDITEM, 
		"Name=date(endBirthDate)", "Value=", ENDITEM, 
		"Name=value(gender)", "Value=", ENDITEM, 
		"Name=value(templateGroup)", "Value=G3CONTACT", ENDITEM, 
		"Name=valuetextarea30", "Value=", ENDITEM, 
		"Name=sourcetextarea30", "Value=", ENDITEM, 
		"Name=layouttextarea30", "Value=", ENDITEM, 
		"Name=uiuid", "Value=30", ENDITEM, 
		"Name=_viewstate_", "Value={\"empty\":false,\"fields\":{\"value(fein)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"FEIN\"},\"value(socialSecurityNumber)\":{\"maskValue\":\"\",\"originalValue\":\"\",\"strategy\":\"SSN\"}}}", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_15", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t550.inf", 
		LAST);

	web_url("blank.jsp_30", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t552.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_16", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t551.inf", 
		LAST);

	web_submit_data("empty.jsp_19", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t553.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("tabRecordCount.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=04PBH&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/"
		"countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/"
		"countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t554.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=04PBH&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t555.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_11_Record_Contact_LookUpContact_SearchContact",LR_AUTO);

	lr_start_transaction("OSCEOLA_TC3_12_Record_Contact_LookUpContact_SelectContact");

	web_url("session.do_29", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t556.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("refContactListForCap.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t557.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=TRANSACTION_TOKEN_KEY_FOR_REFCONTACTLISTACTIONFORMFORCAP", "Value=8653448eedb17cc03acd3096432968ee", ENDITEM, 
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
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
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
		"Name=chk_contactid", "Value=318469134", ENDITEM, 
		"Name=chk_contactid_hiddenCheckbox", "Value=318469134", ENDITEM, 
		"Name=entity_type_hidden", "Value=CONTACT", ENDITEM, 
		"Name=refContactId", "Value=318469134", ENDITEM, 
		"Name=chk_contactid_hiddenCheckbox", "Value=318593969", ENDITEM, 
		"Name=entity_type_hidden", "Value=CONTACT", ENDITEM, 
		"Name=refContactId", "Value=318593969", ENDITEM, 
		"Name=chk_contactid_hiddenCheckbox", "Value=318593970", ENDITEM, 
		"Name=entity_type_hidden", "Value=CONTACT", ENDITEM, 
		"Name=refContactId", "Value=318593970", ENDITEM, 
		"Name=chk_contactid_hiddenCheckbox", "Value=318594695", ENDITEM, 
		"Name=entity_type_hidden", "Value=CONTACT", ENDITEM, 
		"Name=refContactId", "Value=318594695", ENDITEM, 
		"Name=chk_contactid_hiddenCheckbox", "Value=318475670", ENDITEM, 
		"Name=entity_type_hidden", "Value=CONTACT", ENDITEM, 
		"Name=refContactId", "Value=318475670", ENDITEM, 
		"Name=isDynaPaging", "Value=true", ENDITEM, 
		"Name=startDate", "Value=", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_16", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t558.inf", 
		LAST);

	web_url("blank.jsp_31", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t560.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_17", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t559.inf", 
		LAST);

	web_submit_data("empty.jsp_20", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t561.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("tabRecordCount.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=04PBH&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/"
		"countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/"
		"countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t562.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=04PBH&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t563.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_12_Record_Contact_LookUpContact_SelectContact",LR_AUTO);

	web_concurrent_start(NULL);

	web_url("ChVnb29nLWJhZGJpbnVybC1zaGF2YXI4AUACSgwIARDJ9AkYyfQJIAFKDAgAEKbOCRimzgkgAQ", 
		"URL=https://safebrowsing-cache.google.com/safebrowsing/rd/ChVnb29nLWJhZGJpbnVybC1zaGF2YXI4AUACSgwIARDJ9AkYyfQJIAFKDAgAEKbOCRimzgkgAQ", 
		"Resource=1", 
		"RecContentType=application/vnd.google.safebrowsing-chunk", 
		"Referer=", 
		"Snapshot=t564.inf", 
		LAST);

	web_url("ChNnb29nLW1hbHdhcmUtc2hhdmFyOAFAAkoMCAEQpe4RGKXuESABSgwIABCrgRIYq4ESIAE", 
		"URL=https://safebrowsing-cache.google.com/safebrowsing/rd/ChNnb29nLW1hbHdhcmUtc2hhdmFyOAFAAkoMCAEQpe4RGKXuESABSgwIABCrgRIYq4ESIAE", 
		"Resource=1", 
		"RecContentType=application/vnd.google.safebrowsing-chunk", 
		"Referer=", 
		"Snapshot=t565.inf", 
		LAST);

	web_url("ChFnb29nLXBoaXNoLXNoYXZhcjgBQAJKDAgBEJqWMxialjMgAUoMCAAQhdEfGIXRHyAB", 
		"URL=https://safebrowsing-cache.google.com/safebrowsing/rd/ChFnb29nLXBoaXNoLXNoYXZhcjgBQAJKDAgBEJqWMxialjMgAUoMCAAQhdEfGIXRHyAB", 
		"Resource=1", 
		"RecContentType=application/vnd.google.safebrowsing-chunk", 
		"Referer=", 
		"Snapshot=t566.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(5);

	lr_start_transaction("OSCEOLA_TC3_15_Record_Click_Inspections");

	web_url("session.do_30", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t567.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("inspectionListCapSpecific.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/contact/ref/refContactListForCap.do?module=Building", 
		"Snapshot=t568.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_17", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t569.inf", 
		LAST);

	web_url("inspectionCommon.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/inspectionCommon.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t570.inf", 
		LAST);

	web_url("blank.jsp_32", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t572.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_18", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t571.inf", 
		LAST);

	web_submit_data("empty.jsp_21", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t573.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("tabRecordCount.do_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=04PBH&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/"
		"countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/"
		"countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t574.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=04PBH&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t575.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_15_Record_Click_Inspections",LR_AUTO);

	lr_think_time(16);

	lr_start_transaction("OSCEOLA_TC3_16_Record_Inspections_Click_ScheduleInspection");

	web_url("session.do_31", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t576.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("workloadingInspectionList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doValidate&mType=0&isFromCAP=Y&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t577.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_INSPECTIONLISTCAPSPECIFICFORM=3013d6eb23dc65d4594aa1e8001dca6b&value(FirstEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=220&exceptionLogID=&generalCAPSearch=&"
		"objectName=inspectionList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=220&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(mode)=view&value(CONFIRM_RESULT_WHEN_CANCEL)=&multipleResultType=&listType=recordInspectionList&errorShow=&noRight=&pageSizeR=null&", 
		LAST);

	web_url("workloadingInspectionList.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t578.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("I18NDateStyle1.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/I18NDateStyle1.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Building", 
		"Snapshot=t579.inf", 
		LAST);

	web_url("selectRequiredInspections.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Building", 
		"Snapshot=t580.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_18", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t581.inf", 
		LAST);

	web_url("filterInput.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/filterInput.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t582.inf", 
		LAST);

	web_url("refreshInspection.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/refreshInspection.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t583.inf", 
		LAST);

	web_url("move_right_all.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/move_right_all.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t584.inf", 
		LAST);

	web_url("move_right.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/move_right.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t585.inf", 
		LAST);

	web_url("move_left.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/move_left.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t586.inf", 
		LAST);

	web_url("move_left_all.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/move_left_all.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t588.inf", 
		LAST);

	web_url("blank.jsp_33", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t589.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_19", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t587.inf", 
		LAST);

	web_url("session.do_32", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t590.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("empty.jsp_22", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t591.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("selectRequiredInspections.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=loadInspTypeByGroup&InspGroup=BLD_COM_GAS&CapId=REC18-00000-04PBH&CapIdIndex=0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t592.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=24fa843ea73799c4e8aadc9bfb1cdc4e&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Building&accelasubmitbuttonname=&"
		"itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=24fa843ea73799c4e8aadc9bfb1cdc4e&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&pageSizeR=9999&", 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_16_Record_Inspections_Click_ScheduleInspection",LR_AUTO);

	web_url("session.do_33", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t593.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("selectRequiredInspections.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=loadListTitles", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t594.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=24fa843ea73799c4e8aadc9bfb1cdc4e&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Building&accelasubmitbuttonname=&"
		"itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=24fa843ea73799c4e8aadc9bfb1cdc4e&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&pageSizeR=9999&", 
		LAST);

	lr_start_transaction("OSCEOLA_TC3_17_Record_SelectInspectionType_ClickPendingInspections");

	web_url("session.do_34", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t595.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("selectRequiredInspections.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=onlyPending", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/selectRequiredInspections.do?mode=adminPendingView&isFromCap=Y&module=Building", 
		"Snapshot=t596.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=24fa843ea73799c4e8aadc9bfb1cdc4e&value(FirstEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FselectRequiredInspections.do%3Fmode%3DadminPendingView%26isFromCap%3DY%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=adminPendingView&module=Building&accelasubmitbuttonname=&"
		"itemName=&CurrentViewID=264&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=264&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&TRANSACTION_TOKEN_KEY_FOR_SELECTREQUIREDINSPECTIONS=24fa843ea73799c4e8aadc9bfb1cdc4e&value(mode)=pendingEditInit&value(doAdd)=N&value(capIDModel)=&value(chk_inspType%2C0)=on&value(inspTypeID%2C0)=84027953&value(selectCapID%2C0)=REC18-00000-04PBH&value(isInAdvance%2C0)=N&value"
		"(requiredInspection%2C0)=N&value(autoassign%2C0)=N&value(scheduleOrder%2C0)=&value(unitNBR%2C0)=&pageSizeR=9999&", 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_17_Record_SelectInspectionType_ClickPendingInspections",LR_AUTO);

	lr_think_time(17);

	lr_start_transaction("OSCEOLA_TC3_18_Record_Inspection_SelectInspectionType_ClickPendingInspections_ClickOK");

	lr_end_transaction("OSCEOLA_TC3_18_Record_Inspection_SelectInspectionType_ClickPendingInspections_ClickOK",LR_AUTO);

	lr_start_transaction("OSCEOLA_TC3_18_Record_Inspection_ClickInspection");

	web_url("session.do_35", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t597.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("inspectionListCapSpecific.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t598.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_19", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t599.inf", 
		LAST);

	web_url("blank.jsp_34", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t601.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_20", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t600.inf", 
		LAST);

	web_submit_data("empty.jsp_23", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t602.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("tabRecordCount.do_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=04PBH&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/"
		"countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/"
		"countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t603.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=04PBH&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t604.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_18_Record_Inspection_ClickInspection",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("OSCEOLA_TC3_19_Record_Inspection_SelectIPendingInspection_ClickScheduleInspection");

	web_url("session.do_36", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t605.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("workloadingInspectionList.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doValidate&mType=0&isFromCAP=Y&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t606.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_INSPECTIONLISTCAPSPECIFICFORM=3013d6eb23dc65d4594aa1e8001dca6b&value(FirstEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FinspectionListCapSpecific.do%3Fmode%3Dlist%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=220&exceptionLogID=&generalCAPSearch=&"
		"objectName=inspectionList&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=220&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(mode)=view&value(CONFIRM_RESULT_WHEN_CANCEL)=&multipleResultType=&listType=recordInspectionList&errorShow=&noRight=&value(chk_INSP%2C0)=0&value(ServProvCode%2C0)=OSCEOLA&value(INSPID%2C0)=23573652&value(CAPID1%2C0)=REC18&value(CAPID2%2C0)=00000&value(CAPID3%2C0)=04PBH&value(INSPSEQ%2C0)=84027953&value(enabledCheck%2C0)=Y&"
		"documentDescription0=Insp%20Pending&inspectionCategory0=PENDING&pageSizeR=5&", 
		LAST);

	web_url("workloadingInspectionList.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t607.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("pendingInspectionEditMain.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?value(mode)=doManage&doPending=true&RCAP=true&module=Building", 
		"Snapshot=t608.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("portlet-iframe-popup-content.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/portlet-iframe-popup-content.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t609.inf", 
		LAST);

	web_url("tableforpopup.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/popup/tableforpopup.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t610.inf", 
		LAST);

	web_url("popActionsMenu.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/popup/popActionsMenu.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t611.inf", 
		LAST);

	web_url("calc_hours-normal.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/calc_hours-normal.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t612.inf", 
		LAST);

	web_url("arrow_black.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/arrow_black.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t613.inf", 
		LAST);

	web_url("btn_autoassign.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/btn_autoassign.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t614.inf", 
		LAST);

	web_url("spacer.gif_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/spacer.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t615.inf", 
		LAST);

	web_url("workloadingInspectionList.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t617.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_35", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t618.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("I18N.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/i18n/undefined/framework/includes/javascript/I18N.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t616.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_20", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t619.inf", 
		LAST);

	web_url("htmlElementUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/htmlElementUtil.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t620.inf", 
		LAST);

	web_url("frames.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/frames.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t621.inf", 
		LAST);

	web_url("HashTable.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/HashTable.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t622.inf", 
		LAST);

	web_url("errMsg.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/errMsg.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t623.inf", 
		LAST);

	web_url("MsgUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/MsgUtil.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t624.inf", 
		LAST);

	web_url("SyncUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/SyncUtil.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t626.inf", 
		LAST);

	web_url("refreshInspectionList.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/refreshInspectionList.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t627.inf", 
		LAST);

	web_url("ValidateUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/ValidateUtil.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t628.inf", 
		LAST);

	web_url("ElementUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/ElementUtil.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t629.inf", 
		LAST);

	web_url("ElementEvent.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/ElementEvent.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t630.inf", 
		LAST);

	web_url("GviewUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/GviewUtil.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t631.inf", 
		LAST);

	web_url("blank.jsp_36", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t632.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("AssignToAllUtil.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/AssignToAllUtil.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t633.inf", 
		LAST);

	web_url("autoAssignAndCalculateTime.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/autoAssignAndCalculateTime.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t634.inf", 
		LAST);

	web_url("PageRedirect.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/PageRedirect.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t635.inf", 
		LAST);

	web_url("formSubmit.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/formSubmit.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t636.inf", 
		LAST);

	web_url("DeptAndUserSelector.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/DeptAndUserSelector.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t637.inf", 
		LAST);

	web_url("reloadCalendarWorkload.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/reloadCalendarWorkload.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t638.inf", 
		LAST);

	web_url("restrictRole.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/workflow/restrictRole.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t639.inf", 
		LAST);

	web_url("scheduleInspection.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/scheduleInspection.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t640.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_21", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t625.inf", 
		LAST);

	web_submit_data("empty.jsp_24", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t641.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("session.do_37", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t642.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("inspectionDetail.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t643.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_21", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t644.inf", 
		LAST);

	web_url("checkRestrict.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/checkRestrict.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t645.inf", 
		LAST);

	web_url("ArrayExtContains.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/ArrayExtContains.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t646.inf", 
		LAST);

	web_url("displayInaca.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/displayInaca.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t647.inf", 
		LAST);

	web_url("requestor.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/requestor.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t648.inf", 
		LAST);

	web_url("InspectionDetailSwitcher.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/InspectionDetailSwitcher.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t649.inf", 
		LAST);

	web_url("nextAvailableTime.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/nextAvailableTime.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t650.inf", 
		LAST);

	web_url("inspectionListRequired.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/inspectionListRequired.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t651.inf", 
		LAST);

	web_url("ApplyToAll.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/javascript/manageSchedule/ApplyToAll.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t653.inf", 
		LAST);

	web_url("blank.jsp_37", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t654.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_22", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t652.inf", 
		LAST);

	web_submit_data("ajax.do_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t655.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("arrow_down_black.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/arrow_down_black.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t656.inf", 
		LAST);

	web_submit_data("empty.jsp_25", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t657.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("session.do_38", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t658.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_19_Record_Inspection_SelectIPendingInspection_ClickScheduleInspection",LR_AUTO);

	lr_start_transaction("OSCEOLA_TC3_20_Record_Inspection_ScheduleInspection_SelectDepartment");

	web_url("session.do_39", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t659.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_40", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t660.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_41", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t661.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_20_Record_Inspection_ScheduleInspection_SelectDepartment",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("OSCEOLA_TC3_21_Record_Inspection_ScheduleInspection_SelectUser");

	web_url("session.do_42", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t662.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_21_Record_Inspection_ScheduleInspection_SelectUser",LR_AUTO);

	lr_start_transaction("OSCEOLA_TC3_22_Record_Inspection_ScheduleInspection_SubmitInpsection");

	web_url("session.do_43", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t663.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("inspectionDetail.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?mode=pendingEditInit&module=Building", 
		"Snapshot=t664.inf", 
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
		"Name=sessionIdFromWindow", "Value=hPHbd7wS+fr6T5C2Uiaqf+uI", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=validate4Pending", ENDITEM, 
		"Name=value(contactNbr0)", "Value=", ENDITEM, 
		"Name=value(inspectionStatus0)", "Value=Scheduled", ENDITEM, 
		"Name=hiddenInspection0", "Value=true", ENDITEM, 
		"Name=value(gisArea)", "Value=", ENDITEM, 
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
		"Name=value(reqPhoneNumIDD0)", "Value=", ENDITEM, 
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
		"Snapshot=t665.inf", 
		LAST);

	web_url("blank.jsp_38", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building", 
		"Snapshot=t667.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_23", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building", 
		"Snapshot=t666.inf", 
		LAST);

	web_submit_data("empty.jsp_26", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t668.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("session.do_44", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building", 
		"Snapshot=t669.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("inspectionDetail.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?value(mode)=validateAndGetNextAvailableTime", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t670.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_MANAGEINSPECTIONLISTFORM=51c9e424a56fe25c00443c753e761423&value(FirstEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=pendingEditInit&module=Building&"
		"accelasubmitbuttonname=&itemName=&CurrentViewID=265&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=265&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(mode)=pendingEditSave&value(deptOfUserAll)=OSCEOLA%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(gaUserIDAll)=ADMIN&date(scheduledDateAll)=&value(scheduledStartTimeHourAll)=&value(scheduledStartTimeMinuteAll)=&value(scheduledStartTimeAMPMAll)=&value"
		"(scheduledEndTimeHourAll)=&value(scheduledEndTimeMinuteAll)=&value(scheduledEndTimeAMPMAll)=&ac360_list_id=on0&value(pendingInspScheduleOrder%2C0)=&value(inspectionId%2C0)=23573652&value(pendingCapID%2C0)=REC18-00000-04PBH&value(inspectionTypeId%2C0)=84027953&value(calendarIds%2C0)=6678&value(requiredInspection%2C0)=N&value(inspectionType%2C0)=Residential%201235%3A%20Gas%20-%20Tanks%2FBuried%20%20Piping&value(actualUnits%2C0)=1.0&value(inspectionStatus0)=Scheduled&value(requestCommentText0)=&value"
		"(gisArea0)=&value(reqPhoneNumIDD0)=&value(reqPhoneNum0)=&value(displayinaca0)=Y&value(latitude0)=&value(longitude0)=&value(unitNBR0)=&value(restrictRole0)=&value(activityModel*requestorFname0)=&value(activityModel*requestorMname0)=&value(activityModel*requestorLname0)=&value(scheduledStartTimeHourHidden%2C0)=&value(scheduledStartTimeMinuteHidden%2C0)=&value(scheduledStartTimeAMPMHidden%2C0)=&value(scheduledEndTimeHourHidden%2C0)=&value(scheduledEndTimeMinuteHidden%2C0)=&value"
		"(scheduledEndTimeAMPMHidden%2C0)=&value(activityModel*contactFname0)=&value(activityModel*contactMname0)=&value(activityModel*contactLname0)=&value(contactNbr0)=&value(contactPhoneNumIDD0)=&value(contactPhoneNum0)=&value(estimatedTimeHour0)=&value(estimatedTimeMinute0)=&value(estimatedTimeAMPM0)=&value(estimatedEndTimeHour0)=&value(estimatedEndTimeMinute0)=&value(estimatedEndTimeAMPM0)=&date(activityModel*desiredDate0)=&value(desiredTimeHour0)=&value(desiredTimeMinute0)=&value(desiredTimeAMPM0)=&"
		"value(isRestrictView4ACA0)=off&value(capId)=&value(groupCode)=&value(deptOfUser%2C0)=OSCEOLA%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(initInspector%2C0)=&value(gaUserID%2C0)=ADMIN&date(scheduleDate%2C0)=08%2F29%2F2018&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&pageSizeR=9999&", 
		LAST);

	web_url("viewValidationResultMsg.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/viewValidationResultMsg.do?mode=viewResultMsg&from=confirm&indexCount=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t671.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("bg_border_popview.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/img/bg_border_popview.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/popUp.css", 
		"Snapshot=t672.inf", 
		LAST);

	web_url("bg_border_popview_L_y.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/img/bg_border_popview_L_y.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/popUp.css", 
		"Snapshot=t673.inf", 
		LAST);

	web_url("bg_border_popview_R_y.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/img/bg_border_popview_R_y.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/popUp.css", 
		"Snapshot=t674.inf", 
		LAST);

	web_url("btn_close.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/img/btn_close.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/pendingInspectionEditMain.jsp?module=Building", 
		"Snapshot=t675.inf", 
		LAST);

	web_url("bg_border_popview_B_x.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/img/bg_border_popview_B_x.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/popUp.css", 
		"Snapshot=t676.inf", 
		LAST);

	web_url("AAHELP.js_23", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/viewValidationResultMsg.do?mode=viewResultMsg&from=confirm&indexCount=0", 
		"Snapshot=t677.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_24", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/viewValidationResultMsg.do?mode=viewResultMsg&from=confirm&indexCount=0", 
		"Snapshot=t678.inf", 
		LAST);

	web_submit_data("empty.jsp_27", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t679.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("OSCEOLA_TC3_22_Record_Inspection_ScheduleInspection_SubmitInpsection",LR_AUTO);

	lr_start_transaction("OSCEOLA_TC3_23_Record_Inspection_ScheduleInspection_ClickOK");

	web_url("session.do_45", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionDetail.do?module=Building", 
		"Snapshot=t680.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("workloadingInspectionList.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditSave&operateType=refresh&convertToJson=true", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t681.inf", 
		"Mode=HTTP", 
		"Body=TRANSACTION_TOKEN_KEY_FOR_MANAGEINSPECTIONLISTFORM=51c9e424a56fe25c00443c753e761423&value(FirstEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Finspection%2FworkloadingInspectionList.do%3Fmode%3DpendingEditInit%26removeEmseMsg%3Dtrue%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=pendingEditInit&module=Building&"
		"accelasubmitbuttonname=&itemName=&CurrentViewID=265&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=265&sessionIdFromWindow=hPHbd7wS%2Bfr6T5C2Uiaqf%2BuI&listID=&printType=&checkBoxValue=&value(mode)=pendingEditSave&value(deptOfUserAll)=OSCEOLA%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(gaUserIDAll)=ADMIN&date(scheduledDateAll)=&value(scheduledStartTimeHourAll)=&value(scheduledStartTimeMinuteAll)=&value(scheduledStartTimeAMPMAll)=&value"
		"(scheduledEndTimeHourAll)=&value(scheduledEndTimeMinuteAll)=&value(scheduledEndTimeAMPMAll)=&ac360_list_id=on0&value(pendingInspScheduleOrder%2C0)=&value(inspectionId%2C0)=23573652&value(pendingCapID%2C0)=REC18-00000-04PBH&value(inspectionTypeId%2C0)=84027953&value(calendarIds%2C0)=6678&value(requiredInspection%2C0)=N&value(inspectionType%2C0)=Residential%201235%3A%20Gas%20-%20Tanks%2FBuried%20%20Piping&value(actualUnits%2C0)=1&value(inspectionStatus0)=Scheduled&value(requestCommentText0)=&value"
		"(gisArea0)=&value(reqPhoneNumIDD0)=&value(reqPhoneNum0)=&value(displayinaca0)=Y&value(latitude0)=&value(longitude0)=&value(unitNBR0)=&value(restrictRole0)=&value(activityModel*requestorFname0)=&value(activityModel*requestorMname0)=&value(activityModel*requestorLname0)=&value(scheduledStartTimeHourHidden%2C0)=&value(scheduledStartTimeMinuteHidden%2C0)=&value(scheduledStartTimeAMPMHidden%2C0)=&value(scheduledEndTimeHourHidden%2C0)=&value(scheduledEndTimeMinuteHidden%2C0)=&value"
		"(scheduledEndTimeAMPMHidden%2C0)=&value(activityModel*contactFname0)=&value(activityModel*contactMname0)=&value(activityModel*contactLname0)=&value(contactNbr0)=&value(contactPhoneNumIDD0)=&value(contactPhoneNum0)=&value(estimatedTimeHour0)=&value(estimatedTimeMinute0)=&value(estimatedTimeAMPM0)=&value(estimatedEndTimeHour0)=&value(estimatedEndTimeMinute0)=&value(estimatedEndTimeAMPM0)=&date(activityModel*desiredDate0)=&value(desiredTimeHour0)=&value(desiredTimeMinute0)=&value(desiredTimeAMPM0)=&"
		"value(isRestrictView4ACA0)=off&value(capId)=&value(groupCode)=&value(deptOfUser%2C0)=OSCEOLA%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&value(initInspector%2C0)=&value(gaUserID%2C0)=ADMIN&date(scheduleDate%2C0)=08%2F29%2F2018&value(scheduledStartTimeHour%2C0)=&value(scheduledStartTimeMinute%2C0)=&value(scheduledStartTimeAMPM%2C0)=&value(scheduledEndTimeHour%2C0)=&value(scheduledEndTimeMinute%2C0)=&value(scheduledEndTimeAMPM%2C0)=&pageSizeR=9999&", 
		LAST);

	web_url("EMSEMessage.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t682.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("AAHELP.js_24", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Building", 
		"Snapshot=t683.inf", 
		LAST);

	web_url("pa.min.js_25", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Building", 
		"Snapshot=t684.inf", 
		LAST);

	web_submit_data("empty.jsp_28", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Building", 
		"Snapshot=t685.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("blank.jsp_39", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/emse/EMSEMessage.do?module=Building", 
		"Snapshot=t686.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("calendarInspectionWorkload.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/29/2018&hour=&ap=&module=Building&dept=OSCEOLA%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&userId=ADMIN&capId=REC18-00000-04PBH&inspectionId=23573652", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/workloadingInspectionList.do?mode=pendingEditInit&removeEmseMsg=true&module=Building", 
		"Snapshot=t687.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("workload.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/taglib/workload/workload.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/29/2018&hour=&ap=&module=Building&dept=OSCEOLA%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&userId=ADMIN&capId=REC18-00000-04PBH&inspectionId=23573652", 
		"Snapshot=t688.inf", 
		LAST);

	web_url("workload.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/taglib/workload/workload.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/29/2018&hour=&ap=&module=Building&dept=OSCEOLA%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&userId=ADMIN&capId=REC18-00000-04PBH&inspectionId=23573652", 
		"Snapshot=t689.inf", 
		LAST);

	web_url("Interval.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/taglib/workload/Interval.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/29/2018&hour=&ap=&module=Building&dept=OSCEOLA%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&userId=ADMIN&capId=REC18-00000-04PBH&inspectionId=23573652", 
		"Snapshot=t690.inf", 
		LAST);

	web_url("UnionInterval.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/taglib/workload/UnionInterval.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/calendarInspectionWorkload.do?mode=workload&act=pendingAndSchedule&current=08/29/2018&hour=&ap=&module=Building&dept=OSCEOLA%2FADMIN%2FNA%2FNA%2FNA%2FNA%2FNA&userId=ADMIN&capId=REC18-00000-04PBH&inspectionId=23573652", 
		"Snapshot=t691.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("OSCEOLA_TC3_23_Record_Inspection_ScheduleInspection_ClickOK",LR_AUTO);

	lr_think_time(14);

	web_url("session.do_46", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t692.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("OSCEOLA_SignOut");

	web_url("session.do_47", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.b9432&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/inspection/inspectionListCapSpecific.do?mode=list&module=Building", 
		"Snapshot=t693.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("signoff.do", 
		"URL=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t694.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("signout.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/security/signout.do", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t695.inf", 
		LAST);

	web_submit_data("portal", 
		"Action=https://av-pt-ferrari.accela.com/jetspeed/portal?action=JClearCookie", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t696.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("logoutAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=OSCEOLA&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t697.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("hostSignon.do_4", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=OSCEOLA&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Snapshot=t698.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("host-signon.css_2", 
		"URL=https://av-pt-ferrari.accela.com/security/css/host-signon.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Snapshot=t699.inf", 
		LAST);

	web_url("spacer.gif_5", 
		"URL=https://av-pt-ferrari.accela.com/security/images/spacer.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Snapshot=t700.inf", 
		LAST);

	web_url("hostSignon.do_5", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Snapshot=t701.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("spacer.gif_6", 
		"URL=https://av-pt-ferrari.accela.com/security/images/spacer.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t707.inf", 
		LAST);

	web_url("header.htm_2", 
		"URL=https://www.accela.com/ext/web/aa/header.htm", 
		"Resource=0", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Snapshot=t708.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("login.css_2", 
		"URL=https://av-pt-ferrari.accela.com/security/includes/login.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t702.inf", 
		LAST);

	web_url("sso.js_2", 
		"URL=https://av-pt-ferrari.accela.com/security/javascript/sso.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t703.inf", 
		LAST);

	web_url("accela_logo_v2.jpg_2", 
		"URL=https://av-pt-ferrari.accela.com/security/images/accela_logo_v2.jpg", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t704.inf", 
		LAST);

	web_url("hook.png", 
		"URL=https://av-pt-ferrari.accela.com/security/images/hook.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t705.inf", 
		LAST);

	web_url("login-bar.gif_2", 
		"URL=https://av-pt-ferrari.accela.com/security/images/login-bar.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t706.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("OSCEOLA_SignOut",LR_AUTO);

	return 0;
}