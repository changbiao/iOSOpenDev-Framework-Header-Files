/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptButtonNativeObject.h>


@interface SUScriptNativeUIBarButtonItem : SUScriptButtonNativeObject {
}
@property(assign, getter=isLoading) BOOL loading;	// G=0x4f301; S=0x4f329; converted property
@property(retain) id title;	// G=0x4f171; S=0x4f145; converted property
@property(retain) id image;	// G=0x4f0f1; S=0x4f119; converted property
+ (id)objectWithDefaultButtonForScriptButton:(id)scriptButton;	// 0x4f199
- (id)systemItemString;	// 0x4f499
- (id)styleString;	// 0x4f44d
- (void)setupNativeObject;	// 0x4f3d9
- (void)setStyleFromString:(id)string;	// 0x4f355
// converted property setter: - (void)setLoading:(BOOL)loading;	// 0x4f329
// converted property getter: - (BOOL)isLoading;	// 0x4f301
- (void)destroyNativeObject;	// 0x4f295
- (int)buttonType;	// 0x4f291
// converted property getter: - (id)title;	// 0x4f171
// converted property setter: - (void)setTitle:(id)title;	// 0x4f145
// converted property setter: - (void)setImage:(id)image;	// 0x4f119
// converted property getter: - (id)image;	// 0x4f0f1
@end
