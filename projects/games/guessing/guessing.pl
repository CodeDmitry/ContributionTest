#!/usr/bin/perl
use warnings;

my $done;
my $gameOver;
my $secretNumber;

sub main {
    setup();
    
    while ($done == 0) {
        while ($gameOver == 0) {
            print "[guess] \$ ";
            my $guess = <STDIN>;
            chomp($guess);
            handle($guess);
        }
        print("Sam: Want to play again? [y/n] ");
        my $response = lc(<STDIN>);
        chomp $response;
        
        if ($response eq "y") {
            setup();
        } else {
            print("\nSam: Well played. Until next time.\n");
            $done = 1;
        }
    }
}

sub setup {
    $done = 0;
    $gameOver = 0;
    
    print "Sam: Welcome to my first game!\n";
    print "Sam: In this game, I will think up a number 1 to 10.\n";
    print "Sam: Your goal is to guess it!\n";
    $secretNumber = int(rand(10) + 1); 
    print "Sam: Let's begin. I have chosen a number.\n\n";
}

sub handle {
    my $guess = lc(shift);    
    
    if ($guess eq "q" || $guess eq "quit" || $guess eq "exit" ) {
        print("\nSam: Leaving so soon? Hope to see you again!\n");
        exit(0);
    }
    
    if ($guess eq $secretNumber) {
        print "Sam: You got it! My number was $secretNumber!\n\n";
        $gameOver = 1;
    } else {
        print "Sam: Sorry, my number is not $guess.\n\n";
    }
}

exit (main @ARGV)