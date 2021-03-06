/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/XXUnknownSuperclass.h>
#import <iWorkImport/GQZEntryInputStream.h>
#import <iWorkImport/iWorkImport-Structs.h>

@protocol GQZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface GQZEntryInflateInputStream : XXUnknownSuperclass <GQZEntryInputStream> {
@private
	z_stream_s mStream;	// 4 = 0x4
	long long mOffset;	// 60 = 0x3c
	long long mEnd;	// 68 = 0x44
	unsigned mCalculatedCrc;	// 76 = 0x4c
	unsigned mCheckCrc;	// 80 = 0x50
	id<GQZArchiveInputStream> mInput;	// 84 = 0x54
	char *mOutBuffer;	// 88 = 0x58
	unsigned mOutBufferSize;	// 92 = 0x5c
}
- (id)initWithOffset:(long long)offset end:(long long)end uncompressedSize:(unsigned long long)size crc:(unsigned long)crc input:(id)input;	// 0x4c745
- (void)dealloc;	// 0x4c989
- (void)readToOwnBuffer:(const char **)ownBuffer size:(unsigned *)size;	// 0x4cc1d
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x4c9f9
@end
