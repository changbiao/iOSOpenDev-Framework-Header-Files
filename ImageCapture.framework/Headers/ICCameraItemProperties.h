/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <ImageCapture/XXUnknownSuperclass.h>

@class ICCameraDevice, ICCameraFolder, NSString, NSMutableDictionary, NSDate;

@interface ICCameraItemProperties : XXUnknownSuperclass {
	ICCameraDevice *_device;	// 4 = 0x4
	ICCameraFolder *_parentFolder;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_UTI;	// 16 = 0x10
	NSDate *_creationDate;	// 20 = 0x14
	NSDate *_modificationDate;	// 24 = 0x18
	BOOL _locked;	// 28 = 0x1c
	NSMutableDictionary *_userData;	// 32 = 0x20
}
@property(assign) ICCameraDevice *device;	// G=0xbac5; S=0xbad5; @synthesize=_device
@property(assign) ICCameraFolder *parentFolder;	// G=0xbaa5; S=0xbab5; @synthesize=_parentFolder
@property(retain) NSString *name;	// G=0xc0bd; S=0xc099; @synthesize=_name
@property(retain) NSString *UTI;	// G=0xc0f9; S=0xc0d5; @synthesize=_UTI
@property(retain) NSDate *creationDate;	// G=0xc135; S=0xc111; @synthesize=_creationDate
@property(retain) NSDate *modificationDate;	// G=0xc171; S=0xc14d; @synthesize=_modificationDate
@property(assign) BOOL locked;	// G=0xba85; S=0xba95; @synthesize=_locked
@property(retain) NSMutableDictionary *userData;	// G=0xc1ad; S=0xc189; @synthesize=_userData
- (void)dealloc;	// 0xbfe1
- (void)finalize;	// 0xc1c5
// declared property getter: - (id)userData;	// 0xc1ad
// declared property setter: - (void)setUserData:(id)data;	// 0xc189
// declared property getter: - (BOOL)locked;	// 0xba85
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0xba95
// declared property getter: - (id)modificationDate;	// 0xc171
// declared property setter: - (void)setModificationDate:(id)date;	// 0xc14d
// declared property getter: - (id)creationDate;	// 0xc135
// declared property setter: - (void)setCreationDate:(id)date;	// 0xc111
// declared property getter: - (id)UTI;	// 0xc0f9
// declared property setter: - (void)setUTI:(id)uti;	// 0xc0d5
// declared property getter: - (id)name;	// 0xc0bd
// declared property setter: - (void)setName:(id)name;	// 0xc099
// declared property getter: - (id)parentFolder;	// 0xbaa5
// declared property setter: - (void)setParentFolder:(id)folder;	// 0xbab5
// declared property getter: - (id)device;	// 0xbac5
// declared property setter: - (void)setDevice:(id)device;	// 0xbad5
@end