/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDPivotItem : XXUnknownSuperclass {
@private
	unsigned mRepeatedItemCounts;	// 4 = 0x4
	int mType;	// 8 = 0x8
	EDCollection *mItemIndexes;	// 12 = 0xc
}
@property(assign) unsigned repeatedItemCounts;	// G=0x20db5d; S=0x20dc21; converted property
@property(assign) int type;	// G=0x20db6d; S=0x20bfc9; converted property
+ (id)pivotItem;	// 0x20bef9
- (id)init;	// 0x20bf41
- (void)dealloc;	// 0x20df15
// converted property getter: - (unsigned)repeatedItemCounts;	// 0x20db5d
// converted property setter: - (void)setRepeatedItemCounts:(unsigned)counts;	// 0x20dc21
// converted property getter: - (int)type;	// 0x20db6d
// converted property setter: - (void)setType:(int)type;	// 0x20bfc9
- (id)itemIndexes;	// 0x20bfd9
@end
