@import Foundation;
@import ObjectiveC;

void swizzle(Class class, SEL originalAction, SEL swizzledAction);

// Exported from the main executable
@interface NSUserDefaults(LiveContainer)
+ (instancetype)lcSharedDefaults;
+ (instancetype)lcUserDefaults;
+ (NSString *)lcAppUrlScheme;
@end
