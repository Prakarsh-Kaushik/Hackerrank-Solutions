#Problem 6
#Given a year, determine whether it is a leap year. If it is a leap year, return the Boolean True, otherwise return False.
#The year can be evenly divided by 4, is a leap year, unless:
#The year can be evenly divided by 100, it is NOT a leap year, unless:
#The year is also evenly divisible by 400. Then it is a leap year.

def is_leap(year):
    if year % 4 == 0 and (year%100!=0 or year%400==0):
       leap = True
    else :
        leap = False
    
    return leap

year = int(input())
print(is_leap(year))


#Other method by importing calender library and checking year with isleap() method
#import calendar
#def is_leap(year):    
#   return calendar.isleap(year) 
#
#year = int(input())
#print(is_leap(year))