//
//  TableViewCell.h
//  Bible Navigator
//
//  Created by Bat-Erdene, Ene on 5/20/19.
//  Copyright © 2019 Bat-Erdene, Ene. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@interface TableViewCell : UITableViewCell
-(NSDictionary *) FileJSON;
-(void) pulling_Data;

@end

NS_ASSUME_NONNULL_END
