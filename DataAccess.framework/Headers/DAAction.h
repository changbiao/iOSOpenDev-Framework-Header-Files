/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/DataAccess-Structs.h>
#import <DataAccess/DAAction.h>
#import <DataAccess/XXUnknownSuperclass.h>
#import <DataAccess/NSCoding.h>

@protocol NSObject;

@interface DAAction : XXUnknownSuperclass <NSCoding> {
	int _itemChangeType;	// 4 = 0x4
	id _serverId;	// 8 = 0x8
	id<NSObject, NSCoding> _changedItem;	// 12 = 0xc
	int _changeId;	// 16 = 0x10
}
@property(assign) int changeId;	// G=0xa2b5; S=0xa2c5; @synthesize=_changeId
@property(retain, nonatomic) id changedItem;	// G=0xa295; @synthesize=_changedItem
@property(readonly, assign, nonatomic) id serverId;	// G=0xa2a5; @synthesize=_serverId
@property(readonly, assign) int itemChangeType;	// G=0xa285; @synthesize=_itemChangeType
// declared property setter: - (void)setChangeId:(int)anId;	// 0xa2c5
// declared property getter: - (int)changeId;	// 0xa2b5
// declared property getter: - (id)serverId;	// 0xa2a5
// declared property getter: - (id)changedItem;	// 0xa295
// declared property getter: - (int)itemChangeType;	// 0xa285
- (BOOL)isEqual:(id)equal;	// 0xa1b5
- (unsigned)hash;	// 0xa175
- (void)encodeWithCoder:(id)coder;	// 0xa03d
- (id)initWithCoder:(id)coder;	// 0x9ec5
- (id)description;	// 0x9de5
- (id)stringForItemChangeType:(int)itemChangeType;	// 0x9d5d
- (void)_setChangedItem:(id)item;	// 0x9d19
- (id)initWithItemChangeType:(int)itemChangeType changedItem:(id)item serverId:(id)anId;	// 0x9c81
- (void)dealloc;	// 0x9c21
@end

@interface DAAction (Events)
- (ASEvent *)event;	// 0x6a8d
- (id)deletedEventID;	// 0x6a79
@end

@interface DAAction (Contacts)
- (ASContact *)contact;	// 0x6ac1
- (id)deletedContactID;	// 0x6aad
@end

@interface DAAction (Email)
- (id)message;	// 0xecad
@end

@interface DAAction (ToDos)
- (ASToDo *)toDo;	// 0x108e5
- (id)deletedToDoID;	// 0x108d1
@end
