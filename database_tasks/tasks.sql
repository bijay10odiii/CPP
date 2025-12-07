-- CREATING ALL THE TABLES

-- CREATE TABLE Course (
--   course_id INTEGER PRIMARY KEY,
--   course_name TEXT NOT NULL,
--   course_description TEXT
-- );


-- CREATE TABLE Student (
--   student_id INTEGER PRIMARY KEY,
--   student_name TEXT NOT NULL,
--   major TEXT
-- );

-- CREATE TABLE Assignment (
--   assignment_id INTEGER PRIMARY KEY,
--   assignment_name TEXT NOT NULL,
--   course_id INTEGER,
--   FOREIGN KEY (course_id) REFERENCES Course(course_id)
-- );


-- CREATE TABLE Task (
--   task_id INTEGER PRIMARY KEY,
--   task_name TEXT NOT NULL,
--   assignment_id INTEGER,
--   FOREIGN KEY (assignment_id) REFERENCES Assignment(assignment_id)
-- );


-- CREATE TABLE Completion (
--   completion_id INTEGER PRIMARY KEY,
--   student_id INTEGER,
--   task_id INTEGER,
--   completion_time TEXT,
--   FOREIGN KEY (student_id) REFERENCES Student(student_id),
--   FOREIGN KEY (task_id) REFERENCES Task(task_id)
-- );


-- CREATE TABLE Credits (
--   credit_id INTEGER PRIMARY KEY,
--   student_id INTEGER,
--   course_id INTEGER,
--   grade INTEGER,
--   credits INTEGER,
--   FOREIGN KEY (student_id) REFERENCES Student(student_id),
--   FOREIGN KEY (course_id) REFERENCES Course(course_id)
-- );

--INSERTING SAMPLE VALUES

--COURSE TABLE
-- INSERT INTO Course (course_id, course_name, course_description)
-- VALUES
-- (1, 'Database Systems', 'Learn SQL and data modeling'),
-- (2, 'Web Development', 'Build backend and frontend applications'),
-- (3, 'IoT Fundamentals', 'Work with sensors and microcontrollers');

--STUDENT TABLE
-- INSERT INTO Student (student_id, student_name, major)
-- VALUES
-- (1, 'Alice Johnson', 'Software Engineering'),
-- (2, 'Bob Smith', 'Information Technology'),
-- (3, 'Carla Brown', 'Computer Science'),
-- (4, 'David Wilson', 'Electronics');

--ASSIGNMENT TABLE
-- INSERT INTO Assignment (assignment_id, assignment_name, course_id)
-- VALUES
-- (1, 'SQL Basics', 1),
-- (2, 'Joins & Queries', 1),
-- (3, 'Frontend Project', 2),
-- (4, 'Sensor Data API', 3);


--TASK TABLE
-- INSERT INTO Task (task_id, task_name, assignment_id)
-- VALUES
-- (1, 'Create Tables', 1),
-- (2, 'Insert Data', 1),
-- (3, 'Write SELECT Queries', 2),
-- (4, 'Write JOIN Queries', 2),
-- (5, 'Build Login Page', 3),
-- (6, 'API Sensor POST Request', 4),
-- (7, 'API Sensor GET Request', 4);

--CREDIT TABLE
-- INSERT INTO Credits (credit_id, student_id, course_id, grade, credits)
-- VALUES
-- (1, 1, 1, 5, 5),
-- (2, 2, 1, 3, 5),
-- (3, 3, 2, 4, 4),
-- (4, 1, 3, 5, 6);

--COMPLETION TABLE

-- INSERT INTO Completion (completion_id, student_id, task_id, completion_time)
-- VALUES
-- (1, 1, 1, '2024-12-28'),
-- (2, 1, 2, '2024-12-29'),
-- (3, 2, 3, '2025-01-02'),
-- (4, 3, 4, '2025-01-05'),
-- (5, 1, 6, '2024-12-30'),
-- (6, 1, 7, '2024-12-31');

