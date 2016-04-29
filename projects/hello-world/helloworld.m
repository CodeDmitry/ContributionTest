/**
 * Hello World written in NeXTSTEP supported objective-C.
 * Written by Dmitry Makhnin.
 */
#import <Foundation/Foundation.h>

int main(int argc, char **argv)
{
    NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
    NSLog(@"Hello, World!");
    [pool drain];

    return 0;
}