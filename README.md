# OpenSanity

OpenSanity is a source code restoration project for Crash Twinsanity.
With additional help of Smartkin and BetaM, i was working in Ghidra on Crash Twinsanity executable file. As a result, most of data structures, classes and virtual tables were restored, as well stray global functions were grouped as class members. This allowed for more clean and readable code.
Simple code generation script was made to create C++ project with all class and method defenitions.

What you should know about this project:
* This is deeply WIP. There is a lot of work to be done despite all the progress that was made. It will be a long time until it's something visually working, yet alone playable.
* The code is ugly. Right now beautification is not a task and due to reference being Ghidra pseudo-c code, thre is a lot of ugly stuff like GLOBAL object and so on
* Names are not final. SaveSystem might be MainMenu, Oleg might be UI Manager, GameContext might be GameSettings. Naming is also low priority right now

This code is Work In Progress. Repository was made for me and everyone interested in to track progress of the project.
Right now it does most of initialization, including DirectX and enters game loop, calling methods of unimplemented controllers.

If you have any questions, you can contact me anywhere on the internet, example given, my Discord server: https://discord.gg/9zkuJ2zq

Big thanks to Smartkin, BetaM, ManDude and many other people for help and support.
