/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */



@protocol VMUMemory;

@interface VMUFatArch : NSObject {
	unsigned _fileOffset;	// 4 = 0x4
	unsigned _size;	// 8 = 0x8
	unsigned _alignment;	// 12 = 0xc
	id<VMUMemory> _memory;	// 16 = 0x10
}
@property(readonly, assign) unsigned fileOffset;	// G=0x6c8c; converted property
@property(readonly, assign) unsigned size;	// G=0x6ca0; converted property
@property(readonly, assign) unsigned alignment;	// G=0x6cb4; converted property
+ (id)fatArchWithMemory:(id)memory memoryView:(id)view;	// 0x6dfc
+ (id)fatArchWithMemory:(id)memory fileOffset:(unsigned)offset size:(unsigned)size alignment:(unsigned)alignment;	// 0x6d90
- (id)initWithMemory:(id)memory fileOffset:(unsigned)offset size:(unsigned)size alignment:(unsigned)alignment;	// 0x6cdc
- (id)initWithMemory:(id)memory memoryView:(id)view;	// 0x6ee8
- (id)architecture;	// 0x6ec8
// converted property getter: - (unsigned)fileOffset;	// 0x6c8c
// converted property getter: - (unsigned)size;	// 0x6ca0
// converted property getter: - (unsigned)alignment;	// 0x6cb4
- (id)memory;	// 0x6cc8
- (void)dealloc;	// 0x6e54
@end
