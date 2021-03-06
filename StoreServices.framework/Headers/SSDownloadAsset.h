/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSEntity.h>

@class SSURLRequestProperties, NSString, NSArray, NSURLRequest;

@interface SSDownloadAsset : SSEntity {
@private
	int _assetType;	// 28 = 0x1c
	SSURLRequestProperties *_localProperties;	// 32 = 0x20
}
@property(readonly, assign) SSURLRequestProperties *URLRequestProperties;	// G=0xd5fd; 
@property(readonly, assign, getter=isExternal) BOOL external;	// G=0xdc11; 
@property(readonly, assign) NSString *finalizedPath;	// G=0xdbd5; 
@property(readonly, assign) NSString *downloadPath;	// G=0xdbb9; 
@property(readonly, assign) NSString *downloadFileName;	// G=0xdb85; 
@property(readonly, assign) long long fileSize;	// G=0xdbd9; 
@property(readonly, assign) NSArray *sinfs;	// G=0xd519; 
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0xd535; 
@property(readonly, assign) int assetType;	// G=0xdb75; converted property
+ (id)assetWithURL:(id)url type:(int)type;	// 0xdac9
+ (long long)_setValuesMessage;	// 0xd5a1
+ (long long)_getValueMessage;	// 0xd599
+ (long long)_getExternalValuesMessage;	// 0xd591
+ (long long)_existsMessage;	// 0xd589
- (id)_copyURLRequestProperties;	// 0xdc41
// declared property getter: - (BOOL)isExternal;	// 0xdc11
// declared property getter: - (long long)fileSize;	// 0xdbd9
// declared property getter: - (id)finalizedPath;	// 0xdbd5
// declared property getter: - (id)downloadPath;	// 0xdbb9
// declared property getter: - (id)downloadFileName;	// 0xdb85
// converted property getter: - (int)assetType;	// 0xdb75
- (id)initWithURLRequest:(id)urlrequest type:(int)type;	// 0xdb49
- (void *)copyXPCEncoding;	// 0xd9dd
- (int)_legacyAssetType;	// 0xd9cd
- (id)_initWithDownloadMetadata:(id)downloadMetadata type:(id)type;	// 0xd625
// declared property getter: - (id)URLRequestProperties;	// 0xd5fd
- (void)_resetLocalIVars;	// 0xd5a9
// declared property getter: - (id)URLRequest;	// 0xd535
// declared property getter: - (id)sinfs;	// 0xd519
- (long long)bytesDownloaded;	// 0xd4e1
- (void)dealloc;	// 0xd495
- (id)initWithURLRequest:(id)urlrequest;	// 0xd421
@end
