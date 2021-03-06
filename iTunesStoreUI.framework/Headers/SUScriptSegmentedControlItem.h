/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class UIImage, NSString, SUScriptCanvasContext;

@interface SUScriptSegmentedControlItem : SUScriptObject {
	SUScriptCanvasContext *_canvas;	// 36 = 0x24
	NSString *_identifier;	// 40 = 0x28
	UIImage *_image;	// 44 = 0x2c
	NSString *_imageURLString;	// 48 = 0x30
	NSString *_title;	// 52 = 0x34
	id _userInfo;	// 56 = 0x38
}
@property(retain) id userInfo;	// G=0x8d069; S=0x8cf65; 
@property(retain) NSString *title;	// G=0x8d015; S=0x8cead; 
@property(retain) NSString *imageURL;	// G=0x8ca65; S=0x8cd21; 
@property(retain) NSString *identifier;	// G=0x8c9e5; S=0x8cc29; 
@property(retain) SUScriptCanvasContext *canvas;	// G=0x8c959; S=0x8cae5; 
@property(readonly, assign, nonatomic) UIImage *image;	// G=0x8d665; @synthesize=_image
+ (void)initialize;	// 0x8d5b1
+ (id)webScriptNameForKey:(const char *)key;	// 0x8d49d
// declared property getter: - (id)image;	// 0x8d665
- (id)scriptAttributeKeys;	// 0x8d551
- (id)attributeKeys;	// 0x8d541
- (id)_segmentedControl;	// 0x8d449
- (void)_reloadUserInterface;	// 0x8d315
- (void)_setTitle:(id)title;	// 0x8d2bd
- (void)_setImageFromURL:(id)url;	// 0x8d161
- (void)_setImage:(id)image;	// 0x8d109
- (id)_copyTitle;	// 0x8d0e9
// declared property getter: - (id)userInfo;	// 0x8d069
// declared property getter: - (id)title;	// 0x8d015
// declared property setter: - (void)setUserInfo:(id)info;	// 0x8cf65
// declared property setter: - (void)setTitle:(id)title;	// 0x8cead
// declared property setter: - (void)setImageURL:(id)url;	// 0x8cd21
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x8cc29
// declared property setter: - (void)setCanvas:(id)canvas;	// 0x8cae5
// declared property getter: - (id)imageURL;	// 0x8ca65
// declared property getter: - (id)identifier;	// 0x8c9e5
- (id)_className;	// 0x8c9d9
// declared property getter: - (id)canvas;	// 0x8c959
- (id)newPageSection;	// 0x8c73d
- (void)dealloc;	// 0x8c68d
- (id)initWithPageSection:(id)pageSection;	// 0x8c589
@end
