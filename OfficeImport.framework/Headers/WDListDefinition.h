/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class WDStyle, NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WDListDefinition : XXUnknownSuperclass {
@private
	int mType;	// 4 = 0x4
	NSMutableArray *mLevels;	// 8 = 0x8
	int mListId;	// 12 = 0xc
	WDDocument *mDocument;	// 16 = 0x10
	WDStyle *mListStyle;	// 20 = 0x14
	WDStyle *mListStyleLink;	// 24 = 0x18
}
@property(assign) int type;	// G=0x28d6f9; S=0x13a6c1; converted property
@property(retain) id listStyle;	// G=0x28d709; S=0x13a6d1; converted property
@property(retain) id listStyleLink;	// G=0x28d719; S=0x1902c5; converted property
@property(assign) int listId;	// G=0x28d729; S=0x139f41; converted property
// converted property getter: - (int)type;	// 0x28d6f9
// converted property setter: - (void)setType:(int)type;	// 0x13a6c1
- (int)levelCount;	// 0xa10c9
- (id)levelAt:(int)at;	// 0xa1165
- (id)addLevel;	// 0x13a031
// converted property getter: - (id)listStyle;	// 0x28d709
// converted property setter: - (void)setListStyle:(id)style;	// 0x13a6d1
// converted property getter: - (id)listStyleLink;	// 0x28d719
// converted property setter: - (void)setListStyleLink:(id)link;	// 0x1902c5
// converted property getter: - (int)listId;	// 0x28d729
// converted property setter: - (void)setListId:(int)anId;	// 0x139f41
- (id)document;	// 0x1902b5
- (id)initWithDocument:(id)document;	// 0x139e8d
- (void)dealloc;	// 0xa2859
@end
