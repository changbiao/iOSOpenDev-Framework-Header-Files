/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/MSMMCSProtocol.h>
#import <CoreMediaStream/MSPublishStorageProtocol.h>

@class NSMutableDictionary;
@protocol MSPublishStorageProtocolDelegate;

@interface MSPublishMMCSProtocol : MSMMCSProtocol <MSPublishStorageProtocol> {
@private
	id<MSPublishStorageProtocolDelegate> _delegate;	// 28 = 0x1c
	NSMutableDictionary *_itemIDToAssetDict;	// 32 = 0x20
	unsigned long long *_itemIDs;	// 36 = 0x24
	const char **_signatures;	// 40 = 0x28
	char **_authTokens;	// 44 = 0x2c
	unsigned *_itemFlags;	// 48 = 0x30
	int _itemsInFlight;	// 52 = 0x34
}
@property(assign, nonatomic) id<MSPublishStorageProtocolDelegate> delegate;	// G=0x150e1; S=0x150f1; @synthesize=_delegate
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x150f1
// declared property getter: - (id)delegate;	// 0x150e1
- (void)_putItemsFailure;	// 0x14ee5
- (void)_requestCompleted;	// 0x14d2d
- (void)_putItemDone:(unsigned long long)done error:(id)error;	// 0x14ba9
- (void)publishAssets:(id)assets URL:(id)url;	// 0x1482d
- (id)_getUTIFromItem:(unsigned long long)item;	// 0x14705
- (void)_closeFDForAsset:(id)asset;	// 0x14625
- (int)_getFileDescriptorFromItem:(unsigned long long)item;	// 0x14471
- (void)computeHashForAsset:(id)asset;	// 0x1418d
- (void)dealloc;	// 0x1414d
- (void)deactivate;	// 0x140f9
- (id)initWithPersonID:(id)personID;	// 0x1407d
@end