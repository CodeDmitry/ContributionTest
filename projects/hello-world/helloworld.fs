(**
 * A Hello World program written in F#.
 * Written by Dmitry Makhnin.
 * Actually, it's taken from 
 *     https://en.wikibooks.org/wiki/F_Sharp_Programming/Basic_Concepts
 *     the only part I actually added was this comment.
 *     it's a fancy comment though.
 *     and takes up the vast majority of the source file...
 **)
open System
 
[<EntryPoint>]
let main argv = 
    printfn "Hello World" 
    Console.ReadLine() |> ignore
    0 