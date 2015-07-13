#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
    @autoreleasepool {
        
        NSLog(@"Hello, World!");

        NSString * str1 = @"Hello world!";

        NSString * str2 = [[NSString alloc] initWithString: str];
        
        NSString * str3 = [[NSString alloc] initWithUTF8String: "hello world!"];

        NSString * str4 = [[NSString alloc] initWithFormat: @"hello %d %c", 5, 'A'];

        NSString * str5 = [NSString stringWithUTF8String: "hello world!"];

        NSString * str6 = [NSString stringWithFormat: @"%d %@ %c", 5, @"hello", 'B'];

        NSString * str7 = [NSString stringWithString: str];
        
        NSLog(@"%@", str);
        NSLog(@"%@", str2);
        NSLog(@"%@", str3);
        NSLog(@"%@", str4);
        NSLog(@"%@", str5);
        NSLog(@"%@", str6);
        NSLog(@"%@", str7);
        
        [str2 release];
        [str3 release];
        [str4 release];
    }
}
