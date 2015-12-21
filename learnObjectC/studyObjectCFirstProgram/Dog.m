#import "Dog.h"

@implementation Dog

- (id) init
{
    return [self initWithID: 1];
/*
    // self ×Ô¼º
    // super ¸¸Àà
    if (self) {
        ID = 2;
        age = 18;
        price = 60.0f;
    }
    return self;
*/
}

- (id) initWithID:(int)newID
{
    return [self initWithID:newID andAge:18];
    self = [super init];
    if (self) {
        ID = newID;
        age = 18;
        price = 60.0f;
    }
    return self;
}

- (id) initWithID:(int)newID andAge:(int)newAge
{
    return [self initWithID:newID andAge:newAge andPrice:60.0f];
/*
    self = [super init];
    if (self) {
        ID = newID;
        age = newAge;
        price = 60.0f;
    }
    return self;
*/
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
