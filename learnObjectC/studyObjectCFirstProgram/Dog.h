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
