//
//  DetailViewController.h
//  MSBLogs_AllanXing
//
//  Created by AgnesT on 14-2-11.
//  Copyright (c) 2014年 allan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Item.h"


@interface DetailViewController : UIViewController{
    IBOutlet UIWebView * webView;
   
}

@property (nonatomic,weak) Item *ArticleItem;
@end
