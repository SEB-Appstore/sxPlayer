//
//  kXInfoViewController.h
//  AirVideo
//
//  Created by SEB on 3/25/14.
//  Copyright (c) 2014 SEB. All rights reserved.
//

#import <UIKit/UIKit.h>
@class KxMovieDecoder;


@interface kXInfoViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>
{
    IBOutlet UITableView         *_tableView;
   __unsafe_unretained KxMovieDecoder      *_decoder;
}
@property (nonatomic, assign)KxMovieDecoder      *_decoder;
@end
