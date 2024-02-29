/**
* ---------------------------------------------------------------------
* @copyright
* Copyright 2024 Michelle Talley University of Central Arkansas
*
* @author: <student name>
* @course: Data Structures (CSCI 2320)
*
* @file main.cpp
* @brief Driver program for Binary Search Tree (BST) project
-----------------------------------------------------------------------
*/ 
#include <iostream>
#include <string>

#include "BST.h"

// File names
const std::string movie_file = "movie_queue.txt";
const std::string movie_file_updated = "movie_queue_updated.txt";

//---------------------------------------------------------------------
// Externalize all strings used in the program so we can easily
// change them in one place to support internationalization
//---------------------------------------------------------------------

// Prompts
const std::string prompt_command = "Enter a command: ";
const std::string prompt_movie = "Enter a movie title: ";

// Menu options
const std::string menu = "Menu: ";
const std::string menu_search = "Search for a movie";
const std::string menu_add = "Add a movie";
const std::string menu_watch = "Watch a movie";
const std::string menu_delete = "Delete a movie";
const std::string menu_print = "Print the movie titles (in alphabetical order)";
const std::string menu_exit = "eXit";

// Commands
const std::string command_search = "s";
const std::string command_add = "a";
const std::string command_watch = "w";
const std::string command_delete = "d";
const std::string command_print = "p";
const std::string command_exit = "x";

// Messages
const std::string msg_exit = "Goodbye! Have a great day!";

// Note: The name of the movie should precede these messages
const std::string msg_movie_found = " found.";
const std::string msg_movie_not_found = " not found.";
const std::string msg_movie_added = " added.";
const std::string msg_movie_present = " already present.";
const std::string msg_movie_watched = " watched.";
const std::string msg_movie_deleted = " removed.";

const std::string msg_movie_list = "Movie titles:";
const std::string msg_movie_list_empty = "Your movie list is empty.";

// Errors
const std::string error_file_open = "Error: Unable to open file: ";
const std::string error_invalid_command = "Invalid command.  Please try again.";

int main()
{
    // Create BST
    // Load BST from a file
    // Display menu and process commands
    // This code should work, but it is not complete
    /*  
    while (!done && !std::cin.eof())
    {
        std::cout << std::endl << menu << std::endl;
        std::cout << command_search << ": " << menu_search << std::endl;
        std::cout << command_add << ": " << menu_add << std::endl;
        std::cout << command_watch << ": " << menu_watch << std::endl;
        std::cout << command_delete << ": " << menu_delete << std::endl;
        std::cout << command_print << ": " << menu_print << std::endl;
        std::cout << command_exit << ": " << menu_exit << std::endl;

        std::cout << prompt_command;
        std::string command;
        std::getline(std::cin, command);
        std::cout << std::endl << std::endl;

        if (command == command_exit)
        {
            done = true;
            std::cout << msg_exit << std::endl;
        }
        // process remaining commands in else statements
    }
    */

    // Save movie tree to file in alphabetical order separated by newlines
 
    return EXIT_SUCCESS;
}
