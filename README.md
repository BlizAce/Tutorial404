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
In the player class create an input to move the character.
Note: To do this I need enviroment objects. This required me to review some of the older code.
I created an object abstract class.
I then moved the Draw and Update declarations.
I added a ground class, fixed up my includes and added a GroundType enum.
The enum will provide a simple way to draw different characters.
I matched the enum value with the draw for the ground.
I added a game manager to contain the logic for the game.
I have also added a scene manager to help contain testing code.

Extra Extra content

Make the Monster move closer to the player by one step every update call
