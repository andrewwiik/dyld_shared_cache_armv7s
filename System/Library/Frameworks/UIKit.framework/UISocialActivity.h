/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIActivity.h>

@class NSString, SLComposeViewController, UIImage;

@interface UISocialActivity : UIActivity {

	NSString* _socialActivityType;
	SLComposeViewController* _socialComposeViewController;
	UIImage* _composedImage;

}

@property (nonatomic,copy) NSString * socialActivityType;                                        //@synthesize socialActivityType=_socialActivityType - In the implementation block
@property (nonatomic,retain) SLComposeViewController * socialComposeViewController;              //@synthesize socialComposeViewController=_socialComposeViewController - In the implementation block
@property (nonatomic,retain) UIImage * composedImage;                                            //@synthesize composedImage=_composedImage - In the implementation block
+(long long)activityCategory;
-(void)dealloc;
-(CGSize)_thumbnailSize;
-(id)_activityImage;
-(id)activityTitle;
-(id)activityType;
-(bool)canPerformWithActivityItems:(id)arg1 ;
-(void)_cleanup;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)initActivityType:(id)arg1 ;
-(void)setSocialActivityType:(id)arg1 ;
-(id)socialActivityType;
-(id)_serviceType;
-(void)setComposedImage:(id)arg1 ;
-(long long)_activityItemTypes;
-(long long)_blockingActivityItemTypes;
-(long long)_maxImageDataSize;
-(void)setSocialComposeViewController:(id)arg1 ;
-(id)socialComposeViewController;
-(id)composedImage;
@end

