(**
 * A Hello World program written in F#.
 * Written by Dmitry Makhnin.
 * Actually, it's taken from 
 *     http://www.codeproject.com/Articles/738093/Fsharp-Hello-World
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
