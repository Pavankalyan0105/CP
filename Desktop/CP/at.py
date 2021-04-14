#lex_auth_01269438070259712046

def count_names(name_list):
    count1=0
    count2=0
    
    for i in name_list:
        for j in range(1 , len(i)-1):
           if(i[j]+i[j+1] == 'at'):
               count1+=1
               
               
    for i in name_list:
        for j in range(1 , len(i)-2):
           if(i[j]+i[j+1] == 'at'):
               count1+=1
    
    #start writing your code here
    #Populate the variables: count1 and count2

    # Use the below given print statements to display the output
    # Also, do not modify them for verification to work
    print("_at -> ",count1)
    print("%at% -> ",count2)


#Provide different names in the list and test your program
name_list=["rat" , "saturday"]
count_names(name_list)