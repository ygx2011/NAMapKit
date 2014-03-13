//
// NAAnnotation.h
// NAMapKit
//
// Created by Neil Ang on 21/07/10.
// Copyright 2010 neilang.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NAAnnotation.h"
#import "NAMapViewDelegate.h"

@interface NAMapView : UIScrollView<UIScrollViewDelegate>

-(void)displayMap:(UIImage *)map;
-(void)addAnnotation:(NAAnnotation *)annotation animated:(BOOL)animate;
-(void)addAnnotations:(NSArray *)annotations animated:(BOOL)animate;
-(void)centreOnPoint:(CGPoint)point animated:(BOOL)animate;
-(void)removeAnnotation:(NAAnnotation *)annotation;
-(CGPoint)zoomRelativePoint:(CGPoint)point;
-(void)selectAnnotation:(NAAnnotation *)annotation animated:(BOOL)animate;
-(void)centreOnPoint:(CGPoint)point animated:(BOOL)animate;
-(void)setupMap;

@property (nonatomic, readonly) CGFloat zoomLevel;
@property (nonatomic, assign) CGPoint centerPoint;
@property (nonatomic, weak) NSObject<NAMapViewDelegate> *mapViewDelegate;
@property (nonatomic, assign) CGSize originalSize;

@end


