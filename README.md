# Tutorial404
Intro to structures and Classes exercise

Create a Vector2 struct with X and Y for position <----- Done

Create a Pawn class <------ Done
It should contain Position, Health, alive and a greeting <----- Done
Note : Added pure virtuals for Greet, Draw and Update. 
This is a classic example of when to create an abstract class. 
This is also known as an interface in C#.

Create a Player class that derives from the Pawn class <----- Done
Override the greeting. <----- Done
Note: I also had to define Draw and Update to make sure the
Player goes from being an abstract class to a class

Creat a Monster class that derives from the Pawn class <----- Done
Override the greeting.
Note: I overrodde the correct functions to go from an abstract class to a class.
Extra content.

Create a map class that draws the player. Add a virtual draw and update function to the Pawn class.
In the player class create an input to move the character

Extra Extra content

Make the Monster move closer to the player by one step every update call
