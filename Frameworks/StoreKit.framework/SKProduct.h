/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSLocale, NSString, NSDecimalNumber;

@interface SKProduct : NSObject  {
    id _internal;
}

@property(readonly) NSString * localizedDescription;
@property(readonly) NSString * localizedTitle;
@property(readonly) NSDecimalNumber * price;
@property(readonly) NSLocale * priceLocale;
@property(readonly) NSString * productIdentifier;


- (id)localizedTitle;
- (id)priceLocale;
- (id)productIdentifier;
- (id)price;
- (id)localizedDescription;
- (void)setLocale:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (void)dealloc;

@end