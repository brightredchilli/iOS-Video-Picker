//
//  VideoTrimmerView.h
//  VideoPickerTestProject
//
//  Created by Ying Quan Tan on 3/2/12.
//  Copyright (c) 2012 Burning Hollow Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>

enum {
  VideoTrimmerActionNone = 0,
  VideoTrimmerActionMoveLeftHandle = 1 << 0,
  VideoTrimmerActionMoveRightHandle = 1 << 1,
  VideoTrimmerActionPan = 1 << 2
}; 
typedef NSUInteger VideoTrimmerActionType;

@protocol VideoTrimmerViewDelegate;

@interface VideoTrimmerView : UIView {
  NSArray *thumbnails;
  VideoTrimmerActionType actionType;
  id <VideoTrimmerViewDelegate>delegate;
}

@property(retain, nonatomic) UIImageView *overlayImageView;

@end

@protocol VideoTrimmerViewDelegate <NSObject>

- (void)videoTrimmer:(VideoTrimmerView *)trimmer selectionChanged:(NSRange)newSelection;

@end




/*
 
 - display the overlay on the screen, this is ok

 - make sure that each side of the image can drag fluidly
 
 - split images equally, have a max number of images. as images get smaller, make sure they are trimmed to only
 show the middle part.
 
 - handle a long press version, where the effective 'scale' of the video editing screen gets larger
 
 - disable any user interaction when this happens
 
 - there is a maximum of 30 spots you can select on the screen....hmmm..
 
 - there should be a fixed number of spots on the screen you can select. on the main screen, the video is segmented

 into X sections. you re able to scroll between them.
 
 - when you long press, you still only have X sections, only now they will effectively scroll frames instead of 
 skipping N number of frames each time.
 
 
 

 
 
*/
