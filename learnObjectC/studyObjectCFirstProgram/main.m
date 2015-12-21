#import <Foundation/Foundation.h>

@interface Dog : NSObject
{ // 字段
    @protected
        int ID;
    @public
        int age;
    @private
        float price;
}
// 写方法
// init开头的都是构造函数
- (id) init;
- (id) initWithID:(int)newID;
- (id) initWithID:(int)newID andAge:(int)newAge;
- (id) initWithID:(int)newID andAge:(int)newAge andPrice:(float)newPrice;

- (void) setID:(int)newID;
- (int) getID;

- (void) setAge:(int)newAge;
- (int) getAge;

- (void) setPrice:(float)newPrice;
- (int) getPrice;

- (void) setID:(int)newID andAge:(int)newAge;
- (void) setID:(int)newID andAge:(int)newAge andPrice:(float)newPrice;

@end

@implementation Dog

- (id) init
{
    return [self initWithID: 1];
}

- (id) initWithID:(int)newID
{
    return [self initWithID:newID andAge:18];

}

- (id) initWithID:(int)newID andAge:(int)newAge
{
    return [self initWithID:newID andAge:newAge andPrice:60.0f];

}

- (id) initWithID:(int)newID andAge:(int)newAge andPrice:(float)newPrice
{
    self = [super init];
    if (self) {
        ID = newID;
        age = newAge;
        price = newPrice;
    }
    return self;
}

- (void) setID:(int)newID
{
    ID = newID;
}
- (int) getID
{
    return ID;
}

- (void) setAge:(int)newAge
{
    age = newAge;
}
- (int) getAge
{
    return age;
}

- (void) setPrice:(float)newPrice
{
    price = newPrice;
}
- (int) getPrice
{
    return price;
}

- (void) setID:(int)newID andAge:(int)newAge
{
    ID = newID;
    age = newAge;
}

- (void) setID:(int)newID andAge:(int)newAge andPrice:(float)newPrice
{
    ID = newID;
    age = newAge;
    price = newPrice;
}


@end

int main(int argc, const char * argv[])
{
    NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
        NSLog(@"hello world!");

        // write code here
        Dog *dog1 = [Dog alloc];
        [dog1 init];

        int ID = [dog1 getID];
        int age = [dog1 getAge];
        float price = [dog1 getPrice];
        printf("dog1:\nid is %d.\nage is %d.\nprice is %f.\n", ID, age, price);

        Dog *dog2 = [[Dog alloc] initWithID:100 andAge:26 andPrice:88.0f];
        ID = [dog2 getID];
        age = [dog2 getAge];
        price = [dog2 getPrice];
        printf("dog2:\nid is %d.\nage is %d.\nprice is %f.\n", ID, age, price);

        [dog2 setID:2010 andAge:28 andPrice:8888];
        ID = [dog2 getID];
        age = [dog2 getAge];
        price = [dog2 getPrice];
        printf("dog1:\nid is %d.\nage is %d.\nprice is %f.\n", ID, age, price);


    [pool release];
    return 0;
}
