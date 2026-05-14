# Live Session Notes


## To Cover
- [x] Please go over course structure and requirements and the structure of github? 
- [x] I am very confused about what is supposed to be completed by when, and where is the source of truth for what we are      
      supposed to be working on. Could you please explain?
- [x] Can you explain the conversion of arrays to pointers when passed into functions?
- [x] What does a struct look like in memory? In StructPractice.c (as an example), would &person1 be the same as &person1.name?


## Class Structure

* Follow Canvas Modules
  * 1 module a week
* Fridays - Due dates for assignments
  * discussions main one week, follow up by next week
  * homeworks, every other week (but meant to span both weeks)
* Challenge Problem / Coding Practice
  * Submitted with homework and shared to your Lab
* Lab - weekly  (attendance based)

**Overall goal** - Focus on learning! We have flexible submission windows for a reason. We want you to redo until correct, which means submit early, plan to resubmit at least once. Exceptions are 'summative' activites such as the midterm and final - those are submit once. 


## Memory Structure

Fill this in as we step through sample_code.c.

### Main Stack Frame (example)

| Address (estimate) | Bytes | Element (top to bottom)            | Comments               |
| ------------------ | ----- | ---------------------------------- | ---------------------- |
| 0x7FFF10A0         | 4     | `person2.id`                       |                        |
| 0x7FFF10A4         | 1     | `person2.name[0]`                  |                        |
| 0x7FFF10A5         | 1     | `person2.name[1]`                  |                        |
| 0x7FFF10A6         | 1     | `person2.name[2]`                  |                        |
| 0x7FFF10A7         | 1     | `person2.name[3]`                  |                        |
| 0x7FFF10A8         | 1     | `person2.name[4]`                  |                        |
| 0x7FFF10A9         | 1     | `person2.name[5]`                  |                        |
| 0x7FFF10AA         | 1     | `person2.name[6]`                  |                        |
| 0x7FFF10AB         | 1     | `person2.name[7]`                  |                        |
| 0x7FFF10AC         | 1     | `person2.name[8]`                  |                        |
| 0x7FFF10AD         | 1     | `person2.name[9]`                  |                        |
| 0x7FFF10AE         | 1     | `person2.name[10]`                 |                        |
| 0x7FFF10AF         | 1     | `person2.name[11]`                 |                        |
| 0x7FFF10B0         | 1     | `person2.name[12]`                 |                        |
| 0x7FFF10B1         | 1     | `person2.name[13]`                 |                        |
| 0x7FFF10B2         | 1     | `person2.name[14]`                 |                        |
| 0x7FFF10B3         | 1     | `person2.name[15]`                 |                        |
| 0x7FFF10B4         | 0-4   | `person2` tail padding (if any)    |                        |
| 0x7FFF1060         | 1     | `person1.name[0]`                  |                        |
| 0x7FFF1061         | 1     | `person1.name[1]`                  |                        |
| 0x7FFF1062         | 1     | `person1.name[2]`                  |                        |
| 0x7FFF1063         | 1     | `person1.name[3]`                  |                        |
| 0x7FFF1064         | 1     | `person1.name[4]`                  |                        |
| 0x7FFF1065         | 1     | `person1.name[5]`                  |                        |
| 0x7FFF1066         | 1     | `person1.name[6]`                  |                        |
| 0x7FFF1067         | 1     | `person1.name[7]`                  |                        |
| 0x7FFF1068         | 1     | `person1.name[8]`                  |                        |
| 0x7FFF1069         | 1     | `person1.name[9]`                  |                        |
| 0x7FFF106A         | 1     | `person1.name[10]`                 |                        |
| 0x7FFF106B         | 1     | `person1.name[11]`                 |                        |
| 0x7FFF106C         | 1     | `person1.name[12]`                 |                        |
| 0x7FFF106D         | 1     | `person1.name[13]`                 |                        |
| 0x7FFF106E         | 1     | `person1.name[14]`                 |                        |
| 0x7FFF106F         | 1     | `person1.name[15]`                 |                        |
| 0x7FFF1070         | 4     | `person1.age`                      |                        |
| 0x7FFF1078         | 8     | `person1.gpa`                      |                        |
| 0x7FFF1048         | 4     | `nums[0]` 0000 0000 0000 1010      |  10                    |
| 0x7FFF104C         | 4     | `nums[1]`                          |  20                    |
| 0x7FFF1050         | 4     | `nums[2]`                          |  30                    |
| 0x7FFF1054         | 4     | `nums[3]`                          |  40                    |
| 0x7FFF1058         | 4     | `nums[4]`                          |  50                    |



Note: this is a teaching sketch, not a strict ABI layout. Array indexing always moves forward as `nums[0]`, `nums[1]`, `nums[2]` in contiguous memory, while stack growth and exact local placement are platform/compiler details.


### array_param_demo Stack Frame (example)

| Address (estimate) | Bytes | Element (top to bottom)   | Values                               |
| ------------------ | ----- | -----------------------   | ------------------------------------ |
| 0x7FFF0FD0         | 8     | Temporary expression: `*(arr_param + 1)` |                       |
| 0x7FFF0FC8         | 8     | Return address / saved frame data |                              |
| 0x7FFF0FC0         | 8     | `len` parameter            |    5                                |
| 0x7FFF0FB8         | 8     | `arr_param` pointer value  |    0x7FFF1048                       |





