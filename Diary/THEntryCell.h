//
//  THEntryCell.h
//  Diary
//
//  Created by Kelvin Atawura on 15/07/14.
//  Copyright (c) 2014 recodedlabs. All rights reserved.
//



#import <UIKit/UIKit.h>

@class THDiaryEntry;

@interface THEntryCell : UITableViewCell

+ (CGFloat)heightForEntry:(THDiaryEntry *)entry;

- (void)configureCellForEntry:(THDiaryEntry *)entry;

@end
