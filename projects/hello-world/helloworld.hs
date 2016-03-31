{-- 
    Hello World in Haskell.
    
    Written by Dmitry Makhnin.
--}

main :: IO ()

main = 
    putStr "Hello, " >>
    putStr "World!" >>
    putStr "\n"
