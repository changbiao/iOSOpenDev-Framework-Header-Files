/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class OADGraphicProperties, CHDChart, EDString, CHDFormula;

__attribute__((visibility("hidden")))
@interface CHDTitle : XXUnknownSuperclass {
@private
	CHDChart *mChart;	// 4 = 0x4
	bool mIsAutoGenerated;	// 8 = 0x8
	bool mPositionAutoGenerated;	// 9 = 0x9
	bool mSizeAutoGenerated;	// 10 = 0xa
	CHDFormula *mName;	// 12 = 0xc
	EDString *mLastCachedName;	// 16 = 0x10
	OADGraphicProperties *mGraphicProperties;	// 20 = 0x14
	double mRotation;	// 24 = 0x18
}
@property(retain) id lastCachedName;	// G=0x17792d; S=0x16bb1d; converted property
@property(retain) id name;	// G=0x266379; S=0x16b9ad; converted property
@property(retain) id graphicProperties;	// G=0x17793d; S=0x16bb65; converted property
@property(assign) bool isAutoGenerated;	// G=0x201bc5; S=0x16ba4d; converted property
@property(assign) bool isPositionAutoGenerated;	// G=0x266389; S=0x16bbad; converted property
@property(assign) bool isSizeAutoGenerated;	// G=0x266399; S=0x201bb5; converted property
@property(assign) double titleRotationAngle;	// G=0x2663a9; S=0x16bbbd; converted property
- (id)initWithChart:(id)chart;	// 0x16b8f1
- (void)dealloc;	// 0x17ac55
// converted property getter: - (id)lastCachedName;	// 0x17792d
// converted property setter: - (void)setLastCachedName:(id)name;	// 0x16bb1d
// converted property getter: - (id)name;	// 0x266379
// converted property setter: - (void)setName:(id)name;	// 0x16b9ad
// converted property getter: - (id)graphicProperties;	// 0x17793d
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x16bb65
// converted property getter: - (bool)isAutoGenerated;	// 0x201bc5
// converted property setter: - (void)setIsAutoGenerated:(bool)generated;	// 0x16ba4d
// converted property getter: - (bool)isPositionAutoGenerated;	// 0x266389
// converted property setter: - (void)setIsPositionAutoGenerated:(bool)generated;	// 0x16bbad
// converted property getter: - (bool)isSizeAutoGenerated;	// 0x266399
// converted property setter: - (void)setIsSizeAutoGenerated:(bool)generated;	// 0x201bb5
- (bool)isCachedTitleEmpty;	// 0x170499
- (bool)isTitleVisible;	// 0x2663c1
// converted property getter: - (double)titleRotationAngle;	// 0x2663a9
// converted property setter: - (void)setTitleRotationAngle:(double)angle;	// 0x16bbbd
@end
