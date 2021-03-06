/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */


#import <BulletinBoard/NSCoding.h>


@interface BBThumbnailSizeConstraints : NSObject <NSCoding> {
@private
	int _constraintType;	// 4 = 0x4
	float _fixedWidth;	// 8 = 0x8
	float _fixedHeight;	// 12 = 0xc
	float _fixedDimension;	// 16 = 0x10
	float _minAspectRatio;	// 20 = 0x14
	float _maxAspectRatio;	// 24 = 0x18
	float _thumbnailScale;	// 28 = 0x1c
}
@property(assign, nonatomic) float thumbnailScale;	// G=0x16535; S=0x16545; @synthesize=_thumbnailScale
@property(assign, nonatomic) float maxAspectRatio;	// G=0x16515; S=0x16525; @synthesize=_maxAspectRatio
@property(assign, nonatomic) float minAspectRatio;	// G=0x164f5; S=0x16505; @synthesize=_minAspectRatio
@property(assign, nonatomic) float fixedDimension;	// G=0x164d5; S=0x164e5; @synthesize=_fixedDimension
@property(assign, nonatomic) float fixedHeight;	// G=0x164b5; S=0x164c5; @synthesize=_fixedHeight
@property(assign, nonatomic) float fixedWidth;	// G=0x16495; S=0x164a5; @synthesize=_fixedWidth
@property(assign, nonatomic) int constraintType;	// G=0x16475; S=0x16485; @synthesize=_constraintType
// declared property setter: - (void)setThumbnailScale:(float)scale;	// 0x16545
// declared property getter: - (float)thumbnailScale;	// 0x16535
// declared property setter: - (void)setMaxAspectRatio:(float)ratio;	// 0x16525
// declared property getter: - (float)maxAspectRatio;	// 0x16515
// declared property setter: - (void)setMinAspectRatio:(float)ratio;	// 0x16505
// declared property getter: - (float)minAspectRatio;	// 0x164f5
// declared property setter: - (void)setFixedDimension:(float)dimension;	// 0x164e5
// declared property getter: - (float)fixedDimension;	// 0x164d5
// declared property setter: - (void)setFixedHeight:(float)height;	// 0x164c5
// declared property getter: - (float)fixedHeight;	// 0x164b5
// declared property setter: - (void)setFixedWidth:(float)width;	// 0x164a5
// declared property getter: - (float)fixedWidth;	// 0x16495
// declared property setter: - (void)setConstraintType:(int)type;	// 0x16485
// declared property getter: - (int)constraintType;	// 0x16475
- (BOOL)areReasonable;	// 0x162d9
- (void)encodeWithCoder:(id)coder;	// 0x161ad
- (id)initWithCoder:(id)coder;	// 0x16055
@end
