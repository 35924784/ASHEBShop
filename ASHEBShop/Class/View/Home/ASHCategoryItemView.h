//
//  ASHCategoryItemView.h
//  ASHEBShop
//
//  Created by xmfish on 2018/8/1.
//  Copyright © 2018年 ash. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ASHTabModel.h"
@interface ASHCategoryItemView : UIView
@property(copy,nonatomic)void(^tapAction)(NSInteger tag);
- (void)setModel:(ASHTabItemModel*)model;
@end
