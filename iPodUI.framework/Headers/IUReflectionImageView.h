/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>

@class UIImageView, UIColor, IUReflectionView;

@interface IUReflectionImageView : XXUnknownSuperclass {
	float _reflectionHeight;	// 48 = 0x30
	float _spacing;	// 52 = 0x34
	float _reflectionAlpha;	// 56 = 0x38
	BOOL _useImageSize;	// 60 = 0x3c
	unsigned _nonSquareImage : 1;	// 61 = 0x3d
	UIImageView *_imageView;	// 64 = 0x40
	IUReflectionView *_reflection;	// 68 = 0x44
	UIColor *_imageBackgroundColor;	// 72 = 0x48
}
@property(retain, nonatomic) UIColor *imageBackgroundColor;	// G=0xa8d11; S=0xa8b95; @synthesize=_imageBackgroundColor
@property(assign, nonatomic) BOOL nonSquareImage;	// G=0xa8791; S=0xa8bf9; 
// declared property getter: - (id)imageBackgroundColor;	// 0xa8d11
- (void)setUseImageSize:(BOOL)size;	// 0xa8d01
- (void)setReflectionVisible:(BOOL)visible;	// 0xa8c79
- (void)setReflectionAlphaWhenVisible:(float)visible;	// 0xa8c1d
// declared property setter: - (void)setNonSquareImage:(BOOL)image;	// 0xa8bf9
// declared property setter: - (void)setImageBackgroundColor:(id)color;	// 0xa8b95
- (void)setImage:(id)image;	// 0xa87a5
// declared property getter: - (BOOL)nonSquareImage;	// 0xa8791
- (void)dealloc;	// 0xa871d
- (id)initWithReflectionHeight:(float)reflectionHeight spacing:(float)spacing;	// 0xa86a9
- (id)init;	// 0xa8691
@end