CreateTicket()
{
	while(compelete == 1){
		ActionFirst();
	
		ticket[1]=atoi(lr_eval_string("{PriceTickets_1}"));
		ticket[2]=atoi(lr_eval_string("{PriceTickets_2}"));
		ticket[3]=atoi(lr_eval_string("{PriceTickets_3}"));
		ticket[4]=atoi(lr_eval_string("{PriceTickets_4}"));
		

		flight[1]=lr_eval_string("{OFlight_1}");
		flight[2]=lr_eval_string("{OFlight_2}");
		flight[3]=lr_eval_string("{OFlight_3}");
		flight[4]=lr_eval_string("{OFlight_4}");

		k = 1;
		i = 1;
		j = 0;
		b = 1;
		c = 0;
		
		for(i;i<=4;i++){
			if(ticket[i]>100 && ticket[i]<500){
				trueticket[k++] = flight[i];
				j++;
				}
		}
		
		if(j>=1) {
			lr_output_message("Price First Ticket 1 = %d", ticket[1]);
			lr_output_message("Price First Ticket 2 = %d", ticket[2]);
			lr_output_message("Price FirstTicket 3 = %d", ticket[3]);
			lr_output_message("Price First Ticket 4 = %d", ticket[4]);
			
			lr_output_message("First Flight Details 1 = %s", flight[1]);
			lr_output_message("First Flight Details 2 = %s", flight[2]);
			lr_output_message("First Flight Details 3 = %s", flight[3]);
			lr_output_message("First Flight Details 4 = %s", flight[4]);
			MakeFirstTicket();
			compelete = 0;
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
				
				k = 1;
				i = 1;
				j = 0;
				b = 1;
				c = 0;
				
				for(b;b<=4;b++){
					if(ticket1[b]>100 && ticket1[b]<500){
						businessticket[k++] = flight1[b];
						c++;
					}
				} 	
		
		
				if(c>=1) {
					lr_output_message("Price Business Ticket 1 = %d", ticket1[1]);
					lr_output_message("Price Business Ticket 2 = %d", ticket1[2]);
					lr_output_message("Price Business Ticket 3 = %d", ticket1[3]);
					lr_output_message("Price Business Ticket 4 = %d", ticket1[4]);
			
					lr_output_message("Business Flight Details 1 = %s", flight1[1]);
					lr_output_message("Business Flight Details 2= %s", flight1[2]);
					lr_output_message("Business Flight Details 3= %s", flight1[3]);
					lr_output_message("Business Flight Details 4= %s", flight1[4]);
					MakeBusinessTicket();
					compelete = 0;
				}
		
			}	
		}
	
	return 0;
}
