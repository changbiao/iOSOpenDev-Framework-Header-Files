/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MCObject.h>

@class NSMutableSet, NSRecursiveLock, MCSlide, MCFilter, NSSet, NSString, MCPlug, NSArray;

@interface MCAnimationPath : MCObject {
	NSString *mKey;	// 12 = 0xc
	NSMutableSet *mKeyframes;	// 16 = 0x10
	NSRecursiveLock *mKeyframesLock;	// 20 = 0x14
	MCPlug *mPlugIfPlugAnimationPath;	// 24 = 0x18
	MCSlide *mSlideIfSlideAnimationPath;	// 28 = 0x1c
	MCFilter *mFilterIfFilterAnimationPath;	// 32 = 0x20
	MCPlug *mCachedParentPlug;	// 36 = 0x24
	NSArray *mCachedOrderedKeyframes;	// 40 = 0x28
}
@property(copy) NSString *key;	// G=0x3b71; S=0x3b49; @synthesize=mKey
@property(assign) MCPlug *plugIfPlugAnimationPath;	// G=0x1b29; S=0x1b39; @synthesize=mPlugIfPlugAnimationPath
@property(assign) MCSlide *slideIfSlideAnimationPath;	// G=0x1b09; S=0x1b19; @synthesize=mSlideIfSlideAnimationPath
@property(assign) MCFilter *filterIfFilterAnimationPath;	// G=0x1ae9; S=0x1af9; @synthesize=mFilterIfFilterAnimationPath
@property(readonly, assign) NSArray *orderedKeyframes;	// G=0x4a25; 
@property(readonly, assign) NSSet *keyframes;	// G=0x4b31; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3ac9
- (id)init;	// 0x39c9
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x4f45
- (void)demolish;	// 0x4d7d
- (id)imprint;	// 0x4be1
// declared property getter: - (id)keyframes;	// 0x4b31
- (unsigned)countOfKeyframes;	// 0x4ad5
// declared property getter: - (id)orderedKeyframes;	// 0x4a25
- (double)relativeTimeForKeyframe:(id)keyframe;	// 0x458d
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time;	// 0x4569
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time offsetKind:(int)kind;	// 0x43e1
- (id)createKeyframeWithFunction:(id)function atTime:(double)time offsetKind:(int)kind forDuration:(double)duration;	// 0x4241
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time;	// 0x4215
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time offsetKind:(int)kind;	// 0x405d
- (id)createKeyframeWithVector:(XXStruct_Te64nB)vector atTime:(double)time;	// 0x4025
- (id)createKeyframeWithVector:(XXStruct_Te64nB)vector atTime:(double)time offsetKind:(int)kind;	// 0x3e89
- (void)removeKeyframe:(id)keyframe;	// 0x3d89
- (void)removeAllKeyframes;	// 0x3be1
- (id)description;	// 0x3b89
// declared property getter: - (id)filterIfFilterAnimationPath;	// 0x1ae9
// declared property setter: - (void)setFilterIfFilterAnimationPath:(id)path;	// 0x1af9
// declared property getter: - (id)slideIfSlideAnimationPath;	// 0x1b09
// declared property setter: - (void)setSlideIfSlideAnimationPath:(id)path;	// 0x1b19
// declared property getter: - (id)plugIfPlugAnimationPath;	// 0x1b29
// declared property setter: - (void)setPlugIfPlugAnimationPath:(id)path;	// 0x1b39
// declared property getter: - (id)key;	// 0x3b71
// declared property setter: - (void)setKey:(id)key;	// 0x3b49
@end