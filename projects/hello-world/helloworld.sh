#!/bin/bash
#+-----------------------------------------------------------------------------+
#| A Hello World program written in UNIX shell script.                         |
#| Written by Dmitry Makhnin.                                                  |
#+-----------------------------------------------------------------------------+

function main 
{
    if [ $# -eq 0 ]; then
        echo "You wrote no arguments."
        echo "But hello anyway!"
        return 1
    fi

    for i in "$@"; do
        echo -n "$i "
    done
    
    return 3
}

(main $@ && exit $?)