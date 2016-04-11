--[[ 
     A hello world program written in Lua programming language.
     Written by Dmitry Makhnin.
--]]
function main(arg)
    if #arg < 1 then
        print "you wrote no arguments.";
        print "But hello anyway!";
        return 1;
    end

    for i = 1, #arg do
        io.write(arg[i], " ");
    end

    return 0;
end


os.exit(main(arg));
