/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTask.h>

@class NSSet, NSString;

@interface CoreDAVContainerMultiGetTask : CoreDAVTask {
	NSSet *_urls;	// 120 = 0x78
	NSString *_appSpecificNamespace;	// 124 = 0x7c
	NSString *_appSpecificMultiGetNameSpace;	// 128 = 0x80
	NSString *_appSpecificMultiGetCommand;	// 132 = 0x84
	NSString *_appSpecificDataProp;	// 136 = 0x88
	Class _appSpecificDataItemClass;	// 140 = 0x8c
	BOOL _shouldIgnoreResponseErrors;	// 144 = 0x90
	NSSet *_additionalPropElements;	// 148 = 0x94
	NSSet *_parsedContents;	// 152 = 0x98
	NSSet *_missingURLs;	// 156 = 0x9c
}
@property(retain) NSSet *additionalPropElements;	// G=0x5731; S=0x5745; @synthesize=_additionalPropElements
@property(readonly, assign, nonatomic) NSSet *missingURLs;	// G=0x5799; @synthesize=_missingURLs
@property(readonly, assign) NSSet *parsedContents;	// G=0x5789; @synthesize=_parsedContents
@property(assign, nonatomic) BOOL shouldIgnoreResponseErrors;	// G=0x5769; S=0x5779; @synthesize=_shouldIgnoreResponseErrors
// declared property getter: - (id)missingURLs;	// 0x5799
// declared property getter: - (id)parsedContents;	// 0x5789
// declared property setter: - (void)setShouldIgnoreResponseErrors:(BOOL)ignoreResponseErrors;	// 0x5779
// declared property getter: - (BOOL)shouldIgnoreResponseErrors;	// 0x5769
// declared property setter: - (void)setAdditionalPropElements:(id)elements;	// 0x5745
// declared property getter: - (id)additionalPropElements;	// 0x5731
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x5279
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x5081
- (id)requestBody;	// 0x4cf9
- (id)httpMethod;	// 0x4ced
- (void)dealloc;	// 0x4c65
- (void)setAdditionalProperties:(id)properties onDataItem:(id)item;	// 0x4c61
- (id)copyAdditionalPropElements;	// 0x4c5d
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL appSpecificDataItemClass:(Class)aClass;	// 0x4b09
@end
