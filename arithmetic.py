from array import *
age=array('i',[])
sum=0
first_age=int(input("Enter your first age: "))
common_difference=int(input("Enter the common difference: "))
participants=int(input("Enter the number of participants: "))
for i in range(participants):
    age.append(first_age+i*common_difference)
    sum=sum+age[i]
    print("The ages of paticipant :",i+1," is", age[i],"\n")
average=sum/participants
print("The average age of the participants is: ",average)