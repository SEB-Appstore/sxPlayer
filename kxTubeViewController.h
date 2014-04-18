//
//  kxTubeViewController.h
//  AirVideo
//
//  Created by SEB on 4/8/14.
//  Copyright (c) 2014 SEB. All rights reserved.
//

#import <UIKit/UIKit.h>
@class KxMovieDecoder, videoItem;

extern NSString * const KxTMovieParameterMinBufferedDuration;    // Float
extern NSString * const KxTMovieParameterMaxBufferedDuration;    // Float
extern NSString * const KxTMovieParameterDisableDeinterlacing;   // BOOL

@interface kxTubeViewController : UIViewController<UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate>
{
    BOOL downloadable;
    NSString* documentPath;
    NSString* videoPath;
    videoItem* item;
}
@property (nonatomic,retain)videoItem* item;
-(void)updateDownload:(NSString*)titre;
@property (nonatomic,retain)NSString* documentPath;
@property (nonatomic,retain)NSString* videoPath;
+ (id) movieViewControllerWithContentPath: (videoItem *) videoItem
                               parameters: (NSDictionary *) parameters;
@property (nonatomic) BOOL downloadable;
@property (readonly) BOOL playing;
- (void) restartPlay;
- (void) play;
- (void) pause;



@end
