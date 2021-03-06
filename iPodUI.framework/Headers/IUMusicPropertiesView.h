/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>
#import <iPodUI/iPodUI-Structs.h>

@class NSArray;

@interface IUMusicPropertiesView : XXUnknownSuperclass {
	NSArray *_properties;	// 48 = 0x30
	BOOL _center;	// 52 = 0x34
}
- (void)drawRect:(CGRect)rect;	// 0xd8a5
- (void)setProperties:(id)properties;	// 0xd84d
- (void)dealloc;	// 0xd801
- (id)initWithFrame:(CGRect)frame properties:(id)properties center:(BOOL)center;	// 0xd6a1
@end
