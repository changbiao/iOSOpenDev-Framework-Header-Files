/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/XXUnknownSuperclass.h>

@class NSArray, NSMutableArray, NSMutableSet, NSTimer, DAAccount;
@protocol DATask;

@interface DATaskManager : XXUnknownSuperclass {
	DAAccount *_account;	// 4 = 0x4
@private
	NSMutableArray *_queuedExclusiveTasks;	// 8 = 0x8
	id<DATask> _activeExclusiveTask;	// 12 = 0xc
	NSMutableSet *_independentTasks;	// 16 = 0x10
	NSMutableSet *_heldIndependentTasks;	// 20 = 0x14
	NSMutableSet *_modalHeldIndependentTasks;	// 24 = 0x18
	NSMutableArray *_queuedTasks;	// 28 = 0x1c
	id<DATask> _activeQueuedTask;	// 32 = 0x20
	id<DATask> _modalHeldActiveQueuedTask;	// 36 = 0x24
	NSMutableArray *_queuedModalTasks;	// 40 = 0x28
	id<DATask> _activeModalTask;	// 44 = 0x2c
	int _state;	// 48 = 0x30
	NSTimer *_managerIdleTimer;	// 52 = 0x34
}
@property(readonly, assign) NSArray *allTasks;	// G=0x13555; 
@property(readonly, assign) NSArray *queuedTasks;	// G=0x18119; @synthesize=_queuedTasks
@property(readonly, assign) id<DATask> activeQueuedTask;	// G=0x18109; @synthesize=_activeQueuedTask
@property(readonly, assign) id<DATask> activeModalTask;	// G=0x138e9; @synthesize=_activeModalTask
@property(assign) DAAccount *account;	// G=0x140d9; S=0x141a5; @synthesize=_account
// declared property getter: - (id)queuedTasks;	// 0x18119
// declared property getter: - (id)activeQueuedTask;	// 0x18109
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x18105
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x18101
- (id)_getQueuedModalTasks;	// 0x180b1
- (id)_getQueuedTasks;	// 0x18061
- (id)_getModalHeldIndependentTasks;	// 0x18011
- (id)_getHeldIndependentTasks;	// 0x17fc1
- (id)_getIndependentTasks;	// 0x17f71
- (id)_getQueuedExclusiveTasks;	// 0x17f21
- (void)_releasePowerAssertionForTask:(id)task;	// 0x17eb5
- (void)_retainPowerAssertionForTask:(id)task;	// 0x17e21
- (void)_cancelTasksWithReason:(int)reason;	// 0x17c11
- (void)_scheduleStartModal:(id)modal;	// 0x17ba5
- (void)_schedulePerformTask:(id)task;	// 0x17b85
- (void)_scheduleSelector:(SEL)selector withArgument:(id)argument;	// 0x17add
- (void)_makeStateTransition;	// 0x16dfd
- (void)_reactivateHeldTasks;	// 0x16b95
- (void)_startModal:(id)modal;	// 0x16ab1
- (void)_requestCancelTasksWithReason:(int)reason;	// 0x16989
- (void)_performTask:(id)task;	// 0x168a5
- (void)taskEndModal:(id)modal;	// 0x16591
- (void)taskRequestModal:(id)modal;	// 0x16059
- (void)taskDidFinish:(id)task;	// 0x15249
- (BOOL)_hasTasksForcingNetworkConnection;	// 0x150cd
- (BOOL)_taskInQueueForcesNetworkConnection:(id)queueForcesNetworkConnection;	// 0x15025
- (BOOL)_taskForcesNetworking:(id)networking;	// 0x14fe5
- (void)_useOpportunisticSocketsAgain;	// 0x14f6d
- (id)stateString;	// 0x14db9
- (void)shutdown;	// 0x14c51
- (void)cancelAllTasks;	// 0x14ba5
- (void)cancelTask:(id)task;	// 0x14b91
- (void)cancelTask:(id)task withUnderlyingError:(id)underlyingError;	// 0x14b31
- (void)submitQueuedTask:(id)task;	// 0x1488d
- (void)submitIndependentTask:(id)task;	// 0x14619
- (void)submitExclusiveTask:(id)task toFrontOfQueue:(BOOL)queue;	// 0x14305
- (void)submitExclusiveTask:(id)task;	// 0x142f1
- (id)accountPersistentUUID;	// 0x142d1
- (id)accountID;	// 0x142b1
- (id)scheme;	// 0x14291
- (id)identityPersist;	// 0x14271
- (BOOL)useSSL;	// 0x1424d
- (id)password;	// 0x1422d
- (id)server;	// 0x1420d
- (int)port;	// 0x141ed
- (id)user;	// 0x141cd
// declared property setter: - (void)setAccount:(id)account;	// 0x141a5
// declared property getter: - (id)account;	// 0x140d9
- (id)deviceID;	// 0x140d5
- (id)userAgent;	// 0x14085
- (id)deviceType;	// 0x14081
- (BOOL)_useFakeDescriptions;	// 0x1407d
- (id)_version;	// 0x14055
- (void)_populateVersionDescriptions;	// 0x13ff1
- (void)dealloc;	// 0x139d9
- (id)init;	// 0x27d9
- (id)initWithAccount:(id)account;	// 0x138f9
// declared property getter: - (id)activeModalTask;	// 0x138e9
// declared property getter: - (id)allTasks;	// 0x13555
@end
