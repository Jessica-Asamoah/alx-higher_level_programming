-- Creates the database hbtn_0d_usa and the table cities
-- Creates database
CREATE DATABASE IF NOT EXISTS hbtn_0d_usa;
-- Use database
USE hbtn_0d_usa;
-- Creates a table
CREATE TABLE IF NOT EXISTS cities (id INT UNIQUE AUTO_INCREMENT NOT NULL,
state_id INT NOT NULL,
name VARCHAT(256) NOT NULL,
PRIMARY KEY(id),
FOREIGN KEY(state_id) REFERENCES states(id));
