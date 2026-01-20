# Maze_Game-Dark_Space_C-
Dark Space is a console-based maze exploration game written in C++ where players navigate through two interconnected floors, one illuminated and one in darkness, using different visual representations for each environment.

🎮 Game Concept

Players explore a dual-floor maze with different visibility mechanics

Light Floor: Fully visible environment with standard symbols

Dark Floor: Limited visibility with simplified, obscured symbols

Objective: Navigate through obstacles, collect items, and manage resources

🏗️ Architecture

Core Components:

Main Program (main.cpp)

Handles command-line argument parsing

Manages game state and main loop

Controls floor switching logic

Library Interface (libDark.h)

Defines game constants and symbols

Declares data structures and function prototypes

Uses custom namespace DarkSpace

Implementation (libDark.cpp)

Contains game logic implementation

World initialization and memory management

Player movement and rendering systems

🎯 Key Features

Game Elements:

Player (P/.): Navigable character

Torches (^): Light sources

Walls (@): Obstacles

Fuse Boxes (#): Electrical elements

Stairwells (=): Floor transitions

Fuses (*): Collectible items

Darkness: Special mechanic for obscured floor

Movement System

Four-directional movement (W/A/S/D)

Boundary checking

Multi-floor navigation

Object interaction detection

Technical Implementation

Custom 2D array type (TwoDArray)

Dynamic memory allocation/deallocation

Random world generation

Separate rendering systems for light/dark modes

Error handling for command-line arguments

🚀 Getting Started

Compilation:

bash

g++ main.cpp libDark.cpp -o DarkSpace

Execution:

bash
./DarkSpace <rows> <cols> <stairwells> <fuses>

Controls:

W: Move Up

A: Move Left

S: Move Down

D: Move Right

F: Quit Game

🔧 Development Status

⚠️ Work in Progress - Some features are partially implemented:

Player movement between floors

Object placement system

Complete game state management

Victory/defeat conditions

📂 File Structure

text
DarkSpace/
├── main.cpp          # Entry point and game loop
├── libDark.h         # Header with declarations/constants
├── libDark.cpp       # Core game implementation
└── README.md         # Project documentation
🛠️ Technical Details
Language: C++ (C++11 standard)

Dependencies: Standard Library only

Memory: Manual dynamic memory management

Platform: Console/terminal based

🎨 Design Philosophy
Clean separation between data representation and display

Extensible object system through constants

Modular architecture for easy feature addition

Memory-safe resource management

📈 Future Enhancements

Potential areas for development:

Complete game win/lose conditions

Score tracking system

Enhanced AI or enemies

Procedural level generation

Save/load functionality

Graphical interface upgrade

This project demonstrates C++ game development fundamentals including memory management, 2D array manipulation, and console-based user interaction
