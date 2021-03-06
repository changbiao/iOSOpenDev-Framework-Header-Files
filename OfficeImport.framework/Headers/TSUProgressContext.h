/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TSUProgressContext.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class TSUProgressStage, NSDate;

__attribute__((visibility("hidden")))
@interface TSUProgressContext : XXUnknownSuperclass {
@private
	TSUProgressStage *m_currentStage;	// 4 = 0x4
	NSDate *m_lastReportTime;	// 8 = 0x8
	double m_lastProgressReport;	// 12 = 0xc
}
+ (id)_singletonAlloc;	// 0x2d4229
+ (id)sharedContext;	// 0x2d43c5
+ (id)allocWithZone:(NSZone *)zone;	// 0x2d433d
+ (void)reset;	// 0x2d4171
+ (void)addProgressObserver:(id)observer selector:(SEL)selector;	// 0x2d4175
+ (void)removeProgressObserver:(id)observer;	// 0x2d4179
+ (void)createStageWithSteps:(double)steps takingSteps:(double)steps2;	// 0x2d417d
+ (void)createStageWithSteps:(double)steps;	// 0x2d4181
+ (void)nextSubStageWillTakeThisManyOfMySteps:(double)nextSubStage;	// 0x2d4185
+ (void)endStage;	// 0x2d4189
+ (void)advanceProgress:(double)progress;	// 0x2d418d
+ (void)setProgress:(double)progress;	// 0x2d4259
+ (void)setPercentageProgressFromCPProgressContext:(double)cpprogressContext;	// 0x2d4191
+ (void)setMessage:(id)message;	// 0x2d4195
+ (double)currentPosition;	// 0x2d4199
+ (double)overallProgress;	// 0x2d41ad
- (id)retain;	// 0x2d4159
- (unsigned)retainCount;	// 0x2d415d
- (void)release;	// 0x2d4165
- (id)autorelease;	// 0x2d4169
- (id)copyWithZone:(NSZone *)zone;	// 0x2d416d
@end

@interface TSUProgressContext (Private)
- (id)init;	// 0x2d4a61
- (void)dealloc;	// 0x2d4aa9
- (void)_reset;	// 0x2d4b21
- (id)currentStage;	// 0x2d41c1
- (void)reportProgress:(double)progress;	// 0x2d41d1
@end
