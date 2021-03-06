/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TIKeyboardOperation.h>

@class TIKeyboardCandidate;

@interface TIKeyboardOperationSetAutocorrection : TIKeyboardOperation {

	TIKeyboardCandidate* _autocorrection;

}

@property (nonatomic,readonly) TIKeyboardCandidate * autocorrection;              //@synthesize autocorrection=_autocorrection - In the implementation block
+(bool)supportsSecureCoding;
+(id)operationWithAutocorrection:(id)arg1 ;
-(void)main;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)autocorrection;
-(id)propertiesForDescription;
-(id)initWithAutocorrection:(id)arg1 ;
@end

