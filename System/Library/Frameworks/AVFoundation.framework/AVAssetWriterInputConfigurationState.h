/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, AVOutputSettings, NSDictionary, NSArray;

@interface AVAssetWriterInputConfigurationState : NSObject {

	NSString* _mediaType;
	AVOutputSettings* _outputSettings;
	opaqueCMFormatDescriptionRef _sourceFormatHint;
	NSDictionary* _sourcePixelBufferAttributes;
	bool _attachedToPixelBufferAdaptor;
	NSArray* _metadataItems;
	CGAffineTransform _transform;
	int _mediaTimeScale;
	bool _expectsMediaDataInRealTime;
	CGSize _naturalSize;
	NSString* _languageCode;
	NSString* _extendedLanguageTag;
	bool _marksOutputTrackAsEnabled;
	bool _hasClientSpecifiedValueForPreferredVolume;
	float _preferredVolume;
	bool _hasClientSpecifiedValueForLayer;
	long long _layer;
	short _alternateGroupID;
	NSDictionary* _trackReferences;

}

@property (nonatomic,copy) NSString * mediaType;                                          //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) AVOutputSettings * outputSettings;                             //@synthesize outputSettings=_outputSettings - In the implementation block
@property (nonatomic,retain) opaqueCMFormatDescriptionRef sourceFormatHint;               //@synthesize sourceFormatHint=_sourceFormatHint - In the implementation block
@property (nonatomic,copy) NSDictionary * sourcePixelBufferAttributes;                    //@synthesize sourcePixelBufferAttributes=_sourcePixelBufferAttributes - In the implementation block
@property (assign,nonatomic) bool attachedToPixelBufferAdaptor;                           //@synthesize attachedToPixelBufferAdaptor=_attachedToPixelBufferAdaptor - In the implementation block
@property (nonatomic,copy) NSArray * metadataItems;                                       //@synthesize metadataItems=_metadataItems - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                                 //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) int mediaTimeScale;                                          //@synthesize mediaTimeScale=_mediaTimeScale - In the implementation block
@property (assign,nonatomic) bool expectsMediaDataInRealTime;                             //@synthesize expectsMediaDataInRealTime=_expectsMediaDataInRealTime - In the implementation block
@property (assign,nonatomic) CGSize naturalSize;                                          //@synthesize naturalSize=_naturalSize - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                                       //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,copy) NSString * extendedLanguageTag;                                //@synthesize extendedLanguageTag=_extendedLanguageTag - In the implementation block
@property (assign,nonatomic) bool marksOutputTrackAsEnabled;                              //@synthesize marksOutputTrackAsEnabled=_marksOutputTrackAsEnabled - In the implementation block
@property (assign,nonatomic) bool hasClientSpecifiedValueForPreferredVolume;              //@synthesize hasClientSpecifiedValueForPreferredVolume=_hasClientSpecifiedValueForPreferredVolume - In the implementation block
@property (assign,nonatomic) float preferredVolume;                                       //@synthesize preferredVolume=_preferredVolume - In the implementation block
@property (assign,nonatomic) bool hasClientSpecifiedValueForLayer;                        //@synthesize hasClientSpecifiedValueForLayer=_hasClientSpecifiedValueForLayer - In the implementation block
@property (assign,nonatomic) long long layer;                                             //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) short alternateGroupID;                                      //@synthesize alternateGroupID=_alternateGroupID - In the implementation block
@property (nonatomic,copy) NSDictionary * trackReferences;                                //@synthesize trackReferences=_trackReferences - In the implementation block
-(float)preferredVolume;
-(id)extendedLanguageTag;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(id)metadataItems;
-(void)setMetadataItems:(id)arg1 ;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(void)setMarksOutputTrackAsEnabled:(bool)arg1 ;
-(bool)expectsMediaDataInRealTime;
-(bool)marksOutputTrackAsEnabled;
-(void)setSourceFormatHint:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)sourcePixelBufferAttributes;
-(void)setSourcePixelBufferAttributes:(id)arg1 ;
-(bool)attachedToPixelBufferAdaptor;
-(void)setAttachedToPixelBufferAdaptor:(bool)arg1 ;
-(int)mediaTimeScale;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setExpectsMediaDataInRealTime:(bool)arg1 ;
-(bool)hasClientSpecifiedValueForPreferredVolume;
-(void)setHasClientSpecifiedValueForPreferredVolume:(bool)arg1 ;
-(bool)hasClientSpecifiedValueForLayer;
-(void)setHasClientSpecifiedValueForLayer:(bool)arg1 ;
-(short)alternateGroupID;
-(void)setAlternateGroupID:(short)arg1 ;
-(void)setTrackReferences:(id)arg1 ;
-(id)trackReferences;
-(void)dealloc;
-(long long)layer;
-(void)setLayer:(long long)arg1 ;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)languageCode;
-(CGSize)naturalSize;
-(id)outputSettings;
-(void)setOutputSettings:(id)arg1 ;
-(void)setMediaType:(id)arg1 ;
-(id)mediaType;
-(void)setLanguageCode:(id)arg1 ;
@end
