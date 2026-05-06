-- Create STUDENT table
CREATE TABLE STUDENT (
    Name VARCHAR(50),
    StudentNumber INT PRIMARY KEY,
    Class INT,
    Major VARCHAR(10)
);

-- Create COURSE table
CREATE TABLE COURSE (
    CourseName VARCHAR(100),
    CourseNumber VARCHAR(10) PRIMARY KEY,
    CreditHours INT,
    Department VARCHAR(10)
);

-- Create SECTION table
CREATE TABLE SECTION (
    SectionIdentifier INT PRIMARY KEY,
    CourseNumber VARCHAR(10),
    Semester VARCHAR(10),
    Year INT,
    Instructor VARCHAR(50),
    FOREIGN KEY (CourseNumber) REFERENCES COURSE(CourseNumber)
);

-- Create GRADE_REPORT table
CREATE TABLE GRADE_REPORT (
    StudentNumber INT,
    SectionIdentifier INT,
    Grade CHAR(1),
    PRIMARY KEY (StudentNumber, SectionIdentifier),
    FOREIGN KEY (StudentNumber) REFERENCES STUDENT(StudentNumber),
    FOREIGN KEY (SectionIdentifier) REFERENCES SECTION(SectionIdentifier)
);

-- Create PREREQUISITE table
CREATE TABLE PREREQUISITE (
    CourseNumber VARCHAR(10),
    PrerequisiteNumber VARCHAR(10),
    PRIMARY KEY (CourseNumber, PrerequisiteNumber),
    FOREIGN KEY (CourseNumber) REFERENCES COURSE(CourseNumber),
    FOREIGN KEY (PrerequisiteNumber) REFERENCES COURSE(CourseNumber)
);


-- Insert data into STUDENT


INSERT INTO STUDENT VALUES
('Smith', 17, 1, 'CS'),
('Brown', 8, 2, 'CS');


-- Insert data into COURSE


INSERT INTO COURSE VALUES
('Intro to Computer Science', 'CS1310', 4, 'CS'),
('Data Structures', 'CS3320', 4, 'CS'),
('Discrete Mathematics', 'MATH2410', 3, 'MATH'),
('Database', 'CS3380', 3, 'CS');


-- Insert data into SECTION

INSERT INTO SECTION VALUES
(85, 'MATH2410', 'Fall', 98, 'King'),
(92, 'CS1310', 'Fall', 98, 'Anderson'),
(102, 'CS3320', 'Spring', 99, 'Knuth'),
(112, 'MATH2410', 'Fall', 99, 'Chang'),
(119, 'CS1310', 'Fall', 99, 'Anderson'),
(135, 'CS3380', 'Fall', 99, 'Stone');


-- Insert data into GRADE_REPORT


INSERT INTO GRADE_REPORT VALUES
(17, 112, 'B'),
(17, 119, 'C'),
(8, 85, 'A'),
(8, 92, 'A'),
(8, 102, 'B'),
(8, 135, 'A');


-- Insert data into PREREQUISITE


INSERT INTO PREREQUISITE VALUES
('CS3380', 'CS3320'),
('CS3380', 'MATH2410'),
('CS3320', 'CS1310');