/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class <NSCacheDelegate>, NSLock;

@interface GEOCache : NSCache {
    void *_hotseatCache;
    NSLock *_hotseatLock;
    unsigned long long _hotseatTouch;
    unsigned int _minCapacity;
    <NSCacheDelegate> *_proxiedDelegate;
    BOOL _proxiedDelegateListens;
}

@property(readonly) unsigned int minCapacity;

- (id)_addHotseatValue:(id)arg1 forKey:(id)arg2;
- (void)_enteredBackground:(id)arg1;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithMinCapacity:(unsigned int)arg1;
- (unsigned int)minCapacity;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned int)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end