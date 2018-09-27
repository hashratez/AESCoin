// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "\n    o      ooooooooooo  oooooooo8       oooooooo8              o88               \n"
        "   888      888    88  888            o888     88   ooooooo    oooo  oo oooooo    \n"
        "  8  88     888ooo8     888oooooo     888         888     888   888   888   888   \n"
        " 8oooo88    888    oo          888    888o     oo 888     888   888   888   888   \n"
        "o88o  o888o o888ooo8888 o88oooo888      888oooo88    88ooo88    o888o o888o o888o \n";

const std::string nonWindowsAsciiArt = 
      "\n                                                                         		 \n"
        "    o      ooooooooooo  oooooooo8       oooooooo8              o88         	 \n"
        "   888      888    88  888            o888     88   ooooooo    oooo  oo oooooo    \n"
        "  8  88     888ooo8     888oooooo     888         888     888   888   888   888   \n"
        " 8oooo88    888    oo          888    888o     oo 888     888   888   888   888   \n"
        "o88o  o888o o888ooo8888 o88oooo888      888oooo88    88ooo88    o888o o888o o888o \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
