//
//  ViewController.h
//  StreetAwareness
//
//  Created by Abhijit Sapkal on 04/03/17.
//  Copyright © 2017 Girish Developer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <PRAugmentedReality/PRARManager.h>

@interface ViewController : UIViewController<PRARManagerDelegate>
{
    IBOutlet UIView *loadingV;
}


@end

