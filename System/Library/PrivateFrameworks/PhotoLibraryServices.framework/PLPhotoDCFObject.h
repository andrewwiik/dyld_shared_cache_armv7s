/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString;

@interface PLPhotoDCFObject : NSObject {

	NSString* _name;
	int _number;

}
+(id)validDCFNameForName:(id)arg1 requiredLength:(int)arg2 nameLength:(int)arg3 number:(int*)arg4 numberRange:(NSRange)arg5 suffix:(id)arg6 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(long long)compare:(id)arg1 ;
-(int)number;
-(id)initWithName:(id)arg1 number:(int)arg2 ;
-(void)setWriteIsPending:(bool)arg1 ;
@end

