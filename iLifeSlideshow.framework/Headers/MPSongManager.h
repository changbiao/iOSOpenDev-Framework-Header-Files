/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/MPSongManager.h>
#import <iLifeSlideshow/XXUnknownSuperclass.h>

@class NSMutableDictionary, NSString, NSRecursiveLock;

@interface MPSongManager : XXUnknownSuperclass {
	NSMutableDictionary *mSongDescriptions;	// 4 = 0x4
	NSMutableDictionary *mSongBeats;	// 8 = 0x8
	NSString *mSongCacheFilePath;	// 12 = 0xc
	NSRecursiveLock *mSongLock;	// 16 = 0x10
	void *mDaFunc;	// 20 = 0x14
}
+ (id)sharedManager;	// 0x66f6d
+ (void)releaseSharedManager;	// 0x66f41
- (id)init;	// 0x66fe5
- (void)dealloc;	// 0x66e95
- (id)beatsForSongAtPath:(id)path progressCallback:(/*function-pointer*/ void *)callback context:(void *)context;	// 0x66fb5
@end

@interface MPSongManager (Private)
- (id)cachedBeatsForSongAtPath:(id)path;	// 0x674e5
@end

@interface MPSongManager (Internal)
- (void)storeBeats:(id)beats forPath:(id)path;	// 0x674b9
@end
