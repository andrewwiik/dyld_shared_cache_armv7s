/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <MapKit/MKAnnotationRepresentation.h>
#import <MapKit/MKLocatableObject.h>

@protocol MKAnnotation;
@class MKUserLocationAnnotationViewProxy, _MKAnnotationViewAnchor, VKAttributedRouteMatch, MKAnnotationManager, UICalloutView, UIView, NSString, UIImage, VKAnchorWrapper;

@interface MKAnnotationView : UIView <MKAnnotationRepresentation, MKLocatableObject> {

	bool _customTransformApplied;
	bool _internalTransformApplied;
	bool _animatingToCoordinate;
	bool _tracking;
	SCD_Struct_MK1 _presentationCoordinate;
	double _presentationCourse;
	/*^block*/ id _presentationCoordinateChangedCallback;
	MKUserLocationAnnotationViewProxy* _userLocationProxy;
	double _rotationRadians;
	_MKAnnotationViewAnchor* _anchor;
	VKAttributedRouteMatch* _routeMatch;
	double _mapRotationRadians;
	bool _explicitlyHidden;
	bool _hiddenForOffscreen;
	bool _hiddenForInvalidPoint;
	double _mapPitchRadians;
	long long _mapDisplayStyle;
	MKAnnotationManager* _annotationManager;
	<MKAnnotation>* _annotation;
	UICalloutView* _calloutView;
	UIView* _leftCalloutAccessoryView;
	UIView* _rightCalloutAccessoryView;
	UIView* _detailCalloutAccessoryView;
	NSString* _reuseIdentifier;
	UIImage* _image;
	unsigned long long _mapType;
	unsigned long long _zIndex;
	CGPoint _centerOffset;
	CGPoint _calloutOffset;
	unsigned long long _dragState;
	/*^block*/ id _calloutHitTest;
	struct {
		unsigned disabled : 1;
		unsigned selected : 1;
		unsigned canShowCallout : 1;
		unsigned isHighlighted : 1;
		unsigned canDisplayDisclosureInCallout : 1;
		unsigned canDisplayPlacemarkInCallout : 1;
		unsigned draggable : 1;
	}  _flags;
	CGPoint _leftCalloutOffset;
	CGPoint _rightCalloutOffset;

}

@property (nonatomic,readonly) NSString * reuseIdentifier; 
@property (nonatomic,retain) <MKAnnotation> * annotation; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGPoint centerOffset; 
@property (assign,nonatomic) CGPoint calloutOffset; 
@property (assign,getter=isEnabled,nonatomic) bool enabled; 
@property (assign,getter=isHighlighted,nonatomic) bool highlighted; 
@property (assign,getter=isSelected,nonatomic) bool selected; 
@property (assign,nonatomic) bool canShowCallout; 
@property (nonatomic,retain) UIView * leftCalloutAccessoryView;                                                                          //@synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * rightCalloutAccessoryView;                                                                         //@synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView - In the implementation block
@property (assign,getter=isDraggable,nonatomic) bool draggable; 
@property (assign,nonatomic) unsigned long long dragState; 
@property (getter=_significantBounds,nonatomic,readonly) CGRect significantBounds; 
@property (nonatomic,readonly) CGRect _significantFrame; 
@property (nonatomic,retain) UIView * detailCalloutAccessoryView;                                                                        //@synthesize detailCalloutAccessoryView=_detailCalloutAccessoryView - In the implementation block
@property (assign,setter=_setPresentationCoordinate:,nonatomic) SCD_Struct_MK1 _presentationCoordinate;                                  //@synthesize presentationCoordinate=_presentationCoordinate - In the implementation block
@property (setter=_setPresentationCoordinateChangedCallback:,nonatomic,copy) id _presentationCoordinateChangedCallback;                  //@synthesize presentationCoordinateChangedCallback=_presentationCoordinateChangedCallback - In the implementation block
@property (assign,setter=_setPresentationCourse:,nonatomic) double _presentationCourse;                                                  //@synthesize presentationCourse=_presentationCourse - In the implementation block
@property (assign,setter=_setAnimatingToCoordinate:,getter=_isAnimatingToCoordinate,nonatomic) bool _animatingToCoordinate;              //@synthesize animatingToCoordinate=_animatingToCoordinate - In the implementation block
@property (assign,setter=_setTracking:,getter=_isTracking,nonatomic) bool _tracking;                                                     //@synthesize tracking=_tracking - In the implementation block
@property (assign,setter=_setMapDisplayStyle:,getter=_mapDisplayStyle,nonatomic) long long mapDisplayStyle;                              //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (assign,nonatomic) CGPoint leftCalloutOffset;                                                                                  //@synthesize leftCalloutOffset=_leftCalloutOffset - In the implementation block
@property (assign,nonatomic) CGPoint rightCalloutOffset;                                                                                 //@synthesize rightCalloutOffset=_rightCalloutOffset - In the implementation block
@property (nonatomic,copy) id _calloutHitTest;                                                                                           //@synthesize calloutHitTest=_calloutHitTest - In the implementation block
@property (assign,setter=_setAnnotationManager:,nonatomic,__weak) MKAnnotationManager * _annotationManager;                              //@synthesize annotationManager=_annotationManager - In the implementation block
@property (nonatomic,readonly) VKAnchorWrapper * anchor; 
@property (assign,setter=_setHiddenForInvalidPoint:,getter=_isHiddenForInvalidPoint,nonatomic) bool hiddenForInvalidPoint;               //@synthesize hiddenForInvalidPoint=_hiddenForInvalidPoint - In the implementation block
@property (setter=_setRouteMatch:,nonatomic,retain) VKAttributedRouteMatch * _routeMatch;                                                //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) MKUserLocationAnnotationViewProxy * _userLocationProxy; 
@property (assign,setter=_setMapRotationRadians:,getter=_mapRotationRadians,nonatomic) double mapRotationRadians;                        //@synthesize mapRotationRadians=_mapRotationRadians - In the implementation block
@property (assign,setter=_setMapPitchRadians:,getter=_mapPitchRadians,nonatomic) double mapPitchRadians;                                 //@synthesize mapPitchRadians=_mapPitchRadians - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
+(bool)_followsTerrain;
+(id)currentLocationTitle;
+(id)droppedPinTitle;
+(id)_disclosureCalloutButton;
+(bool)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(unsigned long long)_zIndex;
+(unsigned long long)_selectedZIndex;
-(id)_userLocationProxy;
-(id)_vkMarker;
-(long long)_mapDisplayStyle;
-(void)_setMapDisplayStyle:(long long)arg1 ;
-(id)_annotationManager;
-(id)_annotationContainer;
-(unsigned long long)_mapType;
-(SCD_Struct_MK1)_presentationCoordinate;
-(void)_setRouteMatch:(id)arg1 ;
-(void)_setAnnotationManager:(id)arg1 ;
-(void)setLeftCalloutAccessoryView:(id)arg1 ;
-(id)leftCalloutAccessoryView;
-(id)rightCalloutAccessoryView;
-(void)setDetailCalloutAccessoryView:(id)arg1 ;
-(id)detailCalloutAccessoryView;
-(void)_setHiddenForOffscreen:(bool)arg1 ;
-(void)_setCalloutView:(id)arg1 ;
-(void)set_calloutHitTest:(/*^block*/ id)arg1 ;
-(id)_calloutView;
-(CGPoint)leftCalloutOffset;
-(void)_setHiddenForInvalidPoint:(bool)arg1 ;
-(void)_updateFromMap;
-(void)_didUpdatePosition;
-(void)_setMapRotationRadians:(double)arg1 ;
-(void)setLeftCalloutOffset:(CGPoint)arg1 ;
-(void)setRightCalloutOffset:(CGPoint)arg1 ;
-(void)_setMapType:(unsigned long long)arg1 ;
-(void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2 ;
-(id)_contentLayer;
-(void)_resetZIndex;
-(void)_setZIndex:(unsigned long long)arg1 ;
-(CGPoint)_draggingDropOffset;
-(CGRect)_significantBounds;
-(/*^block*/ id)_presentationCoordinateChangedCallback;
-(void)_setZIndex:(unsigned long long)arg1 notify:(bool)arg2 ;
-(void)_userTrackingModeDidChange:(id)arg1 ;
-(unsigned long long)_orientationCount;
-(bool)_hasAlternateOrientation;
-(void)_setPresentationCoordinate:(SCD_Struct_MK1)arg1 ;
-(void)_setAnimatingToCoordinate:(bool)arg1 ;
-(void)_setTracking:(bool)arg1 ;
-(CGRect)_mapkit_visibleRect;
-(CGRect)_significantFrame;
-(bool)_canDisplayDisclosureInCallout;
-(void)_setCanDisplayDisclosureInCallout:(bool)arg1 ;
-(bool)_canDisplayPlacemarkInCallout;
-(void)_setCanDisplayPlacemarkInCallout:(bool)arg1 ;
-(void)_resetZIndexNotify:(bool)arg1 ;
-(void)_enableRotationForHeadingMode:(double)arg1 ;
-(void)_transitionFrom:(long long)arg1 to:(long long)arg2 duration:(double)arg3 ;
-(bool)_canChangeOrientation;
-(void)_setPresentationCoordinateChangedCallback:(/*^block*/ id)arg1 ;
-(double)_presentationCourse;
-(void)_setPresentationCourse:(double)arg1 ;
-(bool)_isAnimatingToCoordinate;
-(bool)_isTracking;
-(/*^block*/ id)_calloutHitTest;
-(CGPoint)rightCalloutOffset;
-(id)_routeMatch;
-(double)_mapRotationRadians;
-(double)_mapPitchRadians;
-(void)_setMapPitchRadians:(double)arg1 ;
-(bool)_isHiddenForInvalidPoint;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(UIImage*)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHidden:(bool)arg1 ;
-(void)layoutSubviews;
-(UIImage*)image;
-(bool)isEnabled;
-(void)setEnabled:(bool)arg1 ;
-(void)setHighlighted:(bool)arg1 ;
-(bool)isHighlighted;
-(id)reuseIdentifier;
-(void)setSelected:(bool)arg1 animated:(bool)arg2 ;
-(bool)isSelected;
-(void)prepareForReuse;
-(void)setSelected:(bool)arg1 ;
-(id)_containerView;
-(bool)isPersistent;
-(id)anchor;
-(void).cxx_destruct;
-(id)annotation;
-(void)setAnnotation:(id)arg1 ;
-(void)setRightCalloutAccessoryView:(id)arg1 ;
-(SCD_Struct_MK1)coordinate;
-(CGPoint)centerOffset;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setCanShowCallout:(bool)arg1 ;
-(unsigned long long)_zIndex;
-(void)setDragState:(unsigned long long)arg1 animated:(bool)arg2 ;
-(CGPoint)calloutOffset;
-(void)setDragState:(unsigned long long)arg1 ;
-(bool)canShowCallout;
-(unsigned long long)dragState;
-(bool)isDraggable;
-(void)setCalloutOffset:(CGPoint)arg1 ;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(void)setDraggable:(bool)arg1 ;
@end

