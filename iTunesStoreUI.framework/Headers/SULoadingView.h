/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class UIColor, UILabel, UIActivityIndicatorView;

@interface SULoadingView : XXUnknownSuperclass {
	int _activityIndicatorStyle;	// 48 = 0x30
	UILabel *_label;	// 52 = 0x34
	UIActivityIndicatorView *_progressIndicator;	// 56 = 0x38
	unsigned _style;	// 60 = 0x3c
	UIColor *_textColor;	// 64 = 0x40
	UIColor *_textShadowColor;	// 68 = 0x44
}
@property(retain, nonatomic) UIColor *textShadowColor;	// G=0x267f5; S=0x26759; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x267bd; S=0x266f5; 
@property(assign, nonatomic) int activityIndicatorStyle;	// G=0x26449; S=0x2664d; 
- (void)_setupSubviews;	// 0x2682d
// declared property getter: - (id)textShadowColor;	// 0x267f5
// declared property getter: - (id)textColor;	// 0x267bd
// declared property setter: - (void)setTextShadowColor:(id)color;	// 0x26759
// declared property setter: - (void)setTextColor:(id)color;	// 0x266f5
- (void)setStyle:(unsigned)style;	// 0x26679
// declared property setter: - (void)setActivityIndicatorStyle:(int)style;	// 0x2664d
- (id)newTextLabel;	// 0x264b1
- (id)newProgressIndicator;	// 0x26459
// declared property getter: - (int)activityIndicatorStyle;	// 0x26449
- (void)sizeToFit;	// 0x26355
- (void)layoutSubviews;	// 0x26225
- (void)dealloc;	// 0x2619d
- (id)initWithFrame:(CGRect)frame;	// 0x260d1
@end
