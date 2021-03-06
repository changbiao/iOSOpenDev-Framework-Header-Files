/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCDDelayedMedia.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface OADSubBlip : OCDDelayedMedia {
@private
	int mType;	// 12 = 0xc
	NSData *mData;	// 16 = 0x10
	CGSize mSizeInPoints;	// 20 = 0x14
	int mSizeInBytes;	// 28 = 0x1c
	CGRect mFrame;	// 32 = 0x20
}
@property(retain) id data;	// G=0x95911; S=0x958cd; converted property
@property(assign) CGSize sizeInPoints;	// G=0x29cddd; S=0x149449; converted property
@property(assign) long sizeInBytes;	// G=0x29cdf5; S=0x19539d; converted property
@property(assign) CGRect frame;	// G=0x29ce05; S=0x14945d; converted property
- (id)initWithData:(id)data type:(int)type;	// 0xbd6d1
- (void)dealloc;	// 0x90a01
// converted property getter: - (id)data;	// 0x95911
// converted property setter: - (void)setData:(id)data;	// 0x958cd
- (int)type;	// 0x95921
// converted property getter: - (CGSize)sizeInPoints;	// 0x29cddd
// converted property setter: - (void)setSizeInPoints:(CGSize)points;	// 0x149449
// converted property getter: - (long)sizeInBytes;	// 0x29cdf5
// converted property setter: - (void)setSizeInBytes:(long)bytes;	// 0x19539d
// converted property getter: - (CGRect)frame;	// 0x29ce05
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x14945d
- (bool)isLoaded;	// 0x95405
- (unsigned)hash;	// 0x29d579
- (BOOL)isEqual:(id)equal;	// 0x29d435
@end
