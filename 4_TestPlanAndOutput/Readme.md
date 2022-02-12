TESTPLAN
---
High Level TestPlan
---
|      test id     |     Description     |    Exp I/P     |     Exp O/P    |
|------------------| --------------------| ---------------| ---------------|
|      HLR1        |   selecting reservation |   reservation option popsup  | booking opens  |
|      HLR2        |     No of seats     | selecting 2 seats| returns no of seats available|
|      HLR3        | name,from,to       |  user input taken| stored in mybooking|
|      HLR4        | to check my bookings| user select desired option| mybooking details are shown|
|      HLR5        | changing ticket| cancel ticket from menu| succesfully cancelled|


Low Level TestPlan
---
|      test id     |     Description     |    Exp I/P     |     Exp O/P    |
|------------------| --------------------| ---------------| ---------------|
|      LLR1        |   no of seats   |   no of seats exceed  | no seats available  |
