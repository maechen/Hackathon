*******************************
SILVER HOLLOW HackCu-9 PROJECT
------------------------------
*******************************
By Mae Chen and Elizabeth Coleman

HOW TO COMPILE:
----------------
g++ -std=c++11 gameDriver.cpp map.cpp farm.cpp church.cpp bank.cpp school.cpp store.cpp character.cpp tree.cpp -o run_app
./run_app

PROJECT DESCRIPTION:
---------------------
The command line game is based in a small town with a main character (the user) whose goal is to explore the town, and eventually to escape it. The town features several small establishments such as a bank, farm, church, school, and store; each with their own character and dialog inside. How you interact with the characters and the specific buildings will change the outcome for you. At each building, aside from your house and spawning point you are able to collect one of two items stored there and add them to your inventory, which is displayed at all times.
  *Important Note: once your inventory is full, you can only switch the last item in your inventory, so keep that in mind while collecting items.*
Pay close attention to the character dialog as well, such as the banker talking about the vault, or the priest speaking about the trees. How the game finishes will be up to you as the user, so have fun, and good luck!

FOR BEST USER EXPERIENCE:
---------------------------
Play with terminal on full screen.

CREDITS:
-------------------
The Map class uses a template provided by CU Boulder CSCI 1300 2022 Fall Semester's class.
