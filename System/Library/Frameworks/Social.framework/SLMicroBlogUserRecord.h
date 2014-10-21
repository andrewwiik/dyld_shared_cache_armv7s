/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString, UIImage;

@interface SLMicroBlogUserRecord : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _screen_name;
	NSString* _profile_image_url;
	UIImage* _profileImageCache;

}

@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * screen_name;                    //@synthesize screen_name=_screen_name - In the implementation block
@property (nonatomic,retain) NSString * profile_image_url;              //@synthesize profile_image_url=_profile_image_url - In the implementation block
@property (retain) UIImage * profileImageCache;                         //@synthesize profileImageCache=_profileImageCache - In the implementation block
+(id)userRecordWithDictionaryRepresentation:(id)arg1 ;
+(bool)supportsSecureCoding;
-(void)setValuesWithUserDictionary:(id)arg1 ;
-(id)profileImageCache;
-(id)screen_name;
-(void)setProfileImageCache:(id)arg1 ;
-(void)setScreen_name:(id)arg1 ;
-(void)setProfile_image_url:(id)arg1 ;
-(id)profile_image_url;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(void).cxx_destruct;
@end

