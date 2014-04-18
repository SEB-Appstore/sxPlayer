//
//  ViewController.h
//  kxmovieapp
//
//  Created by Kolyvan on 11.10.12.
//  Copyright (c) 2012 Konstantin Boukreev . All rights reserved.
//
//  https://github.com/kolyvan/kxmovie
//  this file is part of KxMovie
//  KxMovie is licenced under the LGPL v3, see lgpl-3.0.txt

#import <UIKit/UIKit.h>

@class KxMovieDecoder;

extern NSString * const KxMovieParameterMinBufferedDuration;    // Float
extern NSString * const KxMovieParameterMaxBufferedDuration;    // Float
extern NSString * const KxMovieParameterDisableDeinterlacing;   // BOOL

@interface KxMovieViewController : UIViewController<UITableViewDataSource, UITableViewDelegate, UIDocumentInteractionControllerDelegate>
{
    BOOL downloadable;
    NSString* documentPath;
    NSString* videoPath;
    UIDocumentInteractionController* documentController;
}
-(void)updateDownload:(NSString*)titre;
@property (nonatomic,retain)NSString* documentPath;
@property (nonatomic,retain)NSString* videoPath;
+ (id) movieViewControllerWithContentPath: (NSString *) path
                               parameters: (NSDictionary *) parameters;
@property (nonatomic) BOOL downloadable;
@property (readonly) BOOL playing;
- (void) restartPlay;
- (void) play;
- (void) pause;

@end
