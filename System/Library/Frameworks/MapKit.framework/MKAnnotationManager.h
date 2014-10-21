/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, MKAnnotation, MKAnnotationRepresentation;
#import <MapKit/MapKit-Structs.h>
@class NSTimer, MKQuadTrie, NSMutableSet, NSMapTable, NSArray;

@interface MKAnnotationManager : NSObject {

	<MKAnnotationMarkerContainer>* _container;
	<MKAnnotationManagerDelegate>* _delegate;
	bool _annotationRepresentationsAreAddedImmediately;
	NSTimer* _updateVisibleTimer;
	MKQuadTrie* _annotations;
	NSMutableSet* _visibleAnnotations;
	NSMutableSet* _pendingAnnotations;
	NSMutableSet* _disallowAnimationAnnotations;
	<MKAnnotation>* _selectedAnnotation;
	<MKAnnotation>* _draggedAnnotation;
	NSMapTable* _annotationsToRepresentations;
	NSMutableSet* _annotationRepresentations;
	NSMapTable* _reusableAnnotationRepresentations;
	NSMutableSet* _managedAnnotations;
	NSMutableSet* _managedAnnotationsObservingCoordinate;
	NSMutableSet* _addingAnnotationRepresentations;
	<MKAnnotationRepresentation>* _annotationRepresentationToShowCallout;
	bool _animateDelayedShowCallout;
	CGRect _rectToAvoidForDelayedShowCallout;
	bool _isChangingCoordinate;

}

@property (assign,nonatomic,__weak) <MKAnnotationMarkerContainer> * container;                               //@synthesize container=_container - In the implementation block
@property (assign,nonatomic,__weak) <MKAnnotationManagerDelegate> * delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool annotationRepresentationsAreAddedImmediately;                              //@synthesize annotationRepresentationsAreAddedImmediately=_annotationRepresentationsAreAddedImmediately - In the implementation block
@property (assign,nonatomic,__weak) <MKAnnotation> * draggedAnnotation;                                      //@synthesize draggedAnnotation=_draggedAnnotation - In the implementation block
@property (nonatomic,readonly) <MKAnnotationRepresentation> * selectedAnnotationRepresentation; 
@property (nonatomic,readonly) NSArray * annotationRepresentations; 
@property (nonatomic,readonly) NSArray * annotations; 
-(bool)annotationRepresentationsAreAddedImmediately;
-(void)setAnnotationRepresentationsAreAddedImmediately:(bool)arg1 ;
-(void)updateVisibleAnnotations;
-(void)deselectAnnotation:(id)arg1 animated:(bool)arg2 ;
-(void)selectAnnotation:(id)arg1 animated:(bool)arg2 avoid:(CGRect)arg3 ;
-(id)selectedAnnotationRepresentation;
-(void)showAnnotationsInMapRect:(SCD_Struct_MK2)arg1 ;
-(id)annotationsInMapRect:(SCD_Struct_MK2)arg1 ;
-(id)annotationRepresentations;
-(void)addAnnotation:(id)arg1 allowAnimation:(bool)arg2 ;
-(void)replaceAnnotation:(id)arg1 withAnnotation:(id)arg2 ;
-(void)addRepresentationsForAnnotations:(id)arg1 ;
-(id)dequeueReusableAnnotationRepresentationWithIdentifier:(id)arg1 ;
-(id)representationForAnnotation:(id)arg1 ;
-(void)finishAddingAnnotationRepresentations:(id)arg1 ;
-(bool)internalAnnotationAllowsCustomRepresentation:(id)arg1 ;
-(id)newDefaultAnnotationRepresentationForAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)configureDefaultAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2 ;
-(void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2 ;
-(void)cleanUpAnnotationRepresentationForRemoval:(id)arg1 ;
-(bool)annotationIsInternal:(id)arg1 ;
-(id)newInternalAnnotationRepresentationForInternalAnnotation:(id)arg1 ;
-(void)addManagedAnnotation:(id)arg1 observeCoordinateChanges:(bool)arg2 ;
-(void)_setupUpdateVisibleAnnotationsTimer;
-(void)_addAnnotation:(id)arg1 updateVisible:(bool)arg2 ;
-(void)_removeRepresentationForAnnotation:(id)arg1 fromCull:(bool)arg2 ;
-(void)_removeAnnotation:(id)arg1 updateVisible:(bool)arg2 removeFromContainer:(bool)arg3 ;
-(id)_addRepresentationForAnnotation:(id)arg1 ;
-(void)addManagedAnnotation:(id)arg1 ;
-(id)addRepresentationForManagedAnnotation:(id)arg1 notifyDelegate:(bool)arg2 ;
-(void)removeRepresentationForManagedAnnotation:(id)arg1 ;
-(id)draggedAnnotation;
-(void)setDraggedAnnotation:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setContainer:(id)arg1 ;
-(id)container;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void).cxx_destruct;
-(void)addAnnotation:(id)arg1 ;
-(bool)containsAnnotation:(id)arg1 ;
-(id)annotations;
-(void)selectAnnotation:(id)arg1 animated:(bool)arg2 ;
-(void)removeAnnotations:(id)arg1 ;
-(void)addAnnotations:(id)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
@end
