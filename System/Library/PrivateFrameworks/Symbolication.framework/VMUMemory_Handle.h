/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUMemory_Base.h>
#import <Symbolication/VMUMemory.h>

@protocol VMUMemory;
@class VMUArchitecture;

@interface VMUMemory_Handle : VMUMemory_Base <VMUMemory> {

	<VMUMemory>* _parent;
	char* _data;
	VMURange _addressRange;
	VMUArchitecture* _architecture;

}
-(void)dealloc;
-(id)description;
-(id)view;
-(VMURange)addressRange;
-(id)architecture;
-(id)memoryFromSubRange:(VMURange)arg1 mapToAddress:(unsigned long long)arg2 architecture:(id)arg3 ;
-(bool)isContiguous;
-(id)memoryAtAddress:(unsigned long long)arg1 maxSize:(unsigned long long)arg2 ;
-(id)swappedView;
-(id)initWithParent:(id)arg1 addressRange:(VMURange)arg2 architecture:(id)arg3 data:(char*)arg4 ;
@end

