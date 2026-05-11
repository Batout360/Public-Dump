
--1. CREATE DATABASE AND TABLES

CREATE DATABASE InsuranceDB;

USE InsuranceDB;

-- PERSON TABLE
CREATE TABLE PERSON (
    driver_id INT PRIMARY KEY,
    name VARCHAR(50),
    address VARCHAR(100)
);

-- CAR TABLE
CREATE TABLE CAR (
    license VARCHAR(20) PRIMARY KEY,
    model VARCHAR(50),
    year INT
);

-- ACCIDENT TABLE
CREATE TABLE ACCIDENT (
    report_number INT PRIMARY KEY,
    accident_date DATE,
    location VARCHAR(100)
);

-- OWNS TABLE
CREATE TABLE OWNS (
    driver_id INT,
    license VARCHAR(20),
    PRIMARY KEY (driver_id, license),
    FOREIGN KEY (driver_id) REFERENCES PERSON(driver_id),
    FOREIGN KEY (license) REFERENCES CAR(license)
);

-- PARTICIPATED TABLE
CREATE TABLE PARTICIPATED (
    driver_id INT,
    license VARCHAR(20),
    report_number INT,
    damage_amount DECIMAL(10,2),
    PRIMARY KEY (driver_id, license, report_number),
    FOREIGN KEY (driver_id) REFERENCES PERSON(driver_id),
    FOREIGN KEY (license) REFERENCES CAR(license),
    FOREIGN KEY (report_number) REFERENCES ACCIDENT(report_number)
);




-- 2(a). INSERT RECORDS (AT LEAST 5 IN EACH TABLE)


-- PERSON
INSERT INTO PERSON VALUES
(1, 'John Smith', 'New York'),
(2, 'Albert Johnson', 'California'),
(3, 'David Miller', 'Texas'),
(4, 'Robert Brown', 'Florida'),
(5, 'James Wilson', 'Chicago');

-- CAR
INSERT INTO CAR VALUES
('KA01AA1111', 'Toyota', 1998),
('KA02BB2222', 'Honda', 2005),
('KA03CC3333', 'Hyundai', 1999),
('KA04DD4444', 'Ford', 2012),
('KA05EE5555', 'BMW', 1995);

-- ACCIDENT
INSERT INTO ACCIDENT VALUES
(101, '2012-01-10', 'New York'),
(102, '2012-03-15', 'California'),
(103, '2013-07-21', 'Texas'),
(104, '2011-09-18', 'Florida'),
(105, '2012-12-01', 'Chicago');

-- OWNS
INSERT INTO OWNS VALUES
(1, 'KA01AA1111'),
(2, 'KA02BB2222'),
(3, 'KA03CC3333'),
(4, 'KA04DD4444'),
(5, 'KA05EE5555');

-- PARTICIPATED
INSERT INTO PARTICIPATED VALUES
(1, 'KA01AA1111', 101, 25000),
(2, 'KA02BB2222', 102, 8000),
(3, 'KA03CC3333', 103, 15000),
(4, 'KA04DD4444', 104, 5000),
(5, 'KA05EE5555', 105, 30000);




-- 2(b). LIST ALL CAR DETAILS OWNED BY JOHN SMITH

SELECT C.*
FROM PERSON P
JOIN OWNS O ON P.driver_id = O.driver_id
JOIN CAR C ON O.license = C.license
WHERE P.name = 'John Smith';




-- 2(c). ADD A NEW ACCIDENT


INSERT INTO ACCIDENT VALUES
(106, '2014-06-20', 'Boston');




-- 2(d). LIST NUMBER OF ACCIDENTS ON EACH DATE


SELECT accident_date, COUNT(*) AS total_accidents
FROM ACCIDENT
GROUP BY accident_date;




-- 2(e). LIST CARS MADE BEFORE 2000


SELECT *
FROM CAR
WHERE year < 2000;




-- 3(a). INSERT RECORDS
-- PERSON
INSERT INTO PERSON VALUES
(1, 'John Smith', 'New York'),
(2, 'Albert Johnson', 'California'),
(3, 'David Miller', 'Texas'),
(4, 'Robert Brown', 'Florida'),
(5, 'James Wilson', 'Chicago');

-- CAR
INSERT INTO CAR VALUES
('KA01AA1111', 'Toyota', 1998),
('KA02BB2222', 'Honda', 2005),
('KA03CC3333', 'Hyundai', 1999),
('KA04DD4444', 'Ford', 2012),
('KA05EE5555', 'BMW', 1995);

-- ACCIDENT
INSERT INTO ACCIDENT VALUES
(101, '2012-01-10', 'New York'),
(102, '2012-03-15', 'California'),
(103, '2013-07-21', 'Texas'),
(104, '2011-09-18', 'Florida'),
(105, '2012-12-01', 'Chicago');

-- OWNS
INSERT INTO OWNS VALUES
(1, 'KA01AA1111'),
(2, 'KA02BB2222'),
(3, 'KA03CC3333'),
(4, 'KA04DD4444'),
(5, 'KA05EE5555');

-- PARTICIPATED
INSERT INTO PARTICIPATED VALUES
(1, 'KA01AA1111', 101, 25000),
(2, 'KA02BB2222', 102, 8000),
(3, 'KA03CC3333', 103, 15000),
(4, 'KA04DD4444', 104, 5000),
(5, 'KA05EE5555', 105, 30000);







-- 3(b). FIND TOTAL NUMBER OF PEOPLE WHO OWNED
-- CARS INVOLVED IN ACCIDENTS IN THE YEAR 2012


SELECT COUNT(DISTINCT P.driver_id) AS total_people
FROM PERSON P
JOIN OWNS O ON P.driver_id = O.driver_id
JOIN PARTICIPATED PA ON O.license = PA.license
JOIN ACCIDENT A ON PA.report_number = A.report_number
WHERE YEAR(A.accident_date) = 2012;




-- 3(c). DELETE RECORDS WHERE DAMAGE AMOUNT < 10000


DELETE FROM PARTICIPATED
WHERE damage_amount < 10000;



-- 3(d). DISPLAY NUMBER OF CARS OWNED BY ALBERT


SELECT P.name, COUNT(O.license) AS number_of_cars
FROM PERSON P
JOIN OWNS O ON P.driver_id = O.driver_id
WHERE P.name = 'Albert Johnson'
GROUP BY P.name;