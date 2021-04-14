vuser_end()
{
	/* Itinerary */
	
	web_reg_save_param_ex(
    	"ParamName=totalcharge", 
    	"LB/IC=Total Charge: \$ ", 	
    	"RB/IC= <BR",								
    	"Ordinal=1",
    	LAST);
	
	web_reg_save_param_ex(
    	"ParamName=fldetails", 
		"LB= :  ",
        "RB=\.<br>",								
    	"Ordinal=1",
    	LAST);
	
	web_reg_save_param_ex(
    	"ParamName=flclass", 
		"LB= ",
        "RB= class ticket for :</b><br/>",								
    	"Ordinal=1",
    	LAST);
	
	web_url("Itinerary Button", 
		"URL={Host}/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={Host}/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	as[1] = lr_eval_string("{fldetails}");
	lr_output_message("          ");
	lr_output_message("***Result***");
	lr_output_message("Ticket Price= %d",atoi(lr_eval_string("{totalcharge}")));
	lr_output_message("Ticket Class= %s",lr_eval_string("{flclass}"));
	lr_output_message("Flight Details= %s",as[1]);

	/* Sign Off */

	web_url("SignOff Button", 
		"URL={Host}/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={Host}/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
