/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDShape : ODDLayoutObject {
@private
	int mType;	// 4 = 0x4
	int mPresetType;	// 8 = 0x8
	NSMutableArray *mAdjustments;	// 12 = 0xc
}
@property(assign) int type;	// G=0x2af9e1; S=0x2af9f1; converted property
@property(assign) int presetType;	// G=0x2afa01; S=0x2afa11; converted property
- (id)init;	// 0x2afa31
- (void)dealloc;	// 0x2afab9
// converted property getter: - (int)type;	// 0x2af9e1
// converted property setter: - (void)setType:(int)type;	// 0x2af9f1
// converted property getter: - (int)presetType;	// 0x2afa01
// converted property setter: - (void)setPresetType:(int)type;	// 0x2afa11
- (id)adjustments;	// 0x2afa21
- (void)addAdjustment:(id)adjustment;	// 0x2afa95
@end