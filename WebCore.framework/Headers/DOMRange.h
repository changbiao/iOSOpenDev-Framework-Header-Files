/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMRange.h>
#import <WebCore/DOMObject.h>

@class NSString, DOMNode;

@interface DOMRange : DOMObject {
}
@property(readonly, copy) NSString *text;	// G=0x256f8d; 
@property(readonly, retain) DOMNode *commonAncestorContainer;	// G=0x34918d; 
@property(readonly, assign) BOOL collapsed;	// G=0x6fe3d; 
@property(readonly, assign) int endOffset;	// G=0x25ecc1; 
@property(readonly, retain) DOMNode *endContainer;	// G=0x25ebed; 
@property(readonly, assign) int startOffset;	// G=0x25eb21; 
@property(readonly, retain) DOMNode *startContainer;	// G=0x259f89; 
- (void)dealloc;	// 0x78a35
- (void)finalize;	// 0x349261
// declared property getter: - (id)startContainer;	// 0x259f89
// declared property getter: - (int)startOffset;	// 0x25eb21
// declared property getter: - (id)endContainer;	// 0x25ebed
// declared property getter: - (int)endOffset;	// 0x25ecc1
// declared property getter: - (BOOL)collapsed;	// 0x6fe3d
// declared property getter: - (id)commonAncestorContainer;	// 0x34918d
// declared property getter: - (id)text;	// 0x256f8d
- (void)setStart:(id)start offset:(int)offset;	// 0x264639
- (void)setStart:(id)start :(int)arg2;	// 0x34902d
- (void)setEnd:(id)end offset:(int)offset;	// 0x348ecd
- (void)setEnd:(id)end :(int)arg2;	// 0x348d6d
- (void)setStartBefore:(id)before;	// 0x256a61
- (void)setStartAfter:(id)after;	// 0x348c95
- (void)setEndBefore:(id)before;	// 0x348bbd
- (void)setEndAfter:(id)after;	// 0x256e19
- (void)collapse:(BOOL)collapse;	// 0x348ae1
- (void)selectNode:(id)node;	// 0x268825
- (void)selectNodeContents:(id)contents;	// 0x348a09
- (short)compareBoundaryPoints:(unsigned short)points sourceRange:(id)range;	// 0x265941
- (short)compareBoundaryPoints:(unsigned short)points :(id)arg2;	// 0x348925
- (void)deleteContents;	// 0x34885d
- (id)extractContents;	// 0x34870d
- (id)cloneContents;	// 0x3485bd
- (void)insertNode:(id)node;	// 0x348461
- (void)surroundContents:(id)contents;	// 0x348305
- (id)cloneRange;	// 0x3481b5
- (id)toString;	// 0x348059
- (void)detach;	// 0x25cce1
- (id)createContextualFragment:(id)fragment;	// 0x347e85
- (BOOL)intersectsNode:(id)node;	// 0x347da9
- (short)compareNode:(id)node;	// 0x347ccd
- (short)comparePoint:(id)point offset:(int)offset;	// 0x347bed
- (BOOL)isPointInRange:(id)range offset:(int)offset;	// 0x347b0d
- (void)expand:(id)expand;	// 0x3479c5
@end

@interface DOMRange (WebPrivate)
- (id)description;	// 0x2ecac1
- (id)_text;	// 0x2ecb75
@end

@interface DOMRange (DOMRangeExtensions)
- (CGRect)boundingBox;	// 0x2ee4c1
- (id)textRects;	// 0x2ee2b1
- (id)lineBoxRects;	// 0x2ecab1
@end

@interface DOMRange (UIKitExtensions)
- (void)move:(unsigned long)move inDirection:(int)direction;	// 0x34f5bd
- (void)extend:(unsigned long)extend inDirection:(int)direction;	// 0x34fa4d
- (id)firstNode;	// 0x34fec1
@end
