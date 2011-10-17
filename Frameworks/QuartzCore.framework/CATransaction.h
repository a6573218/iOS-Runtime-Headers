/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CATransaction : NSObject  {
}

+ (id)completionBlock;
+ (void)setDisableActions:(BOOL)arg1;
+ (id)valueForKey:(id)arg1;
+ (void)synchronize;
+ (void)flush;
+ (void)begin;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (void)commit;
+ (void)setCompletionBlock:(id)arg1;
+ (void)setAnimationTimingFunction:(id)arg1;
+ (double)animationDuration;
+ (unsigned int)currentState;
+ (void)activate;
+ (void)unlock;
+ (void)lock;
+ (void)setAnimationDuration:(double)arg1;
+ (BOOL)disableActions;
+ (BOOL)beginWithoutBlocking;
+ (id)animationTimingFunction;

- (void)_addTimer:(struct __CFRunLoopTimer { }*)arg1;

@end