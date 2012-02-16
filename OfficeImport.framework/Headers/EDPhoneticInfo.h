/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDPhoneticInfo.h>
#import <OfficeImport/XXUnknownSuperclass.h>
#import <OfficeImport/EDImmutableObject.h>

@class EDResources, NSString, EDCollection;

__attribute__((visibility("hidden")))
@interface EDPhoneticInfo : XXUnknownSuperclass <EDImmutableObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mFontIndex;	// 8 = 0x8
	NSString *mString;	// 12 = 0xc
	int mType;	// 16 = 0x10
	int mAlign;	// 20 = 0x14
	EDCollection *mRuns;	// 24 = 0x18
	bool mDoNotModify;	// 28 = 0x1c
}
@property(assign) int type;	// G=0x250d39; S=0x17dd75; converted property
@property(assign) int align;	// G=0x250d49; S=0x17dde9; converted property
@property(retain) id string;	// G=0x250d59; S=0x17dd95; converted property
@property(retain) id font;	// G=0x250dd5; S=0x250d79; converted property
+ (id)phoneticInfoWithResources:(id)resources;	// 0x17dcbd
- (id)initWithResources:(id)resources;	// 0x17dd09
- (void)dealloc;	// 0x180e85
- (BOOL)isEqualToEDPhoneticInfo:(id)edphoneticInfo;	// 0x250ed5
- (BOOL)isEqual:(id)equal;	// 0x250e79
- (unsigned)hash;	// 0x250e1d
// converted property getter: - (int)type;	// 0x250d39
// converted property setter: - (void)setType:(int)type;	// 0x17dd75
// converted property getter: - (int)align;	// 0x250d49
// converted property setter: - (void)setAlign:(int)align;	// 0x17dde9
// converted property getter: - (id)string;	// 0x250d59
// converted property setter: - (void)setString:(id)string;	// 0x17dd95
// converted property getter: - (id)font;	// 0x250dd5
// converted property setter: - (void)setFont:(id)font;	// 0x250d79
- (id)runs;	// 0x17df3d
- (void)setDoNotModify:(bool)modify;	// 0x17de9d
@end

@interface EDPhoneticInfo (EDInternal)
@property(assign) unsigned fontIndex;	// G=0x250d69; S=0x17de09; converted property
// converted property getter: - (unsigned)fontIndex;	// 0x250d69
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x17de09
@end