/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <RemoteUI/RemoteUI-Structs.h>
@class NSDictionary;

@interface RUIElement : NSObject {

	NSDictionary* _attributes;

}

@property (nonatomic,retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(id)sourceURL;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(id)URLAttributeForImageName:(id)arg1 getScale:(double*)arg2 ;
-(bool)loadImage;
-(void)imageLoaded:(id)arg1 ;
-(int)_horizontalAlignmentForString:(id)arg1 ;
@end

