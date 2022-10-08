/*
Write the definition of a function named timeOnHighway that receives three parameters, all of type double: mileEndingPoint, mileStartingPoint, and speed.
The first parameter indicates the mile marker on an interstate at which a vehicle goes to.
The second parameter indicates the mile marker on an interstate at which a vehicle starts at.
The third parameter indicates the speed of the vehicle in miles per hour.
The function returns the number of hours it takes a vehicle to go from the starting mile marker to the ending one.
The function has a default value for the speed: 55 miles per hour, and a default value for mileStartingPoint: 0.0.
*/

double timeOnHighway(double mileEndingPoint, double mileStartingPoint = 0.0, double speed = 55)
{
    return (mileEndingPoint - mileStartingPoint) / speed;
}
