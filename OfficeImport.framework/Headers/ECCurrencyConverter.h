/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ECCurrencyConverter.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ECCurrencyConverter : XXUnknownSuperclass {
@private
	NSMutableDictionary *mXlToLassoCurrencyCode;	// 4 = 0x4
	NSMutableDictionary *mLassoToXlCurrencyCode;	// 8 = 0x8
	NSMutableDictionary *mXlAccountingFormat;	// 12 = 0xc
	NSMutableDictionary *mXlToLassoCurrencyCodeBySymbol;	// 16 = 0x10
}
+ (id)currencyConverter;	// 0x255b31
- (void)dealloc;	// 0x25809d
- (id)lassoCurrencyCodeFromXl:(id)xl;	// 0x258125
- (id)xlCurrencyCodeFromLasso:(id)lasso;	// 0x255a4d
- (int)xlAccountFormatFromLasso:(id)lasso;	// 0x255acd
@end

@interface ECCurrencyConverter (Private)
- (void)populateDictionaries;	// 0x255b79
- (id)lassoCurrencyCodeForDollar;	// 0x258359
@end
