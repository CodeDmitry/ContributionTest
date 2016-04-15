/**
 * Hello World program written in the D programming language.
 *
 * Written by Dmitry Makhnin.
 */
import std.stdio;
 
int main(string[] args)
{
    if (args.length < 2) {
        writeln("You have entered no arguments!");
        writeln("But hello anyway!");
        return 1;
    }
 
    for (int i = 1; i < args.length; ++i) {
        writef("%s ", args[i]);
    }
 
    return 0;
}