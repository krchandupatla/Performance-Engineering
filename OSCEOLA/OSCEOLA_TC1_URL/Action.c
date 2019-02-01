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

	web_url("hostSignon.do", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?successURL=https%3A%2F%2Fav-pt-ferrari.accela.com%2Fportlets%2Fspa%2Fdashboard.do&SignOnModule=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

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
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("memoryLeakPatch.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/memoryLeakPatch.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?successUrl=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("ac360.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ac360.js", 
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

	web_url("sso.js", 
		"URL=https://av-pt-ferrari.accela.com/security/javascript/sso.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("dojo.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/dojo.js", 
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

	web_url("client_model_v5.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t21.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("json.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/json.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("AdapterRegistry.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/AdapterRegistry.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("aalogin_header.gif", 
		"URL=https://www.accela.com/ext/web/aa/assets/aalogin_header.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.accela.com/ext/web/aa/header.htm", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("spacer.gif_3", 
		"URL=https://www.accela.com/ext/web/aa/assets/spacer.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.accela.com/ext/web/aa/header.htm", 
		"Snapshot=t26.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("favicon.ico", 
		"URL=https://av-pt-ferrari.accela.com/favicon.ico", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t27.inf", 
		LAST);

	lr_think_time(27);

	lr_start_transaction("OSCEOLA_Login");

	web_custom_request("loginAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/loginAction.do?requestType=checkWebSSOAdapter&servProvCode=OSCEOLA", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t28.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_submit_data("hostSignon.do_3", 
		"Action=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true", 
		"Snapshot=t29.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=action", "Value=signon", ENDITEM, 
		"Name=successUrl", "Value=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", ENDITEM, 
		"Name=cookieUserName", "Value=", ENDITEM, 
		"Name=cookieAgencyName", "Value=", ENDITEM, 
		"Name=requestToken", "Value=1712d7111d92", ENDITEM, 
		"Name=requestLanguageToken", "Value=182d23afbbd", ENDITEM, 
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
		"Snapshot=t30.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("auth.do", 
		"URL=https://av-pt-ferrari.accela.com/security/auth.do?signOffScript=https://av-pt-ferrari.accela.com/portlets/security/signout.do&switchAgencyScript=https://av-pt-ferrari.accela.com/portlets/commons/sso/blank.jsp&CSRF_REQ_PARAM=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("dashboard.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t32.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("bootstrap.min.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/bootstrap/bootstrap.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("app.min.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("ng-sortable.min.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/ng-sortable.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("modernizr.2.8.3.custom.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/lib/modernizr.2.8.3.custom.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("zhy8lto.js", 
		"URL=https://use.typekit.net/zhy8lto.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("chrome-iframe-issue-fix.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/chrome-iframe-issue-fix.js", 
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

	web_url("angular.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/angular/angular.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("angular-ui-router.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/angular-ui-router/release/angular-ui-router.min.js", 
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

	web_url("stacktrace.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/stacktrace-js/dist/stacktrace.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("angular-touch.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/angular-touch/angular-touch.min.js", 
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

	web_url("smart-table.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/angular-smart-table/dist/smart-table.min.js", 
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

	web_url("ng-csv.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/ng-csv/build/ng-csv.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("ct-ui-router-extras.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/ui-router-extras/release/ct-ui-router-extras.js", 
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

	web_url("angular-deferred-bootstrap.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/angular-deferred-bootstrap/angular-deferred-bootstrap.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("angular-locale_en-us.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/bower_components/angular-i18n/angular-locale_en-us.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t54.inf", 
		LAST);

	web_url("config.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/config.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("accela.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/accela.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("i18n-keys.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/data/i18n-keys.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("module.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/module.js", 
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

	web_url("stacktrace-wrapper.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/stacktrace-wrapper.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t60.inf", 
		LAST);

	web_url("autofocus.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/autofocus.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("on-load.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/on-load.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("click-outside.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/click-outside.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("content-limit-to.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/content-limit-to.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("ng-repeat-finish.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/ng-repeat-finish.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t65.inf", 
		LAST);

	web_url("select-on-focus.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/select-on-focus.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t66.inf", 
		LAST);

	web_url("styled-checkbox.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/styled-checkbox.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t67.inf", 
		LAST);

	web_url("table-height-sync.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/table-height-sync.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t68.inf", 
		LAST);

	web_url("typeahead-filter.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/directives/typeahead-filter.js", 
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

	web_url("launchpad-page.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/entities/launchpad-page.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t71.inf", 
		LAST);

	web_url("user-profile.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/entities/user-profile.js", 
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

	web_url("custom-date-filter.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/filters/custom-date-filter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t75.inf", 
		LAST);

	web_url("highlight.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/filters/highlight.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t76.inf", 
		LAST);

	web_url("translate-filter.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/filters/translate-filter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t77.inf", 
		LAST);

	web_url("overflow.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/filters/overflow.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t78.inf", 
		LAST);

	web_url("reverse.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/filters/reverse.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t79.inf", 
		LAST);

	web_url("dashboard-model.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/models/dashboard-model.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t80.inf", 
		LAST);

	web_url("user-model.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/models/user-model.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t81.inf", 
		LAST);

	web_url("http-interceptor.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/http-interceptor.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t82.inf", 
		LAST);

	web_url("agency-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/agency-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t83.inf", 
		LAST);

	web_url("data-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/data-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t84.inf", 
		LAST);

	web_url("i18n-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/i18n-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t85.inf", 
		LAST);

	web_url("logging-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/logging-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t86.inf", 
		LAST);

	web_url("modal-dialog-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/modal-dialog-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t87.inf", 
		LAST);

	web_url("overlay-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/overlay-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t88.inf", 
		LAST);

	web_url("safe-apply.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/safe-apply.js", 
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

	web_url("slideout-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/services/slideout-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t91.inf", 
		LAST);

	web_url("keepalive-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/controllers/keepalive-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t92.inf", 
		LAST);

	web_url("automation-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/automation-controller.js", 
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

	web_url("module.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/module.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t95.inf", 
		LAST);

	web_url("classic-admin-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/admin/classic-admin-controller.js", 
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

	web_url("space-portlet-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/controllers/space-portlet-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t98.inf", 
		LAST);

	web_url("main-menu-flyout.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/directives/main-menu-flyout.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t99.inf", 
		LAST);

	web_url("space-context-menu.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/directives/space-context-menu.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t100.inf", 
		LAST);

	web_url("space-list.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/directives/space-list.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t101.inf", 
		LAST);

	web_url("space-manager.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/services/space-manager.js", 
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

	web_url("space-icon-factory.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/services/space-icon-factory.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t105.inf", 
		LAST);

	web_url("portlet-session-state.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/services/portlet-session-state.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t106.inf", 
		LAST);

	web_url("server-session-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/services/server-session-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t107.inf", 
		LAST);

	web_url("agency-switch.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/directives/agency-switch.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t108.inf", 
		LAST);

	web_url("module.js_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/module.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t109.inf", 
		LAST);

	web_url("launchpad-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/launchpad/controllers/launchpad-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t110.inf", 
		LAST);

	web_url("favorite-pages-toggle.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/launchpad/directives/favorite-pages-toggle.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t111.inf", 
		LAST);

	web_url("launchpad-manager.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/launchpad/services/launchpad-manager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("task-card-condition.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/task/directives/task-card-condition.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t113.inf", 
		LAST);

	web_url("task-filter.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/task/directives/task-filter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t114.inf", 
		LAST);

	web_url("task-card-menu.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/task/directives/task-card-menu.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t115.inf", 
		LAST);

	web_url("task-dashboard-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/task/controllers/task-dashboard-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t116.inf", 
		LAST);

	web_url("task-flyout-toggle.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/task/directives/task-flyout-toggle.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t117.inf", 
		LAST);

	web_url("task-manager.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/dashboard/task/services/task-manager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t118.inf", 
		LAST);

	web_url("module.js_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/module.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t119.inf", 
		LAST);

	web_url("globalsearch-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/controllers/globalsearch-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t120.inf", 
		LAST);

	web_url("asset-pagination-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/controllers/asset-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t121.inf", 
		LAST);

	web_url("contact-pagination-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/controllers/contact-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t122.inf", 
		LAST);

	web_url("location-pagination-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/controllers/location-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t123.inf", 
		LAST);

	web_url("document-pagination-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/controllers/document-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t124.inf", 
		LAST);

	web_url("parcel-pagination-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/controllers/parcel-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t125.inf", 
		LAST);

	web_url("professional-pagination-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/controllers/professional-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t126.inf", 
		LAST);

	web_url("record-pagination-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/controllers/record-pagination-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t127.inf", 
		LAST);

	web_url("alt-hilite.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/directives/alt-hilite.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t128.inf", 
		LAST);

	web_url("globalsearch-service.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/globalsearch/services/globalsearch-service.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t129.inf", 
		LAST);

	web_url("RoboHelp_CSH.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/lib/RoboHelp_CSH.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t130.inf", 
		LAST);

	web_url("portlet-iframe-controller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/automation/portlet/portlet-iframe-controller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t131.inf", 
		LAST);

	web_url("dirPagination.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/lib/custom/dirPagination.js", 
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

	web_url("ng-sortable.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/lib/custom/ng-sortable.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t134.inf", 
		LAST);

	web_url("showModalDialog.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/lib/showModalDialog.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t135.inf", 
		LAST);

	web_url("popover.tpl.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/templates/popover.tpl.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t136.inf", 
		LAST);

	web_url("compiled.tpl.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/templates/compiled.tpl.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("keepalive.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/core/controllers/keepalive.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t139.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(7);

	web_url("pa.min.js", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t104.inf", 
		LAST);

	web_url("ajax-loader.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/reskin/ajax-loader.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t138.inf", 
		LAST);

	web_url("l_2", 
		"URL=https://use.typekit.net/af/7d485b/00000000000000003b9ad1b1/27/l?subset_id=2&fvd=n7&v=3", 
		"Resource=1", 
		"RecContentType=application/font-woff2", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t140.inf", 
		LAST);

	web_custom_request("text.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t141.inf", 
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

	web_url("l_3", 
		"URL=https://use.typekit.net/af/347aea/00000000000000003b9ad1b2/27/l?subset_id=2&fvd=i7&v=3", 
		"Resource=1", 
		"RecContentType=application/font-woff2", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t142.inf", 
		LAST);

	web_url("switchAgency.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/switchAgency.do?mode=init", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t143.inf", 
		LAST);

	web_url("l_4", 
		"URL=https://use.typekit.net/af/c9cde8/00000000000000003b9ad1b9/27/l?subset_id=2&fvd=n4&v=3", 
		"Resource=1", 
		"RecContentType=application/font-woff2", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t144.inf", 
		LAST);

	web_url("switchAgency.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/switchAgency.do?mode=list", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t145.inf", 
		LAST);

	web_url("l_5", 
		"URL=https://use.typekit.net/af/4ba64f/00000000000000003b9ad1ba/27/l?subset_id=2&fvd=i4&v=3", 
		"Resource=1", 
		"RecContentType=application/font-woff2", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t146.inf", 
		LAST);

	web_url("p.gif", 
		"URL=https://p.typekit.net/p.gif?s=1&k=zhy8lto&ht=tk&h=av-pt-ferrari.accela.com&f=139.140.175.176&a=621408&js=1.19.2&app=typekit&e=js&_=1535570554873", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t147.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("userinfo.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/user/userinfo.do?mode=userInfo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t148.inf", 
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
		"Snapshot=t149.inf", 
		LAST);

	web_url("icon-space-pin.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/menubar/icon-space-pin.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t150.inf", 
		LAST);

	web_url("icon-space-pin-dark.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/menubar/icon-space-pin-dark.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
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

	web_url("icon-search-inactive.svg", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/menubar/icon-search-inactive.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t154.inf", 
		LAST);

	web_url("icon-alert.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/icon-alert.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t155.inf", 
		LAST);

	web_url("icon-settings.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/icon-settings.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t156.inf", 
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

	web_url("no-tasks.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/task/no-tasks.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t167.inf", 
		LAST);

	web_url("userSecurityProfile.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/userSecurityProfile.do?mode=getSwitchLinkPermissionByDefaultModule", 
		"Resource=1", 
		"RecContentType=application/x-json", 
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

	web_url("recentlyViewed.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/recentlyViewed.do?mode=getRecentlyViewedItems", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t174.inf", 
		LAST);

	web_url("getTaskFilterStatusList.json", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/mock-api/getTaskFilterStatusList.json", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t175.inf", 
		LAST);

	web_url("dashboardTaskQuickQueries.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboardTaskQuickQueries.do", 
		"Resource=1", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t176.inf", 
		LAST);

	web_url("dashboardTaskCards.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/dashboardTaskCards.do?mode=multiAgencyTaskCounts&quickQueryId=", 
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

	lr_think_time(11);

	lr_start_transaction("OSCEOLA_TC1_01_Click_Records");

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

	web_url("icon-star.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/launchpad/icon-star.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t188.inf", 
		LAST);

	web_url("session.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=null", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.057e1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("icon-record.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/space-icons/icon-record.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t191.inf", 
		LAST);

	web_url("icon-space-context-menu.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/menubar/icon-space-context-menu.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/app.min.css", 
		"Snapshot=t192.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("myCAPDetailPortlet.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t193.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("portlet-iframe-content.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/portlet-iframe-content.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t194.inf", 
		LAST);

	web_url("blank.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t195.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("blank.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ac360base.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ac360base.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t197.inf", 
		LAST);

	web_url("blank.jsp_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t198.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("capSearch.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t200.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("jquery-1.11.0.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/jquery/jquery-1.11.0.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t199.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("hashMap.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/hashMap.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t201.inf", 
		LAST);

	web_url("Ac360ToolManager.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/Ac360ToolManager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t202.inf", 
		LAST);

	web_url("windowCloseOverride.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/lib/windowCloseOverride.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t205.inf", 
		LAST);

	web_url("widget.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/widget/widget.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t206.inf", 
		LAST);

	web_url("ac360InputBoxHotKey.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ac360InputBoxHotKey.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t207.inf", 
		LAST);

	web_url("styles.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t208.inf", 
		LAST);

	web_url("popup.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/popup/popup.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t209.inf", 
		LAST);

	web_url("bootstrap.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/bootstrap/bootstrap.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t210.inf", 
		LAST);

	web_url("re-skin-v2.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t211.inf", 
		LAST);

	web_url("opos.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/opos.js", 
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

	web_url("masked.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/masked.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t214.inf", 
		LAST);

	web_url("menubar.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/menubar.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t215.inf", 
		LAST);

	web_url("AAHELP.js", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t216.inf", 
		LAST);

	web_url("watermark.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/watermark.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t217.inf", 
		LAST);

	web_url("jquery.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ext-2.0.2/adapter/jquery/jquery.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t218.inf", 
		LAST);

	web_url("relatedCAPsPopupBox.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/relatedCAPsPopupBox.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t219.inf", 
		LAST);

	web_url("permitPlus.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/permitPlus.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t220.inf", 
		LAST);

	web_url("dojo.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/dojo.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t221.inf", 
		LAST);

	web_url("dojo412.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/datapicker/treePicker/js/dojo412.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t222.inf", 
		LAST);

	web_url("layoutPublic.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/layoutPublic.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t223.inf", 
		LAST);

	web_url("Previous_Button_Grayed_Out.jpg", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/Previous_Button_Grayed_Out.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t224.inf", 
		LAST);

	web_url("Next_Button_Default.jpg", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/Next_Button_Default.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t225.inf", 
		LAST);

	web_url("print-styles.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/print-styles.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t227.inf", 
		LAST);

	web_url("blank.jsp_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t229.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("ac360ScrollBar.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ac360ScrollBar.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t203.inf", 
		LAST);

	web_url("ac360ui.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ac360ui.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/commons/cap/myCAPDetailPortlet.jsp?module=-select-", 
		"Snapshot=t204.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("popUp.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/popUp.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t226.inf", 
		LAST);

	web_url("pa.min.js_2", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t228.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("refresh.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/reskin/refresh.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v2.css", 
		"Snapshot=t230.inf", 
		LAST);

	web_url("Drop_Menu_Button_Default.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/reskin/Drop_Menu_Button_Default.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v2.css", 
		"Snapshot=t231.inf", 
		LAST);

	web_url("Tree.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/Tree.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t232.inf", 
		LAST);

	web_url("fx.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/fx.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t233.inf", 
		LAST);

	web_url("Toggler.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/fx/Toggler.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t234.inf", 
		LAST);

	web_url("DeferredList.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/DeferredList.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t235.inf", 
		LAST);

	web_url("_Widget.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Widget.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t236.inf", 
		LAST);

	web_url("_base.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t237.inf", 
		LAST);

	web_url("focus.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/focus.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t238.inf", 
		LAST);

	web_url("manager.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/manager.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t239.inf", 
		LAST);

	web_url("place.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/place.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t240.inf", 
		LAST);

	web_url("AdapterRegistry.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/AdapterRegistry.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t241.inf", 
		LAST);

	web_url("popup.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/popup.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t242.inf", 
		LAST);

	web_url("window.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/window.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t243.inf", 
		LAST);

	web_url("scroll.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/scroll.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t244.inf", 
		LAST);

	web_url("sniff.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/sniff.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t245.inf", 
		LAST);

	web_url("typematic.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/typematic.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t246.inf", 
		LAST);

	web_url("wai.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_base/wai.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t247.inf", 
		LAST);

	web_url("_Templated.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Templated.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t248.inf", 
		LAST);

	web_url("string.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/string.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t249.inf", 
		LAST);

	web_url("parser.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/parser.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t250.inf", 
		LAST);

	web_url("stamp.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/date/stamp.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t251.inf", 
		LAST);

	web_url("cache.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/cache.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t252.inf", 
		LAST);

	web_url("_Container.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Container.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t253.inf", 
		LAST);

	web_url("_Contained.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/_Contained.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t254.inf", 
		LAST);

	web_url("cookie.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/cookie.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t255.inf", 
		LAST);

	web_url("regexp.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/regexp.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t256.inf", 
		LAST);

	web_url("TreeStoreModel.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/tree/TreeStoreModel.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t257.inf", 
		LAST);

	web_url("ForestStoreModel.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dijit/tree/ForestStoreModel.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t258.inf", 
		LAST);

	web_url("QueryReadStore.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojox/data/QueryReadStore.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t259.inf", 
		LAST);

	web_url("sorter.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojo/data/util/sorter.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t260.inf", 
		LAST);

	web_url("ArrayList.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojox/collections/ArrayList.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t261.inf", 
		LAST);

	web_url("_base.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo1.4.3/dojox/collections/_base.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t262.inf", 
		LAST);

	web_url("Map.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/Map.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t263.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_submit_data("empty.jsp", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t264.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_concurrent_start(NULL);

	web_url("table-footer-left-bottom-200-12.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/table-footer-left-bottom-200-12.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t265.inf", 
		LAST);

	web_url("table-footer-right-bottom-400-12.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/table-footer-right-bottom-400-12.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t266.inf", 
		LAST);

	web_url("table-header-right-top-400-8.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/table-header-right-top-400-8.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t267.inf", 
		LAST);

	web_url("table-header-left-top-200-8.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/table-header-left-top-200-8.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t268.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("OSCEOLA_TC1_01_Click_Records",LR_AUTO);

	lr_think_time(11);

	lr_start_transaction("OSCEOLA_TC1_02_Click_Search");

	web_url("session.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.057e1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t269.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("capSearch.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?searchBy=ByCondition&height=270&mode=init&module=Building&cleanCapId=Y&isGeneralCAP=Y&supportMulAgencySearch=Y", 
		"Snapshot=t270.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_2", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t271.inf", 
		LAST);

	web_url("selectDate.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/selectDate.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t272.inf", 
		LAST);

	web_url("conditionselect.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/condition/conditionselect.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t273.inf", 
		LAST);

	web_url("soundex.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/soundex.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t274.inf", 
		LAST);

	web_url("blank.jsp_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t276.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_3", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t275.inf", 
		LAST);

	web_url("blank.jsp_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t277.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("calendar_medium.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/reskin/calendar_medium.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v2.css", 
		"Snapshot=t278.inf", 
		LAST);

	web_url("ArrayList.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/collections/ArrayList.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t279.inf", 
		LAST);

	web_url("Collections.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/collections/Collections.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t280.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_submit_data("empty.jsp_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t281.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("ajax.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t282.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("ajax.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getBizDomainByName&domainName=DATE_THRESHOLD", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t283.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("OSCEOLA_TC1_02_Click_Search",LR_AUTO);

	lr_start_transaction("OSCEOLA_TC1_03_Search_Record");

	web_url("favicon.ico_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/favicon.ico", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t284.inf", 
		LAST);

	web_url("session.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.057e1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t285.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("capSearch.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?mode=search&isFromSearch=true&isSearchButton=true&module=Building&isGeneralCAP=Y", 
		"Snapshot=t286.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=TRANSACTION_TOKEN_KEY_FOR_CAPSEARCHFORM", "Value=d7ff3a98e7081388e388bc9626ff89a3", ENDITEM, 
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
		"Name=sessionIdFromWindow", "Value=IsXqpr6+xXrAz5yvahzb9bDB", ENDITEM, 
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
		"Name=value(srLevel)", "Value=", ENDITEM, 
		"Name=value(capGroupIndex)", "Value=", ENDITEM, 
		"Name=value(capTypeModel*group)", "Value=", ENDITEM, 
		"Name=value(capTypeModel*type)", "Value=", ENDITEM, 
		"Name=value(capTypeModel*subType)", "Value=", ENDITEM, 
		"Name=value(capTypeModel*category)", "Value=", ENDITEM, 
		"Name=value(capTypeModel)", "Value=null/null/null/null", ENDITEM, 
		"Name=value(capContactModel*userID)", "Value=", ENDITEM, 
		"Name=value(capContactModel*internalUserFlag)", "Value=", ENDITEM, 
		"Name=value(setDetailsModel*setMemberStatus)", "Value=", ENDITEM, 
		"Name=value(setDetailsModel*setMemberStatusDate)", "Value=", ENDITEM, 
		"Name=date(capModel*fileDate)", "Value=08/29/2016", ENDITEM, 
		"Name=date(capModel*endFileDate)", "Value=08/29/2018", ENDITEM, 
		"Name=value(capModel*altID)", "Value=A18-008541", ENDITEM, 
		"Name=value(capModel*specialText)", "Value=", ENDITEM, 
		"Name=value(capModel*capStatus)", "Value=", ENDITEM, 
		"Name=value(addressModel*houseNumberRangeStart)", "Value=", ENDITEM, 
		"Name=value(addressModel*houseNumberRangeEnd)", "Value=", ENDITEM, 
		"Name=value(search_range_from_addressModel*houseNumberStart)", "Value=", ENDITEM, 
		"Name=value(search_range_to_addressModel*houseNumberStart)", "Value=", ENDITEM, 
		"Name=value(search_range_addressModel*houseNumberStart)", "Value=", ENDITEM, 
		"Name=value(addressModel*streetDirection)", "Value=", ENDITEM, 
		"Name=value(addressModel*streetName)", "Value=", ENDITEM, 
		"Name=value(partModel*locationSeq)", "Value=", ENDITEM, 
		"Name=value(capContactModel*contactType)", "Value=", ENDITEM, 
		"Name=value(capContactModel*businessName)", "Value=", ENDITEM, 
		"Name=value(capModel*createdByACA)", "Value=", ENDITEM, 
		"Name=value(capContactModel*firstName)", "Value=", ENDITEM, 
		"Name=value(capContactModel*lastName)", "Value=", ENDITEM, 
		"Name=value(capContactModel*email)", "Value=", ENDITEM, 
		"Name=value(taskItemModel*taskDescription)", "Value=", ENDITEM, 
		"Name=value(taskItemModel*disposition)", "Value=", ENDITEM, 
		"Name=value(appSpecInfoModel*checkboxDesc)", "Value=", ENDITEM, 
		"Name=value(appSpecInfoModel*checklistComment)", "Value=", ENDITEM, 
		"Name=value(licenseProfessionalModel*businessLicense)", "Value=", ENDITEM, 
		"Name=value(licenseProfessionalModel*licensenbr)", "Value=", ENDITEM, 
		"Name=value(licenseProfessionalModel*businessName)", "Value=", ENDITEM, 
		"Name=value(taskSpecInfoModel*checkboxDesc)", "Value=", ENDITEM, 
		"Name=value(capParcelModel*parcelNumber)", "Value=", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_3", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t287.inf", 
		LAST);

	web_url("Next_Button_Grayed_Out.jpg", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/Next_Button_Grayed_Out.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t288.inf", 
		LAST);

	web_url("blank.jsp_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t290.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_4", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t289.inf", 
		LAST);

	web_submit_data("empty.jsp_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t291.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("OSCEOLA_TC1_03_Search_Record",LR_AUTO);

	lr_start_transaction("OSCEOLA_TC1_04_Record_Details");

	web_url("session.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.057e1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t292.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("CapTabSummary.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t293.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("re-skin-v3.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v3.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t294.inf", 
		LAST);

	web_url("AAHELP.js_4", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t295.inf", 
		LAST);

	web_url("portletInterface.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/portletInterface.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t296.inf", 
		LAST);

	web_url("textMessageResources.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/textMessageResources.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t297.inf", 
		LAST);

	web_url("expressionPageProcessor.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionPageProcessor.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t298.inf", 
		LAST);

	web_url("expression.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expression.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t299.inf", 
		LAST);

	web_url("appSpecInfoTableFilter.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/CSS/sky_blue/appSpecInfoTableFilter.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t300.inf", 
		LAST);

	web_url("style.css", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/CSS/sky_blue/style.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t301.inf", 
		LAST);

	web_url("expressionASI.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionASI.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t302.inf", 
		LAST);

	web_url("expressionConstants.jsp", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionConstants.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t303.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("expressionASIT.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionASIT.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t304.inf", 
		LAST);

	web_url("expressionGForm.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionGForm.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t305.inf", 
		LAST);

	web_url("expressionGTable.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionGTable.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t306.inf", 
		LAST);

	web_url("expressionLP.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionLP.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t307.inf", 
		LAST);

	web_url("expressionContact.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionContact.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t308.inf", 
		LAST);

	web_url("expressionWorkflow.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionWorkflow.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t309.inf", 
		LAST);

	web_url("expressionAddress.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAddress.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t310.inf", 
		LAST);

	web_url("expressionContactAddress.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionContactAddress.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t311.inf", 
		LAST);

	web_url("expressionAsset.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAsset.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t312.inf", 
		LAST);

	web_url("expressionAssetAttrTable.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAssetAttrTable.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t313.inf", 
		LAST);

	web_url("expressionAssetAttrTemplate.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAssetAttrTemplate.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t314.inf", 
		LAST);

	web_url("expressionAssetCA.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAssetCA.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t315.inf", 
		LAST);

	web_url("expressionCondition.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionCondition.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t316.inf", 
		LAST);

	web_url("expressionAssetCATemplate.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAssetCATemplate.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t317.inf", 
		LAST);

	web_url("expressionTemplateForm.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionTemplateForm.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t318.inf", 
		LAST);

	web_url("expressionTemplateTable.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionTemplateTable.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t319.inf", 
		LAST);

	web_url("expressionParcel.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionParcel.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t320.inf", 
		LAST);

	web_url("expressionRecord.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionRecord.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t321.inf", 
		LAST);

	web_url("expressionParcelTemplate.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionParcelTemplate.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t322.inf", 
		LAST);

	web_url("expressionAddressTemplate.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionAddressTemplate.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t323.inf", 
		LAST);

	web_url("expressionPay.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionPay.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t324.inf", 
		LAST);

	web_url("ext-core.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ext-2.0.2/ext-core.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t325.inf", 
		LAST);

	web_url("ext-base.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ext-2.0.2/adapter/ext/ext-base.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t326.inf", 
		LAST);

	web_url("jquery.watermark.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/jquery.watermark.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t327.inf", 
		LAST);

	web_url("validate.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/validate.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t328.inf", 
		LAST);

	web_url("templateHelper.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/templateHelper.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t329.inf", 
		LAST);

	web_url("template.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/template.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t330.inf", 
		LAST);

	web_url("pa.min.js_5", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t331.inf", 
		LAST);

	web_url("form.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/form.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t332.inf", 
		LAST);

	web_url("table.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/table.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t333.inf", 
		LAST);

	web_url("template_express.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/template_express.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t334.inf", 
		LAST);

	web_url("field.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/field.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t335.inf", 
		LAST);

	web_url("formlayout.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/genericTemplate/js/formlayout.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t336.inf", 
		LAST);

	web_url("spellchecker-caller.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/spellchecker/spellchecker-caller.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t337.inf", 
		LAST);

	web_url("info.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/reskin/info.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v3.css", 
		"Snapshot=t338.inf", 
		LAST);

	web_url("blank.jsp_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t339.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("Date.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/ext-2.0.2/source/util/Date.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t340.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("SortedList.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/collections/SortedList.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t341.inf", 
		LAST);

	web_url("Dictionary.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/collections/Dictionary.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t342.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_submit_data("ajax.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/i18n/ajax.do?mode=getDateFormat", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t343.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("empty.jsp_4", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t344.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("blank.jsp_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t345.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("content-left-bottom.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/tab/content-left-bottom.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t346.inf", 
		LAST);

	web_url("content-right-bottom.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/tab/content-right-bottom.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t347.inf", 
		LAST);

	web_url("content-right-top.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/tab/content-right-top.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t348.inf", 
		LAST);

	web_url("content-left-top.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/tab/content-left-top.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t349.inf", 
		LAST);

	web_url("console.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/debug/console.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t350.inf", 
		LAST);

	web_url("ConsoleLogger.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/logging/ConsoleLogger.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t351.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("tabRecordCount.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=00K2N&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/"
		"countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/"
		"countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t352.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_concurrent_start(NULL);

	web_url("Logger.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/logging/Logger.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t353.inf", 
		LAST);

	web_url("common.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/validate/common.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t354.inf", 
		LAST);

	web_url("regexp.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/regexp.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t355.inf", 
		LAST);

	web_url("us.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/validate/us.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t356.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("tabRecordCount.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=00K2N&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t357.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_concurrent_start(NULL);

	web_url("datetime.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/validate/datetime.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t358.inf", 
		LAST);

	web_url("format.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/date/format.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t359.inf", 
		LAST);

	web_url("common.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/date/common.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t360.inf", 
		LAST);

	web_url("supplemental.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/date/supplemental.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t361.inf", 
		LAST);

	web_url("common.js_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/common.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t362.inf", 
		LAST);

	web_url("gregorian.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/calendar/nls/gregorian.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t363.inf", 
		LAST);

	web_url("gregorian.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/calendar/nls/en/gregorian.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t364.inf", 
		LAST);

	web_url("gregorian.js_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/calendar/nls/en-us/gregorian.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t365.inf", 
		LAST);

	web_url("gregorianExtras.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/calendar/nls/gregorianExtras.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t366.inf", 
		LAST);

	web_url("gregorianExtras.js_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/dojo/src/i18n/calendar/nls/en-us/gregorianExtras.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t367.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("search.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t368.inf", 
		"Mode=HTTP", 
		"Body=categoryName=Portlet - Expression", 
		LAST);

	web_submit_data("expression.do", 
		"Action=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t369.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=argumentPKs", "Value=[{\"portletID\":-1,\"viewKey1\":\"\",\"viewKey2\":\"\",\"viewKey3\":\"\"}]", ENDITEM, 
		"Name=expressionPageType", "Value=SINGLEPORTLET", ENDITEM, 
		"Name=isReload", "Value=false", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=capType", "Value=Building/Permit/Roofing/NA", ENDITEM, 
		LAST);

	web_url("back_medium_active.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/images/reskin/back_medium_active.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v3.css", 
		"Snapshot=t370.inf", 
		LAST);

	web_custom_request("expression.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t371.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fcap%2Fcapsummary%2FCapTabSummary.do%3Fmode%3DtabSummary%26isRedirect%3Dfalse%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcap%2Fcapsummary%2FCapTabSummary.do%3Fmode%3DtabSummary%26isRedirect%3Dfalse%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=tabSummary&module=Building&itemName=&CurrentViewID=30046&exceptionLogID=&generalCAPSearch=&isGeneralCAP=Y&objectName=&CheckBoxName=&MaxNumber=&ExportFileType="
		"print&CurrentViewID=30046&sessionIdFromWindow=IsXqpr6%2BxXrAz5yvahzb9bDB&listID=&printType=&checkBoxValue=&isFromSummaryLink=&clickSummaryDocId=&canceled=&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SINGLEPORTLET&expression_page_reload_after_submit_or_validate_failed=true&valuetextarea999="
		"%5B%7B%22values%22%3A%5B%7B%22Sunguard_Call_Date%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Fire_RMS_Call_Date%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_COM_ROOF%22%2C%22subgroup%22%3A%22INTERFACE%20CALLS%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Permit%20for%3A%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22Residential%22%2C%"
		"22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_COM_ROOF%22%2C%22subgroup%22%3A%22TYPE%20OF%20PERMIT%22%2C%22templateType%22%3A%22Form%22%7D%2C%7B%22values%22%3A%5B%7B%22Hurricane%20Related%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Reroof%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22Yes%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Manufacturer%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22Test%22%2C%22rowIndex%22%3A%221%22%7D%2C%22FL%23%2"
		"0or%20NOA%23%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%2212345%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Construction%20Value%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%222500%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Issued%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Approved%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Completed%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%"
		"22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Expires%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Inspect%20By%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Failure%20to%20obtain%20Permit%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Use%20of%20Building%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22"
		"%3A%221%22%7D%2C%22Waive%20Building%20fee%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%22%2C%22rowIndex%22%3A%221%22%7D%2C%22Number%20of%20Buildings%22%3A%7B%22valueSeq%22%3A%22%22%2C%22value%22%3A%22%C2%A0%C2%A0%22%2C%22rowIndex%22%3A%221%22%7D%7D%5D%2C%22group%22%3A%22BLD_COM_ROOF%22%2C%22subgroup%22%3A%22RECORD%20INFORMATION%22%2C%22templateType%22%3A%22Form%22%7D%5D&sourcetextarea999="
		"%7B%22templateForms%22%3A%5B%7B%22groupName%22%3A%22BLD_COM_ROOF%22%2C%22subgroups%22%3A%5B%7B%22displayName%22%3A%22TYPE%20OF%20PERMIT%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Permit%20for%3A%22%2C%22subgroupName%22%3A%22TYPE%20OF%20PERMIT%22%2C%22groupName%22%3A%22BLD_COM_ROOF%22%2C%22defaultValue%22%3A%22Residential%22%2C%22displayFieldName%22%3A%22Permit%20for%3A%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A5%2C%22fieldTypeValue%22%3A5%2C%22options%22%3A%7B%22"
		"target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Dropdown%22%2C%22checklistComment%22%3A%22Residential%22%2C%22checkboxInd%22%3A%225%22%2C%22checkboxDesc"
		"%22%3A%22Permit%20for%3A%22%7D%5D%2C%22subgroupName%22%3A%22TYPE%20OF%20PERMIT%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Permit%20for%3A%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22RECORD%20INFORMATION%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Hurricane%20Related%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_ROOF%22%2C%22displayFieldName%22%3A%22Hurricane%20Related%22%2C%22displayLen%22%3A0%2C%22disp"
		"layOrder%22%3A10%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Radio%22%2C%22checkboxInd%22%3A%223%"
		"22%2C%22checkboxDesc%22%3A%22Hurricane%20Related%22%7D%2C%7B%22fieldName%22%3A%22Reroof%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_ROOF%22%2C%22defaultValue%22%3A%22Yes%22%2C%22displayFieldName%22%3A%22Reroof%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A15%2C%22fieldTypeValue%22%3A3%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26servicePro"
		"viderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Radio%22%2C%22checklistComment%22%3A%22Yes%22%2C%22checkboxInd%22%3A%223%22%2C%22checkboxDesc%22%3A%22Reroof%22%7D%2C%7B%22fieldName%22%3A%22Manufacturer%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_ROOF%22%2C%22de"
		"faultValue%22%3A%22Test%22%2C%22displayFieldName%22%3A%22Manufacturer%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A16%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_N"
		"AME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Text%22%2C%22checklistComment%22%3A%22Test%22%2C%22checkboxInd%22%3A%221%22%2C%22checkboxDesc%22%3A%22Manufacturer%22%7D%2C%7B%22fieldName%22%3A%22FL%23%20or%20NOA%23%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_ROOF%22%2C%22defaultValue%22%3A%2212345%22%2C%22displayFieldName%22%3A%22FL%23%20or%20NOA%23%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A18%2C%22fieldTypeValue%22%3A1%2C%22optio"
		"ns%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Text%22%2C%22checklistComment%22%3A%2212345%22%2C%22checkboxInd%22%3A%221%22%2C%22checkbox"
		"Desc%22%3A%22FL%23%20or%20NOA%23%22%7D%2C%7B%22fieldName%22%3A%22Construction%20Value%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_ROOF%22%2C%22defaultValue%22%3A%222500%22%2C%22displayFieldName%22%3A%22Construction%20Value%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A4%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding"
		"%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Number%22%2C%22checklistComment%22%3A%222500%22%2C%22checkboxInd%22%3A%224%22%2C%22checkboxDesc%22%3A%22Construction%20Value%22%7D%2C%7B%22fieldName%22%3A%22Issued%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22"
		"BLD_COM_ROOF%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Issued%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A30%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Applicati"
		"on%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22checkboxDesc%22%3A%22Issued%22%7D%2C%7B%22fieldName%22%3A%22Approved%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_ROOF%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Approved%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A40%2C%22fieldTypeValue%22%3A"
		"2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%2"
		"22%22%2C%22checkboxDesc%22%3A%22Approved%22%7D%2C%7B%22fieldName%22%3A%22Completed%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_ROOF%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Completed%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A50%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26ser"
		"viceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22checkboxDesc%22%3A%22Completed%22%7D%2C%7B%22fieldName%22%3A%22Expires%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_RO"
		"OF%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Expires%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A60%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInfo"
		"rmation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22checkboxDesc%22%3A%22Expires%22%7D%2C%7B%22fieldName%22%3A%22Inspect%20By%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_ROOF%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Inspect%20By%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A70%2C%22fieldTypeValue%22%3A"
		"2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%2"
		"22%22%2C%22checkboxDesc%22%3A%22Inspect%20By%22%7D%2C%7B%22fieldName%22%3A%22Failure%20to%20obtain%20Permit%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_ROOF%22%2C%22displayFieldName%22%3A%22Failure%20to%20obtain%20Permit%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A80%2C%22fieldTypeValue%22%3A9%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%2"
		"6serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Checkbox%22%2C%22checkboxInd%22%3A%229%22%2C%22checkboxDesc%22%3A%22Failure%20to%20obtain%20Permit%22%7D%2C%7B%22fieldName%22%3A%22Use%20of%20Building%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_ROOF%22"
		"%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Use%20of%20Building%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A110%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Applicatio"
		"n%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Text%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22checkboxDesc%22%3A%22Use%20of%20Building%22%7D%2C%7B%22fieldName%22%3A%22Waive%20Building%20fee%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_ROOF%22%2C%22displayFieldName%22%3A%22Waive%20Building%20fee%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A120%2C%22fieldTypeValue%22%3A9"
		"%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Checkbox%22%2C%22checkboxInd%22%3A%229%22%2C%22checkboxDesc%22%3A%22Waive%20Bui"
		"lding%20fee%22%7D%2C%7B%22fieldName%22%3A%22Number%20of%20Buildings%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%3A%22BLD_COM_ROOF%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Number%20of%20Buildings%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A140%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26ser"
		"viceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Text%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%221%22%2C%22checkboxDesc%22%3A%22Number%20of%20Buildings%22%7D%2C%7B%22fieldName%22%3A%22Warranty%22%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22groupName%22%"
		"3A%22BLD_COM_ROOF%22%2C%22defaultValue%22%3A%22Test%22%2C%22displayFieldName%22%3A%22Warranty%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A150%2C%22fieldTypeValue%22%3A1%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3D%22%7D%2C%22fieldTypeEnum%22%3A%22Text%22%2C%22checklistCom"
		"ment%22%3A%22Test%22%2C%22checkboxInd%22%3A%221%22%2C%22checkboxDesc%22%3A%22Warranty%22%7D%5D%2C%22subgroupName%22%3A%22RECORD%20INFORMATION%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Hurricane%20Related%22%2C%22Reroof%22%2C%22Manufacturer%22%2C%22FL%23%20or%20NOA%23%22%2C%22Construction%20Value%22%2C%22Issued%22%2C%22Approved%22%2C%22Completed%22%2C%22Expires%22%2C%22Inspect%20By%22%2C%22Failure%20to%20obtain%20Permit%22%2C%22Use%20of%20Building%22%2C%22Waive%20Building%20fee%22%2"
		"C%22Number%20of%20Buildings%22%2C%22Warranty%22%5D%5D%2C%22rows%22%3Anull%7D%2C%7B%22displayName%22%3A%22INTERFACE%20CALLS%22%2C%22readOnly%22%3Atrue%2C%22fields%22%3A%5B%7B%22fieldName%22%3A%22Sunguard_Call_Date%22%2C%22subgroupName%22%3A%22INTERFACE%20CALLS%22%2C%22groupName%22%3A%22BLD_COM_ROOF%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Sunguard_Call_Date%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A10%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target"
		"%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProviderCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DInterface%2BCall%2BRoof_SCREEN_NAME_SCREEN_LABEL_SPLIT_Interface%2BCall_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22checkboxDesc%22%3A%22Sung"
		"uard_Call_Date%22%7D%2C%7B%22fieldName%22%3A%22Fire_RMS_Call_Date%22%2C%22subgroupName%22%3A%22INTERFACE%20CALLS%22%2C%22groupName%22%3A%22BLD_COM_ROOF%22%2C%22defaultValue%22%3A%22%C2%A0%C2%A0%22%2C%22displayFieldName%22%3A%22Fire_RMS_Call_Date%22%2C%22displayLen%22%3A0%2C%22displayOrder%22%3A20%2C%22fieldTypeValue%22%3A2%2C%22options%22%3A%7B%22target%22%3A%22_self%22%2C%22link%22%3A%22%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26fromTab%3DY%26module%3DBuilding%26serviceProvide"
		"rCode%3DOSCEOLA%26ID1%3DREC18%26ID2%3D00000%26ID3%3D00K2N%26fromTreeGrid%3DY%26singleMode%3DInterface%2BCall%2BRoof_SCREEN_NAME_SCREEN_LABEL_SPLIT_Interface%2BCall_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%22%7D%2C%22fieldTypeEnum%22%3A%22Date%22%2C%22checklistComment%22%3A%22%C2%A0%C2%A0%22%2C%22checkboxInd%22%3A%222%22%2C%22checkboxDesc%22%3A%22Fire_RMS_Call_Date%22%7D%5D%2C%22subgroupName%22%3A%22INTERFACE%20CALLS%22%2C%22hasSelectCol%22%3Atrue%2C%22CSVData%22%3A%5B%5B%22Sunguard_Call_Date%22"
		"%2C%22Fire_RMS_Call_Date%22%5D%5D%2C%22rows%22%3Anull%7D%5D%2C%22templateType%22%3A%22Form%22%2C%22readOnly%22%3Atrue%7D%5D%2C%22templateTables%22%3A%5B%5D%2C%22readOnly%22%3Atrue%2C%22UIUID%22%3A999%7D&layouttextarea999="
		"%7B%22map%22%3A%7B%22BLD_COM_ROOF%23%40%23%40RECORD%20INFORMATION%23%40%23%40Expires%22%3A%7B%22displayLen%22%3A141%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Expires%22%2C%22spanId%22%3A%223_layout_mark_span%22%7D%2C%22BLD_COM_ROOF%23%40%23%40RECORD%20INFORMATION%23%40%23%40Hurricane%20Related%22%3A%7B%22displayLen%22%3A130%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Hurricane%20Related%22%2C%22spanId%22%3A%221_layout_mark_span%22%7D%2C%22BLD_COM_ROOF%23%40%23%40RECORD%20INFORMATION%23"
		"%40%23%40FL%23%20or%20NOA%23%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22FL%23%20or%20NOA%23%22%2C%22spanId%22%3A%2213_layout_mark_span%22%7D%2C%22BLD_COM_ROOF%23%40%23%40TYPE%20OF%20PERMIT%23%40%23%40Permit%20for%3A%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Permit%20for%3A%22%2C%22spanId%22%3A%220_layout_mark_span%22%7D%2C%22BLD_COM_ROOF%23%40%23%40RECORD%20INFORMATION%23%40%23%40Manufacturer%22%3A%7B%22displayLen%22%3A154%"
		"2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Manufacturer%22%2C%22spanId%22%3A%2210_layout_mark_span%22%7D%2C%22BLD_COM_ROOF%23%40%23%40RECORD%20INFORMATION%23%40%23%40Waive%20Building%20fee%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Waive%20Building%20fee%22%2C%22spanId%22%3A%225_layout_mark_span%22%7D%2C%22BLD_COM_ROOF%23%40%23%40INTERFACE%20CALLS%23%40%23%40Sunguard_Call_Date%22%3A%7B%22displayLen%22%3A141%2C%22styleHeight%22%3A18%2C%22styleLabel%22%3A%2"
		"2Sunguard_Call_Date%22%2C%22spanId%22%3A%2215_layout_mark_span%22%7D%2C%22BLD_COM_ROOF%23%40%23%40RECORD%20INFORMATION%23%40%23%40Inspect%20By%22%3A%7B%22displayLen%22%3A141%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Inspect%20By%22%2C%22spanId%22%3A%229_layout_mark_span%22%7D%2C%22BLD_COM_ROOF%23%40%23%40RECORD%20INFORMATION%23%40%23%40Reroof%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Reroof%22%2C%22spanId%22%3A%224_layout_mark_span%22%7D%2C%22BLD_COM_RO"
		"OF%23%40%23%40RECORD%20INFORMATION%23%40%23%40Issued%22%3A%7B%22displayLen%22%3A141%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Issued%22%2C%22spanId%22%3A%226_layout_mark_span%22%7D%2C%22BLD_COM_ROOF%23%40%23%40INTERFACE%20CALLS%23%40%23%40Fire_RMS_Call_Date%22%3A%7B%22displayLen%22%3A141%2C%22styleHeight%22%3A18%2C%22styleLabel%22%3A%22Fire_RMS_Call_Date%22%2C%22spanId%22%3A%2216_layout_mark_span%22%7D%2C%22BLD_COM_ROOF%23%40%23%40RECORD%20INFORMATION%23%40%23%40Failure%20to%20obtain%20Perm"
		"it%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Failure%20to%20obtain%20Permit%22%2C%22spanId%22%3A%222_layout_mark_span%22%7D%2C%22BLD_COM_ROOF%23%40%23%40RECORD%20INFORMATION%23%40%23%40Completed%22%3A%7B%22displayLen%22%3A141%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Completed%22%2C%22spanId%22%3A%2214_layout_mark_span%22%7D%2C%22BLD_COM_ROOF%23%40%23%40RECORD%20INFORMATION%23%40%23%40Approved%22%3A%7B%22displayLen%22%3A141%2C%22styleHeight%22%3A17%2C%2"
		"2styleLabel%22%3A%22Approved%22%2C%22spanId%22%3A%2212_layout_mark_span%22%7D%2C%22BLD_COM_ROOF%23%40%23%40RECORD%20INFORMATION%23%40%23%40Construction%20Value%22%3A%7B%22displayLen%22%3A154%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Construction%20Value%22%2C%22spanId%22%3A%227_layout_mark_span%22%7D%2C%22BLD_COM_ROOF%23%40%23%40RECORD%20INFORMATION%23%40%23%40Use%20of%20Building%22%3A%7B%22displayLen%22%3A178%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Use%20of%20Building%22%2C%22span"
		"Id%22%3A%2211_layout_mark_span%22%7D%2C%22BLD_COM_ROOF%23%40%23%40RECORD%20INFORMATION%23%40%23%40Number%20of%20Buildings%22%3A%7B%22displayLen%22%3A179%2C%22styleHeight%22%3A17%2C%22styleLabel%22%3A%22Number%20of%20Buildings%22%2C%22spanId%22%3A%228_layout_mark_span%22%7D%7D%2C%22layouts%22%3A%5B%5D%2C%22layoutHtml%22%3A%22%3Ctable%3E%3Ctr%3E%3Ctd%20class%3D'portlet-form-field-label'%3E%3Cstrong%3EBuilding%20Roofing%3C%2Fstrong%3E%3C%2Ftd%3E%3C%2Ftr%3E%3C%2Ftable%3E%3Ctable%20id%3D%5C%22customTas"
		"kSpecInfoTable%5C%22%20name%3D%5C%22customTaskSpecInfoTable%5C%22%20class%3D%5C%22AccelaMainTableVariant%5C%22%3E%3Ctr%3E%3CTH%3E%3Ctable%20cellSpacing%3D0%20cellPadding%3D0%3E%3Ctbody%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D1"
		"2%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height"
		"%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20he"
		"ight%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%"
		"20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2210%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3Argb(93%2C%2093%2C%2093)"
		"%3Bfont-family%3A%5C%22%3ETYPE%20OF%20PERMIT%3C%2FLABEL%3E%3CLABEL%20style%3D%5C%22color%3A%235d5d5d%5C%22%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%"
		"3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wi"
		"dth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%"
		"20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3"
		"D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heig"
		"ht%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20"
		"height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'0_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width"
		"%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3C%2FLABEL%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3"
		"D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3"
		"E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wid"
		"th%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%2"
		"0width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2234%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CTABLE%20width%3D%5C%22100%25%5C%22%3E%3CTOBYD%3E%3CTR%3E%3CTD%3E%3CHR%20class%3D'common-hr-border'%3E%3C%2FTD%3E%3C%2FTR%3E%3C%2FTBODY%3E%3C%2FTABLE%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%"
		"20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3"
		"E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D"
		"12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%2"
		"0colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%222%5C%22%20class%3D%5C%22inputfieldlabel%5C%22%3E%3CLABEL%20style%3D%5C%22color%3Argb(93%2C%2093%2C%2093)"
		"%3Bfont-family%3A%5C%22%3ERECORD%20INFORMATION%3C%2FLABEL%3E%3CLABEL%20style%3D%5C%22color%3A%235d5d5d%5C%22%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20widt"
		"h%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20"
		"width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ct"
		"d%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height"
		"%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20he"
		"ight%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E"
		"%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ft"
		"d%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3"
		"E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D"
		"12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2211%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'1_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'2_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3"
		"C%2Ftd%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'3_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wi"
		"dth%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%"
		"3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3"
		"D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20heig"
		"ht%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20"
		"height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'4_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%"
		"3E%3Cspan%20id%3D'5_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'6_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%"
		"3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20hei"
		"ght%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%2"
		"0height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D"
		"12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20widt"
		"h%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'7_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'8_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%"
		"20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'9_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3"
		"D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20wid"
		"th%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%2"
		"0width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C"
		"td%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'10_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2215%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'11_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5"
		"C%22%3E%3Cspan%20id%3D'12_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%2"
		"0width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C"
		"td%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3"
		"E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2F"
		"td%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3"
		"C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2213%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'13_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%"
		"3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%2"
		"0id%3D'14_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3"
		"D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C"
		"%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3"
		"E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3C%2Ftbody%3E%3C%2Ftable%3E%3C%2FTH%3E%3C%2Ftr%3E%3C%2Ftable%3E%3C%2FLABEL%3E%3Ctable%3E%3Ctr%3E%3Ctd%20class%3D'portlet-form-field-label'%3E%3Cstrong%3EInterface%20Call%20Roof%3C%2Fstrong%3E%3C%2Ftd%3E"
		"%3C%2Ftr%3E%3C%2Ftable%3E%3Ctable%20id%3D%5C%22customTaskSpecInfoTable%5C%22%20name%3D%5C%22customTaskSpecInfoTable%5C%22%20class%3D%5C%22AccelaMainTableVariant%5C%22%3E%3Ctr%3E%3CTH%3E%3Ctable%20cellSpacing%3D0%20cellPadding%3D0%3E%3Ctbody%3E%3Ctr%3E%3Ctd%20colspan%3D%5C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'15_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr"
		"%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%2"
		"0height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd"
		"%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20colspan%3D%5"
		"C%2214%5C%22%20rowspan%3D%5C%223%5C%22%3E%3Cspan%20id%3D'16_layout_mark_span'%3E%3C%2Fapsn%3E%3C%2Ftd%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3Ctr%3E%3Ctd%20width%3D12%20height%3D12%3E%3C%2Ftd%3E%3C%2Ftr%3E%3C%2Ftbody%3E%3C%2Ftable%3E%3C%2FTH%3E%3C%2Ftr%3E%3C%2Ftable%3E%22%7D&uiuid=999&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber=undefined&argumentPKs="
		"%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&mode=execute", 
		LAST);

	lr_end_transaction("OSCEOLA_TC1_04_Record_Details",LR_AUTO);

	lr_think_time(6);

	lr_start_transaction("OSCEOLA_TC1_05_Record_Click_Record");

	web_url("session.do_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.057e1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capSearch.do?module=Building", 
		"Snapshot=t372.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("session.do_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.057e1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t373.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("capDetail.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capsummary/CapTabSummary.do?mode=tabSummary&serviceProviderCode=OSCEOLA&ID1=REC18&ID2=00000&ID3=00K2N&requireNotice=YES&clearForm=clearForm&module=Building&isFromCapList=true&isGeneralCAP=Y", 
		"Snapshot=t374.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_5", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t375.inf", 
		LAST);

	web_url("timepicker.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/javascript/timepicker.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t376.inf", 
		LAST);

	web_url("blank.jsp_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t378.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_6", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t377.inf", 
		LAST);

	web_submit_data("empty.jsp_5", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t379.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("tabRecordCount.do_3", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=00K2N&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/"
		"countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/"
		"countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t380.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=00K2N&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t381.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_url("session.do_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.057e1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t382.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("OSCEOLA_TC1_05_Record_Click_Record",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("OSCEOLA_TC1_06_Record_SaveRecord");

	web_url("session.do_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.057e1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t383.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("dataList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/ams/asset/dataList.do?mode=checkAssetStatus&from=capByEdit&module=Building", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t384.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmode%3Dview%26isRedirect%3Dfalse%26module%3DBuilding&value(CurrentEntryURL)=%2Fportlets%2Fcap%2FcapDetail.do%3Fmode%3Dview%26isRedirect%3Dfalse%26module%3DBuilding&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Building&accelasubmitbuttonname=&itemName=&CurrentViewID=112&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=112&sessionIdFromWindow="
		"IsXqpr6%2BxXrAz5yvahzb9bDB&listID=&printType=&checkBoxValue=&value(mode)=edit&value(capID*ID1)=REC18&value(capID*ID2)=00000&value(capID*ID3)=00K2N&value(capType)=Building%2FPermit%2FRoofing%2FNA&value(capID)=&value(capDetailModel*shortNotes)=&value(capDetailModel*creatorDeptAlias)=&value(capModel*capSubType)=&date(capDetailModel*closedDate)=&date(capDetailModel*asgnDate)=&date(capDetailModel*completeDate)=&date(capDetailModel*scheduledDate)=&value(capDetailModel*scheduledTime)=&value"
		"(capDetailModel*completeDept)=&value(capDetailModel*completeStaff)=&value(capDetailModel*closedDept)=&value(capDetailModel*closedBy)=&value(capDetailModel*priority)=&value(capDetailModel*reportedChannel)=&value(capDetailModel*severity)=&value(capModel*altID)=A18-008541&value(jobValue)=0.00&value(blank1)=&value(blank2)=&value(blank3)=&value(blank4)=&value(blank5)=&value(capDetailModel*totalJobCost)=0.0&value(b1ExpirationModel*expStatus)=&date(b1ExpirationModel*expDate)=&date(capModel*reportedDate)="
		"07%2F25%2F2018&value(capModel*reportedTime)=03%3A22%20PM&value(capDetailModel*pmScheduleSeq)=&value(capModel*createdByACA)=Y&date(capDetailModel*trackStartDate)=&date(capDetailModel*estimatedDueDate)=&value(capDetailModel*inPossessionTime)=&value(capDetailModel*overallApplicationTime)=&value(capDetailModel*estProdUnits)=&value(capDetailModel*actualProdUnits)=&value(capDetailModel*estCostPerUnit)=&value(capDetailModel*costPerUnit)=&value(capDetailModel*estJobCost)=&value"
		"(capDetailModel*anonymousFlag)=&value(capDetailModel*referenceType)=&value(capDetailModel*enforceDept)=&value(capDetailModel*enforceOfficerName)=&value(capDetailModel*enforceOfficerId)=&value(capDetailModel*inspectorDept)=&value(capDetailModel*inspectorName)=&value(capDetailModel*inspectorId)=&date(capDetailModel*appearanceDate)=&value(capDetailModel*appearanceDayOfWeek)=&value(capDetailModel*infractionFlag)=&value(capDetailModel*misdemeanorFlag)=&value(capDetailModel*offnWitnessedFlag)=&value"
		"(capDetailModel*dfndtSignatureFlag)=&value(capDetailModel*bookingFlag)=&value(capDetailModel*statusReason)=&date(capDetailModel*firstIssuedDate)=&value(capModel*initiatedProduct)=ACA&value(capDetailModel*undistributedCost)=0.00&value(capDetailModel*url)=&value(capModel*certificationApplied)=&date(capModel*certificationDate)=&value(capDetailModel*generatedByCloning)=&value(capModel*pendingValidation)=&date(capModel*fileDate)=07%2F25%2F2018&value(capModel*capStatus)=Submitted&value(capType)="
		"Building%2FPermit%2FRoofing%2FNA&value(capModel*specialText)=Test%20of%20Express%20Roofing&value(capWorkDescriptionModel*description)=Test%20of%20Express%20Roofing%20REROOF%20Manufacturer%3A%20Test%2C%20FL%23%20or%20NOA%23%2012345%2C%20Warranty%3A%20Test&value(capDetailModel*totalFee)=86.40&value(capDetailModel*totalFee)=86.40&value(capDetailModel*totalPay)=0.00&value(capDetailModel*totalPay)=0.00&value(capDetailModel*balance)=86.40&value(capDetailModel*balance)=86.40&value(capDetailModel*asgnDept"
		")=&value(capDetailModel*asgnStaff)=&", 
		LAST);

	web_submit_data("capDetail.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?mode=view&isRedirect=false&module=Building", 
		"Snapshot=t385.inf", 
		"Mode=HTTP", 
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
		"Name=sessionIdFromWindow", "Value=IsXqpr6+xXrAz5yvahzb9bDB", ENDITEM, 
		"Name=listID", "Value=", ENDITEM, 
		"Name=printType", "Value=", ENDITEM, 
		"Name=checkBoxValue", "Value=", ENDITEM, 
		"Name=value(mode)", "Value=edit", ENDITEM, 
		"Name=value(capID*ID1)", "Value=REC18", ENDITEM, 
		"Name=value(capID*ID2)", "Value=00000", ENDITEM, 
		"Name=value(capID*ID3)", "Value=00K2N", ENDITEM, 
		"Name=value(capType)", "Value=Building/Permit/Roofing/NA", ENDITEM, 
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
		"Name=value(capDetailModel*reportedChannel)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*severity)", "Value=", ENDITEM, 
		"Name=value(capModel*altID)", "Value=A18-008541", ENDITEM, 
		"Name=value(jobValue)", "Value=0.00", ENDITEM, 
		"Name=value(blank1)", "Value=", ENDITEM, 
		"Name=value(blank2)", "Value=", ENDITEM, 
		"Name=value(blank3)", "Value=", ENDITEM, 
		"Name=value(blank4)", "Value=", ENDITEM, 
		"Name=value(blank5)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*totalJobCost)", "Value=0.0", ENDITEM, 
		"Name=value(b1ExpirationModel*expStatus)", "Value=", ENDITEM, 
		"Name=date(b1ExpirationModel*expDate)", "Value=", ENDITEM, 
		"Name=date(capModel*reportedDate)", "Value=07/25/2018", ENDITEM, 
		"Name=value(capModel*reportedTime)", "Value=03:22 PM", ENDITEM, 
		"Name=value(capDetailModel*pmScheduleSeq)", "Value=", ENDITEM, 
		"Name=value(capModel*createdByACA)", "Value=Y", ENDITEM, 
		"Name=date(capDetailModel*trackStartDate)", "Value=", ENDITEM, 
		"Name=date(capDetailModel*estimatedDueDate)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*inPossessionTime)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*overallApplicationTime)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*estProdUnits)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*actualProdUnits)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*estCostPerUnit)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*costPerUnit)", "Value=", ENDITEM, 
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
		"Name=value(capDetailModel*infractionFlag)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*misdemeanorFlag)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*offnWitnessedFlag)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*dfndtSignatureFlag)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*bookingFlag)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*statusReason)", "Value=", ENDITEM, 
		"Name=date(capDetailModel*firstIssuedDate)", "Value=", ENDITEM, 
		"Name=value(capModel*initiatedProduct)", "Value=ACA", ENDITEM, 
		"Name=value(capDetailModel*undistributedCost)", "Value=0.00", ENDITEM, 
		"Name=value(capDetailModel*url)", "Value=", ENDITEM, 
		"Name=value(capModel*certificationApplied)", "Value=", ENDITEM, 
		"Name=date(capModel*certificationDate)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*generatedByCloning)", "Value=", ENDITEM, 
		"Name=value(capModel*pendingValidation)", "Value=", ENDITEM, 
		"Name=date(capModel*fileDate)", "Value=07/25/2018", ENDITEM, 
		"Name=value(capModel*capStatus)", "Value=Submitted", ENDITEM, 
		"Name=value(capType)", "Value=Building/Permit/Roofing/NA", ENDITEM, 
		"Name=value(capModel*specialText)", "Value=Test of Express Roofing", ENDITEM, 
		"Name=value(capWorkDescriptionModel*description)", "Value=Test of Express Roofing REROOF Manufacturer: Test, FL# or NOA# 12345, Warranty: Test", ENDITEM, 
		"Name=value(capDetailModel*totalFee)", "Value=86.40", ENDITEM, 
		"Name=value(capDetailModel*totalFee)", "Value=86.40", ENDITEM, 
		"Name=value(capDetailModel*totalPay)", "Value=0.00", ENDITEM, 
		"Name=value(capDetailModel*totalPay)", "Value=0.00", ENDITEM, 
		"Name=value(capDetailModel*balance)", "Value=86.40", ENDITEM, 
		"Name=value(capDetailModel*balance)", "Value=86.40", ENDITEM, 
		"Name=value(capDetailModel*asgnDept)", "Value=", ENDITEM, 
		"Name=value(capDetailModel*asgnStaff)", "Value=", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_6", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t386.inf", 
		LAST);

	web_url("blank.jsp_11", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t388.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_7", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t387.inf", 
		LAST);

	web_submit_data("empty.jsp_6", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t389.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("tabRecordCount.do_5", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=00K2N&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/"
		"countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/"
		"countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t390.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_6", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=00K2N&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t391.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	lr_end_transaction("OSCEOLA_TC1_06_Record_SaveRecord",LR_AUTO);

	lr_start_transaction("OSCEOLA_TC1_07_Click_AppHistory");

	web_url("session.do_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.057e1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t392.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("appSpecInfoForm.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&singleMode=Building+Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&module=Building&fromTab=Y", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/cap/capDetail.do?module=Building", 
		"Snapshot=t393.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AAHELP.js_7", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&singleMode=Building+Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&module=Building&fromTab=Y", 
		"Snapshot=t394.inf", 
		LAST);

	web_url("appSpecInfoForm.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/appspecinfo/appSpecInfoForm.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&singleMode=Building+Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&module=Building&fromTab=Y", 
		"Snapshot=t395.inf", 
		LAST);

	web_url("expressionConstants.jsp_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/commons/expression/js/expressionConstants.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&singleMode=Building+Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&module=Building&fromTab=Y", 
		"Snapshot=t396.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_8", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&singleMode=Building+Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&module=Building&fromTab=Y", 
		"Snapshot=t397.inf", 
		LAST);

	web_url("blank.jsp_12", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&singleMode=Building+Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&module=Building&fromTab=Y", 
		"Snapshot=t398.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("empty.jsp_7", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t399.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_submit_data("appSpecInfoForm.do_2", 
		"Action=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=buildDrillList&module=Building&guideSheetSeq=&singleMode=Building%20Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%20Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&singleMode=Building+Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&module=Building&fromTab=Y", 
		"Snapshot=t400.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("search.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/globalSearch/search.do?action=textResources", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&singleMode=Building+Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&module=Building&fromTab=Y", 
		"Snapshot=t401.inf", 
		"Mode=HTTP", 
		"Body=categoryName=Portlet - Expression", 
		LAST);

	web_submit_data("expression.do_3", 
		"Action=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=getFields", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&singleMode=Building+Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&module=Building&fromTab=Y", 
		"Snapshot=t402.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=argumentPKs", "Value=[{\"portletID\":-1,\"viewKey1\":\"\",\"viewKey2\":\"\",\"viewKey3\":\"\"}]", ENDITEM, 
		"Name=expressionPageType", "Value=SINGLEPORTLET", ENDITEM, 
		"Name=isReload", "Value=false", ENDITEM, 
		"Name=module", "Value=Building", ENDITEM, 
		"Name=capType", "Value=Building/Permit/Roofing/NA", ENDITEM, 
		LAST);

	web_custom_request("tabRecordCount.do_7", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=00K2N&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/"
		"countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/"
		"countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&singleMode=Building+Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&module=Building&fromTab=Y", 
		"Snapshot=t403.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("expression.do_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/expression/expression.do?mode=execute", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&singleMode=Building+Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&module=Building&fromTab=Y", 
		"Snapshot=t404.inf", 
		"Mode=HTTP", 
		"Body=value(FirstEntryURL)=%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%26module%3DBuilding%26fromTab%3DY&value(CurrentEntryURL)="
		"%2Fportlets%2Fappspecinfo%2FappSpecInfoForm.do%3Fmode%3Dview%26singleMode%3DBuilding%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF%26module%3DBuilding%26fromTab%3DY&portlet_language=en_US&refresh_target=&refresh_url=&buttonName=&modeName=view&module=Building&itemName=&CurrentViewID=&exceptionLogID=&generalCAPSearch=&objectName=&CheckBoxName=&MaxNumber=&ExportFileType=print&CurrentViewID=&sessionIdFromWindow=IsXqpr6%2BxXrAz5yvahzb9bDB"
		"&listID=&printType=&checkBoxValue=&value(capID*ID1)=REC18&value(capID*ID2)=00000&value(capID*ID3)=00K2N&value(singleMode)=Building%20Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%20Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&singleMode=Building%20Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%20Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&singleModeName="
		"Building%2BRoofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application%2BInformation_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&app_spec_info_TYPE_OF_PERMIT_Permit_for%253A=Residential&app_spec_info_INTERFACE_CALLS_Interface_Call_Do_Not_Display=&app_spec_info_RECORD_INFORMATION_Failure_to_obtain_Permit_Value=Y&app_spec_info_RECORD_INFORMATION_Expires=&app_spec_info_RECORD_INFORMATION_Reroof=Yes&app_spec_info_RECORD_INFORMATION_Waive_Building_fee_Value=Y&app_spec_info_RECORD_INFORMATION_Issued=&"
		"app_spec_info_RECORD_INFORMATION_Construction_Value=2500&app_spec_info_RECORD_INFORMATION_Number_of_Buildings=&app_spec_info_RECORD_INFORMATION_Inspect_By=&app_spec_info_RECORD_INFORMATION_Manufacturer=Test&app_spec_info_RECORD_INFORMATION_Use_of_Building=&app_spec_info_RECORD_INFORMATION_Approved=&app_spec_info_RECORD_INFORMATION_FL%2523_or_NOA%2523=12345&app_spec_info_RECORD_INFORMATION_Completed=&singleModeName="
		"Interface%2BCall%2BRoof_SCREEN_NAME_SCREEN_LABEL_SPLIT_Interface%2BCall_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&fromTab=Y&expression_portlet_to_be_populate=-1&expression_portlet_to_be_populate=-99999&is_ASI_fields_displayed=true&expressionPageType=SINGLEPORTLET&expression_page_reload_after_submit_or_validate_failed=true&accelasubmitbuttonname=Previous&callBack=&variableKey=onLoad&refAPONumber=undefined&argumentPKs="
		"%5B%7B%22portletID%22%3A-1%2C%22viewKey1%22%3A%22%22%2C%22viewKey2%22%3A%22%22%2C%22viewKey3%22%3A%22%22%7D%5D&expressionPageType=SINGLEPORTLET&mode=execute", 
		LAST);

	web_custom_request("tabRecordCount.do_8", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=00K2N&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&singleMode=Building+Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&module=Building&fromTab=Y", 
		"Snapshot=t405.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_url("session.do_14", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.057e1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&singleMode=Building+Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&module=Building&fromTab=Y", 
		"Snapshot=t406.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("OSCEOLA_TC1_07_Click_AppHistory",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("OSCEOLA_TC1_08_Click_WorkFlow");

	web_url("session.do_15", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.057e1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&singleMode=Building+Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&module=Building&fromTab=Y", 
		"Snapshot=t407.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(4);

	web_url("workflowStatusList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/appspecinfo/appSpecInfoForm.do?mode=view&singleMode=Building+Roofing_SCREEN_NAME_SCREEN_LABEL_SPLIT_Application+Information_SCREEN_NAME_SCREEN_LABEL_SPLIT_BLD_COM_ROOF&module=Building&fromTab=Y", 
		"Snapshot=t408.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("i18n-config.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/i18n-config.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t409.inf", 
		LAST);

	web_url("AAHELP.js_8", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t410.inf", 
		LAST);

	web_url("handlebars.min.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/node_modules/handlebars/dist/handlebars.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t411.inf", 
		LAST);

	web_url("common.js_4", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/common.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t412.inf", 
		LAST);

	web_url("main.js", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/js/workflow/main.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t413.inf", 
		LAST);

	web_url("blank.jsp_13", 
		"URL=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/blank.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t415.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("workflowTaskList.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t416.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("pa.min.js_9", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t414.inf", 
		LAST);

	web_submit_data("empty.jsp_8", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t417.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_custom_request("text.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/text.do?mode=localizedText", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t418.inf", 
		"Mode=HTTP", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"AANewUX_WorkFlow_Assigned\":\"\",\"AANewUX_WorkFlow_Started\":\"\",\"AANewUX_WorkFlow_Save\":\"\",\"AANewUX_WorkFlow_Cancel\":\"\",\"AANewUX_WorkFlow_ShowAll\":\"\",\"AANewUX_WorkFlow_By\":\"\",\"AANewUX_WorkFlow_Due\":\"\",\"AANewUX_WorkFlow_Subtask\":\"\",\"AANewUX_WorkFlow_NewAdhocTask\":\"\",\"AANewUX_WorkFlow_AdditionalAdhocTask\":\"\",\"AANewUX_WorkFlow_WorkflowTask\":\"\",\"AANewUX_WorkFlow_BucketCompleted\":\"\",\"AANewUX_WorkFlow_BucketInprogress\":\"\",\""
		"AANewUX_WorkFlow_BucketUpNext\":\"\",\"AANewUX_WorkFlow_TaskInactive\":\"\",\"AANewUX_WorkFlow_TaskInprogress\":\"\",\"AANewUX_WorkFlow_TaskComplete\":\"\",\"AANewUX_WorkFlow_ViewHistory\":\"\",\"AANewUX_WorkFlow_ViewWorkflowDesign\":\"\",\"AANewUX_WorkFlow_IncludeAddPage\":\"\",\"AANewUX_WorkFlow_PageOf\":\"\",\"AANewUX_WorkFlow_PageCompleted\":\"\",\"AANewUX_WorkFlow_WorkflowDesign\":\"\",\"AANewUX_Designer_NewDesigner\":\"\",\"AANewUX_Designer_OldDesigner\":\"\",\"AANewUX_Designer_Preview\":\""
		"\",\"AANewUX_Designer_Text\":\"\",\"AANewUX_Designer_Controls\":\"\",\"AANewUX_Designer_NoCtlAvailable\":\"\",\"AANewUX_Designer_Drag\":\"\",\"AANewUX_Designer_Select\":\"\",\"AANewUX_Designer_Properties\":\"\",\"AANewUX_Designer_Ok\":\"\",\"AANewUX_Designer_Label\":\"\",\"AANewUX_Designer_Url\":\"\",\"AANewUX_Designer_Save\":\"\",\"AANewUX_Designer_Cancel\":\"\",\"AANewUX_Designer_DynamicLabelText\":\"\",\"AANewUX_CheckList_SaveAll\":\"\"}", 
		LAST);

	web_url("accelicons.woff", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/styles/fonts/accelicons.woff", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/styles/re-skin-v2.css", 
		"Snapshot=t419.inf", 
		LAST);

	web_url("workflow.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/workflow.do?mode=viewWorkFlowDesignPermission&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t420.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("workflow.do_2", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/workflow.do?mode=getTasks&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t421.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("chkmark.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/chkmark.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t422.inf", 
		LAST);

	web_url("white.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/white.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t423.inf", 
		LAST);

	web_url("AAHELP.js_9", 
		"URL=https://av-pt-ferrari.accela.com/docs/AAHELP.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t424.inf", 
		LAST);

	web_url("root.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/tree/root.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t425.inf", 
		LAST);

	web_url("treeWhite.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/tree/treeWhite.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t426.inf", 
		LAST);

	web_url("treeFolder.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/tree/treeFolder.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t427.inf", 
		LAST);

	web_url("treeTPlus.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/tree/treeTPlus.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t428.inf", 
		LAST);

	web_url("treeLPlus.gif", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/tree/treeLPlus.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t429.inf", 
		LAST);

	web_url("pa.min.js_10", 
		"URL=https://d3accju1t3mngt.cloudfront.net/js/pa.min.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowTaskList.do?&module=Building&mode=list", 
		"Snapshot=t430.inf", 
		LAST);

	web_submit_data("empty.jsp_9", 
		"Action=https://av-pt-ferrari.accela.com/portlets/framework/includes/error/empty.jsp", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t431.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_concurrent_start(NULL);

	web_url("tree-bottom-left.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/tree-bottom-left.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t432.inf", 
		LAST);

	web_url("tree-bottom-right.png", 
		"URL=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/menu/tree-bottom-right.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/images/sky_blue/styles.css", 
		"Snapshot=t433.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("tabRecordCount.do_9", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=00K2N&xmlin=%3Croot%3E%3CcountID%3E5%3C/countID%3E%3CcountID%3E6%3C/countID%3E%3CcountID%3E2%3C/countID%3E%3CcountID%3E134%3C/countID%3E%3CcountID%3E16%3C/countID%3E%3CcountID%3E23%3C/countID%3E%3CcountID%3E415%3C/countID%3E%3CcountID%3E17%3C/countID%3E%3CcountID%3E397%3C/countID%3E%3CcountID%3E456%3C/countID%3E%3CcountID%3E1%3C/countID%3E%3CcountID%3E378%3C/countID%3E%3CcountID%3E21%3C/"
		"countID%3E%3CcountID%3E226%3C/countID%3E%3CcountID%3E372%3C/countID%3E%3CcountID%3E24%3C/countID%3E%3CcountID%3E379%3C/countID%3E%3CcountID%3E10%3C/countID%3E%3CcountID%3E133%3C/countID%3E%3CcountID%3E8%3C/countID%3E%3CcountID%3E19%3C/countID%3E%3CcountID%3E373%3C/countID%3E%3CcountID%3E14%3C/countID%3E%3CcountID%3E12%3C/countID%3E%3CcountID%3E13%3C/countID%3E%3CcountID%3E371%3C/countID%3E%3CcountID%3E27%3C/countID%3E%3CcountID%3E404%3C/countID%3E%3CcountID%3E360%3C/countID%3E%3CcountID%3E3%3C/"
		"countID%3E%3CcountID%3E152%3C/countID%3E%3CcountID%3E303%3C/countID%3E%3CcountID%3E4%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t434.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	web_custom_request("tabRecordCount.do_10", 
		"URL=https://av-pt-ferrari.accela.com/portlets/cap/tabRecordCount.do?module=Building&ID1=REC18&ID2=00000&ID3=00K2N&xmlin=%3Croot%3E%3CcountID%3E18%3C/countID%3E%3C/root%3E", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t435.inf", 
		"Mode=HTTP", 
		"EncType=txt/xml", 
		LAST);

	lr_end_transaction("OSCEOLA_TC1_08_Click_WorkFlow",LR_AUTO);

	lr_think_time(9);

	lr_start_transaction("OSCEOLA_SignOut");

	web_url("session.do_16", 
		"URL=https://av-pt-ferrari.accela.com/portlets/spa/session.do?mode=activateSpace&spaceName=spaces.057e1&module=Building", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/workflow/workflowStatusList.do?module=Building", 
		"Snapshot=t436.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("signoff.do", 
		"URL=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/portlets/spa/dashboard.do", 
		"Snapshot=t437.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("signout.do", 
		"URL=https://av-pt-ferrari.accela.com/portlets/security/signout.do", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t438.inf", 
		LAST);

	web_submit_data("portal", 
		"Action=https://av-pt-ferrari.accela.com/jetspeed/portal?action=JClearCookie", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t439.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	web_url("logoutAction.do", 
		"URL=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=OSCEOLA&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/signoff.do", 
		"Snapshot=t440.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("hostSignon.do_4", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/ssoAdapter/logoutAction.do?servProvCode=OSCEOLA&successURL=%2Fsecurity%2FhostSignon.do%3FsignOff%3Dtrue", 
		"Snapshot=t441.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("host-signon.css_2", 
		"URL=https://av-pt-ferrari.accela.com/security/css/host-signon.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Snapshot=t442.inf", 
		LAST);

	web_url("spacer.gif_4", 
		"URL=https://av-pt-ferrari.accela.com/security/images/spacer.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Snapshot=t443.inf", 
		LAST);

	web_url("hostSignon.do_5", 
		"URL=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Snapshot=t444.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("header.htm_2", 
		"URL=https://www.accela.com/ext/web/aa/header.htm", 
		"Resource=0", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?signOff=true", 
		"Snapshot=t445.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("spacer.gif_5", 
		"URL=https://av-pt-ferrari.accela.com/security/images/spacer.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t450.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("login.css_2", 
		"URL=https://av-pt-ferrari.accela.com/security/includes/login.css", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t446.inf", 
		LAST);

	web_url("sso.js_2", 
		"URL=https://av-pt-ferrari.accela.com/security/javascript/sso.js", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t447.inf", 
		LAST);

	web_url("accela_logo_v2.jpg_2", 
		"URL=https://av-pt-ferrari.accela.com/security/images/accela_logo_v2.jpg", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t448.inf", 
		LAST);

	web_url("hook.png", 
		"URL=https://av-pt-ferrari.accela.com/security/images/hook.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t449.inf", 
		LAST);

	web_url("login-bar.gif_2", 
		"URL=https://av-pt-ferrari.accela.com/security/images/login-bar.gif", 
		"Resource=1", 
		"Referer=https://av-pt-ferrari.accela.com/security/hostSignon.do?hostSignOn=true&signOff=true", 
		"Snapshot=t451.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("OSCEOLA_SignOut",LR_AUTO);

	return 0;
}