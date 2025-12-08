# School Database (SQLite)

This project contains a relational database built using SQLite.  
It models a school system with students, courses, assignments, tasks, and grading.

---

## Database Overview

The database consists of the following tables:

| Table | Description |
|-------|-------------|
| `Student` | Stores student information and majors |
| `Course` | Stores course names and descriptions |
| `Assignment` | Assignments given in each course |
| `Task` | Tasks belonging to assignments |
| `Completion` | Which student completed which task and when |
| `Credits` | Grades and credits earned for a course |

#er


Student → Credits → Course → Assignment → Task → Completion → Student
