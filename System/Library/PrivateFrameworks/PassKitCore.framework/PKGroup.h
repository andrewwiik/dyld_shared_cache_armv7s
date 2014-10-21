/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKGroupDelegate;
@class PKCatalogGroup, NSMutableDictionary, NSNumber;

@interface PKGroup : NSObject {

	PKCatalogGroup* _catalogGroup;
	NSMutableDictionary* _passesByUniqueID;
	bool _local;
	<PKGroupDelegate>* _delegate;
	unsigned long long _frontmostPassIndex;

}

@property (assign,nonatomic) <PKGroupDelegate> * delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long frontmostPassIndex;              //@synthesize frontmostPassIndex=_frontmostPassIndex - In the implementation block
@property (nonatomic,readonly) NSNumber * groupID; 
@property (assign,getter=isLocal,nonatomic) bool local;                          //@synthesize local=_local - In the implementation block
-(id)groupID;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)passWithUniqueID:(id)arg1 ;
-(void)_updatePass:(id)arg1 notify:(bool)arg2 ;
-(void)_moveUniqueID:(id)arg1 toIndex:(unsigned long long)arg2 notify:(bool)arg3 ;
-(void)_insertPass:(id)arg1 atIndex:(unsigned long long)arg2 notify:(bool)arg3 ;
-(void)_removeUniqueID:(id)arg1 notify:(bool)arg2 ;
-(unsigned long long)_indexOfUniqueID:(id)arg1 ;
-(unsigned long long)passCount;
-(id)passAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForPassUniqueID:(id)arg1 ;
-(id)initWithCatalogGroup:(id)arg1 passes:(id)arg2 ;
-(void)updateWithCatalogGroup:(id)arg1 passes:(id)arg2 notify:(bool)arg3 ;
-(id)copyCatalogGroup;
-(void)handleUserPassDelete:(id)arg1 ;
-(bool)containsPasses;
-(bool)containsOnlyUniqueID:(id)arg1 ;
-(void)enumerateUniqueIDsWithHandler:(/*^block*/ id)arg1 ;
-(unsigned long long)frontmostPassIndex;
-(void)setFrontmostPassIndex:(unsigned long long)arg1 ;
-(void)setLocal:(bool)arg1 ;
-(bool)isLocal;
@end
