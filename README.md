# Calculate-Long-Distance-Call-Cost

Contents
---------------------
* File Contents
* Introduction
* Algorithm
* Requirements

## File Contents
	
	Calculate_LongDistance_Call_Cost.cpp (program file containing code)

## Introduction
Book practice project from Problem Solving With C++ Chapter 3. Project 1.
Program computes the cost of a long distance call. Demonstrates ability to take user input and calculate costs given various costs and circumstances in c++.
Written using Microsoft Visual Studio. 

## Algorithm

		1. declare constants: cost per minute at peak hours(0.40), cost per minute at off hours (0.25), and cost per minute on weekends (0.15)
		2. initialize variables for user input: day of week, time call started, length of call (this one must be int)
			2a. day of week will be stored in two char variables, one for each letter
			2b. initialize variable for total price
		3. all work must be placed in loop
			3a. set variables to null values
			3b. prompt user for input of weekday, call time, call length
			3c. check whether day is weekday or weekend
				3ca. if weekday, check the start time
					3caa. if within peak hours, charge peak rate
					3cab. else charge off hours rate
				3cb. if weekend, charge weekend rate
			3d. output price to user
				3da. use magic formula to ensure price uses 2 decimal places
			3e. prompt user to continue

## Requirements
No requirements or modules needed for running this program. 
