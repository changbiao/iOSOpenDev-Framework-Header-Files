/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <iAdCore/ADLogImpressionRequest.h>
#import <iAdCore/XXUnknownSuperclass.h>

@class NSMutableArray, ADLogMetaData;

@interface ADLogImpressionRequest : XXUnknownSuperclass {
	ADLogMetaData *_metaData;	// 4 = 0x4
	NSMutableArray *_metrics;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *metrics;	// G=0x17019; S=0x17029; @synthesize=_metrics
@property(retain, nonatomic) ADLogMetaData *metaData;	// G=0x16fe5; S=0x16ff5; @synthesize=_metaData
@property(readonly, assign, nonatomic) BOOL hasMetaData;	// G=0x16945; 
// declared property setter: - (void)setMetrics:(id)metrics;	// 0x17029
// declared property getter: - (id)metrics;	// 0x17019
// declared property setter: - (void)setMetaData:(id)data;	// 0x16ff5
// declared property getter: - (id)metaData;	// 0x16fe5
- (Class)responseClass;	// 0x16fc9
- (unsigned)requestTypeCode;	// 0x16fc5
- (void)writeTo:(id)to;	// 0x16e25
- (BOOL)readFrom:(id)from;	// 0x16c19
- (id)dictionaryRepresentation;	// 0x16a71
- (id)description;	// 0x16a01
- (id)metricAtIndex:(unsigned)index;	// 0x169e1
- (unsigned)metricsCount;	// 0x169c1
- (void)addMetric:(id)metric;	// 0x1695d
// declared property getter: - (BOOL)hasMetaData;	// 0x16945
- (void)dealloc;	// 0x168ed
@end

@interface ADLogImpressionRequest (Swizzle)
+ (void)initialize;	// 0x9fc5
@end
