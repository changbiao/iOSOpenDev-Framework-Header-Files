/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>
#import <OfficeImport/EXCell.h>


__attribute__((visibility("hidden")))
@interface EXCell : XXUnknownSuperclass {
}
+ (void)edCellFromXmlCellElement:(xmlNode *)xmlCellElement edRowInfo:(EDRowInfo **)info edRowBlock:(id)block edRowBlocks:(id)blocks state:(id)state;	// 0x1a8765
@end

@interface EXCell (Private)
+ (int)edCellTypeFromXmlCellElement:(xmlNode *)xmlCellElement stringIndex:(bool *)index;	// 0x1a8a25
+ (bool)edBoolFromXmlBoolString:(id)xmlBoolString;	// 0x1fba2d
+ (int)edErrorFromXmlErrorString:(id)xmlErrorString;	// 0x1f836d
@end
