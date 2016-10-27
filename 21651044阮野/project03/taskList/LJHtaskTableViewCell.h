//
//  LJHtaskTableViewCell.h
//  taskList
//
//  Created by 阮野 on 2016/10/20.
//  Copyright © 2016年 阮野. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol  LJHtaskTableViewCellDelegate;
@interface LJHtaskTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *taskLabel;
@property (strong, nonatomic) id<LJHtaskTableViewCellDelegate> delegate;

@end

@protocol LJHtaskTableViewCellDelegate <NSObject>

- (void)finishedTaskTableViewCell:(LJHtaskTableViewCell *)cell;

@end
