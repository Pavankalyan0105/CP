#lex_auth_012693763253788672132

def generate_ticket(airline,source,destination,no_of_passengers):
    t=[]
    #Write your logic here
    res = airline+':'+source[:3]+':'+destination[:3]+':';
    
    
    for i in range(1,no_of_passengers+1):
        t.append(res+str(100+i))
    
    if(len(t)<5):
        return t

    t = t[::-1]
   

    t = t[:5]
    #Use the below return statement wherever applicable
    return t

#Provide different values for airline,source,destination,no_of_passengers and test your program
print(generate_ticket("AI","Bangalore","London",2))