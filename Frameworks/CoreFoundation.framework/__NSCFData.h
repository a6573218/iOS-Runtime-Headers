/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFData : NSMutableData  {
    unsigned char _cfinfo[4];
    long _length;
    long _capacity;
    struct __CFAllocator { } *_bytesDeallocator;
    char *_bytes;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)finalize;
- (void)setLength:(unsigned int)arg1;
- (void*)mutableBytes;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (const void*)bytes;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (id)retain;
- (unsigned int)length;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;

@end