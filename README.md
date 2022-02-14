Bomberman is a popular game where a player is trapped in a room and is expected to
get out by finding the key. In this version of the game, the room consists of breakable
bricks, unbreakable walls and Villains.

Create a NxN map where N is always an even number (Max Size = 26)
P - Player
* - Wall
B - Brick
V - Villain
K - Key
-> First row and First column for location identification.
-> Walls position is always fixed

The Player can move in all 8 directions.
W - Move up
S - Move down
A - Move left
D - Move right
Q - Move diagonally up left
Z - Move diagonally down left
E - Move diagonally up right
C - Move diagonally down right

-> The player can not move to a position if there is a Wall or Brick
-> If there is a Villain where the player moves. The player dies
-> If there is a Key where the player moves. The player wins the game
-> The player can plant a bomb to destroy Bricks and Villains.
X - Bomb
-> Print the map each and every time after an input

The player need to grab the key to win the game.
