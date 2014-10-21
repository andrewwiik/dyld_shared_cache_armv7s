/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, AXElementFetcherDelegate;
#import <AXRuntime/AXRuntime-Structs.h>
@class NSObject, NSMapTable, NSArray, AXElementGroup, AXElement, AXVisualElementGrouper, AXElementGroupPruner, NSMutableDictionary;

@interface AXElementFetcher : NSObject {

	NSObject<OS_dispatch_queue>* _elementFetchQueue;
	NSObject<OS_dispatch_queue>* _elementAccessQueue;
	AXObserverRef _axRuntimeNotificationObserver;
	unsigned long long _scheduledFetchEvent;
	NSObject<OS_dispatch_source>* _eventCoalesceTimer;
	bool _enabled;
	bool _eventManagementEnabled;
	bool _groupingEnabled;
	bool _shouldUsePadInterfaceHeuristics;
	bool _fetchingElements;
	<AXElementFetcherDelegate>* _delegate;
	long long _fetchPolicy;
	NSMapTable* _fetchObservers;
	unsigned long long _activeFetchEvents;
	NSArray* _elementCache;
	AXElementGroup* _rootGroupCache;
	AXElementGroup* _keyboardGroupCache;
	AXElement* _currentApp;
	AXVisualElementGrouper* _visualElementGrouper;
	AXElementGroupPruner* _elementGroupPruner;
	NSMutableDictionary* _postFetchFilters;

}

@property (assign,getter=isEnabled,nonatomic) bool enabled;                                            //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isFetchingElements,nonatomic) bool fetchingElements;                          //@synthesize fetchingElements=_fetchingElements - In the implementation block
@property (nonatomic,readonly) bool willFetchElements; 
@property (nonatomic,readonly) NSArray * availableElements; 
@property (assign,nonatomic) long long fetchPolicy;                                                    //@synthesize fetchPolicy=_fetchPolicy - In the implementation block
@property (assign,getter=isEventManagementEnabled,nonatomic) bool eventManagementEnabled;              //@synthesize eventManagementEnabled=_eventManagementEnabled - In the implementation block
@property (assign,getter=isGroupingEnabled,nonatomic) bool groupingEnabled;                            //@synthesize groupingEnabled=_groupingEnabled - In the implementation block
@property (assign,nonatomic) bool shouldUsePadInterfaceHeuristics;                                     //@synthesize shouldUsePadInterfaceHeuristics=_shouldUsePadInterfaceHeuristics - In the implementation block
@property (nonatomic,readonly) AXElementGroup * rootGroup; 
@property (nonatomic,readonly) AXElementGroup * keyboardGroup; 
@property (nonatomic,readonly) AXElementGroup * firstKeyboardRow; 
@property (nonatomic,readonly) AXElementGroup * lastKeyboardRow; 
@property (assign,nonatomic) <AXElementFetcherDelegate> * delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMapTable * fetchObservers;                                              //@synthesize fetchObservers=_fetchObservers - In the implementation block
@property (assign,nonatomic) unsigned long long activeFetchEvents;                                     //@synthesize activeFetchEvents=_activeFetchEvents - In the implementation block
@property (nonatomic,retain) AXElement * currentApp;                                                   //@synthesize currentApp=_currentApp - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * postFetchFilters;                                   //@synthesize postFetchFilters=_postFetchFilters - In the implementation block
@property (nonatomic,retain) NSArray * elementCache;                                                   //@synthesize elementCache=_elementCache - In the implementation block
@property (nonatomic,retain) AXElementGroup * rootGroupCache;                                          //@synthesize rootGroupCache=_rootGroupCache - In the implementation block
@property (nonatomic,retain) AXElementGroup * keyboardGroupCache;                                      //@synthesize keyboardGroupCache=_keyboardGroupCache - In the implementation block
@property (nonatomic,retain) AXVisualElementGrouper * visualElementGrouper;                            //@synthesize visualElementGrouper=_visualElementGrouper - In the implementation block
@property (nonatomic,retain) AXElementGroupPruner * elementGroupPruner;                                //@synthesize elementGroupPruner=_elementGroupPruner - In the implementation block
+(id)systemWideElement;
+(id)_applicationForElement:(id)arg1 ;
+(id)currentAppWithPositionHint:(CGPoint)arg1 ;
+(id)springBoardElement;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(bool)isEnabled;
-(void)setEnabled:(bool)arg1 ;
-(void)addFetchEvents:(unsigned long long)arg1 ;
-(void)enableEventManagement;
-(void)_tearDownEventCoalesceTimer;
-(void)disableEventManagement;
-(void)unregisterAllFetchObservers;
-(long long)fetchPolicy;
-(id)_debugStringForPolicy:(long long)arg1 ;
-(unsigned long long)activeFetchEvents;
-(id)_debugStringForFetchEvents:(unsigned long long)arg1 ;
-(bool)isFetchingElements;
-(id)currentApp;
-(bool)isGroupingEnabled;
-(bool)_updateCurrentApp;
-(void)setCurrentApp:(id)arg1 ;
-(id)elementCache;
-(id)rootGroupCache;
-(id)keyboardGroupCache;
-(id)keyboardGroup;
-(id)fetchObservers;
-(void)setActiveFetchEvents:(unsigned long long)arg1 ;
-(void)_fetchEventOccurred:(unsigned long long)arg1 ;
-(bool)isEventManagementEnabled;
-(bool)_fetchEventCanBeManaged:(unsigned long long)arg1 ;
-(long long)_priorityForFetchEvent:(unsigned long long)arg1 ;
-(void)_scheduleFetchEvent:(unsigned long long)arg1 ;
-(void)_notifyObserversDidScheduleFetchEvent:(unsigned long long)arg1 ;
-(double)_delayForFetchEvent:(unsigned long long)arg1 ;
-(void)_notifyObserversWillFetchElementsForEvent:(unsigned long long)arg1 ;
-(bool)_fetchGroups:(bool)arg1 ;
-(bool)_fetchElements:(bool)arg1 ;
-(void)_notifyObserversDidFetchElementsForEvent:(unsigned long long)arg1 foundNewElements:(bool)arg2 ;
-(id)_axNotificationsForManagedEvents;
-(void)setEventManagementEnabled:(bool)arg1 ;
-(id)_fetchVisibleElements;
-(id)_fetchFirstElements;
-(void)_sendFakeScreenChangeIfNecessaryForGroup:(id)arg1 orElements:(id)arg2 appDidChange:(bool)arg3 ;
-(id)postFetchFilters;
-(id)_filterElements:(id)arg1 withFilter:(/*^block*/ id)arg2 ;
-(void)setElementCache:(id)arg1 ;
-(void)setRootGroupCache:(id)arg1 ;
-(void)setKeyboardGroupCache:(id)arg1 ;
-(bool)_shouldConsiderCacheAsInvalid;
-(id)_findElementsMatchingBlock:(/*^block*/ id)arg1 internalRequest:(bool)arg2 ;
-(id)findElementMatchingElement:(id)arg1 ;
-(id)closestElementToPoint:(CGPoint)arg1 ;
-(id)findGroupableMatchingGroupable:(id)arg1 ;
-(id)_siblingOfGroupable:(id)arg1 forDirection:(bool)arg2 didWrap:(bool*)arg3 ;
-(id)_findGroupableMatchingGroupable:(id)arg1 inElementGroup:(id)arg2 ;
-(id)_findGroupableMatchingBlock:(/*^block*/ id)arg1 inElementGroup:(id)arg2 ;
-(id)_groupWithItems:(id)arg1 groupTraits:(int)arg2 ;
-(id)_groupWithDictionary:(id)arg1 ;
-(id)_filterGroup:(id)arg1 withFilter:(/*^block*/ id)arg2 ;
-(id)visualElementGrouper;
-(bool)shouldUsePadInterfaceHeuristics;
-(void)setVisualElementGrouper:(id)arg1 ;
-(id)elementGroupPruner;
-(void)setElementGroupPruner:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 fetchEvents:(unsigned long long)arg2 fetchPolicy:(long long)arg3 enableEventManagement:(bool)arg4 enableGrouping:(bool)arg5 beginEnabled:(bool)arg6 ;
-(bool)willFetchElements;
-(id)availableElements;
-(id)rootGroup;
-(id)firstKeyboardRow;
-(id)lastKeyboardRow;
-(void)registerFetchObserver:(id)arg1 targetQueue:(id)arg2 ;
-(void)unregisterFetchObserver:(id)arg1 ;
-(void)removeFetchEvents:(unsigned long long)arg1 ;
-(void)fetchEventOccurred:(unsigned long long)arg1 ;
-(void)addPostFetchFilter:(/*^block*/ id)arg1 withIdentifier:(id)arg2 ;
-(void)removePostFetchFilterWithIdentifier:(id)arg1 ;
-(void)removeAllPostFetchFilters;
-(id)findElementMatchingBlock:(/*^block*/ id)arg1 ;
-(id)findElementsMatchingBlock:(/*^block*/ id)arg1 ;
-(id)closestElementToElement:(id)arg1 ;
-(id)firstElement;
-(id)lastElement;
-(id)nextSiblingOfElement:(id)arg1 didWrap:(bool*)arg2 ;
-(id)previousSiblingOfElement:(id)arg1 didWrap:(bool*)arg2 ;
-(id)nextSiblingOfGroupable:(id)arg1 didWrap:(bool*)arg2 ;
-(id)previousSiblingOfGroupable:(id)arg1 didWrap:(bool*)arg2 ;
-(id)findGroupableMatchingBlock:(/*^block*/ id)arg1 ;
-(void)updateKeyboardGroup:(id)arg1 ;
-(void)_debugLogElementCache;
-(void)setFetchPolicy:(long long)arg1 ;
-(void)setFetchObservers:(id)arg1 ;
-(void)setGroupingEnabled:(bool)arg1 ;
-(void)setShouldUsePadInterfaceHeuristics:(bool)arg1 ;
-(void)setFetchingElements:(bool)arg1 ;
-(void)setPostFetchFilters:(id)arg1 ;
-(void)refresh;
@end

