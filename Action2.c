Action2()
{
	
	ActionFirst();
	
	ticket[1]=atoi(lr_eval_string("{PriceTickets_1}"));
	ticket[2]=atoi(lr_eval_string("{PriceTickets_2}"));
	ticket[3]=atoi(lr_eval_string("{PriceTickets_3}"));
	ticket[4]=atoi(lr_eval_string("{PriceTickets_4}"));
	
	
	flight[1]=lr_eval_string("{OFlight_1}");
	flight[2]=lr_eval_string("{OFlight_2}");
	flight[3]=lr_eval_string("{OFlight_3}");
	flight[4]=lr_eval_string("{OFlight_4}");

	for(i;i<=4;i++){
		if(ticket[i]>100 && ticket[i]<500){
			trueticket[k++] = flight[i];
			j++;
			}
	}
	
	if(j>=1) {
		MakeFirstTicket(); //Вызов билета от 100 до 500
	}	else {
		
			ActionBusiness();
		
			ticket1[1]=atoi(lr_eval_string("{PriceTickets_1}"));
			ticket1[2]=atoi(lr_eval_string("{PriceTickets_2}"));
			ticket1[3]=atoi(lr_eval_string("{PriceTickets_3}"));
			ticket1[4]=atoi(lr_eval_string("{PriceTickets_4}"));
	
	
			flight1[1]=lr_eval_string("{OFlight_1}");
			flight1[2]=lr_eval_string("{OFlight_2}");
			flight1[3]=lr_eval_string("{OFlight_3}");
			flight1[4]=lr_eval_string("{OFlight_4}");
			
			for(b;b<=4;b++){
				if(ticket1[b]>100 && ticket1[b]<500){
					businessticket[k++] = flight1[b];
					c++;
				}
			}	 

			if(c>=1) {
				MakeBusinessTicket();

			}
		}	
	
	return 0;
}
