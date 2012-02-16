/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/PBOfficeArtReaderClient.h>
#import <OfficeImport/XXUnknownSuperclass.h>
#import <OfficeImport/OABReaderClient.h>


__attribute__((visibility("hidden")))
@interface PBOfficeArtReaderClient : XXUnknownSuperclass <OABReaderClient> {
}
+ (void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;	// 0x7d59d
+ (void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;	// 0xcde51
+ (void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;	// 0x2116f1
+ (BOOL)escherIsFullySupported;	// 0x83365
+ (BOOL)tablesAreAllowed;	// 0xcd8e5
@end

@interface PBOfficeArtReaderClient (Private)
+ (void)readClientAnchorFromContainer:(id)container toDrawable:(id)drawable;	// 0x7dbe9
+ (void)readHyperlinkFromShapeContainerHolder:(id)shapeContainerHolder toDrawable:(id)drawable state:(id)state;	// 0x82899
+ (BOOL)readRecolorInfoFromClientDataHolder:(id)clientDataHolder toClientData:(id)clientData;	// 0x8289d
+ (void)addRecolorSpec:(const PptRecolorSpec *)spec toDictionary:(id)dictionary;	// 0x1c1285
+ (BOOL)readOleFromClientDataHolder:(id)clientDataHolder toGraphic:(id)graphic tgtClientData:(id)data state:(id)state;	// 0x82a59
+ (BOOL)readPlaceholderInfo:(id)info clientData:(id)data toGraphic:(id)graphic presentationState:(id)state;	// 0x823cd
+ (id)createTargetElementFromDrawable:(id)drawable clientData:(id)data buildType:(int)type;	// 0x21e1b5
@end