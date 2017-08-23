//
//  SearchResultViewController.h
//  BenhVien-app
//
//  Created by test on 7/28/17.
//  Copyright © 2017 test. All rights reserved.
//

#import "BaseViewController.h"
#import "DetailsViewController.h"
#import "Hospital.h"
#import "HospitalTableViewCell.h"
#import "HomeViewController.h"
#import <SDWebImage/UIImageView+WebCache.h>

@interface SearchResultViewController : BaseViewController

@property (weak, nonatomic) IBOutlet UITableView *searchResultTableView;
@property (nonatomic ,strong) NSMutableArray *hospitals;

@end