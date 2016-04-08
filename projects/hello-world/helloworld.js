/**
 * A hello world program in NodeJS.
 * Written by Dmitry Makhnin.
 *
 * A contrived example of many concepts, few actually write code this way.
 */

function main(argv)
{
    if (argv.length <= 0) {
        console.log('default call: hello, world!');
        return 1;
    }
     
    process.stdout.write('advanced call: ');
    argv.forEach(function(item) {
        process.stdout.write(item + ' ');
    });
    process.stdout.write("\n");

    return 0;
}

/**
 * return whatever main returns, and pass everything except 
 *     node, program name to main. 
 */
process.exit(main(process.argv.splice(2, process.argv.length - 2)))
