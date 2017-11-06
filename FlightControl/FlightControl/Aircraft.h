// Matthew Dixon 02/11/17
// Header for Aircraft class
// Assignment 1 - OOP

#pragma once
#include <string>
#include <iostream>

class Aircraft
{
private:
	int groundSpeed_;
	int altitude_;
	int heading_;
	std::string flightNumber_;
	std::string airline_;
	std::string aircraftType_;
	std::string gridReference_;
	
public:
	Aircraft();
	Aircraft(std::string flightNumber_, std::string airline_, std::string aircraftType_,
		int groundSpeed_, int altitude_, std::string gridReference_, int heading);
	~Aircraft();

		void SetFlightNumber(std::string flightNumber);
		std::string GetFlightNumber() const;

		void SetAirline(std::string airline);
		std::string GetAirline() const;

		void SetAircraftType(std::string aircraftType);
		std::string GetAircraftType() const;

		void SetGroundSpeed(int groundSpeed);
		int GetGroundSpeed() const;

		void SetAltitude(int altitube);
		int GetAltitube() const;

		void SetGridReference(std::string gridReference);
		std::string GetGridReference() const;

		void SetHeading(int heading);
		int GetHeading() const;

};