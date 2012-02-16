/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OIXMLNode.h>

@class NSString, OIXMLElement;

__attribute__((visibility("hidden")))
@interface OIXMLDocument : OIXMLNode {
@private
	OIXMLElement *_rootElement;	// 16 = 0x10
	NSString *_version;	// 20 = 0x14
	NSString *_encoding;	// 24 = 0x18
}
@property(retain) OIXMLElement *rootElement;	// G=0x8befd; S=0xc5c49; converted property
- (id)initWithRootElement:(id)rootElement;	// 0xc5c01
- (void)dealloc;	// 0x90d75
- (id)copyWithZone:(NSZone *)zone;	// 0x2ceffd
- (void)setVersion:(id)version;	// 0xc5c8d
// converted property setter: - (void)setRootElement:(id)element;	// 0xc5c49
// converted property getter: - (id)rootElement;	// 0x8befd
- (void)setCharacterEncoding:(id)encoding;	// 0xc5cd1
- (id)description;	// 0x2cefed
- (id)createMutableXMLString;	// 0xffc65
- (id)XMLString;	// 0xffc3d
- (id)openingTagString;	// 0xc5f15
- (id)contentString;	// 0x2cefdd
- (id)closingTagString;	// 0x8bf35
@end