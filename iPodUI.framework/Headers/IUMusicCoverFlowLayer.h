/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>
#import <iPodUI/iPodUI-Structs.h>

@class NSInvocation;

@interface IUMusicCoverFlowLayer : XXUnknownSuperclass {
	NSInvocation *_endTransitionInvocation;	// 52 = 0x34
}
- (void)transition:(unsigned)transition withCoverFrame:(CGRect)coverFrame;	// 0x7a99
- (void)forceCurrentTransitionToEnd;	// 0x7a39
- (void)noteCurrentTransitionDidEnd;	// 0x7a0d
- (void)_endTransition:(unsigned)transition withCoverFrame:(CGRect)coverFrame;	// 0x79b1
- (BOOL)isInAnimatedTransition;	// 0x7999
- (void)dealloc;	// 0x794d
@end