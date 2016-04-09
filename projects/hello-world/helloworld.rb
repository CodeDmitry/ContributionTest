#!/usr/bin/ruby
#+-----------------------------------------------------------------------------+
#| A contrived hello world program for the ruby programming language.          |
#| Written by Dmitry Makhnin.                                                  |
#+-----------------------------------------------------------------------------+

def main(argv)
    if argv.size == 0 then
        puts "It appears you have no arguments."
        puts "I'll say hello, world anyway!"
        return 1
    end

    argv.each { |arg|
        print arg + ' '
    }

    print "\n"

    return 0
end

exit main ARGV
